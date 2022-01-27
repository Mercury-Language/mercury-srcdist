/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 159 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 174 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0;

#line 177 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1;

#line 180 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2];

#line 183 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2];

#line 186 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2];

#line 189 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 192 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 194 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2);

#line 197 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 200 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 202 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 204 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3);

#line 1259 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1259 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1259 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1259 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1259 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1259 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);

#line 1245 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1245 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3);

#line 1237 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1237 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1237 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1237 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7);

#line 1232 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void);

#line 1188 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1188 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1188 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1188 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1188 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1188 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10);

#line 1174 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1174 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12);

#line 1107 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);

#line 968 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);

#line 922 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);

#line 893 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);

#line 860 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

#line 829 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 829 "goal_expr_to_goal.m"
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



#line 1004 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1012 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1020 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1029 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1037 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1045 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
  (MR_String) "loc_whole_goal",
  (MR_Integer) 0
};

#line 1051 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
  (MR_String) "loc_inside_atomic_goal",
  (MR_Integer) 1
};

#line 1057 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1
};

#line 1063 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0
};

#line 1069 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1075 "hlds.make_hlds.goal_expr_to_goal.c"
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

#line 1092 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 1095 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1097 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2)
#line 1099 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1101 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1103 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1106 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1108 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal__succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2));
    }
#line 1111 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1113 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1115 "hlds.make_hlds.goal_expr_to_goal.c"
}

#line 1118 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 1121 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1123 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 1125 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3)
#line 1127 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1129 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1131 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1;

#line 1134 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1136 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3));
    }
#line 1139 "hlds.make_hlds.goal_expr_to_goal.c"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1));
#line 1141 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1143 "hlds.make_hlds.goal_expr_to_goal.c"
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
#line 1185 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1187 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1 == hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2);

#line 1190 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1192 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 23 "goal_expr_to_goal.m"
}

#line 1259 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1259 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1259 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1259 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1259 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1259 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1259 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26)
#line 1259 "goal_expr_to_goal.m"
{
#line 1264 "goal_expr_to_goal.m"
  {
#line 1264 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1264 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_18;
#line 1264 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_20;
#line 1264 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 1264 "goal_expr_to_goal.m"
    MR_Integer hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 1264 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;

#line 1265 "goal_expr_to_goal.m"
    {
#line 1265 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_12, &hlds__make_hlds__goal_expr_to_goal__HeadVars_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);
    }
#line 1268 "goal_expr_to_goal.m"
    {
#line 1268 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1268 "goal_expr_to_goal.m"
    {
#line 1268 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    }
#line 1269 "goal_expr_to_goal.m"
    {
#line 1269 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UpdateStr_11));
#line 1269 "goal_expr_to_goal.m"
    }
#line 1268 "goal_expr_to_goal.m"
    {
#line 1268 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 1268 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 1268 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_18));
#line 1268 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1268 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1268 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1268 "goal_expr_to_goal.m"
    }
#line 1270 "goal_expr_to_goal.m"
    {
#line 1270 "goal_expr_to_goal.m"
      MR_Word base;
#line 1270 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_14 = base;
#line 1270 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_20));
#line 1270 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_13));
#line 1270 "goal_expr_to_goal.m"
    }
#line 1264 "goal_expr_to_goal.m"
  }
#line 1259 "goal_expr_to_goal.m"
}

#line 1245 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1245 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3)
#line 1245 "goal_expr_to_goal.m"
{
#line 1250 "goal_expr_to_goal.m"
  {
#line 1250 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1250 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;

#line 1250 "goal_expr_to_goal.m"
#line 1250 "goal_expr_to_goal.m"
    switch (hlds__make_hlds__goal_expr_to_goal__AccessType_3) {
#line 1250 "goal_expr_to_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1250 "goal_expr_to_goal.m"
      case (MR_Integer) 0:
#line 1254 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30]);
#line 1250 "goal_expr_to_goal.m"
        break;
#line 1250 "goal_expr_to_goal.m"
      case (MR_Integer) 1:
#line 1251 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32]);
#line 1250 "goal_expr_to_goal.m"
        break;
#line 1250 "goal_expr_to_goal.m"
    }
#line 1250 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;
#line 1250 "goal_expr_to_goal.m"
  }
#line 1245 "goal_expr_to_goal.m"
}

#line 1237 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1237 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1237 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1237 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7)
#line 1237 "goal_expr_to_goal.m"
{
#line 1239 "goal_expr_to_goal.m"
  {
#line 1239 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1239 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1239 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_9;
#line 1239 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_10_10;
#line 1239 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_11_11;

#line 1240 "goal_expr_to_goal.m"
    {
#line 1240 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_10_10 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1240 "goal_expr_to_goal.m"
    {
#line 1240 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_10_10));
#line 1240 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Atom_5));
#line 1240 "goal_expr_to_goal.m"
    }
#line 1241 "goal_expr_to_goal.m"
    {
#line 1241 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arg_6));
#line 1241 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "goal_expr_to_goal.m"
    }
#line 1241 "goal_expr_to_goal.m"
    {
#line 1241 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_9, hlds__make_hlds__goal_expr_to_goal__V_11_11, hlds__make_hlds__goal_expr_to_goal__Context_7, &hlds__make_hlds__goal_expr_to_goal__Term_8);
    }
#line 1239 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1239 "goal_expr_to_goal.m"
  }
#line 1237 "goal_expr_to_goal.m"
}

#line 1232 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
#line 1232 "goal_expr_to_goal.m"
{
#line 1234 "goal_expr_to_goal.m"
  {
#line 1234 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1234 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1234 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_2_2;

#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_2_2 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_2_2));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1235 "goal_expr_to_goal.m"
    }
#line 1234 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1234 "goal_expr_to_goal.m"
  }
#line 1232 "goal_expr_to_goal.m"
}

#line 1188 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1188 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1188 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1188 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1188 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1188 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10)
#line 1188 "goal_expr_to_goal.m"
{
#line 1194 "goal_expr_to_goal.m"
  {
#line 1194 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1194 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__Catches_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "goal_expr_to_goal.m"
      if ((hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1215 "goal_expr_to_goal.m"
        {
#line 1215 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Rethrow_20;
#line 1215 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
#line 1215 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 1215 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

#line 1218 "goal_expr_to_goal.m"
          {
#line 1218 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_21_21 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1218 "goal_expr_to_goal.m"
          {
#line 1218 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
#line 1218 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
#line 1218 "goal_expr_to_goal.m"
          }
#line 1219 "goal_expr_to_goal.m"
          {
#line 1219 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7);
          }
#line 1220 "goal_expr_to_goal.m"
          {
#line 1220 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6));
#line 1220 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1220 "goal_expr_to_goal.m"
          }
#line 1219 "goal_expr_to_goal.m"
          {
#line 1219 "goal_expr_to_goal.m"
            MR_Word base;
#line 1219 "goal_expr_to_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1219 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 1219 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Rethrow_20));
#line 1219 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_24_24));
#line 1219 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1219 "goal_expr_to_goal.m"
          }
#line 1215 "goal_expr_to_goal.m"
        }
#line 1214 "goal_expr_to_goal.m"
      else
#line 1204 "goal_expr_to_goal.m"
        {
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16;
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17;
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_18;
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19;
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, (MR_Integer) 0)));
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_42;
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_43_43;
#line 1204 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_44_44;

#line 1204 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 0)));
#line 1204 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 1)));
#line 1208 "goal_expr_to_goal.m"
          {
#line 1208 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Context_18 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17);
          }
#line 1210 "goal_expr_to_goal.m"
          {
#line 1210 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16));
#line 1210 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1210 "goal_expr_to_goal.m"
          }
#line 1240 "goal_expr_to_goal.m"
          {
#line 1240 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_43_43 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1240 "goal_expr_to_goal.m"
          {
#line 1240 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_43_43));
#line 1240 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
#line 1240 "goal_expr_to_goal.m"
          }
#line 1241 "goal_expr_to_goal.m"
          {
#line 1241 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1241 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "goal_expr_to_goal.m"
          }
#line 1241 "goal_expr_to_goal.m"
          {
#line 1241 "goal_expr_to_goal.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_42, hlds__make_hlds__goal_expr_to_goal__V_44_44, hlds__make_hlds__goal_expr_to_goal__Context_18, &hlds__make_hlds__goal_expr_to_goal__V_29_29);
          }
#line 1209 "goal_expr_to_goal.m"
          {
#line 1209 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1209 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 1209 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 1209 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1209 "goal_expr_to_goal.m"
          }
#line 1213 "goal_expr_to_goal.m"
          {
#line 1213 "goal_expr_to_goal.m"
            MR_Word base;
#line 1213 "goal_expr_to_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17));
#line 1213 "goal_expr_to_goal.m"
          }
#line 1204 "goal_expr_to_goal.m"
        }
#line 1194 "goal_expr_to_goal.m"
    else
#line 1194 "goal_expr_to_goal.m"
      {
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPattern_11;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstGoal_12;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__RestCatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 1)));
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_14;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 0)));
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_50_50;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_51_51;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_52_52;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_54_54;
#line 1194 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_55_55;

#line 1194 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstPattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 0)));
#line 1194 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 1)));
#line 1195 "goal_expr_to_goal.m"
        {
#line 1195 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7, hlds__make_hlds__goal_expr_to_goal__RestCatches_13, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, &hlds__make_hlds__goal_expr_to_goal__ElseGoal_14);
        }
#line 1228 "goal_expr_to_goal.m"
        {
#line 1228 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1229 "goal_expr_to_goal.m"
        {
#line 1229 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_52_52 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
        }
#line 1229 "goal_expr_to_goal.m"
        {
#line 1229 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_52_52));
#line 1229 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
#line 1229 "goal_expr_to_goal.m"
        }
#line 1230 "goal_expr_to_goal.m"
        {
#line 1230 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPattern_11));
#line 1230 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1230 "goal_expr_to_goal.m"
        }
#line 1230 "goal_expr_to_goal.m"
        {
#line 1230 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1230 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_55_55));
#line 1230 "goal_expr_to_goal.m"
        }
#line 1228 "goal_expr_to_goal.m"
        {
#line 1228 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_50_50));
#line 1228 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_51_51));
#line 1228 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_54_54));
#line 1228 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1228 "goal_expr_to_goal.m"
        }
#line 1199 "goal_expr_to_goal.m"
        {
#line 1199 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_33_33 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1199 "goal_expr_to_goal.m"
        {
#line 1199 "goal_expr_to_goal.m"
          MR_Word base;
#line 1199 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1199 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1199 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1199 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15));
#line 1199 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstGoal_12));
#line 1199 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_14));
#line 1199 "goal_expr_to_goal.m"
        }
#line 1194 "goal_expr_to_goal.m"
      }
#line 1194 "goal_expr_to_goal.m"
  }
#line 1188 "goal_expr_to_goal.m"
}

