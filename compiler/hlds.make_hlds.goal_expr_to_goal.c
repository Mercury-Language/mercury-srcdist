/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_util.mih"
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




#line 158 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 173 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0;

#line 176 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1;

#line 179 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2];

#line 182 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2];

#line 185 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2];

#line 188 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 191 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 193 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2);

#line 196 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 199 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 201 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 203 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3);

#line 1252 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1252 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1252 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1252 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1252 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1252 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);

#line 1238 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1238 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3);

#line 1230 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1230 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1230 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1230 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7);

#line 1225 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void);

#line 1181 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1181 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1181 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1181 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1181 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1181 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10);

#line 1167 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1167 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12);

#line 1102 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);

#line 965 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);

#line 919 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);

#line 890 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);

#line 857 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

#line 826 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

#line 736 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);

#line 683 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_19,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);

#line 671 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 671 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 671 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 671 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 671 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8);

#line 654 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_24,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_25,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_26,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_30,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_31,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);

#line 632 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(
#line 632 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_9,
#line 632 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_10,
#line 632 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_11,
#line 632 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_12,
#line 632 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_13,
#line 632 "goal_expr_to_goal.m"
  MR_String * hlds__make_hlds__goal_expr_to_goal__StateVarName_14,
#line 632 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_15,
#line 632 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_16);

#line 609 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(
#line 609 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_9,
#line 609 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_10,
#line 609 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_11,
#line 609 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_12,
#line 609 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_13,
#line 609 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_14,
#line 609 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_15,
#line 609 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_16);

#line 301 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
#line 301 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 301 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 301 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 301 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 301 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 301 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[7][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][12];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or \140^ field1 ^ ... ^ fieldN := Field\'"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected \140Field =^ field1 ^ ... ^ fieldN\'"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24])))
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



#line 983 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 991 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 999 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1008 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1016 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1024 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
  (MR_String) "loc_whole_goal",
  (MR_Integer) 0
};

#line 1030 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
  (MR_String) "loc_inside_atomic_goal",
  (MR_Integer) 1
};

#line 1036 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1
};

#line 1042 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0
};

#line 1048 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1054 "hlds.make_hlds.goal_expr_to_goal.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1071 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 1074 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1076 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2)
#line 1078 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1080 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1082 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1085 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1087 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal__succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2));
    }
#line 1090 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1092 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1094 "hlds.make_hlds.goal_expr_to_goal.c"
}

#line 1097 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 1100 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1102 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 1104 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3)
#line 1106 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1108 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1110 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1;

#line 1113 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1115 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3));
    }
#line 1118 "hlds.make_hlds.goal_expr_to_goal.c"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1));
#line 1120 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1122 "hlds.make_hlds.goal_expr_to_goal.c"
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
#line 1166 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1168 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1 == hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2);

#line 1171 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1173 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 23 "goal_expr_to_goal.m"
}

#line 1252 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1252 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1252 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1252 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1252 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1252 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1252 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26)
#line 1252 "goal_expr_to_goal.m"
{
#line 1257 "goal_expr_to_goal.m"
  {
#line 1257 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1257 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_18;
#line 1257 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_20;
#line 1257 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 1257 "goal_expr_to_goal.m"
    MR_Integer hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 1257 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;

#line 1258 "goal_expr_to_goal.m"
    {
#line 1258 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_12, &hlds__make_hlds__goal_expr_to_goal__HeadVars_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);
    }
#line 1261 "goal_expr_to_goal.m"
    {
#line 1261 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1261 "goal_expr_to_goal.m"
    {
#line 1261 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    }
#line 1262 "goal_expr_to_goal.m"
    {
#line 1262 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1262 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UpdateStr_11));
#line 1262 "goal_expr_to_goal.m"
    }
#line 1261 "goal_expr_to_goal.m"
    {
#line 1261 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 1261 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 1261 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_18));
#line 1261 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1261 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1261 "goal_expr_to_goal.m"
    }
#line 1263 "goal_expr_to_goal.m"
    {
#line 1263 "goal_expr_to_goal.m"
      MR_Word base;
#line 1263 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_14 = base;
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_20));
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_13));
#line 1263 "goal_expr_to_goal.m"
    }
#line 1257 "goal_expr_to_goal.m"
  }
#line 1252 "goal_expr_to_goal.m"
}

#line 1238 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1238 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3)
#line 1238 "goal_expr_to_goal.m"
{
#line 1243 "goal_expr_to_goal.m"
  {
#line 1243 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1243 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;

#line 1243 "goal_expr_to_goal.m"
#line 1243 "goal_expr_to_goal.m"
    switch (hlds__make_hlds__goal_expr_to_goal__AccessType_3) {
#line 1243 "goal_expr_to_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1243 "goal_expr_to_goal.m"
      case (MR_Integer) 0:
#line 1247 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26]);
#line 1243 "goal_expr_to_goal.m"
        break;
#line 1243 "goal_expr_to_goal.m"
      case (MR_Integer) 1:
#line 1244 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28]);
#line 1243 "goal_expr_to_goal.m"
        break;
#line 1243 "goal_expr_to_goal.m"
    }
#line 1243 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;
#line 1243 "goal_expr_to_goal.m"
  }
#line 1238 "goal_expr_to_goal.m"
}

#line 1230 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1230 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1230 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1230 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7)
#line 1230 "goal_expr_to_goal.m"
{
#line 1232 "goal_expr_to_goal.m"
  {
#line 1232 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1232 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1232 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_9;
#line 1232 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_10_10;
#line 1232 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_11_11;

#line 1233 "goal_expr_to_goal.m"
    {
#line 1233 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_10_10 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1233 "goal_expr_to_goal.m"
    {
#line 1233 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_10_10));
#line 1233 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Atom_5));
#line 1233 "goal_expr_to_goal.m"
    }
#line 1234 "goal_expr_to_goal.m"
    {
#line 1234 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arg_6));
#line 1234 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "goal_expr_to_goal.m"
    }
#line 1234 "goal_expr_to_goal.m"
    {
#line 1234 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_9, hlds__make_hlds__goal_expr_to_goal__V_11_11, hlds__make_hlds__goal_expr_to_goal__Context_7, &hlds__make_hlds__goal_expr_to_goal__Term_8);
    }
#line 1232 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1232 "goal_expr_to_goal.m"
  }
#line 1230 "goal_expr_to_goal.m"
}

#line 1225 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
#line 1225 "goal_expr_to_goal.m"
{
#line 1227 "goal_expr_to_goal.m"
  {
#line 1227 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1227 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1227 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_2_2;

#line 1228 "goal_expr_to_goal.m"
    {
#line 1228 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_2_2 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1228 "goal_expr_to_goal.m"
    {
#line 1228 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_2_2));
#line 1228 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1228 "goal_expr_to_goal.m"
    }
#line 1227 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1227 "goal_expr_to_goal.m"
  }
#line 1225 "goal_expr_to_goal.m"
}

#line 1181 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1181 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1181 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1181 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1181 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1181 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10)
#line 1181 "goal_expr_to_goal.m"
{
#line 1187 "goal_expr_to_goal.m"
  {
#line 1187 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1187 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__Catches_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "goal_expr_to_goal.m"
      if ((hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1208 "goal_expr_to_goal.m"
        {
#line 1208 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Rethrow_20;
#line 1208 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
#line 1208 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 1208 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

#line 1211 "goal_expr_to_goal.m"
          {
#line 1211 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_21_21 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1211 "goal_expr_to_goal.m"
          {
#line 1211 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
#line 1211 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
#line 1211 "goal_expr_to_goal.m"
          }
#line 1212 "goal_expr_to_goal.m"
          {
#line 1212 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7);
          }
#line 1213 "goal_expr_to_goal.m"
          {
#line 1213 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1213 "goal_expr_to_goal.m"
          }
#line 1212 "goal_expr_to_goal.m"
          {
#line 1212 "goal_expr_to_goal.m"
            MR_Word base;
#line 1212 "goal_expr_to_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Rethrow_20));
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_24_24));
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1212 "goal_expr_to_goal.m"
          }
#line 1208 "goal_expr_to_goal.m"
        }
#line 1207 "goal_expr_to_goal.m"
      else
#line 1197 "goal_expr_to_goal.m"
        {
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16;
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17;
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_18;
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19;
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, (MR_Integer) 0)));
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_42;
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_43_43;
#line 1197 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_44_44;

#line 1197 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 0)));
#line 1197 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 1)));
#line 1201 "goal_expr_to_goal.m"
          {
#line 1201 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Context_18 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17);
          }
#line 1203 "goal_expr_to_goal.m"
          {
#line 1203 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16));
#line 1203 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1203 "goal_expr_to_goal.m"
          }
#line 1233 "goal_expr_to_goal.m"
          {
#line 1233 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_43_43 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1233 "goal_expr_to_goal.m"
          {
#line 1233 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_43_43));
#line 1233 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
#line 1233 "goal_expr_to_goal.m"
          }
#line 1234 "goal_expr_to_goal.m"
          {
#line 1234 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1234 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "goal_expr_to_goal.m"
          }
#line 1234 "goal_expr_to_goal.m"
          {
#line 1234 "goal_expr_to_goal.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_42, hlds__make_hlds__goal_expr_to_goal__V_44_44, hlds__make_hlds__goal_expr_to_goal__Context_18, &hlds__make_hlds__goal_expr_to_goal__V_29_29);
          }
#line 1202 "goal_expr_to_goal.m"
          {
#line 1202 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1202 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 1202 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 1202 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1202 "goal_expr_to_goal.m"
          }
#line 1206 "goal_expr_to_goal.m"
          {
#line 1206 "goal_expr_to_goal.m"
            MR_Word base;
#line 1206 "goal_expr_to_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1206 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1206 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19));
#line 1206 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17));
#line 1206 "goal_expr_to_goal.m"
          }
#line 1197 "goal_expr_to_goal.m"
        }
#line 1187 "goal_expr_to_goal.m"
    else
#line 1187 "goal_expr_to_goal.m"
      {
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPattern_11;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstGoal_12;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__RestCatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 1)));
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_14;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 0)));
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_50_50;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_51_51;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_52_52;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_54_54;
#line 1187 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_55_55;

#line 1187 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstPattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 0)));
#line 1187 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 1)));
#line 1188 "goal_expr_to_goal.m"
        {
#line 1188 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7, hlds__make_hlds__goal_expr_to_goal__RestCatches_13, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, &hlds__make_hlds__goal_expr_to_goal__ElseGoal_14);
        }
#line 1221 "goal_expr_to_goal.m"
        {
#line 1221 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1222 "goal_expr_to_goal.m"
        {
#line 1222 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_52_52 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
        }
#line 1222 "goal_expr_to_goal.m"
        {
#line 1222 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_52_52));
#line 1222 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
#line 1222 "goal_expr_to_goal.m"
        }
#line 1223 "goal_expr_to_goal.m"
        {
#line 1223 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPattern_11));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "goal_expr_to_goal.m"
        }
#line 1223 "goal_expr_to_goal.m"
        {
#line 1223 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_55_55));
#line 1223 "goal_expr_to_goal.m"
        }
#line 1221 "goal_expr_to_goal.m"
        {
#line 1221 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_50_50));
#line 1221 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_51_51));
#line 1221 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_54_54));
#line 1221 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1221 "goal_expr_to_goal.m"
        }
#line 1192 "goal_expr_to_goal.m"
        {
#line 1192 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_33_33 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1192 "goal_expr_to_goal.m"
        {
#line 1192 "goal_expr_to_goal.m"
          MR_Word base;
#line 1192 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1192 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1192 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1192 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15));
#line 1192 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstGoal_12));
#line 1192 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_14));
#line 1192 "goal_expr_to_goal.m"
        }
#line 1187 "goal_expr_to_goal.m"
      }
#line 1187 "goal_expr_to_goal.m"
  }
#line 1181 "goal_expr_to_goal.m"
}

