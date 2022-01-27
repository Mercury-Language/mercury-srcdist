/*
** Automatically generated from `prop_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module check_hlds.prop_mode_constraints. */
/* :- implementation. */

/*
INIT mercury__check_hlds__prop_mode_constraints__init
ENDINIT
*/

#include "check_hlds.prop_mode_constraints.mih"


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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.build_mode_constraints.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "check_hlds.prop_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 145 "check_hlds.prop_mode_constraints.c"
static const MR_VA_TypeInfo_Struct2 check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

#line 148 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

#line 151 "check_hlds.prop_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 163 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 166 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 169 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "check_hlds.prop_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0__vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

#line 175 "check_hlds.prop_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001(
#line 178 "check_hlds.prop_mode_constraints.c"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 180 "check_hlds.prop_mode_constraints.c"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2);

#line 183 "check_hlds.prop_mode_constraints.c"
static void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001(
#line 186 "check_hlds.prop_mode_constraints.c"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 188 "check_hlds.prop_mode_constraints.c"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 190 "check_hlds.prop_mode_constraints.c"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3);

#line 247 "prop_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(
#line 247 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__HeadVar__1_35,
#line 247 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__HeadVar__2_36);

#line 550 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(
#line 550 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_8,
#line 550 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_9,
#line 550 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredConstraints_10,
#line 550 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_11,
#line 550 "prop_mode_constraints.m"
  MR_Integer check_hlds__prop_mode_constraints__ProcId_12);

#line 542 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1(
#line 542 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 542 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 542 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 542 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3);

#line 522 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(
#line 522 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_7,
#line 522 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_8,
#line 522 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredConstraintsMap_9,
#line 522 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_10);

#line 474 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(
#line 474 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__CallGoalExpr_7,
#line 474 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Unifications_8,
#line 474 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__NewArgs_9,
#line 474 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__GoalExpr_10,
#line 474 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18,
#line 474 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_19);

#line 432 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__make_unification_11_p_0(
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Context_12,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Var0_13,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__Var_14,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_0_27,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_28,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_29,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_30,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_32,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_34);

#line 423 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0_1(
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_9,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_10);

#line 416 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0(
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Context_11,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__Unifications_12,
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_0_17,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_18,
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_19,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_20,
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_21,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_22,
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_23,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_24);

#line 399 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(
#line 399 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Goal_4,
#line 399 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_8,
#line 399 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_9);

#line 393 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1(
#line 393 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 393 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 393 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 393 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3);

#line 390 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(
#line 390 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_4,
#line 390 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_5);

#line 368 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4(
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 368 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 368 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 368 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 368 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

#line 335 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3(
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 335 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 335 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 335 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 335 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

#line 279 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2(
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 279 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 279 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 279 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 279 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

#line 285 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1(
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 285 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 285 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 285 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 285 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

#line 268 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(
#line 268 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_0_78,
#line 268 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_79,
#line 268 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80,
#line 268 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81,
#line 268 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82,
#line 268 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83,
#line 268 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84,
#line 268 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);

#line 220 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_9,
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_10,
#line 220 "prop_mode_constraints.m"
  MR_Integer check_hlds__prop_mode_constraints__ProcId_11,
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ProcInfo_12,
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_17,
#line 220 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_18,
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_0_19,
#line 220 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_20);

#line 209 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2(
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 209 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 209 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6);

#line 207 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1(
#line 207 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 207 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 207 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2);

#line 136 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(
#line 136 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_8,
#line 136 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14,
#line 136 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15,
#line 136 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16,
#line 136 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17,
#line 136 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18,
#line 136 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19);

#line 514 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1(
#line 514 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 514 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 514 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 514 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3);

#line 247 "prop_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3(
#line 247 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 247 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 247 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2);

#line 244 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2(
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 244 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 244 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 244 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 244 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8);

#line 243 "prop_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1(
#line 243 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 243 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1);

#line 116 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2(
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 116 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 116 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 116 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_7);

#line 106 "prop_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1(
#line 106 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 106 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_1[12][3];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_3[9][2];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_5[2][10];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_6[2][11];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_7[3][6];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_8[1][9];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_9[1][14];

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_10[2][1];




static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_1[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_3[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_5[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_4[1])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[2])),
    ((MR_Box) (check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_3[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_3[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__prop_mode_constraints_scalar_common_10[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Constraints for"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_3[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_5[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_7[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_9[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__prop_mode_constraints_scalar_common_10[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Making call args unique for cbma"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 936 "check_hlds.prop_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 945 "check_hlds.prop_mode_constraints.c"
static const MR_VA_TypeInfo_Struct2 check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &check_hlds__prop_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
  }
};

#line 955 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
  }
};

#line 964 "check_hlds.prop_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 972 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 980 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 988 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__prop_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 997 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1005 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1013 "check_hlds.prop_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__prop_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1021 "check_hlds.prop_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__prop_mode_constraints__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0__vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__prop_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
  }
};

#line 1030 "check_hlds.prop_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__prop_mode_constraints__check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001)),
  ((MR_Box) (check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001)),
  (MR_String) "check_hlds.prop_mode_constraints",
  (MR_String) "pred_constraints_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__prop_mode_constraints__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0__vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1047 "check_hlds.prop_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0_10001(
#line 1050 "check_hlds.prop_mode_constraints.c"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 1052 "check_hlds.prop_mode_constraints.c"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2)
#line 1054 "check_hlds.prop_mode_constraints.c"
{
#line 1056 "check_hlds.prop_mode_constraints.c"
  {
#line 1058 "check_hlds.prop_mode_constraints.c"
    MR_bool check_hlds__prop_mode_constraints__succeeded;

#line 1061 "check_hlds.prop_mode_constraints.c"
    {
#line 1063 "check_hlds.prop_mode_constraints.c"
      check_hlds__prop_mode_constraints__succeeded = check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2));
    }
#line 1066 "check_hlds.prop_mode_constraints.c"
    return check_hlds__prop_mode_constraints__succeeded;
#line 1068 "check_hlds.prop_mode_constraints.c"
  }
#line 1070 "check_hlds.prop_mode_constraints.c"
}

#line 1073 "check_hlds.prop_mode_constraints.c"
static void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0_10001(
#line 1076 "check_hlds.prop_mode_constraints.c"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 1078 "check_hlds.prop_mode_constraints.c"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 1080 "check_hlds.prop_mode_constraints.c"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3)
#line 1082 "check_hlds.prop_mode_constraints.c"
{
#line 1084 "check_hlds.prop_mode_constraints.c"
  {
#line 1086 "check_hlds.prop_mode_constraints.c"
    MR_Word check_hlds__prop_mode_constraints__conv0_HeadVar__1_1;

#line 1089 "check_hlds.prop_mode_constraints.c"
    {
#line 1091 "check_hlds.prop_mode_constraints.c"
      check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0(&check_hlds__prop_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3));
    }
#line 1094 "check_hlds.prop_mode_constraints.c"
    *check_hlds__prop_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_HeadVar__1_1));
#line 1096 "check_hlds.prop_mode_constraints.c"
  }
#line 1098 "check_hlds.prop_mode_constraints.c"
}

#line 247 "prop_mode_constraints.m"
static MR_Word MR_CALL 
check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(
#line 247 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__HeadVar__1_35,
#line 247 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__HeadVar__2_36)
#line 247 "prop_mode_constraints.m"
{
#line 247 "prop_mode_constraints.m"
  {
#line 247 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 247 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__HeadVar__3_37;
#line 247 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__1_35, (MR_Integer) 0)));
#line 247 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__1_35, (MR_Integer) 2)));
#line 247 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__1_35, (MR_Integer) 3)));
#line 247 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__1_35, (MR_Integer) 4)));
#line 247 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__1_35, (MR_Integer) 1)));

#line 247 "prop_mode_constraints.m"
    {
#line 247 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__HeadVar__3_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 247 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__3_37, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__V_46_46));
#line 247 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__3_37, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__HeadVar__2_36));
#line 247 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__3_37, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__V_48_48));
#line 247 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__3_37, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__V_49_49));
#line 247 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__HeadVar__3_37, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__V_50_50));
#line 247 "prop_mode_constraints.m"
    }
#line 247 "prop_mode_constraints.m"
    return check_hlds__prop_mode_constraints__HeadVar__3_37;
#line 247 "prop_mode_constraints.m"
  }
#line 247 "prop_mode_constraints.m"
}

#line 38 "prop_mode_constraints.m"
void MR_CALL 
check_hlds__prop_mode_constraints____Compare____pred_constraints_map_0_0(
#line 38 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__HeadVar__1_1,
#line 38 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__HeadVar__2_2,
#line 38 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__HeadVar__3_3)
#line 38 "prop_mode_constraints.m"
{
#line 38 "prop_mode_constraints.m"
  {
#line 38 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 38 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Cast_HeadVar1_4 = check_hlds__prop_mode_constraints__HeadVar__2_2;
#line 38 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Cast_HeadVar2_5 = check_hlds__prop_mode_constraints__HeadVar__3_3;

#line 38 "prop_mode_constraints.m"
    {
#line 38 "prop_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[1], check_hlds__prop_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__prop_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__prop_mode_constraints__Cast_HeadVar2_5)));
#line 38 "prop_mode_constraints.m"
      return;
    }
#line 38 "prop_mode_constraints.m"
  }
#line 38 "prop_mode_constraints.m"
}

#line 38 "prop_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__prop_mode_constraints____Unify____pred_constraints_map_0_0(
#line 38 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__HeadVar__1_1,
#line 38 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__HeadVar__2_2)
#line 38 "prop_mode_constraints.m"
{
#line 38 "prop_mode_constraints.m"
  {
#line 38 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 38 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Cast_HeadVar1_3 = check_hlds__prop_mode_constraints__HeadVar__1_1;
#line 38 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Cast_HeadVar2_4 = check_hlds__prop_mode_constraints__HeadVar__2_2;

#line 38 "prop_mode_constraints.m"
    {
#line 38 "prop_mode_constraints.m"
      return check_hlds__prop_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[1], ((MR_Box) (check_hlds__prop_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__prop_mode_constraints__Cast_HeadVar2_4)));
    }
#line 38 "prop_mode_constraints.m"
    return check_hlds__prop_mode_constraints__succeeded;
#line 38 "prop_mode_constraints.m"
  }
#line 38 "prop_mode_constraints.m"
}

#line 550 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(
#line 550 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_8,
#line 550 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_9,
#line 550 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredConstraints_10,
#line 550 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_11,
#line 550 "prop_mode_constraints.m"
  MR_Integer check_hlds__prop_mode_constraints__ProcId_12)
#line 550 "prop_mode_constraints.m"
{
#line 554 "prop_mode_constraints.m"
  {
#line 554 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 554 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Globals_14;
#line 554 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ProcSpecAnnConstraints_15;
#line 554 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_23_23;
#line 554 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_25_25;
#line 554 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_27_27;

#line 555 "prop_mode_constraints.m"
    {
#line 555 "prop_mode_constraints.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__prop_mode_constraints__ModuleInfo_8, &check_hlds__prop_mode_constraints__Globals_14);
    }
#line 558 "prop_mode_constraints.m"
    {
#line 558 "prop_mode_constraints.m"
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__prop_mode_constraints__Globals_14, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[4]));
    }