#line 1174 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1174 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12)
#line 1174 "goal_expr_to_goal.m"
{
#line 1179 "goal_expr_to_goal.m"
  {
#line 1179 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1179 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13;
#line 1179 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CatchChain_14;
#line 1179 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_15_15;
#line 1179 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_22;
#line 1179 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 1179 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

#line 1240 "goal_expr_to_goal.m"
    {
#line 1240 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1240 "goal_expr_to_goal.m"
    {
#line 1240 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 1240 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 1) = ((MR_Box) ((MR_String) "exception"));
#line 1240 "goal_expr_to_goal.m"
    }
#line 1241 "goal_expr_to_goal.m"
    {
#line 1241 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8));
#line 1241 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "goal_expr_to_goal.m"
    }
#line 1241 "goal_expr_to_goal.m"
    {
#line 1241 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_22, hlds__make_hlds__goal_expr_to_goal__V_24_24, hlds__make_hlds__goal_expr_to_goal__Context_11, &hlds__make_hlds__goal_expr_to_goal__V_15_15);
    }
#line 1180 "goal_expr_to_goal.m"
    {
#line 1180 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1180 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7));
#line 1180 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_15_15));
#line 1180 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1180 "goal_expr_to_goal.m"
    }
#line 1184 "goal_expr_to_goal.m"
    {
#line 1184 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8, hlds__make_hlds__goal_expr_to_goal__Catches_9, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10, &hlds__make_hlds__goal_expr_to_goal__CatchChain_14);
    }
#line 1186 "goal_expr_to_goal.m"
    {
#line 1186 "goal_expr_to_goal.m"
      MR_Word base;
#line 1186 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_12 = base;
#line 1186 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1186 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13));
#line 1186 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchChain_14));
#line 1186 "goal_expr_to_goal.m"
    }
#line 1179 "goal_expr_to_goal.m"
  }
#line 1174 "goal_expr_to_goal.m"
}

#line 1107 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
#line 1107 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
#line 1107 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64)
#line 1107 "goal_expr_to_goal.m"
{
#line 1117 "goal_expr_to_goal.m"
  {
#line 1117 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_37;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_38;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_42;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_51;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_52;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_75_75;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_88_88;
#line 1117 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_97_97;

#line 1118 "goal_expr_to_goal.m"
    {
#line 1118 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_96_96, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66);
    }
#line 1119 "goal_expr_to_goal.m"
    {
#line 1119 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_96_96, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67);
    }
#line 1121 "goal_expr_to_goal.m"
    {
#line 1121 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1121 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1121 "goal_expr_to_goal.m"
    }
#line 1122 "goal_expr_to_goal.m"
    {
#line 1122 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_38));
#line 1122 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1122 "goal_expr_to_goal.m"
    }
#line 1123 "goal_expr_to_goal.m"
    {
#line 1123 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
#line 1123 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1123 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1123 "goal_expr_to_goal.m"
    }
#line 1125 "goal_expr_to_goal.m"
    {
#line 1125 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_42);
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_97_97 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_97_97));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1235 "goal_expr_to_goal.m"
    }
#line 1129 "goal_expr_to_goal.m"
    {
#line 1129 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1129 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1129 "goal_expr_to_goal.m"
    }
#line 1128 "goal_expr_to_goal.m"
    {
#line 1128 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_71_71));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_72_72));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1128 "goal_expr_to_goal.m"
    }
#line 1134 "goal_expr_to_goal.m"
    {
#line 1134 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_75_75 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, hlds__make_hlds__goal_expr_to_goal__Context_28);
    }
#line 1132 "goal_expr_to_goal.m"
    {
#line 1132 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1132 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1132 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_75_75));
#line 1132 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1132 "goal_expr_to_goal.m"
    }
#line 1140 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1141 "goal_expr_to_goal.m"
      {
#line 1141 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
#line 1141 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_82_82;

#line 1144 "goal_expr_to_goal.m"
        {
#line 1144 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
#line 1144 "goal_expr_to_goal.m"
        }
#line 1146 "goal_expr_to_goal.m"
        {
#line 1146 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1146 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 1146 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1146 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
#line 1146 "goal_expr_to_goal.m"
        }
#line 1143 "goal_expr_to_goal.m"
        {
#line 1143 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1143 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_78_78));
#line 1143 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_82_82));
#line 1143 "goal_expr_to_goal.m"
        }
#line 1141 "goal_expr_to_goal.m"
      }
#line 1140 "goal_expr_to_goal.m"
    else
#line 1137 "goal_expr_to_goal.m"
      {
#line 1137 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25, (MR_Integer) 0)));

#line 1138 "goal_expr_to_goal.m"
        {
#line 1138 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
#line 1138 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_45));
#line 1138 "goal_expr_to_goal.m"
        }
#line 1137 "goal_expr_to_goal.m"
      }
#line 1150 "goal_expr_to_goal.m"
    {
#line 1150 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1150 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44));
#line 1150 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46));
#line 1150 "goal_expr_to_goal.m"
    }
#line 1154 "goal_expr_to_goal.m"
    {
#line 1154 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, hlds__make_hlds__goal_expr_to_goal__Catches_26, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27, hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48);
    }
#line 1161 "goal_expr_to_goal.m"
    {
#line 1161 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1161 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1161 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_88_88, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47));
#line 1161 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_88_88, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48));
#line 1161 "goal_expr_to_goal.m"
    }
#line 1159 "goal_expr_to_goal.m"
    {
#line 1159 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1159 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43));
#line 1159 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_88_88));
#line 1159 "goal_expr_to_goal.m"
    }
#line 1166 "goal_expr_to_goal.m"
    {
#line 1166 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_22, hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_29, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);
    }
#line 1170 "goal_expr_to_goal.m"
    {
#line 1170 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ShortHand_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1170 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1170 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50));
#line 1170 "goal_expr_to_goal.m"
    }
#line 1171 "goal_expr_to_goal.m"
    {
#line 1171 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1171 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_51));
#line 1171 "goal_expr_to_goal.m"
    }
#line 1172 "goal_expr_to_goal.m"
    {
#line 1172 "goal_expr_to_goal.m"
      MR_Word base;
#line 1172 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_30 = base;
#line 1172 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_52));
#line 1172 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_42));
#line 1172 "goal_expr_to_goal.m"
    }
#line 1117 "goal_expr_to_goal.m"
  }
#line 1107 "goal_expr_to_goal.m"
}

#line 968 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 968 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 968 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79)
#line 968 "goal_expr_to_goal.m"
{
#line 978 "goal_expr_to_goal.m"
  {
#line 978 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_166_166 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_39;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_40;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_44;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOUnify_51;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVars_66;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_67;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_99_99;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_112_112;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_114_114;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_125_125;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_126_126;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_127_127;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_128_128;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_129_129;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_130_130;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_131_131;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_132_132;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_138_138;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_139_139;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_140_140;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_141_141;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_142_142;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_143_143;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_144_144;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_145_145;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_154_154;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_155_155;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_156_156;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_161_161;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_162_162;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_164_164;
#line 978 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_165_165;

#line 979 "goal_expr_to_goal.m"
    {
#line 979 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_166_166, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81);
    }
#line 980 "goal_expr_to_goal.m"
    {
#line 980 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_166_166, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82);
    }
#line 982 "goal_expr_to_goal.m"
    {
#line 982 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 982 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 982 "goal_expr_to_goal.m"
    }
#line 983 "goal_expr_to_goal.m"
    {
#line 983 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_40));
#line 983 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 983 "goal_expr_to_goal.m"
    }
#line 984 "goal_expr_to_goal.m"
    {
#line 984 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 984 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
#line 984 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 984 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 984 "goal_expr_to_goal.m"
    }
#line 986 "goal_expr_to_goal.m"
    {
#line 986 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_44);
    }
#line 989 "goal_expr_to_goal.m"
    {
#line 989 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    }
#line 990 "goal_expr_to_goal.m"
    {
#line 990 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 990 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 990 "goal_expr_to_goal.m"
    }
#line 989 "goal_expr_to_goal.m"
    {
#line 989 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 989 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 989 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
#line 989 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_87_87));
#line 989 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 3) = ((MR_Box) ((MR_Integer) 0));
#line 989 "goal_expr_to_goal.m"
    }
#line 991 "goal_expr_to_goal.m"
    {
#line 991 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95);
    }
#line 996 "goal_expr_to_goal.m"
    {
#line 996 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98);
    }
#line 1004 "goal_expr_to_goal.m"
    {
#line 1004 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_99_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, hlds__make_hlds__goal_expr_to_goal__Context_30);
    }
#line 1002 "goal_expr_to_goal.m"
    {
#line 1002 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_99_99));
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1002 "goal_expr_to_goal.m"
    }
#line 1006 "goal_expr_to_goal.m"
    {
#line 1006 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107);
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_112_112));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1017 "goal_expr_to_goal.m"
    {
#line 1017 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1017 "goal_expr_to_goal.m"
    }
#line 1015 "goal_expr_to_goal.m"
    {
#line 1015 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOUnify_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_108_108));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1015 "goal_expr_to_goal.m"
    }
#line 1020 "goal_expr_to_goal.m"
    {
#line 1020 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOUnify_51));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_124_124, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_26));
#line 1020 "goal_expr_to_goal.m"
    }
#line 1019 "goal_expr_to_goal.m"
    {
#line 1019 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1019 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 1019 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1019 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
#line 1019 "goal_expr_to_goal.m"
    }
#line 1021 "goal_expr_to_goal.m"
    {
#line 1021 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_125_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_126_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_127_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_128_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_129_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_130_130);
    }
#line 1026 "goal_expr_to_goal.m"
    {
#line 1026 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_127_127, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_131_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_125_125, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_132_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_130_130, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133);
    }
#line 1030 "goal_expr_to_goal.m"
    {
#line 1030 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_27));
#line 1030 "goal_expr_to_goal.m"
    }
#line 1032 "goal_expr_to_goal.m"
    {
#line 1032 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_132_132, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_126_126, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_138_138, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_131_131, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_139_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_128_128, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_129_129, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_141_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_142_142);
    }
#line 1043 "goal_expr_to_goal.m"
    {
#line 1043 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56));
#line 1043 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "goal_expr_to_goal.m"
    }
#line 1043 "goal_expr_to_goal.m"
    {
#line 1043 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53));
#line 1043 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_145_145));
#line 1043 "goal_expr_to_goal.m"
    }
#line 1043 "goal_expr_to_goal.m"
    {
#line 1043 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50));
#line 1043 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_143_143, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_144_144));
#line 1043 "goal_expr_to_goal.m"
    }
#line 1042 "goal_expr_to_goal.m"
    {
#line 1042 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_143_143, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57);
    }
#line 1050 "goal_expr_to_goal.m"
    {
#line 1050 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, hlds__make_hlds__goal_expr_to_goal__Catches0_28, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29, hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59);
    }
#line 1052 "goal_expr_to_goal.m"
    {
#line 1052 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_138_138, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_139_139, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_141_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_142_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);
    }
#line 1060 "goal_expr_to_goal.m"
    {
#line 1060 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_154_154, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57));
#line 1060 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_154_154, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58));
#line 1060 "goal_expr_to_goal.m"
    }
#line 1062 "goal_expr_to_goal.m"
    {
#line 1062 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60));
#line 1062 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61));
#line 1062 "goal_expr_to_goal.m"
    }
#line 1064 "goal_expr_to_goal.m"
    {
#line 1064 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_155_155, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_156_156));
#line 1064 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_155_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1064 "goal_expr_to_goal.m"
    }
#line 1061 "goal_expr_to_goal.m"
    {
#line 1061 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_154_154));
#line 1061 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_155_155));
#line 1061 "goal_expr_to_goal.m"
    }
#line 1065 "goal_expr_to_goal.m"
    {
#line 1065 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71);
    }
#line 1067 "goal_expr_to_goal.m"
    {
#line 1067 "goal_expr_to_goal.m"
      hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64);
    }
#line 1070 "goal_expr_to_goal.m"
    {
#line 1070 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1070 "goal_expr_to_goal.m"
    }
#line 1070 "goal_expr_to_goal.m"
    {
#line 1070 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_161_161, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_162_162));
#line 1070 "goal_expr_to_goal.m"
    }
#line 1070 "goal_expr_to_goal.m"
    {
#line 1070 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_161_161, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65);
    }
#line 1073 "goal_expr_to_goal.m"
    {
#line 1073 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47));
#line 1073 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54));
#line 1073 "goal_expr_to_goal.m"
    }
#line 1074 "goal_expr_to_goal.m"
    {
#line 1074 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVars_66));
#line 1074 "goal_expr_to_goal.m"
    }
#line 1074 "goal_expr_to_goal.m"
    {
#line 1074 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_164_164 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_165_165));
#line 1074 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_164_164, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 1074 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_164_164, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65));
#line 1074 "goal_expr_to_goal.m"
    }
#line 1074 "goal_expr_to_goal.m"
    {
#line 1074 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1074 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_164_164));
#line 1074 "goal_expr_to_goal.m"
    }
#line 1076 "goal_expr_to_goal.m"
    {
#line 1076 "goal_expr_to_goal.m"
      MR_Word base;
#line 1076 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_32 = base;
#line 1076 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_67));
#line 1076 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_44));
#line 1076 "goal_expr_to_goal.m"
    }
#line 978 "goal_expr_to_goal.m"
  }
#line 968 "goal_expr_to_goal.m"
}

#line 922 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 922 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 922 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15)
#line 922 "goal_expr_to_goal.m"
{
#line 929 "goal_expr_to_goal.m"
  {
#line 929 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 929 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "goal_expr_to_goal.m"
      {
#line 929 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 930 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14;
#line 930 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12;
#line 930 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10;
#line 930 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8;
#line 929 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7 = hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6;
#line 929 "goal_expr_to_goal.m"
      }
#line 929 "goal_expr_to_goal.m"
    else
#line 933 "goal_expr_to_goal.m"
      {
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_38;
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates_39;
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46;
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47;
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58;
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59;
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60;
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61;
#line 933 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62;

#line 934 "goal_expr_to_goal.m"
        {
#line 934 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goal_35, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47, hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62);
        }
#line 937 "goal_expr_to_goal.m"
        {
#line 937 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__DisjState_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 937 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46));
#line 937 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47));
#line 937 "goal_expr_to_goal.m"
        }
#line 938 "goal_expr_to_goal.m"
        {
#line 938 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goals_36, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__DisjStates_39, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);
        }
#line 932 "goal_expr_to_goal.m"
        {
#line 932 "goal_expr_to_goal.m"
          MR_Word base;
#line 932 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = base;
#line 932 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_38));
#line 932 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates_39));
#line 932 "goal_expr_to_goal.m"
        }
#line 933 "goal_expr_to_goal.m"
      }
#line 929 "goal_expr_to_goal.m"
  }
#line 922 "goal_expr_to_goal.m"
}