#line 1167 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1167 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1167 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12)
#line 1167 "goal_expr_to_goal.m"
{
#line 1172 "goal_expr_to_goal.m"
  {
#line 1172 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1172 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13;
#line 1172 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CatchChain_14;
#line 1172 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_15_15;
#line 1172 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_22;
#line 1172 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 1172 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

#line 1233 "goal_expr_to_goal.m"
    {
#line 1233 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1233 "goal_expr_to_goal.m"
    {
#line 1233 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 1233 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 1) = ((MR_Box) ((MR_String) "exception"));
#line 1233 "goal_expr_to_goal.m"
    }
#line 1234 "goal_expr_to_goal.m"
    {
#line 1234 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8));
#line 1234 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "goal_expr_to_goal.m"
    }
#line 1234 "goal_expr_to_goal.m"
    {
#line 1234 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_22, hlds__make_hlds__goal_expr_to_goal__V_24_24, hlds__make_hlds__goal_expr_to_goal__Context_11, &hlds__make_hlds__goal_expr_to_goal__V_15_15);
    }
#line 1173 "goal_expr_to_goal.m"
    {
#line 1173 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1173 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7));
#line 1173 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_15_15));
#line 1173 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1173 "goal_expr_to_goal.m"
    }
#line 1177 "goal_expr_to_goal.m"
    {
#line 1177 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8, hlds__make_hlds__goal_expr_to_goal__Catches_9, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10, &hlds__make_hlds__goal_expr_to_goal__CatchChain_14);
    }
#line 1179 "goal_expr_to_goal.m"
    {
#line 1179 "goal_expr_to_goal.m"
      MR_Word base;
#line 1179 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_12 = base;
#line 1179 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1179 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13));
#line 1179 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchChain_14));
#line 1179 "goal_expr_to_goal.m"
    }
#line 1172 "goal_expr_to_goal.m"
  }
#line 1167 "goal_expr_to_goal.m"
}

#line 1102 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
#line 1102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
#line 1102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64)
#line 1102 "goal_expr_to_goal.m"
{
#line 1112 "goal_expr_to_goal.m"
  {
#line 1112 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_37;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_38;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_42;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_51;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_52;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_75_75;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_84_84;
#line 1112 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_93_93;

#line 1113 "goal_expr_to_goal.m"
    {
#line 1113 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66);
    }
#line 1114 "goal_expr_to_goal.m"
    {
#line 1114 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67);
    }
#line 1116 "goal_expr_to_goal.m"
    {
#line 1116 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1116 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1116 "goal_expr_to_goal.m"
    }
#line 1117 "goal_expr_to_goal.m"
    {
#line 1117 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_38));
#line 1117 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1117 "goal_expr_to_goal.m"
    }
#line 1118 "goal_expr_to_goal.m"
    {
#line 1118 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
#line 1118 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1118 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1118 "goal_expr_to_goal.m"
    }
#line 1120 "goal_expr_to_goal.m"
    {
#line 1120 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_42);
    }
#line 1228 "goal_expr_to_goal.m"
    {
#line 1228 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_93_93 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1228 "goal_expr_to_goal.m"
    {
#line 1228 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_93_93));
#line 1228 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1228 "goal_expr_to_goal.m"
    }
#line 1124 "goal_expr_to_goal.m"
    {
#line 1124 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1124 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1124 "goal_expr_to_goal.m"
    }
#line 1123 "goal_expr_to_goal.m"
    {
#line 1123 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1123 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_71_71));
#line 1123 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_72_72));
#line 1123 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1123 "goal_expr_to_goal.m"
    }
#line 1129 "goal_expr_to_goal.m"
    {
#line 1129 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_75_75 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, hlds__make_hlds__goal_expr_to_goal__Context_28);
    }
#line 1127 "goal_expr_to_goal.m"
    {
#line 1127 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1127 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1127 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_75_75));
#line 1127 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1127 "goal_expr_to_goal.m"
    }
#line 1135 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "goal_expr_to_goal.m"
      {
#line 1136 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
#line 1136 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_80_80;

#line 1139 "goal_expr_to_goal.m"
        {
#line 1139 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
#line 1139 "goal_expr_to_goal.m"
        }
#line 1140 "goal_expr_to_goal.m"
        {
#line 1140 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
#line 1140 "goal_expr_to_goal.m"
        }
#line 1138 "goal_expr_to_goal.m"
        {
#line 1138 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_78_78));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_80_80));
#line 1138 "goal_expr_to_goal.m"
        }
#line 1136 "goal_expr_to_goal.m"
      }
#line 1135 "goal_expr_to_goal.m"
    else
#line 1132 "goal_expr_to_goal.m"
      {
#line 1132 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25, (MR_Integer) 0)));

#line 1133 "goal_expr_to_goal.m"
        {
#line 1133 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_45));
#line 1133 "goal_expr_to_goal.m"
        }
#line 1132 "goal_expr_to_goal.m"
      }
#line 1143 "goal_expr_to_goal.m"
    {
#line 1143 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1143 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44));
#line 1143 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46));
#line 1143 "goal_expr_to_goal.m"
    }
#line 1147 "goal_expr_to_goal.m"
    {
#line 1147 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, hlds__make_hlds__goal_expr_to_goal__Catches_26, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27, hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48);
    }
#line 1154 "goal_expr_to_goal.m"
    {
#line 1154 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1154 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1154 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47));
#line 1154 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48));
#line 1154 "goal_expr_to_goal.m"
    }
#line 1152 "goal_expr_to_goal.m"
    {
#line 1152 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1152 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43));
#line 1152 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_84_84));
#line 1152 "goal_expr_to_goal.m"
    }
#line 1159 "goal_expr_to_goal.m"
    {
#line 1159 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_22, hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_29, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);
    }
#line 1163 "goal_expr_to_goal.m"
    {
#line 1163 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ShortHand_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1163 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50));
#line 1163 "goal_expr_to_goal.m"
    }
#line 1164 "goal_expr_to_goal.m"
    {
#line 1164 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1164 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_51));
#line 1164 "goal_expr_to_goal.m"
    }
#line 1165 "goal_expr_to_goal.m"
    {
#line 1165 "goal_expr_to_goal.m"
      MR_Word base;
#line 1165 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_30 = base;
#line 1165 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_52));
#line 1165 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_42));
#line 1165 "goal_expr_to_goal.m"
    }
#line 1112 "goal_expr_to_goal.m"
  }
#line 1102 "goal_expr_to_goal.m"
}

#line 965 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 965 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 965 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79)
#line 965 "goal_expr_to_goal.m"
{
#line 975 "goal_expr_to_goal.m"
  {
#line 975 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_39;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_40;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_44;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOUnify_51;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVars_66;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_67;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_99_99;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_112_112;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_114_114;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_122_122;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_139_139;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_140_140;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_141_141;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_150_150;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_151_151;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_152_152;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_157_157;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_158_158;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_160_160;
#line 975 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_161_161;

#line 976 "goal_expr_to_goal.m"
    {
#line 976 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81);
    }
#line 977 "goal_expr_to_goal.m"
    {
#line 977 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82);
    }
#line 979 "goal_expr_to_goal.m"
    {
#line 979 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 979 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 979 "goal_expr_to_goal.m"
    }
#line 980 "goal_expr_to_goal.m"
    {
#line 980 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_40));
#line 980 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 980 "goal_expr_to_goal.m"
    }
#line 981 "goal_expr_to_goal.m"
    {
#line 981 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 981 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
#line 981 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 981 "goal_expr_to_goal.m"
    }
#line 983 "goal_expr_to_goal.m"
    {
#line 983 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_44);
    }
#line 986 "goal_expr_to_goal.m"
    {
#line 986 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    }
#line 987 "goal_expr_to_goal.m"
    {
#line 987 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "goal_expr_to_goal.m"
    }
#line 986 "goal_expr_to_goal.m"
    {
#line 986 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 986 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 986 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
#line 986 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_87_87));
#line 986 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 3) = ((MR_Box) ((MR_Integer) 0));
#line 986 "goal_expr_to_goal.m"
    }
#line 988 "goal_expr_to_goal.m"
    {
#line 988 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95);
    }
#line 993 "goal_expr_to_goal.m"
    {
#line 993 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98);
    }
#line 1001 "goal_expr_to_goal.m"
    {
#line 1001 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_99_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, hlds__make_hlds__goal_expr_to_goal__Context_30);
    }
#line 999 "goal_expr_to_goal.m"
    {
#line 999 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 999 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 999 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 999 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_99_99));
#line 999 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 3) = ((MR_Box) ((MR_Integer) 0));
#line 999 "goal_expr_to_goal.m"
    }
#line 1003 "goal_expr_to_goal.m"
    {
#line 1003 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107);
    }
#line 1013 "goal_expr_to_goal.m"
    {
#line 1013 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1013 "goal_expr_to_goal.m"
    }
#line 1013 "goal_expr_to_goal.m"
    {
#line 1013 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_112_112));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "goal_expr_to_goal.m"
    }
#line 1013 "goal_expr_to_goal.m"
    {
#line 1013 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1013 "goal_expr_to_goal.m"
    }
#line 1014 "goal_expr_to_goal.m"
    {
#line 1014 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1014 "goal_expr_to_goal.m"
    }
#line 1012 "goal_expr_to_goal.m"
    {
#line 1012 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOUnify_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1012 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_108_108));
#line 1012 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
#line 1012 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1012 "goal_expr_to_goal.m"
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_122_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_122_122, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOUnify_51));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_26));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_122_122));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1017 "goal_expr_to_goal.m"
    {
#line 1017 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128);
    }
#line 1022 "goal_expr_to_goal.m"
    {
#line 1022 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131);
    }
#line 1026 "goal_expr_to_goal.m"
    {
#line 1026 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1026 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1026 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_27));
#line 1026 "goal_expr_to_goal.m"
    }
#line 1027 "goal_expr_to_goal.m"
    {
#line 1027 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138);
    }
#line 1038 "goal_expr_to_goal.m"
    {
#line 1038 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56));
#line 1038 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "goal_expr_to_goal.m"
    }
#line 1038 "goal_expr_to_goal.m"
    {
#line 1038 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53));
#line 1038 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_141_141));
#line 1038 "goal_expr_to_goal.m"
    }
#line 1038 "goal_expr_to_goal.m"
    {
#line 1038 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50));
#line 1038 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_140_140));
#line 1038 "goal_expr_to_goal.m"
    }
#line 1037 "goal_expr_to_goal.m"
    {
#line 1037 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_139_139, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57);
    }
#line 1045 "goal_expr_to_goal.m"
    {
#line 1045 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, hlds__make_hlds__goal_expr_to_goal__Catches0_28, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29, hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59);
    }
#line 1047 "goal_expr_to_goal.m"
    {
#line 1047 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);
    }
#line 1055 "goal_expr_to_goal.m"
    {
#line 1055 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57));
#line 1055 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_150_150, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58));
#line 1055 "goal_expr_to_goal.m"
    }
#line 1057 "goal_expr_to_goal.m"
    {
#line 1057 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_152_152, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60));
#line 1057 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_152_152, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61));
#line 1057 "goal_expr_to_goal.m"
    }
#line 1059 "goal_expr_to_goal.m"
    {
#line 1059 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_151_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_152_152));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1059 "goal_expr_to_goal.m"
    }
#line 1056 "goal_expr_to_goal.m"
    {
#line 1056 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_150_150));
#line 1056 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_151_151));
#line 1056 "goal_expr_to_goal.m"
    }
#line 1060 "goal_expr_to_goal.m"
    {
#line 1060 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71);
    }
#line 1062 "goal_expr_to_goal.m"
    {
#line 1062 "goal_expr_to_goal.m"
      hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64);
    }
#line 1065 "goal_expr_to_goal.m"
    {
#line 1065 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64));
#line 1065 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1065 "goal_expr_to_goal.m"
    }
#line 1065 "goal_expr_to_goal.m"
    {
#line 1065 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46));
#line 1065 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_158_158));
#line 1065 "goal_expr_to_goal.m"
    }
#line 1065 "goal_expr_to_goal.m"
    {
#line 1065 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_157_157, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65);
    }
#line 1068 "goal_expr_to_goal.m"
    {
#line 1068 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47));
#line 1068 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54));
#line 1068 "goal_expr_to_goal.m"
    }
#line 1069 "goal_expr_to_goal.m"
    {
#line 1069 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVars_66));
#line 1069 "goal_expr_to_goal.m"
    }
#line 1069 "goal_expr_to_goal.m"
    {
#line 1069 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_160_160 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_161_161));
#line 1069 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 1069 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65));
#line 1069 "goal_expr_to_goal.m"
    }
#line 1069 "goal_expr_to_goal.m"
    {
#line 1069 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1069 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_160_160));
#line 1069 "goal_expr_to_goal.m"
    }
#line 1071 "goal_expr_to_goal.m"
    {
#line 1071 "goal_expr_to_goal.m"
      MR_Word base;
#line 1071 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_32 = base;
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_67));
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_44));
#line 1071 "goal_expr_to_goal.m"
    }
#line 975 "goal_expr_to_goal.m"
  }
#line 965 "goal_expr_to_goal.m"
}

#line 919 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 919 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 919 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15)
#line 919 "goal_expr_to_goal.m"
{
#line 926 "goal_expr_to_goal.m"
  {
#line 926 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 926 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 926 "goal_expr_to_goal.m"
      {
#line 926 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14;
#line 927 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12;
#line 927 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10;
#line 927 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8;
#line 926 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7 = hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6;
#line 926 "goal_expr_to_goal.m"
      }
#line 926 "goal_expr_to_goal.m"
    else
#line 930 "goal_expr_to_goal.m"
      {
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_38;
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates_39;
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46;
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47;
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58;
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59;
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60;
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61;
#line 930 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62;

#line 931 "goal_expr_to_goal.m"
        {
#line 931 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goal_35, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47, hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62);
        }
#line 934 "goal_expr_to_goal.m"
        {
#line 934 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__DisjState_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46));
#line 934 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47));
#line 934 "goal_expr_to_goal.m"
        }
#line 935 "goal_expr_to_goal.m"
        {
#line 935 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goals_36, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__DisjStates_39, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);
        }
#line 929 "goal_expr_to_goal.m"
        {
#line 929 "goal_expr_to_goal.m"
          MR_Word base;
#line 929 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = base;
#line 929 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_38));
#line 929 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates_39));
#line 929 "goal_expr_to_goal.m"
        }
#line 930 "goal_expr_to_goal.m"
      }
#line 926 "goal_expr_to_goal.m"
  }
#line 919 "goal_expr_to_goal.m"
}

#line 890 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 890 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 890 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44)
#line 890 "goal_expr_to_goal.m"
{
#line 911 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 911 "goal_expr_to_goal.m"
    {
#line 911 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 911 "goal_expr_to_goal.m"
      {
#line 911 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 911 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 911 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 899 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 899 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 899 "goal_expr_to_goal.m"
          {
#line 899 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 899 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 899 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 907 "goal_expr_to_goal.m"
            {
#line 907 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 907 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
#line 907 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
#line 907 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
#line 907 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
#line 907 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

#line 905 "goal_expr_to_goal.m"
              {
#line 905 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_30, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjStates0_20, &hlds__make_hlds__goal_expr_to_goal__DisjStates1_31, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49);
              }
#line 908 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 908 "goal_expr_to_goal.m"
              {
#line 908 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 908 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 908 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
#line 908 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
#line 908 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
#line 908 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
#line 908 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

#line 908 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43;
#line 908 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41;
#line 908 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39;
#line 908 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37;
#line 908 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35;
#line 908 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__DisjStates0_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20;
#line 908 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 908 "goal_expr_to_goal.m"
              }
#line 908 "goal_expr_to_goal.m"
              continue;
#line 907 "goal_expr_to_goal.m"
            }
#line 899 "goal_expr_to_goal.m"
          }
#line 899 "goal_expr_to_goal.m"
        else
#line 914 "goal_expr_to_goal.m"
          {
#line 914 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32;
#line 914 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33;
#line 914 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_34;

#line 912 "goal_expr_to_goal.m"
            {
#line 912 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal_18, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);
            }
#line 915 "goal_expr_to_goal.m"
            {
#line 915 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__DisjState_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 915 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32));
#line 915 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33));
#line 915 "goal_expr_to_goal.m"
            }
#line 916 "goal_expr_to_goal.m"
            {
#line 916 "goal_expr_to_goal.m"
              MR_Word base;
#line 916 "goal_expr_to_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__DisjStates_21 = base;
#line 916 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_34));
#line 916 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates0_20));
#line 916 "goal_expr_to_goal.m"
            }
#line 914 "goal_expr_to_goal.m"
          }
#line 911 "goal_expr_to_goal.m"
      }
#line 911 "goal_expr_to_goal.m"
      break;
#line 911 "goal_expr_to_goal.m"
    }
#line 890 "goal_expr_to_goal.m"
}

