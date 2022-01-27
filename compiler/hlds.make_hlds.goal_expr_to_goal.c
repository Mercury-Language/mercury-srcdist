/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version DEV
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
#include "integer.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 164 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

#line 1254 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1254 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1254 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1254 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1254 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1254 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);

#line 1240 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1240 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3);

#line 1232 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1232 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1232 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1232 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7);

#line 1227 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void);

#line 1183 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1183 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1183 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1183 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1183 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1183 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10);

#line 1169 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1169 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12);

#line 1104 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);

#line 967 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);

#line 921 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);

#line 892 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);

#line 859 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

#line 828 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

#line 738 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);

#line 685 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_19,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);

#line 673 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 673 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 673 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 673 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 673 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8);

#line 656 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_24,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_25,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_26,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_30,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_31,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);

#line 642 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(
#line 642 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_5,
#line 642 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_6,
#line 642 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_7,
#line 642 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_8);

#line 624 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(
#line 624 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_8,
#line 624 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_9,
#line 624 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_10,
#line 624 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11,
#line 624 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_12,
#line 624 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_13,
#line 624 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_14);

#line 316 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
#line 316 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 316 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 316 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 316 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 316 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 316 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[7][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][10];

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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][10] = {
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



#line 972 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 980 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 988 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 996 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
  (MR_String) "loc_whole_goal",
  (MR_Integer) 0
};

#line 1002 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
  (MR_String) "loc_inside_atomic_goal",
  (MR_Integer) 1
};

#line 1008 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1
};

#line 1014 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0
};

#line 1020 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1026 "hlds.make_hlds.goal_expr_to_goal.c"
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

#line 1043 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 1046 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1048 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2)
#line 1050 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1052 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1054 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1057 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1059 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal__succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2));
    }
#line 1062 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1064 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1066 "hlds.make_hlds.goal_expr_to_goal.c"
}

#line 1069 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 1072 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1074 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 1076 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3)
#line 1078 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1080 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1082 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1;

#line 1085 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1087 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3));
    }
#line 1090 "hlds.make_hlds.goal_expr_to_goal.c"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1));
#line 1092 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1094 "hlds.make_hlds.goal_expr_to_goal.c"
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
#line 1138 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1140 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1 == hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2);

#line 1143 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1145 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 23 "goal_expr_to_goal.m"
}

#line 1254 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1254 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1254 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1254 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1254 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1254 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1254 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26)
#line 1254 "goal_expr_to_goal.m"
{
#line 1259 "goal_expr_to_goal.m"
  {
#line 1259 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1259 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_18;
#line 1259 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_20;
#line 1259 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 1259 "goal_expr_to_goal.m"
    MR_Integer hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 1259 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;

#line 1260 "goal_expr_to_goal.m"
    {
#line 1260 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_12, &hlds__make_hlds__goal_expr_to_goal__HeadVars_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);
    }
#line 1263 "goal_expr_to_goal.m"
    {
#line 1263 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1263 "goal_expr_to_goal.m"
    {
#line 1263 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    }
#line 1264 "goal_expr_to_goal.m"
    {
#line 1264 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UpdateStr_11));
#line 1264 "goal_expr_to_goal.m"
    }
#line 1263 "goal_expr_to_goal.m"
    {
#line 1263 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_18));
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1263 "goal_expr_to_goal.m"
    }
#line 1265 "goal_expr_to_goal.m"
    {
#line 1265 "goal_expr_to_goal.m"
      MR_Word base;
#line 1265 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_14 = base;
#line 1265 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_20));
#line 1265 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_13));
#line 1265 "goal_expr_to_goal.m"
    }
#line 1259 "goal_expr_to_goal.m"
  }
#line 1254 "goal_expr_to_goal.m"
}

#line 1240 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1240 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3)
#line 1240 "goal_expr_to_goal.m"
{
#line 1245 "goal_expr_to_goal.m"
  {
#line 1245 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1245 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;

#line 1245 "goal_expr_to_goal.m"
#line 1245 "goal_expr_to_goal.m"
    switch (hlds__make_hlds__goal_expr_to_goal__AccessType_3) {
#line 1245 "goal_expr_to_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "goal_expr_to_goal.m"
      case (MR_Integer) 0:
#line 1249 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26]);
#line 1245 "goal_expr_to_goal.m"
        break;
#line 1245 "goal_expr_to_goal.m"
      case (MR_Integer) 1:
#line 1246 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28]);
#line 1245 "goal_expr_to_goal.m"
        break;
#line 1245 "goal_expr_to_goal.m"
    }
#line 1245 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;
#line 1245 "goal_expr_to_goal.m"
  }
#line 1240 "goal_expr_to_goal.m"
}

#line 1232 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1232 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1232 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1232 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7)
#line 1232 "goal_expr_to_goal.m"
{
#line 1234 "goal_expr_to_goal.m"
  {
#line 1234 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1234 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1234 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_9;
#line 1234 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_10_10;
#line 1234 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_11_11;

#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_10_10 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_10_10));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Atom_5));
#line 1235 "goal_expr_to_goal.m"
    }
#line 1236 "goal_expr_to_goal.m"
    {
#line 1236 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arg_6));
#line 1236 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1236 "goal_expr_to_goal.m"
    }
#line 1236 "goal_expr_to_goal.m"
    {
#line 1236 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_9, hlds__make_hlds__goal_expr_to_goal__V_11_11, hlds__make_hlds__goal_expr_to_goal__Context_7, &hlds__make_hlds__goal_expr_to_goal__Term_8);
    }
#line 1234 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1234 "goal_expr_to_goal.m"
  }
#line 1232 "goal_expr_to_goal.m"
}

#line 1227 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
#line 1227 "goal_expr_to_goal.m"
{
#line 1229 "goal_expr_to_goal.m"
  {
#line 1229 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1229 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1229 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_2_2;

#line 1230 "goal_expr_to_goal.m"
    {
#line 1230 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_2_2 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1230 "goal_expr_to_goal.m"
    {
#line 1230 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_2_2));
#line 1230 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1230 "goal_expr_to_goal.m"
    }
#line 1229 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1229 "goal_expr_to_goal.m"
  }
#line 1227 "goal_expr_to_goal.m"
}

#line 1183 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1183 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1183 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1183 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1183 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1183 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10)
#line 1183 "goal_expr_to_goal.m"
{
#line 1189 "goal_expr_to_goal.m"
  {
#line 1189 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1189 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__Catches_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "goal_expr_to_goal.m"
      if ((hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1210 "goal_expr_to_goal.m"
        {
#line 1210 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Rethrow_20;
#line 1210 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
#line 1210 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 1210 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

#line 1213 "goal_expr_to_goal.m"
          {
#line 1213 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_21_21 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1213 "goal_expr_to_goal.m"
          {
#line 1213 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
#line 1213 "goal_expr_to_goal.m"
          }
#line 1214 "goal_expr_to_goal.m"
          {
#line 1214 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7);
          }
#line 1215 "goal_expr_to_goal.m"
          {
#line 1215 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6));
#line 1215 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "goal_expr_to_goal.m"
          }
#line 1214 "goal_expr_to_goal.m"
          {
#line 1214 "goal_expr_to_goal.m"
            MR_Word base;
#line 1214 "goal_expr_to_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1214 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1214 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 1214 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Rethrow_20));
#line 1214 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_24_24));
#line 1214 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1214 "goal_expr_to_goal.m"
          }
#line 1210 "goal_expr_to_goal.m"
        }
#line 1209 "goal_expr_to_goal.m"
      else
#line 1199 "goal_expr_to_goal.m"
        {
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16;
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17;
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_18;
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19;
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, (MR_Integer) 0)));
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_42;
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_43_43;
#line 1199 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_44_44;

#line 1199 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 0)));
#line 1199 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 1)));
#line 1203 "goal_expr_to_goal.m"
          {
#line 1203 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Context_18 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17);
          }
#line 1205 "goal_expr_to_goal.m"
          {
#line 1205 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16));
#line 1205 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1205 "goal_expr_to_goal.m"
          }
#line 1235 "goal_expr_to_goal.m"
          {
#line 1235 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_43_43 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1235 "goal_expr_to_goal.m"
          {
#line 1235 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_43_43));
#line 1235 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
#line 1235 "goal_expr_to_goal.m"
          }
#line 1236 "goal_expr_to_goal.m"
          {
#line 1236 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1236 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1236 "goal_expr_to_goal.m"
          }
#line 1236 "goal_expr_to_goal.m"
          {
#line 1236 "goal_expr_to_goal.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_42, hlds__make_hlds__goal_expr_to_goal__V_44_44, hlds__make_hlds__goal_expr_to_goal__Context_18, &hlds__make_hlds__goal_expr_to_goal__V_29_29);
          }
#line 1204 "goal_expr_to_goal.m"
          {
#line 1204 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1204 "goal_expr_to_goal.m"
          }
#line 1208 "goal_expr_to_goal.m"
          {
#line 1208 "goal_expr_to_goal.m"
            MR_Word base;
#line 1208 "goal_expr_to_goal.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1208 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1208 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1208 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19));
#line 1208 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17));
#line 1208 "goal_expr_to_goal.m"
          }
#line 1199 "goal_expr_to_goal.m"
        }
#line 1189 "goal_expr_to_goal.m"
    else
#line 1189 "goal_expr_to_goal.m"
      {
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPattern_11;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstGoal_12;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__RestCatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 1)));
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_14;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 0)));
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_50_50;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_51_51;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_52_52;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_54_54;
#line 1189 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_55_55;

#line 1189 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstPattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 0)));
#line 1189 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 1)));
#line 1190 "goal_expr_to_goal.m"
        {
#line 1190 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7, hlds__make_hlds__goal_expr_to_goal__RestCatches_13, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, &hlds__make_hlds__goal_expr_to_goal__ElseGoal_14);
        }
#line 1223 "goal_expr_to_goal.m"
        {
#line 1223 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1224 "goal_expr_to_goal.m"
        {
#line 1224 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_52_52 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
        }
#line 1224 "goal_expr_to_goal.m"
        {
#line 1224 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_52_52));
#line 1224 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
#line 1224 "goal_expr_to_goal.m"
        }
#line 1225 "goal_expr_to_goal.m"
        {
#line 1225 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPattern_11));
#line 1225 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "goal_expr_to_goal.m"
        }
#line 1225 "goal_expr_to_goal.m"
        {
#line 1225 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1225 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_55_55));
#line 1225 "goal_expr_to_goal.m"
        }
#line 1223 "goal_expr_to_goal.m"
        {
#line 1223 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_50_50));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_51_51));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_54_54));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1223 "goal_expr_to_goal.m"
        }
#line 1194 "goal_expr_to_goal.m"
        {
#line 1194 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_33_33 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1194 "goal_expr_to_goal.m"
        {
#line 1194 "goal_expr_to_goal.m"
          MR_Word base;
#line 1194 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1194 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 1194 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1194 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1194 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1194 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15));
#line 1194 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstGoal_12));
#line 1194 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_14));
#line 1194 "goal_expr_to_goal.m"
        }
#line 1189 "goal_expr_to_goal.m"
      }
#line 1189 "goal_expr_to_goal.m"
  }
#line 1183 "goal_expr_to_goal.m"
}

#line 1169 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1169 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1169 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12)
#line 1169 "goal_expr_to_goal.m"
{
#line 1174 "goal_expr_to_goal.m"
  {
#line 1174 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1174 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13;
#line 1174 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CatchChain_14;
#line 1174 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_15_15;
#line 1174 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_22;
#line 1174 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 1174 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 1) = ((MR_Box) ((MR_String) "exception"));
#line 1235 "goal_expr_to_goal.m"
    }
#line 1236 "goal_expr_to_goal.m"
    {
#line 1236 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8));
#line 1236 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1236 "goal_expr_to_goal.m"
    }
#line 1236 "goal_expr_to_goal.m"
    {
#line 1236 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_22, hlds__make_hlds__goal_expr_to_goal__V_24_24, hlds__make_hlds__goal_expr_to_goal__Context_11, &hlds__make_hlds__goal_expr_to_goal__V_15_15);
    }
#line 1175 "goal_expr_to_goal.m"
    {
#line 1175 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1175 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1175 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7));
#line 1175 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_15_15));
#line 1175 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1175 "goal_expr_to_goal.m"
    }
#line 1179 "goal_expr_to_goal.m"
    {
#line 1179 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8, hlds__make_hlds__goal_expr_to_goal__Catches_9, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10, &hlds__make_hlds__goal_expr_to_goal__CatchChain_14);
    }
#line 1181 "goal_expr_to_goal.m"
    {
#line 1181 "goal_expr_to_goal.m"
      MR_Word base;
#line 1181 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_12 = base;
#line 1181 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1181 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13));
#line 1181 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchChain_14));
#line 1181 "goal_expr_to_goal.m"
    }
#line 1174 "goal_expr_to_goal.m"
  }
#line 1169 "goal_expr_to_goal.m"
}