#line 893 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 893 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 893 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44)
#line 893 "goal_expr_to_goal.m"
{
#line 902 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 902 "goal_expr_to_goal.m"
    {
#line 902 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 902 "goal_expr_to_goal.m"
      {
#line 902 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 902 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 902 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 902 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 902 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 902 "goal_expr_to_goal.m"
          {
#line 902 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 902 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 902 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 910 "goal_expr_to_goal.m"
            {
#line 910 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 910 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
#line 910 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
#line 910 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
#line 910 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
#line 910 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

#line 908 "goal_expr_to_goal.m"
              {
#line 908 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_30, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjStates0_20, &hlds__make_hlds__goal_expr_to_goal__DisjStates1_31, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49);
              }
#line 911 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 911 "goal_expr_to_goal.m"
              {
#line 911 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 911 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 911 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
#line 911 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
#line 911 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
#line 911 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
#line 911 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

#line 911 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43;
#line 911 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41;
#line 911 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39;
#line 911 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37;
#line 911 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35;
#line 911 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__DisjStates0_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20;
#line 911 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 911 "goal_expr_to_goal.m"
              }
#line 911 "goal_expr_to_goal.m"
              continue;
#line 910 "goal_expr_to_goal.m"
            }
#line 902 "goal_expr_to_goal.m"
          }
#line 902 "goal_expr_to_goal.m"
        else
#line 917 "goal_expr_to_goal.m"
          {
#line 917 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32;
#line 917 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33;
#line 917 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_34;

#line 915 "goal_expr_to_goal.m"
            {
#line 915 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal_18, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);
            }
#line 918 "goal_expr_to_goal.m"
            {
#line 918 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__DisjState_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 918 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32));
#line 918 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33));
#line 918 "goal_expr_to_goal.m"
            }
#line 919 "goal_expr_to_goal.m"
            {
#line 919 "goal_expr_to_goal.m"
              MR_Word base;
#line 919 "goal_expr_to_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__DisjStates_21 = base;
#line 919 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_34));
#line 919 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates0_20));
#line 919 "goal_expr_to_goal.m"
            }
#line 917 "goal_expr_to_goal.m"
          }
#line 902 "goal_expr_to_goal.m"
      }
#line 902 "goal_expr_to_goal.m"
      break;
#line 902 "goal_expr_to_goal.m"
    }
#line 893 "goal_expr_to_goal.m"
}

#line 860 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 860 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 860 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
#line 860 "goal_expr_to_goal.m"
{
#line 869 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 869 "goal_expr_to_goal.m"
    {
#line 869 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 869 "goal_expr_to_goal.m"
      {
#line 869 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 869 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 869 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 869 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 869 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 869 "goal_expr_to_goal.m"
          {
#line 869 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
#line 869 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
#line 869 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 3)));
#line 872 "goal_expr_to_goal.m"
            {
#line 872 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 872 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 872 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 872 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 872 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 872 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 872 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 870 "goal_expr_to_goal.m"
              {
#line 870 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
#line 873 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 873 "goal_expr_to_goal.m"
              {
#line 873 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 873 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 873 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 873 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 873 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 873 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 873 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 873 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 873 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
#line 873 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
#line 873 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
#line 873 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
#line 873 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
#line 873 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
#line 873 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
#line 873 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 873 "goal_expr_to_goal.m"
              }
#line 873 "goal_expr_to_goal.m"
              continue;
#line 872 "goal_expr_to_goal.m"
            }
#line 869 "goal_expr_to_goal.m"
          }
#line 869 "goal_expr_to_goal.m"
        else
#line 878 "goal_expr_to_goal.m"
          {
#line 878 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
#line 878 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
#line 879 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 880 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
#line 880 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 877 "goal_expr_to_goal.m"
            {
#line 877 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
#line 879 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
#line 879 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
#line 880 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 880 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 880 "goal_expr_to_goal.m"
              {
#line 880 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
#line 880 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
#line 880 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 1);
#line 880 "goal_expr_to_goal.m"
              }
#line 880 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 881 "goal_expr_to_goal.m"
              {
#line 881 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 881 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

#line 882 "goal_expr_to_goal.m"
                {
#line 882 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
#line 881 "goal_expr_to_goal.m"
                {
#line 881 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
#line 881 "goal_expr_to_goal.m"
              }
#line 880 "goal_expr_to_goal.m"
            else
#line 884 "goal_expr_to_goal.m"
              {
#line 884 "goal_expr_to_goal.m"
                {
#line 884 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
#line 884 "goal_expr_to_goal.m"
              }
#line 878 "goal_expr_to_goal.m"
          }
#line 869 "goal_expr_to_goal.m"
      }
#line 869 "goal_expr_to_goal.m"
      break;
#line 869 "goal_expr_to_goal.m"
    }
#line 860 "goal_expr_to_goal.m"
}

#line 829 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 829 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 829 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
#line 829 "goal_expr_to_goal.m"
{
#line 838 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 838 "goal_expr_to_goal.m"
    {
#line 838 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 838 "goal_expr_to_goal.m"
      {
#line 838 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 2)));
#line 838 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 838 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 838 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 838 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 838 "goal_expr_to_goal.m"
          {
#line 838 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 838 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
#line 838 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
#line 841 "goal_expr_to_goal.m"
            {
#line 841 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 841 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 841 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 841 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 841 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 841 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 841 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 839 "goal_expr_to_goal.m"
              {
#line 839 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
#line 842 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 842 "goal_expr_to_goal.m"
              {
#line 842 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 842 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 842 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 842 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 842 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 842 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 842 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 842 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 842 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
#line 842 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
#line 842 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
#line 842 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
#line 842 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
#line 842 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
#line 842 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
#line 842 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 842 "goal_expr_to_goal.m"
              }
#line 842 "goal_expr_to_goal.m"
              continue;
#line 841 "goal_expr_to_goal.m"
            }
#line 838 "goal_expr_to_goal.m"
          }
#line 838 "goal_expr_to_goal.m"
        else
#line 847 "goal_expr_to_goal.m"
          {
#line 847 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
#line 847 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
#line 848 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 849 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
#line 849 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 846 "goal_expr_to_goal.m"
            {
#line 846 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
#line 848 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
#line 848 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
#line 849 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 849 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 849 "goal_expr_to_goal.m"
              {
#line 849 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
#line 849 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
#line 849 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 0);
#line 849 "goal_expr_to_goal.m"
              }
#line 849 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 850 "goal_expr_to_goal.m"
              {
#line 850 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 850 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

#line 851 "goal_expr_to_goal.m"
                {
#line 851 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
#line 850 "goal_expr_to_goal.m"
                {
#line 850 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
#line 850 "goal_expr_to_goal.m"
              }
#line 849 "goal_expr_to_goal.m"
            else
#line 853 "goal_expr_to_goal.m"
              {
#line 853 "goal_expr_to_goal.m"
                {
#line 853 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
#line 853 "goal_expr_to_goal.m"
              }
#line 847 "goal_expr_to_goal.m"
          }
#line 838 "goal_expr_to_goal.m"
      }
#line 838 "goal_expr_to_goal.m"
      break;
#line 838 "goal_expr_to_goal.m"
    }
#line 829 "goal_expr_to_goal.m"
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
#line 749 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
#line 749 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
#line 749 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
#line 750 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_70_70;
#line 750 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 750 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;

#line 747 "goal_expr_to_goal.m"
    {
#line 747 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, &hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69);
    }
#line 750 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgVars_29)) == (MR_mktag((MR_Integer) 1)));
#line 750 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 750 "goal_expr_to_goal.m"
      {
#line 750 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 0)));
#line 750 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 1)));
#line 750 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 750 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 750 "goal_expr_to_goal.m"
          {
#line 750 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_70_70, (MR_Integer) 0)));
#line 750 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_70_70, (MR_Integer) 1)));
#line 750 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 750 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 750 "goal_expr_to_goal.m"
              {
#line 750 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, (MR_Integer) 0)));
#line 750 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, (MR_Integer) 1)));
#line 750 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "goal_expr_to_goal.m"
              }
#line 750 "goal_expr_to_goal.m"
          }
#line 750 "goal_expr_to_goal.m"
      }
#line 749 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 752 "goal_expr_to_goal.m"
      {
#line 752 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33 = hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
#line 753 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__TermInputVar_34 = hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
#line 754 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35 = hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
#line 752 "goal_expr_to_goal.m"
      }
#line 749 "goal_expr_to_goal.m"
    else
#line 756 "goal_expr_to_goal.m"
      {
#line 756 "goal_expr_to_goal.m"
        {
#line 756 "goal_expr_to_goal.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
#line 756 "goal_expr_to_goal.m"
          return;
        }
#line 756 "goal_expr_to_goal.m"
      }
#line 790 "goal_expr_to_goal.m"
#line 790 "goal_expr_to_goal.m"
    switch (hlds__make_hlds__goal_expr_to_goal__AccessType_18) {
#line 790 "goal_expr_to_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 790 "goal_expr_to_goal.m"
      case (MR_Integer) 0:
#line 791 "goal_expr_to_goal.m"
        {
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_94_94;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_95_95;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_96_96;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_97_97;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_137;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_146;
#line 791 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_147;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_151;
#line 794 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53;
#line 799 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
#line 799 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
#line 799 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TC_54;

#line 792 "goal_expr_to_goal.m"
          {
#line 792 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_137, &hlds__make_hlds__goal_expr_to_goal__V_78_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84);
          }
#line 794 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 0)));
#line 794 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 1)));
#line 797 "goal_expr_to_goal.m"
          {
#line 797 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 797 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_137));
#line 797 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "goal_expr_to_goal.m"
          }
#line 799 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 799 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 799 "goal_expr_to_goal.m"
            {
#line 799 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 1)));
#line 799 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 2)));
#line 799 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TC_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 3)));
#line 800 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_146 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
#line 801 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_147 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
#line 799 "goal_expr_to_goal.m"
            }
#line 799 "goal_expr_to_goal.m"
          else
#line 803 "goal_expr_to_goal.m"
            {
#line 803 "goal_expr_to_goal.m"
              {
#line 803 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 803 "goal_expr_to_goal.m"
                return;
              }
#line 803 "goal_expr_to_goal.m"
            }
#line 806 "goal_expr_to_goal.m"
          {
#line 806 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 0) = ((MR_Box) ((MR_Integer) 1));
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_146));
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_147));
#line 806 "goal_expr_to_goal.m"
          }
#line 807 "goal_expr_to_goal.m"
          {
#line 807 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 807 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149));
#line 807 "goal_expr_to_goal.m"
          }
#line 807 "goal_expr_to_goal.m"
          {
#line 807 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 807 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
#line 807 "goal_expr_to_goal.m"
          }
#line 814 "goal_expr_to_goal.m"
          {
#line 814 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 0) = ((MR_Box) ((MR_Integer) 2));
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141));
#line 814 "goal_expr_to_goal.m"
          }
#line 815 "goal_expr_to_goal.m"
          {
#line 815 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 815 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 0) = ((MR_Box) ((MR_Integer) 1));
#line 815 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150));
#line 815 "goal_expr_to_goal.m"
          }
#line 817 "goal_expr_to_goal.m"
          {
#line 817 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
#line 817 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "goal_expr_to_goal.m"
          }
#line 815 "goal_expr_to_goal.m"
          {
#line 815 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
#line 815 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_97_97));
#line 815 "goal_expr_to_goal.m"
          }
#line 814 "goal_expr_to_goal.m"
          {
#line 814 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_94_94));
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_95_95));
#line 814 "goal_expr_to_goal.m"
          }
#line 818 "goal_expr_to_goal.m"
          {
#line 818 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
          }
#line 791 "goal_expr_to_goal.m"
        }
#line 790 "goal_expr_to_goal.m"
        break;
#line 790 "goal_expr_to_goal.m"
      case (MR_Integer) 1:
#line 759 "goal_expr_to_goal.m"
        {
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_36;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_47;
#line 759 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_48;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_52;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_122_122;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_123_123;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_125_125;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_126_126;
#line 759 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_127_127;
#line 770 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
#line 770 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
#line 770 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TypeCtor_46;

#line 760 "goal_expr_to_goal.m"
          {
#line 760 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_36, &hlds__make_hlds__goal_expr_to_goal__V_108_108, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114);
          }
#line 762 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 0)));
#line 762 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 1)));
#line 766 "goal_expr_to_goal.m"
          {
#line 766 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 766 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37));
#line 766 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38));
#line 766 "goal_expr_to_goal.m"
          }
#line 769 "goal_expr_to_goal.m"
          {
#line 769 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 769 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_36));
#line 769 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "goal_expr_to_goal.m"
          }
#line 770 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Functor_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 770 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 770 "goal_expr_to_goal.m"
            {
#line 770 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 1)));
#line 770 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 2)));
#line 770 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TypeCtor_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 3)));
#line 771 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_47 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
#line 772 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_48 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
#line 770 "goal_expr_to_goal.m"
            }
#line 770 "goal_expr_to_goal.m"
          else
#line 774 "goal_expr_to_goal.m"
            {
#line 774 "goal_expr_to_goal.m"
              {
#line 774 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 774 "goal_expr_to_goal.m"
                return;
              }
#line 774 "goal_expr_to_goal.m"
            }
#line 779 "goal_expr_to_goal.m"
          {
#line 779 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 779 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 0) = ((MR_Box) ((MR_Integer) 1));
#line 779 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_47));
#line 779 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_48));
#line 779 "goal_expr_to_goal.m"
          }
#line 780 "goal_expr_to_goal.m"
          {
#line 780 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 780 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50));
#line 780 "goal_expr_to_goal.m"
          }
#line 780 "goal_expr_to_goal.m"
          {
#line 780 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 780 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_122_122));
#line 780 "goal_expr_to_goal.m"
          }
#line 783 "goal_expr_to_goal.m"
          {
#line 783 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 0) = ((MR_Box) ((MR_Integer) 2));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41));
#line 783 "goal_expr_to_goal.m"
          }
#line 784 "goal_expr_to_goal.m"
          {
#line 784 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 0) = ((MR_Box) ((MR_Integer) 1));
#line 784 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43));
#line 784 "goal_expr_to_goal.m"
          }
#line 785 "goal_expr_to_goal.m"
          {
#line 785 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 0) = ((MR_Box) ((MR_Integer) 3));
#line 785 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51));
#line 785 "goal_expr_to_goal.m"
          }
#line 786 "goal_expr_to_goal.m"
          {
#line 786 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_127_127));
#line 786 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 786 "goal_expr_to_goal.m"
          }
#line 784 "goal_expr_to_goal.m"
          {
#line 784 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_125_125));
#line 784 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_126_126));
#line 784 "goal_expr_to_goal.m"
          }
#line 783 "goal_expr_to_goal.m"
          {
#line 783 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_123_123));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
#line 783 "goal_expr_to_goal.m"
          }
#line 787 "goal_expr_to_goal.m"
          {
#line 787 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
          }
#line 759 "goal_expr_to_goal.m"
        }
#line 790 "goal_expr_to_goal.m"
        break;
#line 790 "goal_expr_to_goal.m"
    }
#line 746 "goal_expr_to_goal.m"
  }
#line 737 "goal_expr_to_goal.m"
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
#line 694 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34;
#line 694 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35;
#line 694 "goal_expr_to_goal.m"
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
#line 694 "goal_expr_to_goal.m"
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
            }
#line 711 "goal_expr_to_goal.m"
          }