#line 857 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 857 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 857 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
#line 857 "goal_expr_to_goal.m"
{
#line 873 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 873 "goal_expr_to_goal.m"
    {
#line 873 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 873 "goal_expr_to_goal.m"
      {
#line 873 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 873 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 873 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 866 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 866 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 866 "goal_expr_to_goal.m"
          {
#line 866 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
#line 866 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
#line 866 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 3)));
#line 869 "goal_expr_to_goal.m"
            {
#line 869 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 869 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 869 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 869 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 869 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 869 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 869 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 867 "goal_expr_to_goal.m"
              {
#line 867 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
#line 870 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 870 "goal_expr_to_goal.m"
              {
#line 870 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 870 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 870 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 870 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 870 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 870 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 870 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 870 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 870 "goal_expr_to_goal.m"
              }
#line 870 "goal_expr_to_goal.m"
              continue;
#line 869 "goal_expr_to_goal.m"
            }
#line 866 "goal_expr_to_goal.m"
          }
#line 866 "goal_expr_to_goal.m"
        else
#line 875 "goal_expr_to_goal.m"
          {
#line 875 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
#line 875 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
#line 876 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 880 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
#line 877 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 874 "goal_expr_to_goal.m"
            {
#line 874 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
#line 876 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
#line 876 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
#line 877 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 877 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 877 "goal_expr_to_goal.m"
              {
#line 877 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
#line 877 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
#line 877 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 1);
#line 877 "goal_expr_to_goal.m"
              }
#line 880 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 878 "goal_expr_to_goal.m"
              {
#line 878 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 878 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

#line 879 "goal_expr_to_goal.m"
                {
#line 879 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
#line 878 "goal_expr_to_goal.m"
                {
#line 878 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
#line 878 "goal_expr_to_goal.m"
              }
#line 880 "goal_expr_to_goal.m"
            else
#line 881 "goal_expr_to_goal.m"
              {
#line 881 "goal_expr_to_goal.m"
                {
#line 881 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
#line 881 "goal_expr_to_goal.m"
              }
#line 875 "goal_expr_to_goal.m"
          }
#line 873 "goal_expr_to_goal.m"
      }
#line 873 "goal_expr_to_goal.m"
      break;
#line 873 "goal_expr_to_goal.m"
    }
#line 857 "goal_expr_to_goal.m"
}

#line 826 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 826 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 826 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
#line 826 "goal_expr_to_goal.m"
{
#line 842 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 842 "goal_expr_to_goal.m"
    {
#line 842 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 842 "goal_expr_to_goal.m"
      {
#line 842 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 2)));
#line 842 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 842 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 835 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 835 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 835 "goal_expr_to_goal.m"
          {
#line 835 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 835 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
#line 835 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
#line 838 "goal_expr_to_goal.m"
            {
#line 838 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 838 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 838 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 838 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 838 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 838 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 838 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 836 "goal_expr_to_goal.m"
              {
#line 836 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
#line 839 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 839 "goal_expr_to_goal.m"
              {
#line 839 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 839 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 839 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 839 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 839 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 839 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 839 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 839 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 839 "goal_expr_to_goal.m"
              }
#line 839 "goal_expr_to_goal.m"
              continue;
#line 838 "goal_expr_to_goal.m"
            }
#line 835 "goal_expr_to_goal.m"
          }
#line 835 "goal_expr_to_goal.m"
        else
#line 844 "goal_expr_to_goal.m"
          {
#line 844 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
#line 844 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
#line 845 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 849 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
#line 846 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 843 "goal_expr_to_goal.m"
            {
#line 843 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
#line 845 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
#line 845 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
#line 846 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 846 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 846 "goal_expr_to_goal.m"
              {
#line 846 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
#line 846 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
#line 846 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 0);
#line 846 "goal_expr_to_goal.m"
              }
#line 849 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 847 "goal_expr_to_goal.m"
              {
#line 847 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 847 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

#line 848 "goal_expr_to_goal.m"
                {
#line 848 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
#line 847 "goal_expr_to_goal.m"
                {
#line 847 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
#line 847 "goal_expr_to_goal.m"
              }
#line 849 "goal_expr_to_goal.m"
            else
#line 850 "goal_expr_to_goal.m"
              {
#line 850 "goal_expr_to_goal.m"
                {
#line 850 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
#line 850 "goal_expr_to_goal.m"
              }
#line 844 "goal_expr_to_goal.m"
          }
#line 842 "goal_expr_to_goal.m"
      }
#line 842 "goal_expr_to_goal.m"
      break;
#line 842 "goal_expr_to_goal.m"
    }
#line 826 "goal_expr_to_goal.m"
}

#line 736 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64,
#line 736 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65,
#line 736 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66)
#line 736 "goal_expr_to_goal.m"
{
#line 745 "goal_expr_to_goal.m"
  {
#line 745 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 745 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ArgVars_29;
#line 745 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33;
#line 745 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVar_34;
#line 745 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35;
#line 745 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
#line 745 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68;
#line 745 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69;
#line 752 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
#line 752 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
#line 752 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
#line 748 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_70_70;
#line 748 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 748 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;

#line 746 "goal_expr_to_goal.m"
    {
#line 746 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, &hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69);
    }
#line 748 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgVars_29)) == (MR_mktag((MR_Integer) 1)));
#line 748 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 748 "goal_expr_to_goal.m"
      {
#line 748 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 0)));
#line 748 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 1)));
#line 748 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 748 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 748 "goal_expr_to_goal.m"
          {
#line 748 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_70_70, (MR_Integer) 0)));
#line 748 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_70_70, (MR_Integer) 1)));
#line 748 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 748 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 748 "goal_expr_to_goal.m"
              {
#line 748 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, (MR_Integer) 0)));
#line 748 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, (MR_Integer) 1)));
#line 748 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "goal_expr_to_goal.m"
              }
#line 748 "goal_expr_to_goal.m"
          }
#line 748 "goal_expr_to_goal.m"
      }
#line 752 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 749 "goal_expr_to_goal.m"
      {
#line 749 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33 = hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
#line 750 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__TermInputVar_34 = hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
#line 751 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35 = hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
#line 749 "goal_expr_to_goal.m"
      }
#line 752 "goal_expr_to_goal.m"
    else
#line 753 "goal_expr_to_goal.m"
      {
#line 753 "goal_expr_to_goal.m"
        {
#line 753 "goal_expr_to_goal.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
#line 753 "goal_expr_to_goal.m"
          return;
        }
#line 753 "goal_expr_to_goal.m"
      }
#line 787 "goal_expr_to_goal.m"
#line 787 "goal_expr_to_goal.m"
    switch (hlds__make_hlds__goal_expr_to_goal__AccessType_18) {
#line 787 "goal_expr_to_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 787 "goal_expr_to_goal.m"
      case (MR_Integer) 0:
#line 788 "goal_expr_to_goal.m"
        {
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_94_94;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_95_95;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_96_96;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_97_97;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_137;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_146;
#line 788 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_147;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150;
#line 788 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_151;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53;
#line 799 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
#line 799 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
#line 796 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TC_54;

#line 789 "goal_expr_to_goal.m"
          {
#line 789 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_137, &hlds__make_hlds__goal_expr_to_goal__V_78_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84);
          }
#line 791 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 0)));
#line 791 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 1)));
#line 794 "goal_expr_to_goal.m"
          {
#line 794 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 794 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_137));
#line 794 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "goal_expr_to_goal.m"
          }
#line 796 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 796 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 796 "goal_expr_to_goal.m"
            {
#line 796 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 1)));
#line 796 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 2)));
#line 796 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TC_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 3)));
#line 797 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_146 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
#line 798 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_147 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
#line 796 "goal_expr_to_goal.m"
            }
#line 796 "goal_expr_to_goal.m"
          else
#line 800 "goal_expr_to_goal.m"
            {
#line 800 "goal_expr_to_goal.m"
              {
#line 800 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 800 "goal_expr_to_goal.m"
                return;
              }
#line 800 "goal_expr_to_goal.m"
            }
#line 803 "goal_expr_to_goal.m"
          {
#line 803 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 803 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 0) = ((MR_Box) ((MR_Integer) 1));
#line 803 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_146));
#line 803 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_147));
#line 803 "goal_expr_to_goal.m"
          }
#line 804 "goal_expr_to_goal.m"
          {
#line 804 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 804 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149));
#line 804 "goal_expr_to_goal.m"
          }
#line 804 "goal_expr_to_goal.m"
          {
#line 804 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 804 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
#line 804 "goal_expr_to_goal.m"
          }
#line 811 "goal_expr_to_goal.m"
          {
#line 811 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 811 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 0) = ((MR_Box) ((MR_Integer) 2));
#line 811 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141));
#line 811 "goal_expr_to_goal.m"
          }
#line 812 "goal_expr_to_goal.m"
          {
#line 812 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 812 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 0) = ((MR_Box) ((MR_Integer) 1));
#line 812 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150));
#line 812 "goal_expr_to_goal.m"
          }
#line 814 "goal_expr_to_goal.m"
          {
#line 814 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 814 "goal_expr_to_goal.m"
          }
#line 812 "goal_expr_to_goal.m"
          {
#line 812 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
#line 812 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_97_97));
#line 812 "goal_expr_to_goal.m"
          }
#line 811 "goal_expr_to_goal.m"
          {
#line 811 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_94_94));
#line 811 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_95_95));
#line 811 "goal_expr_to_goal.m"
          }
#line 815 "goal_expr_to_goal.m"
          {
#line 815 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
#line 815 "goal_expr_to_goal.m"
            return;
          }
#line 788 "goal_expr_to_goal.m"
        }
#line 787 "goal_expr_to_goal.m"
        break;
#line 787 "goal_expr_to_goal.m"
      case (MR_Integer) 1:
#line 756 "goal_expr_to_goal.m"
        {
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_36;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_47;
#line 756 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_48;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_52;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_122_122;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_123_123;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_125_125;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_126_126;
#line 756 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_127_127;
#line 770 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
#line 770 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
#line 767 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TypeCtor_46;

#line 757 "goal_expr_to_goal.m"
          {
#line 757 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_36, &hlds__make_hlds__goal_expr_to_goal__V_108_108, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114);
          }
#line 759 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 0)));
#line 759 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 1)));
#line 763 "goal_expr_to_goal.m"
          {
#line 763 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 763 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37));
#line 763 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38));
#line 763 "goal_expr_to_goal.m"
          }
#line 766 "goal_expr_to_goal.m"
          {
#line 766 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 766 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_36));
#line 766 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "goal_expr_to_goal.m"
          }
#line 767 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Functor_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 767 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 767 "goal_expr_to_goal.m"
            {
#line 767 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 1)));
#line 767 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 2)));
#line 767 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TypeCtor_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 3)));
#line 768 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_47 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
#line 769 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_48 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
#line 767 "goal_expr_to_goal.m"
            }
#line 767 "goal_expr_to_goal.m"
          else
#line 771 "goal_expr_to_goal.m"
            {
#line 771 "goal_expr_to_goal.m"
              {
#line 771 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 771 "goal_expr_to_goal.m"
                return;
              }
#line 771 "goal_expr_to_goal.m"
            }
#line 776 "goal_expr_to_goal.m"
          {
#line 776 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 776 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 0) = ((MR_Box) ((MR_Integer) 1));
#line 776 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_47));
#line 776 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_48));
#line 776 "goal_expr_to_goal.m"
          }
#line 777 "goal_expr_to_goal.m"
          {
#line 777 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 777 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50));
#line 777 "goal_expr_to_goal.m"
          }
#line 777 "goal_expr_to_goal.m"
          {
#line 777 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 777 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_122_122));
#line 777 "goal_expr_to_goal.m"
          }
#line 780 "goal_expr_to_goal.m"
          {
#line 780 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 0) = ((MR_Box) ((MR_Integer) 2));
#line 780 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41));
#line 780 "goal_expr_to_goal.m"
          }
#line 781 "goal_expr_to_goal.m"
          {
#line 781 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 0) = ((MR_Box) ((MR_Integer) 1));
#line 781 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43));
#line 781 "goal_expr_to_goal.m"
          }
#line 782 "goal_expr_to_goal.m"
          {
#line 782 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 0) = ((MR_Box) ((MR_Integer) 3));
#line 782 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51));
#line 782 "goal_expr_to_goal.m"
          }
#line 783 "goal_expr_to_goal.m"
          {
#line 783 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_127_127));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "goal_expr_to_goal.m"
          }
#line 781 "goal_expr_to_goal.m"
          {
#line 781 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_125_125));
#line 781 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_126_126));
#line 781 "goal_expr_to_goal.m"
          }
#line 780 "goal_expr_to_goal.m"
          {
#line 780 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_123_123));
#line 780 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
#line 780 "goal_expr_to_goal.m"
          }
#line 784 "goal_expr_to_goal.m"
          {
#line 784 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
#line 784 "goal_expr_to_goal.m"
            return;
          }
#line 756 "goal_expr_to_goal.m"
        }
#line 787 "goal_expr_to_goal.m"
        break;
#line 787 "goal_expr_to_goal.m"
    }
#line 745 "goal_expr_to_goal.m"
  }
#line 736 "goal_expr_to_goal.m"
}

#line 683 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_19,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55,
#line 683 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56,
#line 683 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57)
#line 683 "goal_expr_to_goal.m"
{
#line 692 "goal_expr_to_goal.m"
  {
#line 692 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 692 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;
#line 724 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34;
#line 724 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35;
#line 724 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_59_59;
#line 695 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 695 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 695 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_58_58;
#line 695 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_60_60;
#line 695 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_61_61;
#line 695 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32;
#line 695 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33;

#line 693 "goal_expr_to_goal.m"
    {
#line 693 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
    }
#line 695 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 695 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 695 "goal_expr_to_goal.m"
      {
#line 695 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__LHSTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 0)));
#line 695 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 1)));
#line 695 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 695 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 695 "goal_expr_to_goal.m"
          {
#line 695 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__RHSTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_58_58, (MR_Integer) 0)));
#line 695 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_58_58, (MR_Integer) 1)));
#line 695 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 695 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 695 "goal_expr_to_goal.m"
              {
#line 695 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 0)));
#line 695 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 1)));
#line 695 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 695 "goal_expr_to_goal.m"
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 695 "goal_expr_to_goal.m"
                  {
#line 695 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 0)));
#line 695 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 1)));
#line 695 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "goal_expr_to_goal.m"
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 700 "goal_expr_to_goal.m"
#line 700 "goal_expr_to_goal.m"
                      switch (hlds__make_hlds__goal_expr_to_goal__AccessType_19) {
#line 700 "goal_expr_to_goal.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 700 "goal_expr_to_goal.m"
                        case (MR_Integer) 0:
#line 697 "goal_expr_to_goal.m"
                          {
#line 698 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 699 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35 = hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 697 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 697 "goal_expr_to_goal.m"
                          }
#line 700 "goal_expr_to_goal.m"
                          break;
#line 700 "goal_expr_to_goal.m"
                        case (MR_Integer) 1:
#line 701 "goal_expr_to_goal.m"
                          {
#line 701 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_62_62;
#line 701 "goal_expr_to_goal.m"
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_63_63;
#line 701 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_64_64;
#line 701 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_65_65;
#line 702 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;

#line 702 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm_30)) == (MR_mktag((MR_Integer) 0)));
#line 702 "goal_expr_to_goal.m"
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 702 "goal_expr_to_goal.m"
                              {
#line 702 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 0)));
#line 702 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 1)));
#line 702 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 2)));
#line 702 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 702 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 702 "goal_expr_to_goal.m"
                                  {
#line 702 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_62_62, (MR_Integer) 0)));
#line 702 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_63_63, (MR_String) "^") == 0);
#line 701 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 701 "goal_expr_to_goal.m"
                                      {
#line 702 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 702 "goal_expr_to_goal.m"
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 702 "goal_expr_to_goal.m"
                                          {
#line 702 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_Integer) 0)));
#line 702 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_Integer) 1)));
#line 702 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "goal_expr_to_goal.m"
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 701 "goal_expr_to_goal.m"
                                              {
#line 704 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 704 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 701 "goal_expr_to_goal.m"
                                              }
#line 702 "goal_expr_to_goal.m"
                                          }
#line 701 "goal_expr_to_goal.m"
                                      }
#line 702 "goal_expr_to_goal.m"
                                  }
#line 702 "goal_expr_to_goal.m"
                              }
#line 701 "goal_expr_to_goal.m"
                          }
#line 700 "goal_expr_to_goal.m"
                          break;
#line 700 "goal_expr_to_goal.m"
                      }
#line 695 "goal_expr_to_goal.m"
                  }
#line 695 "goal_expr_to_goal.m"
              }
#line 695 "goal_expr_to_goal.m"
          }
#line 695 "goal_expr_to_goal.m"
      }
#line 724 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 707 "goal_expr_to_goal.m"
      {
#line 707 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_38;
#line 707 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39;

#line 707 "goal_expr_to_goal.m"
        {
#line 707 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__ContextPieces_38 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19);
        }
#line 708 "goal_expr_to_goal.m"
        {
#line 708 "goal_expr_to_goal.m"
          hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__ContextPieces_38, &hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39);
        }
#line 717 "goal_expr_to_goal.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39)) == (MR_mktag((MR_Integer) 0))))
#line 718 "goal_expr_to_goal.m"
          {
#line 718 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
#line 718 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;

#line 719 "goal_expr_to_goal.m"
            {
#line 719 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56);
            }
#line 720 "goal_expr_to_goal.m"
            {
#line 720 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
            }
#line 722 "goal_expr_to_goal.m"
            {
#line 722 "goal_expr_to_goal.m"
              hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
            }
#line 718 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48;
#line 718 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52;
#line 718 "goal_expr_to_goal.m"
          }
#line 717 "goal_expr_to_goal.m"
        else
#line 711 "goal_expr_to_goal.m"
          {
#line 711 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
#line 711 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_41;
#line 711 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76;

#line 712 "goal_expr_to_goal.m"
            {
#line 712 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__ArgTerms_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35));
#line 712 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_59_59));
#line 712 "goal_expr_to_goal.m"
            }
#line 713 "goal_expr_to_goal.m"
            {
#line 713 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19, hlds__make_hlds__goal_expr_to_goal__FieldNames_40, hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
            }
#line 716 "goal_expr_to_goal.m"
            {
#line 716 "goal_expr_to_goal.m"
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47);
#line 716 "goal_expr_to_goal.m"
              return;
            }
#line 711 "goal_expr_to_goal.m"
          }
#line 707 "goal_expr_to_goal.m"
      }
#line 724 "goal_expr_to_goal.m"
    else
#line 726 "goal_expr_to_goal.m"
      {
#line 726 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_44;
#line 726 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_45;
#line 726 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86;
#line 726 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_105_105;

#line 725 "goal_expr_to_goal.m"
        {
#line 725 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86);
        }
#line 727 "goal_expr_to_goal.m"
        {
#line 727 "goal_expr_to_goal.m"
          hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
        }
#line 731 "goal_expr_to_goal.m"
        {
#line 731 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 731 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_21));
#line 731 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31])));
#line 731 "goal_expr_to_goal.m"
        }
#line 732 "goal_expr_to_goal.m"
        {
#line 732 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_44));
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "goal_expr_to_goal.m"
        }
#line 732 "goal_expr_to_goal.m"
        {
#line 732 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_105_105));
#line 732 "goal_expr_to_goal.m"
        }
#line 733 "goal_expr_to_goal.m"
        {
#line 733 "goal_expr_to_goal.m"
          MR_Word base;
#line 733 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57 = base;
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_45));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86));
#line 733 "goal_expr_to_goal.m"
        }
#line 726 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52;
#line 726 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48;
#line 726 "goal_expr_to_goal.m"
      }
#line 692 "goal_expr_to_goal.m"
  }
#line 683 "goal_expr_to_goal.m"
}

#line 671 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 671 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 671 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 671 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 671 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 671 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8)
#line 671 "goal_expr_to_goal.m"
{
#line 671 "goal_expr_to_goal.m"
  {
#line 671 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 671 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3;
#line 671 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5;
#line 671 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7;
#line 671 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9;

#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3), &hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5), &hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7), &hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9);
    }
#line 671 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3));
#line 671 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5));
#line 671 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7));
#line 671 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9));
#line 671 "goal_expr_to_goal.m"
  }
#line 671 "goal_expr_to_goal.m"
}

#line 654 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_24,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_25,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_26,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_30,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_31,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 654 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 654 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58)
#line 654 "goal_expr_to_goal.m"
{
#line 666 "goal_expr_to_goal.m"
  {
#line 666 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_39;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars1_40;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars1_41;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__OldStateVars_43;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NewStateVars_45;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_46;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_63_63;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_85_85;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
#line 666 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 671 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64;
#line 671 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65;
#line 671 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70;
#line 677 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78;
#line 677 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79;
#line 677 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80;
#line 679 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52;
#line 679 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48;
#line 679 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58;

#line 667 "goal_expr_to_goal.m"
    {
#line 667 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__Vars0_24, &hlds__make_hlds__goal_expr_to_goal__Vars_39);
    }
#line 668 "goal_expr_to_goal.m"
    {
#line 668 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__StateVars0_25, &hlds__make_hlds__goal_expr_to_goal__StateVars1_40);
    }
#line 669 "goal_expr_to_goal.m"
    {
#line 669 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__DotSVars0_26, &hlds__make_hlds__goal_expr_to_goal__DotSVars1_41);
    }
#line 670 "goal_expr_to_goal.m"
    {
#line 670 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27, &hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42);
    }
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 671 "goal_expr_to_goal.m"
    }
#line 4733 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0];
#line 4735 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2];
#line 4737 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
#line 4739 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3];
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51)), &hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47)), &hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57)), &hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
    }