#line 561 "prop_mode_constraints.m"
    {
#line 561 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_27_27, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__PredId_11));
#line 561 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_27_27, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ProcId_12));
#line 561 "prop_mode_constraints.m"
    }
#line 560 "prop_mode_constraints.m"
    {
#line 560 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_25_25 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(check_hlds__prop_mode_constraints__ModuleInfo_8, (MR_Integer) 0, check_hlds__prop_mode_constraints__V_27_27);
    }
#line 561 "prop_mode_constraints.m"
    {
#line 561 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__prop_mode_constraints__V_25_25, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[8]));
    }
#line 560 "prop_mode_constraints.m"
    {
#line 560 "prop_mode_constraints.m"
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__prop_mode_constraints__Globals_14, check_hlds__prop_mode_constraints__V_23_23);
    }
#line 562 "prop_mode_constraints.m"
    {
#line 562 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__ProcSpecAnnConstraints_15 = check_hlds__abstract_mode_constraints__proc_specific_annotated_constraints_2_f_0(check_hlds__prop_mode_constraints__ProcId_12, check_hlds__prop_mode_constraints__PredConstraints_10);
    }
#line 564 "prop_mode_constraints.m"
    {
#line 564 "prop_mode_constraints.m"
      check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0(check_hlds__prop_mode_constraints__Globals_14, check_hlds__prop_mode_constraints__ConstraintVarSet_9, check_hlds__prop_mode_constraints__ProcSpecAnnConstraints_15);
#line 564 "prop_mode_constraints.m"
      return;
    }
#line 554 "prop_mode_constraints.m"
  }
#line 550 "prop_mode_constraints.m"
}

#line 542 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1(
#line 542 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 542 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 542 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 542 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3)
#line 542 "prop_mode_constraints.m"
{
#line 542 "prop_mode_constraints.m"
  {
#line 542 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;

#line 542 "prop_mode_constraints.m"
    {
#line 542 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__pretty_print_proc_constraints_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 6))), ((MR_Integer) check_hlds__prop_mode_constraints__wrapper_arg_1));
#line 542 "prop_mode_constraints.m"
      return;
    }
#line 542 "prop_mode_constraints.m"
  }
#line 542 "prop_mode_constraints.m"
}

#line 522 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(
#line 522 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_7,
#line 522 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_8,
#line 522 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredConstraintsMap_9,
#line 522 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_10)
#line 522 "prop_mode_constraints.m"
{
#line 526 "prop_mode_constraints.m"
  {
#line 526 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_42_42;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Globals_12;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__PredInfo_13;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__PredConstraints_15;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__AllProcAnnConstraints_16;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_24_24;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_30_30;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_31_31;
#line 526 "prop_mode_constraints.m"
    MR_Tuple check_hlds__prop_mode_constraints__V_37_37;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_39_39;
#line 526 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_40_40;
#line 537 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv0_V_37_37;
#line 537 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_14_14;
#line 541 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_IO_18;

#line 527 "prop_mode_constraints.m"
    {
#line 527 "prop_mode_constraints.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__prop_mode_constraints__ModuleInfo_7, &check_hlds__prop_mode_constraints__Globals_12);
    }
#line 530 "prop_mode_constraints.m"
    {
#line 530 "prop_mode_constraints.m"
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__prop_mode_constraints__Globals_12, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[4]));
    }
#line 532 "prop_mode_constraints.m"
    {
#line 532 "prop_mode_constraints.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__prop_mode_constraints__ModuleInfo_7, check_hlds__prop_mode_constraints__PredId_10, &check_hlds__prop_mode_constraints__PredInfo_13);
    }
#line 1385 "check_hlds.prop_mode_constraints.c"
    check_hlds__prop_mode_constraints__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 534 "prop_mode_constraints.m"
    {
#line 534 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_31_31 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, check_hlds__prop_mode_constraints__PredInfo_13);
    }
#line 534 "prop_mode_constraints.m"
    {
#line 534 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_30_30 = mercury__list__f_43_43_2_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_42_42, check_hlds__prop_mode_constraints__V_31_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[8]));
    }
#line 533 "prop_mode_constraints.m"
    {
#line 533 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_24_24 = mercury__list__f_43_43_2_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__prop_mode_constraints_scalar_common_3[6]), check_hlds__prop_mode_constraints__V_30_30);
    }
#line 533 "prop_mode_constraints.m"
    {
#line 533 "prop_mode_constraints.m"
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__prop_mode_constraints__Globals_12, check_hlds__prop_mode_constraints__V_24_24);
    }
#line 537 "prop_mode_constraints.m"
    {
#line 537 "prop_mode_constraints.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_2[0], check_hlds__prop_mode_constraints__PredConstraintsMap_9, ((MR_Box) (check_hlds__prop_mode_constraints__PredId_10)), &check_hlds__prop_mode_constraints__conv0_V_37_37);
    }
#line 537 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__V_37_37 = ((MR_Tuple) check_hlds__prop_mode_constraints__conv0_V_37_37);
#line 537 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_37_37, (MR_Integer) 0)));
#line 537 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__PredConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_37_37, (MR_Integer) 1)));
#line 538 "prop_mode_constraints.m"
    {
#line 538 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__AllProcAnnConstraints_16 = check_hlds__abstract_mode_constraints__allproc_annotated_constraints_1_f_0(check_hlds__prop_mode_constraints__PredConstraints_15);
    }
#line 539 "prop_mode_constraints.m"
    {
#line 539 "prop_mode_constraints.m"
      check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0(check_hlds__prop_mode_constraints__Globals_12, check_hlds__prop_mode_constraints__ConstraintVarSet_8, check_hlds__prop_mode_constraints__AllProcAnnConstraints_16);
    }
#line 542 "prop_mode_constraints.m"
    {
#line 542 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_39_39, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_5[1]));
#line 542 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_39_39, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0_1));
#line 542 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 542 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_39_39, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__ModuleInfo_7));
#line 542 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_39_39, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__ConstraintVarSet_8));
#line 542 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_39_39, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__PredConstraints_15));
#line 542 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_39_39, 6) = ((MR_Box) (check_hlds__prop_mode_constraints__PredId_10));
#line 542 "prop_mode_constraints.m"
    }
#line 544 "prop_mode_constraints.m"
    {
#line 544 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_40_40 = hlds__hlds_pred__pred_info_all_procids_1_f_0(check_hlds__prop_mode_constraints__PredInfo_13);
    }
#line 541 "prop_mode_constraints.m"
    {
#line 541 "prop_mode_constraints.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__prop_mode_constraints__V_39_39, check_hlds__prop_mode_constraints__V_40_40, ((MR_Box) ((MR_Integer) 0)), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_IO_18);
    }
#line 526 "prop_mode_constraints.m"
  }
#line 522 "prop_mode_constraints.m"
}

#line 474 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(
#line 474 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__CallGoalExpr_7,
#line 474 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Unifications_8,
#line 474 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__NewArgs_9,
#line 474 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__GoalExpr_10,
#line 474 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18,
#line 474 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_19)
#line 474 "prop_mode_constraints.m"
{
#line 479 "prop_mode_constraints.m"
  {
#line 479 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 479 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Context_13;
#line 479 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__CallNonlocals0_14;
#line 479 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__CallNonlocals_15;
#line 479 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__CallGoalInfo_16;
#line 479 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Goals_17;
#line 479 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_20_20;
#line 479 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_22_22;
#line 479 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_23_23;

#line 481 "prop_mode_constraints.m"
    {
#line 481 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18);
    }
#line 482 "prop_mode_constraints.m"
    {
#line 482 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__CallNonlocals0_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18);
    }
#line 483 "prop_mode_constraints.m"
    {
#line 483 "prop_mode_constraints.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__prop_mode_constraints__NewArgs_9, check_hlds__prop_mode_constraints__CallNonlocals0_14, &check_hlds__prop_mode_constraints__CallNonlocals_15);
    }
#line 484 "prop_mode_constraints.m"
    {
#line 484 "prop_mode_constraints.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__prop_mode_constraints__CallNonlocals_15, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_0_18, &check_hlds__prop_mode_constraints__CallGoalInfo_16);
    }
#line 485 "prop_mode_constraints.m"
    {
#line 485 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_20_20, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__CallGoalExpr_7));
#line 485 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_20_20, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__CallGoalInfo_16));
#line 485 "prop_mode_constraints.m"
    }
#line 485 "prop_mode_constraints.m"
    {
#line 485 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__Goals_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__Goals_17, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__V_20_20));
#line 485 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__Goals_17, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Unifications_8));
#line 485 "prop_mode_constraints.m"
    }
#line 488 "prop_mode_constraints.m"
    {
#line 488 "prop_mode_constraints.m"
      MR_Word base;
#line 488 "prop_mode_constraints.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 488 "prop_mode_constraints.m"
      *check_hlds__prop_mode_constraints__GoalExpr_10 = base;
#line 488 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 488 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 488 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Goals_17));
#line 488 "prop_mode_constraints.m"
    }
#line 489 "prop_mode_constraints.m"
    {
#line 489 "prop_mode_constraints.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_22_22);
    }
#line 490 "prop_mode_constraints.m"
    {
#line 490 "prop_mode_constraints.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__prop_mode_constraints__Context_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_22_22, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_23_23);
    }
#line 491 "prop_mode_constraints.m"
    {
#line 491 "prop_mode_constraints.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__prop_mode_constraints__CallNonlocals0_14, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_23_23, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_19);
#line 491 "prop_mode_constraints.m"
      return;
    }
#line 479 "prop_mode_constraints.m"
  }
#line 474 "prop_mode_constraints.m"
}

