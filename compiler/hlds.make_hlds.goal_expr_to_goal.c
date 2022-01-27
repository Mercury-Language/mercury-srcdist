/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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




#line 158 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0;

#line 167 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 170 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0;

#line 173 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1;

#line 176 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2];

#line 179 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2];

#line 182 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2];

#line 185 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 188 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 190 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2);

#line 193 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 196 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 198 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 200 "hlds.make_hlds.goal_expr_to_goal.c"
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

#line 1187 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1187 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1187 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1187 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1187 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1187 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10);

#line 1171 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1171 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12);

#line 1105 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_23,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_24,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_25,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_26,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_27,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);

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

#line 862 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__RevParConj0_21,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__RevParConj_22,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46);

#line 836 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__RevConj0_21,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__RevConj_22,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46);

#line 748 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);

#line 692 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 692 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Operator_19,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);

#line 677 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(
#line 677 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_6,
#line 677 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_7,
#line 677 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_8,
#line 677 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 677 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);

#line 664 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0_1(
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 664 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 664 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 664 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 664 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8);

#line 647 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_24,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_25,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_26,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_27,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_28,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_29,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_30,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_31,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_32,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_33,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GoalInfo_34,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_49,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_51,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_52,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_53,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_54,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_55,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_56,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_57,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_58,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_59,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_60);

#line 633 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(
#line 633 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_5,
#line 633 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_6,
#line 633 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_7,
#line 633 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_8);

#line 615 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(
#line 615 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_8,
#line 615 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_9,
#line 615 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_10,
#line 615 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11,
#line 615 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_12,
#line 615 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_13,
#line 615 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_14);

#line 321 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0_1(
#line 321 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 321 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 321 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 321 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 321 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 321 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5);

#line 102 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Expr_19,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_20,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_21,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[10][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][10];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][12];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[2]))),
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
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot appear as a unification argument."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You probably meant"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[8])),
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[10][1] = {
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
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1064 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1072 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1080 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1089 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1097 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
  (MR_String) "loc_whole_goal",
  (MR_Integer) 0
};

#line 1103 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
  (MR_String) "loc_inside_atomic_goal",
  (MR_Integer) 1
};

#line 1109 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1
};

#line 1115 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0
};

#line 1121 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1127 "hlds.make_hlds.goal_expr_to_goal.c"
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

#line 1148 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 1151 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1153 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2)
#line 1155 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1157 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1159 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1162 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1164 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal__succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2));
    }
#line 1167 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1169 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1171 "hlds.make_hlds.goal_expr_to_goal.c"
}

#line 1174 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 1177 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1179 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 1181 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3)
#line 1183 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1185 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1187 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1;

#line 1190 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1192 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3));
    }
#line 1195 "hlds.make_hlds.goal_expr_to_goal.c"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1));
#line 1197 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1199 "hlds.make_hlds.goal_expr_to_goal.c"
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
#line 1243 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1245 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1 == hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2);

#line 1248 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1250 "hlds.make_hlds.goal_expr_to_goal.c"
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
    if ((hlds__make_hlds__goal_expr_to_goal__AccessType_3 == (MR_Integer) 0))
#line 1254 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23]);
#line 1250 "goal_expr_to_goal.m"
    else
#line 1251 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25]);
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

#line 1187 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1187 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1187 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1187 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1187 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1187 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10)
#line 1187 "goal_expr_to_goal.m"
{
#line 1193 "goal_expr_to_goal.m"
  {
#line 1193 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1193 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__Catches_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "goal_expr_to_goal.m"
      if ((hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "goal_expr_to_goal.m"
        {
#line 1214 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Rethrow_21;
#line 1214 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_22_22;
#line 1214 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;
#line 1214 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 1214 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;

#line 1217 "goal_expr_to_goal.m"
          {
#line 1217 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_22_22 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1217 "goal_expr_to_goal.m"
          {
#line 1217 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Rethrow_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_22_22));
#line 1217 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_21, 1) = ((MR_Box) ((MR_String) "rethrow"));
#line 1217 "goal_expr_to_goal.m"
          }
#line 1218 "goal_expr_to_goal.m"
          {
#line 1218 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6));
#line 1218 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1218 "goal_expr_to_goal.m"
          }
#line 1218 "goal_expr_to_goal.m"
          {
#line 1218 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1218 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Rethrow_21));
#line 1218 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_24_24, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 1218 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_24_24, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1218 "goal_expr_to_goal.m"
          }
#line 1219 "goal_expr_to_goal.m"
          {
#line 1219 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7);
          }
#line 1219 "goal_expr_to_goal.m"
          {
#line 1219 "goal_expr_to_goal.m"
            MR_Word base;
#line 1219 "goal_expr_to_goal.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1219 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_24_24));
#line 1219 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 1219 "goal_expr_to_goal.m"
          }
#line 1214 "goal_expr_to_goal.m"
        }
#line 1213 "goal_expr_to_goal.m"
      else
#line 1203 "goal_expr_to_goal.m"
        {
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_19;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, (MR_Integer) 0)));
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_35_35;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_47;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_48_48;
#line 1203 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_49_49;
#line 1207 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_18_18;

#line 1203 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_29_29, (MR_Integer) 0)));
#line 1203 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_29_29, (MR_Integer) 1)));
#line 1207 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17, (MR_Integer) 0)));
#line 1207 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17, (MR_Integer) 1)));
#line 1209 "goal_expr_to_goal.m"
          {
#line 1209 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16));
#line 1209 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_19));
#line 1209 "goal_expr_to_goal.m"
          }
#line 1240 "goal_expr_to_goal.m"
          {
#line 1240 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_48_48 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1240 "goal_expr_to_goal.m"
          {
#line 1240 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SymName_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_48_48));
#line 1240 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_47, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
#line 1240 "goal_expr_to_goal.m"
          }
#line 1241 "goal_expr_to_goal.m"
          {
#line 1241 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1241 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "goal_expr_to_goal.m"
          }
#line 1241 "goal_expr_to_goal.m"
          {
#line 1241 "goal_expr_to_goal.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_47, hlds__make_hlds__goal_expr_to_goal__V_49_49, hlds__make_hlds__goal_expr_to_goal__Context_19, &hlds__make_hlds__goal_expr_to_goal__V_32_32);
          }
#line 1208 "goal_expr_to_goal.m"
          {
#line 1208 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1208 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 1208 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_30_30, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_32_32));
#line 1208 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_30_30, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1208 "goal_expr_to_goal.m"
          }
#line 1211 "goal_expr_to_goal.m"
          {
#line 1211 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 1211 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_19));
#line 1211 "goal_expr_to_goal.m"
          }
#line 1212 "goal_expr_to_goal.m"
          {
#line 1212 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20));
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17));
#line 1212 "goal_expr_to_goal.m"
          }
#line 1212 "goal_expr_to_goal.m"
          {
#line 1212 "goal_expr_to_goal.m"
            MR_Word base;
#line 1212 "goal_expr_to_goal.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_35_35));
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_19));
#line 1212 "goal_expr_to_goal.m"
          }
#line 1203 "goal_expr_to_goal.m"
        }
#line 1193 "goal_expr_to_goal.m"
    else
#line 1193 "goal_expr_to_goal.m"
      {
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPattern_11;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstGoal_12;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__RestCatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 1)));
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_14;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 0)));
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_40_40;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_55;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_56_56;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_57_57;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_59_59;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_60_60;
#line 1193 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_63_63;

#line 1193 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstPattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_36_36, (MR_Integer) 0)));
#line 1193 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_36_36, (MR_Integer) 1)));
#line 1194 "goal_expr_to_goal.m"
        {
#line 1194 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7, hlds__make_hlds__goal_expr_to_goal__RestCatches_13, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, &hlds__make_hlds__goal_expr_to_goal__ElseGoal_14);
        }
#line 1228 "goal_expr_to_goal.m"
        {
#line 1228 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_57_57 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
        }
#line 1228 "goal_expr_to_goal.m"
        {
#line 1228 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_57_57));
#line 1228 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_56_56, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
#line 1228 "goal_expr_to_goal.m"
        }
#line 1229 "goal_expr_to_goal.m"
        {
#line 1229 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPattern_11));
#line 1229 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1229 "goal_expr_to_goal.m"
        }
#line 1229 "goal_expr_to_goal.m"
        {
#line 1229 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1229 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_60_60));
#line 1229 "goal_expr_to_goal.m"
        }
#line 1227 "goal_expr_to_goal.m"
        {
#line 1227 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1227 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_55, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_56_56));
#line 1227 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_55, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_59_59));
#line 1227 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_55, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1227 "goal_expr_to_goal.m"
        }
#line 1230 "goal_expr_to_goal.m"
        {
#line 1230 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_63_63 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1230 "goal_expr_to_goal.m"
        {
#line 1230 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_55));
#line 1230 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_63_63));
#line 1230 "goal_expr_to_goal.m"
        }
#line 1198 "goal_expr_to_goal.m"
        {
#line 1198 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 1198 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1198 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1198 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15));
#line 1198 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstGoal_12));
#line 1198 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_14));
#line 1198 "goal_expr_to_goal.m"
        }
#line 1199 "goal_expr_to_goal.m"
        {
#line 1199 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_40_40 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 1199 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_40_40));
#line 1199 "goal_expr_to_goal.m"
        }
#line 1193 "goal_expr_to_goal.m"
      }
#line 1193 "goal_expr_to_goal.m"
  }
#line 1187 "goal_expr_to_goal.m"
}

#line 1171 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1171 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1171 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12)
#line 1171 "goal_expr_to_goal.m"
{
#line 1176 "goal_expr_to_goal.m"
  {
#line 1176 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1176 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13;
#line 1176 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CatchChain_14;
#line 1176 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_15_15;
#line 1176 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_16_16;
#line 1176 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_19_19;
#line 1176 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_24;
#line 1176 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 1176 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_26_26;

#line 1240 "goal_expr_to_goal.m"
    {
#line 1240 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_25_25 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1240 "goal_expr_to_goal.m"
    {
#line 1240 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 1240 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_24, 1) = ((MR_Box) ((MR_String) "exception"));
#line 1240 "goal_expr_to_goal.m"
    }
#line 1241 "goal_expr_to_goal.m"
    {
#line 1241 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8));
#line 1241 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "goal_expr_to_goal.m"
    }
#line 1241 "goal_expr_to_goal.m"
    {
#line 1241 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_24, hlds__make_hlds__goal_expr_to_goal__V_26_26, hlds__make_hlds__goal_expr_to_goal__Context_11, &hlds__make_hlds__goal_expr_to_goal__V_16_16);
    }
#line 1178 "goal_expr_to_goal.m"
    {
#line 1178 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1178 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_15_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7));
#line 1178 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_15_15, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_16_16));
#line 1178 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_15_15, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1178 "goal_expr_to_goal.m"
    }
#line 1182 "goal_expr_to_goal.m"
    {
#line 1182 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_15_15));
#line 1182 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1182 "goal_expr_to_goal.m"
    }
#line 1183 "goal_expr_to_goal.m"
    {
#line 1183 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8, hlds__make_hlds__goal_expr_to_goal__Catches_9, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10, &hlds__make_hlds__goal_expr_to_goal__CatchChain_14);
    }
#line 1185 "goal_expr_to_goal.m"
    {
#line 1185 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13));
#line 1185 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchChain_14));
#line 1185 "goal_expr_to_goal.m"
    }
#line 1185 "goal_expr_to_goal.m"
    {
#line 1185 "goal_expr_to_goal.m"
      MR_Word base;
#line 1185 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1185 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_12 = base;
#line 1185 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_19_19));
#line 1185 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1185 "goal_expr_to_goal.m"
    }
#line 1176 "goal_expr_to_goal.m"
  }
#line 1171 "goal_expr_to_goal.m"
}

#line 1105 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_23,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_24,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_25,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_26,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_27,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61,
#line 1105 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62,
#line 1105 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63)
#line 1105 "goal_expr_to_goal.m"
{
#line 1115 "goal_expr_to_goal.m"
  {
#line 1115 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_37;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_38;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_42;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagic0_43;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_48;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_50;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_51;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_65_65;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_70_70;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_75_75;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_76_76;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_89_89;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_90_90;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_92_92;
#line 1115 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_99_99;

#line 1116 "goal_expr_to_goal.m"
    {
#line 1116 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_65_65);
    }
#line 1117 "goal_expr_to_goal.m"
    {
#line 1117 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_65_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66);
    }
#line 1119 "goal_expr_to_goal.m"
    {
#line 1119 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1119 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1119 "goal_expr_to_goal.m"
    }
#line 1120 "goal_expr_to_goal.m"
    {
#line 1120 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_38));
#line 1120 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1120 "goal_expr_to_goal.m"
    }
#line 1121 "goal_expr_to_goal.m"
    {
#line 1121 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[9]));
#line 1121 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1121 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1121 "goal_expr_to_goal.m"
    }
#line 1123 "goal_expr_to_goal.m"
    {
#line 1123 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_42);
    }
#line 1126 "goal_expr_to_goal.m"
    {
#line 1126 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_71_71 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
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
#line 1126 "goal_expr_to_goal.m"
    {
#line 1126 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1126 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_71_71));
#line 1126 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_70_70, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_72_72));
#line 1126 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_70_70, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1126 "goal_expr_to_goal.m"
    }
#line 1127 "goal_expr_to_goal.m"
    {
#line 1127 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagic0_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagic0_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_70_70));
#line 1127 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagic0_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1127 "goal_expr_to_goal.m"
    }
#line 1133 "goal_expr_to_goal.m"
    {
#line 1133 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_76_76 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, hlds__make_hlds__goal_expr_to_goal__Context_28);
    }
#line 1131 "goal_expr_to_goal.m"
    {
#line 1131 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1131 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1131 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_75_75, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_76_76));
#line 1131 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_75_75, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1131 "goal_expr_to_goal.m"
    }
#line 1135 "goal_expr_to_goal.m"
    {
#line 1135 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_75_75));
#line 1135 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1135 "goal_expr_to_goal.m"
    }
#line 1140 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1141 "goal_expr_to_goal.m"
      {
#line 1141 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_79_79;
#line 1141 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_80_80;
#line 1141 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_81_81;
#line 1141 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_83_83;
#line 1141 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_84_84;

#line 1144 "goal_expr_to_goal.m"
        {
#line 1144 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_81_81, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_23));
#line 1144 "goal_expr_to_goal.m"
        }
#line 1144 "goal_expr_to_goal.m"
        {
#line 1144 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_81_81));
#line 1144 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1144 "goal_expr_to_goal.m"
        }
#line 1145 "goal_expr_to_goal.m"
        {
#line 1145 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1145 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_24));
#line 1145 "goal_expr_to_goal.m"
        }
#line 1145 "goal_expr_to_goal.m"
        {
#line 1145 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_84_84));
#line 1145 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1145 "goal_expr_to_goal.m"
        }
#line 1143 "goal_expr_to_goal.m"
        {
#line 1143 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_80_80));
#line 1143 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_83_83));
#line 1143 "goal_expr_to_goal.m"
        }
#line 1146 "goal_expr_to_goal.m"
        {
#line 1146 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_79_79));
#line 1146 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1146 "goal_expr_to_goal.m"
        }
#line 1141 "goal_expr_to_goal.m"
      }
#line 1140 "goal_expr_to_goal.m"
    else
#line 1137 "goal_expr_to_goal.m"
      {
#line 1137 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Else0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeElse0_25, (MR_Integer) 0)));
#line 1137 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;

#line 1139 "goal_expr_to_goal.m"
        {
#line 1139 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_23));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_24));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Else0_45));
#line 1139 "goal_expr_to_goal.m"
        }
#line 1139 "goal_expr_to_goal.m"
        {
#line 1139 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1139 "goal_expr_to_goal.m"
        }
#line 1137 "goal_expr_to_goal.m"
      }
#line 1149 "goal_expr_to_goal.m"
    {
#line 1149 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44));
#line 1149 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46));
#line 1149 "goal_expr_to_goal.m"
    }
#line 1149 "goal_expr_to_goal.m"
    {
#line 1149 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_89_89));
#line 1149 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1149 "goal_expr_to_goal.m"
    }
#line 1152 "goal_expr_to_goal.m"
    {
#line 1152 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, hlds__make_hlds__goal_expr_to_goal__Catches0_26, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_27, hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_48);
    }
#line 1159 "goal_expr_to_goal.m"
    {
#line 1159 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1159 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_92_92, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47));
#line 1159 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_92_92, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_48));
#line 1159 "goal_expr_to_goal.m"
    }
#line 1162 "goal_expr_to_goal.m"
    {
#line 1162 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_92_92));
#line 1162 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1162 "goal_expr_to_goal.m"
    }
#line 1157 "goal_expr_to_goal.m"
    {
#line 1157 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagic0_43));
#line 1157 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
#line 1157 "goal_expr_to_goal.m"
    }
#line 1163 "goal_expr_to_goal.m"
    {
#line 1163 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_90_90));
#line 1163 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1163 "goal_expr_to_goal.m"
    }
#line 1164 "goal_expr_to_goal.m"
    {
#line 1164 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_22, hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49, hlds__make_hlds__goal_expr_to_goal__Renaming_29, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);
    }
#line 1168 "goal_expr_to_goal.m"
    {
#line 1168 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_99_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_99_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1168 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_99_99, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_50));
#line 1168 "goal_expr_to_goal.m"
    }
#line 1168 "goal_expr_to_goal.m"
    {
#line 1168 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1168 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_99_99));
#line 1168 "goal_expr_to_goal.m"
    }
#line 1169 "goal_expr_to_goal.m"
    {
#line 1169 "goal_expr_to_goal.m"
      MR_Word base;
#line 1169 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_30 = base;
#line 1169 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_51));
#line 1169 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_42));
#line 1169 "goal_expr_to_goal.m"
    }
#line 1115 "goal_expr_to_goal.m"
  }
#line 1105 "goal_expr_to_goal.m"
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_168_168 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagic0_45;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagic_46;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify_50;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOUnify_51;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal_53;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThen_56;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct_57;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_59;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct_60;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_63;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Disjunction_64;
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_88_88;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_91_91;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_92_92;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_93_93;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_94_94;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_95_95;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_96_96;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_97_97;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_99_99;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_100_100;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_101_101;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_104_104;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_105_105;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_106_106;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_107_107;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_108_108;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_109_109;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_110_110;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_114_114;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_115_115;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_117_117;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_126_126;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_127_127;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_128_128;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_129_129;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_130_130;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_131_131;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_132_132;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_134_134;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_135_135;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_136_136;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_137_137;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_140_140;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_141_141;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_142_142;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_143_143;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_144_144;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_145_145;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_146_146;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_147_147;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_151_151;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_152_152;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_156_156;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_157_157;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_158_158;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_163_163;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_164_164;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_166_166;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_167_167;

#line 977 "goal_expr_to_goal.m"
    {
#line 977 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_168_168, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81);
    }
#line 978 "goal_expr_to_goal.m"
    {
#line 978 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_168_168, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82);
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
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[9]));
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
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    }
#line 987 "goal_expr_to_goal.m"
    {
#line 987 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "goal_expr_to_goal.m"
    }
#line 987 "goal_expr_to_goal.m"
    {
#line 987 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_87_87));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_88_88));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 3) = ((MR_Box) ((MR_Integer) 0));
#line 987 "goal_expr_to_goal.m"
    }
#line 988 "goal_expr_to_goal.m"
    {
#line 988 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagic0_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagic0_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagic0_45, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 988 "goal_expr_to_goal.m"
    }
#line 989 "goal_expr_to_goal.m"
    {
#line 989 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__CallMagic0_45, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__CallMagic_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_91_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_92_92, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_93_93, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_94_94, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_95_95, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_96_96);
    }
#line 994 "goal_expr_to_goal.m"
    {
#line 994 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_93_93, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_97_97, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_91_91, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_96_96, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_99_99);
    }
#line 1003 "goal_expr_to_goal.m"
    {
#line 1003 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_101_101 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, hlds__make_hlds__goal_expr_to_goal__Context_30);
    }
#line 1001 "goal_expr_to_goal.m"
    {
#line 1001 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_100_100, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_101_101));
#line 1001 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_100_100, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1001 "goal_expr_to_goal.m"
    }
#line 1005 "goal_expr_to_goal.m"
    {
#line 1005 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_100_100));
#line 1005 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1005 "goal_expr_to_goal.m"
    }
#line 1006 "goal_expr_to_goal.m"
    {
#line 1006 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_92_92, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_97_97, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_94_94, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_107_107, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_95_95, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_99_99, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_109_109);
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_114_114, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_115_115));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1016 "goal_expr_to_goal.m"
    {
#line 1016 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
#line 1016 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_111_111, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1016 "goal_expr_to_goal.m"
    }