#line 671 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64);
#line 671 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65);
#line 671 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
#line 673 "goal_expr_to_goal.m"
    {
#line 673 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__DotSVars1_41, &hlds__make_hlds__goal_expr_to_goal__DotSVars_44, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64)), &hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65)), &hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66)), &hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
    }
#line 673 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68);
#line 673 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69);
#line 673 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
#line 675 "goal_expr_to_goal.m"
    {
#line 675 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__Goal_31, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76);
    }
#line 677 "goal_expr_to_goal.m"
    {
#line 677 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73)), &hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71)), &hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76)), &hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
    }
#line 677 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78);
#line 677 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79);
#line 677 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
#line 679 "goal_expr_to_goal.m"
    {
#line 679 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42, &hlds__make_hlds__goal_expr_to_goal__ColonSVars_46, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78)), &hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79)), &hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80)), &hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
    }
#line 679 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52);
#line 679 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48);
#line 679 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
#line 681 "goal_expr_to_goal.m"
    {
#line 681 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_46);
    }
#line 681 "goal_expr_to_goal.m"
    {
#line 681 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, hlds__make_hlds__goal_expr_to_goal__V_87_87);
    }
#line 681 "goal_expr_to_goal.m"
    {
#line 681 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_85_85 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, hlds__make_hlds__goal_expr_to_goal__V_86_86);
    }
#line 681 "goal_expr_to_goal.m"
    {
#line 681 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__QuantVars_30 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__Vars_39, hlds__make_hlds__goal_expr_to_goal__V_85_85);
    }
#line 666 "goal_expr_to_goal.m"
  }
#line 654 "goal_expr_to_goal.m"
}

#line 632 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(
#line 632 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_9,
#line 632 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_10,
#line 632 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_11,
#line 632 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_12,
#line 632 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_13,
#line 632 "goal_expr_to_goal.m"
  MR_String * hlds__make_hlds__goal_expr_to_goal__StateVarName_14,
#line 632 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_15,
#line 632 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_16)
#line 632 "goal_expr_to_goal.m"
{
#line 637 "goal_expr_to_goal.m"
  {
#line 637 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IO_17;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_18;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_19;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_20;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_21;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 637 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_39_39;

#line 638 "goal_expr_to_goal.m"
    {
#line 638 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_11, hlds__make_hlds__goal_expr_to_goal__StateVar0_12, hlds__make_hlds__goal_expr_to_goal__StateVar_13);
    }
#line 639 "goal_expr_to_goal.m"
    {
#line 639 "goal_expr_to_goal.m"
      mercury__varset__lookup_name_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41, hlds__make_hlds__goal_expr_to_goal__VarSet_10, *hlds__make_hlds__goal_expr_to_goal__StateVar_13, hlds__make_hlds__goal_expr_to_goal__StateVarName_14);
    }
#line 640 "goal_expr_to_goal.m"
    {
#line 640 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IO_17 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 641 "goal_expr_to_goal.m"
    {
#line 641 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_18, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_17));
#line 641 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_18, 1) = ((MR_Box) ((MR_String) "unsafe_get_io_state"));
#line 641 "goal_expr_to_goal.m"
    }
#line 642 "goal_expr_to_goal.m"
    {
#line 642 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_17));
#line 642 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_19, 1) = ((MR_Box) ((MR_String) "unsafe_set_io_state"));
#line 642 "goal_expr_to_goal.m"
    }
#line 647 "goal_expr_to_goal.m"
    {
#line 647 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar0_12));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 647 "goal_expr_to_goal.m"
    }
#line 647 "goal_expr_to_goal.m"
    {
#line 647 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "goal_expr_to_goal.m"
    }
#line 647 "goal_expr_to_goal.m"
    {
#line 647 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 647 "goal_expr_to_goal.m"
    }
#line 648 "goal_expr_to_goal.m"
    {
#line 648 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 648 "goal_expr_to_goal.m"
    }
#line 651 "goal_expr_to_goal.m"
    {
#line 651 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_20));
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "goal_expr_to_goal.m"
    }
#line 651 "goal_expr_to_goal.m"
    {
#line 651 "goal_expr_to_goal.m"
      MR_Word base;
#line 651 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 651 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_15 = base;
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_18));
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 651 "goal_expr_to_goal.m"
    }
#line 652 "goal_expr_to_goal.m"
    {
#line 652 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_21));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "goal_expr_to_goal.m"
    }
#line 652 "goal_expr_to_goal.m"
    {
#line 652 "goal_expr_to_goal.m"
      MR_Word base;
#line 652 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 652 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_16 = base;
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_19));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_39_39));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
#line 652 "goal_expr_to_goal.m"
    }
#line 637 "goal_expr_to_goal.m"
  }
#line 632 "goal_expr_to_goal.m"
}

#line 609 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(
#line 609 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_9,
#line 609 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_10,
#line 609 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_11,
#line 609 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_12,
#line 609 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_13,
#line 609 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_14,
#line 609 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_15,
#line 609 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_16)
#line 609 "goal_expr_to_goal.m"
{
#line 614 "goal_expr_to_goal.m"
  {
#line 614 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 614 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__MutableName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_12, (MR_Integer) 0)));
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_12, (MR_Integer) 1)));
#line 614 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__StateVarName_19;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_20;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_21;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_22;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_23;
#line 614 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_27_27;
#line 614 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_34_34;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_41_41;
#line 614 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_43_43;

#line 616 "goal_expr_to_goal.m"
    {
#line 616 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_11, hlds__make_hlds__goal_expr_to_goal__StateVar0_18, hlds__make_hlds__goal_expr_to_goal__StateVar_14);
    }
#line 617 "goal_expr_to_goal.m"
    {
#line 617 "goal_expr_to_goal.m"
      mercury__varset__lookup_name_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45, hlds__make_hlds__goal_expr_to_goal__VarSet_10, *hlds__make_hlds__goal_expr_to_goal__StateVar_14, &hlds__make_hlds__goal_expr_to_goal__StateVarName_19);
    }
#line 618 "goal_expr_to_goal.m"
    {
#line 618 "goal_expr_to_goal.m"
      MR_Word base;
#line 618 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__MutableHLDS_13 = base;
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableName_17));
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarName_19));
#line 618 "goal_expr_to_goal.m"
    }
#line 619 "goal_expr_to_goal.m"
    {
#line 619 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "get_", hlds__make_hlds__goal_expr_to_goal__MutableName_17);
    }
#line 619 "goal_expr_to_goal.m"
    {
#line 619 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 619 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetPredName_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_27_27));
#line 619 "goal_expr_to_goal.m"
    }
#line 620 "goal_expr_to_goal.m"
    {
#line 620 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "set_", hlds__make_hlds__goal_expr_to_goal__MutableName_17);
    }
#line 620 "goal_expr_to_goal.m"
    {
#line 620 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 620 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetPredName_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 620 "goal_expr_to_goal.m"
    }
#line 625 "goal_expr_to_goal.m"
    {
#line 625 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar0_18));
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 625 "goal_expr_to_goal.m"
    }
#line 625 "goal_expr_to_goal.m"
    {
#line 625 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_34_34));
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "goal_expr_to_goal.m"
    }
#line 625 "goal_expr_to_goal.m"
    {
#line 625 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 625 "goal_expr_to_goal.m"
    }
#line 626 "goal_expr_to_goal.m"
    {
#line 626 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 626 "goal_expr_to_goal.m"
    }
#line 629 "goal_expr_to_goal.m"
    {
#line 629 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_22));
#line 629 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "goal_expr_to_goal.m"
    }
#line 629 "goal_expr_to_goal.m"
    {
#line 629 "goal_expr_to_goal.m"
      MR_Word base;
#line 629 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 629 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_15 = base;
#line 629 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 629 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_20));
#line 629 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_41_41));
#line 629 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 629 "goal_expr_to_goal.m"
    }
#line 630 "goal_expr_to_goal.m"
    {
#line 630 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_23));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "goal_expr_to_goal.m"
    }
#line 630 "goal_expr_to_goal.m"
    {
#line 630 "goal_expr_to_goal.m"
      MR_Word base;
#line 630 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 630 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_16 = base;
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_21));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_43_43));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
#line 630 "goal_expr_to_goal.m"
    }
#line 614 "goal_expr_to_goal.m"
  }
#line 609 "goal_expr_to_goal.m"
}

#line 301 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
#line 301 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 301 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 301 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 301 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 301 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 301 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5)
#line 301 "goal_expr_to_goal.m"
{
#line 301 "goal_expr_to_goal.m"
  {
#line 301 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 301 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_13;
#line 301 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_14;
#line 301 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_15;
#line 301 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_16;

#line 301 "goal_expr_to_goal.m"
    {
#line 301 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_13, &hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_14, &hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_15, &hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_16);
    }
#line 301 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_13));
#line 301 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_14));
#line 301 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_15));
#line 301 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_16));
#line 301 "goal_expr_to_goal.m"
  }
#line 301 "goal_expr_to_goal.m"
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
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212)
#line 37 "goal_expr_to_goal.m"
{
#line 89 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 89 "goal_expr_to_goal.m"
    {
#line 89 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 89 "goal_expr_to_goal.m"
      {
#line 89 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 89 "goal_expr_to_goal.m"
#line 89 "goal_expr_to_goal.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) {
#line 89 "goal_expr_to_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 89 "goal_expr_to_goal.m"
          case (MR_Integer) 0:
#line 582 "goal_expr_to_goal.m"
            {
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermA0_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermB0_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermA_191;
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermB_192;
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_790 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_791 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 597 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarA_193;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_215_215;
#line 587 "goal_expr_to_goal.m"
              MR_String hlds__make_hlds__goal_expr_to_goal__V_216_216;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_217_217;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_218_218;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_219_219;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_195_195;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_194_194;

#line 583 "goal_expr_to_goal.m"
              {
#line 583 "goal_expr_to_goal.m"
                parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermA0_189, &hlds__make_hlds__goal_expr_to_goal__TermA_191);
              }
#line 584 "goal_expr_to_goal.m"
              {
#line 584 "goal_expr_to_goal.m"
                parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermB0_190, &hlds__make_hlds__goal_expr_to_goal__TermB_192);
              }
#line 587 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermA_191)) == (MR_mktag((MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                {
#line 587 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_191, (MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_191, (MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_191, (MR_Integer) 2)));
#line 587 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_215_215)) == (MR_mktag((MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                    {
#line 587 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_216_216 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_215_215, (MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_216_216, (MR_String) "!") == 0);
#line 587 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                        {
#line 587 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_217_217)) == (MR_mktag((MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                            {
#line 587 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_217_217, (MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_217_217, (MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_219_219 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                                {
#line 587 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_218_218)) == (MR_mktag((MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                                    {
#line 587 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__StateVarA_193 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                                    }
#line 587 "goal_expr_to_goal.m"
                                }
#line 587 "goal_expr_to_goal.m"
                            }
#line 587 "goal_expr_to_goal.m"
                        }
#line 587 "goal_expr_to_goal.m"
                    }
#line 587 "goal_expr_to_goal.m"
                }
#line 597 "goal_expr_to_goal.m"
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 589 "goal_expr_to_goal.m"
                {
#line 589 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_220_220;
#line 589 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_221_221;
#line 589 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_222_222;
#line 593 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_196;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_223_223;
#line 590 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_224_224;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_225_225;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_226_226;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_227_227;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_198_198;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_197_197;

#line 588 "goal_expr_to_goal.m"
                  {
#line 588 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_790, hlds__make_hlds__goal_expr_to_goal__StateVarA_193, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_220_220, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_221_221, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_222_222);
                  }
#line 590 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_192)) == (MR_mktag((MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                    {
#line 590 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_192, (MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_192, (MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_192, (MR_Integer) 2)));
#line 590 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_223_223)) == (MR_mktag((MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                        {
#line 590 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_224_224 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_223_223, (MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_224_224, (MR_String) "!") == 0);
#line 590 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                            {
#line 590 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_225_225)) == (MR_mktag((MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                                {
#line 590 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                                    {
#line 590 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_226_226)) == (MR_mktag((MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                                        {
#line 590 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__StateVarB_196 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                                        }
#line 590 "goal_expr_to_goal.m"
                                    }
#line 590 "goal_expr_to_goal.m"
                                }
#line 590 "goal_expr_to_goal.m"
                            }
#line 590 "goal_expr_to_goal.m"
                        }
#line 590 "goal_expr_to_goal.m"
                    }
#line 593 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 591 "goal_expr_to_goal.m"
                    {
#line 591 "goal_expr_to_goal.m"
                      hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_790, hlds__make_hlds__goal_expr_to_goal__StateVarB_196, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_220_220, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_221_221, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                    }
#line 593 "goal_expr_to_goal.m"
                  else
#line 594 "goal_expr_to_goal.m"
                    {
#line 594 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_222_222;
#line 594 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_220_220;
#line 594 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_221_221;
#line 594 "goal_expr_to_goal.m"
                    }
#line 596 "goal_expr_to_goal.m"
                  {
#line 596 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_790);
                  }
#line 589 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209;
#line 589 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207;
#line 589 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203;
#line 589 "goal_expr_to_goal.m"
                }
#line 597 "goal_expr_to_goal.m"
              else
#line 601 "goal_expr_to_goal.m"
                {
#line 601 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_789;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_231_231;
#line 597 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_232_232;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_233_233;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_234_234;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_235_235;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_200_200;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_199_199;

#line 597 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_192)) == (MR_mktag((MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                    {
#line 597 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_192, (MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_192, (MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_192, (MR_Integer) 2)));
#line 597 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_231_231)) == (MR_mktag((MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                        {
#line 597 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_232_232 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_231_231, (MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_232_232, (MR_String) "!") == 0);
#line 597 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                            {
#line 597 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_233_233)) == (MR_mktag((MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                                {
#line 597 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_233_233, (MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_233_233, (MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_235_235 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                                    {
#line 597 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_234_234)) == (MR_mktag((MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                                        {
#line 597 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__StateVarB_789 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_234_234, (MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_234_234, (MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                                        }
#line 597 "goal_expr_to_goal.m"
                                    }
#line 597 "goal_expr_to_goal.m"
                                }
#line 597 "goal_expr_to_goal.m"
                            }
#line 597 "goal_expr_to_goal.m"
                        }
#line 597 "goal_expr_to_goal.m"
                    }