#line 432 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__make_unification_11_p_0(
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Context_12,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Var0_13,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__Var_14,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_0_27,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_28,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_29,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_30,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_32,
#line 432 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33,
#line 432 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_34)
#line 432 "prop_mode_constraints.m"
{
#line 438 "prop_mode_constraints.m"
  {
#line 438 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;

#line 439 "prop_mode_constraints.m"
    {
#line 439 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_29, check_hlds__prop_mode_constraints__Var0_13);
    }
#line 458 "prop_mode_constraints.m"
    if (check_hlds__prop_mode_constraints__succeeded)
#line 441 "prop_mode_constraints.m"
      {
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 441 "prop_mode_constraints.m"
        MR_String check_hlds__prop_mode_constraints__OldVarName_19;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__OldVarType_20;
#line 441 "prop_mode_constraints.m"
        MR_String check_hlds__prop_mode_constraints__NewVarName_21;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__UnificationGoal0_22;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__UnificationGoalExpr_23;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__UnificationGoalInfo0_24;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__UnificationGoalInfo_25;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__UnificationGoal_26;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__V_38_38;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__V_43_43;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__V_44_44;
#line 441 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__V_45_45;

#line 441 "prop_mode_constraints.m"
        {
#line 441 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__OldVarName_19 = mercury__varset__lookup_name_2_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_50_50, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31, check_hlds__prop_mode_constraints__Var0_13);
        }
#line 442 "prop_mode_constraints.m"
        {
#line 442 "prop_mode_constraints.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33, check_hlds__prop_mode_constraints__Var0_13, &check_hlds__prop_mode_constraints__OldVarType_20);
        }
#line 443 "prop_mode_constraints.m"
        {
#line 443 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__NewVarName_21 = mercury__string__f_43_43_2_f_0((MR_String) "Arg_", check_hlds__prop_mode_constraints__OldVarName_19);
        }
#line 444 "prop_mode_constraints.m"
        {
#line 444 "prop_mode_constraints.m"
          mercury__varset__new_uniquely_named_var_4_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_50_50, check_hlds__prop_mode_constraints__NewVarName_21, check_hlds__prop_mode_constraints__Var_14, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_32);
        }
#line 445 "prop_mode_constraints.m"
        {
#line 445 "prop_mode_constraints.m"
          hlds__vartypes__add_var_type_4_p_0(*check_hlds__prop_mode_constraints__Var_14, check_hlds__prop_mode_constraints__OldVarType_20, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_34);
        }
#line 448 "prop_mode_constraints.m"
        {
#line 448 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 448 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_38_38, 0) = ((MR_Box) (*check_hlds__prop_mode_constraints__Var_14));
#line 448 "prop_mode_constraints.m"
        }
#line 448 "prop_mode_constraints.m"
        {
#line 448 "prop_mode_constraints.m"
          hlds__make_goal__create_atomic_complicated_unification_7_p_0(check_hlds__prop_mode_constraints__Var0_13, check_hlds__prop_mode_constraints__V_38_38, check_hlds__prop_mode_constraints__Context_12, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__prop_mode_constraints_scalar_common_10[0]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, &check_hlds__prop_mode_constraints__UnificationGoal0_22);
        }
#line 451 "prop_mode_constraints.m"
        check_hlds__prop_mode_constraints__UnificationGoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__UnificationGoal0_22, (MR_Integer) 0)));
#line 451 "prop_mode_constraints.m"
        check_hlds__prop_mode_constraints__UnificationGoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__UnificationGoal0_22, (MR_Integer) 1)));
#line 453 "prop_mode_constraints.m"
        {
#line 453 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__V_45_45, 0) = ((MR_Box) (*check_hlds__prop_mode_constraints__Var_14));
#line 453 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "prop_mode_constraints.m"
        }
#line 453 "prop_mode_constraints.m"
        {
#line 453 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__V_44_44, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__Var0_13));
#line 453 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__V_44_44, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__V_45_45));
#line 453 "prop_mode_constraints.m"
        }
#line 453 "prop_mode_constraints.m"
        {
#line 453 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__V_43_43 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_50_50, check_hlds__prop_mode_constraints__V_44_44);
        }
#line 453 "prop_mode_constraints.m"
        {
#line 453 "prop_mode_constraints.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__prop_mode_constraints__V_43_43, check_hlds__prop_mode_constraints__UnificationGoalInfo0_24, &check_hlds__prop_mode_constraints__UnificationGoalInfo_25);
        }
#line 455 "prop_mode_constraints.m"
        {
#line 455 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__UnificationGoal_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__UnificationGoal_26, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__UnificationGoalExpr_23));
#line 455 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__UnificationGoal_26, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__UnificationGoalInfo_25));
#line 455 "prop_mode_constraints.m"
        }
#line 457 "prop_mode_constraints.m"
        {
#line 457 "prop_mode_constraints.m"
          MR_Word base;
#line 457 "prop_mode_constraints.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "prop_mode_constraints.m"
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_28 = base;
#line 457 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__UnificationGoal_26));
#line 457 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_0_27));
#line 457 "prop_mode_constraints.m"
        }
#line 441 "prop_mode_constraints.m"
      }
#line 458 "prop_mode_constraints.m"
    else
#line 459 "prop_mode_constraints.m"
      {
#line 459 "prop_mode_constraints.m"
        *check_hlds__prop_mode_constraints__Var_14 = check_hlds__prop_mode_constraints__Var0_13;
#line 459 "prop_mode_constraints.m"
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_34 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_33;
#line 459 "prop_mode_constraints.m"
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_32 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_31;
#line 459 "prop_mode_constraints.m"
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_28 = check_hlds__prop_mode_constraints__STATE_VARIABLE_Unifications_0_27;
#line 459 "prop_mode_constraints.m"
      }
#line 461 "prop_mode_constraints.m"
    {
#line 461 "prop_mode_constraints.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, *check_hlds__prop_mode_constraints__Var_14, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_29, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_30);
#line 461 "prop_mode_constraints.m"
      return;
    }
#line 438 "prop_mode_constraints.m"
  }
#line 432 "prop_mode_constraints.m"
}

#line 423 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0_1(
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8,
#line 423 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_9,
#line 423 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_10)
#line 423 "prop_mode_constraints.m"
{
#line 423 "prop_mode_constraints.m"
  {
#line 423 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 423 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv4_Var_14;
#line 423 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Unifications_28;
#line 423 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_30;
#line 423 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_32;
#line 423 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_34;

#line 423 "prop_mode_constraints.m"
    {
#line 423 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__make_unification_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv4_Var_14, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Unifications_28, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_30, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_32, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_9), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_34);
    }
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv4_Var_14));
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Unifications_28));
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_30));
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_32));
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_10 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_34));
#line 423 "prop_mode_constraints.m"
  }
#line 423 "prop_mode_constraints.m"
}

#line 416 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__make_unifications_10_p_0(
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Context_11,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__Unifications_12,
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_0_17,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_18,
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_19,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_20,
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_21,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_22,
#line 416 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_23,
#line 416 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_24)
#line 416 "prop_mode_constraints.m"
{
#line 422 "prop_mode_constraints.m"
  {
#line 422 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 422 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__TypeInfo_41_41;
#line 422 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_25_25;
#line 423 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv8_Unifications_12;
#line 423 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_SeenSoFar_20;
#line 423 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_VarSet_22;
#line 423 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarTypes_24;

#line 423 "prop_mode_constraints.m"
    {
#line 423 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 423 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_25_25, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_9[0]));
#line 423 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_25_25, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__make_unifications_10_p_0_1));
#line 423 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 423 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_25_25, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Context_11));
#line 423 "prop_mode_constraints.m"
    }
#line 1889 "check_hlds.prop_mode_constraints.c"
    check_hlds__prop_mode_constraints__TypeInfo_41_41 = (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[0];
#line 423 "prop_mode_constraints.m"
    {
#line 423 "prop_mode_constraints.m"
      mercury__list__map_foldl4_11_p_1(check_hlds__prop_mode_constraints__TypeInfo_41_41, check_hlds__prop_mode_constraints__TypeInfo_41_41, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[3], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], check_hlds__prop_mode_constraints__V_25_25, check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_0_17, check_hlds__prop_mode_constraints__STATE_VARIABLE_Args_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__prop_mode_constraints__conv8_Unifications_12, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_19)), &check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_SeenSoFar_20, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_21)), &check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_VarSet_22, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_23)), &check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarTypes_24);
    }
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__Unifications_12 = ((MR_Word) check_hlds__prop_mode_constraints__conv8_Unifications_12);
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_20 = ((MR_Word) check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_SeenSoFar_20);
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_22 = ((MR_Word) check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_VarSet_22);
#line 423 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_24 = ((MR_Word) check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarTypes_24);
#line 422 "prop_mode_constraints.m"
  }
#line 416 "prop_mode_constraints.m"
}

#line 399 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(
#line 399 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__Goal_4,
#line 399 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_8,
#line 399 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_9)
#line 399 "prop_mode_constraints.m"
{
#line 405 "prop_mode_constraints.m"
  {
#line 405 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 405 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__SubGoals_6;
#line 403 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Goal_4, (MR_Integer) 0)));
#line 403 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_11_11;
#line 403 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__Goal_4, (MR_Integer) 1)));

#line 403 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__succeeded = ((((MR_tag((MR_Word) check_hlds__prop_mode_constraints__V_10_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__V_10_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 403 "prop_mode_constraints.m"
    if (check_hlds__prop_mode_constraints__succeeded)
#line 403 "prop_mode_constraints.m"
      {
#line 403 "prop_mode_constraints.m"
        check_hlds__prop_mode_constraints__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__V_10_10, (MR_Integer) 1)));
#line 403 "prop_mode_constraints.m"
        check_hlds__prop_mode_constraints__SubGoals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__V_10_10, (MR_Integer) 2)));
#line 403 "prop_mode_constraints.m"
        check_hlds__prop_mode_constraints__succeeded = (check_hlds__prop_mode_constraints__V_11_11 == (MR_Integer) 0);
#line 403 "prop_mode_constraints.m"
      }
#line 405 "prop_mode_constraints.m"
    if (check_hlds__prop_mode_constraints__succeeded)
#line 404 "prop_mode_constraints.m"
      {
#line 404 "prop_mode_constraints.m"
        {
#line 404 "prop_mode_constraints.m"
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_9 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__prop_mode_constraints__SubGoals_6, check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_8);
        }
#line 404 "prop_mode_constraints.m"
      }
#line 405 "prop_mode_constraints.m"
    else
#line 406 "prop_mode_constraints.m"
      {
#line 406 "prop_mode_constraints.m"
        MR_Word base;
#line 406 "prop_mode_constraints.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prop_mode_constraints.m"
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_9 = base;
#line 406 "prop_mode_constraints.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__Goal_4));
#line 406 "prop_mode_constraints.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_8));
#line 406 "prop_mode_constraints.m"
      }
#line 405 "prop_mode_constraints.m"
  }
#line 399 "prop_mode_constraints.m"
}

#line 393 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0_1(
#line 393 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 393 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 393 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 393 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3)
#line 393 "prop_mode_constraints.m"
{
#line 393 "prop_mode_constraints.m"
  {
#line 393 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 393 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Goals_9;

#line 393 "prop_mode_constraints.m"
    {
#line 393 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__add_to_before_conjunction_3_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Goals_9);
    }
#line 393 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Goals_9));
#line 393 "prop_mode_constraints.m"
  }
#line 393 "prop_mode_constraints.m"
}

#line 390 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(
#line 390 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_4,
#line 390 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_5)
#line 390 "prop_mode_constraints.m"
{
#line 392 "prop_mode_constraints.m"
  {
#line 392 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 393 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_Goals_5;

#line 393 "prop_mode_constraints.m"
    {
#line 393 "prop_mode_constraints.m"
      mercury__list__foldr_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[3], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[11], check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_0_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_Goals_5);
    }
#line 393 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_Goals_5 = ((MR_Word) check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_Goals_5);
#line 392 "prop_mode_constraints.m"
  }