#line 1017 "goal_expr_to_goal.m"
    {
#line 1017 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1017 "goal_expr_to_goal.m"
    }
#line 1015 "goal_expr_to_goal.m"
    {
#line 1015 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_110_110, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_117_117));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_110_110, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1015 "goal_expr_to_goal.m"
    }
#line 1019 "goal_expr_to_goal.m"
    {
#line 1019 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOUnify_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_110_110));
#line 1019 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1019 "goal_expr_to_goal.m"
    }
#line 1020 "goal_expr_to_goal.m"
    {
#line 1020 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOUnify_51));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_26));
#line 1020 "goal_expr_to_goal.m"
    }
#line 1020 "goal_expr_to_goal.m"
    {
#line 1020 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_127_127));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1020 "goal_expr_to_goal.m"
    }
#line 1020 "goal_expr_to_goal.m"
    {
#line 1020 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_124_124, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_126_126));
#line 1020 "goal_expr_to_goal.m"
    }
#line 1020 "goal_expr_to_goal.m"
    {
#line 1020 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
#line 1020 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1020 "goal_expr_to_goal.m"
    }
#line 1021 "goal_expr_to_goal.m"
    {
#line 1021 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__ScopedGoal_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_104_104, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_128_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_105_105, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_129_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_106_106, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_130_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_107_107, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_131_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_108_108, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_132_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_109_109, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133);
    }
#line 1026 "goal_expr_to_goal.m"
    {
#line 1026 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_130_130, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_134_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_128_128, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_135_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_136_136);
    }
#line 1030 "goal_expr_to_goal.m"
    {
#line 1030 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_137_137, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_27));
#line 1030 "goal_expr_to_goal.m"
    }
#line 1030 "goal_expr_to_goal.m"
    {
#line 1030 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_137_137));
#line 1030 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1030 "goal_expr_to_goal.m"
    }
#line 1031 "goal_expr_to_goal.m"
    {
#line 1031 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__ScopedThen_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_135_135, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_129_129, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_140_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_134_134, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_141_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_131_131, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_142_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_132_132, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_136_136, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_144_144);
    }
#line 1041 "goal_expr_to_goal.m"
    {
#line 1041 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ScopedThen_56));
#line 1041 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1041 "goal_expr_to_goal.m"
    }
#line 1041 "goal_expr_to_goal.m"
    {
#line 1041 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ScopedGoal_53));
#line 1041 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_147_147));
#line 1041 "goal_expr_to_goal.m"
    }
#line 1041 "goal_expr_to_goal.m"
    {
#line 1041 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify_50));
#line 1041 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_145_145, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_146_146));
#line 1041 "goal_expr_to_goal.m"
    }
#line 1041 "goal_expr_to_goal.m"
    {
#line 1041 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_145_145, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct_57);
    }
#line 1048 "goal_expr_to_goal.m"
    {
#line 1048 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, hlds__make_hlds__goal_expr_to_goal__Catches0_28, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29, hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_59);
    }
#line 1050 "goal_expr_to_goal.m"
    {
#line 1050 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_59, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_140_140, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_151_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_141_141, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_152_152, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_142_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_144_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);
    }
#line 1058 "goal_expr_to_goal.m"
    {
#line 1058 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct_57));
#line 1058 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58));
#line 1058 "goal_expr_to_goal.m"
    }
#line 1060 "goal_expr_to_goal.m"
    {
#line 1060 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct_60));
#line 1060 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61));
#line 1060 "goal_expr_to_goal.m"
    }
#line 1062 "goal_expr_to_goal.m"
    {
#line 1062 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_158_158));
#line 1062 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1062 "goal_expr_to_goal.m"
    }
#line 1059 "goal_expr_to_goal.m"
    {
#line 1059 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_156_156));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_157_157));
#line 1059 "goal_expr_to_goal.m"
    }
#line 1063 "goal_expr_to_goal.m"
    {
#line 1063 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_152_152, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_151_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71);
    }
#line 1065 "goal_expr_to_goal.m"
    {
#line 1065 "goal_expr_to_goal.m"
      hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_63, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__Disjunction_64);
    }
#line 1068 "goal_expr_to_goal.m"
    {
#line 1068 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Disjunction_64));
#line 1068 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1068 "goal_expr_to_goal.m"
    }
#line 1068 "goal_expr_to_goal.m"
    {
#line 1068 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_163_163, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagic_46));
#line 1068 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_163_163, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_164_164));
#line 1068 "goal_expr_to_goal.m"
    }
#line 1068 "goal_expr_to_goal.m"
    {
#line 1068 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_163_163, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65);
    }
#line 1071 "goal_expr_to_goal.m"
    {
#line 1071 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47));
#line 1071 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54));
#line 1071 "goal_expr_to_goal.m"
    }
#line 1072 "goal_expr_to_goal.m"
    {
#line 1072 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_167_167, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVars_66));
#line 1072 "goal_expr_to_goal.m"
    }
#line 1072 "goal_expr_to_goal.m"
    {
#line 1072 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_166_166 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_166_166, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_167_167));
#line 1072 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_166_166, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 1072 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_166_166, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65));
#line 1072 "goal_expr_to_goal.m"
    }
#line 1072 "goal_expr_to_goal.m"
    {
#line 1072 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1072 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_166_166));
#line 1072 "goal_expr_to_goal.m"
    }
#line 1074 "goal_expr_to_goal.m"
    {
#line 1074 "goal_expr_to_goal.m"
      MR_Word base;
#line 1074 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_32 = base;
#line 1074 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_67));
#line 1074 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_44));
#line 1074 "goal_expr_to_goal.m"
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
          hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goal_35, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47, hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62);
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
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 912 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__A_28;
#line 912 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__B_29;
#line 900 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 900 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));

#line 900 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_45_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_45_45, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 900 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 900 "goal_expr_to_goal.m"
          {
#line 900 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__A_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_45_45, (MR_Integer) 1)));
#line 900 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__B_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_45_45, (MR_Integer) 2)));
#line 908 "goal_expr_to_goal.m"
            {
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_46_46;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_47_47;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_48_48;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_49_49;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_50_50;

#line 906 "goal_expr_to_goal.m"
              {
#line 906 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__B_29, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjStates0_20, &hlds__make_hlds__goal_expr_to_goal__DisjStates1_31, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_46_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_50_50);
              }
#line 909 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 909 "goal_expr_to_goal.m"
              {
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__A_28;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_46_46;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_47_47;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_48_48;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_49_49;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_50_50;

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
              hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal_18, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);
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

#line 862 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__RevParConj0_21,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__RevParConj_22,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44,
#line 862 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45,
#line 862 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46)
#line 862 "goal_expr_to_goal.m"
{
#line 878 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 878 "goal_expr_to_goal.m"
    {
#line 878 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 878 "goal_expr_to_goal.m"
      {
#line 878 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 878 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__A_29;
#line 878 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__B_30;
#line 871 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 871 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));

#line 871 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_47_47)) == (MR_mktag((MR_Integer) 2)));
#line 871 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 871 "goal_expr_to_goal.m"
          {
#line 871 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__A_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_47_47, (MR_Integer) 0)));
#line 871 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__B_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_47_47, (MR_Integer) 1)));
#line 874 "goal_expr_to_goal.m"
            {
#line 874 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__RevParConj1_32;
#line 874 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48;
#line 874 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49;
#line 874 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50;
#line 874 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51;
#line 874 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52;
#line 874 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53;

#line 872 "goal_expr_to_goal.m"
              {
#line 872 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__RevParConj0_21, &hlds__make_hlds__goal_expr_to_goal__RevParConj1_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53);
              }
#line 875 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 875 "goal_expr_to_goal.m"
              {
#line 875 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__B_30;
#line 875 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__RevParConj0__tmp_copy_21 = hlds__make_hlds__goal_expr_to_goal__RevParConj1_32;
#line 875 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48;
#line 875 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49;
#line 875 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50;
#line 875 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51;
#line 875 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52;
#line 875 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53;

#line 875 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_45;
#line 875 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_43;
#line 875 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_41;
#line 875 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_39;
#line 875 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_37;
#line 875 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_35;
#line 875 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__RevParConj0_21 = hlds__make_hlds__goal_expr_to_goal__RevParConj0__tmp_copy_21;
#line 875 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 875 "goal_expr_to_goal.m"
              }
#line 875 "goal_expr_to_goal.m"
              continue;
#line 874 "goal_expr_to_goal.m"
            }
#line 871 "goal_expr_to_goal.m"
          }
#line 871 "goal_expr_to_goal.m"
        else
#line 881 "goal_expr_to_goal.m"
          {
#line 881 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67;
#line 881 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__Goal1_33;
#line 881 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ParConjList_34;
#line 881 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_66_66;

#line 879 "goal_expr_to_goal.m"
            {
#line 879 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__Goal1_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46);
            }
#line 882 "goal_expr_to_goal.m"
            {
#line 882 "goal_expr_to_goal.m"
              hlds__hlds_goal__goal_to_par_conj_list_2_p_0(hlds__make_hlds__goal_expr_to_goal__Goal1_33, &hlds__make_hlds__goal_expr_to_goal__ParConjList_34);
            }
#line 3581 "hlds.make_hlds.goal_expr_to_goal.c"
            hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 883 "goal_expr_to_goal.m"
            {
#line 883 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__V_66_66 = mercury__list__reverse_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67, hlds__make_hlds__goal_expr_to_goal__ParConjList_34);
            }
#line 883 "goal_expr_to_goal.m"
            {
#line 883 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__RevParConj_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67, hlds__make_hlds__goal_expr_to_goal__V_66_66, hlds__make_hlds__goal_expr_to_goal__RevParConj0_21);
            }
#line 881 "goal_expr_to_goal.m"
          }
#line 878 "goal_expr_to_goal.m"
      }
#line 878 "goal_expr_to_goal.m"
      break;
#line 878 "goal_expr_to_goal.m"
    }
#line 862 "goal_expr_to_goal.m"
}

#line 836 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__RevConj0_21,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__RevConj_22,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44,
#line 836 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45,
#line 836 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46)
#line 836 "goal_expr_to_goal.m"
{
#line 850 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 850 "goal_expr_to_goal.m"
    {
#line 850 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 850 "goal_expr_to_goal.m"
      {
#line 850 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 850 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__A_29;
#line 850 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__B_30;
#line 845 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 845 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));

#line 845 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 845 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 845 "goal_expr_to_goal.m"
          {
#line 845 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__A_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_47_47, (MR_Integer) 0)));
#line 845 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__B_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_47_47, (MR_Integer) 1)));
#line 847 "goal_expr_to_goal.m"
            {
#line 847 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__RevConj1_32;
#line 847 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48;
#line 847 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49;
#line 847 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50;
#line 847 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51;
#line 847 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52;
#line 847 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53;

#line 846 "goal_expr_to_goal.m"
              {
#line 846 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__RevConj0_21, &hlds__make_hlds__goal_expr_to_goal__RevConj1_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53);
              }
#line 848 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 848 "goal_expr_to_goal.m"
              {
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__B_30;
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__RevConj0__tmp_copy_21 = hlds__make_hlds__goal_expr_to_goal__RevConj1_32;
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48;
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49;
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50;
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51;
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52;
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53;

#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_45;
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_43;
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_41;
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_39;
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_37;
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_35;
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__RevConj0_21 = hlds__make_hlds__goal_expr_to_goal__RevConj0__tmp_copy_21;
#line 848 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 848 "goal_expr_to_goal.m"
              }
#line 848 "goal_expr_to_goal.m"
              continue;
#line 847 "goal_expr_to_goal.m"
            }
#line 845 "goal_expr_to_goal.m"
          }
#line 845 "goal_expr_to_goal.m"
        else
#line 852 "goal_expr_to_goal.m"
          {
#line 852 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67;
#line 852 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__Goal1_33;
#line 852 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ConjList_34;
#line 852 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_66_66;

#line 851 "goal_expr_to_goal.m"
            {
#line 851 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__Goal1_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46);
            }
#line 853 "goal_expr_to_goal.m"
            {
#line 853 "goal_expr_to_goal.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__goal_expr_to_goal__Goal1_33, &hlds__make_hlds__goal_expr_to_goal__ConjList_34);
            }
#line 3762 "hlds.make_hlds.goal_expr_to_goal.c"
            hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 854 "goal_expr_to_goal.m"
            {
#line 854 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__V_66_66 = mercury__list__reverse_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67, hlds__make_hlds__goal_expr_to_goal__ConjList_34);
            }
#line 854 "goal_expr_to_goal.m"
            {
#line 854 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__RevConj_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67, hlds__make_hlds__goal_expr_to_goal__V_66_66, hlds__make_hlds__goal_expr_to_goal__RevConj0_21);
            }
#line 852 "goal_expr_to_goal.m"
          }
#line 850 "goal_expr_to_goal.m"
      }
#line 850 "goal_expr_to_goal.m"
      break;
#line 850 "goal_expr_to_goal.m"
    }
#line 836 "goal_expr_to_goal.m"
}

#line 748 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61,
#line 748 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62,
#line 748 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63)
#line 748 "goal_expr_to_goal.m"
{
#line 757 "goal_expr_to_goal.m"
  {
#line 757 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 757 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ArgVars_29;
#line 757 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64;
#line 757 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65;
#line 757 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;
#line 827 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVar_30;
#line 827 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVar_31;
#line 827 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVar_32;
#line 760 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_67_67;
#line 760 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_68_68;
#line 760 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 758 "goal_expr_to_goal.m"
    {
#line 758 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, &hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66);
    }
#line 760 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgVars_29)) == (MR_mktag((MR_Integer) 1)));
#line 760 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 760 "goal_expr_to_goal.m"
      {
#line 760 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 0)));
#line 760 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 1)));
#line 760 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 760 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 760 "goal_expr_to_goal.m"
          {
#line 760 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__TermInputVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_67_67, (MR_Integer) 0)));
#line 760 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_67_67, (MR_Integer) 1)));
#line 760 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 760 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 760 "goal_expr_to_goal.m"
              {
#line 760 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermOutputVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_68_68, (MR_Integer) 0)));
#line 760 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_68_68, (MR_Integer) 1)));
#line 760 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "goal_expr_to_goal.m"
              }
#line 760 "goal_expr_to_goal.m"
          }
#line 760 "goal_expr_to_goal.m"
      }
#line 827 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 794 "goal_expr_to_goal.m"
      if ((hlds__make_hlds__goal_expr_to_goal__AccessType_18 == (MR_Integer) 0))
#line 795 "goal_expr_to_goal.m"
        {
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_74_74;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_76_76;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77_77;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_85_85;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_88_88;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_89_89;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_90_90;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_134;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_136;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_138;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_143;
#line 795 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_144;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147;
#line 795 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_148;
#line 798 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___InnerSubContext_50;
#line 807 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_132;
#line 807 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_133;
#line 804 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TC_51;

#line 796 "goal_expr_to_goal.m"
          {
#line 796 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_30, hlds__make_hlds__goal_expr_to_goal__TermInputVar_31, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_32, &hlds__make_hlds__goal_expr_to_goal__Functor_134, &hlds__make_hlds__goal_expr_to_goal__V_72_72, &hlds__make_hlds__goal_expr_to_goal__Goal0_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_74_74, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78);
          }
#line 798 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_72_72, (MR_Integer) 0)));
#line 798 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal___InnerSubContext_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_72_72, (MR_Integer) 1)));
#line 802 "goal_expr_to_goal.m"
          {
#line 802 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 802 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_134));
#line 802 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "goal_expr_to_goal.m"
          }
#line 804 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 804 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 804 "goal_expr_to_goal.m"
            {
#line 804 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135, (MR_Integer) 1)));
#line 804 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135, (MR_Integer) 2)));
#line 804 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TC_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135, (MR_Integer) 3)));
#line 805 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_143 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_132;
#line 806 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_144 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_133;
#line 804 "goal_expr_to_goal.m"
            }
#line 804 "goal_expr_to_goal.m"
          else
#line 808 "goal_expr_to_goal.m"
            {
#line 808 "goal_expr_to_goal.m"
              {
#line 808 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 808 "goal_expr_to_goal.m"
                return;
              }
#line 808 "goal_expr_to_goal.m"
            }
#line 811 "goal_expr_to_goal.m"
          {
#line 811 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 811 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146, 0) = ((MR_Box) ((MR_Integer) 1));
#line 811 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_143));
#line 811 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_144));
#line 811 "goal_expr_to_goal.m"
          }
#line 812 "goal_expr_to_goal.m"
          {
#line 812 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 812 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146));
#line 812 "goal_expr_to_goal.m"
          }
#line 812 "goal_expr_to_goal.m"
          {
#line 812 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 812 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_138, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_85_85));
#line 812 "goal_expr_to_goal.m"
          }
#line 819 "goal_expr_to_goal.m"
          {
#line 819 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 819 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_88_88, 0) = ((MR_Box) ((MR_Integer) 2));
#line 819 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_138));
#line 819 "goal_expr_to_goal.m"
          }
#line 820 "goal_expr_to_goal.m"
          {
#line 820 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 820 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_90_90, 0) = ((MR_Box) ((MR_Integer) 1));
#line 820 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147));
#line 820 "goal_expr_to_goal.m"
          }
#line 822 "goal_expr_to_goal.m"
          {
#line 822 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_90_90));
#line 822 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "goal_expr_to_goal.m"
          }
#line 820 "goal_expr_to_goal.m"
          {
#line 820 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_90_90));
#line 820 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
#line 820 "goal_expr_to_goal.m"
          }
#line 819 "goal_expr_to_goal.m"
          {
#line 819 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_148, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_88_88));
#line 819 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_148, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_89_89));
#line 819 "goal_expr_to_goal.m"
          }
#line 823 "goal_expr_to_goal.m"
          {
#line 823 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_148, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__Goal0_136, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_74_74, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);
#line 823 "goal_expr_to_goal.m"
            return;
          }
#line 795 "goal_expr_to_goal.m"
        }
#line 794 "goal_expr_to_goal.m"
      else
#line 762 "goal_expr_to_goal.m"
        {
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_33;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_34;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_35;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_36;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_44;
#line 762 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_45;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_48;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_49;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_102_102;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_103_103;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_104_104;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_105_105;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_106_106;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_107_107;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_108_108;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_116_116;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_117_117;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_118_118;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_119_119;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_120_120;
#line 762 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_121_121;
#line 777 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_41;
#line 777 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_42;
#line 774 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TypeCtor_43;

#line 763 "goal_expr_to_goal.m"
          {
#line 763 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_30, hlds__make_hlds__goal_expr_to_goal__TermInputVar_31, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_32, &hlds__make_hlds__goal_expr_to_goal__Functor_33, &hlds__make_hlds__goal_expr_to_goal__V_102_102, &hlds__make_hlds__goal_expr_to_goal__Goal0_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_107_107, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_108_108);
          }
#line 765 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_102_102, (MR_Integer) 0)));
#line 765 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_102_102, (MR_Integer) 1)));
#line 770 "goal_expr_to_goal.m"
          {
#line 770 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 770 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_34));
#line 770 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_35));
#line 770 "goal_expr_to_goal.m"
          }
#line 773 "goal_expr_to_goal.m"
          {
#line 773 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 773 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_33));
#line 773 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "goal_expr_to_goal.m"
          }
#line 774 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Functor_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 774 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 774 "goal_expr_to_goal.m"
            {
#line 774 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_33, (MR_Integer) 1)));
#line 774 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_33, (MR_Integer) 2)));
#line 774 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TypeCtor_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_33, (MR_Integer) 3)));
#line 775 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_44 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_41;
#line 776 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_45 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_42;
#line 774 "goal_expr_to_goal.m"
            }
#line 774 "goal_expr_to_goal.m"
          else
#line 778 "goal_expr_to_goal.m"
            {
#line 778 "goal_expr_to_goal.m"
              {
#line 778 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 778 "goal_expr_to_goal.m"
                return;
              }
#line 778 "goal_expr_to_goal.m"
            }
#line 783 "goal_expr_to_goal.m"
          {
#line 783 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47, 0) = ((MR_Box) ((MR_Integer) 1));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_44));
#line 783 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_45));
#line 783 "goal_expr_to_goal.m"
          }
#line 784 "goal_expr_to_goal.m"
          {
#line 784 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 784 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47));
#line 784 "goal_expr_to_goal.m"
          }
#line 784 "goal_expr_to_goal.m"
          {
#line 784 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 784 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_48, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_116_116));
#line 784 "goal_expr_to_goal.m"
          }
#line 787 "goal_expr_to_goal.m"
          {
#line 787 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 787 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 0) = ((MR_Box) ((MR_Integer) 2));
#line 787 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38));
#line 787 "goal_expr_to_goal.m"
          }
#line 788 "goal_expr_to_goal.m"
          {
#line 788 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_119_119, 0) = ((MR_Box) ((MR_Integer) 1));
#line 788 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40));
#line 788 "goal_expr_to_goal.m"
          }
#line 789 "goal_expr_to_goal.m"
          {
#line 789 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_121_121, 0) = ((MR_Box) ((MR_Integer) 3));
#line 789 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_121_121, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_48));
#line 789 "goal_expr_to_goal.m"
          }
#line 790 "goal_expr_to_goal.m"
          {
#line 790 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_121_121));
#line 790 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "goal_expr_to_goal.m"
          }
#line 788 "goal_expr_to_goal.m"
          {
#line 788 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_119_119));
#line 788 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_118_118, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_120_120));
#line 788 "goal_expr_to_goal.m"
          }
#line 787 "goal_expr_to_goal.m"
          {
#line 787 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_117_117));
#line 787 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_118_118));
#line 787 "goal_expr_to_goal.m"
          }
#line 791 "goal_expr_to_goal.m"
          {
#line 791 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_49, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__Goal0_36, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_107_107, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_108_108, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);
#line 791 "goal_expr_to_goal.m"
            return;
          }
#line 762 "goal_expr_to_goal.m"
        }
#line 827 "goal_expr_to_goal.m"
    else
#line 828 "goal_expr_to_goal.m"
      {
#line 828 "goal_expr_to_goal.m"
        {
#line 828 "goal_expr_to_goal.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
#line 828 "goal_expr_to_goal.m"
          return;
        }
#line 828 "goal_expr_to_goal.m"
      }
#line 757 "goal_expr_to_goal.m"
  }
#line 748 "goal_expr_to_goal.m"
}

#line 692 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 692 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Operator_19,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 692 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 692 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58)
#line 692 "goal_expr_to_goal.m"
{
#line 702 "goal_expr_to_goal.m"
  {
#line 702 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 702 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;
#line 736 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_34;
#line 736 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_35;
#line 736 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_36;
#line 736 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_60_60;
#line 705 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 705 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 705 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_59_59;
#line 705 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_61_61;
#line 705 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_62_62;
#line 705 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32;
#line 705 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33;

#line 703 "goal_expr_to_goal.m"
    {
#line 703 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
    }
#line 705 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 705 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 705 "goal_expr_to_goal.m"
      {
#line 705 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__LHSTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 0)));
#line 705 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 1)));
#line 705 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 705 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 705 "goal_expr_to_goal.m"
          {
#line 705 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__RHSTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 0)));
#line 705 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 1)));
#line 705 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 705 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 705 "goal_expr_to_goal.m"
              {
#line 705 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 0)));
#line 705 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 1)));
#line 705 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 705 "goal_expr_to_goal.m"
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 705 "goal_expr_to_goal.m"
                  {
#line 705 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_61_61, (MR_Integer) 0)));
#line 705 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_61_61, (MR_Integer) 1)));
#line 705 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "goal_expr_to_goal.m"
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 711 "goal_expr_to_goal.m"
                      {
#line 711 "goal_expr_to_goal.m"
                        if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_19, (MR_String) ":=") == 0))
#line 712 "goal_expr_to_goal.m"
                          {
#line 712 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_63_63;
#line 712 "goal_expr_to_goal.m"
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_64_64;
#line 712 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_65_65;
#line 712 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_66_66;
#line 714 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_38_38;

#line 713 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AccessType_34 = (MR_Integer) 1;
#line 714 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm_30)) == (MR_mktag((MR_Integer) 0)));
#line 714 "goal_expr_to_goal.m"
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 714 "goal_expr_to_goal.m"
                              {
#line 714 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 0)));
#line 714 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 1)));
#line 714 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 2)));
#line 714 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_63_63)) == (MR_mktag((MR_Integer) 0)));
#line 714 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 714 "goal_expr_to_goal.m"
                                  {
#line 714 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, (MR_Integer) 0)));
#line 714 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_String) "^") == 0);
#line 712 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 712 "goal_expr_to_goal.m"
                                      {
#line 714 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 714 "goal_expr_to_goal.m"
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 714 "goal_expr_to_goal.m"
                                          {
#line 714 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_65_65, (MR_Integer) 0)));
#line 714 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_65_65, (MR_Integer) 1)));
#line 714 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "goal_expr_to_goal.m"
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 712 "goal_expr_to_goal.m"
                                              {
#line 716 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_36 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 716 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 712 "goal_expr_to_goal.m"
                                              }
#line 714 "goal_expr_to_goal.m"
                                          }
#line 712 "goal_expr_to_goal.m"
                                      }
#line 714 "goal_expr_to_goal.m"
                                  }
#line 714 "goal_expr_to_goal.m"
                              }
#line 712 "goal_expr_to_goal.m"
                          }
#line 711 "goal_expr_to_goal.m"
                        else
#line 707 "goal_expr_to_goal.m"
                          {
#line 708 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AccessType_34 = (MR_Integer) 0;
#line 709 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_35 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 710 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_36 = hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 707 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 707 "goal_expr_to_goal.m"
                          }
#line 711 "goal_expr_to_goal.m"
                      }
#line 705 "goal_expr_to_goal.m"
                  }
#line 705 "goal_expr_to_goal.m"
              }
#line 705 "goal_expr_to_goal.m"
          }
#line 705 "goal_expr_to_goal.m"
      }
#line 736 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 719 "goal_expr_to_goal.m"
      {
#line 719 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_39;
#line 719 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40;

#line 719 "goal_expr_to_goal.m"
        {
#line 719 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__ContextPieces_39 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(hlds__make_hlds__goal_expr_to_goal__AccessType_34);
        }
#line 720 "goal_expr_to_goal.m"
        {
#line 720 "goal_expr_to_goal.m"
          hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51, hlds__make_hlds__goal_expr_to_goal__ContextPieces_39, &hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40);
        }
#line 729 "goal_expr_to_goal.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40)) == (MR_mktag((MR_Integer) 0))))
#line 730 "goal_expr_to_goal.m"
          {
#line 730 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40, (MR_Integer) 0)));
#line 730 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_67_67;

#line 731 "goal_expr_to_goal.m"
            {
#line 731 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57);
            }
#line 732 "goal_expr_to_goal.m"
            {
#line 732 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);
            }
#line 734 "goal_expr_to_goal.m"
            {
#line 734 "goal_expr_to_goal.m"
              hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56);
            }
#line 734 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49;
#line 734 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53;
#line 730 "goal_expr_to_goal.m"
          }