#line 1104 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
#line 1104 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
#line 1104 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64)
#line 1104 "goal_expr_to_goal.m"
{
#line 1114 "goal_expr_to_goal.m"
  {
#line 1114 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_37;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_38;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_42;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_51;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_52;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_75_75;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_84_84;
#line 1114 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_93_93;

#line 1115 "goal_expr_to_goal.m"
    {
#line 1115 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66);
    }
#line 1116 "goal_expr_to_goal.m"
    {
#line 1116 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67);
    }
#line 1118 "goal_expr_to_goal.m"
    {
#line 1118 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1118 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1118 "goal_expr_to_goal.m"
    }
#line 1119 "goal_expr_to_goal.m"
    {
#line 1119 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_38));
#line 1119 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1119 "goal_expr_to_goal.m"
    }
#line 1120 "goal_expr_to_goal.m"
    {
#line 1120 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
#line 1120 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1120 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1120 "goal_expr_to_goal.m"
    }
#line 1122 "goal_expr_to_goal.m"
    {
#line 1122 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_42);
    }
#line 1230 "goal_expr_to_goal.m"
    {
#line 1230 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_93_93 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1230 "goal_expr_to_goal.m"
    {
#line 1230 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_93_93));
#line 1230 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1230 "goal_expr_to_goal.m"
    }
#line 1126 "goal_expr_to_goal.m"
    {
#line 1126 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1126 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1126 "goal_expr_to_goal.m"
    }
#line 1125 "goal_expr_to_goal.m"
    {
#line 1125 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1125 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1125 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_71_71));
#line 1125 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_72_72));
#line 1125 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1125 "goal_expr_to_goal.m"
    }
#line 1131 "goal_expr_to_goal.m"
    {
#line 1131 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_75_75 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, hlds__make_hlds__goal_expr_to_goal__Context_28);
    }
#line 1129 "goal_expr_to_goal.m"
    {
#line 1129 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1129 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1129 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1129 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_75_75));
#line 1129 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1129 "goal_expr_to_goal.m"
    }
#line 1137 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "goal_expr_to_goal.m"
      {
#line 1138 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
#line 1138 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_80_80;

#line 1141 "goal_expr_to_goal.m"
        {
#line 1141 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1141 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1141 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1141 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
#line 1141 "goal_expr_to_goal.m"
        }
#line 1142 "goal_expr_to_goal.m"
        {
#line 1142 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1142 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1142 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
#line 1142 "goal_expr_to_goal.m"
        }
#line 1140 "goal_expr_to_goal.m"
        {
#line 1140 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_78_78));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_80_80));
#line 1140 "goal_expr_to_goal.m"
        }
#line 1138 "goal_expr_to_goal.m"
      }
#line 1137 "goal_expr_to_goal.m"
    else
#line 1134 "goal_expr_to_goal.m"
      {
#line 1134 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25, (MR_Integer) 0)));

#line 1135 "goal_expr_to_goal.m"
        {
#line 1135 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 1135 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1135 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1135 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1135 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
#line 1135 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
#line 1135 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_45));
#line 1135 "goal_expr_to_goal.m"
        }
#line 1134 "goal_expr_to_goal.m"
      }
#line 1145 "goal_expr_to_goal.m"
    {
#line 1145 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1145 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44));
#line 1145 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46));
#line 1145 "goal_expr_to_goal.m"
    }
#line 1149 "goal_expr_to_goal.m"
    {
#line 1149 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, hlds__make_hlds__goal_expr_to_goal__Catches_26, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27, hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48);
    }
#line 1156 "goal_expr_to_goal.m"
    {
#line 1156 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1156 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1156 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47));
#line 1156 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48));
#line 1156 "goal_expr_to_goal.m"
    }
#line 1154 "goal_expr_to_goal.m"
    {
#line 1154 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1154 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1154 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43));
#line 1154 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_84_84));
#line 1154 "goal_expr_to_goal.m"
    }
#line 1161 "goal_expr_to_goal.m"
    {
#line 1161 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_22, hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_29, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);
    }
#line 1165 "goal_expr_to_goal.m"
    {
#line 1165 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ShortHand_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1165 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1165 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50));
#line 1165 "goal_expr_to_goal.m"
    }
#line 1166 "goal_expr_to_goal.m"
    {
#line 1166 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1166 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_51));
#line 1166 "goal_expr_to_goal.m"
    }
#line 1167 "goal_expr_to_goal.m"
    {
#line 1167 "goal_expr_to_goal.m"
      MR_Word base;
#line 1167 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_30 = base;
#line 1167 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_52));
#line 1167 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_42));
#line 1167 "goal_expr_to_goal.m"
    }
#line 1114 "goal_expr_to_goal.m"
  }
#line 1104 "goal_expr_to_goal.m"
}

#line 967 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 967 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 967 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79)
#line 967 "goal_expr_to_goal.m"
{
#line 977 "goal_expr_to_goal.m"
  {
#line 977 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_39;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_40;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_44;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOUnify_51;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVars_66;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_67;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_99_99;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_112_112;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_114_114;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_122_122;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_139_139;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_140_140;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_141_141;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_150_150;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_151_151;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_152_152;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_157_157;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_158_158;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_160_160;
#line 977 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_161_161;

#line 978 "goal_expr_to_goal.m"
    {
#line 978 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81);
    }
#line 979 "goal_expr_to_goal.m"
    {
#line 979 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82);
    }
#line 981 "goal_expr_to_goal.m"
    {
#line 981 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 981 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 981 "goal_expr_to_goal.m"
    }
#line 982 "goal_expr_to_goal.m"
    {
#line 982 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_40));
#line 982 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 982 "goal_expr_to_goal.m"
    }
#line 983 "goal_expr_to_goal.m"
    {
#line 983 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 983 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
#line 983 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 983 "goal_expr_to_goal.m"
    }
#line 985 "goal_expr_to_goal.m"
    {
#line 985 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_44);
    }
#line 988 "goal_expr_to_goal.m"
    {
#line 988 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    }
#line 989 "goal_expr_to_goal.m"
    {
#line 989 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 989 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "goal_expr_to_goal.m"
    }
#line 988 "goal_expr_to_goal.m"
    {
#line 988 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_87_87));
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 4) = ((MR_Box) ((MR_Integer) 0));
#line 988 "goal_expr_to_goal.m"
    }
#line 990 "goal_expr_to_goal.m"
    {
#line 990 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95);
    }
#line 995 "goal_expr_to_goal.m"
    {
#line 995 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98);
    }
#line 1003 "goal_expr_to_goal.m"
    {
#line 1003 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_99_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, hlds__make_hlds__goal_expr_to_goal__Context_30);
    }
#line 1001 "goal_expr_to_goal.m"
    {
#line 1001 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_99_99));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1001 "goal_expr_to_goal.m"
    }
#line 1005 "goal_expr_to_goal.m"
    {
#line 1005 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107);
    }
#line 1015 "goal_expr_to_goal.m"
    {
#line 1015 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1015 "goal_expr_to_goal.m"
    }
#line 1015 "goal_expr_to_goal.m"
    {
#line 1015 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_112_112));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "goal_expr_to_goal.m"
    }
#line 1015 "goal_expr_to_goal.m"
    {
#line 1015 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1015 "goal_expr_to_goal.m"
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1014 "goal_expr_to_goal.m"
    {
#line 1014 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOUnify_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_108_108));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1014 "goal_expr_to_goal.m"
    }
#line 1018 "goal_expr_to_goal.m"
    {
#line 1018 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1018 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOUnify_51));
#line 1018 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_26));
#line 1018 "goal_expr_to_goal.m"
    }
#line 1018 "goal_expr_to_goal.m"
    {
#line 1018 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1018 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1018 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_122_122));
#line 1018 "goal_expr_to_goal.m"
    }
#line 1019 "goal_expr_to_goal.m"
    {
#line 1019 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128);
    }
#line 1024 "goal_expr_to_goal.m"
    {
#line 1024 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131);
    }
#line 1028 "goal_expr_to_goal.m"
    {
#line 1028 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_27));
#line 1028 "goal_expr_to_goal.m"
    }
#line 1029 "goal_expr_to_goal.m"
    {
#line 1029 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138);
    }
#line 1040 "goal_expr_to_goal.m"
    {
#line 1040 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56));
#line 1040 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "goal_expr_to_goal.m"
    }
#line 1040 "goal_expr_to_goal.m"
    {
#line 1040 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53));
#line 1040 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_141_141));
#line 1040 "goal_expr_to_goal.m"
    }
#line 1040 "goal_expr_to_goal.m"
    {
#line 1040 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50));
#line 1040 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_140_140));
#line 1040 "goal_expr_to_goal.m"
    }
#line 1039 "goal_expr_to_goal.m"
    {
#line 1039 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_139_139, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57);
    }
#line 1047 "goal_expr_to_goal.m"
    {
#line 1047 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, hlds__make_hlds__goal_expr_to_goal__Catches0_28, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29, hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59);
    }
#line 1049 "goal_expr_to_goal.m"
    {
#line 1049 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);
    }
#line 1057 "goal_expr_to_goal.m"
    {
#line 1057 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57));
#line 1057 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_150_150, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58));
#line 1057 "goal_expr_to_goal.m"
    }
#line 1059 "goal_expr_to_goal.m"
    {
#line 1059 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_152_152, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_152_152, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61));
#line 1059 "goal_expr_to_goal.m"
    }
#line 1061 "goal_expr_to_goal.m"
    {
#line 1061 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_151_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_152_152));
#line 1061 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1061 "goal_expr_to_goal.m"
    }
#line 1058 "goal_expr_to_goal.m"
    {
#line 1058 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_150_150));
#line 1058 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_151_151));
#line 1058 "goal_expr_to_goal.m"
    }
#line 1062 "goal_expr_to_goal.m"
    {
#line 1062 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71);
    }
#line 1064 "goal_expr_to_goal.m"
    {
#line 1064 "goal_expr_to_goal.m"
      hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64);
    }
#line 1067 "goal_expr_to_goal.m"
    {
#line 1067 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64));
#line 1067 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "goal_expr_to_goal.m"
    }
#line 1067 "goal_expr_to_goal.m"
    {
#line 1067 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46));
#line 1067 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_158_158));
#line 1067 "goal_expr_to_goal.m"
    }
#line 1067 "goal_expr_to_goal.m"
    {
#line 1067 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_157_157, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65);
    }
#line 1070 "goal_expr_to_goal.m"
    {
#line 1070 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54));
#line 1070 "goal_expr_to_goal.m"
    }
#line 1071 "goal_expr_to_goal.m"
    {
#line 1071 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVars_66));
#line 1071 "goal_expr_to_goal.m"
    }
#line 1071 "goal_expr_to_goal.m"
    {
#line 1071 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_160_160 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_161_161));
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65));
#line 1071 "goal_expr_to_goal.m"
    }
#line 1071 "goal_expr_to_goal.m"
    {
#line 1071 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_160_160));
#line 1071 "goal_expr_to_goal.m"
    }
#line 1073 "goal_expr_to_goal.m"
    {
#line 1073 "goal_expr_to_goal.m"
      MR_Word base;
#line 1073 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_32 = base;
#line 1073 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_67));
#line 1073 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_44));
#line 1073 "goal_expr_to_goal.m"
    }
#line 977 "goal_expr_to_goal.m"
  }
#line 967 "goal_expr_to_goal.m"
}

#line 921 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 921 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 921 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15)
#line 921 "goal_expr_to_goal.m"
{
#line 928 "goal_expr_to_goal.m"
  {
#line 928 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 928 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "goal_expr_to_goal.m"
      {
#line 928 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 929 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14;
#line 929 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12;
#line 929 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10;
#line 929 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8;
#line 928 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7 = hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6;
#line 928 "goal_expr_to_goal.m"
      }
#line 928 "goal_expr_to_goal.m"
    else
#line 932 "goal_expr_to_goal.m"
      {
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_38;
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates_39;
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46;
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47;
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58;
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59;
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60;
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61;
#line 932 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62;

#line 933 "goal_expr_to_goal.m"
        {
#line 933 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goal_35, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47, hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62);
        }
#line 936 "goal_expr_to_goal.m"
        {
#line 936 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__DisjState_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46));
#line 936 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47));
#line 936 "goal_expr_to_goal.m"
        }
#line 937 "goal_expr_to_goal.m"
        {
#line 937 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goals_36, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__DisjStates_39, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);
        }
#line 931 "goal_expr_to_goal.m"
        {
#line 931 "goal_expr_to_goal.m"
          MR_Word base;
#line 931 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = base;
#line 931 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_38));
#line 931 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates_39));
#line 931 "goal_expr_to_goal.m"
        }
#line 932 "goal_expr_to_goal.m"
      }
#line 928 "goal_expr_to_goal.m"
  }
#line 921 "goal_expr_to_goal.m"
}

#line 892 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 892 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 892 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44)
#line 892 "goal_expr_to_goal.m"
{
#line 913 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 913 "goal_expr_to_goal.m"
    {
#line 913 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 913 "goal_expr_to_goal.m"
      {
#line 913 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 913 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 913 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 901 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 901 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 901 "goal_expr_to_goal.m"
          {
#line 901 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 901 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 901 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 909 "goal_expr_to_goal.m"
            {
#line 909 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 909 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
#line 909 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
#line 909 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
#line 909 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
#line 909 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

#line 907 "goal_expr_to_goal.m"
              {
#line 907 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_30, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjStates0_20, &hlds__make_hlds__goal_expr_to_goal__DisjStates1_31, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49);
              }
#line 910 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 910 "goal_expr_to_goal.m"
              {
#line 910 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 910 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 910 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
#line 910 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
#line 910 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
#line 910 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
#line 910 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

#line 910 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43;
#line 910 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41;
#line 910 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39;
#line 910 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37;
#line 910 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35;
#line 910 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__DisjStates0_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20;
#line 910 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 910 "goal_expr_to_goal.m"
              }
#line 910 "goal_expr_to_goal.m"
              continue;
#line 909 "goal_expr_to_goal.m"
            }
#line 901 "goal_expr_to_goal.m"
          }
#line 901 "goal_expr_to_goal.m"
        else
#line 916 "goal_expr_to_goal.m"
          {
#line 916 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32;
#line 916 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33;
#line 916 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_34;

#line 914 "goal_expr_to_goal.m"
            {
#line 914 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal_18, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);
            }
#line 917 "goal_expr_to_goal.m"
            {
#line 917 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__DisjState_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 917 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32));
#line 917 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33));
#line 917 "goal_expr_to_goal.m"
            }
#line 918 "goal_expr_to_goal.m"
            {
#line 918 "goal_expr_to_goal.m"
              MR_Word base;
#line 918 "goal_expr_to_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__DisjStates_21 = base;
#line 918 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_34));
#line 918 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates0_20));
#line 918 "goal_expr_to_goal.m"
            }
#line 916 "goal_expr_to_goal.m"
          }
#line 913 "goal_expr_to_goal.m"
      }
#line 913 "goal_expr_to_goal.m"
      break;
#line 913 "goal_expr_to_goal.m"
    }
#line 892 "goal_expr_to_goal.m"
}