#line 707 "goal_expr_to_goal.m"
      }
#line 694 "goal_expr_to_goal.m"
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
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;

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
#line 732 "goal_expr_to_goal.m"
        {
#line 732 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_21));
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35])));
#line 732 "goal_expr_to_goal.m"
        }
#line 733 "goal_expr_to_goal.m"
        {
#line 733 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_44));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "goal_expr_to_goal.m"
        }
#line 733 "goal_expr_to_goal.m"
        {
#line 733 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
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
#line 4754 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0];
#line 4756 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2];
#line 4758 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
#line 4760 "hlds.make_hlds.goal_expr_to_goal.c"
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
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214)
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
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermA0_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermB0_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermA_193;
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermB_194;
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_779 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 582 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_780 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarA_195;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_217_217;
#line 587 "goal_expr_to_goal.m"
              MR_String hlds__make_hlds__goal_expr_to_goal__V_218_218;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_219_219;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_220_220;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_221_221;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_197_197;
#line 587 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_196_196;

#line 583 "goal_expr_to_goal.m"
              {
#line 583 "goal_expr_to_goal.m"
                parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermA0_191, &hlds__make_hlds__goal_expr_to_goal__TermA_193);
              }
#line 584 "goal_expr_to_goal.m"
              {
#line 584 "goal_expr_to_goal.m"
                parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermB0_192, &hlds__make_hlds__goal_expr_to_goal__TermB_194);
              }
#line 587 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermA_193)) == (MR_mktag((MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                {
#line 587 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_193, (MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_193, (MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_193, (MR_Integer) 2)));
#line 587 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_217_217)) == (MR_mktag((MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                    {
#line 587 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_217_217, (MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_String) "!") == 0);
#line 587 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                        {
#line 587 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_219_219)) == (MR_mktag((MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                            {
#line 587 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_221_221 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                                {
#line 587 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_220_220)) == (MR_mktag((MR_Integer) 1)));
#line 587 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 587 "goal_expr_to_goal.m"
                                    {
#line 587 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__StateVarA_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_220_220, (MR_Integer) 0)));
#line 587 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_220_220, (MR_Integer) 1)));
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
#line 587 "goal_expr_to_goal.m"
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 589 "goal_expr_to_goal.m"
                {
#line 589 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_222_222;
#line 589 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_223_223;
#line 589 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_224_224;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_198;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_225_225;
#line 590 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_226_226;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_227_227;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_228_228;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_229_229;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_200_200;
#line 590 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_199_199;

#line 588 "goal_expr_to_goal.m"
                  {
#line 588 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_779, hlds__make_hlds__goal_expr_to_goal__StateVarA_195, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_223_223, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_224_224);
                  }
#line 590 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_194)) == (MR_mktag((MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                    {
#line 590 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 2)));
#line 590 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_225_225)) == (MR_mktag((MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                        {
#line 590 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_226_226 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_String) "!") == 0);
#line 590 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                            {
#line 590 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_227_227)) == (MR_mktag((MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                                {
#line 590 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_227_227, (MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_227_227, (MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_229_229 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                                    {
#line 590 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_228_228)) == (MR_mktag((MR_Integer) 1)));
#line 590 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 590 "goal_expr_to_goal.m"
                                        {
#line 590 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__StateVarB_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_228_228, (MR_Integer) 0)));
#line 590 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_228_228, (MR_Integer) 1)));
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
#line 590 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 591 "goal_expr_to_goal.m"
                    {
#line 591 "goal_expr_to_goal.m"
                      hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_779, hlds__make_hlds__goal_expr_to_goal__StateVarB_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_223_223, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_224_224, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                    }
#line 590 "goal_expr_to_goal.m"
                  else
#line 594 "goal_expr_to_goal.m"
                    {
#line 594 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_224_224;
#line 594 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_222_222;
#line 594 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_223_223;
#line 594 "goal_expr_to_goal.m"
                    }
#line 596 "goal_expr_to_goal.m"
                  {
#line 596 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_779);
                  }
#line 589 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
#line 589 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
#line 589 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
#line 589 "goal_expr_to_goal.m"
                }
#line 587 "goal_expr_to_goal.m"
              else
#line 597 "goal_expr_to_goal.m"
                {
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_778;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_233_233;
#line 597 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_234_234;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_235_235;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_236_236;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_237_237;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_202_202;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_201_201;

#line 597 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_194)) == (MR_mktag((MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                    {
#line 597 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 2)));
#line 597 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_233_233)) == (MR_mktag((MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                        {
#line 597 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_234_234 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_233_233, (MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_234_234, (MR_String) "!") == 0);
#line 597 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                            {
#line 597 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_235_235)) == (MR_mktag((MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                                {
#line 597 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_235_235, (MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_235_235, (MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_237_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                                    {
#line 597 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_236_236)) == (MR_mktag((MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                                        {
#line 597 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__StateVarB_778 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_236_236, (MR_Integer) 0)));
#line 597 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_236_236, (MR_Integer) 1)));
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
#line 597 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 599 "goal_expr_to_goal.m"
                    {
#line 598 "goal_expr_to_goal.m"
                      {
#line 598 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_779, hlds__make_hlds__goal_expr_to_goal__StateVarB_778, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                      }
#line 600 "goal_expr_to_goal.m"
                      {
#line 600 "goal_expr_to_goal.m"
                        *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
                      }
#line 599 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
#line 599 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
#line 599 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
#line 599 "goal_expr_to_goal.m"
                    }
#line 597 "goal_expr_to_goal.m"
                  else
#line 604 "goal_expr_to_goal.m"
                    {
#line 604 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243;

#line 602 "goal_expr_to_goal.m"
                      {
#line 602 "goal_expr_to_goal.m"
                        hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(hlds__make_hlds__goal_expr_to_goal__TermA_193, hlds__make_hlds__goal_expr_to_goal__TermB_194, hlds__make_hlds__goal_expr_to_goal__Context_779, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__Purity_780, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                      }
#line 605 "goal_expr_to_goal.m"
                      {
#line 605 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                      }
#line 604 "goal_expr_to_goal.m"
                    }
#line 597 "goal_expr_to_goal.m"
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
              MR_Word hlds__make_hlds__goal_expr_to_goal__Name_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254;
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_766 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_769 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_770 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 487 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771;
#line 489 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_165;
#line 489 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_166;
#line 490 "goal_expr_to_goal.m"
              MR_String hlds__make_hlds__goal_expr_to_goal__V_250_250;
#line 490 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_251_251;
#line 490 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_252_252;

#line 488 "goal_expr_to_goal.m"
              {
#line 488 "goal_expr_to_goal.m"
                hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_770, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771);
              }
#line 490 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_164)) == (MR_mktag((MR_Integer) 0)));
#line 490 "goal_expr_to_goal.m"
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 490 "goal_expr_to_goal.m"
                {
#line 490 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_250_250 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_164, (MR_Integer) 0)));
#line 490 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_String) "\\=") == 0);
#line 490 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 490 "goal_expr_to_goal.m"
                    {
#line 491 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771)) == (MR_mktag((MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 491 "goal_expr_to_goal.m"
                        {
#line 491 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__LHSTerm_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771, (MR_Integer) 0)));
#line 491 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771, (MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_251_251)) == (MR_mktag((MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 491 "goal_expr_to_goal.m"
                            {
#line 491 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__RHSTerm_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_251_251, (MR_Integer) 0)));
#line 491 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_251_251, (MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "goal_expr_to_goal.m"
                            }
#line 491 "goal_expr_to_goal.m"
                        }
#line 490 "goal_expr_to_goal.m"
                    }
#line 490 "goal_expr_to_goal.m"
                }
#line 489 "goal_expr_to_goal.m"
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 495 "goal_expr_to_goal.m"
                {
#line 495 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_253_253;
#line 495 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727;

#line 495 "goal_expr_to_goal.m"
                  {
#line 495 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_253_253 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_253_253, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_766));
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_253_253, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_165));
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_253_253, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_166));
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_253_253, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_769));
#line 495 "goal_expr_to_goal.m"
                  }
#line 494 "goal_expr_to_goal.m"
                  {
#line 494 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 494 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 494 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_766));
#line 494 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_253_253));
#line 494 "goal_expr_to_goal.m"
                  }
#line 496 "goal_expr_to_goal.m"
                  {
#line 496 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 495 "goal_expr_to_goal.m"
                }
#line 489 "goal_expr_to_goal.m"
              else