#line 729 "goal_expr_to_goal.m"
        else
#line 723 "goal_expr_to_goal.m"
          {
#line 723 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40, (MR_Integer) 0)));
#line 723 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_42;
#line 723 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_77_77;

#line 724 "goal_expr_to_goal.m"
            {
#line 724 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__ArgTerms_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_36));
#line 724 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_42, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_60_60));
#line 724 "goal_expr_to_goal.m"
            }
#line 725 "goal_expr_to_goal.m"
            {
#line 725 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(hlds__make_hlds__goal_expr_to_goal__AccessType_34, hlds__make_hlds__goal_expr_to_goal__FieldNames_41, hlds__make_hlds__goal_expr_to_goal__ArgTerms_42, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_77_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);
            }
#line 728 "goal_expr_to_goal.m"
            {
#line 728 "goal_expr_to_goal.m"
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_77_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48);
#line 728 "goal_expr_to_goal.m"
              return;
            }
#line 723 "goal_expr_to_goal.m"
          }
#line 719 "goal_expr_to_goal.m"
      }
#line 736 "goal_expr_to_goal.m"
    else
#line 738 "goal_expr_to_goal.m"
      {
#line 738 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_45;
#line 738 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_46;
#line 738 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_87_87;
#line 738 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_106_106;

#line 737 "goal_expr_to_goal.m"
        {
#line 737 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_87_87);
        }
#line 739 "goal_expr_to_goal.m"
        {
#line 739 "goal_expr_to_goal.m"
          hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56);
        }
#line 743 "goal_expr_to_goal.m"
        {
#line 743 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Msg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 743 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_21));
#line 743 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34])));
#line 743 "goal_expr_to_goal.m"
        }
#line 744 "goal_expr_to_goal.m"
        {
#line 744 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_45));
#line 744 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 744 "goal_expr_to_goal.m"
        }
#line 744 "goal_expr_to_goal.m"
        {
#line 744 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 744 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 744 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 744 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_46, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_106_106));
#line 744 "goal_expr_to_goal.m"
        }
#line 745 "goal_expr_to_goal.m"
        {
#line 745 "goal_expr_to_goal.m"
          MR_Word base;
#line 745 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58 = base;
#line 745 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_46));
#line 745 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_87_87));
#line 745 "goal_expr_to_goal.m"
        }
#line 745 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53;
#line 745 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49;
#line 738 "goal_expr_to_goal.m"
      }
#line 702 "goal_expr_to_goal.m"
  }
#line 692 "goal_expr_to_goal.m"
}

#line 677 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(
#line 677 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_6,
#line 677 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_7,
#line 677 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_8,
#line 677 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 677 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15)
#line 677 "goal_expr_to_goal.m"
{
#line 680 "goal_expr_to_goal.m"
  {
#line 680 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 680 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__Name_10;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Pieces_11;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_12;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_13;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_18_18;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_19_19;
#line 680 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_20_20;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_22_22;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_27_27;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 680 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_32_32;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_34_34;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_38_38;
#line 680 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_39_39;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_45_45;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_46_46;
#line 680 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_50_50;

#line 681 "goal_expr_to_goal.m"
    {
#line 681 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__VarSet_7, hlds__make_hlds__goal_expr_to_goal__StateVar_8);
    }
#line 682 "goal_expr_to_goal.m"
    {
#line 682 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__goal_expr_to_goal__Name_10);
    }
#line 682 "goal_expr_to_goal.m"
    {
#line 682 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 682 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 682 "goal_expr_to_goal.m"
    }
#line 684 "goal_expr_to_goal.m"
    {
#line 684 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__goal_expr_to_goal__Name_10);
    }
#line 684 "goal_expr_to_goal.m"
    {
#line 684 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 684 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_32_32));
#line 684 "goal_expr_to_goal.m"
    }
#line 685 "goal_expr_to_goal.m"
    {
#line 685 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__goal_expr_to_goal__Name_10);
    }
#line 685 "goal_expr_to_goal.m"
    {
#line 685 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 685 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_39_39));
#line 685 "goal_expr_to_goal.m"
    }
#line 685 "goal_expr_to_goal.m"
    {
#line 685 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_38_38));
#line 685 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33])));
#line 685 "goal_expr_to_goal.m"
    }
#line 685 "goal_expr_to_goal.m"
    {
#line 685 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31])));
#line 685 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 685 "goal_expr_to_goal.m"
    }
#line 684 "goal_expr_to_goal.m"
    {
#line 684 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 684 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_34_34));
#line 684 "goal_expr_to_goal.m"
    }
#line 684 "goal_expr_to_goal.m"
    {
#line 684 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30])));
#line 684 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 684 "goal_expr_to_goal.m"
    }
#line 683 "goal_expr_to_goal.m"
    {
#line 683 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 683 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_27_27));
#line 683 "goal_expr_to_goal.m"
    }
#line 683 "goal_expr_to_goal.m"
    {
#line 683 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29])));
#line 683 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 683 "goal_expr_to_goal.m"
    }
#line 682 "goal_expr_to_goal.m"
    {
#line 682 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_19_19));
#line 682 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_22_22));
#line 682 "goal_expr_to_goal.m"
    }
#line 682 "goal_expr_to_goal.m"
    {
#line 682 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28])));
#line 682 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_18_18));
#line 682 "goal_expr_to_goal.m"
    }
#line 686 "goal_expr_to_goal.m"
    {
#line 686 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 686 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Pieces_11));
#line 686 "goal_expr_to_goal.m"
    }
#line 686 "goal_expr_to_goal.m"
    {
#line 686 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_46_46));
#line 686 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "goal_expr_to_goal.m"
    }
#line 686 "goal_expr_to_goal.m"
    {
#line 686 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_6));
#line 686 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_45_45));
#line 686 "goal_expr_to_goal.m"
    }
#line 687 "goal_expr_to_goal.m"
    {
#line 687 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_12));
#line 687 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "goal_expr_to_goal.m"
    }
#line 687 "goal_expr_to_goal.m"
    {
#line 687 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 687 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 687 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_50_50));
#line 687 "goal_expr_to_goal.m"
    }
#line 688 "goal_expr_to_goal.m"
    {
#line 688 "goal_expr_to_goal.m"
      MR_Word base;
#line 688 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15 = base;
#line 688 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_13));
#line 688 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14));
#line 688 "goal_expr_to_goal.m"
    }
#line 680 "goal_expr_to_goal.m"
  }
#line 677 "goal_expr_to_goal.m"
}

#line 664 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0_1(
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 664 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 664 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 664 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 664 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 664 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8)
#line 664 "goal_expr_to_goal.m"
{
#line 664 "goal_expr_to_goal.m"
  {
#line 664 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 664 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3;
#line 664 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5;
#line 664 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7;
#line 664 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9;

#line 664 "goal_expr_to_goal.m"
    {
#line 664 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3), &hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5), &hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7), &hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9);
    }
#line 664 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3));
#line 664 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5));
#line 664 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7));
#line 664 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9));
#line 664 "goal_expr_to_goal.m"
  }
#line 664 "goal_expr_to_goal.m"
}

#line 647 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_24,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_25,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_26,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_27,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_28,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_29,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_30,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_31,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_32,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_33,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GoalInfo_34,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_49,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_51,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_52,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_53,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_54,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_55,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_56,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_57,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_58,
#line 647 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_59,
#line 647 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_60)
#line 647 "goal_expr_to_goal.m"
{
#line 659 "goal_expr_to_goal.m"
  {
#line 659 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_41;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars1_42;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars1_43;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars1_44;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__OldStateVars_45;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_46;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NewStateVars_47;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_48;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_65_65;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_67_67;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_68_68;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_70_70;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_72_72;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_80_80;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_81_81;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_82_82;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_88_88;
#line 659 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_89_89;
#line 664 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_66_66;
#line 664 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_67_67;
#line 664 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_68_68;
#line 666 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_70_70;
#line 666 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_71_71;
#line 666 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_72_72;
#line 671 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_80_80;
#line 671 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_81_81;
#line 671 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_82_82;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_54;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_50;
#line 673 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_60;

#line 660 "goal_expr_to_goal.m"
    {
#line 660 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__Vars0_25, &hlds__make_hlds__goal_expr_to_goal__Vars_41);
    }
#line 661 "goal_expr_to_goal.m"
    {
#line 661 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__StateVars0_26, &hlds__make_hlds__goal_expr_to_goal__StateVars1_42);
    }
#line 662 "goal_expr_to_goal.m"
    {
#line 662 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__DotSVars0_27, &hlds__make_hlds__goal_expr_to_goal__DotSVars1_43);
    }
#line 663 "goal_expr_to_goal.m"
    {
#line 663 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_28, &hlds__make_hlds__goal_expr_to_goal__ColonSVars1_44);
    }
#line 664 "goal_expr_to_goal.m"
    {
#line 664 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 664 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
#line 664 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0_1));
#line 664 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 664 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_29));
#line 664 "goal_expr_to_goal.m"
    }
#line 5189 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0];
#line 5191 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2];
#line 5193 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
#line 5195 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3];
#line 664 "goal_expr_to_goal.m"
    {
#line 664 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102, hlds__make_hlds__goal_expr_to_goal__V_65_65, hlds__make_hlds__goal_expr_to_goal__StateVars1_42, &hlds__make_hlds__goal_expr_to_goal__OldStateVars_45, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_53)), &hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_66_66, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_49)), &hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_67_67, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_59)), &hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_68_68);
    }
#line 664 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_66_66);
#line 664 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_67_67 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_67_67);
#line 664 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_68_68 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_68_68);
#line 666 "goal_expr_to_goal.m"
    {
#line 666 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102, hlds__make_hlds__goal_expr_to_goal__V_65_65, hlds__make_hlds__goal_expr_to_goal__DotSVars1_43, &hlds__make_hlds__goal_expr_to_goal__DotSVars_46, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66)), &hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_70_70, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_67_67)), &hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_71_71, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_68_68)), &hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_72_72);
    }
#line 666 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_70_70 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_70_70);
#line 666 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_71_71);
#line 666 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_72_72 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_72_72);
#line 668 "goal_expr_to_goal.m"
    {
#line 668 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_24, hlds__make_hlds__goal_expr_to_goal__Goal0_32, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__Goal_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_70_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_72_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78);
    }
#line 670 "goal_expr_to_goal.m"
    {
#line 670 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_1_p_0(hlds__make_hlds__goal_expr_to_goal__GoalInfo_34);
    }
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102, hlds__make_hlds__goal_expr_to_goal__V_65_65, hlds__make_hlds__goal_expr_to_goal__StateVars1_42, &hlds__make_hlds__goal_expr_to_goal__NewStateVars_47, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75)), &hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_80_80, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73)), &hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_81_81, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78)), &hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_82_82);
    }