#line 390 "prop_mode_constraints.m"
}

#line 368 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_4(
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 368 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 368 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 368 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 368 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 368 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
#line 368 "prop_mode_constraints.m"
{
#line 368 "prop_mode_constraints.m"
  {
#line 368 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 368 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv24_STATE_VARIABLE_Goal_79;
#line 368 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv23_STATE_VARIABLE_SeenSoFar_81;
#line 368 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv22_STATE_VARIABLE_VarSet_83;
#line 368 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv21_STATE_VARIABLE_VarTypes_85;

#line 368 "prop_mode_constraints.m"
    {
#line 368 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv24_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv23_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv22_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv21_STATE_VARIABLE_VarTypes_85);
    }
#line 368 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv24_STATE_VARIABLE_Goal_79));
#line 368 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv23_STATE_VARIABLE_SeenSoFar_81));
#line 368 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv22_STATE_VARIABLE_VarSet_83));
#line 368 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv21_STATE_VARIABLE_VarTypes_85));
#line 368 "prop_mode_constraints.m"
  }
#line 368 "prop_mode_constraints.m"
}

#line 335 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_3(
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 335 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 335 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 335 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 335 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 335 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
#line 335 "prop_mode_constraints.m"
{
#line 335 "prop_mode_constraints.m"
  {
#line 335 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 335 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv17_STATE_VARIABLE_Goal_79;
#line 335 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv16_STATE_VARIABLE_SeenSoFar_81;
#line 335 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv15_STATE_VARIABLE_VarSet_83;
#line 335 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv14_STATE_VARIABLE_VarTypes_85;

#line 335 "prop_mode_constraints.m"
    {
#line 335 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv17_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv16_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv15_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv14_STATE_VARIABLE_VarTypes_85);
    }
#line 335 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv17_STATE_VARIABLE_Goal_79));
#line 335 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv16_STATE_VARIABLE_SeenSoFar_81));
#line 335 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv15_STATE_VARIABLE_VarSet_83));
#line 335 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv14_STATE_VARIABLE_VarTypes_85));
#line 335 "prop_mode_constraints.m"
  }
#line 335 "prop_mode_constraints.m"
}

#line 279 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_2(
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 279 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 279 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 279 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 279 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 279 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
#line 279 "prop_mode_constraints.m"
{
#line 279 "prop_mode_constraints.m"
  {
#line 279 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 279 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv10_STATE_VARIABLE_Goal_79;
#line 279 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv9_STATE_VARIABLE_SeenSoFar_81;
#line 279 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv8_STATE_VARIABLE_VarSet_83;
#line 279 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_VarTypes_85;

#line 279 "prop_mode_constraints.m"
    {
#line 279 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv10_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv9_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv8_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_VarTypes_85);
    }
#line 279 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv10_STATE_VARIABLE_Goal_79));
#line 279 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv9_STATE_VARIABLE_SeenSoFar_81));
#line 279 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv8_STATE_VARIABLE_VarSet_83));
#line 279 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv7_STATE_VARIABLE_VarTypes_85));
#line 279 "prop_mode_constraints.m"
  }
#line 279 "prop_mode_constraints.m"
}

#line 285 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0_1(
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 285 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 285 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 285 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 285 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 285 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
#line 285 "prop_mode_constraints.m"
{
#line 285 "prop_mode_constraints.m"
  {
#line 285 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 285 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Goal_79;
#line 285 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_81;
#line 285 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_83;
#line 285 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_85;

#line 285 "prop_mode_constraints.m"
    {
#line 285 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_85);
    }
#line 285 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Goal_79));
#line 285 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_SeenSoFar_81));
#line 285 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarSet_83));
#line 285 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_VarTypes_85));
#line 285 "prop_mode_constraints.m"
  }
#line 285 "prop_mode_constraints.m"
}

#line 268 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(
#line 268 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_0_78,
#line 268 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_79,
#line 268 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80,
#line 268 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81,
#line 268 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82,
#line 268 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83,
#line 268 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84,
#line 268 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85)
#line 268 "prop_mode_constraints.m"
{
#line 274 "prop_mode_constraints.m"
  {
#line 274 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 274 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_0_78, (MR_Integer) 0)));
#line 274 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_0_78, (MR_Integer) 1)));
#line 274 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138;
#line 274 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149;

#line 289 "prop_mode_constraints.m"
#line 289 "prop_mode_constraints.m"
    switch (MR_tag((MR_Word) check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86)) {
#line 289 "prop_mode_constraints.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 289 "prop_mode_constraints.m"
      case (MR_Integer) 0:
#line 339 "prop_mode_constraints.m"
        {
#line 339 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__Goal_9;
#line 339 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__Goal0_45 = (MR_Word) MR_body(((MR_Word) check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86), (MR_Integer) 0);

#line 340 "prop_mode_constraints.m"
          {
#line 340 "prop_mode_constraints.m"
            check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Goal0_45, &check_hlds__prop_mode_constraints__Goal_9, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
          }
#line 342 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__prop_mode_constraints__Goal_9);
#line 339 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 339 "prop_mode_constraints.m"
        }
#line 289 "prop_mode_constraints.m"
        break;
#line 289 "prop_mode_constraints.m"
      case (MR_Integer) 1:
#line 332 "prop_mode_constraints.m"
        {
#line 332 "prop_mode_constraints.m"
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80;
#line 332 "prop_mode_constraints.m"
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82;
#line 332 "prop_mode_constraints.m"
          *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84;
#line 332 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86;
#line 332 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 332 "prop_mode_constraints.m"
        }
#line 289 "prop_mode_constraints.m"
        break;
#line 289 "prop_mode_constraints.m"
      case (MR_Integer) 2:
#line 291 "prop_mode_constraints.m"
        {
#line 291 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__CalleePredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 0)));
#line 291 "prop_mode_constraints.m"
          MR_Integer check_hlds__prop_mode_constraints__CalleeProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
#line 291 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));
#line 291 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__Builtin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3)));
#line 291 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__UnifyContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4)));
#line 291 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 5)));
#line 291 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__Context_25;
#line 291 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__Unifications_26;
#line 291 "prop_mode_constraints.m"
          MR_Word check_hlds__prop_mode_constraints__Args_27;

#line 292 "prop_mode_constraints.m"
          {
#line 292 "prop_mode_constraints.m"
            check_hlds__prop_mode_constraints__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87);
          }
#line 293 "prop_mode_constraints.m"
          {
#line 293 "prop_mode_constraints.m"
            check_hlds__prop_mode_constraints__make_unifications_10_p_0(check_hlds__prop_mode_constraints__Context_25, &check_hlds__prop_mode_constraints__Unifications_26, check_hlds__prop_mode_constraints__Args0_21, &check_hlds__prop_mode_constraints__Args_27, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
          }
#line 298 "prop_mode_constraints.m"
          if ((check_hlds__prop_mode_constraints__Unifications_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "prop_mode_constraints.m"
            {
#line 297 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86;
#line 297 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 297 "prop_mode_constraints.m"
            }
#line 298 "prop_mode_constraints.m"
          else
#line 302 "prop_mode_constraints.m"
            {
#line 302 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__CallGoalExpr_30;

#line 303 "prop_mode_constraints.m"
              {
#line 303 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__CallGoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 303 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__CalleePredId_19));
#line 303 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__CalleeProcId_20));
#line 303 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Args_27));
#line 303 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Builtin_22));
#line 303 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__UnifyContext_23));
#line 303 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__CallGoalExpr_30, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__SymName_24));
#line 303 "prop_mode_constraints.m"
              }
#line 305 "prop_mode_constraints.m"
              {
#line 305 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(check_hlds__prop_mode_constraints__CallGoalExpr_30, check_hlds__prop_mode_constraints__Unifications_26, check_hlds__prop_mode_constraints__Args_27, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138);
              }
#line 302 "prop_mode_constraints.m"
            }
#line 291 "prop_mode_constraints.m"
        }
#line 289 "prop_mode_constraints.m"
        break;
#line 289 "prop_mode_constraints.m"
      case (MR_Integer) 3:
#line 289 "prop_mode_constraints.m"
#line 289 "prop_mode_constraints.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 0)))) {
#line 289 "prop_mode_constraints.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 289 "prop_mode_constraints.m"
          case (MR_Integer) 0:
#line 311 "prop_mode_constraints.m"
            {
#line 311 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Details_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
#line 311 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Modes_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3)));
#line 311 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__MaybeArgRegs_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4)));
#line 311 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Determinism_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 5)));
#line 311 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Args0_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));
#line 311 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Context_156;
#line 311 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Unifications_157;
#line 311 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Args_158;

#line 312 "prop_mode_constraints.m"
              {
#line 312 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__Context_156 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87);
              }
#line 313 "prop_mode_constraints.m"
              {
#line 313 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__make_unifications_10_p_0(check_hlds__prop_mode_constraints__Context_156, &check_hlds__prop_mode_constraints__Unifications_157, check_hlds__prop_mode_constraints__Args0_155, &check_hlds__prop_mode_constraints__Args_158, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
              }
#line 318 "prop_mode_constraints.m"
              if ((check_hlds__prop_mode_constraints__Unifications_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "prop_mode_constraints.m"
                {
#line 317 "prop_mode_constraints.m"
                  check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86;
#line 317 "prop_mode_constraints.m"
                  check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 317 "prop_mode_constraints.m"
                }
#line 318 "prop_mode_constraints.m"
              else
#line 322 "prop_mode_constraints.m"
                {
#line 322 "prop_mode_constraints.m"
                  MR_Word check_hlds__prop_mode_constraints__CallGoalExpr_153;

#line 323 "prop_mode_constraints.m"
                  {
#line 323 "prop_mode_constraints.m"
                    check_hlds__prop_mode_constraints__CallGoalExpr_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prop_mode_constraints.m"
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 323 "prop_mode_constraints.m"
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Details_31));
#line 323 "prop_mode_constraints.m"
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Args_158));
#line 323 "prop_mode_constraints.m"
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Modes_32));
#line 323 "prop_mode_constraints.m"
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__MaybeArgRegs_33));
#line 323 "prop_mode_constraints.m"
                    MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__CallGoalExpr_153, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__Determinism_34));
#line 323 "prop_mode_constraints.m"
                  }
#line 325 "prop_mode_constraints.m"
                  {
#line 325 "prop_mode_constraints.m"
                    check_hlds__prop_mode_constraints__replace_call_with_conjunction_6_p_0(check_hlds__prop_mode_constraints__CallGoalExpr_153, check_hlds__prop_mode_constraints__Unifications_157, check_hlds__prop_mode_constraints__Args_158, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87, &check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138);
                  }
#line 322 "prop_mode_constraints.m"
                }
#line 311 "prop_mode_constraints.m"
            }
#line 289 "prop_mode_constraints.m"
            break;
#line 289 "prop_mode_constraints.m"
          case (MR_Integer) 1:
#line 360 "prop_mode_constraints.m"
            {
#line 360 "prop_mode_constraints.m"
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80;
#line 360 "prop_mode_constraints.m"
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82;
#line 360 "prop_mode_constraints.m"
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84;
#line 360 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86;
#line 360 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 360 "prop_mode_constraints.m"
            }
#line 289 "prop_mode_constraints.m"
            break;
#line 289 "prop_mode_constraints.m"
          case (MR_Integer) 2:
#line 276 "prop_mode_constraints.m"
            {
#line 276 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__ConjType_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
#line 276 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));

#line 283 "prop_mode_constraints.m"
#line 283 "prop_mode_constraints.m"
              switch (check_hlds__prop_mode_constraints__ConjType_15) {
#line 283 "prop_mode_constraints.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 283 "prop_mode_constraints.m"
                case (MR_Integer) 1:
#line 284 "prop_mode_constraints.m"
                  {
#line 284 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_185_185 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 284 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__Goals_152;
#line 285 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_SeenSoFar_81;
#line 285 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarSet_83;
#line 285 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarTypes_85;

#line 285 "prop_mode_constraints.m"
                    {
#line 285 "prop_mode_constraints.m"
                      mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_185_185, check_hlds__prop_mode_constraints__TypeCtorInfo_185_185, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[7], check_hlds__prop_mode_constraints__Goals0_16, &check_hlds__prop_mode_constraints__Goals_152, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80)), &check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82)), &check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarSet_83, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84)), &check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarTypes_85);
                    }
#line 285 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) check_hlds__prop_mode_constraints__conv6_STATE_VARIABLE_SeenSoFar_81);
#line 285 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = ((MR_Word) check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_VarSet_83);
#line 285 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = ((MR_Word) check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarTypes_85);
#line 287 "prop_mode_constraints.m"
                    {
#line 287 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 287 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) ((MR_Integer) 1));
#line 287 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Goals_152));
#line 287 "prop_mode_constraints.m"
                    }
#line 284 "prop_mode_constraints.m"
                  }
#line 283 "prop_mode_constraints.m"
                  break;
#line 283 "prop_mode_constraints.m"
                case (MR_Integer) 0:
#line 278 "prop_mode_constraints.m"
                  {
#line 278 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_173_173 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 278 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__Goals1_17;
#line 278 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__Goals_18;
#line 279 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv13_STATE_VARIABLE_SeenSoFar_81;
#line 279 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv12_STATE_VARIABLE_VarSet_83;
#line 279 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv11_STATE_VARIABLE_VarTypes_85;

#line 279 "prop_mode_constraints.m"
                    {
#line 279 "prop_mode_constraints.m"
                      mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_173_173, check_hlds__prop_mode_constraints__TypeCtorInfo_173_173, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[8], check_hlds__prop_mode_constraints__Goals0_16, &check_hlds__prop_mode_constraints__Goals1_17, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80)), &check_hlds__prop_mode_constraints__conv13_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82)), &check_hlds__prop_mode_constraints__conv12_STATE_VARIABLE_VarSet_83, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84)), &check_hlds__prop_mode_constraints__conv11_STATE_VARIABLE_VarTypes_85);
                    }
#line 279 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) check_hlds__prop_mode_constraints__conv13_STATE_VARIABLE_SeenSoFar_81);
#line 279 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = ((MR_Word) check_hlds__prop_mode_constraints__conv12_STATE_VARIABLE_VarSet_83);
#line 279 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = ((MR_Word) check_hlds__prop_mode_constraints__conv11_STATE_VARIABLE_VarTypes_85);
#line 281 "prop_mode_constraints.m"
                    {
#line 281 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__flatten_conjunction_2_p_0(check_hlds__prop_mode_constraints__Goals1_17, &check_hlds__prop_mode_constraints__Goals_18);
                    }
#line 282 "prop_mode_constraints.m"
                    {
#line 282 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 282 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) ((MR_Integer) 0));
#line 282 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Goals_18));
#line 282 "prop_mode_constraints.m"
                    }
#line 278 "prop_mode_constraints.m"
                  }
#line 283 "prop_mode_constraints.m"
                  break;
#line 283 "prop_mode_constraints.m"
              }
#line 276 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 276 "prop_mode_constraints.m"
            }
#line 289 "prop_mode_constraints.m"
            break;
#line 289 "prop_mode_constraints.m"
          case (MR_Integer) 3:
#line 334 "prop_mode_constraints.m"
            {
#line 334 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_197_197 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 334 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Goals0_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
#line 334 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Goals_161;
#line 335 "prop_mode_constraints.m"
              MR_Box check_hlds__prop_mode_constraints__conv20_STATE_VARIABLE_SeenSoFar_81;
#line 335 "prop_mode_constraints.m"
              MR_Box check_hlds__prop_mode_constraints__conv19_STATE_VARIABLE_VarSet_83;
#line 335 "prop_mode_constraints.m"
              MR_Box check_hlds__prop_mode_constraints__conv18_STATE_VARIABLE_VarTypes_85;

#line 335 "prop_mode_constraints.m"
              {
#line 335 "prop_mode_constraints.m"
                mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_197_197, check_hlds__prop_mode_constraints__TypeCtorInfo_197_197, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[9], check_hlds__prop_mode_constraints__Goals0_160, &check_hlds__prop_mode_constraints__Goals_161, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80)), &check_hlds__prop_mode_constraints__conv20_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82)), &check_hlds__prop_mode_constraints__conv19_STATE_VARIABLE_VarSet_83, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84)), &check_hlds__prop_mode_constraints__conv18_STATE_VARIABLE_VarTypes_85);
              }
#line 335 "prop_mode_constraints.m"
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) check_hlds__prop_mode_constraints__conv20_STATE_VARIABLE_SeenSoFar_81);
#line 335 "prop_mode_constraints.m"
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = ((MR_Word) check_hlds__prop_mode_constraints__conv19_STATE_VARIABLE_VarSet_83);
#line 335 "prop_mode_constraints.m"
              *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = ((MR_Word) check_hlds__prop_mode_constraints__conv18_STATE_VARIABLE_VarTypes_85);
#line 337 "prop_mode_constraints.m"
              {
#line 337 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 337 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Goals_161));
#line 337 "prop_mode_constraints.m"
              }
#line 334 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 334 "prop_mode_constraints.m"
            }
#line 289 "prop_mode_constraints.m"
            break;
#line 289 "prop_mode_constraints.m"
          case (MR_Integer) 4:
#line 329 "prop_mode_constraints.m"
            {
#line 330 "prop_mode_constraints.m"
              {
#line 330 "prop_mode_constraints.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.prop_mode_constraints", (MR_String) "predicate \140check_hlds.prop_mode_constraints.ensure_unique_arguments_in_goal\'/8", (MR_String) "switch");
#line 330 "prop_mode_constraints.m"
                return;
              }
#line 329 "prop_mode_constraints.m"
            }
#line 289 "prop_mode_constraints.m"
            break;
#line 289 "prop_mode_constraints.m"
          case (MR_Integer) 5:
#line 344 "prop_mode_constraints.m"
            {
#line 344 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
#line 344 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Goal_162;
#line 344 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Goal0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));

#line 347 "prop_mode_constraints.m"
              {
#line 347 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Goal0_163, &check_hlds__prop_mode_constraints__Goal_162, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
              }
#line 349 "prop_mode_constraints.m"
              {
#line 349 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 349 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 349 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Reason_46));
#line 349 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Goal_162));
#line 349 "prop_mode_constraints.m"
              }
#line 344 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 344 "prop_mode_constraints.m"
            }
#line 289 "prop_mode_constraints.m"
            break;
#line 289 "prop_mode_constraints.m"
          case (MR_Integer) 6:
#line 351 "prop_mode_constraints.m"
            {
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__ExistVars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 2)));
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 3)));
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 4)));
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Cond_51;
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Then_52;
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__Else_53;
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_103_103;
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_104_104;
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_105_105;
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_106_106;
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_107_107;
#line 351 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_108_108;

#line 352 "prop_mode_constraints.m"
              {
#line 352 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Cond0_48, &check_hlds__prop_mode_constraints__Cond_51, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, &check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_103_103, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_104_104, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_105_105);
              }
#line 354 "prop_mode_constraints.m"
              {
#line 354 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Then0_49, &check_hlds__prop_mode_constraints__Then_52, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_103_103, &check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_106_106, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_104_104, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_107_107, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_105_105, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_108_108);
              }
#line 356 "prop_mode_constraints.m"
              {
#line 356 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__Else0_50, &check_hlds__prop_mode_constraints__Else_53, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_106_106, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_107_107, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_108_108, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
              }
#line 358 "prop_mode_constraints.m"
              {
#line 358 "prop_mode_constraints.m"
                check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 358 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 358 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ExistVars_47));
#line 358 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Cond_51));
#line 358 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__Then_52));
#line 358 "prop_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__Else_53));
#line 358 "prop_mode_constraints.m"
              }
#line 351 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 351 "prop_mode_constraints.m"
            }
#line 289 "prop_mode_constraints.m"
            break;
#line 289 "prop_mode_constraints.m"
          case (MR_Integer) 7:
#line 362 "prop_mode_constraints.m"
            {
#line 362 "prop_mode_constraints.m"
              MR_Word check_hlds__prop_mode_constraints__ShortHand0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_86_86, (MR_Integer) 1)));

#line 373 "prop_mode_constraints.m"
#line 373 "prop_mode_constraints.m"
              switch (MR_tag((MR_Word) check_hlds__prop_mode_constraints__ShortHand0_61)) {
#line 373 "prop_mode_constraints.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 373 "prop_mode_constraints.m"
                case (MR_Integer) 0:
#line 380 "prop_mode_constraints.m"
                  {
#line 381 "prop_mode_constraints.m"
                    {
#line 381 "prop_mode_constraints.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.prop_mode_constraints", (MR_String) "predicate \140check_hlds.prop_mode_constraints.ensure_unique_arguments_in_goal\'/8", (MR_String) "bi_implication");
#line 381 "prop_mode_constraints.m"
                      return;
                    }
#line 380 "prop_mode_constraints.m"
                  }
#line 373 "prop_mode_constraints.m"
                  break;
#line 373 "prop_mode_constraints.m"
                case (MR_Integer) 1:
#line 365 "prop_mode_constraints.m"
                  {
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_209_209;
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__GoalType_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 0)));
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__Outer_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 1)));
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__Inner_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 2)));
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__MaybeOutputVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 3)));
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__MainGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 4)));
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__OrElseGoals0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 5)));
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__OrElseInners_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 6)));
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__MainGoal_69;
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__OrElseGoals_70;
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__ShortHand_71;
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_95_95;
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_96_96;
#line 365 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_97_97;
#line 368 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv27_STATE_VARIABLE_SeenSoFar_81;
#line 368 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv26_STATE_VARIABLE_VarSet_83;
#line 368 "prop_mode_constraints.m"
                    MR_Box check_hlds__prop_mode_constraints__conv25_STATE_VARIABLE_VarTypes_85;