#line 499 "goal_expr_to_goal.m"
                {
#line 499 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm0_168;
#line 499 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Remainder_170;
#line 499 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldListContext_171;
#line 499 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172;
#line 499 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarContext_173;
#line 499 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_263_263;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_169;
#line 502 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_260_260;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_261_261;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_262_262;
#line 502 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_264_264;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_265_265;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_266_266;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_267_267;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_268_268;
#line 502 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_269_269;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_270_270;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_271_271;
#line 507 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_174_174;
#line 507 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_175_175;

#line 502 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_164)) == (MR_mktag((MR_Integer) 0)));
#line 502 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                    {
#line 502 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_260_260 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_164, (MR_Integer) 0)));
#line 502 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_String) ":=") == 0);
#line 502 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                        {
#line 503 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771)) == (MR_mktag((MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                            {
#line 503 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771, (MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_261_261)) == (MR_mktag((MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                                {
#line 503 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__RHSTerm0_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_261_261, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_261_261, (MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_262_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                    {
#line 504 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167)) == (MR_mktag((MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                        {
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167, (MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__FieldListContext_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167, (MR_Integer) 2)));
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_263_263)) == (MR_mktag((MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                            {
#line 504 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__V_264_264 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_263_263, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_264_264, (MR_String) "^") == 0);
#line 502 "goal_expr_to_goal.m"
                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                                {
#line 504 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_265_265)) == (MR_mktag((MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                                    {
#line 504 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__StateVar0_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_265_265, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_265_265, (MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_266_266)) == (MR_mktag((MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                                        {
#line 504 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__Remainder_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_266_266, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_266_266, (MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_267_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "goal_expr_to_goal.m"
                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                                            {
#line 506 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVar0_169)) == (MR_mktag((MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 506 "goal_expr_to_goal.m"
                                                                {
#line 506 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_169, (MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_169, (MR_Integer) 1)));
#line 506 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__StateVarContext_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_169, (MR_Integer) 2)));
#line 506 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_268_268)) == (MR_mktag((MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 506 "goal_expr_to_goal.m"
                                                                    {
#line 506 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_269_269 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_268_268, (MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_269_269, (MR_String) "!") == 0);
#line 502 "goal_expr_to_goal.m"
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                                                        {
#line 507 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172)) == (MR_mktag((MR_Integer) 1)));
#line 507 "goal_expr_to_goal.m"
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 507 "goal_expr_to_goal.m"
                                                                            {
#line 507 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172, (MR_Integer) 0)));
#line 507 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172, (MR_Integer) 1)));
#line 507 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_270_270)) == (MR_mktag((MR_Integer) 1)));
#line 507 "goal_expr_to_goal.m"
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 507 "goal_expr_to_goal.m"
                                                                                {
#line 507 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_270_270, (MR_Integer) 0)));
#line 507 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_270_270, (MR_Integer) 1)));
#line 507 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_271_271 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
#line 499 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 511 "goal_expr_to_goal.m"
                    {
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_176;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__FieldList_177;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_278_278;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_279_279;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_283_283;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_284_284;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_729;
#line 511 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_730;

#line 511 "goal_expr_to_goal.m"
                      {
#line 511 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__LHSTerm_729 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 511 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_729, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 511 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_729, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172));
#line 511 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_729, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_173));
#line 511 "goal_expr_to_goal.m"
                      }
#line 512 "goal_expr_to_goal.m"
                      {
#line 512 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__StateVar_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_176, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 512 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_176, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172));
#line 512 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_176, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_173));
#line 512 "goal_expr_to_goal.m"
                      }
#line 513 "goal_expr_to_goal.m"
                      {
#line 513 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_279_279, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Remainder_170));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_279_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "goal_expr_to_goal.m"
                      }
#line 513 "goal_expr_to_goal.m"
                      {
#line 513 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_278_278, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_176));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_278_278, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_279_279));
#line 513 "goal_expr_to_goal.m"
                      }
#line 513 "goal_expr_to_goal.m"
                      {
#line 513 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__FieldList_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_177, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_263_263));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_177, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_278_278));
#line 513 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_177, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldListContext_171));
#line 513 "goal_expr_to_goal.m"
                      }
#line 515 "goal_expr_to_goal.m"
                      {
#line 515 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_284_284, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm0_168));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_284_284, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "goal_expr_to_goal.m"
                      }
#line 515 "goal_expr_to_goal.m"
                      {
#line 515 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_283_283, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldList_177));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_283_283, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_284_284));
#line 515 "goal_expr_to_goal.m"
                      }
#line 515 "goal_expr_to_goal.m"
                      {
#line 515 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__RHSTerm_730 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_730, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2]));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_730, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_283_283));
#line 515 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_730, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_766));
#line 515 "goal_expr_to_goal.m"
                      }
#line 516 "goal_expr_to_goal.m"
                      {
#line 516 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 516 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_766));
#line 516 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_729));
#line 516 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_730));
#line 516 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_769));
#line 516 "goal_expr_to_goal.m"
                      }
#line 517 "goal_expr_to_goal.m"
                      {
#line 517 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                      }
#line 511 "goal_expr_to_goal.m"
                    }
#line 499 "goal_expr_to_goal.m"
                  else
#line 520 "goal_expr_to_goal.m"
                    {
#line 520 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_179;
#line 524 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__Operator_178;

#line 524 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_164)) == (MR_mktag((MR_Integer) 0)));
#line 524 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 524 "goal_expr_to_goal.m"
                        {
#line 524 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__Operator_178 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_164, (MR_Integer) 0)));
#line 526 "goal_expr_to_goal.m"
                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_178, (MR_String) ":=") == 0))
#line 526 "goal_expr_to_goal.m"
                            {
#line 526 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__AccessType_179 = (MR_Integer) 1;
#line 526 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 526 "goal_expr_to_goal.m"
                            }
#line 526 "goal_expr_to_goal.m"
                          else
#line 526 "goal_expr_to_goal.m"
                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_178, (MR_String) "=^") == 0))
#line 525 "goal_expr_to_goal.m"
                            {
#line 525 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__AccessType_179 = (MR_Integer) 0;
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
#line 520 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 530 "goal_expr_to_goal.m"
                        {
#line 530 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_731;

#line 529 "goal_expr_to_goal.m"
                          {
#line 529 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_731);
                          }
#line 531 "goal_expr_to_goal.m"
                          {
#line 531 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__AccessType_179, hlds__make_hlds__goal_expr_to_goal__ArgTerms_731, hlds__make_hlds__goal_expr_to_goal__Context_766, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
#line 530 "goal_expr_to_goal.m"
                        }
#line 520 "goal_expr_to_goal.m"
                      else
#line 536 "goal_expr_to_goal.m"
                        {
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Call_185;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo0_190;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_300_300;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_301_301;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_302_302;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_310_310;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_311_311;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_734;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_735;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_736;
#line 536 "goal_expr_to_goal.m"
                          MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_737;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_739;
#line 536 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_740;
#line 540 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__PredVar_180;
#line 540 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__RealHeadVars_181;
#line 545 "goal_expr_to_goal.m"
                          MR_String hlds__make_hlds__goal_expr_to_goal__V_812_812;

#line 535 "goal_expr_to_goal.m"
                          {
#line 535 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_771, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_735);
                          }
#line 537 "goal_expr_to_goal.m"
                          {
#line 537 "goal_expr_to_goal.m"
                            hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_735, &hlds__make_hlds__goal_expr_to_goal__HeadVars_736, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_301_301, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_302_302);
                          }
#line 539 "goal_expr_to_goal.m"
                          {
#line 539 "goal_expr_to_goal.m"
                            mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1], hlds__make_hlds__goal_expr_to_goal__ArgTerms_735, &hlds__make_hlds__goal_expr_to_goal__Arity_737);
                          }
#line 543 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_164)) == (MR_mktag((MR_Integer) 0)));
#line 543 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 543 "goal_expr_to_goal.m"
                            {
#line 543 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_812_812 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_164, (MR_Integer) 0)));
#line 544 "goal_expr_to_goal.m"
                              if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_812_812, (MR_String) "") == 0))
#line 544 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 544 "goal_expr_to_goal.m"
                              else
#line 544 "goal_expr_to_goal.m"
                              if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_812_812, (MR_String) "call") == 0))
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
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HeadVars_736)) == (MR_mktag((MR_Integer) 1)));
#line 546 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 546 "goal_expr_to_goal.m"
                                    {
#line 546 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__PredVar_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_736, (MR_Integer) 0)));
#line 546 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__RealHeadVars_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_736, (MR_Integer) 1)));
#line 546 "goal_expr_to_goal.m"
                                    }
#line 545 "goal_expr_to_goal.m"
                                }
#line 543 "goal_expr_to_goal.m"
                            }
#line 540 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 549 "goal_expr_to_goal.m"
                            {
#line 549 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCall_184;
#line 549 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCallId_186;

#line 553 "goal_expr_to_goal.m"
                              {
#line 553 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__GenericCall_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 553 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_184, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredVar_180));
#line 553 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_184, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_769));
#line 553 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_184, 2) = ((MR_Box) ((MR_Integer) 0));
#line 553 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_184, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_737));
#line 553 "goal_expr_to_goal.m"
                              }
#line 555 "goal_expr_to_goal.m"
                              {
#line 555 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Call_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCall_184));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RealHeadVars_181));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 5) = ((MR_Box) ((MR_Integer) 6));
#line 555 "goal_expr_to_goal.m"
                              }
#line 558 "goal_expr_to_goal.m"
                              {
#line 558 "goal_expr_to_goal.m"
                                hlds__hlds_goal__generic_call_to_id_2_p_0(hlds__make_hlds__goal_expr_to_goal__GenericCall_184, &hlds__make_hlds__goal_expr_to_goal__GenericCallId_186);
                              }
#line 559 "goal_expr_to_goal.m"
                              {
#line 559 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__CallId_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_740, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCallId_186));
#line 559 "goal_expr_to_goal.m"
                              }
#line 549 "goal_expr_to_goal.m"
                            }
#line 540 "goal_expr_to_goal.m"
                          else
#line 562 "goal_expr_to_goal.m"
                            {
#line 562 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__PredId_187;
#line 562 "goal_expr_to_goal.m"
                              MR_Integer hlds__make_hlds__goal_expr_to_goal__ModeId_188;
#line 562 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_307_307;

#line 562 "goal_expr_to_goal.m"
                              {
#line 562 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__PredId_187 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                              }
#line 563 "goal_expr_to_goal.m"
                              {
#line 563 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__ModeId_188 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                              }
#line 566 "goal_expr_to_goal.m"
                              {
#line 566 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Call_185 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredId_187));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ModeId_188));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_736));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 3) = ((MR_Box) ((MR_Integer) 2));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_164));
#line 566 "goal_expr_to_goal.m"
                              }
#line 569 "goal_expr_to_goal.m"
                              {
#line 569 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_307_307 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 569 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_307_307, 0) = ((MR_Box) ((MR_Integer) 0));
#line 569 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_307_307, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_164));
#line 569 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_307_307, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_737));
#line 569 "goal_expr_to_goal.m"
                              }
#line 569 "goal_expr_to_goal.m"
                              {
#line 569 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__CallId_740 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 569 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallId_740, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_307_307));
#line 569 "goal_expr_to_goal.m"
                              }
#line 562 "goal_expr_to_goal.m"
                            }
#line 571 "goal_expr_to_goal.m"
                          {
#line 571 "goal_expr_to_goal.m"
                            hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_766, &hlds__make_hlds__goal_expr_to_goal__GoalInfo0_190);
                          }
#line 572 "goal_expr_to_goal.m"
                          {
#line 572 "goal_expr_to_goal.m"
                            hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__goal_expr_to_goal__Purity_769, hlds__make_hlds__goal_expr_to_goal__GoalInfo0_190, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_734);
                          }
#line 573 "goal_expr_to_goal.m"
                          {
#line 573 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_739 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_739, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Call_185));
#line 573 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_739, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_734));
#line 573 "goal_expr_to_goal.m"
                          }
#line 575 "goal_expr_to_goal.m"
                          {
#line 575 "goal_expr_to_goal.m"
                            hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, hlds__make_hlds__goal_expr_to_goal__Name_164, hlds__make_hlds__goal_expr_to_goal__Arity_737, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_310_310);
                          }
#line 577 "goal_expr_to_goal.m"
                          {
#line 577 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_311_311, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_740));
#line 577 "goal_expr_to_goal.m"
                          }
#line 576 "goal_expr_to_goal.m"
                          {
#line 576 "goal_expr_to_goal.m"
                            hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_736, hlds__make_hlds__goal_expr_to_goal__ArgTerms_735, hlds__make_hlds__goal_expr_to_goal__Context_766, hlds__make_hlds__goal_expr_to_goal__V_311_311, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_739, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_301_301, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_310_310, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_302_302, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
#line 536 "goal_expr_to_goal.m"
                        }
#line 520 "goal_expr_to_goal.m"
                    }
#line 499 "goal_expr_to_goal.m"
                }
#line 580 "goal_expr_to_goal.m"
              {
#line 580 "goal_expr_to_goal.m"
                hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
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
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_800 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_138 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_139 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_140;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_141;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_142;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_383_383;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_384_384;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_385_385;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_386_386;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_387_387;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_388_388;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_389_389;
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_704 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 404 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_705;

#line 406 "goal_expr_to_goal.m"
              {
#line 406 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_383_383 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_800);
              }
#line 405 "goal_expr_to_goal.m"
              {
#line 405 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_138, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_383_383, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_388_388, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_389_389);
              }
#line 408 "goal_expr_to_goal.m"
              {
#line 408 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_139, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_140, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_388_388, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_389_389, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
              }
#line 411 "goal_expr_to_goal.m"
              {
#line 411 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_142 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_800_800, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_141);
              }
#line 412 "goal_expr_to_goal.m"
              {
#line 412 "goal_expr_to_goal.m"
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_704, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_705);
              }