#line 671 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_80_80 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_80_80);
#line 671 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_81_81 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_81_81);
#line 671 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_82_82 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_82_82);
#line 673 "goal_expr_to_goal.m"
    {
#line 673 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102, hlds__make_hlds__goal_expr_to_goal__V_65_65, hlds__make_hlds__goal_expr_to_goal__ColonSVars1_44, &hlds__make_hlds__goal_expr_to_goal__ColonSVars_48, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_80_80)), &hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_54, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_81_81)), &hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_50, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_82_82)), &hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_60);
    }
#line 673 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_54 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_54);
#line 673 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_50);
#line 673 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_60 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_60);
#line 675 "goal_expr_to_goal.m"
    {
#line 675 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_89_89 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__DotSVars_46, hlds__make_hlds__goal_expr_to_goal__ColonSVars_48);
    }
#line 675 "goal_expr_to_goal.m"
    {
#line 675 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_88_88 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__NewStateVars_47, hlds__make_hlds__goal_expr_to_goal__V_89_89);
    }
#line 675 "goal_expr_to_goal.m"
    {
#line 675 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__OldStateVars_45, hlds__make_hlds__goal_expr_to_goal__V_88_88);
    }
#line 675 "goal_expr_to_goal.m"
    {
#line 675 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__QuantVars_31 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__Vars_41, hlds__make_hlds__goal_expr_to_goal__V_87_87);
    }
#line 659 "goal_expr_to_goal.m"
  }
#line 647 "goal_expr_to_goal.m"
}

#line 633 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(
#line 633 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_5,
#line 633 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_6,
#line 633 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_7,
#line 633 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_8)
#line 633 "goal_expr_to_goal.m"
{
#line 636 "goal_expr_to_goal.m"
  {
#line 636 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IO_9;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_10;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_11;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_12;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_13;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_20_20;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 636 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32;

#line 637 "goal_expr_to_goal.m"
    {
#line 637 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IO_9 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 638 "goal_expr_to_goal.m"
    {
#line 638 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_10, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_9));
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_10, 1) = ((MR_Box) ((MR_String) "unsafe_get_io_state"));
#line 638 "goal_expr_to_goal.m"
    }
#line 639 "goal_expr_to_goal.m"
    {
#line 639 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_9));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_11, 1) = ((MR_Box) ((MR_String) "unsafe_set_io_state"));
#line 639 "goal_expr_to_goal.m"
    }
#line 640 "goal_expr_to_goal.m"
    {
#line 640 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_6));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 640 "goal_expr_to_goal.m"
    }
#line 640 "goal_expr_to_goal.m"
    {
#line 640 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "goal_expr_to_goal.m"
    }
#line 640 "goal_expr_to_goal.m"
    {
#line 640 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 640 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 640 "goal_expr_to_goal.m"
    }
#line 641 "goal_expr_to_goal.m"
    {
#line 641 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 641 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
#line 641 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 641 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 641 "goal_expr_to_goal.m"
    }
#line 644 "goal_expr_to_goal.m"
    {
#line 644 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_12));
#line 644 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "goal_expr_to_goal.m"
    }
#line 644 "goal_expr_to_goal.m"
    {
#line 644 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 644 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 644 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_10));
#line 644 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_28_28, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 644 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_28_28, 3) = ((MR_Box) ((MR_Integer) 1));
#line 644 "goal_expr_to_goal.m"
    }
#line 644 "goal_expr_to_goal.m"
    {
#line 644 "goal_expr_to_goal.m"
      MR_Word base;
#line 644 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_7 = base;
#line 644 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 644 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 644 "goal_expr_to_goal.m"
    }
#line 645 "goal_expr_to_goal.m"
    {
#line 645 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_13));
#line 645 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "goal_expr_to_goal.m"
    }
#line 645 "goal_expr_to_goal.m"
    {
#line 645 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 645 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 645 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_11));
#line 645 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_31_31, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_32_32));
#line 645 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_31_31, 3) = ((MR_Box) ((MR_Integer) 2));
#line 645 "goal_expr_to_goal.m"
    }
#line 645 "goal_expr_to_goal.m"
    {
#line 645 "goal_expr_to_goal.m"
      MR_Word base;
#line 645 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_8 = base;
#line 645 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 645 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 645 "goal_expr_to_goal.m"
    }
#line 636 "goal_expr_to_goal.m"
  }
#line 633 "goal_expr_to_goal.m"
}

#line 615 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(
#line 615 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_8,
#line 615 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_9,
#line 615 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_10,
#line 615 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11,
#line 615 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_12,
#line 615 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_13,
#line 615 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_14)
#line 615 "goal_expr_to_goal.m"
{
#line 620 "goal_expr_to_goal.m"
  {
#line 620 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 620 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__MutableName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_10, (MR_Integer) 0)));
#line 620 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__StateVarName_16;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_17;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_18;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_19;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_20;
#line 620 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 620 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_38_38;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_40_40;
#line 620 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_41_41;

#line 621 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__StateVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_10, (MR_Integer) 1)));
#line 622 "goal_expr_to_goal.m"
    {
#line 622 "goal_expr_to_goal.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__VarSet_9, *hlds__make_hlds__goal_expr_to_goal__StateVar_12, &hlds__make_hlds__goal_expr_to_goal__StateVarName_16);
    }
#line 623 "goal_expr_to_goal.m"
    {
#line 623 "goal_expr_to_goal.m"
      MR_Word base;
#line 623 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11 = base;
#line 623 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableName_15));
#line 623 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarName_16));
#line 623 "goal_expr_to_goal.m"
    }
#line 624 "goal_expr_to_goal.m"
    {
#line 624 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "get_", hlds__make_hlds__goal_expr_to_goal__MutableName_15);
    }
#line 624 "goal_expr_to_goal.m"
    {
#line 624 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 624 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetPredName_17, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 624 "goal_expr_to_goal.m"
    }
#line 625 "goal_expr_to_goal.m"
    {
#line 625 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "set_", hlds__make_hlds__goal_expr_to_goal__MutableName_15);
    }
#line 625 "goal_expr_to_goal.m"
    {
#line 625 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetPredName_18, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 625 "goal_expr_to_goal.m"
    }
#line 626 "goal_expr_to_goal.m"
    {
#line 626 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (*hlds__make_hlds__goal_expr_to_goal__StateVar_12));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 626 "goal_expr_to_goal.m"
    }
#line 626 "goal_expr_to_goal.m"
    {
#line 626 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "goal_expr_to_goal.m"
    }
#line 626 "goal_expr_to_goal.m"
    {
#line 626 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 626 "goal_expr_to_goal.m"
    }
#line 627 "goal_expr_to_goal.m"
    {
#line 627 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 627 "goal_expr_to_goal.m"
    }
#line 630 "goal_expr_to_goal.m"
    {
#line 630 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_19));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "goal_expr_to_goal.m"
    }
#line 630 "goal_expr_to_goal.m"
    {
#line 630 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_17));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_38_38));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 3) = ((MR_Box) ((MR_Integer) 1));
#line 630 "goal_expr_to_goal.m"
    }
#line 630 "goal_expr_to_goal.m"
    {
#line 630 "goal_expr_to_goal.m"
      MR_Word base;
#line 630 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_13 = base;
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 630 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 630 "goal_expr_to_goal.m"
    }
#line 631 "goal_expr_to_goal.m"
    {
#line 631 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_20));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "goal_expr_to_goal.m"
    }
#line 631 "goal_expr_to_goal.m"
    {
#line 631 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_18));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_40_40, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_41_41));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_40_40, 3) = ((MR_Box) ((MR_Integer) 2));
#line 631 "goal_expr_to_goal.m"
    }
#line 631 "goal_expr_to_goal.m"
    {
#line 631 "goal_expr_to_goal.m"
      MR_Word base;
#line 631 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_14 = base;
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_40_40));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 631 "goal_expr_to_goal.m"
    }
#line 620 "goal_expr_to_goal.m"
  }
#line 615 "goal_expr_to_goal.m"
}

#line 321 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0_1(
#line 321 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 321 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 321 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 321 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 321 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 321 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5)
#line 321 "goal_expr_to_goal.m"
{
#line 321 "goal_expr_to_goal.m"
  {
#line 321 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 321 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11;
#line 321 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12;
#line 321 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13;
#line 321 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14;

#line 321 "goal_expr_to_goal.m"
    {
#line 321 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11, &hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12, &hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13, &hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14);
    }
#line 321 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11));
#line 321 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12));
#line 321 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13));
#line 321 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14));
#line 321 "goal_expr_to_goal.m"
  }
#line 321 "goal_expr_to_goal.m"
}

#line 102 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Expr_19,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_20,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_21,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206,
#line 102 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207,
#line 102 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208)
#line 102 "goal_expr_to_goal.m"
{
#line 118 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 118 "goal_expr_to_goal.m"
    {
#line 118 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 118 "goal_expr_to_goal.m"
      {
#line 118 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 118 "goal_expr_to_goal.m"
        if ((hlds__make_hlds__goal_expr_to_goal__Expr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 118 "goal_expr_to_goal.m"
          {
#line 118 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_30;

#line 119 "goal_expr_to_goal.m"
            {
#line 119 "goal_expr_to_goal.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_30);
            }
#line 120 "goal_expr_to_goal.m"
            {
#line 120 "goal_expr_to_goal.m"
              MR_Word base;
#line 120 "goal_expr_to_goal.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 120 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 120 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26])));
#line 120 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_30));
#line 120 "goal_expr_to_goal.m"
            }
#line 120 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 120 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 120 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 120 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 120 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 120 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207;
#line 118 "goal_expr_to_goal.m"
          }
#line 118 "goal_expr_to_goal.m"
        else
#line 118 "goal_expr_to_goal.m"
          if ((hlds__make_hlds__goal_expr_to_goal__Expr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 118 "goal_expr_to_goal.m"
            {
#line 118 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_797;

#line 119 "goal_expr_to_goal.m"
              {
#line 119 "goal_expr_to_goal.m"
                hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_797);
              }
#line 120 "goal_expr_to_goal.m"
              {
#line 120 "goal_expr_to_goal.m"
                MR_Word base;
#line 120 "goal_expr_to_goal.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 120 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 120 "goal_expr_to_goal.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1])));
#line 120 "goal_expr_to_goal.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_797));
#line 120 "goal_expr_to_goal.m"
              }
#line 120 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 120 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 120 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 120 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 120 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 120 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207;
#line 118 "goal_expr_to_goal.m"
            }
#line 118 "goal_expr_to_goal.m"
          else
#line 118 "goal_expr_to_goal.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 1))))
#line 423 "goal_expr_to_goal.m"
              {
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__A0_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)));
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__B0_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__R0_139;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__R_140;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__L_141;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_376_376;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_377_377;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_378_378;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_379_379;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_380_380;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_381_381;
#line 423 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_693;

#line 424 "goal_expr_to_goal.m"
                {
#line 424 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A0_137, hlds__make_hlds__goal_expr_to_goal__Renaming_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__R0_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_376_376, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_377_377, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_378_378, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_379_379, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_380_380, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_381_381);
                }
#line 426 "goal_expr_to_goal.m"
                {
#line 426 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__B0_138, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__R0_139, &hlds__make_hlds__goal_expr_to_goal__R_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_376_376, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_377_377, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_378_378, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_379_379, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_380_380, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_381_381, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                }
#line 428 "goal_expr_to_goal.m"
                {
#line 428 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__L_141 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__R_140);
                }
#line 429 "goal_expr_to_goal.m"
                {
#line 429 "goal_expr_to_goal.m"
                  hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_693);
                }
#line 430 "goal_expr_to_goal.m"
                {
#line 430 "goal_expr_to_goal.m"
                  hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__L_141, hlds__make_hlds__goal_expr_to_goal__GoalInfo_693, hlds__make_hlds__goal_expr_to_goal__Goal_22);
#line 430 "goal_expr_to_goal.m"
                  return;
                }
#line 423 "goal_expr_to_goal.m"
              }
#line 118 "goal_expr_to_goal.m"
            else
#line 118 "goal_expr_to_goal.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 2))))
#line 432 "goal_expr_to_goal.m"
                {
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_363_363;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_366_366;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_367_367;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_368_368;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_694;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__A0_695 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)));
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__B0_696 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__R0_697;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__R_698;
#line 432 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__L_699;

#line 433 "goal_expr_to_goal.m"
                  {
#line 433 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A0_695, hlds__make_hlds__goal_expr_to_goal__Renaming_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__R0_697, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_366_366, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_367_367, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_368_368);
                  }
#line 435 "goal_expr_to_goal.m"
                  {
#line 435 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__B0_696, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__R0_697, &hlds__make_hlds__goal_expr_to_goal__R_698, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_366_366, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_367_367, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_368_368, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                  }
#line 437 "goal_expr_to_goal.m"
                  {
#line 437 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__L_699 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__R_698);
                  }
#line 438 "goal_expr_to_goal.m"
                  {
#line 438 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_694);
                  }
#line 439 "goal_expr_to_goal.m"
                  {
#line 439 "goal_expr_to_goal.m"
                    hlds__hlds_goal__par_conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__L_699, hlds__make_hlds__goal_expr_to_goal__GoalInfo_694, hlds__make_hlds__goal_expr_to_goal__Goal_22);
#line 439 "goal_expr_to_goal.m"
                    return;
                  }
#line 432 "goal_expr_to_goal.m"
                }
#line 118 "goal_expr_to_goal.m"
              else
#line 118 "goal_expr_to_goal.m"
                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 131 "goal_expr_to_goal.m"
                  {
#line 131 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 131 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 131 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33;
#line 131 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_592_592;
#line 131 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_593_593;
#line 131 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_594_594;
#line 131 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_595_595;

#line 126 "goal_expr_to_goal.m"
                    {
#line 126 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_595_595 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 126 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_32));
#line 126 "goal_expr_to_goal.m"
                    }
#line 126 "goal_expr_to_goal.m"
                    {
#line 126 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_594_594 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 126 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_594_594, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_595_595));
#line 126 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_594_594, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 126 "goal_expr_to_goal.m"
                    }
#line 125 "goal_expr_to_goal.m"
                    {
#line 125 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_593_593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 125 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 125 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars0_31));
#line 125 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_594_594));
#line 125 "goal_expr_to_goal.m"
                    }
#line 126 "goal_expr_to_goal.m"
                    {
#line 126 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_592_592 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 126 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_592_592, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_593_593));
#line 126 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_592_592, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 126 "goal_expr_to_goal.m"
                    }
#line 125 "goal_expr_to_goal.m"
                    {
#line 125 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 125 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_592_592));
#line 125 "goal_expr_to_goal.m"
                    }
#line 132 "goal_expr_to_goal.m"
                    /* direct tailcall eliminated */
#line 132 "goal_expr_to_goal.m"
                    {
#line 132 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33;

#line 132 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__Expr_19 = hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19;
#line 132 "goal_expr_to_goal.m"
                    }
#line 132 "goal_expr_to_goal.m"
                    continue;
#line 131 "goal_expr_to_goal.m"
                  }
#line 118 "goal_expr_to_goal.m"
                else
#line 118 "goal_expr_to_goal.m"
                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 131 "goal_expr_to_goal.m"
                    {
#line 131 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 131 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_588_588;
#line 131 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_589_589;
#line 131 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_590_590;
#line 131 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_591_591;
#line 131 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_605 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 131 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_795;

#line 130 "goal_expr_to_goal.m"
                      {
#line 130 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_591_591 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_591_591, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 130 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_591_591, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_605));
#line 130 "goal_expr_to_goal.m"
                      }
#line 130 "goal_expr_to_goal.m"
                      {
#line 130 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_590_590 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 130 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_590_590, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_591_591));
#line 130 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_590_590, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 130 "goal_expr_to_goal.m"
                      }
#line 129 "goal_expr_to_goal.m"
                      {
#line 129 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_589_589 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 129 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_589_589, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 129 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_589_589, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVars_34));
#line 129 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_589_589, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_590_590));
#line 129 "goal_expr_to_goal.m"
                      }
#line 130 "goal_expr_to_goal.m"
                      {
#line 130 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_588_588 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 130 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_588_588, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_589_589));
#line 130 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_588_588, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 130 "goal_expr_to_goal.m"
                      }
#line 129 "goal_expr_to_goal.m"
                      {
#line 129 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__TransformedExpr_795 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_795, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 129 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_795, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_588_588));
#line 129 "goal_expr_to_goal.m"
                      }
#line 132 "goal_expr_to_goal.m"
                      /* direct tailcall eliminated */
#line 132 "goal_expr_to_goal.m"
                      {
#line 132 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__TransformedExpr_795;

#line 132 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__Expr_19 = hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19;
#line 132 "goal_expr_to_goal.m"
                      }
#line 132 "goal_expr_to_goal.m"
                      continue;
#line 131 "goal_expr_to_goal.m"
                    }
#line 118 "goal_expr_to_goal.m"
                  else
#line 118 "goal_expr_to_goal.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 228 "goal_expr_to_goal.m"
                      {
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Outer0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Inner0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__MainExpr_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56;
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Outer_65;
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80;
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_81;
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_82;
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Inner_87;
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_91;
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_664;
#line 228 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_665;

#line 232 "goal_expr_to_goal.m"
                        if ((hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 232 "goal_expr_to_goal.m"
                        else
#line 233 "goal_expr_to_goal.m"
                          {
#line 233 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_53, (MR_Integer) 0)));
#line 233 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars_58;

#line 234 "goal_expr_to_goal.m"
                            {
#line 234 "goal_expr_to_goal.m"
                              parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__OutputVars0_57, &hlds__make_hlds__goal_expr_to_goal__OutputVars_58);
                            }
#line 236 "goal_expr_to_goal.m"
                            {
#line 236 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputVars_58));
#line 236 "goal_expr_to_goal.m"
                            }
#line 233 "goal_expr_to_goal.m"
                          }
#line 6229 "hlds.make_hlds.goal_expr_to_goal.c"
                        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Outer0_51)) == (MR_mktag((MR_Integer) 0))))
#line 6231 "hlds.make_hlds.goal_expr_to_goal.c"
                          {
#line 6233 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer0_51, (MR_Integer) 0)));
#line 6235 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar_60;
#line 6237 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_61;
#line 6239 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_62;
#line 6241 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_90;
#line 6243 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_478_478;
#line 6245 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_479_479;
#line 6247 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_480_480;
#line 6249 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_506_506;

#line 240 "goal_expr_to_goal.m"
                            {
#line 240 "goal_expr_to_goal.m"
                              parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_59, &hlds__make_hlds__goal_expr_to_goal__OuterStateVar_60);
                            }
#line 242 "goal_expr_to_goal.m"
                            {
#line 242 "goal_expr_to_goal.m"
                              hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__OuterStateVar_60, &hlds__make_hlds__goal_expr_to_goal__OuterDI_61, &hlds__make_hlds__goal_expr_to_goal__OuterUO_62, &hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_478_478, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_479_479, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_480_480);
                            }
#line 245 "goal_expr_to_goal.m"
                            {
#line 245 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__Outer_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_65, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_61));
#line 245 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_65, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_62));
#line 245 "goal_expr_to_goal.m"
                            }