#line 859 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 859 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 859 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
#line 859 "goal_expr_to_goal.m"
{
#line 875 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 875 "goal_expr_to_goal.m"
    {
#line 875 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 875 "goal_expr_to_goal.m"
      {
#line 875 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 1)));
#line 875 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 875 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 868 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 868 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 868 "goal_expr_to_goal.m"
          {
#line 868 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 868 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
#line 868 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
#line 871 "goal_expr_to_goal.m"
            {
#line 871 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 871 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 871 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 871 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 871 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 871 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 871 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 869 "goal_expr_to_goal.m"
              {
#line 869 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
#line 872 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 872 "goal_expr_to_goal.m"
              {
#line 872 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 872 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 872 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 872 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 872 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 872 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 872 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 872 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 872 "goal_expr_to_goal.m"
              }
#line 872 "goal_expr_to_goal.m"
              continue;
#line 871 "goal_expr_to_goal.m"
            }
#line 868 "goal_expr_to_goal.m"
          }
#line 868 "goal_expr_to_goal.m"
        else
#line 877 "goal_expr_to_goal.m"
          {
#line 877 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
#line 877 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
#line 878 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 882 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
#line 879 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 876 "goal_expr_to_goal.m"
            {
#line 876 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
#line 878 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
#line 878 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
#line 879 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 879 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 879 "goal_expr_to_goal.m"
              {
#line 879 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
#line 879 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
#line 879 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 1);
#line 879 "goal_expr_to_goal.m"
              }
#line 882 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 880 "goal_expr_to_goal.m"
              {
#line 880 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 880 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

#line 881 "goal_expr_to_goal.m"
                {
#line 881 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
#line 880 "goal_expr_to_goal.m"
                {
#line 880 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
#line 880 "goal_expr_to_goal.m"
              }
#line 882 "goal_expr_to_goal.m"
            else
#line 883 "goal_expr_to_goal.m"
              {
#line 883 "goal_expr_to_goal.m"
                {
#line 883 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
#line 883 "goal_expr_to_goal.m"
              }
#line 877 "goal_expr_to_goal.m"
          }
#line 875 "goal_expr_to_goal.m"
      }
#line 875 "goal_expr_to_goal.m"
      break;
#line 875 "goal_expr_to_goal.m"
    }
#line 859 "goal_expr_to_goal.m"
}

#line 828 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 828 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 828 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
#line 828 "goal_expr_to_goal.m"
{
#line 844 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 844 "goal_expr_to_goal.m"
    {
#line 844 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 844 "goal_expr_to_goal.m"
      {
#line 844 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 0)));
#line 844 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 844 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 837 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 837 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 837 "goal_expr_to_goal.m"
          {
#line 837 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 837 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
#line 837 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
#line 840 "goal_expr_to_goal.m"
            {
#line 840 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 840 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 840 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 840 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 840 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 840 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 840 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 838 "goal_expr_to_goal.m"
              {
#line 838 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
#line 841 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 841 "goal_expr_to_goal.m"
              {
#line 841 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 841 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 841 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 841 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 841 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 841 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 841 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 841 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 841 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
#line 841 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
#line 841 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
#line 841 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
#line 841 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
#line 841 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
#line 841 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
#line 841 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 841 "goal_expr_to_goal.m"
              }
#line 841 "goal_expr_to_goal.m"
              continue;
#line 840 "goal_expr_to_goal.m"
            }
#line 837 "goal_expr_to_goal.m"
          }
#line 837 "goal_expr_to_goal.m"
        else
#line 846 "goal_expr_to_goal.m"
          {
#line 846 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
#line 846 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
#line 847 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 851 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
#line 848 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 845 "goal_expr_to_goal.m"
            {
#line 845 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
#line 847 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
#line 847 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
#line 848 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 848 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 848 "goal_expr_to_goal.m"
              {
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 0);
#line 848 "goal_expr_to_goal.m"
              }
#line 851 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 849 "goal_expr_to_goal.m"
              {
#line 849 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 849 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

#line 850 "goal_expr_to_goal.m"
                {
#line 850 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
#line 849 "goal_expr_to_goal.m"
                {
#line 849 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
#line 849 "goal_expr_to_goal.m"
              }
#line 851 "goal_expr_to_goal.m"
            else
#line 852 "goal_expr_to_goal.m"
              {
#line 852 "goal_expr_to_goal.m"
                {
#line 852 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
#line 852 "goal_expr_to_goal.m"
              }
#line 846 "goal_expr_to_goal.m"
          }
#line 844 "goal_expr_to_goal.m"
      }
#line 844 "goal_expr_to_goal.m"
      break;
#line 844 "goal_expr_to_goal.m"
    }
#line 828 "goal_expr_to_goal.m"
}

#line 738 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64,
#line 738 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65,
#line 738 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66)
#line 738 "goal_expr_to_goal.m"
{
#line 747 "goal_expr_to_goal.m"
  {
#line 747 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ArgVars_29;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVar_34;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69;
#line 754 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
#line 754 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
#line 754 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
#line 750 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_70_70;
#line 750 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 750 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;

#line 748 "goal_expr_to_goal.m"
    {
#line 748 "goal_expr_to_goal.m"
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
#line 754 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 751 "goal_expr_to_goal.m"
      {
#line 751 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33 = hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
#line 752 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__TermInputVar_34 = hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
#line 753 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35 = hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
#line 751 "goal_expr_to_goal.m"
      }
#line 754 "goal_expr_to_goal.m"
    else
#line 755 "goal_expr_to_goal.m"
      {
#line 755 "goal_expr_to_goal.m"
        {
#line 755 "goal_expr_to_goal.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
#line 755 "goal_expr_to_goal.m"
          return;
        }
#line 755 "goal_expr_to_goal.m"
      }
#line 789 "goal_expr_to_goal.m"
#line 789 "goal_expr_to_goal.m"
    switch (hlds__make_hlds__goal_expr_to_goal__AccessType_18) {
#line 789 "goal_expr_to_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 789 "goal_expr_to_goal.m"
      case (MR_Integer) 0:
#line 790 "goal_expr_to_goal.m"
        {
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_94_94;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_95_95;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_96_96;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_97_97;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_137;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_146;
#line 790 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_147;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150;
#line 790 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_151;
#line 793 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53;
#line 801 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
#line 801 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
#line 798 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TC_54;

#line 791 "goal_expr_to_goal.m"
          {
#line 791 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_137, &hlds__make_hlds__goal_expr_to_goal__V_78_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84);
          }
#line 793 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 0)));
#line 793 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 1)));
#line 796 "goal_expr_to_goal.m"
          {
#line 796 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 796 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_137));
#line 796 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "goal_expr_to_goal.m"
          }
#line 798 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 798 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 798 "goal_expr_to_goal.m"
            {
#line 798 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 1)));
#line 798 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 2)));
#line 798 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TC_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 3)));
#line 799 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_146 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
#line 800 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_147 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
#line 798 "goal_expr_to_goal.m"
            }
#line 798 "goal_expr_to_goal.m"
          else
#line 802 "goal_expr_to_goal.m"
            {
#line 802 "goal_expr_to_goal.m"
              {
#line 802 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 802 "goal_expr_to_goal.m"
                return;
              }
#line 802 "goal_expr_to_goal.m"
            }
#line 805 "goal_expr_to_goal.m"
          {
#line 805 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 805 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 0) = ((MR_Box) ((MR_Integer) 1));
#line 805 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_146));
#line 805 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_147));
#line 805 "goal_expr_to_goal.m"
          }
#line 806 "goal_expr_to_goal.m"
          {
#line 806 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149));
#line 806 "goal_expr_to_goal.m"
          }
#line 806 "goal_expr_to_goal.m"
          {
#line 806 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
#line 806 "goal_expr_to_goal.m"
          }
#line 813 "goal_expr_to_goal.m"
          {
#line 813 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 0) = ((MR_Box) ((MR_Integer) 2));
#line 813 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141));
#line 813 "goal_expr_to_goal.m"
          }
#line 814 "goal_expr_to_goal.m"
          {
#line 814 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 0) = ((MR_Box) ((MR_Integer) 1));
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150));
#line 814 "goal_expr_to_goal.m"
          }
#line 816 "goal_expr_to_goal.m"
          {
#line 816 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
#line 816 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "goal_expr_to_goal.m"
          }
#line 814 "goal_expr_to_goal.m"
          {
#line 814 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
#line 814 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_97_97));
#line 814 "goal_expr_to_goal.m"
          }
#line 813 "goal_expr_to_goal.m"
          {
#line 813 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_94_94));
#line 813 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_95_95));
#line 813 "goal_expr_to_goal.m"
          }
#line 817 "goal_expr_to_goal.m"
          {
#line 817 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
#line 817 "goal_expr_to_goal.m"
            return;
          }
#line 790 "goal_expr_to_goal.m"
        }
#line 789 "goal_expr_to_goal.m"
        break;
#line 789 "goal_expr_to_goal.m"
      case (MR_Integer) 1:
#line 758 "goal_expr_to_goal.m"
        {
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_36;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_47;
#line 758 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_48;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_52;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_122_122;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_123_123;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_125_125;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_126_126;
#line 758 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_127_127;
#line 772 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
#line 772 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
#line 769 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TypeCtor_46;

#line 759 "goal_expr_to_goal.m"
          {
#line 759 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_36, &hlds__make_hlds__goal_expr_to_goal__V_108_108, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114);
          }
#line 761 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 0)));
#line 761 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 1)));
#line 765 "goal_expr_to_goal.m"
          {
#line 765 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 765 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37));
#line 765 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38));
#line 765 "goal_expr_to_goal.m"
          }
#line 768 "goal_expr_to_goal.m"
          {
#line 768 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 768 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_36));
#line 768 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "goal_expr_to_goal.m"
          }
#line 769 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Functor_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 769 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 769 "goal_expr_to_goal.m"
            {
#line 769 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 1)));
#line 769 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 2)));
#line 769 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TypeCtor_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 3)));
#line 770 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_47 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
#line 771 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_48 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
#line 769 "goal_expr_to_goal.m"
            }
#line 769 "goal_expr_to_goal.m"
          else
#line 773 "goal_expr_to_goal.m"
            {
#line 773 "goal_expr_to_goal.m"
              {
#line 773 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 773 "goal_expr_to_goal.m"
                return;
              }
#line 773 "goal_expr_to_goal.m"
            }
#line 778 "goal_expr_to_goal.m"
          {
#line 778 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 778 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 0) = ((MR_Box) ((MR_Integer) 1));
#line 778 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_47));
#line 778 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_48));
#line 778 "goal_expr_to_goal.m"
          }
#line 779 "goal_expr_to_goal.m"
          {
#line 779 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 779 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50));
#line 779 "goal_expr_to_goal.m"
          }
#line 779 "goal_expr_to_goal.m"
          {
#line 779 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 779 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_122_122));
#line 779 "goal_expr_to_goal.m"
          }
#line 782 "goal_expr_to_goal.m"
          {
#line 782 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 0) = ((MR_Box) ((MR_Integer) 2));
#line 782 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41));
#line 782 "goal_expr_to_goal.m"
          }
#line 783 "goal_expr_to_goal.m"
          {
#line 783 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 0) = ((MR_Box) ((MR_Integer) 1));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43));
#line 783 "goal_expr_to_goal.m"
          }
#line 784 "goal_expr_to_goal.m"
          {
#line 784 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 0) = ((MR_Box) ((MR_Integer) 3));
#line 784 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51));
#line 784 "goal_expr_to_goal.m"
          }
#line 785 "goal_expr_to_goal.m"
          {
#line 785 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_127_127));
#line 785 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "goal_expr_to_goal.m"
          }
#line 783 "goal_expr_to_goal.m"
          {
#line 783 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_125_125));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_126_126));
#line 783 "goal_expr_to_goal.m"
          }
#line 782 "goal_expr_to_goal.m"
          {
#line 782 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_123_123));
#line 782 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
#line 782 "goal_expr_to_goal.m"
          }
#line 786 "goal_expr_to_goal.m"
          {
#line 786 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
#line 786 "goal_expr_to_goal.m"
            return;
          }
#line 758 "goal_expr_to_goal.m"
        }
#line 789 "goal_expr_to_goal.m"
        break;
#line 789 "goal_expr_to_goal.m"
    }
#line 747 "goal_expr_to_goal.m"
  }
#line 738 "goal_expr_to_goal.m"
}

#line 685 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_19,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55,
#line 685 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56,
#line 685 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57)
#line 685 "goal_expr_to_goal.m"
{
#line 694 "goal_expr_to_goal.m"
  {
#line 694 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 694 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;
#line 726 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34;
#line 726 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35;
#line 726 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_59_59;
#line 697 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 697 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 697 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_58_58;
#line 697 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_60_60;
#line 697 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_61_61;
#line 697 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32;
#line 697 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33;

#line 695 "goal_expr_to_goal.m"
    {
#line 695 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
    }
#line 697 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 697 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 697 "goal_expr_to_goal.m"
      {
#line 697 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__LHSTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 0)));
#line 697 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 1)));
#line 697 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 697 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 697 "goal_expr_to_goal.m"
          {
#line 697 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__RHSTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_58_58, (MR_Integer) 0)));
#line 697 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_58_58, (MR_Integer) 1)));
#line 697 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 697 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 697 "goal_expr_to_goal.m"
              {
#line 697 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 0)));
#line 697 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 1)));
#line 697 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 697 "goal_expr_to_goal.m"
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 697 "goal_expr_to_goal.m"
                  {
#line 697 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 0)));
#line 697 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 1)));
#line 697 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "goal_expr_to_goal.m"
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 702 "goal_expr_to_goal.m"
#line 702 "goal_expr_to_goal.m"
                      switch (hlds__make_hlds__goal_expr_to_goal__AccessType_19) {
#line 702 "goal_expr_to_goal.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 702 "goal_expr_to_goal.m"
                        case (MR_Integer) 0:
#line 699 "goal_expr_to_goal.m"
                          {
#line 700 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 701 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35 = hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 699 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 699 "goal_expr_to_goal.m"
                          }
#line 702 "goal_expr_to_goal.m"
                          break;
#line 702 "goal_expr_to_goal.m"
                        case (MR_Integer) 1:
#line 703 "goal_expr_to_goal.m"
                          {
#line 703 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_62_62;
#line 703 "goal_expr_to_goal.m"
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_63_63;
#line 703 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_64_64;
#line 703 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_65_65;
#line 704 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;

#line 704 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm_30)) == (MR_mktag((MR_Integer) 0)));
#line 704 "goal_expr_to_goal.m"
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 704 "goal_expr_to_goal.m"
                              {
#line 704 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 0)));
#line 704 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 1)));
#line 704 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 2)));
#line 704 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 704 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 704 "goal_expr_to_goal.m"
                                  {
#line 704 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_62_62, (MR_Integer) 0)));
#line 704 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_63_63, (MR_String) "^") == 0);
#line 703 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 703 "goal_expr_to_goal.m"
                                      {
#line 704 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 704 "goal_expr_to_goal.m"
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 704 "goal_expr_to_goal.m"
                                          {
#line 704 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_Integer) 0)));
#line 704 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_Integer) 1)));
#line 704 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "goal_expr_to_goal.m"
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 703 "goal_expr_to_goal.m"
                                              {
#line 706 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 706 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 703 "goal_expr_to_goal.m"
                                              }
#line 704 "goal_expr_to_goal.m"
                                          }
#line 703 "goal_expr_to_goal.m"
                                      }
#line 704 "goal_expr_to_goal.m"
                                  }
#line 704 "goal_expr_to_goal.m"
                              }
#line 703 "goal_expr_to_goal.m"
                          }
#line 702 "goal_expr_to_goal.m"
                          break;
#line 702 "goal_expr_to_goal.m"
                      }
#line 697 "goal_expr_to_goal.m"
                  }
#line 697 "goal_expr_to_goal.m"
              }
#line 697 "goal_expr_to_goal.m"
          }
#line 697 "goal_expr_to_goal.m"
      }
#line 726 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 709 "goal_expr_to_goal.m"
      {
#line 709 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_38;
#line 709 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39;

#line 709 "goal_expr_to_goal.m"
        {
#line 709 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__ContextPieces_38 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19);
        }
#line 710 "goal_expr_to_goal.m"
        {
#line 710 "goal_expr_to_goal.m"
          hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__ContextPieces_38, &hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39);
        }
#line 719 "goal_expr_to_goal.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39)) == (MR_mktag((MR_Integer) 0))))
#line 720 "goal_expr_to_goal.m"
          {
#line 720 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
#line 720 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;

#line 721 "goal_expr_to_goal.m"
            {
#line 721 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56);
            }
#line 722 "goal_expr_to_goal.m"
            {
#line 722 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
            }
#line 724 "goal_expr_to_goal.m"
            {
#line 724 "goal_expr_to_goal.m"
              hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
            }
#line 720 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48;
#line 720 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52;
#line 720 "goal_expr_to_goal.m"
          }
#line 719 "goal_expr_to_goal.m"
        else
#line 713 "goal_expr_to_goal.m"
          {
#line 713 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
#line 713 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_41;
#line 713 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76;

#line 714 "goal_expr_to_goal.m"
            {
#line 714 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__ArgTerms_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35));
#line 714 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_59_59));
#line 714 "goal_expr_to_goal.m"
            }
#line 715 "goal_expr_to_goal.m"
            {
#line 715 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19, hlds__make_hlds__goal_expr_to_goal__FieldNames_40, hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
            }
#line 718 "goal_expr_to_goal.m"
            {
#line 718 "goal_expr_to_goal.m"
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47);
#line 718 "goal_expr_to_goal.m"
              return;
            }
#line 713 "goal_expr_to_goal.m"
          }
#line 709 "goal_expr_to_goal.m"
      }
#line 726 "goal_expr_to_goal.m"
    else
#line 728 "goal_expr_to_goal.m"
      {
#line 728 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_44;
#line 728 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_45;
#line 728 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86;
#line 728 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_105_105;

#line 727 "goal_expr_to_goal.m"
        {
#line 727 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86);
        }
#line 729 "goal_expr_to_goal.m"
        {
#line 729 "goal_expr_to_goal.m"
          hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
        }
#line 733 "goal_expr_to_goal.m"
        {
#line 733 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_21));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31])));
#line 733 "goal_expr_to_goal.m"
        }
#line 734 "goal_expr_to_goal.m"
        {
#line 734 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_44));
#line 734 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "goal_expr_to_goal.m"
        }
#line 734 "goal_expr_to_goal.m"
        {
#line 734 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 734 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 734 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_105_105));
#line 734 "goal_expr_to_goal.m"
        }
#line 735 "goal_expr_to_goal.m"
        {
#line 735 "goal_expr_to_goal.m"
          MR_Word base;
#line 735 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57 = base;
#line 735 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_45));
#line 735 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86));
#line 735 "goal_expr_to_goal.m"
        }
#line 728 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52;
#line 728 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48;
#line 728 "goal_expr_to_goal.m"
      }
#line 694 "goal_expr_to_goal.m"
  }
#line 685 "goal_expr_to_goal.m"
}

#line 673 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 673 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 673 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 673 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 673 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 673 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8)
#line 673 "goal_expr_to_goal.m"
{
#line 673 "goal_expr_to_goal.m"
  {
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 673 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3;
#line 673 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5;
#line 673 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7;
#line 673 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9;

#line 673 "goal_expr_to_goal.m"
    {
#line 673 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3), &hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5), &hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7), &hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9);
    }
#line 673 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3));
#line 673 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5));
#line 673 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7));
#line 673 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9));
#line 673 "goal_expr_to_goal.m"
  }
#line 673 "goal_expr_to_goal.m"
}

#line 656 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_24,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_25,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_26,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_30,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_31,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 656 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 656 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58)
#line 656 "goal_expr_to_goal.m"
{
#line 668 "goal_expr_to_goal.m"
  {
#line 668 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_39;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars1_40;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars1_41;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__OldStateVars_43;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NewStateVars_45;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_46;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_63_63;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_85_85;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
#line 668 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66;
#line 675 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68;
#line 675 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69;
#line 675 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70;
#line 679 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78;
#line 679 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79;
#line 679 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80;
#line 681 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52;
#line 681 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48;
#line 681 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58;

#line 669 "goal_expr_to_goal.m"
    {
#line 669 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__Vars0_24, &hlds__make_hlds__goal_expr_to_goal__Vars_39);
    }
#line 670 "goal_expr_to_goal.m"
    {
#line 670 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__StateVars0_25, &hlds__make_hlds__goal_expr_to_goal__StateVars1_40);
    }
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__DotSVars0_26, &hlds__make_hlds__goal_expr_to_goal__DotSVars1_41);
    }
#line 672 "goal_expr_to_goal.m"
    {
#line 672 "goal_expr_to_goal.m"
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27, &hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42);
    }
#line 673 "goal_expr_to_goal.m"
    {
#line 673 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 673 "goal_expr_to_goal.m"
    }
#line 4723 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0];
#line 4725 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2];
#line 4727 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
#line 4729 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3];
#line 673 "goal_expr_to_goal.m"
    {
#line 673 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51)), &hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47)), &hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57)), &hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
    }
#line 673 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64);
#line 673 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65);
#line 673 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
#line 675 "goal_expr_to_goal.m"
    {
#line 675 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__DotSVars1_41, &hlds__make_hlds__goal_expr_to_goal__DotSVars_44, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64)), &hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65)), &hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66)), &hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
    }
#line 675 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68);
#line 675 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69);
#line 675 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
#line 677 "goal_expr_to_goal.m"
    {
#line 677 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__Goal_31, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76);
    }
#line 679 "goal_expr_to_goal.m"
    {
#line 679 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73)), &hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71)), &hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76)), &hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
    }
#line 679 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78);
#line 679 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79);
#line 679 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
#line 681 "goal_expr_to_goal.m"
    {
#line 681 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42, &hlds__make_hlds__goal_expr_to_goal__ColonSVars_46, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78)), &hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79)), &hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80)), &hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
    }
#line 681 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52);
#line 681 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48);
#line 681 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
#line 683 "goal_expr_to_goal.m"
    {
#line 683 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_46);
    }
#line 683 "goal_expr_to_goal.m"
    {
#line 683 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, hlds__make_hlds__goal_expr_to_goal__V_87_87);
    }
#line 683 "goal_expr_to_goal.m"
    {
#line 683 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_85_85 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, hlds__make_hlds__goal_expr_to_goal__V_86_86);
    }
#line 683 "goal_expr_to_goal.m"
    {
#line 683 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__QuantVars_30 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__Vars_39, hlds__make_hlds__goal_expr_to_goal__V_85_85);
    }
#line 668 "goal_expr_to_goal.m"
  }
#line 656 "goal_expr_to_goal.m"
}

#line 642 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(
#line 642 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_5,
#line 642 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_6,
#line 642 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_7,
#line 642 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_8)
#line 642 "goal_expr_to_goal.m"
{
#line 645 "goal_expr_to_goal.m"
  {
#line 645 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IO_9;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_10;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_11;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_12;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_13;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_20_20;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
#line 645 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;

#line 646 "goal_expr_to_goal.m"
    {
#line 646 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IO_9 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 647 "goal_expr_to_goal.m"
    {
#line 647 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_10, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_9));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_10, 1) = ((MR_Box) ((MR_String) "unsafe_get_io_state"));
#line 647 "goal_expr_to_goal.m"
    }
#line 648 "goal_expr_to_goal.m"
    {
#line 648 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_9));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_11, 1) = ((MR_Box) ((MR_String) "unsafe_set_io_state"));
#line 648 "goal_expr_to_goal.m"
    }
#line 649 "goal_expr_to_goal.m"
    {
#line 649 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_6));
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 649 "goal_expr_to_goal.m"
    }
#line 649 "goal_expr_to_goal.m"
    {
#line 649 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "goal_expr_to_goal.m"
    }
#line 649 "goal_expr_to_goal.m"
    {
#line 649 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 649 "goal_expr_to_goal.m"
    }
#line 650 "goal_expr_to_goal.m"
    {
#line 650 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 650 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 650 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 650 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 650 "goal_expr_to_goal.m"
    }
#line 653 "goal_expr_to_goal.m"
    {
#line 653 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_12));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "goal_expr_to_goal.m"
    }
#line 653 "goal_expr_to_goal.m"
    {
#line 653 "goal_expr_to_goal.m"
      MR_Word base;
#line 653 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 653 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_7 = base;
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_10));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 1));
#line 653 "goal_expr_to_goal.m"
    }
#line 654 "goal_expr_to_goal.m"
    {
#line 654 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_13));
#line 654 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 654 "goal_expr_to_goal.m"
    }
#line 654 "goal_expr_to_goal.m"
    {
#line 654 "goal_expr_to_goal.m"
      MR_Word base;
#line 654 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 654 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_8 = base;
#line 654 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 654 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 654 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_11));
#line 654 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 654 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 2));
#line 654 "goal_expr_to_goal.m"
    }
#line 645 "goal_expr_to_goal.m"
  }
#line 642 "goal_expr_to_goal.m"
}