#line 601 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 599 "goal_expr_to_goal.m"
                    {
#line 598 "goal_expr_to_goal.m"
                      {
#line 598 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_790, hlds__make_hlds__goal_expr_to_goal__StateVarB_789, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                      }
#line 600 "goal_expr_to_goal.m"
                      {
#line 600 "goal_expr_to_goal.m"
                        *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
                      }
#line 599 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209;
#line 599 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207;
#line 599 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203;
#line 599 "goal_expr_to_goal.m"
                    }
#line 601 "goal_expr_to_goal.m"
                  else
#line 604 "goal_expr_to_goal.m"
                    {
#line 604 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_241_241;

#line 602 "goal_expr_to_goal.m"
                      {
#line 602 "goal_expr_to_goal.m"
                        hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(hlds__make_hlds__goal_expr_to_goal__TermA_191, hlds__make_hlds__goal_expr_to_goal__TermB_192, hlds__make_hlds__goal_expr_to_goal__Context_790, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__Purity_791, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_241_241, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                      }
#line 605 "goal_expr_to_goal.m"
                      {
#line 605 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_241_241, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202);
#line 605 "goal_expr_to_goal.m"
                        return;
                      }
#line 604 "goal_expr_to_goal.m"
                    }
#line 601 "goal_expr_to_goal.m"
                }
#line 582 "goal_expr_to_goal.m"
            }
#line 89 "goal_expr_to_goal.m"
            break;
#line 89 "goal_expr_to_goal.m"
          case (MR_Integer) 1:
#line 487 "goal_expr_to_goal.m"
            {
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Name_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_252_252;
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_777 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_780 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_781 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782;
#line 499 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_163;
#line 499 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_164;
#line 490 "goal_expr_to_goal.m"
              MR_String hlds__make_hlds__goal_expr_to_goal__V_248_248;
#line 490 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_249_249;
#line 490 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_250_250;

#line 488 "goal_expr_to_goal.m"
              {
#line 488 "goal_expr_to_goal.m"
                hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_781, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782);
              }
#line 490 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 490 "goal_expr_to_goal.m"
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 490 "goal_expr_to_goal.m"
                {
#line 490 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_248_248 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 490 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_248_248, (MR_String) "\\=") == 0);
#line 490 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 490 "goal_expr_to_goal.m"
                    {
#line 491 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782)) == (MR_mktag((MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 491 "goal_expr_to_goal.m"
                        {
#line 491 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__LHSTerm_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782, (MR_Integer) 0)));
#line 491 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782, (MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_249_249)) == (MR_mktag((MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 491 "goal_expr_to_goal.m"
                            {
#line 491 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__RHSTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_249_249, (MR_Integer) 0)));
#line 491 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_249_249, (MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_250_250 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "goal_expr_to_goal.m"
                            }
#line 491 "goal_expr_to_goal.m"
                        }
#line 490 "goal_expr_to_goal.m"
                    }
#line 490 "goal_expr_to_goal.m"
                }
#line 499 "goal_expr_to_goal.m"
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 495 "goal_expr_to_goal.m"
                {
#line 495 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_251_251;
#line 495 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738;

#line 495 "goal_expr_to_goal.m"
                  {
#line 495 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_251_251 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_251_251, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_777));
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_251_251, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_163));
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_251_251, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_164));
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_251_251, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_780));
#line 495 "goal_expr_to_goal.m"
                  }
#line 494 "goal_expr_to_goal.m"
                  {
#line 494 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 494 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 494 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_777));
#line 494 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_251_251));
#line 494 "goal_expr_to_goal.m"
                  }
#line 496 "goal_expr_to_goal.m"
                  {
#line 496 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_252_252, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 495 "goal_expr_to_goal.m"
                }
#line 499 "goal_expr_to_goal.m"
              else
#line 520 "goal_expr_to_goal.m"
                {
#line 520 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm0_166;
#line 520 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Remainder_168;
#line 520 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldListContext_169;
#line 520 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_170;
#line 520 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarContext_171;
#line 520 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_261_261;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm0_165;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_167;
#line 502 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_258_258;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_259_259;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_260_260;
#line 502 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_262_262;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_263_263;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_264_264;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_265_265;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_266_266;
#line 502 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_267_267;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_268_268;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_269_269;
#line 507 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_172_172;
#line 507 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_173_173;

#line 502 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 502 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                    {
#line 502 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_258_258 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 502 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_258_258, (MR_String) ":=") == 0);
#line 502 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                        {
#line 503 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782)) == (MR_mktag((MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                            {
#line 503 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__LHSTerm0_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782, (MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_259_259)) == (MR_mktag((MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                                {
#line 503 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__RHSTerm0_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_259_259, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_259_259, (MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_260_260 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                    {
#line 504 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm0_165)) == (MR_mktag((MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                        {
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_165, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_165, (MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__FieldListContext_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_165, (MR_Integer) 2)));
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_261_261)) == (MR_mktag((MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                            {
#line 504 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__V_262_262 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_261_261, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_262_262, (MR_String) "^") == 0);
#line 502 "goal_expr_to_goal.m"
                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                                {
#line 504 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_263_263)) == (MR_mktag((MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                                    {
#line 504 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__StateVar0_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_263_263, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_263_263, (MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_264_264)) == (MR_mktag((MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                                        {
#line 504 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__Remainder_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_264_264, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_264_264, (MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_265_265 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "goal_expr_to_goal.m"
                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                                            {
#line 506 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVar0_167)) == (MR_mktag((MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 506 "goal_expr_to_goal.m"
                                                                {
#line 506 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 1)));
#line 506 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__StateVarContext_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 2)));
#line 506 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_266_266)) == (MR_mktag((MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 506 "goal_expr_to_goal.m"
                                                                    {
#line 506 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_267_267 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_266_266, (MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_267_267, (MR_String) "!") == 0);
#line 502 "goal_expr_to_goal.m"
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                                                        {
#line 507 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_170)) == (MR_mktag((MR_Integer) 1)));
#line 507 "goal_expr_to_goal.m"
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 507 "goal_expr_to_goal.m"
                                                                            {
#line 507 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_170, (MR_Integer) 0)));
#line 507 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_170, (MR_Integer) 1)));
#line 507 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_268_268)) == (MR_mktag((MR_Integer) 1)));
#line 507 "goal_expr_to_goal.m"
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 507 "goal_expr_to_goal.m"
                                                                                {
#line 507 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_268_268, (MR_Integer) 0)));
#line 507 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_268_268, (MR_Integer) 1)));
#line 507 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_269_269 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "goal_expr_to_goal.m"
                                                                                }
#line 507 "goal_expr_to_goal.m"
                                                                            }
#line 502 "goal_expr_to_goal.m"
                                                                        }
#line 506 "goal_expr_to_goal.m"
                                                                    }
#line 506 "goal_expr_to_goal.m"
                                                                }
#line 502 "goal_expr_to_goal.m"
                                                            }
#line 504 "goal_expr_to_goal.m"
                                                        }
#line 504 "goal_expr_to_goal.m"
                                                    }
#line 502 "goal_expr_to_goal.m"
                                                }
#line 504 "goal_expr_to_goal.m"
                                            }
#line 504 "goal_expr_to_goal.m"
                                        }
#line 502 "goal_expr_to_goal.m"
                                    }
#line 503 "goal_expr_to_goal.m"
                                }
#line 503 "goal_expr_to_goal.m"
                            }
#line 502 "goal_expr_to_goal.m"
                        }
#line 502 "goal_expr_to_goal.m"
                    }
#line 520 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 511 "goal_expr_to_goal.m"
                    {
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_174;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__FieldList_175;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_276_276;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_277_277;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_281_281;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_282_282;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_739;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_740;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_741;

#line 511 "goal_expr_to_goal.m"
                      {
#line 511 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__LHSTerm_740 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 511 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_740, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 511 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_740, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_170));
#line 511 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_740, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_171));
#line 511 "goal_expr_to_goal.m"
                      }
#line 512 "goal_expr_to_goal.m"
                      {
#line 512 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__StateVar_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_174, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 512 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_174, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_170));
#line 512 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_174, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_171));
#line 512 "goal_expr_to_goal.m"
                      }
#line 513 "goal_expr_to_goal.m"
                      {
#line 513 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_277_277, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Remainder_168));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_277_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "goal_expr_to_goal.m"
                      }
#line 513 "goal_expr_to_goal.m"
                      {
#line 513 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_276_276, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_174));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_276_276, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_277_277));
#line 513 "goal_expr_to_goal.m"
                      }
#line 513 "goal_expr_to_goal.m"
                      {
#line 513 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__FieldList_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_175, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_261_261));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_175, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_276_276));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_175, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldListContext_169));
#line 513 "goal_expr_to_goal.m"
                      }
#line 515 "goal_expr_to_goal.m"
                      {
#line 515 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_282_282, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm0_166));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_282_282, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "goal_expr_to_goal.m"
                      }
#line 515 "goal_expr_to_goal.m"
                      {
#line 515 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_281_281, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldList_175));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_281_281, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_282_282));
#line 515 "goal_expr_to_goal.m"
                      }
#line 515 "goal_expr_to_goal.m"
                      {
#line 515 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__RHSTerm_741 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_741, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2]));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_741, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_281_281));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_741, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_777));
#line 515 "goal_expr_to_goal.m"
                      }
#line 516 "goal_expr_to_goal.m"
                      {
#line 516 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__TransformedGoal_739 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 516 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_739, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_777));
#line 516 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_739, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_740));
#line 516 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_739, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_741));
#line 516 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_739, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_780));
#line 516 "goal_expr_to_goal.m"
                      }
#line 517 "goal_expr_to_goal.m"
                      {
#line 517 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_739, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_252_252, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                      }
#line 511 "goal_expr_to_goal.m"
                    }
#line 520 "goal_expr_to_goal.m"
                  else
#line 534 "goal_expr_to_goal.m"
                    {
#line 534 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_177;
#line 524 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__Operator_176;

#line 524 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 524 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 524 "goal_expr_to_goal.m"
                        {
#line 524 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__Operator_176 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 526 "goal_expr_to_goal.m"
                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_176, (MR_String) ":=") == 0))
#line 526 "goal_expr_to_goal.m"
                            {
#line 526 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__AccessType_177 = (MR_Integer) 1;
#line 526 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 526 "goal_expr_to_goal.m"
                            }
#line 526 "goal_expr_to_goal.m"
                          else
#line 526 "goal_expr_to_goal.m"
                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_176, (MR_String) "=^") == 0))
#line 525 "goal_expr_to_goal.m"
                            {
#line 525 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__AccessType_177 = (MR_Integer) 0;
#line 525 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 525 "goal_expr_to_goal.m"
                            }
#line 526 "goal_expr_to_goal.m"
                          else
#line 526 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 524 "goal_expr_to_goal.m"
                        }
#line 534 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 530 "goal_expr_to_goal.m"
                        {
#line 530 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_742;

#line 529 "goal_expr_to_goal.m"
                          {
#line 529 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_742);
                          }
#line 531 "goal_expr_to_goal.m"
                          {
#line 531 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__AccessType_177, hlds__make_hlds__goal_expr_to_goal__ArgTerms_742, hlds__make_hlds__goal_expr_to_goal__Context_777, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_252_252, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                          }
#line 530 "goal_expr_to_goal.m"
                        }
#line 534 "goal_expr_to_goal.m"
                      else
#line 536 "goal_expr_to_goal.m"
                        {
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Call_183;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo0_188;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_298_298;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_299_299;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_300_300;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_308_308;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_309_309;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_745;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_746;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_747;
#line 536 "goal_expr_to_goal.m"
                          MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_748;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_750;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_751;
#line 560 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__PredVar_178;
#line 560 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__RealHeadVars_179;
#line 545 "goal_expr_to_goal.m"
                          MR_String hlds__make_hlds__goal_expr_to_goal__V_825_825;

#line 535 "goal_expr_to_goal.m"
                          {
#line 535 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_782, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_746);
                          }
#line 537 "goal_expr_to_goal.m"
                          {
#line 537 "goal_expr_to_goal.m"
                            hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_746, &hlds__make_hlds__goal_expr_to_goal__HeadVars_747, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_298_298, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_299_299, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_300_300);
                          }
#line 539 "goal_expr_to_goal.m"
                          {
#line 539 "goal_expr_to_goal.m"
                            mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1], hlds__make_hlds__goal_expr_to_goal__ArgTerms_746, &hlds__make_hlds__goal_expr_to_goal__Arity_748);
                          }
#line 543 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 543 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 543 "goal_expr_to_goal.m"
                            {
#line 543 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_825_825 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 544 "goal_expr_to_goal.m"
                              if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_825_825, (MR_String) "") == 0))
#line 544 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 544 "goal_expr_to_goal.m"
                              else
#line 544 "goal_expr_to_goal.m"
                              if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_825_825, (MR_String) "call") == 0))
#line 543 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 544 "goal_expr_to_goal.m"
                              else
#line 544 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 545 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 545 "goal_expr_to_goal.m"
                                {
#line 546 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HeadVars_747)) == (MR_mktag((MR_Integer) 1)));
#line 546 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 546 "goal_expr_to_goal.m"
                                    {
#line 546 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__PredVar_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_747, (MR_Integer) 0)));
#line 546 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__RealHeadVars_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_747, (MR_Integer) 1)));
#line 546 "goal_expr_to_goal.m"
                                    }
#line 545 "goal_expr_to_goal.m"
                                }
#line 543 "goal_expr_to_goal.m"
                            }
#line 560 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 549 "goal_expr_to_goal.m"
                            {
#line 549 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCall_182;
#line 549 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCallId_184;

#line 553 "goal_expr_to_goal.m"
                              {
#line 553 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__GenericCall_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 553 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_182, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredVar_178));
#line 553 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_182, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_780));
#line 553 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_182, 2) = ((MR_Box) ((MR_Integer) 0));
#line 553 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_182, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_748));
#line 553 "goal_expr_to_goal.m"
                              }
#line 555 "goal_expr_to_goal.m"
                              {
#line 555 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Call_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_183, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCall_182));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_183, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RealHeadVars_179));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_183, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_183, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_183, 5) = ((MR_Box) ((MR_Integer) 6));
#line 555 "goal_expr_to_goal.m"
                              }
#line 558 "goal_expr_to_goal.m"
                              {
#line 558 "goal_expr_to_goal.m"
                                hlds__hlds_goal__generic_call_to_id_2_p_0(hlds__make_hlds__goal_expr_to_goal__GenericCall_182, &hlds__make_hlds__goal_expr_to_goal__GenericCallId_184);
                              }
#line 559 "goal_expr_to_goal.m"
                              {
#line 559 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__CallId_751 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_751, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCallId_184));
#line 559 "goal_expr_to_goal.m"
                              }
#line 549 "goal_expr_to_goal.m"
                            }
#line 560 "goal_expr_to_goal.m"
                          else
#line 562 "goal_expr_to_goal.m"
                            {
#line 562 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__PredId_185;
#line 562 "goal_expr_to_goal.m"
                              MR_Integer hlds__make_hlds__goal_expr_to_goal__ModeId_186;
#line 562 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_305_305;

#line 562 "goal_expr_to_goal.m"
                              {
#line 562 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__PredId_185 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                              }
#line 563 "goal_expr_to_goal.m"
                              {
#line 563 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__ModeId_186 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                              }
#line 566 "goal_expr_to_goal.m"
                              {
#line 566 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Call_183 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_183, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredId_185));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_183, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ModeId_186));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_183, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_747));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_183, 3) = ((MR_Box) ((MR_Integer) 2));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_183, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_183, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_162));
#line 566 "goal_expr_to_goal.m"
                              }
#line 569 "goal_expr_to_goal.m"
                              {
#line 569 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_305_305 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 569 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_305_305, 0) = ((MR_Box) ((MR_Integer) 0));
#line 569 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_305_305, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_162));
#line 569 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_305_305, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_748));
#line 569 "goal_expr_to_goal.m"
                              }
#line 569 "goal_expr_to_goal.m"
                              {
#line 569 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__CallId_751 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 569 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallId_751, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_305_305));
#line 569 "goal_expr_to_goal.m"
                              }
#line 562 "goal_expr_to_goal.m"
                            }
#line 571 "goal_expr_to_goal.m"
                          {
#line 571 "goal_expr_to_goal.m"
                            hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_777, &hlds__make_hlds__goal_expr_to_goal__GoalInfo0_188);
                          }
#line 572 "goal_expr_to_goal.m"
                          {
#line 572 "goal_expr_to_goal.m"
                            hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__goal_expr_to_goal__Purity_780, hlds__make_hlds__goal_expr_to_goal__GoalInfo0_188, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_745);
                          }
#line 573 "goal_expr_to_goal.m"
                          {
#line 573 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_750 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_750, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Call_183));
#line 573 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_750, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_745));
#line 573 "goal_expr_to_goal.m"
                          }