#line 6272 "hlds.make_hlds.goal_expr_to_goal.c"
                            if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_52)) == (MR_mktag((MR_Integer) 0))))
#line 6274 "hlds.make_hlds.goal_expr_to_goal.c"
                              {
#line 6276 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 0)));
#line 6278 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_69;
#line 6280 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74;
#line 6282 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_75;
#line 6284 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_76;
#line 6286 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_77;
#line 6288 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_78;
#line 6290 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79;
#line 6292 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_84;
#line 6294 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_85;
#line 6296 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_86;
#line 6298 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_483_483;
#line 6300 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_484_484;
#line 6302 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_485;
#line 6304 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486;
#line 6306 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_487;
#line 6308 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_488;
#line 6310 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_489;
#line 6312 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_490;
#line 6314 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_491;
#line 6316 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_494;
#line 6318 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_495_495;
#line 6320 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_496_496;

#line 255 "goal_expr_to_goal.m"
                                {
#line 255 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_68, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_69);
                                }
#line 257 "goal_expr_to_goal.m"
                                {
#line 257 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_69, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_84, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_478_478, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_479_479, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_483_483, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_480_480, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_484_484);
                                }
#line 265 "goal_expr_to_goal.m"
                                {
#line 265 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__MainExpr_54, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_75, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_483_483, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_487, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_488, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_484_484, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_489);
                                }
#line 268 "goal_expr_to_goal.m"
                                {
#line 268 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__MainDisjState_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_77, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_75));
#line 268 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_77, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_76));
#line 268 "goal_expr_to_goal.m"
                                }
#line 270 "goal_expr_to_goal.m"
                                {
#line 270 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_78, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_485, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_490, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_491, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_487, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_488, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_489, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_494);
                                }
#line 273 "goal_expr_to_goal.m"
                                {
#line 273 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_77));
#line 273 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_78));
#line 273 "goal_expr_to_goal.m"
                                }
#line 274 "goal_expr_to_goal.m"
                                {
#line 274 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_491, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_495_495, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_496_496, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_490, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                                }
#line 286 "goal_expr_to_goal.m"
                                {
#line 286 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_84, &hlds__make_hlds__goal_expr_to_goal__InnerDI_85, &hlds__make_hlds__goal_expr_to_goal__InnerUO_86, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_496_496, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_506_506, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 288 "goal_expr_to_goal.m"
                                {
#line 288 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Inner_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_85));
#line 288 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_86));
#line 288 "goal_expr_to_goal.m"
                                }
#line 6383 "hlds.make_hlds.goal_expr_to_goal.c"
                              }
#line 6385 "hlds.make_hlds.goal_expr_to_goal.c"
                            else
#line 6387 "hlds.make_hlds.goal_expr_to_goal.c"
                              {
#line 6389 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_772_772;
#line 6391 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_88;
#line 6393 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_89;
#line 6395 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_662;
#line 6397 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_663;
#line 6399 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_887;
#line 6401 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_888;
#line 6403 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_889;
#line 6405 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_890;
#line 6407 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_891;
#line 6409 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_894;
#line 6411 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_895;
#line 6413 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_896;
#line 6415 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_897;
#line 6417 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_898;
#line 6419 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_899;
#line 6421 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_900;

#line 265 "goal_expr_to_goal.m"
                                {
#line 265 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__MainExpr_54, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_887, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_478_478, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_888, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_894, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_479_479, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_895, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_896, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_897, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_480_480, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_898);
                                }
#line 268 "goal_expr_to_goal.m"
                                {
#line 268 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__MainDisjState_889 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_889, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_887));
#line 268 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_889, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_888));
#line 268 "goal_expr_to_goal.m"
                                }
#line 270 "goal_expr_to_goal.m"
                                {
#line 270 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_890, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_478_478, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_894, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_899, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_895, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_896, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_897, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_898, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 273 "goal_expr_to_goal.m"
                                {
#line 273 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AllDisjStates_891 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_891, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_889));
#line 273 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_891, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_890));
#line 273 "goal_expr_to_goal.m"
                                }
#line 274 "goal_expr_to_goal.m"
                                {
#line 274 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_891, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_478_478, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_506_506, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_899, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                                }
#line 294 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__InnerDI0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 0)));
#line 294 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__InnerUO0_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 1)));
#line 6463 "hlds.make_hlds.goal_expr_to_goal.c"
                                hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_772_772 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 295 "goal_expr_to_goal.m"
                                {
#line 295 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_772_772, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerDI0_88, &hlds__make_hlds__goal_expr_to_goal__InnerDI_662);
                                }
#line 296 "goal_expr_to_goal.m"
                                {
#line 296 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_772_772, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerUO0_89, &hlds__make_hlds__goal_expr_to_goal__InnerUO_663);
                                }
#line 297 "goal_expr_to_goal.m"
                                {
#line 297 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Inner_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_662));
#line 297 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_663));
#line 297 "goal_expr_to_goal.m"
                                }
#line 6485 "hlds.make_hlds.goal_expr_to_goal.c"
                              }
#line 301 "goal_expr_to_goal.m"
                            {
#line 301 "goal_expr_to_goal.m"
                              hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_506_506, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
                            }
#line 6492 "hlds.make_hlds.goal_expr_to_goal.c"
                          }
#line 6494 "hlds.make_hlds.goal_expr_to_goal.c"
                        else
#line 6496 "hlds.make_hlds.goal_expr_to_goal.c"
                          {
#line 6498 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_770_770 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 6500 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_51, (MR_Integer) 0)));
#line 6502 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_51, (MR_Integer) 1)));
#line 6504 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_660;
#line 6506 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_661;

#line 248 "goal_expr_to_goal.m"
                            {
#line 248 "goal_expr_to_goal.m"
                              parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_770_770, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__OuterDI0_66, &hlds__make_hlds__goal_expr_to_goal__OuterDI_660);
                            }
#line 249 "goal_expr_to_goal.m"
                            {
#line 249 "goal_expr_to_goal.m"
                              parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_770_770, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__OuterUO0_67, &hlds__make_hlds__goal_expr_to_goal__OuterUO_661);
                            }
#line 250 "goal_expr_to_goal.m"
                            {
#line 250 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__Outer_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_65, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_660));
#line 250 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_65, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_661));
#line 250 "goal_expr_to_goal.m"
                            }
#line 6529 "hlds.make_hlds.goal_expr_to_goal.c"
                            if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_52)) == (MR_mktag((MR_Integer) 0))))
#line 6531 "hlds.make_hlds.goal_expr_to_goal.c"
                              {
#line 6533 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_800 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 0)));
#line 6535 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_801;
#line 6537 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_813;
#line 6539 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_814;
#line 6541 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_815;
#line 6543 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_847;
#line 6545 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_848;
#line 6547 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_849;
#line 6549 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_850;
#line 6551 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_851;
#line 6553 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_852;
#line 6555 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_483_862;
#line 6557 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_484_863;
#line 6559 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_864;
#line 6561 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_865;
#line 6563 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_866;
#line 6565 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_867;
#line 6567 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_868;
#line 6569 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_869;
#line 6571 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_870;
#line 6573 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_871;
#line 6575 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_495_872;
#line 6577 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_496_873;

#line 255 "goal_expr_to_goal.m"
                                {
#line 255 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_800, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_801);
                                }
#line 257 "goal_expr_to_goal.m"
                                {
#line 257 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_801, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_813, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_847, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_483_862, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_484_863);
                                }
#line 265 "goal_expr_to_goal.m"
                                {
#line 265 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__MainExpr_54, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_848, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_847, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_849, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_864, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_483_862, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_865, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_866, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_867, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_484_863, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_868);
                                }
#line 268 "goal_expr_to_goal.m"
                                {
#line 268 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__MainDisjState_850 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_850, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_848));
#line 268 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_850, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_849));
#line 268 "goal_expr_to_goal.m"
                                }
#line 270 "goal_expr_to_goal.m"
                                {
#line 270 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_851, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_847, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_864, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_869, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_865, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_870, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_866, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_867, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_868, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_871);
                                }
#line 273 "goal_expr_to_goal.m"
                                {
#line 273 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AllDisjStates_852 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_852, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_850));
#line 273 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_852, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_851));
#line 273 "goal_expr_to_goal.m"
                                }
#line 274 "goal_expr_to_goal.m"
                                {
#line 274 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_852, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_870, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_495_872, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_847, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_496_873, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_869, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                                }
#line 286 "goal_expr_to_goal.m"
                                {
#line 286 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_813, &hlds__make_hlds__goal_expr_to_goal__InnerDI_814, &hlds__make_hlds__goal_expr_to_goal__InnerUO_815, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_496_873, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_495_872, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_494_871, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 288 "goal_expr_to_goal.m"
                                {
#line 288 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Inner_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_814));
#line 288 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_815));
#line 288 "goal_expr_to_goal.m"
                                }
#line 6640 "hlds.make_hlds.goal_expr_to_goal.c"
                              }
#line 6642 "hlds.make_hlds.goal_expr_to_goal.c"
                            else
#line 6644 "hlds.make_hlds.goal_expr_to_goal.c"
                              {
#line 6646 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_772_828;
#line 6648 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_822;
#line 6650 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_823;
#line 6652 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_826;
#line 6654 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_827;
#line 6656 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_907;
#line 6658 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_908;
#line 6660 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_909;
#line 6662 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_910;
#line 6664 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_911;
#line 6666 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_914;
#line 6668 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_915;
#line 6670 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_916;
#line 6672 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_917;
#line 6674 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_918;
#line 6676 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_919;
#line 6678 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_920;

#line 265 "goal_expr_to_goal.m"
                                {
#line 265 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__MainExpr_54, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_907, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_908, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_914, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_915, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_916, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_917, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_918);
                                }
#line 268 "goal_expr_to_goal.m"
                                {
#line 268 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__MainDisjState_909 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_909, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_907));
#line 268 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_909, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_908));
#line 268 "goal_expr_to_goal.m"
                                }
#line 270 "goal_expr_to_goal.m"
                                {
#line 270 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_910, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_485_914, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_919, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_915, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_920, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_487_916, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_488_917, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_489_918, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 273 "goal_expr_to_goal.m"
                                {
#line 273 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AllDisjStates_911 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_911, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_909));
#line 273 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_911, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_910));
#line 273 "goal_expr_to_goal.m"
                                }
#line 274 "goal_expr_to_goal.m"
                                {
#line 274 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_911, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_491_920, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_490_919, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                                }
#line 294 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__InnerDI0_822 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 0)));
#line 294 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__InnerUO0_823 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 1)));
#line 6720 "hlds.make_hlds.goal_expr_to_goal.c"
                                hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_772_828 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 295 "goal_expr_to_goal.m"
                                {
#line 295 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_772_828, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerDI0_822, &hlds__make_hlds__goal_expr_to_goal__InnerDI_826);
                                }
#line 296 "goal_expr_to_goal.m"
                                {
#line 296 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_772_828, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerUO0_823, &hlds__make_hlds__goal_expr_to_goal__InnerUO_827);
                                }
#line 297 "goal_expr_to_goal.m"
                                {
#line 297 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Inner_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_826));
#line 297 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_827));
#line 297 "goal_expr_to_goal.m"
                                }
#line 6742 "hlds.make_hlds.goal_expr_to_goal.c"
                              }
#line 6744 "hlds.make_hlds.goal_expr_to_goal.c"
                          }
#line 278 "goal_expr_to_goal.m"
                        if ((hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "goal_expr_to_goal.m"
                          {
#line 280 "goal_expr_to_goal.m"
                            {
#line 280 "goal_expr_to_goal.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_goal_expr_to_goal\'/17", (MR_String) "atomic HLDSGoals = []");
#line 280 "goal_expr_to_goal.m"
                              return;
                            }
#line 279 "goal_expr_to_goal.m"
                          }
#line 278 "goal_expr_to_goal.m"
                        else
#line 277 "goal_expr_to_goal.m"
                          {
#line 277 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, (MR_Integer) 0)));
#line 277 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, (MR_Integer) 1)));
#line 277 "goal_expr_to_goal.m"
                          }
#line 305 "goal_expr_to_goal.m"
                        {
#line 305 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__ShortHand_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 305 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 0) = ((MR_Box) ((MR_Integer) 0));
#line 305 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Outer_65));
#line 305 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Inner_87));
#line 305 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56));
#line 305 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_81));
#line 305 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_82));
#line 305 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "goal_expr_to_goal.m"
                        }
#line 307 "goal_expr_to_goal.m"
                        {
#line 307 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_664 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_664, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 307 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_664, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_91));
#line 307 "goal_expr_to_goal.m"
                        }
#line 308 "goal_expr_to_goal.m"
                        {
#line 308 "goal_expr_to_goal.m"
                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_665);
                        }
#line 309 "goal_expr_to_goal.m"
                        {
#line 309 "goal_expr_to_goal.m"
                          MR_Word base;
#line 309 "goal_expr_to_goal.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 309 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_664));
#line 309 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_665));
#line 309 "goal_expr_to_goal.m"
                        }
#line 228 "goal_expr_to_goal.m"
                      }
#line 118 "goal_expr_to_goal.m"
                    else
#line 118 "goal_expr_to_goal.m"
                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 500 "goal_expr_to_goal.m"
                        {
#line 500 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Name_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 500 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243;
#line 500 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_752 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 500 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_753 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 500 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Args1_754;
#line 511 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__LHS_163;
#line 511 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__RHS_164;
#line 503 "goal_expr_to_goal.m"
                          MR_String hlds__make_hlds__goal_expr_to_goal__V_238_238;
#line 503 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_239_239;
#line 503 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_240_240;

#line 501 "goal_expr_to_goal.m"
                          {
#line 501 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_753, &hlds__make_hlds__goal_expr_to_goal__Args1_754);
                          }
#line 503 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                            {
#line 503 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_238_238 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_238_238, (MR_String) "\\=") == 0);
#line 503 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                                {
#line 504 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Args1_754)) == (MR_mktag((MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                    {
#line 504 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__LHS_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args1_754, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args1_754, (MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_239_239)) == (MR_mktag((MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                                        {
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__RHS_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_239_239, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_239_239, (MR_Integer) 1)));
#line 504 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_240_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "goal_expr_to_goal.m"
                                        }
#line 504 "goal_expr_to_goal.m"
                                    }
#line 503 "goal_expr_to_goal.m"
                                }
#line 503 "goal_expr_to_goal.m"
                            }
#line 511 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 507 "goal_expr_to_goal.m"
                            {
#line 507 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_241_241;
#line 507 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_242_242;
#line 507 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_711;

#line 507 "goal_expr_to_goal.m"
                              {
#line 507 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_242_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 507 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_242_242, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 507 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_242_242, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHS_163));
#line 507 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_242_242, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHS_164));
#line 507 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_242_242, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_752));
#line 507 "goal_expr_to_goal.m"
                              }
#line 507 "goal_expr_to_goal.m"
                              {
#line 507 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_241_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_241_241, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_242_242));
#line 507 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_241_241, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 507 "goal_expr_to_goal.m"
                              }
#line 507 "goal_expr_to_goal.m"
                              {
#line 507 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__TransformedExpr_711 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_711, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 507 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_711, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_241_241));
#line 507 "goal_expr_to_goal.m"
                              }
#line 508 "goal_expr_to_goal.m"
                              {
#line 508 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__TransformedExpr_711, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                              }
#line 507 "goal_expr_to_goal.m"
                            }
#line 511 "goal_expr_to_goal.m"
                          else
#line 532 "goal_expr_to_goal.m"
                            {
#line 532 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__RHS0_166;
#line 532 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Remainder_168;
#line 532 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__FieldListContext_169;
#line 532 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarContext_172;
#line 532 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_252_252;
#line 532 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Args_734;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__LHS0_165;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_167;
#line 514 "goal_expr_to_goal.m"
                              MR_String hlds__make_hlds__goal_expr_to_goal__V_249_249;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_250_250;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_251_251;
#line 514 "goal_expr_to_goal.m"
                              MR_String hlds__make_hlds__goal_expr_to_goal__V_253_253;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_254_254;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_255_255;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_256_256;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_257_257;
#line 514 "goal_expr_to_goal.m"
                              MR_String hlds__make_hlds__goal_expr_to_goal__V_258_258;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_260_260;
#line 514 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_261_261;
#line 518 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_170_170;
#line 518 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_171_171;

#line 514 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 514 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 514 "goal_expr_to_goal.m"
                                {
#line 514 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_249_249 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 514 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_249_249, (MR_String) ":=") == 0);
#line 514 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 514 "goal_expr_to_goal.m"
                                    {
#line 515 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Args1_754)) == (MR_mktag((MR_Integer) 1)));
#line 515 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 515 "goal_expr_to_goal.m"
                                        {
#line 515 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__LHS0_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args1_754, (MR_Integer) 0)));
#line 515 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args1_754, (MR_Integer) 1)));
#line 515 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 515 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 515 "goal_expr_to_goal.m"
                                            {
#line 515 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__RHS0_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_Integer) 0)));
#line 515 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_Integer) 1)));
#line 515 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "goal_expr_to_goal.m"
                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 514 "goal_expr_to_goal.m"
                                                {
#line 516 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHS0_165)) == (MR_mktag((MR_Integer) 0)));
#line 516 "goal_expr_to_goal.m"
                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                                    {
#line 516 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS0_165, (MR_Integer) 0)));
#line 516 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS0_165, (MR_Integer) 1)));
#line 516 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__FieldListContext_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS0_165, (MR_Integer) 2)));
#line 516 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_252_252)) == (MR_mktag((MR_Integer) 0)));
#line 516 "goal_expr_to_goal.m"
                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                                        {
#line 516 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_253_253 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_252_252, (MR_Integer) 0)));
#line 516 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_253_253, (MR_String) "^") == 0);
#line 514 "goal_expr_to_goal.m"
                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 514 "goal_expr_to_goal.m"
                                                            {
#line 516 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_254_254)) == (MR_mktag((MR_Integer) 1)));
#line 516 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                                                {
#line 516 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__StateVar0_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_254_254, (MR_Integer) 0)));
#line 516 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_254_254, (MR_Integer) 1)));
#line 516 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_255_255)) == (MR_mktag((MR_Integer) 1)));
#line 516 "goal_expr_to_goal.m"
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                                                    {
#line 516 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__Remainder_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_255_255, (MR_Integer) 0)));
#line 516 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_255_255, (MR_Integer) 1)));
#line 516 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_256_256 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "goal_expr_to_goal.m"
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 514 "goal_expr_to_goal.m"
                                                                        {
#line 518 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVar0_167)) == (MR_mktag((MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                                                            {
#line 518 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__Args_734 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__StateVarContext_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 2)));
#line 518 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_257_257)) == (MR_mktag((MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                                                                {
#line 518 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_258_258 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_257_257, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_258_258, (MR_String) "!") == 0);
#line 514 "goal_expr_to_goal.m"
                                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 514 "goal_expr_to_goal.m"
                                                                                    {
#line 518 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Args_734)) == (MR_mktag((MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                                                                        {
#line 518 "goal_expr_to_goal.m"
                                                                                          hlds__make_hlds__goal_expr_to_goal__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args_734, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                                                          hlds__make_hlds__goal_expr_to_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args_734, (MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_260_260)) == (MR_mktag((MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                                                                            {
#line 518 "goal_expr_to_goal.m"
                                                                                              hlds__make_hlds__goal_expr_to_goal__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                                                              hlds__make_hlds__goal_expr_to_goal__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_261_261 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "goal_expr_to_goal.m"
                                                                                            }
#line 518 "goal_expr_to_goal.m"
                                                                                        }
#line 514 "goal_expr_to_goal.m"
                                                                                    }
#line 518 "goal_expr_to_goal.m"
                                                                                }
#line 518 "goal_expr_to_goal.m"
                                                                            }
#line 514 "goal_expr_to_goal.m"
                                                                        }
#line 516 "goal_expr_to_goal.m"
                                                                    }
#line 516 "goal_expr_to_goal.m"
                                                                }
#line 514 "goal_expr_to_goal.m"
                                                            }
#line 516 "goal_expr_to_goal.m"
                                                        }
#line 516 "goal_expr_to_goal.m"
                                                    }
#line 514 "goal_expr_to_goal.m"
                                                }
#line 515 "goal_expr_to_goal.m"
                                            }
#line 515 "goal_expr_to_goal.m"
                                        }
#line 514 "goal_expr_to_goal.m"
                                    }
#line 514 "goal_expr_to_goal.m"
                                }