#line 366 "prop_mode_constraints.m"
                    {
#line 366 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__MainGoal0_66, &check_hlds__prop_mode_constraints__MainGoal_69, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, &check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_95_95, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_96_96, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_97_97);
                    }
#line 2860 "check_hlds.prop_mode_constraints.c"
                    check_hlds__prop_mode_constraints__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 368 "prop_mode_constraints.m"
                    {
#line 368 "prop_mode_constraints.m"
                      mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_209_209, check_hlds__prop_mode_constraints__TypeCtorInfo_209_209, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[10], check_hlds__prop_mode_constraints__OrElseGoals0_67, &check_hlds__prop_mode_constraints__OrElseGoals_70, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_95_95)), &check_hlds__prop_mode_constraints__conv27_STATE_VARIABLE_SeenSoFar_81, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_96_96)), &check_hlds__prop_mode_constraints__conv26_STATE_VARIABLE_VarSet_83, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_97_97)), &check_hlds__prop_mode_constraints__conv25_STATE_VARIABLE_VarTypes_85);
                    }
#line 368 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81 = ((MR_Word) check_hlds__prop_mode_constraints__conv27_STATE_VARIABLE_SeenSoFar_81);
#line 368 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83 = ((MR_Word) check_hlds__prop_mode_constraints__conv26_STATE_VARIABLE_VarSet_83);
#line 368 "prop_mode_constraints.m"
                    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85 = ((MR_Word) check_hlds__prop_mode_constraints__conv25_STATE_VARIABLE_VarTypes_85);
#line 370 "prop_mode_constraints.m"
                    {
#line 370 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__GoalType_62));
#line 370 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__Outer_63));
#line 370 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__Inner_64));
#line 370 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__MaybeOutputVars_65));
#line 370 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__MainGoal_69));
#line 370 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__OrElseGoals_70));
#line 370 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(1), check_hlds__prop_mode_constraints__ShortHand_71, 6) = ((MR_Box) (check_hlds__prop_mode_constraints__OrElseInners_68));
#line 370 "prop_mode_constraints.m"
                    }
#line 372 "prop_mode_constraints.m"
                    {
#line 372 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 372 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ShortHand_71));
#line 372 "prop_mode_constraints.m"
                    }
#line 365 "prop_mode_constraints.m"
                  }
#line 373 "prop_mode_constraints.m"
                  break;
#line 373 "prop_mode_constraints.m"
                case (MR_Integer) 2:
#line 374 "prop_mode_constraints.m"
                  {
#line 374 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__MaybeIO_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 0)));
#line 374 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__ResultVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 1)));
#line 374 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand0_61, (MR_Integer) 2)));
#line 374 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__SubGoal_75;
#line 374 "prop_mode_constraints.m"
                    MR_Word check_hlds__prop_mode_constraints__ShortHand_164;

#line 375 "prop_mode_constraints.m"
                    {
#line 375 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(check_hlds__prop_mode_constraints__SubGoal0_74, &check_hlds__prop_mode_constraints__SubGoal_75, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_0_80, check_hlds__prop_mode_constraints__STATE_VARIABLE_SeenSoFar_81, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_0_82, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarSet_83, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_0_84, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarTypes_85);
                    }
#line 377 "prop_mode_constraints.m"
                    {
#line 377 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__ShortHand_164 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 377 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand_164, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__MaybeIO_72));
#line 377 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand_164, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ResultVar_73));
#line 377 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(2), check_hlds__prop_mode_constraints__ShortHand_164, 2) = ((MR_Box) (check_hlds__prop_mode_constraints__SubGoal_75));
#line 377 "prop_mode_constraints.m"
                    }
#line 378 "prop_mode_constraints.m"
                    {
#line 378 "prop_mode_constraints.m"
                      check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 378 "prop_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__ShortHand_164));
#line 378 "prop_mode_constraints.m"
                    }
#line 374 "prop_mode_constraints.m"
                  }
#line 373 "prop_mode_constraints.m"
                  break;
#line 373 "prop_mode_constraints.m"
              }
#line 362 "prop_mode_constraints.m"
              check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138 = check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_87_87;
#line 362 "prop_mode_constraints.m"
            }
#line 289 "prop_mode_constraints.m"
            break;
#line 289 "prop_mode_constraints.m"
        }
#line 289 "prop_mode_constraints.m"
        break;
#line 289 "prop_mode_constraints.m"
    }
#line 384 "prop_mode_constraints.m"
    {
#line 384 "prop_mode_constraints.m"
      MR_Word base;
#line 384 "prop_mode_constraints.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "prop_mode_constraints.m"
      *check_hlds__prop_mode_constraints__STATE_VARIABLE_Goal_79 = base;
#line 384 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalExpr_149_149));
#line 384 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_GoalInfo_138_138));
#line 384 "prop_mode_constraints.m"
    }
#line 274 "prop_mode_constraints.m"
  }
#line 268 "prop_mode_constraints.m"
}

#line 220 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_9,
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_10,
#line 220 "prop_mode_constraints.m"
  MR_Integer check_hlds__prop_mode_constraints__ProcId_11,
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ProcInfo_12,
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_17,
#line 220 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_18,
#line 220 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_0_19,
#line 220 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_20)
#line 220 "prop_mode_constraints.m"
{
#line 225 "prop_mode_constraints.m"
  {
#line 225 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 225 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ArgModes_15;
#line 225 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Args_16;

#line 226 "prop_mode_constraints.m"
    {
#line 226 "prop_mode_constraints.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__prop_mode_constraints__ProcInfo_12, &check_hlds__prop_mode_constraints__ArgModes_15);
    }
#line 227 "prop_mode_constraints.m"
    {
#line 227 "prop_mode_constraints.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__prop_mode_constraints__ProcInfo_12, &check_hlds__prop_mode_constraints__Args_16);
    }
#line 228 "prop_mode_constraints.m"
    {
#line 228 "prop_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mode_decl_constraints_9_p_0(check_hlds__prop_mode_constraints__ModuleInfo_9, check_hlds__prop_mode_constraints__PredId_10, check_hlds__prop_mode_constraints__ProcId_11, check_hlds__prop_mode_constraints__ArgModes_15, check_hlds__prop_mode_constraints__Args_16, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_17, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_18, check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_0_19, check_hlds__prop_mode_constraints__STATE_VARIABLE_PredConstraints_20);
#line 228 "prop_mode_constraints.m"
      return;
    }
#line 225 "prop_mode_constraints.m"
  }
#line 220 "prop_mode_constraints.m"
}

#line 209 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2(
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 209 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 209 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 209 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6)
#line 209 "prop_mode_constraints.m"
{
#line 209 "prop_mode_constraints.m"
  {
#line 209 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 209 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarInfo_18;
#line 209 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_PredConstraints_20;

#line 209 "prop_mode_constraints.m"
    {
#line 209 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__prop_mode_constraints_in_mode_declared_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarInfo_18, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_PredConstraints_20);
    }
#line 209 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarInfo_18));
#line 209 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_PredConstraints_20));
#line 209 "prop_mode_constraints.m"
  }
#line 209 "prop_mode_constraints.m"
}

#line 207 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1(
#line 207 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 207 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 207 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2)
#line 207 "prop_mode_constraints.m"
{
#line 207 "prop_mode_constraints.m"
  {
#line 207 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 207 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv0_HeadVar__3_3;

#line 207 "prop_mode_constraints.m"
    {
#line 207 "prop_mode_constraints.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv0_HeadVar__3_3);
    }
#line 207 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_HeadVar__3_3));
#line 207 "prop_mode_constraints.m"
  }
#line 207 "prop_mode_constraints.m"
}

#line 136 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(
#line 136 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_8,
#line 136 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14,
#line 136 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15,
#line 136 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16,
#line 136 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17,
#line 136 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18,
#line 136 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19)
#line 136 "prop_mode_constraints.m"
{
#line 140 "prop_mode_constraints.m"
  {
#line 140 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 140 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__PredInfo0_12;
#line 140 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__PredInfo_13;
#line 140 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ClausesInfo0_34;
#line 140 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ContainingGoalMap_35;
#line 140 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ClausesInfo_36;
#line 140 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__BodyConstraints_37;
#line 140 "prop_mode_constraints.m"
    MR_Tuple check_hlds__prop_mode_constraints__V_42_42;

#line 141 "prop_mode_constraints.m"
    {
#line 141 "prop_mode_constraints.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__PredId_8, &check_hlds__prop_mode_constraints__PredInfo0_12);
    }
#line 169 "prop_mode_constraints.m"
    {
#line 169 "prop_mode_constraints.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__prop_mode_constraints__PredInfo0_12, &check_hlds__prop_mode_constraints__ClausesInfo0_34);
    }
#line 170 "prop_mode_constraints.m"
    {
#line 170 "prop_mode_constraints.m"
      hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, &check_hlds__prop_mode_constraints__ContainingGoalMap_35, check_hlds__prop_mode_constraints__ClausesInfo0_34, &check_hlds__prop_mode_constraints__ClausesInfo_36);
    }
#line 172 "prop_mode_constraints.m"
    {
#line 172 "prop_mode_constraints.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__prop_mode_constraints__ClausesInfo_36, check_hlds__prop_mode_constraints__PredInfo0_12, &check_hlds__prop_mode_constraints__PredInfo_13);
    }
#line 177 "prop_mode_constraints.m"
    {
#line 177 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__prop_mode_constraints__PredInfo_13);
    }
#line 180 "prop_mode_constraints.m"
    if (check_hlds__prop_mode_constraints__succeeded)
#line 178 "prop_mode_constraints.m"
      {
#line 178 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__V_40_40;

#line 179 "prop_mode_constraints.m"
        {
#line 179 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__V_40_40 = check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0();
        }
#line 178 "prop_mode_constraints.m"
        {
#line 178 "prop_mode_constraints.m"
          check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__PredId_8, check_hlds__prop_mode_constraints__PredInfo_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17, check_hlds__prop_mode_constraints__V_40_40, &check_hlds__prop_mode_constraints__BodyConstraints_37);
        }
#line 178 "prop_mode_constraints.m"
      }
#line 180 "prop_mode_constraints.m"
    else
#line 200 "prop_mode_constraints.m"
      {
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_24_63;
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_25_64;
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__ProcIds_53;
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__BodyConstr_54;
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__ProcInfos_55;
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17_56;
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__V_57_57;
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__V_58_58;
#line 200 "prop_mode_constraints.m"
        MR_Word check_hlds__prop_mode_constraints__V_59_59;
#line 208 "prop_mode_constraints.m"
        MR_Box check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17;
#line 208 "prop_mode_constraints.m"
        MR_Box check_hlds__prop_mode_constraints__conv3_BodyConstraints_37;

#line 201 "prop_mode_constraints.m"
        {
#line 201 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__ProcIds_53 = hlds__hlds_pred__pred_info_all_procids_1_f_0(check_hlds__prop_mode_constraints__PredInfo_13);
        }
#line 204 "prop_mode_constraints.m"
        {
#line 204 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__V_57_57 = check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0();
        }
#line 203 "prop_mode_constraints.m"
        {
#line 203 "prop_mode_constraints.m"
          check_hlds__build_mode_constraints__add_clauses_constraints_7_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__PredId_8, check_hlds__prop_mode_constraints__PredInfo_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17_56, check_hlds__prop_mode_constraints__V_57_57, &check_hlds__prop_mode_constraints__BodyConstr_54);
        }