#line 624 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(
#line 624 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_8,
#line 624 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_9,
#line 624 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_10,
#line 624 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11,
#line 624 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_12,
#line 624 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_13,
#line 624 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_14)
#line 624 "goal_expr_to_goal.m"
{
#line 629 "goal_expr_to_goal.m"
  {
#line 629 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 629 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__MutableName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_10, (MR_Integer) 0)));
#line 629 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__StateVarName_16;
#line 629 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_17;
#line 629 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_18;
#line 629 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_19;
#line 629 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_20;
#line 629 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 629 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 629 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 629 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 629 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 629 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_39_39;

#line 630 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__StateVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_10, (MR_Integer) 1)));
#line 631 "goal_expr_to_goal.m"
    {
#line 631 "goal_expr_to_goal.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__VarSet_9, *hlds__make_hlds__goal_expr_to_goal__StateVar_12, &hlds__make_hlds__goal_expr_to_goal__StateVarName_16);
    }
#line 632 "goal_expr_to_goal.m"
    {
#line 632 "goal_expr_to_goal.m"
      MR_Word base;
#line 632 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11 = base;
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableName_15));
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarName_16));
#line 632 "goal_expr_to_goal.m"
    }
#line 633 "goal_expr_to_goal.m"
    {
#line 633 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "get_", hlds__make_hlds__goal_expr_to_goal__MutableName_15);
    }
#line 633 "goal_expr_to_goal.m"
    {
#line 633 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 633 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetPredName_17, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 633 "goal_expr_to_goal.m"
    }
#line 634 "goal_expr_to_goal.m"
    {
#line 634 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "set_", hlds__make_hlds__goal_expr_to_goal__MutableName_15);
    }
#line 634 "goal_expr_to_goal.m"
    {
#line 634 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 634 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetPredName_18, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 634 "goal_expr_to_goal.m"
    }
#line 635 "goal_expr_to_goal.m"
    {
#line 635 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (*hlds__make_hlds__goal_expr_to_goal__StateVar_12));
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 635 "goal_expr_to_goal.m"
    }
#line 635 "goal_expr_to_goal.m"
    {
#line 635 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 635 "goal_expr_to_goal.m"
    }
#line 635 "goal_expr_to_goal.m"
    {
#line 635 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 635 "goal_expr_to_goal.m"
    }
#line 636 "goal_expr_to_goal.m"
    {
#line 636 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 636 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 636 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 636 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 636 "goal_expr_to_goal.m"
    }
#line 639 "goal_expr_to_goal.m"
    {
#line 639 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_19));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "goal_expr_to_goal.m"
    }
#line 639 "goal_expr_to_goal.m"
    {
#line 639 "goal_expr_to_goal.m"
      MR_Word base;
#line 639 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 639 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_13 = base;
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_17));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 1));
#line 639 "goal_expr_to_goal.m"
    }
#line 640 "goal_expr_to_goal.m"
    {
#line 640 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_20));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "goal_expr_to_goal.m"
    }
#line 640 "goal_expr_to_goal.m"
    {
#line 640 "goal_expr_to_goal.m"
      MR_Word base;
#line 640 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 640 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_14 = base;
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_18));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_39_39));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 2));
#line 640 "goal_expr_to_goal.m"
    }
#line 629 "goal_expr_to_goal.m"
  }
#line 624 "goal_expr_to_goal.m"
}

#line 316 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
#line 316 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 316 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 316 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 316 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 316 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 316 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5)
#line 316 "goal_expr_to_goal.m"
{
#line 316 "goal_expr_to_goal.m"
  {
#line 316 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 316 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11;
#line 316 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12;
#line 316 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13;
#line 316 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14;

#line 316 "goal_expr_to_goal.m"
    {
#line 316 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11, &hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12, &hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13, &hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14);
    }
#line 316 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11));
#line 316 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12));
#line 316 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13));
#line 316 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14));
#line 316 "goal_expr_to_goal.m"
  }
#line 316 "goal_expr_to_goal.m"
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
#line 104 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 104 "goal_expr_to_goal.m"
    {
#line 104 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 104 "goal_expr_to_goal.m"
      {
#line 104 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 104 "goal_expr_to_goal.m"
#line 104 "goal_expr_to_goal.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) {
#line 104 "goal_expr_to_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 104 "goal_expr_to_goal.m"
          case (MR_Integer) 0:
#line 419 "goal_expr_to_goal.m"
            {
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_139;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_140;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_141;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_382_382;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_383_383;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_384_384;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_385_385;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_386_386;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_387_387;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_388_388;
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_714 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 419 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_715;

#line 421 "goal_expr_to_goal.m"
              {
#line 421 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_382_382 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813);
              }
#line 420 "goal_expr_to_goal.m"
              {
#line 420 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_137, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_382_382, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_383_383, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_388_388);
              }
#line 423 "goal_expr_to_goal.m"
              {
#line 423 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_138, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_139, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_383_383, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_388_388, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
              }
#line 426 "goal_expr_to_goal.m"
              {
#line 426 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_141 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_140);
              }
#line 427 "goal_expr_to_goal.m"
              {
#line 427 "goal_expr_to_goal.m"
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_714, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_715);
              }
#line 428 "goal_expr_to_goal.m"
              {
#line 428 "goal_expr_to_goal.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_141, hlds__make_hlds__goal_expr_to_goal__GoalInfo_715, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 428 "goal_expr_to_goal.m"
                return;
              }
#line 419 "goal_expr_to_goal.m"
            }
#line 104 "goal_expr_to_goal.m"
            break;
#line 104 "goal_expr_to_goal.m"
          case (MR_Integer) 1:
#line 430 "goal_expr_to_goal.m"
            {
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_814_814 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_369_369;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_370_370;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_371_371;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_372_372;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_373_373;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_374_374;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_375_375;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_716 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_717;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_718 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_719 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_720;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_721;
#line 430 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_722;

#line 432 "goal_expr_to_goal.m"
              {
#line 432 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_369_369 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_814_814);
              }
#line 431 "goal_expr_to_goal.m"
              {
#line 431 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_718, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_369_369, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_720, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_370_370, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_375_375);
              }
#line 434 "goal_expr_to_goal.m"
              {
#line 434 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_719, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_720, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_721, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_370_370, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_375_375, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
              }
#line 437 "goal_expr_to_goal.m"
              {
#line 437 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_722 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_814_814, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_721);
              }
#line 438 "goal_expr_to_goal.m"
              {
#line 438 "goal_expr_to_goal.m"
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_716, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_717);
              }
#line 439 "goal_expr_to_goal.m"
              {
#line 439 "goal_expr_to_goal.m"
                hlds__hlds_goal__par_conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_722, hlds__make_hlds__goal_expr_to_goal__GoalInfo_717, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 439 "goal_expr_to_goal.m"
                return;
              }
#line 430 "goal_expr_to_goal.m"
            }
#line 104 "goal_expr_to_goal.m"
            break;
#line 104 "goal_expr_to_goal.m"
          case (MR_Integer) 2:
#line 104 "goal_expr_to_goal.m"
            {
#line 104 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_823 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 104 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_825;

#line 105 "goal_expr_to_goal.m"
              {
#line 105 "goal_expr_to_goal.m"
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_823, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_825);
              }
#line 106 "goal_expr_to_goal.m"
              {
#line 106 "goal_expr_to_goal.m"
                MR_Word base;
#line 106 "goal_expr_to_goal.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 106 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 106 "goal_expr_to_goal.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0])));
#line 106 "goal_expr_to_goal.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_825));
#line 106 "goal_expr_to_goal.m"
              }
#line 104 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 104 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 104 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206;
#line 104 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 104 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 104 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212;
#line 104 "goal_expr_to_goal.m"
            }
#line 104 "goal_expr_to_goal.m"
            break;
#line 104 "goal_expr_to_goal.m"
          case (MR_Integer) 3:
#line 104 "goal_expr_to_goal.m"
#line 104 "goal_expr_to_goal.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) {
#line 104 "goal_expr_to_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 0:
#line 441 "goal_expr_to_goal.m"
                {
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_145;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_356_356;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_357_357;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_358_358;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_359_359;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_360_360;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_361_361;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_362_362;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_723 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_724;
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_725 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 441 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_726 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 443 "goal_expr_to_goal.m"
                  {
#line 443 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_726, hlds__make_hlds__goal_expr_to_goal__Renaming_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_356_356, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_357_357, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_358_358, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_360_360);
                  }
#line 446 "goal_expr_to_goal.m"
                  {
#line 446 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_725, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143, &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_356_356, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_357_357, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_358_358, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 450 "goal_expr_to_goal.m"
                  {
#line 450 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_723, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                  }
#line 453 "goal_expr_to_goal.m"
                  {
#line 453 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_723, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_724);
                  }
#line 454 "goal_expr_to_goal.m"
                  {
#line 454 "goal_expr_to_goal.m"
                    hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_145, hlds__make_hlds__goal_expr_to_goal__GoalInfo_724, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 454 "goal_expr_to_goal.m"
                    return;
                  }
#line 441 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 1:
#line 104 "goal_expr_to_goal.m"
                {
#line 104 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 104 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;

#line 105 "goal_expr_to_goal.m"
                  {
#line 105 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_27, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
                  }
#line 106 "goal_expr_to_goal.m"
                  {
#line 106 "goal_expr_to_goal.m"
                    MR_Word base;
#line 106 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 106 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 106 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29])));
#line 106 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_29));
#line 106 "goal_expr_to_goal.m"
                  }
#line 104 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 104 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 104 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206;
#line 104 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 104 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 104 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212;
#line 104 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 2:
#line 126 "goal_expr_to_goal.m"
                {
#line 126 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 126 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35;
#line 126 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_36;
#line 126 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_612 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 126 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_613;
#line 126 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_614;
#line 126 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_615;
#line 126 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_616 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 127 "goal_expr_to_goal.m"
                  {
#line 127 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_34, &hlds__make_hlds__goal_expr_to_goal__Vars_615);
                  }
#line 128 "goal_expr_to_goal.m"
                  {
#line 128 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_616, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 131 "goal_expr_to_goal.m"
                  {
#line 131 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Reason_36, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_615));
#line 131 "goal_expr_to_goal.m"
                  }
#line 132 "goal_expr_to_goal.m"
                  {
#line 132 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_613 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 132 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 132 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_36));
#line 132 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35));
#line 132 "goal_expr_to_goal.m"
                  }
#line 133 "goal_expr_to_goal.m"
                  {
#line 133 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_612, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_614);
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_613));
#line 134 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_614));
#line 134 "goal_expr_to_goal.m"
                  }
#line 126 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 3:
#line 121 "goal_expr_to_goal.m"
                {
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_596_596;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_597_597;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_607 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));

#line 114 "goal_expr_to_goal.m"
                  {
#line 114 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_597_597 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 114 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_597_597, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 114 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_597_597, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_607));
#line 114 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_597_597, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_31));
#line 114 "goal_expr_to_goal.m"
                  }
#line 113 "goal_expr_to_goal.m"
                  {
#line 113 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_596_596 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 113 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_596_596, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 113 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_596_596, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_607));
#line 113 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_596_596, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_30));
#line 113 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_596_596, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_597_597));
#line 113 "goal_expr_to_goal.m"
                  }
#line 112 "goal_expr_to_goal.m"
                  {
#line 112 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 112 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 112 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_607));
#line 112 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_596_596));
#line 112 "goal_expr_to_goal.m"
                  }
#line 122 "goal_expr_to_goal.m"
                  /* direct tailcall eliminated */
#line 122 "goal_expr_to_goal.m"
                  {
#line 122 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32;

#line 122 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 122 "goal_expr_to_goal.m"
                  }
#line 122 "goal_expr_to_goal.m"
                  continue;
#line 121 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 4:
#line 136 "goal_expr_to_goal.m"
                {
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40;
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41;
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_579_579;
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_617 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_618;
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_619;
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_620;
#line 136 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_621;

#line 138 "goal_expr_to_goal.m"
                  {
#line 138 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_37, &hlds__make_hlds__goal_expr_to_goal__StateVars_620);
                  }
#line 139 "goal_expr_to_goal.m"
                  {
#line 139 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_617, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__StateVars_620, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_579_579);
                  }
#line 141 "goal_expr_to_goal.m"
                  {
#line 141 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_38, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_621, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_579_579, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 144 "goal_expr_to_goal.m"
                  {
#line 144 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_620, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
                  }
#line 148 "goal_expr_to_goal.m"
                  {
#line 148 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_618 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 148 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_618, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 148 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_618, 1) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
#line 148 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_618, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_621));
#line 148 "goal_expr_to_goal.m"
                  }
#line 149 "goal_expr_to_goal.m"
                  {
#line 149 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_617, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_619);
                  }
#line 150 "goal_expr_to_goal.m"
                  {
#line 150 "goal_expr_to_goal.m"
                    MR_Word base;
#line 150 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 150 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 150 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_618));
#line 150 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_619));
#line 150 "goal_expr_to_goal.m"
                  }
#line 136 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 5:
#line 121 "goal_expr_to_goal.m"
                {
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_594_594;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_595_595;
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_608 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_609 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 121 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_822;

#line 120 "goal_expr_to_goal.m"
                  {
#line 120 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_595_595 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 120 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 120 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_608));
#line 120 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_609));
#line 120 "goal_expr_to_goal.m"
                  }
#line 119 "goal_expr_to_goal.m"
                  {
#line 119 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_594_594 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 119 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 119 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_608));
#line 119 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVars_33));
#line 119 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_595_595));
#line 119 "goal_expr_to_goal.m"
                  }
#line 118 "goal_expr_to_goal.m"
                  {
#line 118 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_822 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 118 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_822, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 118 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_822, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_608));
#line 118 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_822, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_594_594));
#line 118 "goal_expr_to_goal.m"
                  }
#line 122 "goal_expr_to_goal.m"
                  /* direct tailcall eliminated */
#line 122 "goal_expr_to_goal.m"
                  {
#line 122 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_822;

#line 122 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 122 "goal_expr_to_goal.m"
                  }
#line 122 "goal_expr_to_goal.m"
                  continue;
#line 121 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 6:
#line 152 "goal_expr_to_goal.m"
                {
#line 152 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 152 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_623 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 152 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_624;
#line 152 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_625;
#line 152 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_626 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 152 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_627;
#line 152 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_628;

#line 153 "goal_expr_to_goal.m"
                  {
#line 153 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_626, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_627, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 156 "goal_expr_to_goal.m"
                  {
#line 156 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_628 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 156 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_628, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_43));
#line 156 "goal_expr_to_goal.m"
                  }
#line 157 "goal_expr_to_goal.m"
                  {
#line 157 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_624 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 157 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_624, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 157 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_624, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_628));
#line 157 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_624, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_627));
#line 157 "goal_expr_to_goal.m"
                  }
#line 158 "goal_expr_to_goal.m"
                  {
#line 158 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_623, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_625);
                  }
#line 159 "goal_expr_to_goal.m"
                  {
#line 159 "goal_expr_to_goal.m"
                    MR_Word base;
#line 159 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 159 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 159 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_624));
#line 159 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_625));
#line 159 "goal_expr_to_goal.m"
                  }
#line 152 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 7:
#line 162 "goal_expr_to_goal.m"
                {
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_46;
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_629 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_630;
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_631;
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_632 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_633 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_634 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_635;
#line 162 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_636;

#line 163 "goal_expr_to_goal.m"
                  {
#line 163 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_632, hlds__make_hlds__goal_expr_to_goal__StateVars_634, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_45, hlds__make_hlds__goal_expr_to_goal__Context_629, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_46, hlds__make_hlds__goal_expr_to_goal__SubGoal_633, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_635, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 167 "goal_expr_to_goal.m"
                  {
#line 167 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_636, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_46));
#line 167 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_636, 1) = ((MR_Box) ((MR_Integer) 0));
#line 167 "goal_expr_to_goal.m"
                  }
#line 168 "goal_expr_to_goal.m"
                  {
#line 168 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_630 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 168 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_630, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 168 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_630, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_636));
#line 168 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_630, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_635));
#line 168 "goal_expr_to_goal.m"
                  }
#line 169 "goal_expr_to_goal.m"
                  {
#line 169 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_629, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_631);
                  }
#line 170 "goal_expr_to_goal.m"
                  {
#line 170 "goal_expr_to_goal.m"
                    MR_Word base;
#line 170 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 170 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_630));
#line 170 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_631));
#line 170 "goal_expr_to_goal.m"
                  }
#line 162 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 8:
#line 173 "goal_expr_to_goal.m"
                {
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_637 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_638;
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_639;
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_640 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_641 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_642 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_643;
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_644;
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_645 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_646 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 173 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_647;

#line 174 "goal_expr_to_goal.m"
                  {
#line 174 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_640, hlds__make_hlds__goal_expr_to_goal__StateVars_642, hlds__make_hlds__goal_expr_to_goal__DotSVars_645, hlds__make_hlds__goal_expr_to_goal__ColonSVars_646, hlds__make_hlds__goal_expr_to_goal__Context_637, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_647, hlds__make_hlds__goal_expr_to_goal__SubGoal_641, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_643, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 178 "goal_expr_to_goal.m"
                  {
#line 178 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_644, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_647));
#line 178 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_644, 1) = ((MR_Box) ((MR_Integer) 1));
#line 178 "goal_expr_to_goal.m"
                  }
#line 179 "goal_expr_to_goal.m"
                  {
#line 179 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_638 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 179 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_638, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 179 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_638, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_644));
#line 179 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_638, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_643));
#line 179 "goal_expr_to_goal.m"
                  }
#line 180 "goal_expr_to_goal.m"
                  {
#line 180 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_637, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_639);
                  }
#line 181 "goal_expr_to_goal.m"
                  {
#line 181 "goal_expr_to_goal.m"
                    MR_Word base;
#line 181 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 181 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_638));
#line 181 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_639));
#line 181 "goal_expr_to_goal.m"
                  }
#line 173 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 9:
#line 184 "goal_expr_to_goal.m"
                {
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_648 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_649;
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_650;
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_651 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_652 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_653 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_654;
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_655;
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_656 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_657 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 184 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_658;

#line 185 "goal_expr_to_goal.m"
                  {
#line 185 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_651, hlds__make_hlds__goal_expr_to_goal__StateVars_653, hlds__make_hlds__goal_expr_to_goal__DotSVars_656, hlds__make_hlds__goal_expr_to_goal__ColonSVars_657, hlds__make_hlds__goal_expr_to_goal__Context_648, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_658, hlds__make_hlds__goal_expr_to_goal__SubGoal_652, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_654, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 190 "goal_expr_to_goal.m"
                  {
#line 190 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_655 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_655, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_658));
#line 190 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_655, 1) = ((MR_Box) ((MR_Integer) 2));
#line 190 "goal_expr_to_goal.m"
                  }
#line 191 "goal_expr_to_goal.m"
                  {
#line 191 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_649 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 191 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 191 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_655));
#line 191 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_654));
#line 191 "goal_expr_to_goal.m"
                  }
#line 192 "goal_expr_to_goal.m"
                  {
#line 192 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_648, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_650);
                  }
#line 193 "goal_expr_to_goal.m"
                  {
#line 193 "goal_expr_to_goal.m"
                    MR_Word base;
#line 193 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_649));
#line 193 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_650));
#line 193 "goal_expr_to_goal.m"
                  }
#line 184 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 10:
#line 195 "goal_expr_to_goal.m"
                {
#line 195 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 195 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_550_550;
#line 195 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_659 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 195 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_660;
#line 195 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_661;
#line 195 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_662 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 195 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_663;

#line 196 "goal_expr_to_goal.m"
                  {
#line 196 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_662, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_663, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 199 "goal_expr_to_goal.m"
                  {
#line 199 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_550_550 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_550_550, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 199 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_550_550, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_47));
#line 199 "goal_expr_to_goal.m"
                  }
#line 199 "goal_expr_to_goal.m"
                  {
#line 199 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_660 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 199 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_660, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 199 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_660, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_550_550));
#line 199 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_660, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_663));
#line 199 "goal_expr_to_goal.m"
                  }
#line 200 "goal_expr_to_goal.m"
                  {
#line 200 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_659, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_661);
                  }
#line 201 "goal_expr_to_goal.m"
                  {
#line 201 "goal_expr_to_goal.m"
                    MR_Word base;
#line 201 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 201 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_660));
#line 201 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_661));
#line 201 "goal_expr_to_goal.m"
                  }
#line 195 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 11:
#line 203 "goal_expr_to_goal.m"
                {
#line 203 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 203 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_49;
#line 203 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_543_543;
#line 203 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_664 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 203 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_665;
#line 203 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_666;
#line 203 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_667 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 203 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_668;

#line 204 "goal_expr_to_goal.m"
                  {
#line 204 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var0_48, &hlds__make_hlds__goal_expr_to_goal__Var_49);
                  }
#line 205 "goal_expr_to_goal.m"
                  {
#line 205 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_667, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_668, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 208 "goal_expr_to_goal.m"
                  {
#line 208 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_543_543 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_543_543, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 208 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_543_543, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_49));
#line 208 "goal_expr_to_goal.m"
                  }
#line 208 "goal_expr_to_goal.m"
                  {
#line 208 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_665 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 208 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_665, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 208 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_665, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_543_543));
#line 208 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_665, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_668));
#line 208 "goal_expr_to_goal.m"
                  }
#line 209 "goal_expr_to_goal.m"
                  {
#line 209 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_664, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_666);
                  }
#line 210 "goal_expr_to_goal.m"
                  {
#line 210 "goal_expr_to_goal.m"
                    MR_Word base;
#line 210 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 210 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_665));
#line 210 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_666));
#line 210 "goal_expr_to_goal.m"
                  }
#line 203 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 12:
#line 213 "goal_expr_to_goal.m"
                {
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_535_535;
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_669 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_670;
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_671;
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_672 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_673;
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_674 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_675 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 213 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_676;

#line 214 "goal_expr_to_goal.m"
                  {
#line 214 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var0_675, &hlds__make_hlds__goal_expr_to_goal__Var_676);
                  }
#line 215 "goal_expr_to_goal.m"
                  {
#line 215 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_672, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_673, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 218 "goal_expr_to_goal.m"
                  {
#line 218 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_535_535 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 218 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_535_535, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 218 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_535_535, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_676));
#line 218 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_535_535, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_674));
#line 218 "goal_expr_to_goal.m"
                  }
#line 218 "goal_expr_to_goal.m"
                  {
#line 218 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_670 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 218 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_670, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 218 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_670, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_535_535));
#line 218 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_670, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_673));
#line 218 "goal_expr_to_goal.m"
                  }
#line 219 "goal_expr_to_goal.m"
                  {
#line 219 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_669, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_671);
                  }
#line 220 "goal_expr_to_goal.m"
                  {
#line 220 "goal_expr_to_goal.m"
                    MR_Word base;
#line 220 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 220 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_670));
#line 220 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_671));
#line 220 "goal_expr_to_goal.m"
                  }
#line 213 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 13:
#line 315 "goal_expr_to_goal.m"
                {
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutables_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GetGoals_107;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SetGoals_108;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal1_109;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_467_467;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_468_468;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_469_469;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_470_470;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_684 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_685;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_686;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_687;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_688;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_689;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_690;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_691 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_692;
#line 315 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_693;

#line 316 "goal_expr_to_goal.m"
                  {
#line 316 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_467_467 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 316 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
#line 316 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
#line 316 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 316 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_684));
#line 316 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206));
#line 316 "goal_expr_to_goal.m"
                  }
#line 6479 "hlds.make_hlds.goal_expr_to_goal.c"
                  hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 316 "goal_expr_to_goal.m"
                  {
#line 316 "goal_expr_to_goal.m"
                    mercury__list__map4_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808, hlds__make_hlds__goal_expr_to_goal__V_467_467, hlds__make_hlds__goal_expr_to_goal__Mutables_97, &hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98, &hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99, &hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100, &hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101);
                  }
#line 326 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "goal_expr_to_goal.m"
                    {
#line 328 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 329 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__StateVars0_690 = hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99;
#line 330 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__GetGoals_107 = hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100;
#line 331 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__SetGoals_108 = hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101;
#line 327 "goal_expr_to_goal.m"
                    }
#line 326 "goal_expr_to_goal.m"
                  else
#line 319 "goal_expr_to_goal.m"
                    {
#line 319 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO_96, (MR_Integer) 0)));
#line 319 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__IOStateVarName_103;
#line 319 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105;
#line 319 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106;

#line 320 "goal_expr_to_goal.m"
                      {
#line 320 "goal_expr_to_goal.m"
                        mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__IOStateVar_102, &hlds__make_hlds__goal_expr_to_goal__IOStateVarName_103);
                      }
#line 321 "goal_expr_to_goal.m"
                      {
#line 321 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarName_103));
#line 321 "goal_expr_to_goal.m"
                      }
#line 322 "goal_expr_to_goal.m"
                      {
#line 322 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__Context_684, hlds__make_hlds__goal_expr_to_goal__IOStateVar_102, &hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105, &hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106);
                      }
#line 323 "goal_expr_to_goal.m"
                      {
#line 323 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__StateVars0_690 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars0_690, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVar_102));
#line 323 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars0_690, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99));
#line 323 "goal_expr_to_goal.m"
                      }
#line 324 "goal_expr_to_goal.m"
                      {
#line 324 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__GetGoals_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_107, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105));
#line 324 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_107, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100));
#line 324 "goal_expr_to_goal.m"
                      }
#line 325 "goal_expr_to_goal.m"
                      {
#line 325 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__SetGoals_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_108, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106));
#line 325 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101));
#line 325 "goal_expr_to_goal.m"
                      }
#line 319 "goal_expr_to_goal.m"
                    }
#line 334 "goal_expr_to_goal.m"
                  {
#line 334 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_470_470 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_470_470, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal0_691));
#line 334 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_470_470, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "goal_expr_to_goal.m"
                  }
#line 334 "goal_expr_to_goal.m"
                  {
#line 334 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_469_469 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808, hlds__make_hlds__goal_expr_to_goal__V_470_470, hlds__make_hlds__goal_expr_to_goal__SetGoals_108);
                  }
#line 334 "goal_expr_to_goal.m"
                  {
#line 334 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_468_468 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808, hlds__make_hlds__goal_expr_to_goal__GetGoals_107, hlds__make_hlds__goal_expr_to_goal__V_469_469);
                  }
#line 334 "goal_expr_to_goal.m"
                  {
#line 334 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__SubGoal1_109 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__goal_expr_to_goal__Context_684, hlds__make_hlds__goal_expr_to_goal__V_468_468);
                  }
#line 336 "goal_expr_to_goal.m"
                  {
#line 336 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_690, &hlds__make_hlds__goal_expr_to_goal__StateVars_687);
                  }
#line 337 "goal_expr_to_goal.m"
                  {
#line 337 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_684, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__StateVars_687, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_692, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473);
                  }
#line 339 "goal_expr_to_goal.m"
                  {
#line 339 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal1_109, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_688, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_692, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_693, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 342 "goal_expr_to_goal.m"
                  {
#line 342 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_687, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_693, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
                  }
#line 346 "goal_expr_to_goal.m"
                  {
#line 346 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Reason_689 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 346 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_689, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 346 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_689, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94));
#line 346 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_689, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95));
#line 346 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_689, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104));
#line 346 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_689, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98));
#line 346 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_689, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "goal_expr_to_goal.m"
                  }
#line 348 "goal_expr_to_goal.m"
                  {
#line 348 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_685 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_685, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 348 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_685, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_689));
#line 348 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_685, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_688));
#line 348 "goal_expr_to_goal.m"
                  }
#line 349 "goal_expr_to_goal.m"
                  {
#line 349 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_684, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_686);
                  }
#line 350 "goal_expr_to_goal.m"
                  {
#line 350 "goal_expr_to_goal.m"
                    MR_Word base;
#line 350 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 350 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 350 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_685));
#line 350 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_686));
#line 350 "goal_expr_to_goal.m"
                  }
#line 315 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 14:
#line 223 "goal_expr_to_goal.m"
                {
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Outer0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Inner0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MainGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55;
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Outer_64;
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79;
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80;
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81;
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Inner_86;
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_90;
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_681 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_682;
#line 223 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_683;

#line 227 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 227 "goal_expr_to_goal.m"
                  else
#line 228 "goal_expr_to_goal.m"
                    {
#line 228 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52, (MR_Integer) 0)));
#line 228 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars_57;

#line 229 "goal_expr_to_goal.m"
                      {
#line 229 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OutputVars0_56, &hlds__make_hlds__goal_expr_to_goal__OutputVars_57);
                      }
#line 231 "goal_expr_to_goal.m"
                      {
#line 231 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputVars_57));
#line 231 "goal_expr_to_goal.m"
                      }
#line 228 "goal_expr_to_goal.m"
                    }
#line 6724 "hlds.make_hlds.goal_expr_to_goal.c"
                  if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Outer0_50)) == (MR_mktag((MR_Integer) 0))))
#line 6726 "hlds.make_hlds.goal_expr_to_goal.c"
                    {
#line 6728 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
#line 6730 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59;
#line 6732 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_60;
#line 6734 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_61;
#line 6736 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89;
#line 6738 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485;
#line 6740 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486;
#line 6742 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487;
#line 6744 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513;

#line 235 "goal_expr_to_goal.m"
                      {
#line 235 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58, &hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59);
                      }
#line 237 "goal_expr_to_goal.m"
                      {
#line 237 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59, &hlds__make_hlds__goal_expr_to_goal__OuterDI_60, &hlds__make_hlds__goal_expr_to_goal__OuterUO_61, &hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487);
                      }
#line 240 "goal_expr_to_goal.m"
                      {
#line 240 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_60));
#line 240 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_61));
#line 240 "goal_expr_to_goal.m"
                      }
#line 6767 "hlds.make_hlds.goal_expr_to_goal.c"
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
#line 6769 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 6771 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 6773 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68;
#line 6775 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73;
#line 6777 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74;
#line 6779 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75;
#line 6781 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_76;
#line 6783 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77;
#line 6785 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78;
#line 6787 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83;
#line 6789 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_84;
#line 6791 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_85;
#line 6793 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490;
#line 6795 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491;
#line 6797 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492;
#line 6799 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493;
#line 6801 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494;
#line 6803 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495;
#line 6805 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496;
#line 6807 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497;
#line 6809 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498;
#line 6811 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501;
#line 6813 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502;
#line 6815 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503;

#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68);
                          }
#line 252 "goal_expr_to_goal.m"
                          {
#line 252 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491);
                          }
#line 260 "goal_expr_to_goal.m"
                          {
#line 260 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496);
                          }
#line 263 "goal_expr_to_goal.m"
                          {
#line 263 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_76, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74));
#line 263 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_76, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75));
#line 263 "goal_expr_to_goal.m"
                          }
#line 265 "goal_expr_to_goal.m"
                          {
#line 265 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501);
                          }
#line 268 "goal_expr_to_goal.m"
                          {
#line 268 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_76));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77));
#line 268 "goal_expr_to_goal.m"
                          }
#line 269 "goal_expr_to_goal.m"
                          {
#line 269 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                          }
#line 281 "goal_expr_to_goal.m"
                          {
#line 281 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, &hlds__make_hlds__goal_expr_to_goal__InnerDI_84, &hlds__make_hlds__goal_expr_to_goal__InnerUO_85, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                          }
#line 283 "goal_expr_to_goal.m"
                          {
#line 283 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_84));
#line 283 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_85));
#line 283 "goal_expr_to_goal.m"
                          }
#line 6878 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 6880 "hlds.make_hlds.goal_expr_to_goal.c"
                      else
#line 6882 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 6884 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_799;
#line 6886 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_87;
#line 6888 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_88;
#line 6890 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_679;
#line 6892 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_680;
#line 6894 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_915;
#line 6896 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_916;
#line 6898 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_917;
#line 6900 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_918;
#line 6902 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_919;
#line 6904 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_922;
#line 6906 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_923;
#line 6908 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_924;
#line 6910 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_925;
#line 6912 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_926;
#line 6914 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_927;
#line 6916 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_928;

#line 260 "goal_expr_to_goal.m"
                          {
#line 260 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_915, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_916, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_922, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_923, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_924, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_925, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_926);
                          }
#line 263 "goal_expr_to_goal.m"
                          {
#line 263 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_917 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_917, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_915));
#line 263 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_917, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_916));
#line 263 "goal_expr_to_goal.m"
                          }
#line 265 "goal_expr_to_goal.m"
                          {
#line 265 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_918, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_922, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_927, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_923, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_928, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_924, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_925, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_926, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                          }
#line 268 "goal_expr_to_goal.m"
                          {
#line 268 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_919 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_919, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_917));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_919, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_918));
#line 268 "goal_expr_to_goal.m"
                          }
#line 269 "goal_expr_to_goal.m"
                          {
#line 269 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_919, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_928, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_927, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                          }
#line 289 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerDI0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 289 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerUO0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
#line 6958 "hlds.make_hlds.goal_expr_to_goal.c"
                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_799 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 290 "goal_expr_to_goal.m"
                          {
#line 290 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_799, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_87, &hlds__make_hlds__goal_expr_to_goal__InnerDI_679);
                          }
#line 291 "goal_expr_to_goal.m"
                          {
#line 291 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_799, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_88, &hlds__make_hlds__goal_expr_to_goal__InnerUO_680);
                          }
#line 292 "goal_expr_to_goal.m"
                          {
#line 292 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_679));
#line 292 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_680));
#line 292 "goal_expr_to_goal.m"
                          }
#line 6980 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 296 "goal_expr_to_goal.m"
                      {
#line 296 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
                      }
#line 6987 "hlds.make_hlds.goal_expr_to_goal.c"
                    }
#line 6989 "hlds.make_hlds.goal_expr_to_goal.c"
                  else
#line 6991 "hlds.make_hlds.goal_expr_to_goal.c"
                    {
#line 6993 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 6995 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
#line 6997 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 1)));
#line 6999 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_677;
#line 7001 "hlds.make_hlds.goal_expr_to_goal.c"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_678;

#line 243 "goal_expr_to_goal.m"
                      {
#line 243 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterDI0_65, &hlds__make_hlds__goal_expr_to_goal__OuterDI_677);
                      }
#line 244 "goal_expr_to_goal.m"
                      {
#line 244 "goal_expr_to_goal.m"
                        parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_797_797, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterUO0_66, &hlds__make_hlds__goal_expr_to_goal__OuterUO_678);
                      }
#line 245 "goal_expr_to_goal.m"
                      {
#line 245 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_677));
#line 245 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_678));
#line 245 "goal_expr_to_goal.m"
                      }
#line 7024 "hlds.make_hlds.goal_expr_to_goal.c"
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
#line 7026 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 7028 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_828 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 7030 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_829;
#line 7032 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_841;
#line 7034 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_842;
#line 7036 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_843;
#line 7038 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_875;
#line 7040 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_876;
#line 7042 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_877;
#line 7044 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_878;
#line 7046 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_879;
#line 7048 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880;
#line 7050 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_890;
#line 7052 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_891;
#line 7054 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_892;
#line 7056 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_893;
#line 7058 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_894;
#line 7060 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_895;
#line 7062 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_896;
#line 7064 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_897;
#line 7066 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_898;
#line 7068 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_899;
#line 7070 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_900;
#line 7072 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_901;

#line 250 "goal_expr_to_goal.m"
                          {
#line 250 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_828, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_829);
                          }
#line 252 "goal_expr_to_goal.m"
                          {
#line 252 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_829, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_841, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_875, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_890, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_891);
                          }
#line 260 "goal_expr_to_goal.m"
                          {
#line 260 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_876, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_875, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_877, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_892, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_890, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_893, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_894, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_895, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_891, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_896);
                          }
#line 263 "goal_expr_to_goal.m"
                          {
#line 263 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_878 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_878, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_876));
#line 263 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_878, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_877));
#line 263 "goal_expr_to_goal.m"
                          }
#line 265 "goal_expr_to_goal.m"
                          {
#line 265 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_879, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_875, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_892, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_897, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_893, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_898, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_894, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_895, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_896, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_899);
                          }
#line 268 "goal_expr_to_goal.m"
                          {
#line 268 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_878));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_879));
#line 268 "goal_expr_to_goal.m"
                          }
#line 269 "goal_expr_to_goal.m"
                          {
#line 269 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_898, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_900, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_875, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_901, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_897, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                          }
#line 281 "goal_expr_to_goal.m"
                          {
#line 281 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_841, &hlds__make_hlds__goal_expr_to_goal__InnerDI_842, &hlds__make_hlds__goal_expr_to_goal__InnerUO_843, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_901, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_899, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                          }
#line 283 "goal_expr_to_goal.m"
                          {
#line 283 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_842));
#line 283 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_843));
#line 283 "goal_expr_to_goal.m"
                          }
#line 7135 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 7137 "hlds.make_hlds.goal_expr_to_goal.c"
                      else
#line 7139 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 7141 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_856;
#line 7143 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_850;
#line 7145 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_851;
#line 7147 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_854;
#line 7149 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_855;
#line 7151 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_935;
#line 7153 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_936;
#line 7155 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_937;
#line 7157 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_938;
#line 7159 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_939;
#line 7161 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_942;
#line 7163 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_943;
#line 7165 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_944;
#line 7167 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_945;
#line 7169 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_946;
#line 7171 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_947;
#line 7173 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_948;

#line 260 "goal_expr_to_goal.m"
                          {
#line 260 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_935, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_936, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_942, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_943, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_944, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_945, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_946);
                          }
#line 263 "goal_expr_to_goal.m"
                          {
#line 263 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_937 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_937, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_935));
#line 263 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_937, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_936));
#line 263 "goal_expr_to_goal.m"
                          }
#line 265 "goal_expr_to_goal.m"
                          {
#line 265 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_938, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_942, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_947, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_943, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_948, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_944, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_945, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_946, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                          }
#line 268 "goal_expr_to_goal.m"
                          {
#line 268 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_939 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_939, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_937));
#line 268 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_939, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_938));
#line 268 "goal_expr_to_goal.m"
                          }
#line 269 "goal_expr_to_goal.m"
                          {
#line 269 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_939, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_948, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_947, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                          }
#line 289 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerDI0_850 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 289 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__InnerUO0_851 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
#line 7215 "hlds.make_hlds.goal_expr_to_goal.c"
                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_856 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 290 "goal_expr_to_goal.m"
                          {
#line 290 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_856, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_850, &hlds__make_hlds__goal_expr_to_goal__InnerDI_854);
                          }
#line 291 "goal_expr_to_goal.m"
                          {
#line 291 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_799_856, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_851, &hlds__make_hlds__goal_expr_to_goal__InnerUO_855);
                          }
#line 292 "goal_expr_to_goal.m"
                          {
#line 292 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_854));
#line 292 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_855));
#line 292 "goal_expr_to_goal.m"
                          }
#line 7237 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 7239 "hlds.make_hlds.goal_expr_to_goal.c"
                    }
#line 273 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "goal_expr_to_goal.m"
                    {
#line 275 "goal_expr_to_goal.m"
                      {
#line 275 "goal_expr_to_goal.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds\'/16", (MR_String) "atomic HLDSGoals = []");
#line 275 "goal_expr_to_goal.m"
                        return;
                      }
#line 274 "goal_expr_to_goal.m"
                    }
#line 273 "goal_expr_to_goal.m"
                  else
#line 272 "goal_expr_to_goal.m"
                    {
#line 272 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, (MR_Integer) 0)));
#line 272 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, (MR_Integer) 1)));
#line 272 "goal_expr_to_goal.m"
                    }
#line 300 "goal_expr_to_goal.m"
                  {
#line 300 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__ShortHand_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 300 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 0) = ((MR_Box) ((MR_Integer) 0));
#line 300 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Outer_64));
#line 300 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Inner_86));
#line 300 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55));
#line 300 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80));
#line 300 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81));
#line 300 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "goal_expr_to_goal.m"
                  }
#line 302 "goal_expr_to_goal.m"
                  {
#line 302 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_682 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_682, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 302 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_682, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_90));
#line 302 "goal_expr_to_goal.m"
                  }
#line 303 "goal_expr_to_goal.m"
                  {
#line 303 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_681, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_683);
                  }
#line 304 "goal_expr_to_goal.m"
                  {
#line 304 "goal_expr_to_goal.m"
                    MR_Word base;
#line 304 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 304 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_682));
#line 304 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_683));
#line 304 "goal_expr_to_goal.m"
                  }
#line 223 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 15:
#line 353 "goal_expr_to_goal.m"
                {
#line 353 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 353 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 353 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 353 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 353 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 7)));
#line 353 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_698 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 353 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_699 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 375 "goal_expr_to_goal.m"
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "goal_expr_to_goal.m"
                    {
#line 376 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_699, hlds__make_hlds__goal_expr_to_goal__Then0_113, hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114, hlds__make_hlds__goal_expr_to_goal__Catches0_115, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116, hlds__make_hlds__goal_expr_to_goal__Context_698, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
#line 376 "goal_expr_to_goal.m"
                      return;
                    }
#line 375 "goal_expr_to_goal.m"
                  else
#line 355 "goal_expr_to_goal.m"
                    {
#line 355 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_112, (MR_Integer) 0)));

#line 363 "goal_expr_to_goal.m"
                      if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "goal_expr_to_goal.m"
                        {
#line 357 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_694;

#line 358 "goal_expr_to_goal.m"
                          {
#line 358 "goal_expr_to_goal.m"
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_117, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_694);
                          }
#line 359 "goal_expr_to_goal.m"
                          {
#line 359 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_117, hlds__make_hlds__goal_expr_to_goal__IOStateVar_694, hlds__make_hlds__goal_expr_to_goal__SubGoal0_699, hlds__make_hlds__goal_expr_to_goal__Then0_113, hlds__make_hlds__goal_expr_to_goal__Catches0_115, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116, hlds__make_hlds__goal_expr_to_goal__Context_698, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
#line 359 "goal_expr_to_goal.m"
                            return;
                          }
#line 357 "goal_expr_to_goal.m"
                        }
#line 363 "goal_expr_to_goal.m"
                      else
#line 364 "goal_expr_to_goal.m"
                        {
#line 364 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_120;
#line 364 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_121;
#line 364 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_457_457;

#line 369 "goal_expr_to_goal.m"
                          {
#line 369 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_120, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_698));
#line 369 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30])));
#line 369 "goal_expr_to_goal.m"
                          }
#line 371 "goal_expr_to_goal.m"
                          {
#line 371 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_457_457 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_457_457, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_120));
#line 371 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_457_457, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "goal_expr_to_goal.m"
                          }
#line 370 "goal_expr_to_goal.m"
                          {
#line 370 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 370 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 370 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_457_457));
#line 370 "goal_expr_to_goal.m"
                          }
#line 372 "goal_expr_to_goal.m"
                          {
#line 372 "goal_expr_to_goal.m"
                            MR_Word base;
#line 372 "goal_expr_to_goal.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "goal_expr_to_goal.m"
                            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213 = base;
#line 372 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_121));
#line 372 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212));
#line 372 "goal_expr_to_goal.m"
                          }
#line 373 "goal_expr_to_goal.m"
                          {
#line 373 "goal_expr_to_goal.m"
                            *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_698);
                          }
#line 364 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 364 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 364 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206;
#line 364 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 364 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 364 "goal_expr_to_goal.m"
                        }
#line 355 "goal_expr_to_goal.m"
                    }
#line 353 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 16:
#line 456 "goal_expr_to_goal.m"
                {
#line 456 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__P_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 456 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Q_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 456 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_347_347;
#line 456 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_348_348;
#line 456 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_727 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 456 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728;

#line 460 "goal_expr_to_goal.m"
                  {
#line 460 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_348_348 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 460 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_348_348, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 460 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_348_348, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_727));
#line 460 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_348_348, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_148));
#line 460 "goal_expr_to_goal.m"
                  }
#line 460 "goal_expr_to_goal.m"
                  {
#line 460 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_347_347 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 460 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_727));
#line 460 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_147));
#line 460 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_348_348));
#line 460 "goal_expr_to_goal.m"
                  }
#line 459 "goal_expr_to_goal.m"
                  {
#line 459 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 459 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 459 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_727));
#line 459 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_347_347));
#line 459 "goal_expr_to_goal.m"
                  }
#line 461 "goal_expr_to_goal.m"
                  /* direct tailcall eliminated */
#line 461 "goal_expr_to_goal.m"
                  {
#line 461 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_728;

#line 461 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 461 "goal_expr_to_goal.m"
                  }
#line 461 "goal_expr_to_goal.m"
                  continue;
#line 456 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 17:
#line 465 "goal_expr_to_goal.m"
                {
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_149;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_150;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_334_334;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_335_335;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_336_336;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_337_337;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_338_338;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_339_339;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_346_346;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_729 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_730;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_731;
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_732 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 465 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_733 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 475 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_151_151;

#line 472 "goal_expr_to_goal.m"
                  {
#line 472 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_732, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_334_334, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_335_335, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_339_339);
                  }
#line 475 "goal_expr_to_goal.m"
                  {
#line 475 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_733, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_334_334, &hlds__make_hlds__goal_expr_to_goal__V_151_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_335_335, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_339_339, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 478 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 479 "goal_expr_to_goal.m"
                  {
#line 479 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_346_346 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_346_346, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_149));
#line 479 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_346_346, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_150));
#line 479 "goal_expr_to_goal.m"
                  }
#line 479 "goal_expr_to_goal.m"
                  {
#line 479 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_730 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_730, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 479 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_730, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_346_346));
#line 479 "goal_expr_to_goal.m"
                  }
#line 480 "goal_expr_to_goal.m"
                  {
#line 480 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_729, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_731);
                  }
#line 481 "goal_expr_to_goal.m"
                  {
#line 481 "goal_expr_to_goal.m"
                    MR_Word base;
#line 481 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 481 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_730));
#line 481 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_731));
#line 481 "goal_expr_to_goal.m"
                  }
#line 465 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 18:
#line 409 "goal_expr_to_goal.m"
                {
#line 409 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_709 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 409 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_710;
#line 409 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_711;
#line 409 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_712 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 409 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_713;
#line 411 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_136_136;

#line 411 "goal_expr_to_goal.m"
                  {
#line 411 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_712, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_713, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__V_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 414 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 415 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_710 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_713);
#line 416 "goal_expr_to_goal.m"
                  {
#line 416 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_709, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_711);
                  }
#line 417 "goal_expr_to_goal.m"
                  {
#line 417 "goal_expr_to_goal.m"
                    MR_Word base;
#line 417 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 417 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_710));
#line 417 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_711));
#line 417 "goal_expr_to_goal.m"
                  }
#line 409 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 19:
#line 384 "goal_expr_to_goal.m"
                {
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCond_126;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen0_128;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse0_131;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen_133;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse_134;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_403_403;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_404_404;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_405_405;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_406_406;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_407_407;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_408_408;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_409_409;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_410_410;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_411_411;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_412_412;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_413_413;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_414_414;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_415_415;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_418_418;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_701 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_702;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_703;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_704;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_705;
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_706 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 384 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_707 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 386 "goal_expr_to_goal.m"
                  {
#line 386 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_706, &hlds__make_hlds__goal_expr_to_goal__Vars_704);
                  }
#line 387 "goal_expr_to_goal.m"
                  {
#line 387 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_707, &hlds__make_hlds__goal_expr_to_goal__StateVars_705);
                  }
#line 388 "goal_expr_to_goal.m"
                  {
#line 388 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_701, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__StateVars_705, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_403_403);
                  }
#line 390 "goal_expr_to_goal.m"
                  {
#line 390 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Cond_122, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSCond_126, hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125, &hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_404_404, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_406_406, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_403_403, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_408_408);
                  }
#line 393 "goal_expr_to_goal.m"
                  {
#line 393 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Then_123, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSThen0_128, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_404_404, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_409_409, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_405_405, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_410_410, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_406_406, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_407_407, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_408_408, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_413_413);
                  }
#line 396 "goal_expr_to_goal.m"
                  {
#line 396 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_705, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130);
                  }
#line 398 "goal_expr_to_goal.m"
                  {
#line 398 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Else_124, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSElse0_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_409_409, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_414_414, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_410_410, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_413_413, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_418_418);
                  }
#line 401 "goal_expr_to_goal.m"
                  {
#line 401 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Context_701, hlds__make_hlds__goal_expr_to_goal__StateVars_705, hlds__make_hlds__goal_expr_to_goal__HLDSThen0_128, &hlds__make_hlds__goal_expr_to_goal__HLDSThen_133, hlds__make_hlds__goal_expr_to_goal__HLDSElse0_131, &hlds__make_hlds__goal_expr_to_goal__HLDSElse_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130, hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_414_414, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_418_418, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 405 "goal_expr_to_goal.m"
                  {
#line 405 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_702 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 405 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_702, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 405 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_702, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_704));
#line 405 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_702, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCond_126));
#line 405 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_702, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSThen_133));
#line 405 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_702, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSElse_134));
#line 405 "goal_expr_to_goal.m"
                  }
#line 406 "goal_expr_to_goal.m"
                  {
#line 406 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_701, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_703);
                  }
#line 407 "goal_expr_to_goal.m"
                  {
#line 407 "goal_expr_to_goal.m"
                    MR_Word base;
#line 407 "goal_expr_to_goal.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "goal_expr_to_goal.m"
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 407 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_702));
#line 407 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_703));
#line 407 "goal_expr_to_goal.m"
                  }
#line 384 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 20:
#line 483 "goal_expr_to_goal.m"
                {
#line 483 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__EventName_152 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_154;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_155;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_156;
#line 483 "goal_expr_to_goal.m"
                  MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_157;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Modes_158;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Details_159;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_162;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_319_319;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_320_320;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_321_321;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_322_322;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_325_325;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_326_326;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_327_327;
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_735 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 483 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_736;

#line 484 "goal_expr_to_goal.m"
                  {
#line 484 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_153, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_154);
                  }
#line 485 "goal_expr_to_goal.m"
                  {
#line 485 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_154, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_155);
                  }
#line 487 "goal_expr_to_goal.m"
                  {
#line 487 "goal_expr_to_goal.m"
                    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_155, &hlds__make_hlds__goal_expr_to_goal__HeadVars_156, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_319_319, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_320_320, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_321_321);
                  }
#line 489 "goal_expr_to_goal.m"
                  {
#line 489 "goal_expr_to_goal.m"
                    mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__HeadVars_156, &hlds__make_hlds__goal_expr_to_goal__Arity_157);
                  }
#line 490 "goal_expr_to_goal.m"
                  {
#line 490 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_322_322 = parse_tree__prog_mode__in_mode_0_f_0();
                  }
#line 490 "goal_expr_to_goal.m"
                  {
#line 490 "goal_expr_to_goal.m"
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__goal_expr_to_goal__Arity_157, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_322_322)), &hlds__make_hlds__goal_expr_to_goal__Modes_158);
                  }
#line 491 "goal_expr_to_goal.m"
                  {
#line 491 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Details_159 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 491 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Details_159, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_152));
#line 491 "goal_expr_to_goal.m"
                  }
#line 492 "goal_expr_to_goal.m"
                  {
#line 492 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 492 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 492 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Details_159));
#line 492 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_156));
#line 492 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Modes_158));
#line 492 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 5) = ((MR_Box) ((MR_Integer) 0));
#line 492 "goal_expr_to_goal.m"
                  }
#line 494 "goal_expr_to_goal.m"
                  {
#line 494 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_735, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_736);
                  }
#line 495 "goal_expr_to_goal.m"
                  {
#line 495 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160));
#line 495 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_736));
#line 495 "goal_expr_to_goal.m"
                  }
#line 496 "goal_expr_to_goal.m"
                  {
#line 496 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_325_325 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 496 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_325_325, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_152));
#line 496 "goal_expr_to_goal.m"
                  }
#line 496 "goal_expr_to_goal.m"
                  {
#line 496 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__CallId_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 496 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_162, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_325_325));
#line 496 "goal_expr_to_goal.m"
                  }
#line 497 "goal_expr_to_goal.m"
                  {
#line 497 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_326_326, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_162));
#line 497 "goal_expr_to_goal.m"
                  }
#line 497 "goal_expr_to_goal.m"
                  {
#line 497 "goal_expr_to_goal.m"
                    hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_156, hlds__make_hlds__goal_expr_to_goal__ArgTerms_155, hlds__make_hlds__goal_expr_to_goal__Context_735, hlds__make_hlds__goal_expr_to_goal__V_326_326, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_320_320, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_327_327, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_319_319, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_321_321, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                  }
#line 500 "goal_expr_to_goal.m"
                  {
#line 500 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_327_327, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
#line 500 "goal_expr_to_goal.m"
                    return;
                  }
#line 483 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 21:
#line 502 "goal_expr_to_goal.m"
                {
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Name_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253;
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_776 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_779 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_780 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 502 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781;
#line 514 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_164;
#line 514 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_165;
#line 505 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_249_249;
#line 505 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_250_250;
#line 505 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_251_251;

#line 503 "goal_expr_to_goal.m"
                  {
#line 503 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_780, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781);
                  }
#line 505 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_163)) == (MR_mktag((MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 505 "goal_expr_to_goal.m"
                    {
#line 505 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_249_249 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_163, (MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_249_249, (MR_String) "\\=") == 0);
#line 505 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 505 "goal_expr_to_goal.m"
                        {
#line 506 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781)) == (MR_mktag((MR_Integer) 1)));
#line 506 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 506 "goal_expr_to_goal.m"
                            {
#line 506 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__LHSTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781, (MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781, (MR_Integer) 1)));
#line 506 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 506 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 506 "goal_expr_to_goal.m"
                                {
#line 506 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__RHSTerm_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_Integer) 0)));
#line 506 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_Integer) 1)));
#line 506 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 506 "goal_expr_to_goal.m"
                                }
#line 506 "goal_expr_to_goal.m"
                            }
#line 505 "goal_expr_to_goal.m"
                        }
#line 505 "goal_expr_to_goal.m"
                    }
#line 514 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 510 "goal_expr_to_goal.m"
                    {
#line 510 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_252_252;
#line 510 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737;

#line 510 "goal_expr_to_goal.m"
                      {
#line 510 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_252_252 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 510 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 510 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_776));
#line 510 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_164));
#line 510 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_165));
#line 510 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_779));
#line 510 "goal_expr_to_goal.m"
                      }
#line 509 "goal_expr_to_goal.m"
                      {
#line 509 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 509 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 509 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_776));
#line 509 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_252_252));
#line 509 "goal_expr_to_goal.m"
                      }
#line 511 "goal_expr_to_goal.m"
                      {
#line 511 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                      }
#line 510 "goal_expr_to_goal.m"
                    }
#line 514 "goal_expr_to_goal.m"
                  else
#line 535 "goal_expr_to_goal.m"
                    {
#line 535 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm0_167;
#line 535 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Remainder_169;
#line 535 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__FieldListContext_170;
#line 535 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171;
#line 535 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarContext_172;
#line 535 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_262_262;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_168;
#line 517 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__V_259_259;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_260_260;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_261_261;
#line 517 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__V_263_263;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_264_264;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_265_265;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_266_266;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_267_267;
#line 517 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__V_268_268;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_269_269;
#line 517 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_270_270;
#line 522 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_173_173;
#line 522 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_174_174;

#line 517 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_163)) == (MR_mktag((MR_Integer) 0)));
#line 517 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 517 "goal_expr_to_goal.m"
                        {
#line 517 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_259_259 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_163, (MR_Integer) 0)));
#line 517 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_259_259, (MR_String) ":=") == 0);
#line 517 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 517 "goal_expr_to_goal.m"
                            {
#line 518 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781)) == (MR_mktag((MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                {
#line 518 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781, (MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_260_260)) == (MR_mktag((MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                    {
#line 518 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__RHSTerm0_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_261_261 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 517 "goal_expr_to_goal.m"
                                        {
#line 519 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166)) == (MR_mktag((MR_Integer) 0)));
#line 519 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 519 "goal_expr_to_goal.m"
                                            {
#line 519 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166, (MR_Integer) 0)));
#line 519 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166, (MR_Integer) 1)));
#line 519 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__FieldListContext_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166, (MR_Integer) 2)));
#line 519 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_262_262)) == (MR_mktag((MR_Integer) 0)));
#line 519 "goal_expr_to_goal.m"
                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 519 "goal_expr_to_goal.m"
                                                {
#line 519 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__V_263_263 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_262_262, (MR_Integer) 0)));
#line 519 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_263_263, (MR_String) "^") == 0);
#line 517 "goal_expr_to_goal.m"
                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 517 "goal_expr_to_goal.m"
                                                    {
#line 519 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_264_264)) == (MR_mktag((MR_Integer) 1)));
#line 519 "goal_expr_to_goal.m"
                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 519 "goal_expr_to_goal.m"
                                                        {
#line 519 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__StateVar0_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_264_264, (MR_Integer) 0)));
#line 519 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_264_264, (MR_Integer) 1)));
#line 519 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_265_265)) == (MR_mktag((MR_Integer) 1)));
#line 519 "goal_expr_to_goal.m"
                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 519 "goal_expr_to_goal.m"
                                                            {
#line 519 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__Remainder_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_265_265, (MR_Integer) 0)));
#line 519 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_265_265, (MR_Integer) 1)));
#line 519 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_266_266 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 517 "goal_expr_to_goal.m"
                                                                {
#line 521 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVar0_168)) == (MR_mktag((MR_Integer) 0)));
#line 521 "goal_expr_to_goal.m"
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 521 "goal_expr_to_goal.m"
                                                                    {
#line 521 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_168, (MR_Integer) 0)));
#line 521 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_168, (MR_Integer) 1)));
#line 521 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__StateVarContext_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_168, (MR_Integer) 2)));
#line 521 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_267_267)) == (MR_mktag((MR_Integer) 0)));
#line 521 "goal_expr_to_goal.m"
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 521 "goal_expr_to_goal.m"
                                                                        {
#line 521 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__V_268_268 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_267_267, (MR_Integer) 0)));
#line 521 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_268_268, (MR_String) "!") == 0);
#line 517 "goal_expr_to_goal.m"
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 517 "goal_expr_to_goal.m"
                                                                            {
#line 522 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171)) == (MR_mktag((MR_Integer) 1)));
#line 522 "goal_expr_to_goal.m"
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 522 "goal_expr_to_goal.m"
                                                                                {
#line 522 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171, (MR_Integer) 0)));
#line 522 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171, (MR_Integer) 1)));
#line 522 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_269_269)) == (MR_mktag((MR_Integer) 1)));
#line 522 "goal_expr_to_goal.m"
                                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 522 "goal_expr_to_goal.m"
                                                                                    {
#line 522 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_269_269, (MR_Integer) 0)));
#line 522 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_269_269, (MR_Integer) 1)));
#line 522 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_270_270 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "goal_expr_to_goal.m"
                                                                                    }
#line 522 "goal_expr_to_goal.m"
                                                                                }
#line 517 "goal_expr_to_goal.m"
                                                                            }
#line 521 "goal_expr_to_goal.m"
                                                                        }
#line 521 "goal_expr_to_goal.m"
                                                                    }
#line 517 "goal_expr_to_goal.m"
                                                                }
#line 519 "goal_expr_to_goal.m"
                                                            }
#line 519 "goal_expr_to_goal.m"
                                                        }
#line 517 "goal_expr_to_goal.m"
                                                    }
#line 519 "goal_expr_to_goal.m"
                                                }
#line 519 "goal_expr_to_goal.m"
                                            }
#line 517 "goal_expr_to_goal.m"
                                        }
#line 518 "goal_expr_to_goal.m"
                                    }
#line 518 "goal_expr_to_goal.m"
                                }
#line 517 "goal_expr_to_goal.m"
                            }
#line 517 "goal_expr_to_goal.m"
                        }
#line 535 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 526 "goal_expr_to_goal.m"
                        {
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_175;
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldList_176;
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_277_277;
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_278_278;
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_282_282;
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_283_283;
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738;
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_739;
#line 526 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_740;

#line 526 "goal_expr_to_goal.m"
                          {
#line 526 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__LHSTerm_739 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 526 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_739, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
#line 526 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_739, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171));
#line 526 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_739, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_172));
#line 526 "goal_expr_to_goal.m"
                          }
#line 527 "goal_expr_to_goal.m"
                          {
#line 527 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__StateVar_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 527 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_175, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
#line 527 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_175, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171));
#line 527 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_175, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_172));
#line 527 "goal_expr_to_goal.m"
                          }
#line 528 "goal_expr_to_goal.m"
                          {
#line 528 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_278_278, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Remainder_169));
#line 528 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_278_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "goal_expr_to_goal.m"
                          }
#line 528 "goal_expr_to_goal.m"
                          {
#line 528 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_277_277, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_175));
#line 528 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_277_277, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_278_278));
#line 528 "goal_expr_to_goal.m"
                          }
#line 528 "goal_expr_to_goal.m"
                          {
#line 528 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldList_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 528 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_176, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_262_262));
#line 528 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_176, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_277_277));
#line 528 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_176, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldListContext_170));
#line 528 "goal_expr_to_goal.m"
                          }
#line 530 "goal_expr_to_goal.m"
                          {
#line 530 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_283_283, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm0_167));
#line 530 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_283_283, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "goal_expr_to_goal.m"
                          }
#line 530 "goal_expr_to_goal.m"
                          {
#line 530 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_282_282, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldList_176));
#line 530 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_282_282, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_283_283));
#line 530 "goal_expr_to_goal.m"
                          }
#line 530 "goal_expr_to_goal.m"
                          {
#line 530 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__RHSTerm_740 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 530 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_740, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2]));
#line 530 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_740, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_282_282));
#line 530 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_740, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_776));
#line 530 "goal_expr_to_goal.m"
                          }
#line 531 "goal_expr_to_goal.m"
                          {
#line 531 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 531 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 531 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_776));
#line 531 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_739));
#line 531 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_740));
#line 531 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_779));
#line 531 "goal_expr_to_goal.m"
                          }
#line 532 "goal_expr_to_goal.m"
                          {
#line 532 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_738, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                          }
#line 526 "goal_expr_to_goal.m"
                        }
#line 535 "goal_expr_to_goal.m"
                      else
#line 549 "goal_expr_to_goal.m"
                        {
#line 549 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_178;
#line 539 "goal_expr_to_goal.m"
                          MR_String hlds__make_hlds__goal_expr_to_goal__Operator_177;

#line 539 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_163)) == (MR_mktag((MR_Integer) 0)));
#line 539 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 539 "goal_expr_to_goal.m"
                            {
#line 539 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__Operator_177 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_163, (MR_Integer) 0)));
#line 541 "goal_expr_to_goal.m"
                              if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_177, (MR_String) ":=") == 0))
#line 541 "goal_expr_to_goal.m"
                                {
#line 541 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AccessType_178 = (MR_Integer) 1;
#line 541 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 541 "goal_expr_to_goal.m"
                                }
#line 541 "goal_expr_to_goal.m"
                              else
#line 541 "goal_expr_to_goal.m"
                              if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_177, (MR_String) "=^") == 0))
#line 540 "goal_expr_to_goal.m"
                                {
#line 540 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AccessType_178 = (MR_Integer) 0;
#line 540 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 540 "goal_expr_to_goal.m"
                                }
#line 541 "goal_expr_to_goal.m"
                              else
#line 541 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 539 "goal_expr_to_goal.m"
                            }
#line 549 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 545 "goal_expr_to_goal.m"
                            {
#line 545 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_741;

#line 544 "goal_expr_to_goal.m"
                              {
#line 544 "goal_expr_to_goal.m"
                                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_741);
                              }
#line 546 "goal_expr_to_goal.m"
                              {
#line 546 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__AccessType_178, hlds__make_hlds__goal_expr_to_goal__ArgTerms_741, hlds__make_hlds__goal_expr_to_goal__Context_776, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                              }
#line 545 "goal_expr_to_goal.m"
                            }
#line 549 "goal_expr_to_goal.m"
                          else
#line 551 "goal_expr_to_goal.m"
                            {
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Call_184;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo0_189;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_299_299;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_300_300;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_301_301;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_309_309;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_310_310;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_744;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_745;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_746;
#line 551 "goal_expr_to_goal.m"
                              MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_747;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_749;
#line 551 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_750;
#line 575 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__PredVar_179;
#line 575 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__RealHeadVars_180;
#line 560 "goal_expr_to_goal.m"
                              MR_String hlds__make_hlds__goal_expr_to_goal__V_826_826;

#line 550 "goal_expr_to_goal.m"
                              {
#line 550 "goal_expr_to_goal.m"
                                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_781, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_745);
                              }
#line 552 "goal_expr_to_goal.m"
                              {
#line 552 "goal_expr_to_goal.m"
                                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_745, &hlds__make_hlds__goal_expr_to_goal__HeadVars_746, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_299_299, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_301_301);
                              }
#line 554 "goal_expr_to_goal.m"
                              {
#line 554 "goal_expr_to_goal.m"
                                mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1], hlds__make_hlds__goal_expr_to_goal__ArgTerms_745, &hlds__make_hlds__goal_expr_to_goal__Arity_747);
                              }
#line 558 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_163)) == (MR_mktag((MR_Integer) 0)));
#line 558 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 558 "goal_expr_to_goal.m"
                                {
#line 558 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_826_826 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_163, (MR_Integer) 0)));
#line 559 "goal_expr_to_goal.m"
                                  if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_826_826, (MR_String) "") == 0))
#line 559 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 559 "goal_expr_to_goal.m"
                                  else
#line 559 "goal_expr_to_goal.m"
                                  if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_826_826, (MR_String) "call") == 0))
#line 558 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 559 "goal_expr_to_goal.m"
                                  else
#line 559 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 560 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 560 "goal_expr_to_goal.m"
                                    {
#line 561 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HeadVars_746)) == (MR_mktag((MR_Integer) 1)));
#line 561 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 561 "goal_expr_to_goal.m"
                                        {
#line 561 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__PredVar_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_746, (MR_Integer) 0)));
#line 561 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__RealHeadVars_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_746, (MR_Integer) 1)));
#line 561 "goal_expr_to_goal.m"
                                        }
#line 560 "goal_expr_to_goal.m"
                                    }
#line 558 "goal_expr_to_goal.m"
                                }
#line 575 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 564 "goal_expr_to_goal.m"
                                {
#line 564 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCall_183;
#line 564 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCallId_185;

#line 568 "goal_expr_to_goal.m"
                                  {
#line 568 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__GenericCall_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 568 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_183, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredVar_179));
#line 568 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_183, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_779));
#line 568 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_183, 2) = ((MR_Box) ((MR_Integer) 0));
#line 568 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_183, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_747));
#line 568 "goal_expr_to_goal.m"
                                  }
#line 570 "goal_expr_to_goal.m"
                                  {
#line 570 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__Call_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 570 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 570 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCall_183));
#line 570 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RealHeadVars_180));
#line 570 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 5) = ((MR_Box) ((MR_Integer) 6));
#line 570 "goal_expr_to_goal.m"
                                  }
#line 573 "goal_expr_to_goal.m"
                                  {
#line 573 "goal_expr_to_goal.m"
                                    hlds__hlds_goal__generic_call_to_id_2_p_0(hlds__make_hlds__goal_expr_to_goal__GenericCall_183, &hlds__make_hlds__goal_expr_to_goal__GenericCallId_185);
                                  }
#line 574 "goal_expr_to_goal.m"
                                  {
#line 574 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__CallId_750 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 574 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_750, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCallId_185));
#line 574 "goal_expr_to_goal.m"
                                  }
#line 564 "goal_expr_to_goal.m"
                                }
#line 575 "goal_expr_to_goal.m"
                              else
#line 577 "goal_expr_to_goal.m"
                                {
#line 577 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__PredId_186;
#line 577 "goal_expr_to_goal.m"
                                  MR_Integer hlds__make_hlds__goal_expr_to_goal__ModeId_187;
#line 577 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_306_306;

#line 577 "goal_expr_to_goal.m"
                                  {
#line 577 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__PredId_186 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                                  }
#line 578 "goal_expr_to_goal.m"
                                  {
#line 578 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__ModeId_187 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                                  }
#line 581 "goal_expr_to_goal.m"
                                  {
#line 581 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__Call_184 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 581 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredId_186));
#line 581 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ModeId_187));
#line 581 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_746));
#line 581 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 3) = ((MR_Box) ((MR_Integer) 2));
#line 581 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_163));
#line 581 "goal_expr_to_goal.m"
                                  }
#line 584 "goal_expr_to_goal.m"
                                  {
#line 584 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_306_306 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 584 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_306_306, 0) = ((MR_Box) ((MR_Integer) 0));
#line 584 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_306_306, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_163));
#line 584 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_306_306, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_747));
#line 584 "goal_expr_to_goal.m"
                                  }
#line 584 "goal_expr_to_goal.m"
                                  {
#line 584 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__CallId_750 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 584 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallId_750, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_306_306));
#line 584 "goal_expr_to_goal.m"
                                  }
#line 577 "goal_expr_to_goal.m"
                                }
#line 586 "goal_expr_to_goal.m"
                              {
#line 586 "goal_expr_to_goal.m"
                                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_776, &hlds__make_hlds__goal_expr_to_goal__GoalInfo0_189);
                              }
#line 587 "goal_expr_to_goal.m"
                              {
#line 587 "goal_expr_to_goal.m"
                                hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__goal_expr_to_goal__Purity_779, hlds__make_hlds__goal_expr_to_goal__GoalInfo0_189, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_744);
                              }
#line 588 "goal_expr_to_goal.m"
                              {
#line 588 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_749 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_749, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Call_184));
#line 588 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_749, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_744));
#line 588 "goal_expr_to_goal.m"
                              }
#line 590 "goal_expr_to_goal.m"
                              {
#line 590 "goal_expr_to_goal.m"
                                hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, hlds__make_hlds__goal_expr_to_goal__Name_163, hlds__make_hlds__goal_expr_to_goal__Arity_747, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_309_309);
                              }
#line 592 "goal_expr_to_goal.m"
                              {
#line 592 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_310_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 592 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_310_310, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_750));
#line 592 "goal_expr_to_goal.m"
                              }
#line 591 "goal_expr_to_goal.m"
                              {
#line 591 "goal_expr_to_goal.m"
                                hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_746, hlds__make_hlds__goal_expr_to_goal__ArgTerms_745, hlds__make_hlds__goal_expr_to_goal__Context_776, hlds__make_hlds__goal_expr_to_goal__V_310_310, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_749, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_300_300, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_299_299, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_309_309, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_301_301, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                              }
#line 551 "goal_expr_to_goal.m"
                            }
#line 549 "goal_expr_to_goal.m"
                        }
#line 535 "goal_expr_to_goal.m"
                    }
#line 595 "goal_expr_to_goal.m"
                  {
#line 595 "goal_expr_to_goal.m"
                    hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
#line 595 "goal_expr_to_goal.m"
                    return;
                  }
#line 502 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
              case (MR_Integer) 22:
#line 597 "goal_expr_to_goal.m"
                {
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_821_821 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TermA0_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TermB0_191 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TermA_192;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TermB_193;
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_789 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 597 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_790 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 612 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarA_194;
#line 602 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_216_216;
#line 602 "goal_expr_to_goal.m"
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_217_217;
#line 602 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_218_218;
#line 602 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_219_219;
#line 602 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_220_220;
#line 602 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_196_196;
#line 602 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_195_195;

#line 598 "goal_expr_to_goal.m"
                  {
#line 598 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_821_821, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermA0_190, &hlds__make_hlds__goal_expr_to_goal__TermA_192);
                  }
#line 599 "goal_expr_to_goal.m"
                  {
#line 599 "goal_expr_to_goal.m"
                    parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_821_821, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermB0_191, &hlds__make_hlds__goal_expr_to_goal__TermB_193);
                  }
#line 602 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermA_192)) == (MR_mktag((MR_Integer) 0)));
#line 602 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 602 "goal_expr_to_goal.m"
                    {
#line 602 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_192, (MR_Integer) 0)));
#line 602 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_192, (MR_Integer) 1)));
#line 602 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_192, (MR_Integer) 2)));
#line 602 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_216_216)) == (MR_mktag((MR_Integer) 0)));
#line 602 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 602 "goal_expr_to_goal.m"
                        {
#line 602 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_216_216, (MR_Integer) 0)));
#line 602 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_217_217, (MR_String) "!") == 0);
#line 602 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 602 "goal_expr_to_goal.m"
                            {
#line 602 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_218_218)) == (MR_mktag((MR_Integer) 1)));
#line 602 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 602 "goal_expr_to_goal.m"
                                {
#line 602 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_Integer) 0)));
#line 602 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_Integer) 1)));
#line 602 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_220_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 602 "goal_expr_to_goal.m"
                                    {
#line 602 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_219_219)) == (MR_mktag((MR_Integer) 1)));
#line 602 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 602 "goal_expr_to_goal.m"
                                        {
#line 602 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__StateVarA_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 0)));
#line 602 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 1)));
#line 602 "goal_expr_to_goal.m"
                                        }
#line 602 "goal_expr_to_goal.m"
                                    }
#line 602 "goal_expr_to_goal.m"
                                }
#line 602 "goal_expr_to_goal.m"
                            }
#line 602 "goal_expr_to_goal.m"
                        }
#line 602 "goal_expr_to_goal.m"
                    }
#line 612 "goal_expr_to_goal.m"
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                    {
#line 604 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_221_221;
#line 604 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_222_222;
#line 604 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_223_223;
#line 608 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_197;
#line 605 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_224_224;
#line 605 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__V_225_225;
#line 605 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_226_226;
#line 605 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_227_227;
#line 605 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_228_228;
#line 605 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_199_199;
#line 605 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_198_198;

#line 603 "goal_expr_to_goal.m"
                      {
#line 603 "goal_expr_to_goal.m"
                        hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_789, hlds__make_hlds__goal_expr_to_goal__StateVarA_194, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_221_221, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_223_223);
                      }
#line 605 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_193)) == (MR_mktag((MR_Integer) 0)));
#line 605 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 605 "goal_expr_to_goal.m"
                        {
#line 605 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 0)));
#line 605 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 1)));
#line 605 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 2)));
#line 605 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_224_224)) == (MR_mktag((MR_Integer) 0)));
#line 605 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 605 "goal_expr_to_goal.m"
                            {
#line 605 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_225_225 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_224_224, (MR_Integer) 0)));
#line 605 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_String) "!") == 0);
#line 605 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 605 "goal_expr_to_goal.m"
                                {
#line 605 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_226_226)) == (MR_mktag((MR_Integer) 1)));
#line 605 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 605 "goal_expr_to_goal.m"
                                    {
#line 605 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 0)));
#line 605 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 1)));
#line 605 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_228_228 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 605 "goal_expr_to_goal.m"
                                        {
#line 605 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_227_227)) == (MR_mktag((MR_Integer) 1)));
#line 605 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 605 "goal_expr_to_goal.m"
                                            {
#line 605 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__StateVarB_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_227_227, (MR_Integer) 0)));
#line 605 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_227_227, (MR_Integer) 1)));
#line 605 "goal_expr_to_goal.m"
                                            }
#line 605 "goal_expr_to_goal.m"
                                        }
#line 605 "goal_expr_to_goal.m"
                                    }
#line 605 "goal_expr_to_goal.m"
                                }
#line 605 "goal_expr_to_goal.m"
                            }
#line 605 "goal_expr_to_goal.m"
                        }
#line 608 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 606 "goal_expr_to_goal.m"
                        {
#line 606 "goal_expr_to_goal.m"
                          hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_789, hlds__make_hlds__goal_expr_to_goal__StateVarB_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_221_221, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_223_223, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                        }
#line 608 "goal_expr_to_goal.m"
                      else
#line 609 "goal_expr_to_goal.m"
                        {
#line 609 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_223_223;
#line 609 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_221_221;
#line 609 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_222_222;
#line 609 "goal_expr_to_goal.m"
                        }
#line 611 "goal_expr_to_goal.m"
                      {
#line 611 "goal_expr_to_goal.m"
                        *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_789);
                      }
#line 604 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 604 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 604 "goal_expr_to_goal.m"
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 604 "goal_expr_to_goal.m"
                    }
#line 612 "goal_expr_to_goal.m"
                  else
#line 616 "goal_expr_to_goal.m"
                    {
#line 616 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_788;
#line 612 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_232_232;
#line 612 "goal_expr_to_goal.m"
                      MR_String hlds__make_hlds__goal_expr_to_goal__V_233_233;
#line 612 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_234_234;
#line 612 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_235_235;
#line 612 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_236_236;
#line 612 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_201_201;
#line 612 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_200_200;

#line 612 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_193)) == (MR_mktag((MR_Integer) 0)));
#line 612 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 612 "goal_expr_to_goal.m"
                        {
#line 612 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 0)));
#line 612 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 1)));
#line 612 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 2)));
#line 612 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_232_232)) == (MR_mktag((MR_Integer) 0)));
#line 612 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 612 "goal_expr_to_goal.m"
                            {
#line 612 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_233_233 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_232_232, (MR_Integer) 0)));
#line 612 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_233_233, (MR_String) "!") == 0);
#line 612 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 612 "goal_expr_to_goal.m"
                                {
#line 612 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_234_234)) == (MR_mktag((MR_Integer) 1)));
#line 612 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 612 "goal_expr_to_goal.m"
                                    {
#line 612 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_234_234, (MR_Integer) 0)));
#line 612 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_234_234, (MR_Integer) 1)));
#line 612 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_236_236 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 612 "goal_expr_to_goal.m"
                                        {
#line 612 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_235_235)) == (MR_mktag((MR_Integer) 1)));
#line 612 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 612 "goal_expr_to_goal.m"
                                            {
#line 612 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__StateVarB_788 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_235_235, (MR_Integer) 0)));
#line 612 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_235_235, (MR_Integer) 1)));
#line 612 "goal_expr_to_goal.m"
                                            }
#line 612 "goal_expr_to_goal.m"
                                        }
#line 612 "goal_expr_to_goal.m"
                                    }
#line 612 "goal_expr_to_goal.m"
                                }
#line 612 "goal_expr_to_goal.m"
                            }
#line 612 "goal_expr_to_goal.m"
                        }
#line 616 "goal_expr_to_goal.m"
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 614 "goal_expr_to_goal.m"
                        {
#line 613 "goal_expr_to_goal.m"
                          {
#line 613 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_789, hlds__make_hlds__goal_expr_to_goal__StateVarB_788, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                          }
#line 615 "goal_expr_to_goal.m"
                          {
#line 615 "goal_expr_to_goal.m"
                            *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
                          }
#line 614 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 614 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 614 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 614 "goal_expr_to_goal.m"
                        }
#line 616 "goal_expr_to_goal.m"
                      else
#line 619 "goal_expr_to_goal.m"
                        {
#line 619 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_242_242;

#line 617 "goal_expr_to_goal.m"
                          {
#line 617 "goal_expr_to_goal.m"
                            hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(hlds__make_hlds__goal_expr_to_goal__TermA_192, hlds__make_hlds__goal_expr_to_goal__TermB_193, hlds__make_hlds__goal_expr_to_goal__Context_789, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__Purity_790, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_242_242, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                          }
#line 620 "goal_expr_to_goal.m"
                          {
#line 620 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_242_242, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
#line 620 "goal_expr_to_goal.m"
                            return;
                          }
#line 619 "goal_expr_to_goal.m"
                        }
#line 616 "goal_expr_to_goal.m"
                    }
#line 597 "goal_expr_to_goal.m"
                }
#line 104 "goal_expr_to_goal.m"
                break;
#line 104 "goal_expr_to_goal.m"
            }
#line 104 "goal_expr_to_goal.m"
            break;
#line 104 "goal_expr_to_goal.m"
        }
#line 104 "goal_expr_to_goal.m"
      }
#line 104 "goal_expr_to_goal.m"
      break;
#line 104 "goal_expr_to_goal.m"
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