#line 532 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 523 "goal_expr_to_goal.m"
                                {
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_173;
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldList_174;
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_268_268;
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_269_269;
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_273_273;
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_274_274;
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_712;
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__LHS_713;
#line 523 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__RHS_714;

#line 523 "goal_expr_to_goal.m"
                                  {
#line 523 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__LHS_713 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 523 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS_713, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
#line 523 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS_713, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Args_734));
#line 523 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS_713, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_172));
#line 523 "goal_expr_to_goal.m"
                                  }
#line 524 "goal_expr_to_goal.m"
                                  {
#line 524 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__StateVar_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 524 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_173, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
#line 524 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_173, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Args_734));
#line 524 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_173, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_172));
#line 524 "goal_expr_to_goal.m"
                                  }
#line 525 "goal_expr_to_goal.m"
                                  {
#line 525 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_269_269, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Remainder_168));
#line 525 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_269_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "goal_expr_to_goal.m"
                                  }
#line 525 "goal_expr_to_goal.m"
                                  {
#line 525 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_268_268, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_173));
#line 525 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_268_268, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_269_269));
#line 525 "goal_expr_to_goal.m"
                                  }
#line 525 "goal_expr_to_goal.m"
                                  {
#line 525 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__FieldList_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 525 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_174, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_252_252));
#line 525 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_174, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_268_268));
#line 525 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_174, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldListContext_169));
#line 525 "goal_expr_to_goal.m"
                                  }
#line 527 "goal_expr_to_goal.m"
                                  {
#line 527 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_274_274, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHS0_166));
#line 527 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_274_274, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "goal_expr_to_goal.m"
                                  }
#line 527 "goal_expr_to_goal.m"
                                  {
#line 527 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_273_273, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldList_174));
#line 527 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_273_273, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_274_274));
#line 527 "goal_expr_to_goal.m"
                                  }
#line 527 "goal_expr_to_goal.m"
                                  {
#line 527 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__RHS_714 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 527 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHS_714, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5]));
#line 527 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHS_714, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_273_273));
#line 527 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHS_714, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 527 "goal_expr_to_goal.m"
                                  }
#line 528 "goal_expr_to_goal.m"
                                  {
#line 528 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__TransformedExpr_712 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 528 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_712, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 528 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_712, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHS_713));
#line 528 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_712, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHS_714));
#line 528 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_712, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_752));
#line 528 "goal_expr_to_goal.m"
                                  }
#line 529 "goal_expr_to_goal.m"
                                  {
#line 529 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__TransformedExpr_712, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                  }
#line 523 "goal_expr_to_goal.m"
                                }
#line 532 "goal_expr_to_goal.m"
                              else
#line 545 "goal_expr_to_goal.m"
                                {
#line 545 "goal_expr_to_goal.m"
                                  MR_String hlds__make_hlds__goal_expr_to_goal__Operator_175;

#line 536 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 536 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 536 "goal_expr_to_goal.m"
                                    {
#line 536 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__Operator_175 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 538 "goal_expr_to_goal.m"
                                      if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_175, (MR_String) ":=") == 0))
#line 538 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 538 "goal_expr_to_goal.m"
                                      else
#line 538 "goal_expr_to_goal.m"
                                        if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_175, (MR_String) "=^") == 0))
#line 537 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 538 "goal_expr_to_goal.m"
                                        else
#line 538 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 536 "goal_expr_to_goal.m"
                                    }
#line 545 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 541 "goal_expr_to_goal.m"
                                    {
#line 541 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Args2_176;

#line 541 "goal_expr_to_goal.m"
                                      {
#line 541 "goal_expr_to_goal.m"
                                        parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Args1_754, &hlds__make_hlds__goal_expr_to_goal__Args2_176);
                                      }
#line 542 "goal_expr_to_goal.m"
                                      {
#line 542 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Operator_175, hlds__make_hlds__goal_expr_to_goal__Args2_176, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                      }
#line 541 "goal_expr_to_goal.m"
                                    }
#line 545 "goal_expr_to_goal.m"
                                  else
#line 546 "goal_expr_to_goal.m"
                                    {
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Call_182;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo0_186;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_290_290;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_291_291;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_292_292;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_300_300;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_301_301;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_717;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_718;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Args_719;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_720;
#line 546 "goal_expr_to_goal.m"
                                      MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_721;
#line 546 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_723;
#line 569 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__PredVar_177;
#line 569 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__RealHeadVars_178;
#line 555 "goal_expr_to_goal.m"
                                      MR_String hlds__make_hlds__goal_expr_to_goal__V_798_798;

#line 546 "goal_expr_to_goal.m"
                                      {
#line 546 "goal_expr_to_goal.m"
                                        parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Args1_754, &hlds__make_hlds__goal_expr_to_goal__Args_719);
                                      }
#line 547 "goal_expr_to_goal.m"
                                      {
#line 547 "goal_expr_to_goal.m"
                                        hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args_719, &hlds__make_hlds__goal_expr_to_goal__HeadVars_720, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_290_290, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_291_291, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_292_292);
                                      }
#line 549 "goal_expr_to_goal.m"
                                      {
#line 549 "goal_expr_to_goal.m"
                                        mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1], hlds__make_hlds__goal_expr_to_goal__Args_719, &hlds__make_hlds__goal_expr_to_goal__Arity_721);
                                      }
#line 553 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 553 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 553 "goal_expr_to_goal.m"
                                        {
#line 553 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_798_798 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 554 "goal_expr_to_goal.m"
                                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_798_798, (MR_String) "") == 0))
#line 554 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 554 "goal_expr_to_goal.m"
                                          else
#line 554 "goal_expr_to_goal.m"
                                            if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_798_798, (MR_String) "call") == 0))
#line 553 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 554 "goal_expr_to_goal.m"
                                            else
#line 554 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 555 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 555 "goal_expr_to_goal.m"
                                            {
#line 556 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HeadVars_720)) == (MR_mktag((MR_Integer) 1)));
#line 556 "goal_expr_to_goal.m"
                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 556 "goal_expr_to_goal.m"
                                                {
#line 556 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__PredVar_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_720, (MR_Integer) 0)));
#line 556 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__RealHeadVars_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_720, (MR_Integer) 1)));
#line 556 "goal_expr_to_goal.m"
                                                }
#line 555 "goal_expr_to_goal.m"
                                            }
#line 553 "goal_expr_to_goal.m"
                                        }
#line 569 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 559 "goal_expr_to_goal.m"
                                        {
#line 559 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCall_181;

#line 563 "goal_expr_to_goal.m"
                                          {
#line 563 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__GenericCall_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 563 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_181, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredVar_177));
#line 563 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_181, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_752));
#line 563 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_181, 2) = ((MR_Box) ((MR_Integer) 0));
#line 563 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_181, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_721));
#line 563 "goal_expr_to_goal.m"
                                          }
#line 565 "goal_expr_to_goal.m"
                                          {
#line 565 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__Call_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCall_181));
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RealHeadVars_178));
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 5) = ((MR_Box) ((MR_Integer) 6));
#line 565 "goal_expr_to_goal.m"
                                          }
#line 568 "goal_expr_to_goal.m"
                                          {
#line 568 "goal_expr_to_goal.m"
                                            hlds__hlds_goal__generic_call_id_2_p_0(hlds__make_hlds__goal_expr_to_goal__GenericCall_181, &hlds__make_hlds__goal_expr_to_goal__CallId_723);
                                          }
#line 559 "goal_expr_to_goal.m"
                                        }
#line 569 "goal_expr_to_goal.m"
                                      else
#line 571 "goal_expr_to_goal.m"
                                        {
#line 571 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__PredId_183;
#line 571 "goal_expr_to_goal.m"
                                          MR_Integer hlds__make_hlds__goal_expr_to_goal__ModeId_184;
#line 571 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_297_297;

#line 571 "goal_expr_to_goal.m"
                                          {
#line 571 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__PredId_183 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                                          }
#line 572 "goal_expr_to_goal.m"
                                          {
#line 572 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__ModeId_184 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                                          }
#line 575 "goal_expr_to_goal.m"
                                          {
#line 575 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__Call_182 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 575 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredId_183));
#line 575 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ModeId_184));
#line 575 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_720));
#line 575 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 3) = ((MR_Box) ((MR_Integer) 2));
#line 575 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_162));
#line 575 "goal_expr_to_goal.m"
                                          }
#line 578 "goal_expr_to_goal.m"
                                          {
#line 578 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_297_297 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 578 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_297_297, 0) = ((MR_Box) ((MR_Integer) 0));
#line 578 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_297_297, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_162));
#line 578 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_297_297, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_721));
#line 578 "goal_expr_to_goal.m"
                                          }
#line 578 "goal_expr_to_goal.m"
                                          {
#line 578 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__CallId_723 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 578 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallId_723, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_297_297));
#line 578 "goal_expr_to_goal.m"
                                          }
#line 571 "goal_expr_to_goal.m"
                                        }
#line 580 "goal_expr_to_goal.m"
                                      {
#line 580 "goal_expr_to_goal.m"
                                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo0_186);
                                      }
#line 581 "goal_expr_to_goal.m"
                                      {
#line 581 "goal_expr_to_goal.m"
                                        hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__goal_expr_to_goal__Purity_752, hlds__make_hlds__goal_expr_to_goal__GoalInfo0_186, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_717);
                                      }
#line 582 "goal_expr_to_goal.m"
                                      {
#line 582 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__Goal0_718 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal0_718, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Call_182));
#line 582 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal0_718, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_717));
#line 582 "goal_expr_to_goal.m"
                                      }
#line 584 "goal_expr_to_goal.m"
                                      {
#line 584 "goal_expr_to_goal.m"
                                        hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, hlds__make_hlds__goal_expr_to_goal__Name_162, hlds__make_hlds__goal_expr_to_goal__Arity_721, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_300_300);
                                      }
#line 585 "goal_expr_to_goal.m"
                                      {
#line 585 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_301_301, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_723));
#line 585 "goal_expr_to_goal.m"
                                      }
#line 585 "goal_expr_to_goal.m"
                                      {
#line 585 "goal_expr_to_goal.m"
                                        hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_720, hlds__make_hlds__goal_expr_to_goal__Args_719, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__V_301_301, hlds__make_hlds__goal_expr_to_goal__Goal0_718, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_291_291, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_290_290, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_292_292, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                      }
#line 546 "goal_expr_to_goal.m"
                                    }
#line 545 "goal_expr_to_goal.m"
                                }
#line 532 "goal_expr_to_goal.m"
                            }
#line 589 "goal_expr_to_goal.m"
                          {
#line 589 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
#line 589 "goal_expr_to_goal.m"
                            return;
                          }
#line 500 "goal_expr_to_goal.m"
                        }
#line 118 "goal_expr_to_goal.m"
                      else
#line 118 "goal_expr_to_goal.m"
                        if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 441 "goal_expr_to_goal.m"
                          {
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_145;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_349_349;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_350_350;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_351_351;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_352_352;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_353_353;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_354_354;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_355_355;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_700;
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__A0_701 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 441 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__B0_702 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));

#line 443 "goal_expr_to_goal.m"
                            {
#line 443 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__B0_702, hlds__make_hlds__goal_expr_to_goal__Renaming_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_349_349, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_350_350, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_351_351, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_352_352, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_353_353);
                            }
#line 446 "goal_expr_to_goal.m"
                            {
#line 446 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A0_701, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143, &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_349_349, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_354_354, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_350_350, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_355_355, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_351_351, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_352_352, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_353_353, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                            }
#line 450 "goal_expr_to_goal.m"
                            {
#line 450 "goal_expr_to_goal.m"
                              hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_355_355, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_354_354, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                            }
#line 453 "goal_expr_to_goal.m"
                            {
#line 453 "goal_expr_to_goal.m"
                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_700);
                            }
#line 454 "goal_expr_to_goal.m"
                            {
#line 454 "goal_expr_to_goal.m"
                              hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_145, hlds__make_hlds__goal_expr_to_goal__GoalInfo_700, hlds__make_hlds__goal_expr_to_goal__Goal_22);
#line 454 "goal_expr_to_goal.m"
                              return;
                            }
#line 441 "goal_expr_to_goal.m"
                          }
#line 118 "goal_expr_to_goal.m"
                        else
#line 118 "goal_expr_to_goal.m"
                          if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 464 "goal_expr_to_goal.m"
                            {
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__P0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Q0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_325_325;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_326_326;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_327_327;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_328_328;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_329_329;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_330_330;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_337_337;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_704;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_705;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__P_707;
#line 464 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Q_708;
#line 474 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_151_151;

#line 471 "goal_expr_to_goal.m"
                              {
#line 471 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__P0_149, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__P_707, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_325_325, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_326_326, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_327_327, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_328_328, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_329_329, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_330_330);
                              }
#line 474 "goal_expr_to_goal.m"
                              {
#line 474 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Q0_150, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Q_708, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_325_325, &hlds__make_hlds__goal_expr_to_goal__V_151_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_326_326, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_327_327, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_328_328, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_329_329, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_330_330, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                              }
#line 477 "goal_expr_to_goal.m"
                              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 478 "goal_expr_to_goal.m"
                              {
#line 478 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_337_337 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_337_337, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_707));
#line 478 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_337_337, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_708));
#line 478 "goal_expr_to_goal.m"
                              }
#line 478 "goal_expr_to_goal.m"
                              {
#line 478 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__GoalExpr_704 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_704, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 478 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_704, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_337_337));
#line 478 "goal_expr_to_goal.m"
                              }
#line 479 "goal_expr_to_goal.m"
                              {
#line 479 "goal_expr_to_goal.m"
                                hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_705);
                              }
#line 480 "goal_expr_to_goal.m"
                              {
#line 480 "goal_expr_to_goal.m"
                                MR_Word base;
#line 480 "goal_expr_to_goal.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "goal_expr_to_goal.m"
                                *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 480 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_704));
#line 480 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_705));
#line 480 "goal_expr_to_goal.m"
                              }
#line 464 "goal_expr_to_goal.m"
                            }
#line 118 "goal_expr_to_goal.m"
                          else
#line 118 "goal_expr_to_goal.m"
                            if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 482 "goal_expr_to_goal.m"
                              {
#line 482 "goal_expr_to_goal.m"
                                MR_String hlds__make_hlds__goal_expr_to_goal__EventName_152 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Args1_154;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Args_155;
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
                                MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_161;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_310_310;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_311_311;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_312_312;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_313_313;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_316_316;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_317_317;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_318_318;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_709;
#line 482 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_710;

#line 483 "goal_expr_to_goal.m"
                                {
#line 483 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_153, &hlds__make_hlds__goal_expr_to_goal__Args1_154);
                                }
#line 484 "goal_expr_to_goal.m"
                                {
#line 484 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Args1_154, &hlds__make_hlds__goal_expr_to_goal__Args_155);
                                }
#line 485 "goal_expr_to_goal.m"
                                {
#line 485 "goal_expr_to_goal.m"
                                  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args_155, &hlds__make_hlds__goal_expr_to_goal__HeadVars_156, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_310_310, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_311_311, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_312_312);
                                }
#line 487 "goal_expr_to_goal.m"
                                {
#line 487 "goal_expr_to_goal.m"
                                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__HeadVars_156, &hlds__make_hlds__goal_expr_to_goal__Arity_157);
                                }
#line 488 "goal_expr_to_goal.m"
                                {
#line 488 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_313_313 = parse_tree__prog_mode__in_mode_0_f_0();
                                }
#line 488 "goal_expr_to_goal.m"
                                {
#line 488 "goal_expr_to_goal.m"
                                  mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__goal_expr_to_goal__Arity_157, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_313_313)), &hlds__make_hlds__goal_expr_to_goal__Modes_158);
                                }
#line 489 "goal_expr_to_goal.m"
                                {
#line 489 "goal_expr_to_goal.m"
                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_709);
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
                                  hlds__make_hlds__goal_expr_to_goal__Goal0_710 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal0_710, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160));
#line 493 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal0_710, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_709));
#line 493 "goal_expr_to_goal.m"
                                }
#line 494 "goal_expr_to_goal.m"
                                {
#line 494 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_316_316 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 494 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_316_316, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_152));
#line 494 "goal_expr_to_goal.m"
                                }
#line 494 "goal_expr_to_goal.m"
                                {
#line 494 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__CallId_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 494 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_316_316));
#line 494 "goal_expr_to_goal.m"
                                }
#line 495 "goal_expr_to_goal.m"
                                {
#line 495 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_317_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_317_317, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_161));
#line 495 "goal_expr_to_goal.m"
                                }
#line 495 "goal_expr_to_goal.m"
                                {
#line 495 "goal_expr_to_goal.m"
                                  hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_156, hlds__make_hlds__goal_expr_to_goal__Args_155, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__V_317_317, hlds__make_hlds__goal_expr_to_goal__Goal0_710, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_311_311, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_318_318, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_310_310, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_312_312, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 498 "goal_expr_to_goal.m"
                                {
#line 498 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_318_318, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
#line 498 "goal_expr_to_goal.m"
                                  return;
                                }
#line 482 "goal_expr_to_goal.m"
                              }
#line 118 "goal_expr_to_goal.m"
                            else
#line 118 "goal_expr_to_goal.m"
                              if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 388 "goal_expr_to_goal.m"
                                {
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_785_785 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond_126;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then1_128;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else1_131;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then_133;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else_134;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_396_396;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_397_397;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_398_398;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_399_399;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_400_400;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_401_401;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_402_402;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_403_403;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_404_404;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_405_405;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_681;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_682;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_683 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_684;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_685;
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_686 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 388 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_688 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));

#line 390 "goal_expr_to_goal.m"
                                  {
#line 390 "goal_expr_to_goal.m"
                                    parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_785_785, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Vars0_683, &hlds__make_hlds__goal_expr_to_goal__Vars_685);
                                  }
#line 391 "goal_expr_to_goal.m"
                                  {
#line 391 "goal_expr_to_goal.m"
                                    parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_785_785, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__StateVars0_686, &hlds__make_hlds__goal_expr_to_goal__StateVars_684);
                                  }
#line 392 "goal_expr_to_goal.m"
                                  {
#line 392 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVars_684, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_396_396);
                                  }