#line 207 "prop_mode_constraints.m"
        {
#line 207 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_58_58, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_7[1]));
#line 207 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_58_58, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_1));
#line 207 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 207 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_58_58, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__PredInfo_13));
#line 207 "prop_mode_constraints.m"
        }
#line 3248 "check_hlds.prop_mode_constraints.c"
        check_hlds__prop_mode_constraints__TypeCtorInfo_24_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 3250 "check_hlds.prop_mode_constraints.c"
        check_hlds__prop_mode_constraints__TypeCtorInfo_25_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 207 "prop_mode_constraints.m"
        {
#line 207 "prop_mode_constraints.m"
          mercury__list__map_3_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_24_63, check_hlds__prop_mode_constraints__TypeCtorInfo_25_64, check_hlds__prop_mode_constraints__V_58_58, check_hlds__prop_mode_constraints__ProcIds_53, &check_hlds__prop_mode_constraints__ProcInfos_55);
        }
#line 209 "prop_mode_constraints.m"
        {
#line 209 "prop_mode_constraints.m"
          check_hlds__prop_mode_constraints__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 209 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_59_59, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_6[1]));
#line 209 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_59_59, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0_2));
#line 209 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 209 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_59_59, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14));
#line 209 "prop_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_59_59, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__PredId_8));
#line 209 "prop_mode_constraints.m"
        }
#line 208 "prop_mode_constraints.m"
        {
#line 208 "prop_mode_constraints.m"
          mercury__list__foldl2_corresponding_7_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_24_63, check_hlds__prop_mode_constraints__TypeCtorInfo_25_64, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0, check_hlds__prop_mode_constraints__V_59_59, check_hlds__prop_mode_constraints__ProcIds_53, check_hlds__prop_mode_constraints__ProcInfos_55, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17_56)), &check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17, ((MR_Box) (check_hlds__prop_mode_constraints__BodyConstr_54)), &check_hlds__prop_mode_constraints__conv3_BodyConstraints_37);
        }
#line 208 "prop_mode_constraints.m"
        *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17 = ((MR_Word) check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17);
#line 208 "prop_mode_constraints.m"
        check_hlds__prop_mode_constraints__BodyConstraints_37 = ((MR_Word) check_hlds__prop_mode_constraints__conv3_BodyConstraints_37);
#line 200 "prop_mode_constraints.m"
      }
#line 184 "prop_mode_constraints.m"
    {
#line 184 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_42_42 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_42_42, 0) = ((MR_Box) (check_hlds__prop_mode_constraints__ContainingGoalMap_35));
#line 184 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_42_42, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__BodyConstraints_37));
#line 184 "prop_mode_constraints.m"
    }
#line 184 "prop_mode_constraints.m"
    {
#line 184 "prop_mode_constraints.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_2[0], ((MR_Box) (check_hlds__prop_mode_constraints__PredId_8)), ((MR_Box) (check_hlds__prop_mode_constraints__V_42_42)), check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18, check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19);
    }
#line 144 "prop_mode_constraints.m"
    {
#line 144 "prop_mode_constraints.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__prop_mode_constraints__PredId_8, check_hlds__prop_mode_constraints__PredInfo_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15);
#line 144 "prop_mode_constraints.m"
      return;
    }
#line 140 "prop_mode_constraints.m"
  }
#line 136 "prop_mode_constraints.m"
}

#line 514 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1(
#line 514 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 514 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 514 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 514 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3)
#line 514 "prop_mode_constraints.m"
{
#line 514 "prop_mode_constraints.m"
  {
#line 514 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;

#line 514 "prop_mode_constraints.m"
    {
#line 514 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__pretty_print_pred_constraints_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1));
#line 514 "prop_mode_constraints.m"
      return;
    }
#line 514 "prop_mode_constraints.m"
  }
#line 514 "prop_mode_constraints.m"
}