#line 413 "goal_expr_to_goal.m"
              {
#line 413 "goal_expr_to_goal.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_142, hlds__make_hlds__goal_expr_to_goal__GoalInfo_705, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
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
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_809 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 89 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_811;

#line 90 "goal_expr_to_goal.m"
                  {
#line 90 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_809, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_811);
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
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_811));
#line 91 "goal_expr_to_goal.m"
                  }
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213;
#line 89 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 1:
#line 369 "goal_expr_to_goal.m"
                {
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_799 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_126;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCond_127;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_128;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen0_129;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_130;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_131;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse0_132;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_133;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen_134;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse_135;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_404_404;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_405_405;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_406_406;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_407_407;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_408_408;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_409_409;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_410_410;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_411_411;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_412_412;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_413_413;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_414_414;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_415_415;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_416_416;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_419_419;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_692 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_693;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_694;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_695 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_696;
#line 369 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_697;

#line 371 "goal_expr_to_goal.m"
                  {
#line 371 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_799, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_695, &hlds__make_hlds__goal_expr_to_goal__Vars_696);
                  }
#line 372 "goal_expr_to_goal.m"
                  {
#line 372 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_799, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_122, &hlds__make_hlds__goal_expr_to_goal__StateVars_697);
                  }
#line 373 "goal_expr_to_goal.m"
                  {
#line 373 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__StateVars_697, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_404_404);
                  }
#line 375 "goal_expr_to_goal.m"
                  {
#line 375 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Cond_123, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSCond_127, hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_126, &hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_406_406, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_408_408, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_404_404, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_409_409);
                  }
#line 378 "goal_expr_to_goal.m"
                  {
#line 378 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Then_124, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSThen0_129, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_128, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_405_405, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_410_410, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_406_406, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_407_407, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_408_408, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_413_413, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_409_409, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_414_414);
                  }
#line 381 "goal_expr_to_goal.m"
                  {
#line 381 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_697, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_130, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_131);
                  }
#line 383 "goal_expr_to_goal.m"
                  {
#line 383 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Else_125, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSElse0_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_133, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_410_410, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_411_411, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_416_416, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_413_413, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_414_414, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_419_419);
                  }
#line 386 "goal_expr_to_goal.m"
                  {
#line 386 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__StateVars_697, hlds__make_hlds__goal_expr_to_goal__HLDSThen0_129, &hlds__make_hlds__goal_expr_to_goal__HLDSThen_134, hlds__make_hlds__goal_expr_to_goal__HLDSElse0_132, &hlds__make_hlds__goal_expr_to_goal__HLDSElse_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_128, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_131, hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_133, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_416_416, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_419_419, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 390 "goal_expr_to_goal.m"
                  {
#line 390 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_693 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_693, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_693, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_696));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_693, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCond_127));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_693, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSThen_134));
#line 390 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_693, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSElse_135));
#line 390 "goal_expr_to_goal.m"
                  }
#line 391 "goal_expr_to_goal.m"
                  {
#line 391 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_694);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_693));
#line 392 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_694));
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
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_144;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_145;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_146;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_357_357;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_358_358;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_359_359;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_360_360;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_361_361;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_362_362;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_363_363;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_713 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_714;
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_715 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 426 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_716 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 428 "goal_expr_to_goal.m"
                  {
#line 428 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_716, hlds__make_hlds__goal_expr_to_goal__Renaming_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_357_357, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_358_358, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_361_361);
                  }
#line 431 "goal_expr_to_goal.m"
                  {
#line 431 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_715, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_144, &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_357_357, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_358_358, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 435 "goal_expr_to_goal.m"
                  {
#line 435 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_713, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_145, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                  }
#line 438 "goal_expr_to_goal.m"
                  {
#line 438 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_713, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_714);
                  }
#line 439 "goal_expr_to_goal.m"
                  {
#line 439 "goal_expr_to_goal.m"
                    hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_146, hlds__make_hlds__goal_expr_to_goal__GoalInfo_714, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
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
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_699 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_700;
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_701;
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_702 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 394 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_703;
#line 396 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_137_137;

#line 396 "goal_expr_to_goal.m"
                  {
#line 396 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_702, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_703, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__V_137_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 399 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
#line 400 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_700 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_703);
#line 401 "goal_expr_to_goal.m"
                  {
#line 401 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_699, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_701);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_700));
#line 402 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_701));
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33])));
#line 91 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_29));
#line 91 "goal_expr_to_goal.m"
                  }
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
#line 89 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213;
#line 89 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 5:
#line 415 "goal_expr_to_goal.m"
                {
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_370_370;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_371_371;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_372_372;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_373_373;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_374_374;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_375_375;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_376_376;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_706 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_707;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_708 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_709 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_710;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_711;
#line 415 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_712;

#line 417 "goal_expr_to_goal.m"
                  {
#line 417 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_370_370 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801);
                  }
#line 416 "goal_expr_to_goal.m"
                  {
#line 416 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_708, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_370_370, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_710, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_375_375, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_376_376);
                  }
#line 419 "goal_expr_to_goal.m"
                  {
#line 419 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_709, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_710, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_711, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_375_375, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_376_376, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 422 "goal_expr_to_goal.m"
                  {
#line 422 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_712 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_711);
                  }
#line 423 "goal_expr_to_goal.m"
                  {
#line 423 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_706, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_707);
                  }
#line 424 "goal_expr_to_goal.m"
                  {
#line 424 "goal_expr_to_goal.m"
                    hlds__hlds_goal__par_conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_712, hlds__make_hlds__goal_expr_to_goal__GoalInfo_707, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
                  }
#line 415 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 6:
#line 93 "goal_expr_to_goal.m"
                {
#line 93 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__QuantType_30 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 93 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__VarsKind_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 93 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 93 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 93 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_609 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));

#line 109 "goal_expr_to_goal.m"
#line 109 "goal_expr_to_goal.m"
                  switch (hlds__make_hlds__goal_expr_to_goal__QuantType_30) {
#line 109 "goal_expr_to_goal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 109 "goal_expr_to_goal.m"
                    case (MR_Integer) 1:
#line 95 "goal_expr_to_goal.m"
                      {
#line 95 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34;
#line 95 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_593_593;
#line 95 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_595_595;

#line 105 "goal_expr_to_goal.m"
                        {
#line 105 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_595_595 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 105 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 105 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_609));
#line 105 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_33));
#line 105 "goal_expr_to_goal.m"
                        }
#line 104 "goal_expr_to_goal.m"
                        {
#line 104 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_593_593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 104 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 104 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 1) = ((MR_Box) (((MR_Integer) 0 | ((hlds__make_hlds__goal_expr_to_goal__VarsKind_31 << (MR_Integer) 1)))));
#line 104 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_609));
#line 104 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars0_32));
#line 104 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_595_595));
#line 104 "goal_expr_to_goal.m"
                        }
#line 103 "goal_expr_to_goal.m"
                        {
#line 103 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 103 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 103 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_609));
#line 103 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_593_593));
#line 103 "goal_expr_to_goal.m"
                        }
#line 106 "goal_expr_to_goal.m"
                        /* direct tailcall eliminated */
#line 106 "goal_expr_to_goal.m"
                        {
#line 106 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34;

#line 106 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 106 "goal_expr_to_goal.m"
                        }
#line 106 "goal_expr_to_goal.m"
                        continue;
#line 95 "goal_expr_to_goal.m"
                      }
#line 109 "goal_expr_to_goal.m"
                      break;
#line 109 "goal_expr_to_goal.m"
                    case (MR_Integer) 0:
#line 110 "goal_expr_to_goal.m"
                      {
#line 110 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_35;
#line 110 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36;
#line 110 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_37;
#line 110 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_605;
#line 110 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_606;

#line 111 "goal_expr_to_goal.m"
                        {
#line 111 "goal_expr_to_goal.m"
                          parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_32, &hlds__make_hlds__goal_expr_to_goal__Vars_35);
                        }
#line 118 "goal_expr_to_goal.m"
#line 118 "goal_expr_to_goal.m"
                        switch (hlds__make_hlds__goal_expr_to_goal__VarsKind_31) {
#line 118 "goal_expr_to_goal.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 118 "goal_expr_to_goal.m"
                          case (MR_Integer) 0:
#line 113 "goal_expr_to_goal.m"
                            {
#line 114 "goal_expr_to_goal.m"
                              {
#line 114 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_33, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                              }
#line 117 "goal_expr_to_goal.m"
                              {
#line 117 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Reason_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 117 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Reason_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_35));
#line 117 "goal_expr_to_goal.m"
                              }
#line 113 "goal_expr_to_goal.m"
                            }
#line 118 "goal_expr_to_goal.m"
                            break;
#line 118 "goal_expr_to_goal.m"
                          case (MR_Integer) 1:
#line 119 "goal_expr_to_goal.m"
                            {
#line 119 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40;
#line 119 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41;
#line 119 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_579_579;

#line 122 "goal_expr_to_goal.m"
                              {
#line 122 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_609, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__Vars_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_579_579);
                              }
#line 124 "goal_expr_to_goal.m"
                              {
#line 124 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_33, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_579_579, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                              }
#line 127 "goal_expr_to_goal.m"
                              {
#line 127 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__Vars_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                              }
#line 130 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__Reason_37 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3];
#line 119 "goal_expr_to_goal.m"
                            }
#line 118 "goal_expr_to_goal.m"
                            break;
#line 118 "goal_expr_to_goal.m"
                        }
#line 132 "goal_expr_to_goal.m"
                        {
#line 132 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_605 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 132 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_605, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 132 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_605, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_37));
#line 132 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_605, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36));
#line 132 "goal_expr_to_goal.m"
                        }
#line 133 "goal_expr_to_goal.m"
                        {
#line 133 "goal_expr_to_goal.m"
                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_609, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_606);
                        }
#line 134 "goal_expr_to_goal.m"
                        {
#line 134 "goal_expr_to_goal.m"
                          MR_Word base;
#line 134 "goal_expr_to_goal.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 134 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 134 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_605));
#line 134 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_606));
#line 134 "goal_expr_to_goal.m"
                        }
#line 110 "goal_expr_to_goal.m"
                      }
#line 109 "goal_expr_to_goal.m"
                      break;
#line 109 "goal_expr_to_goal.m"
                  }
#line 93 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 7:
#line 137 "goal_expr_to_goal.m"
                {
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_612 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_613;
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_614;
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_615 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_616;
#line 137 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_617;

#line 138 "goal_expr_to_goal.m"
                  {
#line 138 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_615, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_616, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 141 "goal_expr_to_goal.m"
                  {
#line 141 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_617 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 141 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_617, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_43));
#line 141 "goal_expr_to_goal.m"
                  }
#line 142 "goal_expr_to_goal.m"
                  {
#line 142 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_613 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 142 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 142 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_617));
#line 142 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_616));
#line 142 "goal_expr_to_goal.m"
                  }
#line 143 "goal_expr_to_goal.m"
                  {
#line 143 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_612, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_614);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_613));
#line 144 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_614));
#line 144 "goal_expr_to_goal.m"
                  }
#line 137 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 8:
#line 147 "goal_expr_to_goal.m"
                {
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_46;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_618 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_619;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_620;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_621 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_622 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_623;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_624;
#line 147 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_625 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 148 "goal_expr_to_goal.m"
                  {
#line 148 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_622, hlds__make_hlds__goal_expr_to_goal__StateVars_625, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_45, hlds__make_hlds__goal_expr_to_goal__Context_618, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_46, hlds__make_hlds__goal_expr_to_goal__SubGoal_621, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_623, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 152 "goal_expr_to_goal.m"
                  {
#line 152 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_624 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_624, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_46));
#line 152 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_624, 1) = ((MR_Box) ((MR_Integer) 0));
#line 152 "goal_expr_to_goal.m"
                  }
#line 153 "goal_expr_to_goal.m"
                  {
#line 153 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_619 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 153 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 153 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_624));
#line 153 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_623));
#line 153 "goal_expr_to_goal.m"
                  }
#line 154 "goal_expr_to_goal.m"
                  {
#line 154 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_618, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_620);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_619));
#line 155 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_620));
#line 155 "goal_expr_to_goal.m"
                  }
#line 147 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 9:
#line 158 "goal_expr_to_goal.m"
                {
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_626 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_627;
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_628;
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_629 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_630 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_631;
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_632;
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_633 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_634 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_635 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 158 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_636;

#line 159 "goal_expr_to_goal.m"
                  {
#line 159 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_630, hlds__make_hlds__goal_expr_to_goal__StateVars_633, hlds__make_hlds__goal_expr_to_goal__DotSVars_634, hlds__make_hlds__goal_expr_to_goal__ColonSVars_635, hlds__make_hlds__goal_expr_to_goal__Context_626, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_636, hlds__make_hlds__goal_expr_to_goal__SubGoal_629, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_631, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 163 "goal_expr_to_goal.m"
                  {
#line 163 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_632, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_636));
#line 163 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_632, 1) = ((MR_Box) ((MR_Integer) 1));
#line 163 "goal_expr_to_goal.m"
                  }
#line 164 "goal_expr_to_goal.m"
                  {
#line 164 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_627 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 164 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_627, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 164 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_627, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_632));
#line 164 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_627, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_631));
#line 164 "goal_expr_to_goal.m"
                  }
#line 165 "goal_expr_to_goal.m"
                  {
#line 165 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_626, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_628);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_627));
#line 166 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_628));
#line 166 "goal_expr_to_goal.m"
                  }
#line 158 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 10:
#line 169 "goal_expr_to_goal.m"
                {
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_637 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_638;
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_639;
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_640 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_641 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_642;
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_643;
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_644 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_645 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_646 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 169 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_647;

#line 170 "goal_expr_to_goal.m"
                  {
#line 170 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_641, hlds__make_hlds__goal_expr_to_goal__StateVars_644, hlds__make_hlds__goal_expr_to_goal__DotSVars_645, hlds__make_hlds__goal_expr_to_goal__ColonSVars_646, hlds__make_hlds__goal_expr_to_goal__Context_637, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_647, hlds__make_hlds__goal_expr_to_goal__SubGoal_640, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_642, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 175 "goal_expr_to_goal.m"
                  {
#line 175 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_643 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_643, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_647));
#line 175 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_643, 1) = ((MR_Box) ((MR_Integer) 2));
#line 175 "goal_expr_to_goal.m"
                  }
#line 176 "goal_expr_to_goal.m"
                  {
#line 176 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_638 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 176 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_638, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 176 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_638, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_643));
#line 176 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_638, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_642));
#line 176 "goal_expr_to_goal.m"
                  }
#line 177 "goal_expr_to_goal.m"
                  {
#line 177 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_637, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_639);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_638));
#line 178 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_639));
#line 178 "goal_expr_to_goal.m"
                  }
#line 169 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 11:
#line 180 "goal_expr_to_goal.m"
                {
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_550_550;
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_648 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_649;
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_650;
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_651 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 180 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_652;

#line 181 "goal_expr_to_goal.m"
                  {
#line 181 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_651, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_652, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 184 "goal_expr_to_goal.m"
                  {
#line 184 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_550_550 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_550_550, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_550_550, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_47));
#line 184 "goal_expr_to_goal.m"
                  }
#line 184 "goal_expr_to_goal.m"
                  {
#line 184 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_649 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_550_550));
#line 184 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_652));
#line 184 "goal_expr_to_goal.m"
                  }
#line 185 "goal_expr_to_goal.m"
                  {
#line 185 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_648, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_650);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_649));
#line 186 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_650));
#line 186 "goal_expr_to_goal.m"
                  }
#line 180 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 12:
#line 188 "goal_expr_to_goal.m"
                {
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_49;
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_543_543;
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_653 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_654;
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_655;
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_656 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 188 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_657;

#line 189 "goal_expr_to_goal.m"
                  {
#line 189 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var0_48, &hlds__make_hlds__goal_expr_to_goal__Var_49);
                  }
#line 190 "goal_expr_to_goal.m"
                  {
#line 190 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_656, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_657, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 193 "goal_expr_to_goal.m"
                  {
#line 193 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_543_543 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_543_543, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_543_543, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_49));
#line 193 "goal_expr_to_goal.m"
                  }
#line 193 "goal_expr_to_goal.m"
                  {
#line 193 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_654 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_654, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_654, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_543_543));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_654, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_657));
#line 193 "goal_expr_to_goal.m"
                  }
#line 194 "goal_expr_to_goal.m"
                  {
#line 194 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_653, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_655);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_654));
#line 195 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_655));
#line 195 "goal_expr_to_goal.m"
                  }
#line 188 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 13:
#line 198 "goal_expr_to_goal.m"
                {
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_535_535;
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_658 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_659;
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_660;
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_661 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_662;
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_663 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_664 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 198 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_665;

#line 199 "goal_expr_to_goal.m"
                  {
#line 199 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var0_664, &hlds__make_hlds__goal_expr_to_goal__Var_665);
                  }
#line 200 "goal_expr_to_goal.m"
                  {
#line 200 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_661, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_662, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 203 "goal_expr_to_goal.m"
                  {
#line 203 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_535_535 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_535_535, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_535_535, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_665));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_535_535, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_663));
#line 203 "goal_expr_to_goal.m"
                  }
#line 203 "goal_expr_to_goal.m"
                  {
#line 203 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_659 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_659, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_659, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_535_535));
#line 203 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_659, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_662));
#line 203 "goal_expr_to_goal.m"
                  }
#line 204 "goal_expr_to_goal.m"
                  {
#line 204 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_658, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_660);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_659));
#line 205 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_660));
#line 205 "goal_expr_to_goal.m"
                  }
#line 198 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 14:
#line 300 "goal_expr_to_goal.m"
                {
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutables0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_101;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_102;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GetGoals_109;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SetGoals_110;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal1_111;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_468_468;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_469_469;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_470_470;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_471_471;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_673 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_674;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_675;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_676;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_677;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_678;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_679;
#line 300 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_680;

#line 301 "goal_expr_to_goal.m"
                  {
#line 301 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_468_468 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_673));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207));
#line 301 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Renaming_19));
#line 301 "goal_expr_to_goal.m"
                  }
#line 7805 "hlds.make_hlds.goal_expr_to_goal.c"
                  hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 301 "goal_expr_to_goal.m"
                  {
#line 301 "goal_expr_to_goal.m"
                    mercury__list__map4_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797, hlds__make_hlds__goal_expr_to_goal__V_468_468, hlds__make_hlds__goal_expr_to_goal__Mutables0_97, &hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99, &hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100, &hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_101, &hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_102);
                  }
#line 312 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "goal_expr_to_goal.m"
                    {
#line 314 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__StateVars_678 = hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100;
#line 316 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__GetGoals_109 = hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_101;
#line 317 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__SetGoals_110 = hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_102;
#line 313 "goal_expr_to_goal.m"
                    }
#line 312 "goal_expr_to_goal.m"
                  else
#line 305 "goal_expr_to_goal.m"
                    {
#line 305 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96, (MR_Integer) 0)));
#line 305 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_104;
#line 305 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__IOStateVarName_105;
#line 305 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOGetGoal_106;
#line 305 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOSetGoal_107;

#line 306 "goal_expr_to_goal.m"
                      {
#line 306 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_673, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_103, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_104, &hlds__make_hlds__goal_expr_to_goal__IOStateVarName_105, &hlds__make_hlds__goal_expr_to_goal__IOGetGoal_106, &hlds__make_hlds__goal_expr_to_goal__IOSetGoal_107);
                      }
#line 308 "goal_expr_to_goal.m"
                      {
#line 308 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 308 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarName_105));
#line 308 "goal_expr_to_goal.m"
                      }
#line 309 "goal_expr_to_goal.m"
                      {
#line 309 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__StateVars_678 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars_678, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVar_104));
#line 309 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars_678, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100));
#line 309 "goal_expr_to_goal.m"
                      }
#line 310 "goal_expr_to_goal.m"
                      {
#line 310 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__GetGoals_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_109, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOGetGoal_106));
#line 310 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_109, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_101));
#line 310 "goal_expr_to_goal.m"
                      }
#line 311 "goal_expr_to_goal.m"
                      {
#line 311 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__SetGoals_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_110, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOSetGoal_107));
#line 311 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_110, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_102));
#line 311 "goal_expr_to_goal.m"
                      }
#line 305 "goal_expr_to_goal.m"
                    }
#line 320 "goal_expr_to_goal.m"
                  {
#line 320 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_471_471 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_471_471, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal0_98));
#line 320 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_471_471, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "goal_expr_to_goal.m"
                  }
#line 320 "goal_expr_to_goal.m"
                  {
#line 320 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_470_470 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797, hlds__make_hlds__goal_expr_to_goal__V_471_471, hlds__make_hlds__goal_expr_to_goal__SetGoals_110);
                  }
#line 320 "goal_expr_to_goal.m"
                  {
#line 320 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_469_469 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797, hlds__make_hlds__goal_expr_to_goal__GetGoals_109, hlds__make_hlds__goal_expr_to_goal__V_470_470);
                  }
#line 320 "goal_expr_to_goal.m"
                  {
#line 320 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__SubGoal1_111 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__goal_expr_to_goal__Context_673, hlds__make_hlds__goal_expr_to_goal__V_469_469);
                  }
#line 322 "goal_expr_to_goal.m"
                  {
#line 322 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_673, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__StateVars_678, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_679, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473);
                  }
#line 324 "goal_expr_to_goal.m"
                  {
#line 324 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal1_111, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_676, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_679, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_680, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 327 "goal_expr_to_goal.m"
                  {
#line 327 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_678, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_680, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                  }
#line 331 "goal_expr_to_goal.m"
                  {
#line 331 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_677 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_677, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_677, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_677, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_677, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_677, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99));
#line 331 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_677, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "goal_expr_to_goal.m"
                  }
#line 333 "goal_expr_to_goal.m"
                  {
#line 333 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_674 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 333 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_674, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 333 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_674, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_677));
#line 333 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_674, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_676));
#line 333 "goal_expr_to_goal.m"
                  }
#line 334 "goal_expr_to_goal.m"
                  {
#line 334 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_673, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_675);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_674));
#line 335 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_675));
#line 335 "goal_expr_to_goal.m"
                  }
#line 300 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 15:
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
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_670 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_671;
#line 208 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_672;

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
#line 8042 "hlds.make_hlds.goal_expr_to_goal.c"
                  if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Outer0_50)) == (MR_mktag((MR_Integer) 0))))
#line 8044 "hlds.make_hlds.goal_expr_to_goal.c"
                    {
#line 8046 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
#line 8048 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59;
#line 8050 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_60;
#line 8052 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_61;
#line 8054 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89;
#line 8056 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485;
#line 8058 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486;
#line 8060 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487;
#line 8062 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513;

#line 220 "goal_expr_to_goal.m"
                      {
#line 220 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58, &hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59);
                      }
#line 222 "goal_expr_to_goal.m"
                      {
#line 222 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59, &hlds__make_hlds__goal_expr_to_goal__OuterDI_60, &hlds__make_hlds__goal_expr_to_goal__OuterUO_61, &hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487);
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
#line 8085 "hlds.make_hlds.goal_expr_to_goal.c"
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
#line 8087 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 8089 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 8091 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68;
#line 8093 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73;
#line 8095 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74;
#line 8097 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75;
#line 8099 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_76;
#line 8101 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77;
#line 8103 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78;
#line 8105 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83;
#line 8107 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_84;
#line 8109 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_85;
#line 8111 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490;
#line 8113 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491;
#line 8115 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492;
#line 8117 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493;
#line 8119 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494;
#line 8121 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495;
#line 8123 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496;
#line 8125 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497;
#line 8127 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498;
#line 8129 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501;
#line 8131 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502;
#line 8133 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503;

#line 235 "goal_expr_to_goal.m"
                          {
#line 235 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68);
                          }
#line 237 "goal_expr_to_goal.m"
                          {
#line 237 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491);
                          }
#line 245 "goal_expr_to_goal.m"
                          {
#line 245 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496);
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
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501);
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
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                          }
#line 266 "goal_expr_to_goal.m"
                          {
#line 266 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, &hlds__make_hlds__goal_expr_to_goal__InnerDI_84, &hlds__make_hlds__goal_expr_to_goal__InnerUO_85, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
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
#line 8196 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 8198 "hlds.make_hlds.goal_expr_to_goal.c"
                      else
#line 8200 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 8202 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_788_788;
#line 8204 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_87;
#line 8206 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_88;
#line 8208 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_668;
#line 8210 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_669;
#line 8212 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_901;
#line 8214 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_902;
#line 8216 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_903;
#line 8218 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_904;
#line 8220 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_905;
#line 8222 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_908;
#line 8224 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_909;
#line 8226 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_910;
#line 8228 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_911;
#line 8230 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_912;
#line 8232 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_913;
#line 8234 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_914;

#line 245 "goal_expr_to_goal.m"
                          {
#line 245 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_901, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_902, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_908, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_909, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_910, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_911, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_912);
                          }
#line 248 "goal_expr_to_goal.m"
                          {
#line 248 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_903 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_903, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_901));
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_903, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_902));
#line 248 "goal_expr_to_goal.m"
                          }
#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_904, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_908, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_913, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_909, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_914, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_910, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_911, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_912, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
#line 253 "goal_expr_to_goal.m"
                          {
#line 253 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_905 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_905, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_903));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_905, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_904));
#line 253 "goal_expr_to_goal.m"
                          }
#line 254 "goal_expr_to_goal.m"
                          {
#line 254 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_905, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_914, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_913, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                          }
#line 274 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerDI0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 274 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerUO0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
#line 8276 "hlds.make_hlds.goal_expr_to_goal.c"
                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_788_788 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 275 "goal_expr_to_goal.m"
                          {
#line 275 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_788_788, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_87, &hlds__make_hlds__goal_expr_to_goal__InnerDI_668);
                          }
#line 276 "goal_expr_to_goal.m"
                          {
#line 276 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_788_788, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_88, &hlds__make_hlds__goal_expr_to_goal__InnerUO_669);
                          }
#line 277 "goal_expr_to_goal.m"
                          {
#line 277 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_668));
#line 277 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_669));
#line 277 "goal_expr_to_goal.m"
                          }
#line 8298 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 281 "goal_expr_to_goal.m"
                      {
#line 281 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                      }
#line 8305 "hlds.make_hlds.goal_expr_to_goal.c"
                    }
#line 8307 "hlds.make_hlds.goal_expr_to_goal.c"
                  else
#line 8309 "hlds.make_hlds.goal_expr_to_goal.c"
                    {
#line 8311 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_786_786 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 8313 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
#line 8315 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 1)));
#line 8317 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_666;
#line 8319 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_667;

#line 228 "goal_expr_to_goal.m"
                      {
#line 228 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_786_786, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterDI0_65, &hlds__make_hlds__goal_expr_to_goal__OuterDI_666);
                      }
#line 229 "goal_expr_to_goal.m"
                      {
#line 229 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_786_786, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterUO0_66, &hlds__make_hlds__goal_expr_to_goal__OuterUO_667);
                      }
#line 230 "goal_expr_to_goal.m"
                      {
#line 230 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_666));
#line 230 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_667));
#line 230 "goal_expr_to_goal.m"
                      }
#line 8342 "hlds.make_hlds.goal_expr_to_goal.c"
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
#line 8344 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 8346 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_814 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 8348 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_815;
#line 8350 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_827;
#line 8352 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_828;
#line 8354 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_829;
#line 8356 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_861;
#line 8358 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_862;
#line 8360 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_863;
#line 8362 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_864;
#line 8364 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_865;
#line 8366 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_866;
#line 8368 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_876;
#line 8370 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_877;
#line 8372 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_878;
#line 8374 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_879;
#line 8376 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_880;
#line 8378 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_881;
#line 8380 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_882;
#line 8382 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_883;
#line 8384 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_884;
#line 8386 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_885;
#line 8388 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_886;
#line 8390 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_887;

#line 235 "goal_expr_to_goal.m"
                          {
#line 235 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_814, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_815);
                          }
#line 237 "goal_expr_to_goal.m"
                          {
#line 237 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_815, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_827, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_861, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_876, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_877);
                          }
#line 245 "goal_expr_to_goal.m"
                          {
#line 245 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_862, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_861, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_863, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_878, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_876, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_879, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_880, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_881, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_877, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_882);
                          }
#line 248 "goal_expr_to_goal.m"
                          {
#line 248 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_864 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_864, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_862));
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_864, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_863));
#line 248 "goal_expr_to_goal.m"
                          }
#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_865, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_861, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_878, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_883, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_879, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_884, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_880, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_881, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_882, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_885);
                          }
#line 253 "goal_expr_to_goal.m"
                          {
#line 253 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_866 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_866, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_864));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_866, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_865));
#line 253 "goal_expr_to_goal.m"
                          }
#line 254 "goal_expr_to_goal.m"
                          {
#line 254 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_866, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_884, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_886, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_861, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_887, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_883, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                          }
#line 266 "goal_expr_to_goal.m"
                          {
#line 266 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_827, &hlds__make_hlds__goal_expr_to_goal__InnerDI_828, &hlds__make_hlds__goal_expr_to_goal__InnerUO_829, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_887, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_886, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_885, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
#line 268 "goal_expr_to_goal.m"
                          {
#line 268 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_828));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_829));
#line 268 "goal_expr_to_goal.m"
                          }
#line 8453 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 8455 "hlds.make_hlds.goal_expr_to_goal.c"
                      else
#line 8457 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 8459 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_788_842;
#line 8461 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_836;
#line 8463 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_837;
#line 8465 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_840;
#line 8467 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_841;
#line 8469 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_921;
#line 8471 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_922;
#line 8473 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_923;
#line 8475 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_924;
#line 8477 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925;
#line 8479 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_928;
#line 8481 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_929;
#line 8483 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_930;
#line 8485 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_931;
#line 8487 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_932;
#line 8489 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_933;
#line 8491 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_934;

#line 245 "goal_expr_to_goal.m"
                          {
#line 245 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_921, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_922, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_928, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_929, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_930, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_931, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_932);
                          }
#line 248 "goal_expr_to_goal.m"
                          {
#line 248 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_923 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_923, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_921));
#line 248 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_923, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_922));
#line 248 "goal_expr_to_goal.m"
                          }
#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_924, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_928, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_933, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_929, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_934, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_930, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_931, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_932, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
#line 253 "goal_expr_to_goal.m"
                          {
#line 253 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_923));
#line 253 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_924));
#line 253 "goal_expr_to_goal.m"
                          }
#line 254 "goal_expr_to_goal.m"
                          {
#line 254 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_934, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_933, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                          }
#line 274 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerDI0_836 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 274 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerUO0_837 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
#line 8533 "hlds.make_hlds.goal_expr_to_goal.c"
                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_788_842 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 275 "goal_expr_to_goal.m"
                          {
#line 275 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_788_842, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_836, &hlds__make_hlds__goal_expr_to_goal__InnerDI_840);
                          }
#line 276 "goal_expr_to_goal.m"
                          {
#line 276 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_788_842, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_837, &hlds__make_hlds__goal_expr_to_goal__InnerUO_841);
                          }
#line 277 "goal_expr_to_goal.m"
                          {
#line 277 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_840));
#line 277 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_841));
#line 277 "goal_expr_to_goal.m"
                          }
#line 8555 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 8557 "hlds.make_hlds.goal_expr_to_goal.c"
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
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_671 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_671, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 287 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_671, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_90));
#line 287 "goal_expr_to_goal.m"
                  }
#line 288 "goal_expr_to_goal.m"
                  {
#line 288 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_672);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_671));
#line 289 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_672));
#line 289 "goal_expr_to_goal.m"
                  }
#line 208 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 16:
#line 338 "goal_expr_to_goal.m"
                {
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 7)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_687 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_688 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 338 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_689 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 360 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_688 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "goal_expr_to_goal.m"
                    {
#line 361 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_689, hlds__make_hlds__goal_expr_to_goal__Then0_114, hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115, hlds__make_hlds__goal_expr_to_goal__Catches0_116, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117, hlds__make_hlds__goal_expr_to_goal__Context_687, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                    }
#line 360 "goal_expr_to_goal.m"
                  else
#line 340 "goal_expr_to_goal.m"
                    {
#line 340 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_683 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_688, (MR_Integer) 0)));

#line 348 "goal_expr_to_goal.m"
                      if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "goal_expr_to_goal.m"
                        {
#line 342 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_681;

#line 343 "goal_expr_to_goal.m"
                          {
#line 343 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_683, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_681);
                          }
#line 344 "goal_expr_to_goal.m"
                          {
#line 344 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_683, hlds__make_hlds__goal_expr_to_goal__IOStateVar_681, hlds__make_hlds__goal_expr_to_goal__SubGoal0_689, hlds__make_hlds__goal_expr_to_goal__Then0_114, hlds__make_hlds__goal_expr_to_goal__Catches0_116, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117, hlds__make_hlds__goal_expr_to_goal__Context_687, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
#line 342 "goal_expr_to_goal.m"
                        }
#line 348 "goal_expr_to_goal.m"
                      else
#line 349 "goal_expr_to_goal.m"
                        {
#line 349 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_120;
#line 349 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_121;
#line 349 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_458_458;

#line 354 "goal_expr_to_goal.m"
                          {
#line 354 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_120, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_687));
#line 354 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34])));
#line 354 "goal_expr_to_goal.m"
                          }
#line 356 "goal_expr_to_goal.m"
                          {
#line 356 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_458_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_458_458, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_120));
#line 356 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_458_458, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 356 "goal_expr_to_goal.m"
                          }
#line 355 "goal_expr_to_goal.m"
                          {
#line 355 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 355 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 355 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_458_458));
#line 355 "goal_expr_to_goal.m"
                          }
#line 357 "goal_expr_to_goal.m"
                          {
#line 357 "goal_expr_to_goal.m"
                            MR_Word base;
#line 357 "goal_expr_to_goal.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "goal_expr_to_goal.m"
                            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214 = base;
#line 357 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_121));
#line 357 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213));
#line 357 "goal_expr_to_goal.m"
                          }
#line 358 "goal_expr_to_goal.m"
                          {
#line 358 "goal_expr_to_goal.m"
                            *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_687);
                          }
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207;
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
#line 349 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
#line 349 "goal_expr_to_goal.m"
                        }
#line 340 "goal_expr_to_goal.m"
                    }
#line 338 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 17:
#line 441 "goal_expr_to_goal.m"
                {
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__P_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Q_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_348_348;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_349_349;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_717 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_718;

#line 445 "goal_expr_to_goal.m"
                  {
#line 445 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_349_349 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_349_349, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_349_349, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_717));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_349_349, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_149));
#line 445 "goal_expr_to_goal.m"
                  }
#line 445 "goal_expr_to_goal.m"
                  {
#line 445 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_348_348 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_348_348, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_717));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_348_348, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_148));
#line 445 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_348_348, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_349_349));
#line 445 "goal_expr_to_goal.m"
                  }
#line 444 "goal_expr_to_goal.m"
                  {
#line 444 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_718 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 444 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_718, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 444 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_718, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_717));
#line 444 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_718, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_348_348));
#line 444 "goal_expr_to_goal.m"
                  }
#line 446 "goal_expr_to_goal.m"
                  /* direct tailcall eliminated */
#line 446 "goal_expr_to_goal.m"
                  {
#line 446 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_718;

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
              case (MR_Integer) 18:
#line 450 "goal_expr_to_goal.m"
                {
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_150;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_151;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_335_335;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_336_336;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_337_337;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_338_338;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_339_339;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_340_340;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_347_347;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_719 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_720;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_721;
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_722 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 450 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_723 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 460 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_152_152;

#line 457 "goal_expr_to_goal.m"
                  {
#line 457 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_722, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_335_335, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_339_339, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_340_340);
                  }
#line 460 "goal_expr_to_goal.m"
                  {
#line 460 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_723, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_335_335, &hlds__make_hlds__goal_expr_to_goal__V_152_152, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_339_339, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_340_340, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 463 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
#line 464 "goal_expr_to_goal.m"
                  {
#line 464 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_347_347 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 464 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_150));
#line 464 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_151));
#line 464 "goal_expr_to_goal.m"
                  }
#line 464 "goal_expr_to_goal.m"
                  {
#line 464 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_720 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_720, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 464 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_720, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_347_347));
#line 464 "goal_expr_to_goal.m"
                  }
#line 465 "goal_expr_to_goal.m"
                  {
#line 465 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_719, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_721);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_720));
#line 466 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_721));
#line 466 "goal_expr_to_goal.m"
                  }
#line 450 "goal_expr_to_goal.m"
                }
#line 89 "goal_expr_to_goal.m"
                break;
#line 89 "goal_expr_to_goal.m"
              case (MR_Integer) 19:
#line 468 "goal_expr_to_goal.m"
                {
#line 468 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__EventName_153 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_155;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_156;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_157;
#line 468 "goal_expr_to_goal.m"
                  MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_158;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Modes_159;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Details_160;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_163;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_320_320;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_321_321;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_322_322;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_323_323;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_326_326;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_327_327;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_328_328;
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_725 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 468 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_726;

#line 469 "goal_expr_to_goal.m"
                  {
#line 469 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_154, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_155);
                  }
#line 470 "goal_expr_to_goal.m"
                  {
#line 470 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_155, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_156);
                  }
#line 472 "goal_expr_to_goal.m"
                  {
#line 472 "goal_expr_to_goal.m"
                    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_156, &hlds__make_hlds__goal_expr_to_goal__HeadVars_157, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_320_320, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_321_321, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_322_322);
                  }
#line 474 "goal_expr_to_goal.m"
                  {
#line 474 "goal_expr_to_goal.m"
                    mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__HeadVars_157, &hlds__make_hlds__goal_expr_to_goal__Arity_158);
                  }
#line 475 "goal_expr_to_goal.m"
                  {
#line 475 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_323_323 = parse_tree__prog_mode__in_mode_0_f_0();
                  }
#line 475 "goal_expr_to_goal.m"
                  {
#line 475 "goal_expr_to_goal.m"
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__goal_expr_to_goal__Arity_158, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_323_323)), &hlds__make_hlds__goal_expr_to_goal__Modes_159);
                  }
#line 476 "goal_expr_to_goal.m"
                  {
#line 476 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Details_160 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Details_160, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_153));
#line 476 "goal_expr_to_goal.m"
                  }
#line 477 "goal_expr_to_goal.m"
                  {
#line 477 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Details_160));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_157));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Modes_159));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 5) = ((MR_Box) ((MR_Integer) 0));
#line 477 "goal_expr_to_goal.m"
                  }
#line 479 "goal_expr_to_goal.m"
                  {
#line 479 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_725, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_726);
                  }
#line 480 "goal_expr_to_goal.m"
                  {
#line 480 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161));
#line 480 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_726));
#line 480 "goal_expr_to_goal.m"
                  }
#line 481 "goal_expr_to_goal.m"
                  {
#line 481 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_326_326 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_326_326, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_153));
#line 481 "goal_expr_to_goal.m"
                  }
#line 481 "goal_expr_to_goal.m"
                  {
#line 481 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__CallId_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_163, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_326_326));
#line 481 "goal_expr_to_goal.m"
                  }
#line 482 "goal_expr_to_goal.m"
                  {
#line 482 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_327_327, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_163));
#line 482 "goal_expr_to_goal.m"
                  }
#line 482 "goal_expr_to_goal.m"
                  {
#line 482 "goal_expr_to_goal.m"
                    hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_157, hlds__make_hlds__goal_expr_to_goal__ArgTerms_156, hlds__make_hlds__goal_expr_to_goal__Context_725, hlds__make_hlds__goal_expr_to_goal__V_327_327, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_321_321, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_328_328, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_320_320, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_322_322, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
#line 485 "goal_expr_to_goal.m"
                  {
#line 485 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_328_328, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
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