#line 394 "goal_expr_to_goal.m"
                                  {
#line 394 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Cond0_123, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Cond_126, hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125, &hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_397_397, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_398_398, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_399_399, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_400_400, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_396_396, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_401_401);
                                  }
#line 397 "goal_expr_to_goal.m"
                                  {
#line 397 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Then0_688, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Then1_128, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_397_397, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_402_402, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_398_398, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_403_403, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_399_399, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_404_404, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_400_400, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_401_401, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406);
                                  }
#line 400 "goal_expr_to_goal.m"
                                  {
#line 400 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_684, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130);
                                  }
#line 402 "goal_expr_to_goal.m"
                                  {
#line 402 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Else0_124, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Else1_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_402_402, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_403_403, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_404_404, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411);
                                  }
#line 405 "goal_expr_to_goal.m"
                                  {
#line 405 "goal_expr_to_goal.m"
                                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_682);
                                  }
#line 406 "goal_expr_to_goal.m"
                                  {
#line 406 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__StateVars_684, hlds__make_hlds__goal_expr_to_goal__Then1_128, &hlds__make_hlds__goal_expr_to_goal__Then_133, hlds__make_hlds__goal_expr_to_goal__Else1_131, &hlds__make_hlds__goal_expr_to_goal__Else_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130, hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                  }
#line 410 "goal_expr_to_goal.m"
                                  {
#line 410 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_681 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 410 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 410 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_685));
#line 410 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Cond_126));
#line 410 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then_133));
#line 410 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Else_134));
#line 410 "goal_expr_to_goal.m"
                                  }
#line 411 "goal_expr_to_goal.m"
                                  {
#line 411 "goal_expr_to_goal.m"
                                    MR_Word base;
#line 411 "goal_expr_to_goal.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "goal_expr_to_goal.m"
                                    *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 411 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_681));
#line 411 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_682));
#line 411 "goal_expr_to_goal.m"
                                  }
#line 388 "goal_expr_to_goal.m"
                                }
#line 118 "goal_expr_to_goal.m"
                              else
#line 118 "goal_expr_to_goal.m"
                                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 456 "goal_expr_to_goal.m"
                                  {
#line 456 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__P_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 456 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Q_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 456 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_338_338;
#line 456 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_339_339;
#line 456 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_340_340;
#line 456 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_341_341;
#line 456 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_703;

#line 458 "goal_expr_to_goal.m"
                                    {
#line 458 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_341_341 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_341_341, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_341_341, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_148));
#line 458 "goal_expr_to_goal.m"
                                    }
#line 458 "goal_expr_to_goal.m"
                                    {
#line 458 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_340_340 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_340_340, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_341_341));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_340_340, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 458 "goal_expr_to_goal.m"
                                    }
#line 458 "goal_expr_to_goal.m"
                                    {
#line 458 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_339_339, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_147));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_339_339, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_340_340));
#line 458 "goal_expr_to_goal.m"
                                    }
#line 459 "goal_expr_to_goal.m"
                                    {
#line 459 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_338_338 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_338_338, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_339_339));
#line 459 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_338_338, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 459 "goal_expr_to_goal.m"
                                    }
#line 458 "goal_expr_to_goal.m"
                                    {
#line 458 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__TransformedExpr_703 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_703, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_703, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_338_338));
#line 458 "goal_expr_to_goal.m"
                                    }
#line 460 "goal_expr_to_goal.m"
                                    /* direct tailcall eliminated */
#line 460 "goal_expr_to_goal.m"
                                    {
#line 460 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__TransformedExpr_703;

#line 460 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__Expr_19 = hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19;
#line 460 "goal_expr_to_goal.m"
                                    }
#line 460 "goal_expr_to_goal.m"
                                    continue;
#line 456 "goal_expr_to_goal.m"
                                  }
#line 118 "goal_expr_to_goal.m"
                                else
#line 118 "goal_expr_to_goal.m"
                                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 413 "goal_expr_to_goal.m"
                                    {
#line 413 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_689;
#line 413 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_690;
#line 413 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_691;
#line 413 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_692 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 415 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_136_136;

#line 415 "goal_expr_to_goal.m"
                                      {
#line 415 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr0_692, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_691, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__V_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                      }
#line 418 "goal_expr_to_goal.m"
                                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 419 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__GoalExpr_689 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__goal_expr_to_goal__SubGoal_691);
#line 420 "goal_expr_to_goal.m"
                                      {
#line 420 "goal_expr_to_goal.m"
                                        hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_690);
                                      }
#line 421 "goal_expr_to_goal.m"
                                      {
#line 421 "goal_expr_to_goal.m"
                                        MR_Word base;
#line 421 "goal_expr_to_goal.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "goal_expr_to_goal.m"
                                        *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 421 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_689));
#line 421 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_690));
#line 421 "goal_expr_to_goal.m"
                                      }
#line 413 "goal_expr_to_goal.m"
                                    }
#line 118 "goal_expr_to_goal.m"
                                  else
#line 118 "goal_expr_to_goal.m"
                                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 192 "goal_expr_to_goal.m"
                                      {
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_549_549;
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_636;
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_637;
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_638 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_639;
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_640;
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_641 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_642 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_643 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 192 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_644 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));

#line 193 "goal_expr_to_goal.m"
                                        {
#line 193 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Vars0_638, hlds__make_hlds__goal_expr_to_goal__StateVars0_641, hlds__make_hlds__goal_expr_to_goal__DotSVars0_643, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_644, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Vars_639, hlds__make_hlds__goal_expr_to_goal__SubExpr0_642, &hlds__make_hlds__goal_expr_to_goal__SubGoal_640, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_637, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                        }
#line 197 "goal_expr_to_goal.m"
                                        {
#line 197 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_549_549 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_549_549, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_639));
#line 197 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_549_549, 1) = ((MR_Box) ((MR_Integer) 2));
#line 197 "goal_expr_to_goal.m"
                                        }
#line 197 "goal_expr_to_goal.m"
                                        {
#line 197 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_636 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 197 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 197 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_549_549));
#line 197 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_640));
#line 197 "goal_expr_to_goal.m"
                                        }
#line 199 "goal_expr_to_goal.m"
                                        {
#line 199 "goal_expr_to_goal.m"
                                          MR_Word base;
#line 199 "goal_expr_to_goal.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "goal_expr_to_goal.m"
                                          *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 199 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_636));
#line 199 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_637));
#line 199 "goal_expr_to_goal.m"
                                        }
#line 192 "goal_expr_to_goal.m"
                                      }
#line 118 "goal_expr_to_goal.m"
                                    else
#line 118 "goal_expr_to_goal.m"
                                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 182 "goal_expr_to_goal.m"
                                        {
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_557_557;
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_627;
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_628;
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_629 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_630;
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_631;
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_632 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_633 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_634 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 182 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_635 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));

#line 183 "goal_expr_to_goal.m"
                                          {
#line 183 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Vars0_629, hlds__make_hlds__goal_expr_to_goal__StateVars0_632, hlds__make_hlds__goal_expr_to_goal__DotSVars0_634, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_635, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Vars_630, hlds__make_hlds__goal_expr_to_goal__SubExpr0_633, &hlds__make_hlds__goal_expr_to_goal__SubGoal_631, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_628, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                          }
#line 187 "goal_expr_to_goal.m"
                                          {
#line 187 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_557_557 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_557_557, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_630));
#line 187 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_557_557, 1) = ((MR_Box) ((MR_Integer) 1));
#line 187 "goal_expr_to_goal.m"
                                          }
#line 187 "goal_expr_to_goal.m"
                                          {
#line 187 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__GoalExpr_627 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_627, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 187 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_627, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_557_557));
#line 187 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_627, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_631));
#line 187 "goal_expr_to_goal.m"
                                          }
#line 189 "goal_expr_to_goal.m"
                                          {
#line 189 "goal_expr_to_goal.m"
                                            MR_Word base;
#line 189 "goal_expr_to_goal.m"
                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "goal_expr_to_goal.m"
                                            *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 189 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_627));
#line 189 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_628));
#line 189 "goal_expr_to_goal.m"
                                          }
#line 182 "goal_expr_to_goal.m"
                                        }
#line 118 "goal_expr_to_goal.m"
                                      else
#line 118 "goal_expr_to_goal.m"
                                        if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 172 "goal_expr_to_goal.m"
                                          {
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_619;
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_620;
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_621 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_622;
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_623;
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_624;
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_625 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 172 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_626 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));

#line 173 "goal_expr_to_goal.m"
                                            {
#line 173 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Vars0_621, hlds__make_hlds__goal_expr_to_goal__StateVars0_625, hlds__make_hlds__goal_expr_to_goal__DotSVars0_46, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_47, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Vars_622, hlds__make_hlds__goal_expr_to_goal__SubExpr0_626, &hlds__make_hlds__goal_expr_to_goal__SubGoal_623, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_620, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                            }
#line 177 "goal_expr_to_goal.m"
                                            {
#line 177 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__Reason_624 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_624, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_622));
#line 177 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_624, 1) = ((MR_Box) ((MR_Integer) 0));
#line 177 "goal_expr_to_goal.m"
                                            }
#line 178 "goal_expr_to_goal.m"
                                            {
#line 178 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__GoalExpr_619 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 178 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 178 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_624));
#line 178 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_623));
#line 178 "goal_expr_to_goal.m"
                                            }
#line 179 "goal_expr_to_goal.m"
                                            {
#line 179 "goal_expr_to_goal.m"
                                              MR_Word base;
#line 179 "goal_expr_to_goal.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 179 "goal_expr_to_goal.m"
                                              *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 179 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_619));
#line 179 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_620));
#line 179 "goal_expr_to_goal.m"
                                            }
#line 172 "goal_expr_to_goal.m"
                                          }
#line 118 "goal_expr_to_goal.m"
                                        else
#line 118 "goal_expr_to_goal.m"
                                          if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 162 "goal_expr_to_goal.m"
                                            {
#line 162 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 162 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_614;
#line 162 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_615;
#line 162 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_616;
#line 162 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_617;
#line 162 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_618 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));

#line 163 "goal_expr_to_goal.m"
                                              {
#line 163 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr0_618, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_616, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                              }
#line 166 "goal_expr_to_goal.m"
                                              {
#line 166 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__Reason_617 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 166 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_617, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_45));
#line 166 "goal_expr_to_goal.m"
                                              }
#line 167 "goal_expr_to_goal.m"
                                              {
#line 167 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__GoalExpr_614 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 167 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_614, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 167 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_614, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_617));
#line 167 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_614, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_616));
#line 167 "goal_expr_to_goal.m"
                                              }
#line 168 "goal_expr_to_goal.m"
                                              {
#line 168 "goal_expr_to_goal.m"
                                                hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_615);
                                              }
#line 169 "goal_expr_to_goal.m"
                                              {
#line 169 "goal_expr_to_goal.m"
                                                MR_Word base;
#line 169 "goal_expr_to_goal.m"
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 169 "goal_expr_to_goal.m"
                                                *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 169 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_614));
#line 169 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_615));
#line 169 "goal_expr_to_goal.m"
                                              }
#line 162 "goal_expr_to_goal.m"
                                            }
#line 118 "goal_expr_to_goal.m"
                                          else
#line 118 "goal_expr_to_goal.m"
                                            if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 209 "goal_expr_to_goal.m"
                                              {
#line 209 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 209 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_50;
#line 209 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_535_535;
#line 209 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_649;
#line 209 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_650;
#line 209 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr_651 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 209 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_652;

#line 210 "goal_expr_to_goal.m"
                                                {
#line 210 "goal_expr_to_goal.m"
                                                  parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Var0_49, &hlds__make_hlds__goal_expr_to_goal__Var_50);
                                                }
#line 211 "goal_expr_to_goal.m"
                                                {
#line 211 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr_651, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_652, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                }
#line 214 "goal_expr_to_goal.m"
                                                {
#line 214 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__V_535_535 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_535_535, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 214 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_535_535, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_50));
#line 214 "goal_expr_to_goal.m"
                                                }
#line 214 "goal_expr_to_goal.m"
                                                {
#line 214 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_649 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 214 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 214 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_535_535));
#line 214 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_649, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_652));
#line 214 "goal_expr_to_goal.m"
                                                }
#line 215 "goal_expr_to_goal.m"
                                                {
#line 215 "goal_expr_to_goal.m"
                                                  hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_650);
                                                }
#line 216 "goal_expr_to_goal.m"
                                                {
#line 216 "goal_expr_to_goal.m"
                                                  MR_Word base;
#line 216 "goal_expr_to_goal.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "goal_expr_to_goal.m"
                                                  *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 216 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_649));
#line 216 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_650));
#line 216 "goal_expr_to_goal.m"
                                                }
#line 209 "goal_expr_to_goal.m"
                                              }
#line 118 "goal_expr_to_goal.m"
                                            else
#line 118 "goal_expr_to_goal.m"
                                              if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 201 "goal_expr_to_goal.m"
                                                {
#line 201 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 201 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_542_542;
#line 201 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_645;
#line 201 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_646;
#line 201 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr_647 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 201 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_648;

#line 202 "goal_expr_to_goal.m"
                                                  {
#line 202 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr_647, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_648, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                  }
#line 205 "goal_expr_to_goal.m"
                                                  {
#line 205 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__V_542_542 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_542_542, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 205 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_542_542, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_48));
#line 205 "goal_expr_to_goal.m"
                                                  }
#line 205 "goal_expr_to_goal.m"
                                                  {
#line 205 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_645 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 205 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_645, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 205 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_645, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_542_542));
#line 205 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_645, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_648));
#line 205 "goal_expr_to_goal.m"
                                                  }
#line 206 "goal_expr_to_goal.m"
                                                  {
#line 206 "goal_expr_to_goal.m"
                                                    hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_646);
                                                  }
#line 207 "goal_expr_to_goal.m"
                                                  {
#line 207 "goal_expr_to_goal.m"
                                                    MR_Word base;
#line 207 "goal_expr_to_goal.m"
                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "goal_expr_to_goal.m"
                                                    *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 207 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_645));
#line 207 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_646));
#line 207 "goal_expr_to_goal.m"
                                                  }
#line 201 "goal_expr_to_goal.m"
                                                }
#line 118 "goal_expr_to_goal.m"
                                              else
#line 118 "goal_expr_to_goal.m"
                                                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 218 "goal_expr_to_goal.m"
                                                  {
#line 218 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_527_527;
#line 218 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_653;
#line 218 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_654;
#line 218 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr_655 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 218 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_656;
#line 218 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_657 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 218 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_658 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 218 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_659;

#line 219 "goal_expr_to_goal.m"
                                                    {
#line 219 "goal_expr_to_goal.m"
                                                      parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Var0_658, &hlds__make_hlds__goal_expr_to_goal__Var_659);
                                                    }
#line 220 "goal_expr_to_goal.m"
                                                    {
#line 220 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr_655, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_656, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                    }
#line 223 "goal_expr_to_goal.m"
                                                    {
#line 223 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__V_527_527 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 223 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_527_527, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 223 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_527_527, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_659));
#line 223 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_527_527, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_657));
#line 223 "goal_expr_to_goal.m"
                                                    }
#line 223 "goal_expr_to_goal.m"
                                                    {
#line 223 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__GoalExpr_653 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 223 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_653, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 223 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_653, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_527_527));
#line 223 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_653, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_656));
#line 223 "goal_expr_to_goal.m"
                                                    }
#line 224 "goal_expr_to_goal.m"
                                                    {
#line 224 "goal_expr_to_goal.m"
                                                      hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_654);
                                                    }
#line 225 "goal_expr_to_goal.m"
                                                    {
#line 225 "goal_expr_to_goal.m"
                                                      MR_Word base;
#line 225 "goal_expr_to_goal.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "goal_expr_to_goal.m"
                                                      *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 225 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_653));
#line 225 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_654));
#line 225 "goal_expr_to_goal.m"
                                                    }
#line 218 "goal_expr_to_goal.m"
                                                  }
#line 118 "goal_expr_to_goal.m"
                                                else
#line 118 "goal_expr_to_goal.m"
                                                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 136 "goal_expr_to_goal.m"
                                                    {
#line 136 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 136 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_36;
#line 136 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_37;
#line 136 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_38;
#line 136 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_606;
#line 136 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_607;
#line 136 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_608 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));

#line 137 "goal_expr_to_goal.m"
                                                      {
#line 137 "goal_expr_to_goal.m"
                                                        parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Vars0_608, &hlds__make_hlds__goal_expr_to_goal__Vars_36);
                                                      }
#line 138 "goal_expr_to_goal.m"
                                                      {
#line 138 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr_35, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                      }
#line 141 "goal_expr_to_goal.m"
                                                      {
#line 141 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__Reason_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 141 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Reason_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_36));
#line 141 "goal_expr_to_goal.m"
                                                      }
#line 142 "goal_expr_to_goal.m"
                                                      {
#line 142 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__GoalExpr_606 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 142 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_606, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 142 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_606, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_38));
#line 142 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_606, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_37));
#line 142 "goal_expr_to_goal.m"
                                                      }
#line 143 "goal_expr_to_goal.m"
                                                      {
#line 143 "goal_expr_to_goal.m"
                                                        hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_607);
                                                      }
#line 144 "goal_expr_to_goal.m"
                                                      {
#line 144 "goal_expr_to_goal.m"
                                                        MR_Word base;
#line 144 "goal_expr_to_goal.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "goal_expr_to_goal.m"
                                                        *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 144 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_606));
#line 144 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_607));
#line 144 "goal_expr_to_goal.m"
                                                      }
#line 136 "goal_expr_to_goal.m"
                                                    }
#line 118 "goal_expr_to_goal.m"
                                                  else
#line 118 "goal_expr_to_goal.m"
                                                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 146 "goal_expr_to_goal.m"
                                                      {
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_42;
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_43;
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_573_573;
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_609;
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_610;
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_611;
#line 146 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_612;

#line 148 "goal_expr_to_goal.m"
                                                        {
#line 148 "goal_expr_to_goal.m"
                                                          parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__StateVars0_39, &hlds__make_hlds__goal_expr_to_goal__StateVars_611);
                                                        }
#line 149 "goal_expr_to_goal.m"
                                                        {
#line 149 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVars_611, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_573_573);
                                                        }
#line 151 "goal_expr_to_goal.m"
                                                        {
#line 151 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr0_40, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_612, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_42, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_573_573, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                        }
#line 154 "goal_expr_to_goal.m"
                                                        {
#line 154 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_611, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
                                                        }
#line 158 "goal_expr_to_goal.m"
                                                        {
#line 158 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_609 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 158 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_609, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 158 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_609, 1) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6]));
#line 158 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_609, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_612));
#line 158 "goal_expr_to_goal.m"
                                                        }
#line 159 "goal_expr_to_goal.m"
                                                        {
#line 159 "goal_expr_to_goal.m"
                                                          hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_610);
                                                        }
#line 160 "goal_expr_to_goal.m"
                                                        {
#line 160 "goal_expr_to_goal.m"
                                                          MR_Word base;
#line 160 "goal_expr_to_goal.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 160 "goal_expr_to_goal.m"
                                                          *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 160 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_609));
#line 160 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_610));
#line 160 "goal_expr_to_goal.m"
                                                        }
#line 146 "goal_expr_to_goal.m"
                                                      }
#line 118 "goal_expr_to_goal.m"
                                                    else