#line 575 "goal_expr_to_goal.m"
                          {
#line 575 "goal_expr_to_goal.m"
                            hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, hlds__make_hlds__goal_expr_to_goal__Name_162, hlds__make_hlds__goal_expr_to_goal__Arity_748, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_308_308);
                          }
#line 577 "goal_expr_to_goal.m"
                          {
#line 577 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_309_309, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_751));
#line 577 "goal_expr_to_goal.m"
                          }
#line 576 "goal_expr_to_goal.m"
                          {
#line 576 "goal_expr_to_goal.m"
                            hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_747, hlds__make_hlds__goal_expr_to_goal__ArgTerms_746, hlds__make_hlds__goal_expr_to_goal__Context_777, hlds__make_hlds__goal_expr_to_goal__V_309_309, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_750, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_299_299, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_252_252, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_298_298, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_308_308, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                          }
#line 536 "goal_expr_to_goal.m"
                        }
#line 534 "goal_expr_to_goal.m"
                    }
#line 520 "goal_expr_to_goal.m"
                }
#line 580 "goal_expr_to_goal.m"
              {
#line 580 "goal_expr_to_goal.m"
                hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_252_252, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202);
#line 580 "goal_expr_to_goal.m"
                return;
              }
#line 487 "goal_expr_to_goal.m"
            }
#line 89 "goal_expr_to_goal.m"
            break;
#line 89 "goal_expr_to_goal.m"
          case (MR_Integer) 2:
#line 404 "goal_expr_to_goal.m"
            {
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_137 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_138;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_139;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_140;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_381_381;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_382_382;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_383_383;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_384_384;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_385_385;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_386_386;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_387_387;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_715 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_716;

#line 406 "goal_expr_to_goal.m"
              {
#line 406 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_381_381 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812);
              }
#line 405 "goal_expr_to_goal.m"
              {
#line 405 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_136, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_381_381, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_138, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_382_382, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_383_383, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_387_387);
              }
#line 408 "goal_expr_to_goal.m"
              {
#line 408 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_137, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_138, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_382_382, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_383_383, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
              }
#line 411 "goal_expr_to_goal.m"
              {
#line 411 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_140 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_139);
              }
#line 412 "goal_expr_to_goal.m"
              {
#line 412 "goal_expr_to_goal.m"
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_715, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_716);
              }
#line 413 "goal_expr_to_goal.m"
              {
#line 413 "goal_expr_to_goal.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_140, hlds__make_hlds__goal_expr_to_goal__GoalInfo_716, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 413 "goal_expr_to_goal.m"
                return;
              }
#line 404 "goal_expr_to_goal.m"
            }
#line 89 "goal_expr_to_goal.m"
            break;
#line 89 "goal_expr_to_goal.m"
          case (MR_Integer) 3:
#line 89 "goal_expr_to_goal.m"
#line 89 "goal_expr_to_goal.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) {
#line 89 "goal_expr_to_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 0:
#line 89 "goal_expr_to_goal.m"
                {
#line 89 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_822 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 89 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_824;

#line 90 "goal_expr_to_goal.m"
                  {
#line 90 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_822, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_824);
                  }
#line 91 "goal_expr_to_goal.m"
                  {
#line 91 "goal_expr_to_goal.m"
                    MR_Word base;
#line 91 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 91 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 91 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0])));
#line 91 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_824));
#line 91 "goal_expr_to_goal.m"
                  }
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211;
#line 89 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 1:
#line 369 "goal_expr_to_goal.m"
                {
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_811_811 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_124;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCond_125;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_126;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen0_127;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_128;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_129;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse0_130;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_131;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen_132;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse_133;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_402_402;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_403_403;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_404_404;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_405_405;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_406_406;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_407_407;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_408_408;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_409_409;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_410_410;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_411_411;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_412_412;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_413_413;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_414_414;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_417_417;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_702 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_703;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_704;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_705;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_706;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_707 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_708 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 371 "goal_expr_to_goal.m"
                  {
#line 371 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_811_811, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_707, &hlds__make_hlds__goal_expr_to_goal__Vars_705);
                  }
#line 372 "goal_expr_to_goal.m"
                  {
#line 372 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_811_811, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_708, &hlds__make_hlds__goal_expr_to_goal__StateVars_706);
                  }
#line 373 "goal_expr_to_goal.m"
                  {
#line 373 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_702, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__StateVars_706, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_124, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_402_402);
                  }
#line 375 "goal_expr_to_goal.m"
                  {
#line 375 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Cond_121, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSCond_125, hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_124, &hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_403_403, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_404_404, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_406_406, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_402_402, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_407_407);
                  }
#line 378 "goal_expr_to_goal.m"
                  {
#line 378 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Then_122, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSThen0_127, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_126, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_403_403, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_408_408, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_404_404, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_409_409, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_405_405, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_410_410, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_406_406, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_407_407, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_412_412);
                  }
#line 381 "goal_expr_to_goal.m"
                  {
#line 381 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_706, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_128, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_129);
                  }
#line 383 "goal_expr_to_goal.m"
                  {
#line 383 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Else_123, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSElse0_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_408_408, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_413_413, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_409_409, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_414_414, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_410_410, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_412_412, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_417_417);
                  }
#line 386 "goal_expr_to_goal.m"
                  {
#line 386 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Context_702, hlds__make_hlds__goal_expr_to_goal__StateVars_706, hlds__make_hlds__goal_expr_to_goal__HLDSThen0_127, &hlds__make_hlds__goal_expr_to_goal__HLDSThen_132, hlds__make_hlds__goal_expr_to_goal__HLDSElse0_130, &hlds__make_hlds__goal_expr_to_goal__HLDSElse_133, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_126, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_129, hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_414_414, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_413_413, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_417_417, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 390 "goal_expr_to_goal.m"
                  {
#line 390 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_703 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_703, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_703, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_705));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_703, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCond_125));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_703, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSThen_132));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_703, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSElse_133));
#line 390 "goal_expr_to_goal.m"
                  }
#line 391 "goal_expr_to_goal.m"
                  {
#line 391 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_702, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_704);
                  }
#line 392 "goal_expr_to_goal.m"
                  {
#line 392 "goal_expr_to_goal.m"
                    MR_Word base;
#line 392 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 392 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_703));
#line 392 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_704));
#line 392 "goal_expr_to_goal.m"
                  }
#line 369 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 2:
#line 426 "goal_expr_to_goal.m"
                {
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_142;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_143;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_144;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_355_355;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_356_356;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_357_357;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_358_358;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_359_359;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_360_360;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_361_361;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_724 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_725;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_726 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_727 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 428 "goal_expr_to_goal.m"
                  {
#line 428 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_727, hlds__make_hlds__goal_expr_to_goal__Renaming_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_355_355, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_356_356, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_357_357, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_358_358, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_359_359);
                  }
#line 431 "goal_expr_to_goal.m"
                  {
#line 431 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_726, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_142, &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_355_355, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_356_356, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_357_357, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_358_358, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 435 "goal_expr_to_goal.m"
                  {
#line 435 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_724, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_143, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204);
                  }
#line 438 "goal_expr_to_goal.m"
                  {
#line 438 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_724, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_725);
                  }
#line 439 "goal_expr_to_goal.m"
                  {
#line 439 "goal_expr_to_goal.m"
                    hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_144, hlds__make_hlds__goal_expr_to_goal__GoalInfo_725, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 439 "goal_expr_to_goal.m"
                    return;
                  }
#line 426 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 3:
#line 394 "goal_expr_to_goal.m"
                {
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_710 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_711;
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_712;
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_713 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_714;
#line 396 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_135_135;

#line 396 "goal_expr_to_goal.m"
                  {
#line 396 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_713, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_714, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__V_135_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 399 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201;
#line 400 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_711 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_714);
#line 401 "goal_expr_to_goal.m"
                  {
#line 401 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_710, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_712);
                  }
#line 402 "goal_expr_to_goal.m"
                  {
#line 402 "goal_expr_to_goal.m"
                    MR_Word base;
#line 402 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 402 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 402 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_711));
#line 402 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_712));
#line 402 "goal_expr_to_goal.m"
                  }
#line 394 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 4:
#line 89 "goal_expr_to_goal.m"
                {
#line 89 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 89 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;

#line 90 "goal_expr_to_goal.m"
                  {
#line 90 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_27, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
                  }
#line 91 "goal_expr_to_goal.m"
                  {
#line 91 "goal_expr_to_goal.m"
                    MR_Word base;
#line 91 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 91 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 91 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29])));
#line 91 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_29));
#line 91 "goal_expr_to_goal.m"
                  }
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211;
#line 89 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 5:
#line 415 "goal_expr_to_goal.m"
                {
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_368_368;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_369_369;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_370_370;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_371_371;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_372_372;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_373_373;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_374_374;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_717 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_718;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_719 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_720 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_721;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_722;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_723;

#line 417 "goal_expr_to_goal.m"
                  {
#line 417 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_368_368 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813);
                  }
#line 416 "goal_expr_to_goal.m"
                  {
#line 416 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_719, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_368_368, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_721, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_369_369, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_370_370, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_374_374);
                  }
#line 419 "goal_expr_to_goal.m"
                  {
#line 419 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_720, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_721, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_722, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_369_369, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_370_370, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 422 "goal_expr_to_goal.m"
                  {
#line 422 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_723 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_722);
                  }
#line 423 "goal_expr_to_goal.m"
                  {
#line 423 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_717, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_718);
                  }
#line 424 "goal_expr_to_goal.m"
                  {
#line 424 "goal_expr_to_goal.m"
                    hlds__hlds_goal__par_conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_723, hlds__make_hlds__goal_expr_to_goal__GoalInfo_718, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 424 "goal_expr_to_goal.m"
                    return;
                  }
#line 415 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 6:
#line 111 "goal_expr_to_goal.m"
                {
#line 111 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 111 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35;
#line 111 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_36;
#line 111 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_610 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 111 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_611;
#line 111 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_612;
#line 111 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_613;
#line 111 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_614 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 112 "goal_expr_to_goal.m"
                  {
#line 112 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_34, &hlds__make_hlds__goal_expr_to_goal__Vars_613);
                  }
#line 113 "goal_expr_to_goal.m"
                  {
#line 113 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_614, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 116 "goal_expr_to_goal.m"
                  {
#line 116 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 116 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Reason_36, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_613));
#line 116 "goal_expr_to_goal.m"
                  }
#line 117 "goal_expr_to_goal.m"
                  {
#line 117 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_611 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 117 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_611, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 117 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_611, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_36));
#line 117 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_611, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35));
#line 117 "goal_expr_to_goal.m"
                  }
#line 118 "goal_expr_to_goal.m"
                  {
#line 118 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_610, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_612);
                  }
#line 119 "goal_expr_to_goal.m"
                  {
#line 119 "goal_expr_to_goal.m"
                    MR_Word base;
#line 119 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 119 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_611));
#line 119 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_612));
#line 119 "goal_expr_to_goal.m"
                  }
#line 111 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 7:
#line 106 "goal_expr_to_goal.m"
                {
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32;
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_594_594;
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_595_595;
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_605 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));

#line 99 "goal_expr_to_goal.m"
                  {
#line 99 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_595_595 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 99 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 99 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_605));
#line 99 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_31));
#line 99 "goal_expr_to_goal.m"
                  }
#line 98 "goal_expr_to_goal.m"
                  {
#line 98 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_594_594 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 98 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 98 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_605));
#line 98 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_30));
#line 98 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_595_595));
#line 98 "goal_expr_to_goal.m"
                  }
#line 97 "goal_expr_to_goal.m"
                  {
#line 97 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 97 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 97 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_605));
#line 97 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_594_594));
#line 97 "goal_expr_to_goal.m"
                  }
#line 107 "goal_expr_to_goal.m"
                  /* direct tailcall eliminated */
#line 107 "goal_expr_to_goal.m"
                  {
#line 107 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32;

#line 107 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 107 "goal_expr_to_goal.m"
                  }
#line 107 "goal_expr_to_goal.m"
                  continue;
#line 106 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 8:
#line 121 "goal_expr_to_goal.m"
                {
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_577_577;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_615 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_616;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_617;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_618;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_619;

#line 123 "goal_expr_to_goal.m"
                  {
#line 123 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_37, &hlds__make_hlds__goal_expr_to_goal__StateVars_618);
                  }
#line 124 "goal_expr_to_goal.m"
                  {
#line 124 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_615, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__StateVars_618, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_577_577);
                  }
#line 126 "goal_expr_to_goal.m"
                  {
#line 126 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_38, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_619, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_577_577, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 129 "goal_expr_to_goal.m"
                  {
#line 129 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_618, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202);
                  }
#line 133 "goal_expr_to_goal.m"
                  {
#line 133 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_616 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 133 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_616, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 133 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_616, 1) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
#line 133 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_616, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_619));
#line 133 "goal_expr_to_goal.m"
                  }
#line 134 "goal_expr_to_goal.m"
                  {
#line 134 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_615, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_617);
                  }
#line 135 "goal_expr_to_goal.m"
                  {
#line 135 "goal_expr_to_goal.m"
                    MR_Word base;
#line 135 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 135 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 135 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_616));
#line 135 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_617));
#line 135 "goal_expr_to_goal.m"
                  }
#line 121 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 9:
#line 106 "goal_expr_to_goal.m"
                {
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_592_592;
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_593_593;
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_606 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_607 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 106 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821;

#line 105 "goal_expr_to_goal.m"
                  {
#line 105 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_593_593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 105 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 105 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_606));
#line 105 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_607));
#line 105 "goal_expr_to_goal.m"
                  }
#line 104 "goal_expr_to_goal.m"
                  {
#line 104 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_592_592 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 104 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_592_592, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 104 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_592_592, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_606));
#line 104 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_592_592, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVars_33));
#line 104 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_592_592, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_593_593));
#line 104 "goal_expr_to_goal.m"
                  }
#line 103 "goal_expr_to_goal.m"
                  {
#line 103 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 103 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 103 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_606));
#line 103 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_592_592));
#line 103 "goal_expr_to_goal.m"
                  }
#line 107 "goal_expr_to_goal.m"
                  /* direct tailcall eliminated */
#line 107 "goal_expr_to_goal.m"
                  {
#line 107 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821;

#line 107 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 107 "goal_expr_to_goal.m"
                  }
#line 107 "goal_expr_to_goal.m"
                  continue;
#line 106 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 10:
#line 137 "goal_expr_to_goal.m"
                {
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_621 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_622;
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_623;
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_624 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_625;
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_626;

#line 138 "goal_expr_to_goal.m"
                  {
#line 138 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_624, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_625, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 141 "goal_expr_to_goal.m"
                  {
#line 141 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_626 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 141 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_626, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_43));
#line 141 "goal_expr_to_goal.m"
                  }
#line 142 "goal_expr_to_goal.m"
                  {
#line 142 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_622 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 142 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 142 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_626));
#line 142 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_625));
#line 142 "goal_expr_to_goal.m"
                  }
#line 143 "goal_expr_to_goal.m"
                  {
#line 143 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_621, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_623);
                  }
#line 144 "goal_expr_to_goal.m"
                  {
#line 144 "goal_expr_to_goal.m"
                    MR_Word base;
#line 144 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 144 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_622));
#line 144 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_623));
#line 144 "goal_expr_to_goal.m"
                  }
#line 137 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 11:
#line 147 "goal_expr_to_goal.m"
                {
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_46;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_627 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_628;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_629;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_630 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_631 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_632 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_633;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_634;

#line 148 "goal_expr_to_goal.m"
                  {
#line 148 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_630, hlds__make_hlds__goal_expr_to_goal__StateVars_632, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_45, hlds__make_hlds__goal_expr_to_goal__Context_627, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_46, hlds__make_hlds__goal_expr_to_goal__SubGoal_631, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_633, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 152 "goal_expr_to_goal.m"
                  {
#line 152 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_634 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_634, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_46));
#line 152 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_634, 1) = ((MR_Box) ((MR_Integer) 0));
#line 152 "goal_expr_to_goal.m"
                  }
#line 153 "goal_expr_to_goal.m"
                  {
#line 153 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_628 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 153 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_628, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 153 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_628, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_634));
#line 153 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_628, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_633));
#line 153 "goal_expr_to_goal.m"
                  }
#line 154 "goal_expr_to_goal.m"
                  {
#line 154 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_627, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_629);
                  }
#line 155 "goal_expr_to_goal.m"
                  {
#line 155 "goal_expr_to_goal.m"
                    MR_Word base;
#line 155 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 155 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 155 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_628));
#line 155 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_629));
#line 155 "goal_expr_to_goal.m"
                  }
#line 147 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 12:
#line 158 "goal_expr_to_goal.m"
                {
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_635 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_636;
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_637;
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_638 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_639 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_640 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_641;
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_642;
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_643 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_644 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_645;

#line 159 "goal_expr_to_goal.m"
                  {
#line 159 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_638, hlds__make_hlds__goal_expr_to_goal__StateVars_640, hlds__make_hlds__goal_expr_to_goal__DotSVars_643, hlds__make_hlds__goal_expr_to_goal__ColonSVars_644, hlds__make_hlds__goal_expr_to_goal__Context_635, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_645, hlds__make_hlds__goal_expr_to_goal__SubGoal_639, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_641, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 163 "goal_expr_to_goal.m"
                  {
#line 163 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_642 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_642, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_645));
#line 163 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_642, 1) = ((MR_Box) ((MR_Integer) 1));
#line 163 "goal_expr_to_goal.m"
                  }
#line 164 "goal_expr_to_goal.m"
                  {
#line 164 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_636 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 164 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 164 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_642));
#line 164 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_641));
#line 164 "goal_expr_to_goal.m"
                  }
#line 165 "goal_expr_to_goal.m"
                  {
#line 165 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_635, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_637);
                  }
#line 166 "goal_expr_to_goal.m"
                  {
#line 166 "goal_expr_to_goal.m"
                    MR_Word base;
#line 166 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 166 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 166 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_636));
#line 166 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_637));
#line 166 "goal_expr_to_goal.m"
                  }
#line 158 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 13:
#line 169 "goal_expr_to_goal.m"
                {
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_646 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_647;
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_648;
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_649 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_650 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_651 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_652;
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_653;
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_654 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_655 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_656;

#line 170 "goal_expr_to_goal.m"
                  {
#line 170 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_649, hlds__make_hlds__goal_expr_to_goal__StateVars_651, hlds__make_hlds__goal_expr_to_goal__DotSVars_654, hlds__make_hlds__goal_expr_to_goal__ColonSVars_655, hlds__make_hlds__goal_expr_to_goal__Context_646, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_656, hlds__make_hlds__goal_expr_to_goal__SubGoal_650, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_652, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 175 "goal_expr_to_goal.m"
                  {
#line 175 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_653 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_653, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_656));
#line 175 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_653, 1) = ((MR_Box) ((MR_Integer) 2));
#line 175 "goal_expr_to_goal.m"
                  }
#line 176 "goal_expr_to_goal.m"
                  {
#line 176 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_647 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 176 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_647, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 176 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_647, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_653));
#line 176 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_647, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_652));
#line 176 "goal_expr_to_goal.m"
                  }
#line 177 "goal_expr_to_goal.m"
                  {
#line 177 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_646, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_648);
                  }
#line 178 "goal_expr_to_goal.m"
                  {
#line 178 "goal_expr_to_goal.m"
                    MR_Word base;
#line 178 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 178 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 178 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_647));
#line 178 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_648));
#line 178 "goal_expr_to_goal.m"
                  }
#line 169 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 14:
#line 180 "goal_expr_to_goal.m"
                {
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_548_548;
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_657 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_658;
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_659;
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_660 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_661;

#line 181 "goal_expr_to_goal.m"
                  {
#line 181 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_660, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_661, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 184 "goal_expr_to_goal.m"
                  {
#line 184 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_548_548 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_548_548, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_548_548, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_47));
#line 184 "goal_expr_to_goal.m"
                  }
#line 184 "goal_expr_to_goal.m"
                  {
#line 184 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_658 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_658, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_658, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_548_548));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_658, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_661));
#line 184 "goal_expr_to_goal.m"
                  }
#line 185 "goal_expr_to_goal.m"
                  {
#line 185 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_657, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_659);
                  }
#line 186 "goal_expr_to_goal.m"
                  {
#line 186 "goal_expr_to_goal.m"
                    MR_Word base;
#line 186 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 186 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_658));
#line 186 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_659));
#line 186 "goal_expr_to_goal.m"
                  }
#line 180 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 15:
#line 188 "goal_expr_to_goal.m"
                {
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_49;
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_541_541;
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_662 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_663;
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_664;
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_665 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_666;

#line 189 "goal_expr_to_goal.m"
                  {
#line 189 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var0_48, &hlds__make_hlds__goal_expr_to_goal__Var_49);
                  }
#line 190 "goal_expr_to_goal.m"
                  {
#line 190 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_665, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_666, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 193 "goal_expr_to_goal.m"
                  {
#line 193 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_541_541 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_541_541, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_541_541, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_49));
#line 193 "goal_expr_to_goal.m"
                  }
#line 193 "goal_expr_to_goal.m"
                  {
#line 193 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_663 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_663, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_663, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_541_541));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_663, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_666));
#line 193 "goal_expr_to_goal.m"
                  }
#line 194 "goal_expr_to_goal.m"
                  {
#line 194 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_662, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_664);
                  }
#line 195 "goal_expr_to_goal.m"
                  {
#line 195 "goal_expr_to_goal.m"
                    MR_Word base;
#line 195 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 195 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_663));
#line 195 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_664));
#line 195 "goal_expr_to_goal.m"
                  }
#line 188 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 16:
#line 198 "goal_expr_to_goal.m"
                {
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_533_533;
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_667 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_668;
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_669;
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_670 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_671;
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_672 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_673 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_674;

#line 199 "goal_expr_to_goal.m"
                  {
#line 199 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var0_673, &hlds__make_hlds__goal_expr_to_goal__Var_674);
                  }
#line 200 "goal_expr_to_goal.m"
                  {
#line 200 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_670, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_671, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 203 "goal_expr_to_goal.m"
                  {
#line 203 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_533_533 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_533_533, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_533_533, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_674));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_533_533, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_672));
#line 203 "goal_expr_to_goal.m"
                  }
#line 203 "goal_expr_to_goal.m"
                  {
#line 203 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_668 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_668, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_668, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_533_533));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_668, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_671));
#line 203 "goal_expr_to_goal.m"
                  }
#line 204 "goal_expr_to_goal.m"
                  {
#line 204 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_667, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_669);
                  }
#line 205 "goal_expr_to_goal.m"
                  {
#line 205 "goal_expr_to_goal.m"
                    MR_Word base;
#line 205 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 205 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_668));
#line 205 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_669));
#line 205 "goal_expr_to_goal.m"
                  }
#line 198 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 17:
#line 300 "goal_expr_to_goal.m"
                {
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_809_809;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutables0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_107;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GetGoals_108;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SetGoals_109;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal1_110;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_466_466;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_467_467;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_468_468;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_469_469;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_471_471;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_682 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_683;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_684;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_685;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_686;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_687;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_688 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_689;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_690;

#line 301 "goal_expr_to_goal.m"
                  {
#line 301 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_466_466 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_466_466, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_466_466, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_466_466, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_466_466, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_682));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_466_466, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_466_466, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Renaming_19));
#line 301 "goal_expr_to_goal.m"
                  }
#line 7883 "hlds.make_hlds.goal_expr_to_goal.c"
                  hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_809_809 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 301 "goal_expr_to_goal.m"
                  {
#line 301 "goal_expr_to_goal.m"
                    mercury__list__map4_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_809_809, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_809_809, hlds__make_hlds__goal_expr_to_goal__V_466_466, hlds__make_hlds__goal_expr_to_goal__Mutables0_97, &hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98, &hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99, &hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100, &hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101);
                  }
#line 312 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "goal_expr_to_goal.m"
                    {
#line 314 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_107 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__StateVars_685 = hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99;
#line 316 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__GetGoals_108 = hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100;
#line 317 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__SetGoals_109 = hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101;
#line 313 "goal_expr_to_goal.m"
                    }
#line 312 "goal_expr_to_goal.m"
                  else
#line 305 "goal_expr_to_goal.m"
                    {
#line 305 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96, (MR_Integer) 0)));
#line 305 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_103;
#line 305 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104;
#line 305 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105;
#line 305 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106;

#line 306 "goal_expr_to_goal.m"
                      {
#line 306 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_682, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_102, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_103, &hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104, &hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105, &hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106);
                      }
#line 308 "goal_expr_to_goal.m"
                      {
#line 308 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 308 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_107, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104));
#line 308 "goal_expr_to_goal.m"
                      }
#line 309 "goal_expr_to_goal.m"
                      {
#line 309 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__StateVars_685 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars_685, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVar_103));
#line 309 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars_685, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99));
#line 309 "goal_expr_to_goal.m"
                      }
#line 310 "goal_expr_to_goal.m"
                      {
#line 310 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__GetGoals_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_108, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105));
#line 310 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100));
#line 310 "goal_expr_to_goal.m"
                      }
#line 311 "goal_expr_to_goal.m"
                      {
#line 311 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__SetGoals_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_109, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106));
#line 311 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_109, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101));
#line 311 "goal_expr_to_goal.m"
                      }
#line 305 "goal_expr_to_goal.m"
                    }
#line 320 "goal_expr_to_goal.m"
                  {
#line 320 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_469_469 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_469_469, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal0_688));
#line 320 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_469_469, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "goal_expr_to_goal.m"
                  }
#line 320 "goal_expr_to_goal.m"
                  {
#line 320 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_468_468 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_809_809, hlds__make_hlds__goal_expr_to_goal__V_469_469, hlds__make_hlds__goal_expr_to_goal__SetGoals_109);
                  }
#line 320 "goal_expr_to_goal.m"
                  {
#line 320 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_467_467 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_809_809, hlds__make_hlds__goal_expr_to_goal__GetGoals_108, hlds__make_hlds__goal_expr_to_goal__V_468_468);
                  }
#line 320 "goal_expr_to_goal.m"
                  {
#line 320 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__SubGoal1_110 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__goal_expr_to_goal__Context_682, hlds__make_hlds__goal_expr_to_goal__V_467_467);
                  }
#line 322 "goal_expr_to_goal.m"
                  {
#line 322 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_682, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__StateVars_685, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_689, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_471_471);
                  }
#line 324 "goal_expr_to_goal.m"
                  {
#line 324 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal1_110, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_686, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_689, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_690, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_471_471, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 327 "goal_expr_to_goal.m"
                  {
#line 327 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_685, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_690, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202);
                  }
#line 331 "goal_expr_to_goal.m"
                  {
#line 331 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_687 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_687, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_687, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_687, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_687, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_107));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_687, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_687, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "goal_expr_to_goal.m"
                  }
#line 333 "goal_expr_to_goal.m"
                  {
#line 333 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_683 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 333 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_683, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 333 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_683, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_687));
#line 333 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_683, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_686));
#line 333 "goal_expr_to_goal.m"
                  }
#line 334 "goal_expr_to_goal.m"
                  {
#line 334 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_682, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_684);
                  }
#line 335 "goal_expr_to_goal.m"
                  {
#line 335 "goal_expr_to_goal.m"
                    MR_Word base;
#line 335 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 335 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_683));
#line 335 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_684));
#line 335 "goal_expr_to_goal.m"
                  }
#line 300 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 18:
#line 208 "goal_expr_to_goal.m"
                {
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Outer0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Inner0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MainGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Outer_64;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Inner_86;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_90;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_679 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_680;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_681;

#line 212 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 212 "goal_expr_to_goal.m"
                  else
#line 213 "goal_expr_to_goal.m"
                    {
#line 213 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52, (MR_Integer) 0)));
#line 213 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars_57;

#line 214 "goal_expr_to_goal.m"
                      {
#line 214 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OutputVars0_56, &hlds__make_hlds__goal_expr_to_goal__OutputVars_57);
                      }
#line 216 "goal_expr_to_goal.m"
                      {
#line 216 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 216 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputVars_57));
#line 216 "goal_expr_to_goal.m"
                      }
#line 213 "goal_expr_to_goal.m"
                    }
#line 8120 "hlds.make_hlds.goal_expr_to_goal.c"
                  if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Outer0_50)) == (MR_mktag((MR_Integer) 0))))
#line 8122 "hlds.make_hlds.goal_expr_to_goal.c"
                    {
#line 8124 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
#line 8126 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59;
#line 8128 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_60;
#line 8130 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_61;
#line 8132 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89;
#line 8134 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_483_483;
#line 8136 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_484_484;
#line 8138 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_485_485;
#line 8140 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_511_511;

#line 220 "goal_expr_to_goal.m"
                      {
#line 220 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58, &hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59);
                      }
#line 222 "goal_expr_to_goal.m"
                      {
#line 222 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59, &hlds__make_hlds__goal_expr_to_goal__OuterDI_60, &hlds__make_hlds__goal_expr_to_goal__OuterUO_61, &hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_483_483, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_484_484, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_485_485);
                      }
#line 225 "goal_expr_to_goal.m"
                      {
#line 225 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_60));
#line 225 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_61));
#line 225 "goal_expr_to_goal.m"
                      }
#line 8163 "hlds.make_hlds.goal_expr_to_goal.c"
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
#line 8165 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 8167 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 8169 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68;
#line 8171 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73;
#line 8173 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74;
#line 8175 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75;
#line 8177 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_76;
#line 8179 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77;
#line 8181 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78;
#line 8183 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83;
#line 8185 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_84;
#line 8187 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_85;
#line 8189 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_488_488;
#line 8191 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_489;
#line 8193 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_490;
#line 8195 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_491;
#line 8197 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_492;
#line 8199 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_493;
#line 8201 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_494;
#line 8203 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_495;
#line 8205 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_496;
#line 8207 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_499_499;
#line 8209 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_500_500;
#line 8211 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_501_501;

#line 235 "goal_expr_to_goal.m"
                          {
#line 235 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68);
                          }
#line 237 "goal_expr_to_goal.m"
                          {
#line 237 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_483_483, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_484_484, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_488_488, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_485_485, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_489);
                          }
#line 245 "goal_expr_to_goal.m"
                          {
#line 245 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_490, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_488_488, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_491, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_492, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_493, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_489, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_494);
                          }
#line 248 "goal_expr_to_goal.m"
                          {
#line 248 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_76, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74));
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_76, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75));
#line 248 "goal_expr_to_goal.m"
                          }
#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_490, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_491, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_496, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_492, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_493, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_494, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_499_499);
                          }
#line 253 "goal_expr_to_goal.m"
                          {
#line 253 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_76));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77));
#line 253 "goal_expr_to_goal.m"
                          }
#line 254 "goal_expr_to_goal.m"
                          {
#line 254 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_496, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_500_500, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_501_501, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204);
                          }
#line 266 "goal_expr_to_goal.m"
                          {
#line 266 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, &hlds__make_hlds__goal_expr_to_goal__InnerDI_84, &hlds__make_hlds__goal_expr_to_goal__InnerUO_85, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_501_501, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_511_511, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_500_500, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_499_499, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                          }
#line 268 "goal_expr_to_goal.m"
                          {
#line 268 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_84));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_85));
#line 268 "goal_expr_to_goal.m"
                          }
#line 8274 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 8276 "hlds.make_hlds.goal_expr_to_goal.c"
                      else
#line 8278 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 8280 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_800;
#line 8282 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_87;
#line 8284 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_88;
#line 8286 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_677;
#line 8288 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_678;
#line 8290 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_914;
#line 8292 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_915;
#line 8294 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_916;
#line 8296 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_917;
#line 8298 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918;
#line 8300 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_921;
#line 8302 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_922;
#line 8304 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_923;
#line 8306 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_924;
#line 8308 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_925;
#line 8310 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_926;
#line 8312 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_927;

#line 245 "goal_expr_to_goal.m"
                          {
#line 245 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_914, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_483_483, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_915, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_921, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_484_484, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_922, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_923, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_924, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_485_485, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_925);
                          }
#line 248 "goal_expr_to_goal.m"
                          {
#line 248 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_916 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_916, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_914));
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_916, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_915));
#line 248 "goal_expr_to_goal.m"
                          }
#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_917, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_483_483, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_921, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_926, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_922, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_927, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_923, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_924, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_925, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                          }
#line 253 "goal_expr_to_goal.m"
                          {
#line 253 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_916));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_917));
#line 253 "goal_expr_to_goal.m"
                          }
#line 254 "goal_expr_to_goal.m"
                          {
#line 254 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_927, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_483_483, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_511_511, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_926, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204);
                          }
#line 274 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerDI0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 274 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerUO0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
#line 8354 "hlds.make_hlds.goal_expr_to_goal.c"
                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_800 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 275 "goal_expr_to_goal.m"
                          {
#line 275 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_800, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_87, &hlds__make_hlds__goal_expr_to_goal__InnerDI_677);
                          }
#line 276 "goal_expr_to_goal.m"
                          {
#line 276 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_800, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_88, &hlds__make_hlds__goal_expr_to_goal__InnerUO_678);
                          }
#line 277 "goal_expr_to_goal.m"
                          {
#line 277 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_677));
#line 277 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_678));
#line 277 "goal_expr_to_goal.m"
                          }
#line 8376 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 281 "goal_expr_to_goal.m"
                      {
#line 281 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_511_511, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202);
                      }
#line 8383 "hlds.make_hlds.goal_expr_to_goal.c"
                    }
#line 8385 "hlds.make_hlds.goal_expr_to_goal.c"
                  else
#line 8387 "hlds.make_hlds.goal_expr_to_goal.c"
                    {
#line 8389 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_798 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 8391 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
#line 8393 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 1)));
#line 8395 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_675;
#line 8397 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_676;

#line 228 "goal_expr_to_goal.m"
                      {
#line 228 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_798, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterDI0_65, &hlds__make_hlds__goal_expr_to_goal__OuterDI_675);
                      }
#line 229 "goal_expr_to_goal.m"
                      {
#line 229 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_798, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterUO0_66, &hlds__make_hlds__goal_expr_to_goal__OuterUO_676);
                      }
#line 230 "goal_expr_to_goal.m"
                      {
#line 230 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_675));
#line 230 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_676));
#line 230 "goal_expr_to_goal.m"
                      }
#line 8420 "hlds.make_hlds.goal_expr_to_goal.c"
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
#line 8422 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 8424 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_827 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 8426 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_828;
#line 8428 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_840;
#line 8430 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_841;
#line 8432 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_842;
#line 8434 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874;
#line 8436 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_875;
#line 8438 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_876;
#line 8440 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_877;
#line 8442 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_878;
#line 8444 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879;
#line 8446 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_488_889;
#line 8448 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_890;
#line 8450 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_891;
#line 8452 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_892;
#line 8454 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_893;
#line 8456 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_894;
#line 8458 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_895;
#line 8460 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_896;
#line 8462 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_897;
#line 8464 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_499_898;
#line 8466 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_500_899;
#line 8468 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_501_900;

#line 235 "goal_expr_to_goal.m"
                          {
#line 235 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_827, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_828);
                          }
#line 237 "goal_expr_to_goal.m"
                          {
#line 237 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_828, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_840, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_488_889, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_890);
                          }
#line 245 "goal_expr_to_goal.m"
                          {
#line 245 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_875, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_876, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_891, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_488_889, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_892, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_893, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_894, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_890, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_895);
                          }
#line 248 "goal_expr_to_goal.m"
                          {
#line 248 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_877 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_877, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_875));
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_877, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_876));
#line 248 "goal_expr_to_goal.m"
                          }
#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_878, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_891, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_896, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_892, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_897, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_893, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_894, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_895, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_499_898);
                          }
#line 253 "goal_expr_to_goal.m"
                          {
#line 253 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_877));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_878));
#line 253 "goal_expr_to_goal.m"
                          }
#line 254 "goal_expr_to_goal.m"
                          {
#line 254 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_897, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_500_899, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_501_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_896, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204);
                          }
#line 266 "goal_expr_to_goal.m"
                          {
#line 266 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_840, &hlds__make_hlds__goal_expr_to_goal__InnerDI_841, &hlds__make_hlds__goal_expr_to_goal__InnerUO_842, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_501_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_500_899, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_499_898, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                          }
#line 268 "goal_expr_to_goal.m"
                          {
#line 268 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_841));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_842));
#line 268 "goal_expr_to_goal.m"
                          }
#line 8531 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 8533 "hlds.make_hlds.goal_expr_to_goal.c"
                      else
#line 8535 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 8537 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_855;
#line 8539 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_849;
#line 8541 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_850;
#line 8543 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_853;
#line 8545 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_854;
#line 8547 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_934;
#line 8549 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_935;
#line 8551 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_936;
#line 8553 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_937;
#line 8555 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938;
#line 8557 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_941;
#line 8559 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_942;
#line 8561 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_943;
#line 8563 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_944;
#line 8565 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_945;
#line 8567 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_946;
#line 8569 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_947;

#line 245 "goal_expr_to_goal.m"
                          {
#line 245 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_934, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_935, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_941, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_942, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_943, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_944, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_945);
                          }
#line 248 "goal_expr_to_goal.m"
                          {
#line 248 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_936 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_936, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_934));
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_936, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_935));
#line 248 "goal_expr_to_goal.m"
                          }
#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_937, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_941, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_946, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_942, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_947, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_492_943, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_493_944, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_945, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                          }
#line 253 "goal_expr_to_goal.m"
                          {
#line 253 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_936));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_937));
#line 253 "goal_expr_to_goal.m"
                          }
#line 254 "goal_expr_to_goal.m"
                          {
#line 254 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_496_947, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_495_946, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204);
                          }
#line 274 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerDI0_849 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 274 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerUO0_850 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
#line 8611 "hlds.make_hlds.goal_expr_to_goal.c"
                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_855 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 275 "goal_expr_to_goal.m"
                          {
#line 275 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_855, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_849, &hlds__make_hlds__goal_expr_to_goal__InnerDI_853);
                          }
#line 276 "goal_expr_to_goal.m"
                          {
#line 276 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_855, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_850, &hlds__make_hlds__goal_expr_to_goal__InnerUO_854);
                          }
#line 277 "goal_expr_to_goal.m"
                          {
#line 277 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_853));
#line 277 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_854));
#line 277 "goal_expr_to_goal.m"
                          }
#line 8633 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 8635 "hlds.make_hlds.goal_expr_to_goal.c"
                    }
#line 258 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "goal_expr_to_goal.m"
                    {
#line 260 "goal_expr_to_goal.m"
                      {
#line 260 "goal_expr_to_goal.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds\'/16", (MR_String) "atomic HLDSGoals = []");
#line 260 "goal_expr_to_goal.m"
                        return;
                      }
#line 259 "goal_expr_to_goal.m"
                    }
#line 258 "goal_expr_to_goal.m"
                  else
#line 257 "goal_expr_to_goal.m"
                    {
#line 257 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, (MR_Integer) 0)));
#line 257 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, (MR_Integer) 1)));
#line 257 "goal_expr_to_goal.m"
                    }
#line 285 "goal_expr_to_goal.m"
                  {
#line 285 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__ShortHand_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 285 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 0) = ((MR_Box) ((MR_Integer) 0));
#line 285 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Outer_64));
#line 285 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Inner_86));
#line 285 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55));
#line 285 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80));
#line 285 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81));
#line 285 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "goal_expr_to_goal.m"
                  }
#line 287 "goal_expr_to_goal.m"
                  {
#line 287 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_680 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_680, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 287 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_680, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_90));
#line 287 "goal_expr_to_goal.m"
                  }
#line 288 "goal_expr_to_goal.m"
                  {
#line 288 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_681);
                  }
#line 289 "goal_expr_to_goal.m"
                  {
#line 289 "goal_expr_to_goal.m"
                    MR_Word base;
#line 289 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 289 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_680));
#line 289 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_681));
#line 289 "goal_expr_to_goal.m"
                  }
#line 208 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 19:
#line 338 "goal_expr_to_goal.m"
                {
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 7)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_697 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_698 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_699 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));

#line 360 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_699 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "goal_expr_to_goal.m"
                    {
#line 361 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_698, hlds__make_hlds__goal_expr_to_goal__Then0_113, hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114, hlds__make_hlds__goal_expr_to_goal__Catches0_115, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116, hlds__make_hlds__goal_expr_to_goal__Context_697, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
#line 361 "goal_expr_to_goal.m"
                      return;
                    }
#line 360 "goal_expr_to_goal.m"
                  else
#line 340 "goal_expr_to_goal.m"
                    {
#line 340 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_693 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_699, (MR_Integer) 0)));

#line 348 "goal_expr_to_goal.m"
                      if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "goal_expr_to_goal.m"
                        {
#line 342 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_691;

#line 343 "goal_expr_to_goal.m"
                          {
#line 343 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_693, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_691);
                          }
#line 344 "goal_expr_to_goal.m"
                          {
#line 344 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_693, hlds__make_hlds__goal_expr_to_goal__IOStateVar_691, hlds__make_hlds__goal_expr_to_goal__SubGoal0_698, hlds__make_hlds__goal_expr_to_goal__Then0_113, hlds__make_hlds__goal_expr_to_goal__Catches0_115, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116, hlds__make_hlds__goal_expr_to_goal__Context_697, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
#line 344 "goal_expr_to_goal.m"
                            return;
                          }
#line 342 "goal_expr_to_goal.m"
                        }
#line 348 "goal_expr_to_goal.m"
                      else
#line 349 "goal_expr_to_goal.m"
                        {
#line 349 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_119;
#line 349 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_120;
#line 349 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_456_456;

#line 354 "goal_expr_to_goal.m"
                          {
#line 354 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Msg_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_119, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_697));
#line 354 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30])));
#line 354 "goal_expr_to_goal.m"
                          }
#line 356 "goal_expr_to_goal.m"
                          {
#line 356 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_456_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_456_456, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_119));
#line 356 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_456_456, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 356 "goal_expr_to_goal.m"
                          }
#line 355 "goal_expr_to_goal.m"
                          {
#line 355 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Spec_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 355 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 355 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_120, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_456_456));
#line 355 "goal_expr_to_goal.m"
                          }
#line 357 "goal_expr_to_goal.m"
                          {
#line 357 "goal_expr_to_goal.m"
                            MR_Word base;
#line 357 "goal_expr_to_goal.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "goal_expr_to_goal.m"
                            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212 = base;
#line 357 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_120));
#line 357 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211));
#line 357 "goal_expr_to_goal.m"
                          }
#line 358 "goal_expr_to_goal.m"
                          {
#line 358 "goal_expr_to_goal.m"
                            *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_697);
                          }
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201;
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203;
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205;
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207;
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209;
#line 349 "goal_expr_to_goal.m"
                        }
#line 340 "goal_expr_to_goal.m"
                    }
#line 338 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 20:
#line 441 "goal_expr_to_goal.m"
                {
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__P_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Q_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_346_346;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_347_347;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_728 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_729;

#line 445 "goal_expr_to_goal.m"
                  {
#line 445 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_347_347 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_347_347, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_347_347, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_728));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_347_347, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_147));
#line 445 "goal_expr_to_goal.m"
                  }
#line 445 "goal_expr_to_goal.m"
                  {
#line 445 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_346_346 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_346_346, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_728));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_346_346, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_146));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_346_346, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_347_347));
#line 445 "goal_expr_to_goal.m"
                  }
#line 444 "goal_expr_to_goal.m"
                  {
#line 444 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_729 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 444 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_729, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 444 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_729, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_728));
#line 444 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_729, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_346_346));
#line 444 "goal_expr_to_goal.m"
                  }
#line 446 "goal_expr_to_goal.m"
                  /* direct tailcall eliminated */
#line 446 "goal_expr_to_goal.m"
                  {
#line 446 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_729;

#line 446 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 446 "goal_expr_to_goal.m"
                  }
#line 446 "goal_expr_to_goal.m"
                  continue;
#line 441 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 21:
#line 450 "goal_expr_to_goal.m"
                {
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_148;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_149;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_333_333;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_334_334;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_335_335;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_336_336;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_337_337;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_338_338;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_345_345;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_730 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_731;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_732;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_733 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_734 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 460 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_150_150;

#line 457 "goal_expr_to_goal.m"
                  {
#line 457 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_733, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_148, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_333_333, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_334_334, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_335_335, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_338_338);
                  }
#line 460 "goal_expr_to_goal.m"
                  {
#line 460 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_734, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_333_333, &hlds__make_hlds__goal_expr_to_goal__V_150_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_334_334, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_335_335, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 463 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201;
#line 464 "goal_expr_to_goal.m"
                  {
#line 464 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_345_345 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 464 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_345_345, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_148));
#line 464 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_345_345, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_149));
#line 464 "goal_expr_to_goal.m"
                  }
#line 464 "goal_expr_to_goal.m"
                  {
#line 464 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_731 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_731, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 464 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_731, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_345_345));
#line 464 "goal_expr_to_goal.m"
                  }
#line 465 "goal_expr_to_goal.m"
                  {
#line 465 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_730, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_732);
                  }
#line 466 "goal_expr_to_goal.m"
                  {
#line 466 "goal_expr_to_goal.m"
                    MR_Word base;
#line 466 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 466 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_731));
#line 466 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_732));
#line 466 "goal_expr_to_goal.m"
                  }
#line 450 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 22:
#line 468 "goal_expr_to_goal.m"
                {
#line 468 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__EventName_151 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_153;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_154;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_155;
#line 468 "goal_expr_to_goal.m"
                  MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_156;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Modes_157;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Details_158;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_160;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_161;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_318_318;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_319_319;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_320_320;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_321_321;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_324_324;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_325_325;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_326_326;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_736 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_737;

#line 469 "goal_expr_to_goal.m"
                  {
#line 469 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_152, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_153);
                  }
#line 470 "goal_expr_to_goal.m"
                  {
#line 470 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_153, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_154);
                  }
#line 472 "goal_expr_to_goal.m"
                  {
#line 472 "goal_expr_to_goal.m"
                    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_154, &hlds__make_hlds__goal_expr_to_goal__HeadVars_155, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_318_318, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_319_319, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_320_320);
                  }
#line 474 "goal_expr_to_goal.m"
                  {
#line 474 "goal_expr_to_goal.m"
                    mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__HeadVars_155, &hlds__make_hlds__goal_expr_to_goal__Arity_156);
                  }
#line 475 "goal_expr_to_goal.m"
                  {
#line 475 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_321_321 = parse_tree__prog_mode__in_mode_0_f_0();
                  }
#line 475 "goal_expr_to_goal.m"
                  {
#line 475 "goal_expr_to_goal.m"
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__goal_expr_to_goal__Arity_156, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_321_321)), &hlds__make_hlds__goal_expr_to_goal__Modes_157);
                  }
#line 476 "goal_expr_to_goal.m"
                  {
#line 476 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Details_158 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Details_158, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_151));
#line 476 "goal_expr_to_goal.m"
                  }
#line 477 "goal_expr_to_goal.m"
                  {
#line 477 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Details_158));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_155));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Modes_157));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159, 5) = ((MR_Box) ((MR_Integer) 0));
#line 477 "goal_expr_to_goal.m"
                  }
#line 479 "goal_expr_to_goal.m"
                  {
#line 479 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_736, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_737);
                  }
#line 480 "goal_expr_to_goal.m"
                  {
#line 480 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_160, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr0_159));
#line 480 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_160, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_737));
#line 480 "goal_expr_to_goal.m"
                  }
#line 481 "goal_expr_to_goal.m"
                  {
#line 481 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_324_324 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_324_324, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_151));
#line 481 "goal_expr_to_goal.m"
                  }
#line 481 "goal_expr_to_goal.m"
                  {
#line 481 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__CallId_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_324_324));
#line 481 "goal_expr_to_goal.m"
                  }
#line 482 "goal_expr_to_goal.m"
                  {
#line 482 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_325_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_325_325, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_161));
#line 482 "goal_expr_to_goal.m"
                  }
#line 482 "goal_expr_to_goal.m"
                  {
#line 482 "goal_expr_to_goal.m"
                    hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_155, hlds__make_hlds__goal_expr_to_goal__ArgTerms_154, hlds__make_hlds__goal_expr_to_goal__Context_736, hlds__make_hlds__goal_expr_to_goal__V_325_325, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_160, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_319_319, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_326_326, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_318_318, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_320_320, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_212);
                  }
#line 485 "goal_expr_to_goal.m"
                  {
#line 485 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_326_326, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_202);
#line 485 "goal_expr_to_goal.m"
                    return;
                  }
#line 468 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
            }
#line 89 "goal_expr_to_goal.m"
            break;
#line 89 "goal_expr_to_goal.m"
        }
#line 89 "goal_expr_to_goal.m"
      }
#line 89 "goal_expr_to_goal.m"
      break;
#line 89 "goal_expr_to_goal.m"
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