#line 75 "prop_mode_constraints.m"
void MR_CALL 
check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0(
#line 75 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_6,
#line 75 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ConstraintVarSet_7,
#line 75 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredConstraintsMap_8)
#line 75 "prop_mode_constraints.m"
{
#line 511 "prop_mode_constraints.m"
  {
#line 511 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 511 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 511 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ConstrainedPreds_10;
#line 511 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_13_13;
#line 513 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_IO_12;

#line 512 "prop_mode_constraints.m"
    {
#line 512 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__ConstrainedPreds_10 = mercury__map__keys_1_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_15_15, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_2[0], check_hlds__prop_mode_constraints__PredConstraintsMap_8);
    }
#line 514 "prop_mode_constraints.m"
    {
#line 514 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 514 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_13_13, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_8[0]));
#line 514 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_13_13, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__pretty_print_pred_constraints_map_5_p_0_1));
#line 514 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 514 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_13_13, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__ModuleInfo_6));
#line 514 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_13_13, 4) = ((MR_Box) (check_hlds__prop_mode_constraints__ConstraintVarSet_7));
#line 514 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_13_13, 5) = ((MR_Box) (check_hlds__prop_mode_constraints__PredConstraintsMap_8));
#line 514 "prop_mode_constraints.m"
    }
#line 513 "prop_mode_constraints.m"
    {
#line 513 "prop_mode_constraints.m"
      mercury__list__foldl_4_p_2(check_hlds__prop_mode_constraints__TypeCtorInfo_15_15, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__prop_mode_constraints__V_13_13, check_hlds__prop_mode_constraints__ConstrainedPreds_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_IO_12);
    }
#line 511 "prop_mode_constraints.m"
  }
#line 75 "prop_mode_constraints.m"
}

#line 68 "prop_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(
#line 68 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__ModuleInfo_3,
#line 68 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_4)
#line 68 "prop_mode_constraints.m"
{
#line 495 "prop_mode_constraints.m"
  {
#line 495 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 495 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__PredInfo_5;
#line 495 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Status_6;
#line 495 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_7_7;

#line 496 "prop_mode_constraints.m"
    {
#line 496 "prop_mode_constraints.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__prop_mode_constraints__ModuleInfo_3, check_hlds__prop_mode_constraints__PredId_4, &check_hlds__prop_mode_constraints__PredInfo_5);
    }
#line 500 "prop_mode_constraints.m"
    {
#line 500 "prop_mode_constraints.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__prop_mode_constraints__PredInfo_5, &check_hlds__prop_mode_constraints__Status_6);
    }
#line 501 "prop_mode_constraints.m"
    {
#line 501 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_7_7 = hlds__status__pred_status_is_imported_1_f_0(check_hlds__prop_mode_constraints__Status_6);
    }
#line 501 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__succeeded = (check_hlds__prop_mode_constraints__V_7_7 == (MR_Integer) 1);
#line 495 "prop_mode_constraints.m"
    return check_hlds__prop_mode_constraints__succeeded;
#line 495 "prop_mode_constraints.m"
  }
#line 68 "prop_mode_constraints.m"
}

#line 247 "prop_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_3(
#line 247 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 247 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 247 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2)
#line 247 "prop_mode_constraints.m"
{
#line 247 "prop_mode_constraints.m"
  {
#line 247 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3;
#line 247 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 247 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv8_HeadVar__3_37;

#line 247 "prop_mode_constraints.m"
    {
#line 247 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__conv8_HeadVar__3_37 = check_hlds__prop_mode_constraints__IntroducedFrom__func__ensure_unique_arguments__247__1_2_f_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2));
    }
#line 247 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__prop_mode_constraints__conv8_HeadVar__3_37));
#line 247 "prop_mode_constraints.m"
    return check_hlds__prop_mode_constraints__wrapper_arg_3;
#line 247 "prop_mode_constraints.m"
  }
#line 247 "prop_mode_constraints.m"
}

#line 244 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_2(
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 244 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 244 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 244 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 244 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_7,
#line 244 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_8)
#line 244 "prop_mode_constraints.m"
{
#line 244 "prop_mode_constraints.m"
  {
#line 244 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 244 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_Goal_79;
#line 244 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_SeenSoFar_81;
#line 244 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarSet_83;
#line 244 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarTypes_85;

#line 244 "prop_mode_constraints.m"
    {
#line 244 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__ensure_unique_arguments_in_goal_8_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), &check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_Goal_79, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_3), &check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_SeenSoFar_81, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_5), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarSet_83, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_7), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarTypes_85);
    }
#line 244 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_Goal_79));
#line 244 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_SeenSoFar_81));
#line 244 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_6 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_VarSet_83));
#line 244 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_8 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarTypes_85));
#line 244 "prop_mode_constraints.m"
  }
#line 244 "prop_mode_constraints.m"
}

#line 243 "prop_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0_1(
#line 243 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 243 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1)
#line 243 "prop_mode_constraints.m"
{
#line 243 "prop_mode_constraints.m"
  {
#line 243 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2;
#line 243 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 243 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv0_HeadVar__2_2;

#line 243 "prop_mode_constraints.m"
    {
#line 243 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1));
    }
#line 243 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_HeadVar__2_2));
#line 243 "prop_mode_constraints.m"
    return check_hlds__prop_mode_constraints__wrapper_arg_2;
#line 243 "prop_mode_constraints.m"
  }
#line 243 "prop_mode_constraints.m"
}

#line 62 "prop_mode_constraints.m"
void MR_CALL 
check_hlds__prop_mode_constraints__ensure_unique_arguments_3_p_0(
#line 62 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__PredId_4,
#line 62 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_27,
#line 62 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_28)
#line 62 "prop_mode_constraints.m"
{
#line 233 "prop_mode_constraints.m"
  {
#line 233 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_53_53;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_54_54;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__PredInfo0_6;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ClausesRep0_8;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ItemNumbers_9;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__VarSet0_10;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__VarTypes0_11;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__HeadVars_12;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__SeenSoFar_13;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Clauses0_14;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__BodyGoals0_15;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__BodyGoals_17;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__VarSet_19;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__VarTypes_20;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__Clauses_21;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__ClausesRep_24;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__PredInfo_26;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_29_29;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_39_39;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_40_40;
#line 233 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_41_41;
#line 244 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_18_18;
#line 244 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv7_V_18_18;
#line 244 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv6_VarSet_19;
#line 244 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv5_VarTypes_20;

#line 234 "prop_mode_constraints.m"
    {
#line 234 "prop_mode_constraints.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__prop_mode_constraints__PredId_4, &check_hlds__prop_mode_constraints__PredInfo0_6);
    }
#line 235 "prop_mode_constraints.m"
    {
#line 235 "prop_mode_constraints.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__prop_mode_constraints__PredInfo0_6, &check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38);
    }
#line 236 "prop_mode_constraints.m"
    {
#line 236 "prop_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__ClausesRep0_8, &check_hlds__prop_mode_constraints__ItemNumbers_9);
    }
#line 237 "prop_mode_constraints.m"
    {
#line 237 "prop_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__VarSet0_10);
    }
#line 238 "prop_mode_constraints.m"
    {
#line 238 "prop_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__VarTypes0_11);
    }
#line 239 "prop_mode_constraints.m"
    {
#line 239 "prop_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__HeadVars_12);
    }
#line 241 "prop_mode_constraints.m"
    {
#line 241 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_29_29 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[0], check_hlds__prop_mode_constraints__HeadVars_12);
    }
#line 241 "prop_mode_constraints.m"
    {
#line 241 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__SeenSoFar_13 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__prop_mode_constraints__V_29_29);
    }
#line 242 "prop_mode_constraints.m"
    {
#line 242 "prop_mode_constraints.m"
      hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(check_hlds__prop_mode_constraints__ClausesRep0_8, &check_hlds__prop_mode_constraints__Clauses0_14);
    }
#line 3675 "check_hlds.prop_mode_constraints.c"
    check_hlds__prop_mode_constraints__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 3677 "check_hlds.prop_mode_constraints.c"
    check_hlds__prop_mode_constraints__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 243 "prop_mode_constraints.m"
    {
#line 243 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__BodyGoals0_15 = mercury__list__map_2_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_53_53, check_hlds__prop_mode_constraints__TypeCtorInfo_54_54, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[4], check_hlds__prop_mode_constraints__Clauses0_14);
    }
#line 244 "prop_mode_constraints.m"
    {
#line 244 "prop_mode_constraints.m"
      mercury__list__map_foldl3_9_p_1(check_hlds__prop_mode_constraints__TypeCtorInfo_54_54, check_hlds__prop_mode_constraints__TypeCtorInfo_54_54, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_3[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[2], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[5], check_hlds__prop_mode_constraints__BodyGoals0_15, &check_hlds__prop_mode_constraints__BodyGoals_17, ((MR_Box) (check_hlds__prop_mode_constraints__SeenSoFar_13)), &check_hlds__prop_mode_constraints__conv7_V_18_18, ((MR_Box) (check_hlds__prop_mode_constraints__VarSet0_10)), &check_hlds__prop_mode_constraints__conv6_VarSet_19, ((MR_Box) (check_hlds__prop_mode_constraints__VarTypes0_11)), &check_hlds__prop_mode_constraints__conv5_VarTypes_20);
    }
#line 244 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__V_18_18 = ((MR_Word) check_hlds__prop_mode_constraints__conv7_V_18_18);
#line 244 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__VarSet_19 = ((MR_Word) check_hlds__prop_mode_constraints__conv6_VarSet_19);
#line 244 "prop_mode_constraints.m"
    check_hlds__prop_mode_constraints__VarTypes_20 = ((MR_Word) check_hlds__prop_mode_constraints__conv5_VarTypes_20);
#line 247 "prop_mode_constraints.m"
    {
#line 247 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__Clauses_21 = mercury__list__map_corresponding_3_f_0(check_hlds__prop_mode_constraints__TypeCtorInfo_53_53, check_hlds__prop_mode_constraints__TypeCtorInfo_54_54, check_hlds__prop_mode_constraints__TypeCtorInfo_53_53, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[6], check_hlds__prop_mode_constraints__Clauses0_14, check_hlds__prop_mode_constraints__BodyGoals_17);
    }
#line 249 "prop_mode_constraints.m"
    {
#line 249 "prop_mode_constraints.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__prop_mode_constraints__Clauses_21, &check_hlds__prop_mode_constraints__ClausesRep_24);
    }
#line 252 "prop_mode_constraints.m"
    {
#line 252 "prop_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__prop_mode_constraints__VarSet_19, check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_38_38, &check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_39_39);
    }
#line 253 "prop_mode_constraints.m"
    {
#line 253 "prop_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__prop_mode_constraints__VarTypes_20, check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_39_39, &check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_40_40);
    }
#line 254 "prop_mode_constraints.m"
    {
#line 254 "prop_mode_constraints.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__prop_mode_constraints__ClausesRep_24, check_hlds__prop_mode_constraints__ItemNumbers_9, check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_41_41);
    }
#line 255 "prop_mode_constraints.m"
    {
#line 255 "prop_mode_constraints.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ClausesInfo_41_41, check_hlds__prop_mode_constraints__PredInfo0_6, &check_hlds__prop_mode_constraints__PredInfo_26);
    }
#line 257 "prop_mode_constraints.m"
    {
#line 257 "prop_mode_constraints.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__prop_mode_constraints__PredId_4, check_hlds__prop_mode_constraints__PredInfo_26, check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_27, check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_28);
#line 257 "prop_mode_constraints.m"
      return;
    }
#line 233 "prop_mode_constraints.m"
  }
#line 62 "prop_mode_constraints.m"
}

#line 116 "prop_mode_constraints.m"
static void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_2(
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1,
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_2,
#line 116 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_3,
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_4,
#line 116 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_5,
#line 116 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_6,
#line 116 "prop_mode_constraints.m"
  MR_Box * check_hlds__prop_mode_constraints__wrapper_arg_7)
#line 116 "prop_mode_constraints.m"
{
#line 116 "prop_mode_constraints.m"
  {
#line 116 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;
#line 116 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_ModuleInfo_15;
#line 116 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarInfo_17;
#line 116 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Constraints_19;

#line 116 "prop_mode_constraints.m"
    {
#line 116 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__prop_mode_constraints_in_pred_7_p_0(((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_2), &check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_4), &check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarInfo_17, ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_6), &check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Constraints_19);
    }
#line 116 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__prop_mode_constraints__conv2_STATE_VARIABLE_ModuleInfo_15));
#line 116 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_5 = ((MR_Box) (check_hlds__prop_mode_constraints__conv1_STATE_VARIABLE_VarInfo_17));
#line 116 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__wrapper_arg_7 = ((MR_Box) (check_hlds__prop_mode_constraints__conv0_STATE_VARIABLE_Constraints_19));
#line 116 "prop_mode_constraints.m"
  }
#line 116 "prop_mode_constraints.m"
}

#line 106 "prop_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1(
#line 106 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__closure_arg,
#line 106 "prop_mode_constraints.m"
  MR_Box check_hlds__prop_mode_constraints__wrapper_arg_1)
#line 106 "prop_mode_constraints.m"
{
#line 106 "prop_mode_constraints.m"
  {
#line 106 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 106 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__closure = check_hlds__prop_mode_constraints__closure_arg;

#line 106 "prop_mode_constraints.m"
    {
#line 106 "prop_mode_constraints.m"
      return check_hlds__prop_mode_constraints__succeeded = check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__prop_mode_constraints__wrapper_arg_1));
    }
#line 106 "prop_mode_constraints.m"
    return check_hlds__prop_mode_constraints__succeeded;
#line 106 "prop_mode_constraints.m"
  }
#line 106 "prop_mode_constraints.m"
}

#line 52 "prop_mode_constraints.m"
void MR_CALL 
check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0(
#line 52 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__SCC0_8,
#line 52 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14,
#line 52 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15,
#line 52 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16,
#line 52 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17,
#line 52 "prop_mode_constraints.m"
  MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18,
#line 52 "prop_mode_constraints.m"
  MR_Word * check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19)
#line 52 "prop_mode_constraints.m"
{
#line 104 "prop_mode_constraints.m"
  {
#line 104 "prop_mode_constraints.m"
    MR_bool check_hlds__prop_mode_constraints__succeeded;
#line 104 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__TypeCtorInfo_27_27;
#line 104 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__SCC_13;
#line 104 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_20_20;
#line 104 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_21_21;
#line 106 "prop_mode_constraints.m"
    MR_Word check_hlds__prop_mode_constraints__V_12_12;
#line 116 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_ModuleInfo_15;
#line 116 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17;
#line 116 "prop_mode_constraints.m"
    MR_Box check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Constraints_19;

#line 106 "prop_mode_constraints.m"
    {
#line 106 "prop_mode_constraints.m"
      check_hlds__prop_mode_constraints__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 106 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_20_20, 0) = ((MR_Box) (&check_hlds__prop_mode_constraints_scalar_common_4[0]));
#line 106 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_20_20, 1) = ((MR_Box) (check_hlds__prop_mode_constraints__prop_mode_constraints_in_scc_7_p_0_1));
#line 106 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "prop_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__prop_mode_constraints__V_20_20, 3) = ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14));
#line 106 "prop_mode_constraints.m"
    }
#line 3867 "check_hlds.prop_mode_constraints.c"
    check_hlds__prop_mode_constraints__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 106 "prop_mode_constraints.m"
    {
#line 106 "prop_mode_constraints.m"
      mercury__list__filter_4_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_27_27, check_hlds__prop_mode_constraints__V_20_20, check_hlds__prop_mode_constraints__SCC0_8, &check_hlds__prop_mode_constraints__V_12_12, &check_hlds__prop_mode_constraints__SCC_13);
    }
#line 112 "prop_mode_constraints.m"
    {
#line 112 "prop_mode_constraints.m"
      check_hlds__build_mode_constraints__add_mc_vars_for_scc_heads_4_p_0(check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__prop_mode_constraints__SCC_13, check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_0_16, &check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_21_21);
    }
#line 116 "prop_mode_constraints.m"
    {
#line 116 "prop_mode_constraints.m"
      mercury__list__foldl3_8_p_0(check_hlds__prop_mode_constraints__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_var_info_0, (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[1], (MR_Word) &check_hlds__prop_mode_constraints_scalar_common_1[3], check_hlds__prop_mode_constraints__SCC_13, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_0_14)), &check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_ModuleInfo_15, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_21_21)), &check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17, ((MR_Box) (check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_0_18)), &check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Constraints_19);
    }
#line 116 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) check_hlds__prop_mode_constraints__conv5_STATE_VARIABLE_ModuleInfo_15);
#line 116 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_VarInfo_17 = ((MR_Word) check_hlds__prop_mode_constraints__conv4_STATE_VARIABLE_VarInfo_17);
#line 116 "prop_mode_constraints.m"
    *check_hlds__prop_mode_constraints__STATE_VARIABLE_Constraints_19 = ((MR_Word) check_hlds__prop_mode_constraints__conv3_STATE_VARIABLE_Constraints_19);
#line 104 "prop_mode_constraints.m"
  }
#line 52 "prop_mode_constraints.m"
}

void mercury__check_hlds__prop_mode_constraints__init(void)
{
}

void mercury__check_hlds__prop_mode_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__prop_mode_constraints__check_hlds__prop_mode_constraints__type_ctor_info_pred_constraints_map_0);
}

void mercury__check_hlds__prop_mode_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.prop_mode_constraints. */