#line 118 "goal_expr_to_goal.m"
                                                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 320 "goal_expr_to_goal.m"
                                                        {
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_781_781;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Mutables_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MutableGetExprs_101;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MutableSetExprs_102;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GetExprs_108;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SetExprs_109;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr1_110;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_460_460;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_461_461;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_462_462;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_463_463;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_466_466;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_666;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_667;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_668;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_669;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_670;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_671;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_672 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_673;
#line 320 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_674;

#line 321 "goal_expr_to_goal.m"
                                                          {
#line 321 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__V_460_460 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 321 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_460_460, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
#line 321 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_460_460, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0_1));
#line 321 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_460_460, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 321 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_460_460, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 321 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_460_460, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201));
#line 321 "goal_expr_to_goal.m"
                                                          }
#line 8913 "hlds.make_hlds.goal_expr_to_goal.c"
                                                          hlds__make_hlds__goal_expr_to_goal__TypeInfo_781_781 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0];
#line 321 "goal_expr_to_goal.m"
                                                          {
#line 321 "goal_expr_to_goal.m"
                                                            mercury__list__map4_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__TypeInfo_781_781, hlds__make_hlds__goal_expr_to_goal__TypeInfo_781_781, hlds__make_hlds__goal_expr_to_goal__V_460_460, hlds__make_hlds__goal_expr_to_goal__Mutables_98, &hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99, &hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100, &hlds__make_hlds__goal_expr_to_goal__MutableGetExprs_101, &hlds__make_hlds__goal_expr_to_goal__MutableSetExprs_102);
                                                          }
#line 331 "goal_expr_to_goal.m"
                                                          if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "goal_expr_to_goal.m"
                                                            {
#line 333 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 334 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__StateVars0_671 = hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100;
#line 335 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__GetExprs_108 = hlds__make_hlds__goal_expr_to_goal__MutableGetExprs_101;
#line 336 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__SetExprs_109 = hlds__make_hlds__goal_expr_to_goal__MutableSetExprs_102;
#line 332 "goal_expr_to_goal.m"
                                                            }
#line 331 "goal_expr_to_goal.m"
                                                          else
#line 324 "goal_expr_to_goal.m"
                                                            {
#line 324 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO_97, (MR_Integer) 0)));
#line 324 "goal_expr_to_goal.m"
                                                              MR_String hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104;
#line 324 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__IOGetExpr_106;
#line 324 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__IOSetExpr_107;

#line 325 "goal_expr_to_goal.m"
                                                              {
#line 325 "goal_expr_to_goal.m"
                                                                mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__IOStateVar_103, &hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104);
                                                              }
#line 326 "goal_expr_to_goal.m"
                                                              {
#line 326 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104));
#line 326 "goal_expr_to_goal.m"
                                                              }
#line 327 "goal_expr_to_goal.m"
                                                              {
#line 327 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__IOStateVar_103, &hlds__make_hlds__goal_expr_to_goal__IOGetExpr_106, &hlds__make_hlds__goal_expr_to_goal__IOSetExpr_107);
                                                              }
#line 328 "goal_expr_to_goal.m"
                                                              {
#line 328 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__StateVars0_671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars0_671, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVar_103));
#line 328 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars0_671, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100));
#line 328 "goal_expr_to_goal.m"
                                                              }
#line 329 "goal_expr_to_goal.m"
                                                              {
#line 329 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__GetExprs_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetExprs_108, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOGetExpr_106));
#line 329 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetExprs_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableGetExprs_101));
#line 329 "goal_expr_to_goal.m"
                                                              }
#line 330 "goal_expr_to_goal.m"
                                                              {
#line 330 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__SetExprs_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetExprs_109, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOSetExpr_107));
#line 330 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetExprs_109, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableSetExprs_102));
#line 330 "goal_expr_to_goal.m"
                                                              }
#line 324 "goal_expr_to_goal.m"
                                                            }
#line 339 "goal_expr_to_goal.m"
                                                          {
#line 339 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__V_463_463 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_463_463, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubExpr0_672));
#line 339 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_463_463, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "goal_expr_to_goal.m"
                                                          }
#line 339 "goal_expr_to_goal.m"
                                                          {
#line 339 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__V_462_462 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_781_781, hlds__make_hlds__goal_expr_to_goal__V_463_463, hlds__make_hlds__goal_expr_to_goal__SetExprs_109);
                                                          }
#line 339 "goal_expr_to_goal.m"
                                                          {
#line 339 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__V_461_461 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_781_781, hlds__make_hlds__goal_expr_to_goal__GetExprs_108, hlds__make_hlds__goal_expr_to_goal__V_462_462);
                                                          }
#line 339 "goal_expr_to_goal.m"
                                                          {
#line 339 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__SubExpr1_110 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__V_461_461);
                                                          }
#line 341 "goal_expr_to_goal.m"
                                                          {
#line 341 "goal_expr_to_goal.m"
                                                            parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__StateVars0_671, &hlds__make_hlds__goal_expr_to_goal__StateVars_668);
                                                          }
#line 342 "goal_expr_to_goal.m"
                                                          {
#line 342 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVars_668, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_673, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_466_466);
                                                          }
#line 344 "goal_expr_to_goal.m"
                                                          {
#line 344 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr1_110, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_669, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_673, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_674, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_466_466, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                          }
#line 347 "goal_expr_to_goal.m"
                                                          {
#line 347 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_668, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_674, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
                                                          }
#line 351 "goal_expr_to_goal.m"
                                                          {
#line 351 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__Reason_670 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 351 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_670, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 351 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_670, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_95));
#line 351 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_670, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_96));
#line 351 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_670, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105));
#line 351 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_670, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99));
#line 351 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_670, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "goal_expr_to_goal.m"
                                                          }
#line 353 "goal_expr_to_goal.m"
                                                          {
#line 353 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__GoalExpr_666 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 353 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_666, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 353 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_666, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_670));
#line 353 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_666, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_669));
#line 353 "goal_expr_to_goal.m"
                                                          }
#line 354 "goal_expr_to_goal.m"
                                                          {
#line 354 "goal_expr_to_goal.m"
                                                            hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_667);
                                                          }
#line 355 "goal_expr_to_goal.m"
                                                          {
#line 355 "goal_expr_to_goal.m"
                                                            MR_Word base;
#line 355 "goal_expr_to_goal.m"
                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 355 "goal_expr_to_goal.m"
                                                            *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 355 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_666));
#line 355 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_667));
#line 355 "goal_expr_to_goal.m"
                                                          }
#line 320 "goal_expr_to_goal.m"
                                                        }
#line 118 "goal_expr_to_goal.m"
                                                      else
#line 118 "goal_expr_to_goal.m"
                                                        if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 358 "goal_expr_to_goal.m"
                                                          {
#line 358 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 358 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 358 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));
#line 358 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 358 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 6)));
#line 358 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_679 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));

#line 380 "goal_expr_to_goal.m"
                                                            if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "goal_expr_to_goal.m"
                                                              {
#line 381 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr0_679, hlds__make_hlds__goal_expr_to_goal__Then0_114, hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115, hlds__make_hlds__goal_expr_to_goal__Catches0_116, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
#line 381 "goal_expr_to_goal.m"
                                                                return;
                                                              }
#line 380 "goal_expr_to_goal.m"
                                                            else
#line 360 "goal_expr_to_goal.m"
                                                              {
#line 360 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_113, (MR_Integer) 0)));

#line 368 "goal_expr_to_goal.m"
                                                                if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "goal_expr_to_goal.m"
                                                                  {
#line 362 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_675;

#line 363 "goal_expr_to_goal.m"
                                                                    {
#line 363 "goal_expr_to_goal.m"
                                                                      parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_118, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_675);
                                                                    }
#line 364 "goal_expr_to_goal.m"
                                                                    {
#line 364 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_118, hlds__make_hlds__goal_expr_to_goal__IOStateVar_675, hlds__make_hlds__goal_expr_to_goal__SubExpr0_679, hlds__make_hlds__goal_expr_to_goal__Then0_114, hlds__make_hlds__goal_expr_to_goal__Catches0_116, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
#line 364 "goal_expr_to_goal.m"
                                                                      return;
                                                                    }
#line 362 "goal_expr_to_goal.m"
                                                                  }
#line 368 "goal_expr_to_goal.m"
                                                                else
#line 369 "goal_expr_to_goal.m"
                                                                  {
#line 369 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_121;
#line 369 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_122;
#line 369 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_450_450;

#line 374 "goal_expr_to_goal.m"
                                                                    {
#line 374 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__Msg_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_121, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 374 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27])));
#line 374 "goal_expr_to_goal.m"
                                                                    }
#line 376 "goal_expr_to_goal.m"
                                                                    {
#line 376 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_450_450 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_450_450, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_121));
#line 376 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_450_450, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "goal_expr_to_goal.m"
                                                                    }
#line 375 "goal_expr_to_goal.m"
                                                                    {
#line 375 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__Spec_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 375 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 375 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_122, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_450_450));
#line 375 "goal_expr_to_goal.m"
                                                                    }
#line 377 "goal_expr_to_goal.m"
                                                                    {
#line 377 "goal_expr_to_goal.m"
                                                                      MR_Word base;
#line 377 "goal_expr_to_goal.m"
                                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "goal_expr_to_goal.m"
                                                                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208 = base;
#line 377 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_122));
#line 377 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207));
#line 377 "goal_expr_to_goal.m"
                                                                    }
#line 378 "goal_expr_to_goal.m"
                                                                    {
#line 378 "goal_expr_to_goal.m"
                                                                      *hlds__make_hlds__goal_expr_to_goal__Goal_22 = hlds__make_goal__true_goal_0_f_0();
                                                                    }
#line 378 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 378 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 378 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 378 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 378 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 369 "goal_expr_to_goal.m"
                                                                  }
#line 360 "goal_expr_to_goal.m"
                                                              }
#line 358 "goal_expr_to_goal.m"
                                                          }
#line 118 "goal_expr_to_goal.m"
                                                        else
#line 591 "goal_expr_to_goal.m"
                                                          {
#line 591 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_794_794 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 591 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__A_187;
#line 591 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__B_188;
#line 591 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_761 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 591 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__A0_762 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 591 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__B0_763 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 604 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarA_189;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_211_211;
#line 596 "goal_expr_to_goal.m"
                                                            MR_String hlds__make_hlds__goal_expr_to_goal__V_212_212;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_213_213;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_214_214;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_215_215;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_191_191;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_190_190;

#line 592 "goal_expr_to_goal.m"
                                                            {
#line 592 "goal_expr_to_goal.m"
                                                              parse_tree__prog_data__rename_vars_in_term_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_794_794, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__A0_762, &hlds__make_hlds__goal_expr_to_goal__A_187);
                                                            }
#line 593 "goal_expr_to_goal.m"
                                                            {
#line 593 "goal_expr_to_goal.m"
                                                              parse_tree__prog_data__rename_vars_in_term_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_794_794, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__B0_763, &hlds__make_hlds__goal_expr_to_goal__B_188);
                                                            }
#line 596 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__A_187)) == (MR_mktag((MR_Integer) 0)));
#line 596 "goal_expr_to_goal.m"
                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 596 "goal_expr_to_goal.m"
                                                              {
#line 596 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__A_187, (MR_Integer) 0)));
#line 596 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__A_187, (MR_Integer) 1)));
#line 596 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__A_187, (MR_Integer) 2)));
#line 596 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_211_211)) == (MR_mktag((MR_Integer) 0)));
#line 596 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 596 "goal_expr_to_goal.m"
                                                                  {
#line 596 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_211_211, (MR_Integer) 0)));
#line 596 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_212_212, (MR_String) "!") == 0);
#line 596 "goal_expr_to_goal.m"
                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 596 "goal_expr_to_goal.m"
                                                                      {
#line 596 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_213_213)) == (MR_mktag((MR_Integer) 1)));
#line 596 "goal_expr_to_goal.m"
                                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 596 "goal_expr_to_goal.m"
                                                                          {
#line 596 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_213_213, (MR_Integer) 0)));
#line 596 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_213_213, (MR_Integer) 1)));
#line 596 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_215_215 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "goal_expr_to_goal.m"
                                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 596 "goal_expr_to_goal.m"
                                                                              {
#line 596 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_214_214)) == (MR_mktag((MR_Integer) 1)));
#line 596 "goal_expr_to_goal.m"
                                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 596 "goal_expr_to_goal.m"
                                                                                  {
#line 596 "goal_expr_to_goal.m"
                                                                                    hlds__make_hlds__goal_expr_to_goal__StateVarA_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_214_214, (MR_Integer) 0)));
#line 596 "goal_expr_to_goal.m"
                                                                                    hlds__make_hlds__goal_expr_to_goal__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_214_214, (MR_Integer) 1)));
#line 596 "goal_expr_to_goal.m"
                                                                                  }
#line 596 "goal_expr_to_goal.m"
                                                                              }
#line 596 "goal_expr_to_goal.m"
                                                                          }
#line 596 "goal_expr_to_goal.m"
                                                                      }
#line 596 "goal_expr_to_goal.m"
                                                                  }
#line 596 "goal_expr_to_goal.m"
                                                              }
#line 604 "goal_expr_to_goal.m"
                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 597 "goal_expr_to_goal.m"
                                                              {
#line 597 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216_216;
#line 600 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_192;
#line 598 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_217_217;
#line 598 "goal_expr_to_goal.m"
                                                                MR_String hlds__make_hlds__goal_expr_to_goal__V_218_218;
#line 598 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_219_219;
#line 598 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_220_220;
#line 598 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_221_221;
#line 598 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_194_194;
#line 598 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_193_193;

#line 597 "goal_expr_to_goal.m"
                                                                {
#line 597 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVarA_189, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216_216);
                                                                }
#line 598 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__B_188)) == (MR_mktag((MR_Integer) 0)));
#line 598 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 598 "goal_expr_to_goal.m"
                                                                  {
#line 598 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 0)));
#line 598 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 1)));
#line 598 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 2)));
#line 598 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_217_217)) == (MR_mktag((MR_Integer) 0)));
#line 598 "goal_expr_to_goal.m"
                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 598 "goal_expr_to_goal.m"
                                                                      {
#line 598 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_217_217, (MR_Integer) 0)));
#line 598 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_String) "!") == 0);
#line 598 "goal_expr_to_goal.m"
                                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 598 "goal_expr_to_goal.m"
                                                                          {
#line 598 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_219_219)) == (MR_mktag((MR_Integer) 1)));
#line 598 "goal_expr_to_goal.m"
                                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 598 "goal_expr_to_goal.m"
                                                                              {
#line 598 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 0)));
#line 598 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 1)));
#line 598 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_221_221 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "goal_expr_to_goal.m"
                                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 598 "goal_expr_to_goal.m"
                                                                                  {
#line 598 "goal_expr_to_goal.m"
                                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_220_220)) == (MR_mktag((MR_Integer) 1)));
#line 598 "goal_expr_to_goal.m"
                                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 598 "goal_expr_to_goal.m"
                                                                                      {
#line 598 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__StateVarB_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_220_220, (MR_Integer) 0)));
#line 598 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_220_220, (MR_Integer) 1)));
#line 598 "goal_expr_to_goal.m"
                                                                                      }
#line 598 "goal_expr_to_goal.m"
                                                                                  }
#line 598 "goal_expr_to_goal.m"
                                                                              }
#line 598 "goal_expr_to_goal.m"
                                                                          }
#line 598 "goal_expr_to_goal.m"
                                                                      }
#line 598 "goal_expr_to_goal.m"
                                                                  }
#line 600 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 599 "goal_expr_to_goal.m"
                                                                  {
#line 599 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVarB_192, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216_216, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                                  }
#line 600 "goal_expr_to_goal.m"
                                                                else
#line 599 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216_216;
#line 603 "goal_expr_to_goal.m"
                                                                {
#line 603 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__Goal_22 = hlds__make_goal__true_goal_0_f_0();
                                                                }
#line 603 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 603 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 603 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 603 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 603 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 597 "goal_expr_to_goal.m"
                                                              }
#line 604 "goal_expr_to_goal.m"
                                                            else
#line 607 "goal_expr_to_goal.m"
                                                              {
#line 607 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_760;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_223_223;
#line 604 "goal_expr_to_goal.m"
                                                                MR_String hlds__make_hlds__goal_expr_to_goal__V_224_224;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_225_225;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_226_226;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_227_227;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_196_196;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_195_195;

#line 604 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__B_188)) == (MR_mktag((MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                  {
#line 604 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 1)));
#line 604 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 2)));
#line 604 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_223_223)) == (MR_mktag((MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                      {
#line 604 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__V_224_224 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_223_223, (MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_224_224, (MR_String) "!") == 0);
#line 604 "goal_expr_to_goal.m"
                                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                          {
#line 604 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_225_225)) == (MR_mktag((MR_Integer) 1)));
#line 604 "goal_expr_to_goal.m"
                                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                              {
#line 604 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_Integer) 1)));
#line 604 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                                                                        hlds__make_hlds__goal_expr_to_goal__StateVarB_760 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 1)));
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
                                                                    {
#line 605 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVarB_760, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                                    }
#line 606 "goal_expr_to_goal.m"
                                                                    {
#line 606 "goal_expr_to_goal.m"
                                                                      *hlds__make_hlds__goal_expr_to_goal__Goal_22 = hlds__make_goal__true_goal_0_f_0();
                                                                    }
#line 606 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 606 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 606 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 606 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 606 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 605 "goal_expr_to_goal.m"
                                                                  }
#line 607 "goal_expr_to_goal.m"
                                                                else
#line 610 "goal_expr_to_goal.m"
                                                                  {
#line 610 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_231_231;

#line 608 "goal_expr_to_goal.m"
                                                                    {
#line 608 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(hlds__make_hlds__goal_expr_to_goal__A_187, hlds__make_hlds__goal_expr_to_goal__B_188, hlds__make_hlds__goal_expr_to_goal__Context_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__Purity_761, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_231_231, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                                    }
#line 611 "goal_expr_to_goal.m"
                                                                    {
#line 611 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_231_231, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
#line 611 "goal_expr_to_goal.m"
                                                                      return;
                                                                    }
#line 610 "goal_expr_to_goal.m"
                                                                  }
#line 607 "goal_expr_to_goal.m"
                                                              }
#line 591 "goal_expr_to_goal.m"
                                                          }
#line 118 "goal_expr_to_goal.m"
      }
#line 118 "goal_expr_to_goal.m"
      break;
#line 118 "goal_expr_to_goal.m"
    }
#line 102 "goal_expr_to_goal.m"
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
#line 94 "goal_expr_to_goal.m"
  {
#line 94 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 94 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal1_28;
#line 94 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_29;
#line 94 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo1_30;
#line 94 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_31;

#line 95 "goal_expr_to_goal.m"
    {
#line 95 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal0_18, hlds__make_hlds__goal_expr_to_goal__Context_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__Goal1_28, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_34, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_43);
    }
#line 98 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__GoalExpr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal1_28, (MR_Integer) 0)));
#line 98 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__GoalInfo1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal1_28, (MR_Integer) 1)));
#line 99 "goal_expr_to_goal.m"
    {
#line 99 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__goal_expr_to_goal__Context_19, hlds__make_hlds__goal_expr_to_goal__GoalInfo1_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_31);
    }
#line 100 "goal_expr_to_goal.m"
    {
#line 100 "goal_expr_to_goal.m"
      MR_Word base;
#line 100 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_21 = base;
#line 100 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_29));
#line 100 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_31));
#line 100 "goal_expr_to_goal.m"
    }
#line 94 "goal_expr_to_goal.m"
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
