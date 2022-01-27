/*
** Automatically generated from `purity.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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


/* :- module check_hlds.purity. */
/* :- implementation. */

/*
INIT mercury__check_hlds__purity__init
ENDINIT
*/

#include "check_hlds.purity.mih"


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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.post_typecheck.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.passes_aux.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "check_hlds.purity.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

#line 143 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0;

#line 146 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1;

#line 149 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2];

#line 152 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2];

#line 155 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2];

#line 158 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0;

#line 161 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1;

#line 164 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2;

#line 167 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3;

#line 170 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4;

#line 173 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0[5];

#line 176 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0[5];

#line 179 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0[5];

#line 182 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 185 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 188 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 191 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 194 "check_hlds.purity.c"
static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8];

#line 197 "check_hlds.purity.c"
static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8];

#line 200 "check_hlds.purity.c"
static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0;

#line 203 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1];

#line 206 "check_hlds.purity.c"
static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1];

#line 209 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1];

#line 212 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1];

#line 215 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0;

#line 218 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1;

#line 221 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2];

#line 224 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2];

#line 227 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2];

#line 230 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
#line 233 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 235 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 238 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
#line 241 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 243 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 245 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 248 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0_10001(
#line 251 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 253 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 256 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0_10001(
#line 259 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 261 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 263 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 266 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
#line 269 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 271 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 274 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
#line 277 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 279 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 281 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 284 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
#line 287 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 289 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 292 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
#line 295 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 297 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 299 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 1572 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
#line 1572 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1572 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1572 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1572 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
#line 1572 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1572 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1580 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
#line 1580 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1580 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1580 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1580 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
#line 1580 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1580 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 205 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0(
#line 205 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 205 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 205 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 205 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0(
#line 205 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 205 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1576 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
#line 1576 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1576 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1576 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1576 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
#line 1576 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1576 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1603 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
#line 1603 "purity.m"
  MR_Word check_hlds__purity__Specs_4,
#line 1603 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_10,
#line 1603 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_11);

#line 1595 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
#line 1595 "purity.m"
  MR_Word check_hlds__purity__Spec_4,
#line 1595 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1595 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9);

#line 1483 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
#line 1483 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1483 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 1483 "purity.m"
  MR_Word check_hlds__purity__Context_8,
#line 1483 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9);

#line 1458 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
#line 1458 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 1458 "purity.m"
  MR_Word check_hlds__purity__PredId_6,
#line 1458 "purity.m"
  MR_Word check_hlds__purity__Context_7);

#line 1434 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inferred_impure_4_f_0(
#line 1434 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1434 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1434 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1434 "purity.m"
  MR_Word check_hlds__purity__Purity_9);

#line 1403 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(
#line 1403 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1403 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1403 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1403 "purity.m"
  MR_Word check_hlds__purity__PromisedPurity_9);

#line 1388 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(
#line 1388 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_7,
#line 1388 "purity.m"
  MR_Word check_hlds__purity__PredInfo_8,
#line 1388 "purity.m"
  MR_Word check_hlds__purity__PredId_9,
#line 1388 "purity.m"
  MR_Word check_hlds__purity__DeclPurity_10,
#line 1388 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_11);

#line 1368 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_promise_4_f_0(
#line 1368 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1368 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1368 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1368 "purity.m"
  MR_Word check_hlds__purity__Purity_9);

#line 1317 "purity.m"
static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
#line 1317 "purity.m"
  MR_Word check_hlds__purity__Outer_6,
#line 1317 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1317 "purity.m"
  MR_Word * check_hlds__purity__Goal_9,
#line 1317 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_28,
#line 1317 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_29);

#line 1301 "purity.m"
static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
#line 1301 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1301 "purity.m"
  MR_Word check_hlds__purity__VarTypes_8,
#line 1301 "purity.m"
  MR_Word check_hlds__purity__VarSet_9,
#line 1301 "purity.m"
  MR_Word check_hlds__purity__Var_10,
#line 1301 "purity.m"
  MR_Word * check_hlds__purity__VarType_11,
#line 1301 "purity.m"
  MR_Word * check_hlds__purity__Specs_12);

#line 1281 "purity.m"
static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
#line 1281 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_5,
#line 1281 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_6,
#line 1281 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_7,
#line 1281 "purity.m"
  MR_Word * check_hlds__purity__Specs_8);

#line 1217 "purity.m"
static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
#line 1217 "purity.m"
  MR_Word check_hlds__purity__Info_7,
#line 1217 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_8,
#line 1217 "purity.m"
  MR_Word check_hlds__purity__Var_9,
#line 1217 "purity.m"
  MR_Word check_hlds__purity__ConsId_10,
#line 1217 "purity.m"
  MR_Word check_hlds__purity__Args_11,
#line 1217 "purity.m"
  MR_Word * check_hlds__purity__Specs_12);

#line 1165 "purity.m"
static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
#line 1165 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1165 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1165 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9,
#line 1165 "purity.m"
  MR_Word * check_hlds__purity__ActualPurity_10,
#line 1165 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_17,
#line 1165 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_18);

#line 1132 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
#line 1132 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1132 "purity.m"
  MR_Word check_hlds__purity__Info_2,
#line 1132 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_3,
#line 1132 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_4);

#line 1042 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
#line 1042 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_7,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0_10,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Invariants_11);

#line 983 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
#line 983 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 983 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 983 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 983 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_3);

#line 991 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
#line 991 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 991 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 991 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2,
#line 991 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_3,
#line 991 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_4);

#line 863 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
#line 863 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 863 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 863 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2);

#line 665 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
#line 665 "purity.m"
  MR_Word check_hlds__purity__GoalExpr0_8,
#line 665 "purity.m"
  MR_Word * check_hlds__purity__GoalExpr_9,
#line 665 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_10,
#line 665 "purity.m"
  MR_Word * check_hlds__purity__Purity_11,
#line 665 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_12,
#line 665 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_190,
#line 665 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_191);

#line 639 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
#line 639 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 639 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 639 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 639 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 639 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 639 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 639 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 639 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 625 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_cases_purity_8_p_0(
#line 625 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 625 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 625 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 625 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 625 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 625 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 625 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 625 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 613 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
#line 613 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 613 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 613 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 613 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 613 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 613 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 613 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 613 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 596 "purity.m"
static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
#line 596 "purity.m"
  MR_Word check_hlds__purity__Purity_5,
#line 596 "purity.m"
  MR_Word check_hlds__purity__ContainsTrace_6,
#line 596 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8,
#line 596 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_GoalInfo_9);

#line 586 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
#line 586 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 586 "purity.m"
  MR_Word * check_hlds__purity__Goal_8,
#line 586 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 586 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 586 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 586 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17);

#line 570 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
#line 570 "purity.m"
  MR_Word check_hlds__purity__Clause_3,
#line 570 "purity.m"
  MR_Word check_hlds__purity__AllProcIds_4);

#line 512 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
#line 512 "purity.m"
  MR_Word check_hlds__purity__Clause0_7,
#line 512 "purity.m"
  MR_Word * check_hlds__purity__Clause_8,
#line 512 "purity.m"
  MR_Word check_hlds__purity__PredInfo_9,
#line 512 "purity.m"
  MR_Word * check_hlds__purity__Purity_10,
#line 512 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_35,
#line 512 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_36);

#line 499 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
#line 499 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 499 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 499 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 499 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 499 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 499 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 499 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7);

#line 338 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__workaround_gcc_bug_1_f_0(
#line 338 "purity.m"
  MR_Word check_hlds__purity__X_3);

#line 282 "purity.m"
static void MR_CALL 
check_hlds__purity__puritycheck_pred_6_p_0(
#line 282 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 282 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_35,
#line 282 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_36,
#line 282 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_9,
#line 282 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_37,
#line 282 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_38);

#line 227 "purity.m"
static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
#line 227 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 227 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2,
#line 227 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_3,
#line 227 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_4,
#line 227 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_5);


static /* final */ const MR_Box check_hlds__purity_scalar_common_1[5][3];

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[62][2];

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__purity_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_4[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_6[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[62][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "no impurity declaration."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should be promised pure and should have"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "that invokes impure or semipure code"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "indicator."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is sufficient."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "No purity indicator is necessary."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Purity error: unification with expression"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "was declared"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but expression was not a function call."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Purity error: parallel conjunct is"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but parallel conjuncts must be pure or semipure."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Purity error in closure: closure body is"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but closure was not declared"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The type of outer variable"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be either io.state or stm_builtin.stm."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: declared"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but promised pure."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A pure"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "warning: declared"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but actually"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "warning: unnecessary"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not invoke any"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "code,"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "so there is no need for a"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "purity error:"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It must be pure."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It must be declared"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or promised"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In call to "))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "purity error: call must be in"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "an explicit unification which is preceded by"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "purity error: call must be preceded by"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In call to"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A purity indicator of"))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
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



#line 1221 "check_hlds.purity.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0
  }
};

#line 1230 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0 = {
  (MR_String) "have_not_converted_unify",
  (MR_Integer) 0
};

#line 1236 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1 = {
  (MR_String) "have_converted_unify",
  (MR_Integer) 1
};

#line 1242 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1
};

#line 1248 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0
};

#line 1254 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1260 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____converted_unify_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____converted_unify_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "converted_unify",
  {
    check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0
  },
  {
    check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0
};

#line 1281 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0 = {
  (MR_String) "no_worries",
  (MR_Integer) 0
};

#line 1287 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1 = {
  (MR_String) "insufficient_decl",
  (MR_Integer) 1
};

#line 1293 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2 = {
  (MR_String) "inconsistent_promise",
  (MR_Integer) 2
};

#line 1299 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3 = {
  (MR_String) "unnecessary_promise_pure",
  (MR_Integer) 3
};

#line 1305 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4 = {
  (MR_String) "unnecessary_decl",
  (MR_Integer) 4
};

#line 1311 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0[5] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4
};

#line 1320 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0[5] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3
};

#line 1329 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 1338 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_check_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____purity_check_result_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_check_result_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_check_result",
  {
    check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0
  },
  {
    check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0
};

#line 1359 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1367 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1376 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1384 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1392 "check_hlds.purity.c"
static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0
};

#line 1404 "check_hlds.purity.c"
static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8] = {
  (MR_String) "pi_module_info",
  (MR_String) "pi_run_post_typecheck",
  (MR_String) "pi_pred_info",
  (MR_String) "pi_vartypes",
  (MR_String) "pi_varset",
  (MR_String) "pi_messages",
  (MR_String) "pi_requant",
  (MR_String) "pi_converted_unify"
};

#line 1416 "check_hlds.purity.c"
static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0 = {
  (MR_String) "purity_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0,
  check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0,
  NULL,
  NULL
};

#line 1431 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

#line 1436 "check_hlds.purity.c"
static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0
  }
};

#line 1445 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

#line 1450 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1] = {
  (MR_Integer) 0
};

#line 1455 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__purity____Unify____purity_info_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_info_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_info",
  {
    check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0
  },
  {
    check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0
};

#line 1476 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0 = {
  (MR_String) "run_post_typecheck",
  (MR_Integer) 0
};

#line 1482 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1 = {
  (MR_String) "do_not_run_post_typecheck",
  (MR_Integer) 1
};

#line 1488 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1
};

#line 1494 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0
};

#line 1500 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1506 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____run_post_typecheck_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____run_post_typecheck_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "run_post_typecheck",
  {
    check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0
  },
  {
    check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0
};

#line 1527 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
#line 1530 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1532 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1534 "check_hlds.purity.c"
{
#line 1536 "check_hlds.purity.c"
  {
#line 1538 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1541 "check_hlds.purity.c"
    {
#line 1543 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____converted_unify_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1546 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1548 "check_hlds.purity.c"
  }
#line 1550 "check_hlds.purity.c"
}

#line 1553 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
#line 1556 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1558 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1560 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1562 "check_hlds.purity.c"
{
#line 1564 "check_hlds.purity.c"
  {
#line 1566 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1569 "check_hlds.purity.c"
    {
#line 1571 "check_hlds.purity.c"
      check_hlds__purity____Compare____converted_unify_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1574 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1576 "check_hlds.purity.c"
  }
#line 1578 "check_hlds.purity.c"
}

#line 1581 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0_10001(
#line 1584 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1586 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1588 "check_hlds.purity.c"
{
#line 1590 "check_hlds.purity.c"
  {
#line 1592 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1595 "check_hlds.purity.c"
    {
#line 1597 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____purity_check_result_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1600 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1602 "check_hlds.purity.c"
  }
#line 1604 "check_hlds.purity.c"
}

#line 1607 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0_10001(
#line 1610 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1612 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1614 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1616 "check_hlds.purity.c"
{
#line 1618 "check_hlds.purity.c"
  {
#line 1620 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1623 "check_hlds.purity.c"
    {
#line 1625 "check_hlds.purity.c"
      check_hlds__purity____Compare____purity_check_result_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1628 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1630 "check_hlds.purity.c"
  }
#line 1632 "check_hlds.purity.c"
}

#line 1635 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
#line 1638 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1640 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1642 "check_hlds.purity.c"
{
#line 1644 "check_hlds.purity.c"
  {
#line 1646 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1649 "check_hlds.purity.c"
    {
#line 1651 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____purity_info_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1654 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1656 "check_hlds.purity.c"
  }
#line 1658 "check_hlds.purity.c"
}

#line 1661 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
#line 1664 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1666 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1668 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1670 "check_hlds.purity.c"
{
#line 1672 "check_hlds.purity.c"
  {
#line 1674 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1677 "check_hlds.purity.c"
    {
#line 1679 "check_hlds.purity.c"
      check_hlds__purity____Compare____purity_info_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1682 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1684 "check_hlds.purity.c"
  }
#line 1686 "check_hlds.purity.c"
}

#line 1689 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
#line 1692 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1694 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1696 "check_hlds.purity.c"
{
#line 1698 "check_hlds.purity.c"
  {
#line 1700 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1703 "check_hlds.purity.c"
    {
#line 1705 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____run_post_typecheck_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1708 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1710 "check_hlds.purity.c"
  }
#line 1712 "check_hlds.purity.c"
}

#line 1715 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
#line 1718 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1720 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1722 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1724 "check_hlds.purity.c"
{
#line 1726 "check_hlds.purity.c"
  {
#line 1728 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1731 "check_hlds.purity.c"
    {
#line 1733 "check_hlds.purity.c"
      check_hlds__purity____Compare____run_post_typecheck_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1736 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1738 "check_hlds.purity.c"
  }
#line 1740 "check_hlds.purity.c"
}

#line 1572 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
#line 1572 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1572 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1572 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1572 "purity.m"
{
#line 1572 "purity.m"
  {
#line 1572 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1572 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1572 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1572 "purity.m"
    {
#line 1572 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
#line 1572 "purity.m"
      return;
    }
#line 1572 "purity.m"
  }
#line 1572 "purity.m"
}

#line 1572 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
#line 1572 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1572 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1572 "purity.m"
{
#line 1784 "check_hlds.purity.c"
  {
#line 1786 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 1789 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1791 "check_hlds.purity.c"
  }
#line 1572 "purity.m"
}

#line 1580 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
#line 1580 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1580 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1580 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1580 "purity.m"
{
#line 1580 "purity.m"
  {
#line 1580 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1580 "purity.m"
    MR_Integer check_hlds__purity__CastX_27 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1580 "purity.m"
    MR_Integer check_hlds__purity__CastY_28 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1580 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__CastX_27 == check_hlds__purity__CastY_28);
#line 1580 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1820 "check_hlds.purity.c"
      *check_hlds__purity__HeadVar__1_1 = (MR_Integer) 0;
#line 1580 "purity.m"
    else
#line 1580 "purity.m"
      {
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 2)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 3)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 4)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 5)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 6)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 7)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 0)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 1)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 2)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 3)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 4)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 5)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 6)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 7)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_20_20;

#line 1580 "purity.m"
        {
#line 1580 "purity.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__purity__V_20_20, check_hlds__purity__V_4_4, check_hlds__purity__V_12_12);
        }
#line 1866 "check_hlds.purity.c"
        check_hlds__purity__succeeded = (check_hlds__purity__V_20_20 == (MR_Integer) 0);
#line 1580 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1580 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
          *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_20_20;
#line 1580 "purity.m"
        else
#line 1580 "purity.m"
          {
#line 1580 "purity.m"
            MR_Word check_hlds__purity__V_21_21;
#line 1580 "purity.m"
            MR_Integer check_hlds__purity__V_37_37 = (MR_Integer) check_hlds__purity__V_5_5;
#line 1580 "purity.m"
            MR_Integer check_hlds__purity__V_38_38 = (MR_Integer) check_hlds__purity__V_13_13;

#line 1580 "purity.m"
            {
#line 1580 "purity.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__purity__V_21_21, check_hlds__purity__V_37_37, check_hlds__purity__V_38_38);
            }
#line 1890 "check_hlds.purity.c"
            check_hlds__purity__succeeded = (check_hlds__purity__V_21_21 == (MR_Integer) 0);
#line 1580 "purity.m"
            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1580 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
              *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_21_21;
#line 1580 "purity.m"
            else
#line 1580 "purity.m"
              {
#line 1580 "purity.m"
                MR_Word check_hlds__purity__V_22_22;

#line 1580 "purity.m"
                {
#line 1580 "purity.m"
                  hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__purity__V_22_22, check_hlds__purity__V_6_6, check_hlds__purity__V_14_14);
                }
#line 1910 "check_hlds.purity.c"
                check_hlds__purity__succeeded = (check_hlds__purity__V_22_22 == (MR_Integer) 0);
#line 1580 "purity.m"
                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1580 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                  *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_22_22;
#line 1580 "purity.m"
                else
#line 1580 "purity.m"
                  {
#line 1580 "purity.m"
                    MR_Word check_hlds__purity__V_23_23;

#line 1580 "purity.m"
                    {
#line 1580 "purity.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__purity__V_23_23, ((MR_Box) (check_hlds__purity__V_7_7)), ((MR_Box) (check_hlds__purity__V_15_15)));
                    }
#line 1930 "check_hlds.purity.c"
                    check_hlds__purity__succeeded = (check_hlds__purity__V_23_23 == (MR_Integer) 0);
#line 1580 "purity.m"
                    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1580 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                      *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_23_23;
#line 1580 "purity.m"
                    else
#line 1580 "purity.m"
                      {
#line 1580 "purity.m"
                        MR_Word check_hlds__purity__V_24_24;

#line 1580 "purity.m"
                        {
#line 1580 "purity.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[0], &check_hlds__purity__V_24_24, ((MR_Box) (check_hlds__purity__V_8_8)), ((MR_Box) (check_hlds__purity__V_16_16)));
                        }
#line 1950 "check_hlds.purity.c"
                        check_hlds__purity__succeeded = (check_hlds__purity__V_24_24 == (MR_Integer) 0);
#line 1580 "purity.m"
                        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1580 "purity.m"
                        if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                          *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_24_24;
#line 1580 "purity.m"
                        else
#line 1580 "purity.m"
                          {
#line 1580 "purity.m"
                            MR_Word check_hlds__purity__V_25_25;

#line 1580 "purity.m"
                            {
#line 1580 "purity.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[1], &check_hlds__purity__V_25_25, ((MR_Box) (check_hlds__purity__V_9_9)), ((MR_Box) (check_hlds__purity__V_17_17)));
                            }
#line 1970 "check_hlds.purity.c"
                            check_hlds__purity__succeeded = (check_hlds__purity__V_25_25 == (MR_Integer) 0);
#line 1580 "purity.m"
                            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1580 "purity.m"
                            if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                              *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_25_25;
#line 1580 "purity.m"
                            else
#line 1580 "purity.m"
                              {
#line 1580 "purity.m"
                                MR_Word check_hlds__purity__V_26_26;
#line 1580 "purity.m"
                                MR_Integer check_hlds__purity__V_39_39 = (MR_Integer) check_hlds__purity__V_10_10;
#line 1580 "purity.m"
                                MR_Integer check_hlds__purity__V_40_40 = (MR_Integer) check_hlds__purity__V_18_18;

#line 1580 "purity.m"
                                {
#line 1580 "purity.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__purity__V_26_26, check_hlds__purity__V_39_39, check_hlds__purity__V_40_40);
                                }
#line 1994 "check_hlds.purity.c"
                                check_hlds__purity__succeeded = (check_hlds__purity__V_26_26 == (MR_Integer) 0);
#line 1580 "purity.m"
                                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1580 "purity.m"
                                if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                                  *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_26_26;
#line 1580 "purity.m"
                                else
#line 1580 "purity.m"
                                  {
#line 1580 "purity.m"
                                    MR_Integer check_hlds__purity__V_41_41 = (MR_Integer) check_hlds__purity__V_11_11;
#line 1580 "purity.m"
                                    MR_Integer check_hlds__purity__V_42_42 = (MR_Integer) check_hlds__purity__V_19_19;

#line 1580 "purity.m"
                                    {
#line 1580 "purity.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__V_41_41, check_hlds__purity__V_42_42);
#line 1580 "purity.m"
                                      return;
                                    }
#line 1580 "purity.m"
                                  }
#line 1580 "purity.m"
                              }
#line 1580 "purity.m"
                          }
#line 1580 "purity.m"
                      }
#line 1580 "purity.m"
                  }
#line 1580 "purity.m"
              }
#line 1580 "purity.m"
          }
#line 1580 "purity.m"
      }
#line 1580 "purity.m"
  }
#line 1580 "purity.m"
}

#line 1580 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
#line 1580 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1580 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1580 "purity.m"
{
#line 1580 "purity.m"
  {
#line 1580 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1580 "purity.m"
    MR_Integer check_hlds__purity__CastX_19 = (MR_Integer) check_hlds__purity__HeadVar__1_1;
#line 1580 "purity.m"
    MR_Integer check_hlds__purity__CastY_20 = (MR_Integer) check_hlds__purity__HeadVar__2_2;

#line 1580 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__CastX_19 == check_hlds__purity__CastY_20);
#line 1580 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
      check_hlds__purity__succeeded = MR_TRUE;
#line 1580 "purity.m"
    else
#line 1580 "purity.m"
      {
#line 1580 "purity.m"
        MR_Word check_hlds__purity__TypeCtorInfo_23_23;
#line 1580 "purity.m"
        MR_Word check_hlds__purity__TypeInfo_24_24;
#line 1580 "purity.m"
        MR_Word check_hlds__purity__TypeInfo_25_25;
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 2)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 3)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 4)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 5)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 6)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 7)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 2)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 3)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 4)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 5)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 6)));
#line 1580 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 7)));

#line 2106 "check_hlds.purity.c"
        {
#line 2108 "check_hlds.purity.c"
          check_hlds__purity__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__purity__V_3_3, check_hlds__purity__V_11_11);
        }
#line 1580 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
          {
#line 2115 "check_hlds.purity.c"
            check_hlds__purity__succeeded = (check_hlds__purity__V_4_4 == check_hlds__purity__V_12_12);
#line 1580 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
              {
#line 2121 "check_hlds.purity.c"
                {
#line 2123 "check_hlds.purity.c"
                  check_hlds__purity__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__purity__V_5_5, check_hlds__purity__V_13_13);
                }
#line 1580 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                  {
#line 2130 "check_hlds.purity.c"
                    check_hlds__purity__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2132 "check_hlds.purity.c"
                    {
#line 2134 "check_hlds.purity.c"
                      check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeCtorInfo_23_23, ((MR_Box) (check_hlds__purity__V_6_6)), ((MR_Box) (check_hlds__purity__V_14_14)));
                    }
#line 1580 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                      {
#line 2141 "check_hlds.purity.c"
                        check_hlds__purity__TypeInfo_24_24 = (MR_Word) &check_hlds__purity_scalar_common_2[0];
#line 2143 "check_hlds.purity.c"
                        {
#line 2145 "check_hlds.purity.c"
                          check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_24_24, ((MR_Box) (check_hlds__purity__V_7_7)), ((MR_Box) (check_hlds__purity__V_15_15)));
                        }
#line 1580 "purity.m"
                        if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                          {
#line 2152 "check_hlds.purity.c"
                            check_hlds__purity__TypeInfo_25_25 = (MR_Word) &check_hlds__purity_scalar_common_2[1];
#line 2154 "check_hlds.purity.c"
                            {
#line 2156 "check_hlds.purity.c"
                              check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_25_25, ((MR_Box) (check_hlds__purity__V_8_8)), ((MR_Box) (check_hlds__purity__V_16_16)));
                            }
#line 1580 "purity.m"
                            if (check_hlds__purity__succeeded)
#line 1580 "purity.m"
                              {
#line 2163 "check_hlds.purity.c"
                                check_hlds__purity__succeeded = (check_hlds__purity__V_9_9 == check_hlds__purity__V_17_17);
#line 1580 "purity.m"
                                if (check_hlds__purity__succeeded)
#line 2167 "check_hlds.purity.c"
                                  check_hlds__purity__succeeded = (check_hlds__purity__V_10_10 == check_hlds__purity__V_18_18);
#line 1580 "purity.m"
                              }
#line 1580 "purity.m"
                          }
#line 1580 "purity.m"
                      }
#line 1580 "purity.m"
                  }
#line 1580 "purity.m"
              }
#line 1580 "purity.m"
          }
#line 1580 "purity.m"
      }
#line 1580 "purity.m"
    return check_hlds__purity__succeeded;
#line 1580 "purity.m"
  }
#line 1580 "purity.m"
}

#line 205 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0(
#line 205 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 205 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 205 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 205 "purity.m"
{
#line 205 "purity.m"
  {
#line 205 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 205 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 205 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 205 "purity.m"
    {
#line 205 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
#line 205 "purity.m"
      return;
    }
#line 205 "purity.m"
  }
#line 205 "purity.m"
}

#line 205 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0(
#line 205 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 205 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 205 "purity.m"
{
#line 2231 "check_hlds.purity.c"
  {
#line 2233 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 2236 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 2238 "check_hlds.purity.c"
  }
#line 205 "purity.m"
}

#line 1576 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
#line 1576 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1576 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1576 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1576 "purity.m"
{
#line 1576 "purity.m"
  {
#line 1576 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1576 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1576 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1576 "purity.m"
    {
#line 1576 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
#line 1576 "purity.m"
      return;
    }
#line 1576 "purity.m"
  }
#line 1576 "purity.m"
}

#line 1576 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
#line 1576 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1576 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1576 "purity.m"
{
#line 2284 "check_hlds.purity.c"
  {
#line 2286 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 2289 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 2291 "check_hlds.purity.c"
  }
#line 1576 "purity.m"
}

#line 1603 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
#line 1603 "purity.m"
  MR_Word check_hlds__purity__Specs_4,
#line 1603 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_10,
#line 1603 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_11)
#line 1603 "purity.m"
{
#line 1608 "purity.m"
  {
#line 1608 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1608 "purity.m"
    if ((check_hlds__purity__Specs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1608 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_11 = check_hlds__purity__STATE_VARIABLE_Info_0_10;
#line 1608 "purity.m"
    else
#line 1610 "purity.m"
      {
#line 1610 "purity.m"
        MR_Word check_hlds__purity__Msgs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1610 "purity.m"
        MR_Word check_hlds__purity__Msgs_9;
#line 1611 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1611 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1611 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1611 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1611 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1611 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1611 "purity.m"
        MR_Word check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1613 "purity.m"
        MR_Word check_hlds__purity__V_20_20;
#line 1613 "purity.m"
        MR_Word check_hlds__purity__V_21_21;
#line 1613 "purity.m"
        MR_Word check_hlds__purity__V_22_22;
#line 1613 "purity.m"
        MR_Word check_hlds__purity__V_23_23;
#line 1613 "purity.m"
        MR_Word check_hlds__purity__V_24_24;
#line 1613 "purity.m"
        MR_Word check_hlds__purity__V_26_26;
#line 1613 "purity.m"
        MR_Word check_hlds__purity__V_27_27;
#line 1613 "purity.m"
        MR_Word check_hlds__purity__V_25_25;

#line 1612 "purity.m"
        {
#line 1612 "purity.m"
          check_hlds__purity__Msgs_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__Specs_4, check_hlds__purity__Msgs0_8);
        }
#line 1613 "purity.m"
        check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1613 "purity.m"
        check_hlds__purity__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1613 "purity.m"
        check_hlds__purity__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1613 "purity.m"
        check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1613 "purity.m"
        check_hlds__purity__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1613 "purity.m"
        check_hlds__purity__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1613 "purity.m"
        check_hlds__purity__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1613 "purity.m"
        check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1613 "purity.m"
        {
#line 1613 "purity.m"
          MR_Word base;
#line 1613 "purity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1613 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_11 = base;
#line 1613 "purity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_20_20));
#line 1613 "purity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1613 "purity.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1613 "purity.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1613 "purity.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1613 "purity.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_9));
#line 1613 "purity.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_26_26));
#line 1613 "purity.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1613 "purity.m"
        }
#line 1610 "purity.m"
      }
#line 1608 "purity.m"
  }
#line 1603 "purity.m"
}

#line 1595 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
#line 1595 "purity.m"
  MR_Word check_hlds__purity__Spec_4,
#line 1595 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1595 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9)
#line 1595 "purity.m"
{
#line 1598 "purity.m"
  {
#line 1598 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1598 "purity.m"
    MR_Word check_hlds__purity__Msgs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1598 "purity.m"
    MR_Word check_hlds__purity__Msgs_7;
#line 1598 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1598 "purity.m"
    MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1598 "purity.m"
    MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1598 "purity.m"
    MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1598 "purity.m"
    MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1598 "purity.m"
    MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1598 "purity.m"
    MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));

#line 1600 "purity.m"
    {
#line 1600 "purity.m"
      check_hlds__purity__Msgs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_7, 0) = ((MR_Box) (check_hlds__purity__Spec_4));
#line 1600 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_7, 1) = ((MR_Box) (check_hlds__purity__Msgs0_6));
#line 1600 "purity.m"
    }
#line 1601 "purity.m"
    {
#line 1601 "purity.m"
      MR_Word base;
#line 1601 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_9 = base;
#line 1601 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_11_11));
#line 1601 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_12_12));
#line 1601 "purity.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_13_13));
#line 1601 "purity.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_14_14));
#line 1601 "purity.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_15_15));
#line 1601 "purity.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_7));
#line 1601 "purity.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_16_16));
#line 1601 "purity.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_17_17));
#line 1601 "purity.m"
    }
#line 1598 "purity.m"
  }
#line 1595 "purity.m"
}

#line 1483 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
#line 1483 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1483 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 1483 "purity.m"
  MR_Word check_hlds__purity__Context_8,
#line 1483 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9)
#line 1483 "purity.m"
{
#line 1487 "purity.m"
  {
#line 1487 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_65_65;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__PredInfo_11;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__ActualPurity_12;
#line 1487 "purity.m"
    MR_String check_hlds__purity__DeclaredPurityName_13;
#line 1487 "purity.m"
    MR_String check_hlds__purity__ActualPurityName_14;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__PredPieces_15;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__Pieces1_16;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__Pieces2_17;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_30_30;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_33_33;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_34_34;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1487 "purity.m"
    MR_Word check_hlds__purity__V_63_63;

#line 1488 "purity.m"
    {
#line 1488 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_6, check_hlds__purity__PredId_7, &check_hlds__purity__PredInfo_11);
    }
#line 1489 "purity.m"
    {
#line 1489 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_11, &check_hlds__purity__ActualPurity_12);
    }
#line 1490 "purity.m"
    {
#line 1490 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_9, &check_hlds__purity__DeclaredPurityName_13);
    }
#line 1491 "purity.m"
    {
#line 1491 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_12, &check_hlds__purity__ActualPurityName_14);
    }
#line 1492 "purity.m"
    {
#line 1492 "purity.m"
      check_hlds__purity__PredPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 0, check_hlds__purity__PredId_7);
    }
#line 2569 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1496 "purity.m"
    {
#line 1496 "purity.m"
      check_hlds__purity__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_34_34, 0) = ((MR_Box) (check_hlds__purity__DeclaredPurityName_13));
#line 1496 "purity.m"
    }
#line 1496 "purity.m"
    {
#line 1496 "purity.m"
      check_hlds__purity__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 0) = ((MR_Box) (check_hlds__purity__V_34_34));
#line 1496 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[17])));
#line 1496 "purity.m"
    }
#line 1495 "purity.m"
    {
#line 1495 "purity.m"
      check_hlds__purity__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[43])));
#line 1495 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 1) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1495 "purity.m"
    }
#line 1495 "purity.m"
    {
#line 1495 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1495 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (check_hlds__purity__V_30_30));
#line 1495 "purity.m"
    }
#line 1495 "purity.m"
    {
#line 1495 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[60])));
#line 1495 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 1) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1495 "purity.m"
    }
#line 1495 "purity.m"
    {
#line 1495 "purity.m"
      check_hlds__purity__V_24_24 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_65_65, check_hlds__purity__PredPieces_15, check_hlds__purity__V_25_25);
    }
#line 1495 "purity.m"
    {
#line 1495 "purity.m"
      check_hlds__purity__Pieces1_16 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[59]), check_hlds__purity__V_24_24);
    }
#line 1501 "purity.m"
    if ((check_hlds__purity__ActualPurity_12 == (MR_Integer) 0))
#line 1500 "purity.m"
      check_hlds__purity__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[21]);
#line 1501 "purity.m"
    else
#line 1504 "purity.m"
      {
#line 1504 "purity.m"
        MR_Word check_hlds__purity__V_43_43;
#line 1504 "purity.m"
        MR_Word check_hlds__purity__V_44_44;

#line 1505 "purity.m"
        {
#line 1505 "purity.m"
          check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_44_44, 0) = ((MR_Box) (check_hlds__purity__ActualPurityName_14));
#line 1505 "purity.m"
        }
#line 1505 "purity.m"
        {
#line 1505 "purity.m"
          check_hlds__purity__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 0) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1505 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[19])));
#line 1505 "purity.m"
        }
#line 1505 "purity.m"
        {
#line 1505 "purity.m"
          check_hlds__purity__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[61])));
#line 1505 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_17, 1) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1505 "purity.m"
        }
#line 1504 "purity.m"
      }
#line 1508 "purity.m"
    {
#line 1508 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__Pieces1_16));
#line 1508 "purity.m"
    }
#line 1508 "purity.m"
    {
#line 1508 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__Pieces2_17));
#line 1508 "purity.m"
    }
#line 1508 "purity.m"
    {
#line 1508 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1508 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1508 "purity.m"
    }
#line 1508 "purity.m"
    {
#line 1508 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1508 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1508 "purity.m"
    }
#line 1508 "purity.m"
    {
#line 1508 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_8));
#line 1508 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1508 "purity.m"
    }
#line 1509 "purity.m"
    {
#line 1509 "purity.m"
      check_hlds__purity__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_63_63, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1509 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1509 "purity.m"
    }
#line 1509 "purity.m"
    {
#line 1509 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1509 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1509 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_63_63));
#line 1509 "purity.m"
    }
#line 1487 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1487 "purity.m"
  }
#line 1483 "purity.m"
}

#line 1458 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
#line 1458 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 1458 "purity.m"
  MR_Word check_hlds__purity__PredId_6,
#line 1458 "purity.m"
  MR_Word check_hlds__purity__Context_7)
#line 1458 "purity.m"
{
#line 1461 "purity.m"
  {
#line 1461 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__Spec_8;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_63_63;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__PredInfo_9;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_10;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__Purity_11;
#line 1461 "purity.m"
    MR_String check_hlds__purity__PurityName_12;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__PredPieces_13;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__Pieces1_14;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__Pieces2_15;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__Msg_16;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_18_18;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_21_21;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1461 "purity.m"
    MR_Word check_hlds__purity__V_61_61;

#line 1462 "purity.m"
    {
#line 1462 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_5, check_hlds__purity__PredId_6, &check_hlds__purity__PredInfo_9);
    }
#line 1463 "purity.m"
    {
#line 1463 "purity.m"
      check_hlds__purity__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_9);
    }
#line 1464 "purity.m"
    {
#line 1464 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__Purity_11);
    }
#line 1465 "purity.m"
    {
#line 1465 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_11, &check_hlds__purity__PurityName_12);
    }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__PredPieces_13 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_5, (MR_Integer) 0, check_hlds__purity__PredId_6);
    }
#line 2826 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1468 "purity.m"
    {
#line 1468 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1468 "purity.m"
    }
#line 1468 "purity.m"
    {
#line 1468 "purity.m"
      check_hlds__purity__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1468 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1468 "purity.m"
    }
#line 1468 "purity.m"
    {
#line 1468 "purity.m"
      check_hlds__purity__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[54])));
#line 1468 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_18_18, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1468 "purity.m"
    }
#line 1468 "purity.m"
    {
#line 1468 "purity.m"
      check_hlds__purity__V_24_24 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__PredPieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    }
#line 1468 "purity.m"
    {
#line 1468 "purity.m"
      check_hlds__purity__Pieces1_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__V_18_18, check_hlds__purity__V_24_24);
    }
#line 1474 "purity.m"
    if ((check_hlds__purity__PredOrFunc_10 == (MR_Integer) 1))
#line 1475 "purity.m"
      {
#line 1475 "purity.m"
        MR_Word check_hlds__purity__V_33_33;
#line 1475 "purity.m"
        MR_Word check_hlds__purity__V_36_36;
#line 1475 "purity.m"
        MR_Word check_hlds__purity__V_37_37;

#line 1478 "purity.m"
        {
#line 1478 "purity.m"
          check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_37_37, 0) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1478 "purity.m"
        }
#line 1477 "purity.m"
        {
#line 1477 "purity.m"
          check_hlds__purity__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 0) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1477 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[17])));
#line 1477 "purity.m"
        }
#line 1476 "purity.m"
        {
#line 1476 "purity.m"
          check_hlds__purity__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[56])));
#line 1476 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 1) = ((MR_Box) (check_hlds__purity__V_36_36));
#line 1476 "purity.m"
        }
#line 1476 "purity.m"
        {
#line 1476 "purity.m"
          check_hlds__purity__Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[55])));
#line 1476 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 1) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1476 "purity.m"
        }
#line 1475 "purity.m"
      }
#line 1474 "purity.m"
    else
#line 1471 "purity.m"
      {
#line 1471 "purity.m"
        MR_Word check_hlds__purity__V_46_46;
#line 1471 "purity.m"
        MR_Word check_hlds__purity__V_47_47;

#line 1473 "purity.m"
        {
#line 1473 "purity.m"
          check_hlds__purity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_47_47, 0) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1473 "purity.m"
        }
#line 1472 "purity.m"
        {
#line 1472 "purity.m"
          check_hlds__purity__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1472 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[17])));
#line 1472 "purity.m"
        }
#line 1472 "purity.m"
        {
#line 1472 "purity.m"
          check_hlds__purity__Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[57])));
#line 1472 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 1) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 1472 "purity.m"
        }
#line 1471 "purity.m"
      }
#line 1480 "purity.m"
    {
#line 1480 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__Pieces1_14));
#line 1480 "purity.m"
    }
#line 1480 "purity.m"
    {
#line 1480 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__Pieces2_15));
#line 1480 "purity.m"
    }
#line 1480 "purity.m"
    {
#line 1480 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1480 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1480 "purity.m"
    }
#line 1480 "purity.m"
    {
#line 1480 "purity.m"
      check_hlds__purity__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_54_54, 0) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1480 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_54_54, 1) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1480 "purity.m"
    }
#line 1480 "purity.m"
    {
#line 1480 "purity.m"
      check_hlds__purity__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_16, 0) = ((MR_Box) (check_hlds__purity__Context_7));
#line 1480 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_16, 1) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1480 "purity.m"
    }
#line 1481 "purity.m"
    {
#line 1481 "purity.m"
      check_hlds__purity__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__Msg_16));
#line 1481 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1481 "purity.m"
    }
#line 1481 "purity.m"
    {
#line 1481 "purity.m"
      check_hlds__purity__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1481 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1481 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1481 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 2) = ((MR_Box) (check_hlds__purity__V_61_61));
#line 1481 "purity.m"
    }
#line 1461 "purity.m"
    return check_hlds__purity__Spec_8;
#line 1461 "purity.m"
  }
#line 1458 "purity.m"
}

#line 1434 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inferred_impure_4_f_0(
#line 1434 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1434 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1434 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1434 "purity.m"
  MR_Word check_hlds__purity__Purity_9)
#line 1434 "purity.m"
{
#line 1437 "purity.m"
  {
#line 1437 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_81;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_12;
#line 1437 "purity.m"
    MR_String check_hlds__purity__PredOrFuncStr_13;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_14;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__DeclaredPurity_15;
#line 1437 "purity.m"
    MR_String check_hlds__purity__PurityName_16;
#line 1437 "purity.m"
    MR_String check_hlds__purity__DeclaredPurityName_17;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__Pieces1_18;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__Pieces2_19;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__Msg_20;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_29_29;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_53_53;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_62_62;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__PredPieces_68;
#line 1437 "purity.m"
    MR_Word check_hlds__purity__V_74_74;

#line 1438 "purity.m"
    {
#line 1438 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1439 "purity.m"
    {
#line 1439 "purity.m"
      check_hlds__purity__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1440 "purity.m"
    {
#line 1440 "purity.m"
      check_hlds__purity__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__purity__PredOrFunc_12);
    }
#line 1364 "purity.m"
    {
#line 1364 "purity.m"
      check_hlds__purity__PredPieces_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 3121 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1366 "purity.m"
    {
#line 1366 "purity.m"
      check_hlds__purity__V_74_74 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_81, check_hlds__purity__PredPieces_68, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    }
#line 1366 "purity.m"
    {
#line 1366 "purity.m"
      check_hlds__purity__PredContextPieces_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_81, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[36]), check_hlds__purity__V_74_74);
    }
#line 1442 "purity.m"
    {
#line 1442 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__DeclaredPurity_15);
    }
#line 1443 "purity.m"
    {
#line 1443 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_9, &check_hlds__purity__PurityName_16);
    }
#line 1444 "purity.m"
    {
#line 1444 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_15, &check_hlds__purity__DeclaredPurityName_17);
    }
#line 1446 "purity.m"
    {
#line 1446 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__PredOrFuncStr_13));
#line 1446 "purity.m"
    }
#line 1447 "purity.m"
    {
#line 1447 "purity.m"
      check_hlds__purity__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_29_29, 0) = ((MR_Box) (check_hlds__purity__PurityName_16));
#line 1447 "purity.m"
    }
#line 1447 "purity.m"
    {
#line 1447 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1447 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[15])));
#line 1447 "purity.m"
    }
#line 1446 "purity.m"
    {
#line 1446 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[49])));
#line 1446 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 1) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1446 "purity.m"
    }
#line 1446 "purity.m"
    {
#line 1446 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1446 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (check_hlds__purity__V_25_25));
#line 1446 "purity.m"
    }
#line 1446 "purity.m"
    {
#line 1446 "purity.m"
      check_hlds__purity__Pieces1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[48])));
#line 1446 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces1_18, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1446 "purity.m"
    }
#line 1448 "purity.m"
    {
#line 1448 "purity.m"
      check_hlds__purity__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__purity__PredInfo_7);
    }
#line 1450 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1449 "purity.m"
      {
#line 1449 "purity.m"
        check_hlds__purity__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[51]);
#line 1449 "purity.m"
      }
#line 1450 "purity.m"
    else
#line 1451 "purity.m"
      {
#line 1451 "purity.m"
        MR_Word check_hlds__purity__V_41_41;
#line 1451 "purity.m"
        MR_Word check_hlds__purity__V_42_42;
#line 1451 "purity.m"
        MR_Word check_hlds__purity__V_43_43;
#line 1451 "purity.m"
        MR_Word check_hlds__purity__V_46_46;
#line 1451 "purity.m"
        MR_Word check_hlds__purity__V_47_47;
#line 1451 "purity.m"
        MR_String check_hlds__purity__V_48_48;

#line 1451 "purity.m"
        {
#line 1451 "purity.m"
          check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_42_42, 0) = ((MR_Box) (check_hlds__purity__PurityName_16));
#line 1451 "purity.m"
        }
#line 1452 "purity.m"
        {
#line 1452 "purity.m"
          check_hlds__purity__V_48_48 = mercury__string__f_43_43_2_f_0(check_hlds__purity__DeclaredPurityName_17, (MR_String) ".");
        }
#line 1452 "purity.m"
        {
#line 1452 "purity.m"
          check_hlds__purity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_47_47, 0) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 1452 "purity.m"
        }
#line 1452 "purity.m"
        {
#line 1452 "purity.m"
          check_hlds__purity__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1452 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[3])));
#line 1452 "purity.m"
        }
#line 1451 "purity.m"
        {
#line 1451 "purity.m"
          check_hlds__purity__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[53])));
#line 1451 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 1) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 1451 "purity.m"
        }
#line 1451 "purity.m"
        {
#line 1451 "purity.m"
          check_hlds__purity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 0) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1451 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1451 "purity.m"
        }
#line 1451 "purity.m"
        {
#line 1451 "purity.m"
          check_hlds__purity__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[52])));
#line 1451 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_19, 1) = ((MR_Box) (check_hlds__purity__V_41_41));
#line 1451 "purity.m"
        }
#line 1451 "purity.m"
      }
#line 1455 "purity.m"
    {
#line 1455 "purity.m"
      check_hlds__purity__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_54_54, 0) = ((MR_Box) (check_hlds__purity__PredContextPieces_14));
#line 1455 "purity.m"
    }
#line 1455 "purity.m"
    {
#line 1455 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__Pieces1_18));
#line 1455 "purity.m"
    }
#line 1455 "purity.m"
    {
#line 1455 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__Pieces2_19));
#line 1455 "purity.m"
    }
#line 1455 "purity.m"
    {
#line 1455 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1455 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "purity.m"
    }
#line 1455 "purity.m"
    {
#line 1455 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1455 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 1) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1455 "purity.m"
    }
#line 1454 "purity.m"
    {
#line 1454 "purity.m"
      check_hlds__purity__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_53_53, 0) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1454 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_53_53, 1) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1454 "purity.m"
    }
#line 1454 "purity.m"
    {
#line 1454 "purity.m"
      check_hlds__purity__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1454 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_20, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1454 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_20, 1) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1454 "purity.m"
    }
#line 1456 "purity.m"
    {
#line 1456 "purity.m"
      check_hlds__purity__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_62_62, 0) = ((MR_Box) (check_hlds__purity__Msg_20));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1456 "purity.m"
    }
#line 1456 "purity.m"
    {
#line 1456 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_62_62));
#line 1456 "purity.m"
    }
#line 1437 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1437 "purity.m"
  }
#line 1434 "purity.m"
}

#line 1403 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(
#line 1403 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1403 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1403 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1403 "purity.m"
  MR_Word check_hlds__purity__PromisedPurity_9)
#line 1403 "purity.m"
{
#line 1407 "purity.m"
  {
#line 1407 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_83;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_12;
#line 1407 "purity.m"
    MR_String check_hlds__purity__Pragma_13;
#line 1407 "purity.m"
    MR_String check_hlds__purity__CodeStr_14;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_15;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__MainPieces_16;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__VerbosePieces_17;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_34_34;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_35_35;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_36_36;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_39_39;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_40_40;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_41_41;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_60_60;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_64_64;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__PredPieces_70;
#line 1407 "purity.m"
    MR_Word check_hlds__purity__V_76_76;

#line 1408 "purity.m"
    {
#line 1408 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1364 "purity.m"
    {
#line 1364 "purity.m"
      check_hlds__purity__PredPieces_70 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 3474 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_83 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1366 "purity.m"
    {
#line 1366 "purity.m"
      check_hlds__purity__V_76_76 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_83, check_hlds__purity__PredPieces_70, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    }
#line 1366 "purity.m"
    {
#line 1366 "purity.m"
      check_hlds__purity__PredContextPieces_12 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_83, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[36]), check_hlds__purity__V_76_76);
    }
#line 1414 "purity.m"
    if ((check_hlds__purity__PromisedPurity_9 == (MR_Integer) 2))
#line 1419 "purity.m"
      {
#line 1420 "purity.m"
        {
#line 1420 "purity.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "function \140check_hlds.purity.warn_unnecessary_promise_pure\'/4", (MR_String) "promise_impure");
        }
#line 1419 "purity.m"
      }
#line 1414 "purity.m"
    else
#line 1414 "purity.m"
      if ((check_hlds__purity__PromisedPurity_9 == (MR_Integer) 0))
#line 1411 "purity.m"
        {
#line 1412 "purity.m"
          check_hlds__purity__Pragma_13 = (MR_String) "promise_pure";
#line 1413 "purity.m"
          check_hlds__purity__CodeStr_14 = (MR_String) "impure or semipure";
#line 1411 "purity.m"
        }
#line 1414 "purity.m"
      else
#line 1415 "purity.m"
        {
#line 1416 "purity.m"
          check_hlds__purity__Pragma_13 = (MR_String) "promise_semipure";
#line 1417 "purity.m"
          check_hlds__purity__CodeStr_14 = (MR_String) "impure";
#line 1415 "purity.m"
        }
#line 1422 "purity.m"
    {
#line 1422 "purity.m"
      check_hlds__purity__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1423 "purity.m"
    {
#line 1423 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_25_25, 0) = ((MR_Box) (check_hlds__purity__Pragma_13));
#line 1423 "purity.m"
    }
#line 1423 "purity.m"
    {
#line 1423 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__V_25_25));
#line 1423 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[13])));
#line 1423 "purity.m"
    }
#line 1423 "purity.m"
    {
#line 1423 "purity.m"
      check_hlds__purity__MainPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__MainPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[43])));
#line 1423 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__MainPieces_16, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1423 "purity.m"
    }
#line 1425 "purity.m"
    {
#line 1425 "purity.m"
      check_hlds__purity__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1425 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_35_35, 1) = ((MR_Box) (check_hlds__purity__PredOrFunc_15));
#line 1425 "purity.m"
    }
#line 1426 "purity.m"
    {
#line 1426 "purity.m"
      check_hlds__purity__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_40_40, 0) = ((MR_Box) (check_hlds__purity__CodeStr_14));
#line 1426 "purity.m"
    }
#line 1426 "purity.m"
    {
#line 1426 "purity.m"
      check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[47])));
#line 1426 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1426 "purity.m"
    }
#line 1426 "purity.m"
    {
#line 1426 "purity.m"
      check_hlds__purity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[46])));
#line 1426 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1426 "purity.m"
    }
#line 1426 "purity.m"
    {
#line 1426 "purity.m"
      check_hlds__purity__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 0) = ((MR_Box) (check_hlds__purity__V_40_40));
#line 1426 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 1) = ((MR_Box) (check_hlds__purity__V_41_41));
#line 1426 "purity.m"
    }
#line 1425 "purity.m"
    {
#line 1425 "purity.m"
      check_hlds__purity__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[45])));
#line 1425 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 1) = ((MR_Box) (check_hlds__purity__V_39_39));
#line 1425 "purity.m"
    }
#line 1425 "purity.m"
    {
#line 1425 "purity.m"
      check_hlds__purity__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 0) = ((MR_Box) (check_hlds__purity__V_35_35));
#line 1425 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 1) = ((MR_Box) (check_hlds__purity__V_36_36));
#line 1425 "purity.m"
    }
#line 1425 "purity.m"
    {
#line 1425 "purity.m"
      check_hlds__purity__VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[44])));
#line 1425 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 1) = ((MR_Box) (check_hlds__purity__V_34_34));
#line 1425 "purity.m"
    }
#line 1430 "purity.m"
    {
#line 1430 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1430 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__PredContextPieces_12));
#line 1430 "purity.m"
    }
#line 1430 "purity.m"
    {
#line 1430 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1430 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__MainPieces_16));
#line 1430 "purity.m"
    }
#line 1431 "purity.m"
    {
#line 1431 "purity.m"
      check_hlds__purity__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_60_60, 0) = ((MR_Box) (check_hlds__purity__VerbosePieces_17));
#line 1431 "purity.m"
    }
#line 1430 "purity.m"
    {
#line 1430 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__V_60_60));
#line 1430 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1430 "purity.m"
    }
#line 1430 "purity.m"
    {
#line 1430 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1430 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1430 "purity.m"
    }
#line 1429 "purity.m"
    {
#line 1429 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1429 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 1) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1429 "purity.m"
    }
#line 1429 "purity.m"
    {
#line 1429 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1429 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1429 "purity.m"
    }
#line 1432 "purity.m"
    {
#line 1432 "purity.m"
      check_hlds__purity__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_64_64, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1432 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1432 "purity.m"
    }
#line 1432 "purity.m"
    {
#line 1432 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1432 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1432 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_64_64));
#line 1432 "purity.m"
    }
#line 1407 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1407 "purity.m"
  }
#line 1403 "purity.m"
}

#line 1388 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(
#line 1388 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_7,
#line 1388 "purity.m"
  MR_Word check_hlds__purity__PredInfo_8,
#line 1388 "purity.m"
  MR_Word check_hlds__purity__PredId_9,
#line 1388 "purity.m"
  MR_Word check_hlds__purity__DeclPurity_10,
#line 1388 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_11)
#line 1388 "purity.m"
{
#line 1392 "purity.m"
  {
#line 1392 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__Spec_12;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_57;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__Context_13;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_14;
#line 1392 "purity.m"
    MR_String check_hlds__purity__DeclPurityName_15;
#line 1392 "purity.m"
    MR_String check_hlds__purity__ActualPurityName_16;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__Pieces_17;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_27_27;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1392 "purity.m"
    MR_String check_hlds__purity__V_29_29;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_32_32;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_33_33;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_37_37;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__PredPieces_44;
#line 1392 "purity.m"
    MR_Word check_hlds__purity__V_50_50;

#line 1393 "purity.m"
    {
#line 1393 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_8, &check_hlds__purity__Context_13);
    }
#line 1364 "purity.m"
    {
#line 1364 "purity.m"
      check_hlds__purity__PredPieces_44 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_7, (MR_Integer) 1, check_hlds__purity__PredId_9);
    }
#line 3793 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_57 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1366 "purity.m"
    {
#line 1366 "purity.m"
      check_hlds__purity__V_50_50 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_57, check_hlds__purity__PredPieces_44, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    }
#line 1366 "purity.m"
    {
#line 1366 "purity.m"
      check_hlds__purity__PredContextPieces_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_57, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[36]), check_hlds__purity__V_50_50);
    }
#line 1395 "purity.m"
    {
#line 1395 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclPurity_10, &check_hlds__purity__DeclPurityName_15);
    }
#line 1396 "purity.m"
    {
#line 1396 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_11, &check_hlds__purity__ActualPurityName_16);
    }
#line 1398 "purity.m"
    {
#line 1398 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__DeclPurityName_15));
#line 1398 "purity.m"
    }
#line 1399 "purity.m"
    {
#line 1399 "purity.m"
      check_hlds__purity__V_29_29 = mercury__string__f_43_43_2_f_0(check_hlds__purity__ActualPurityName_16, (MR_String) ".");
    }
#line 1399 "purity.m"
    {
#line 1399 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1399 "purity.m"
    }
#line 1399 "purity.m"
    {
#line 1399 "purity.m"
      check_hlds__purity__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 0) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1399 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "purity.m"
    }
#line 1398 "purity.m"
    {
#line 1398 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[42])));
#line 1398 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 1) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1398 "purity.m"
    }
#line 1398 "purity.m"
    {
#line 1398 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1398 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1398 "purity.m"
    }
#line 1397 "purity.m"
    {
#line 1397 "purity.m"
      check_hlds__purity__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[41])));
#line 1397 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 1) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1397 "purity.m"
    }
#line 1397 "purity.m"
    {
#line 1397 "purity.m"
      check_hlds__purity__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__purity__PredContextPieces_14, check_hlds__purity__V_19_19);
    }
#line 1400 "purity.m"
    {
#line 1400 "purity.m"
      check_hlds__purity__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_33_33, 0) = ((MR_Box) (check_hlds__purity__Pieces_17));
#line 1400 "purity.m"
    }
#line 1400 "purity.m"
    {
#line 1400 "purity.m"
      check_hlds__purity__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_32_32, 0) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1400 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1400 "purity.m"
    }
#line 1400 "purity.m"
    {
#line 1400 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_13));
#line 1400 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_32_32));
#line 1400 "purity.m"
    }
#line 1401 "purity.m"
    {
#line 1401 "purity.m"
      check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1401 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1401 "purity.m"
    }
#line 1401 "purity.m"
    {
#line 1401 "purity.m"
      check_hlds__purity__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1401 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1401 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 2) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1401 "purity.m"
    }
#line 1392 "purity.m"
    return check_hlds__purity__Spec_12;
#line 1392 "purity.m"
  }
#line 1388 "purity.m"
}

#line 1368 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_promise_4_f_0(
#line 1368 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1368 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1368 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1368 "purity.m"
  MR_Word check_hlds__purity__Purity_9)
#line 1368 "purity.m"
{
#line 1371 "purity.m"
  {
#line 1371 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_69;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_12;
#line 1371 "purity.m"
    MR_String check_hlds__purity__PredOrFuncStr_13;
#line 1371 "purity.m"
    MR_String check_hlds__purity__PurityName_14;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_15;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__MainPieces_16;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__VerbosePieces_17;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_30_30;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_31_31;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_42_42;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_43_43;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_45_45;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_49_49;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__PredPieces_56;
#line 1371 "purity.m"
    MR_Word check_hlds__purity__V_62_62;

#line 1372 "purity.m"
    {
#line 1372 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1373 "purity.m"
    {
#line 1373 "purity.m"
      check_hlds__purity__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1374 "purity.m"
    {
#line 1374 "purity.m"
      check_hlds__purity__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__purity__PredOrFunc_12);
    }
#line 1375 "purity.m"
    {
#line 1375 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_9, &check_hlds__purity__PurityName_14);
    }
#line 1364 "purity.m"
    {
#line 1364 "purity.m"
      check_hlds__purity__PredPieces_56 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 4025 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_69 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1366 "purity.m"
    {
#line 1366 "purity.m"
      check_hlds__purity__V_62_62 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_69, check_hlds__purity__PredPieces_56, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[5]));
    }
#line 1366 "purity.m"
    {
#line 1366 "purity.m"
      check_hlds__purity__PredContextPieces_15 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_69, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[36]), check_hlds__purity__V_62_62);
    }
#line 1378 "purity.m"
    {
#line 1378 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__PurityName_14));
#line 1378 "purity.m"
    }
#line 1378 "purity.m"
    {
#line 1378 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1378 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[39])));
#line 1378 "purity.m"
    }
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[37])));
#line 1377 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 1) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1377 "purity.m"
    }
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__purity__PredContextPieces_15, check_hlds__purity__V_19_19);
    }
#line 1380 "purity.m"
    {
#line 1380 "purity.m"
      check_hlds__purity__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_31_31, 0) = ((MR_Box) (check_hlds__purity__PredOrFuncStr_13));
#line 1380 "purity.m"
    }
#line 1380 "purity.m"
    {
#line 1380 "purity.m"
      check_hlds__purity__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 0) = ((MR_Box) (check_hlds__purity__V_31_31));
#line 1380 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[11])));
#line 1380 "purity.m"
    }
#line 1380 "purity.m"
    {
#line 1380 "purity.m"
      check_hlds__purity__VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[40])));
#line 1380 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 1) = ((MR_Box) (check_hlds__purity__V_30_30));
#line 1380 "purity.m"
    }
#line 1385 "purity.m"
    {
#line 1385 "purity.m"
      check_hlds__purity__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1385 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_43_43, 0) = ((MR_Box) (check_hlds__purity__MainPieces_16));
#line 1385 "purity.m"
    }
#line 1385 "purity.m"
    {
#line 1385 "purity.m"
      check_hlds__purity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_45_45, 0) = ((MR_Box) (check_hlds__purity__VerbosePieces_17));
#line 1385 "purity.m"
    }
#line 1385 "purity.m"
    {
#line 1385 "purity.m"
      check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 0) = ((MR_Box) (check_hlds__purity__V_45_45));
#line 1385 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1385 "purity.m"
    }
#line 1384 "purity.m"
    {
#line 1384 "purity.m"
      check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 0) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1384 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 1) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1384 "purity.m"
    }
#line 1384 "purity.m"
    {
#line 1384 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1384 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1384 "purity.m"
    }
#line 1386 "purity.m"
    {
#line 1386 "purity.m"
      check_hlds__purity__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1386 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1386 "purity.m"
    }
#line 1386 "purity.m"
    {
#line 1386 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1386 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1386 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_49_49));
#line 1386 "purity.m"
    }
#line 1371 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1371 "purity.m"
  }
#line 1368 "purity.m"
}

#line 1317 "purity.m"
static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
#line 1317 "purity.m"
  MR_Word check_hlds__purity__Outer_6,
#line 1317 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1317 "purity.m"
  MR_Word * check_hlds__purity__Goal_9,
#line 1317 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_28,
#line 1317 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_29)
#line 1317 "purity.m"
{
#line 1321 "purity.m"
  {
#line 1321 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1321 "purity.m"
    MR_Word check_hlds__purity__Inner_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1321 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
#line 1321 "purity.m"
    MR_Word check_hlds__purity__NonLocals0_13;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__Context_14;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__OuterDI_15;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__OuterUO_16;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__InnerDI_17;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__InnerUO_18;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__ModuleInfo_21;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__OuterToInnerGoal_22;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__InnerToOuterGoal_23;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__WrapExpr_24;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__NonLocals_25;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__GoalInfo1_26;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__GoalInfo_27;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_30_30;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_35_35;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_37_37;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_38_38;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_40_40;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_41_41;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_42_42;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_45_45;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_61_61;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_62_62;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_66_66;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_67_67;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_73_73;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_74_74;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_75_75;
#line 1321 "purity.m"
    MR_Word check_hlds__purity__V_77_77;
#line 1322 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_81_81;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_82_82;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_83_83;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_84_84;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_85_85;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_86_86;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_87_87;

#line 1323 "purity.m"
    {
#line 1323 "purity.m"
      check_hlds__purity__NonLocals0_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__purity__GoalInfo0_12);
    }
#line 1324 "purity.m"
    {
#line 1324 "purity.m"
      check_hlds__purity__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_12);
    }
#line 1325 "purity.m"
    check_hlds__purity__OuterDI_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_6, (MR_Integer) 0)));
#line 1325 "purity.m"
    check_hlds__purity__OuterUO_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_6, (MR_Integer) 1)));
#line 1326 "purity.m"
    check_hlds__purity__InnerDI_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Inner_8, (MR_Integer) 0)));
#line 1326 "purity.m"
    check_hlds__purity__InnerUO_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Inner_8, (MR_Integer) 1)));
#line 1331 "purity.m"
    check_hlds__purity__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1331 "purity.m"
    check_hlds__purity__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1331 "purity.m"
    check_hlds__purity__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1331 "purity.m"
    check_hlds__purity__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1331 "purity.m"
    check_hlds__purity__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1331 "purity.m"
    check_hlds__purity__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 1331 "purity.m"
    check_hlds__purity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 1331 "purity.m"
    check_hlds__purity__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 1332 "purity.m"
    {
#line 1332 "purity.m"
      check_hlds__purity__V_30_30 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1334 "purity.m"
    {
#line 1334 "purity.m"
      check_hlds__purity__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_38_38, 0) = ((MR_Box) (check_hlds__purity__InnerDI_17));
#line 1334 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1334 "purity.m"
    }
#line 1332 "purity.m"
    {
#line 1332 "purity.m"
      check_hlds__purity__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_35_35, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1332 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_35_35, 1) = ((MR_Box) (check_hlds__purity__V_38_38));
#line 1332 "purity.m"
    }
#line 1335 "purity.m"
    check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[3]);
#line 1335 "purity.m"
    {
#line 1335 "purity.m"
      check_hlds__purity__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1335 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_41_41, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1335 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1335 "purity.m"
    }
#line 1336 "purity.m"
    check_hlds__purity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[4]);
#line 1336 "purity.m"
    {
#line 1336 "purity.m"
      check_hlds__purity__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1336 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__InnerDI_17));
#line 1336 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_46_46, 1) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1336 "purity.m"
    }
#line 1335 "purity.m"
    {
#line 1335 "purity.m"
      check_hlds__purity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_45_45, 0) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 1335 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1335 "purity.m"
    }
#line 1335 "purity.m"
    {
#line 1335 "purity.m"
      check_hlds__purity__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_40_40, 0) = ((MR_Box) (check_hlds__purity__V_41_41));
#line 1335 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_40_40, 1) = ((MR_Box) (check_hlds__purity__V_45_45));
#line 1335 "purity.m"
    }
#line 1332 "purity.m"
    {
#line 1332 "purity.m"
      check_hlds__purity__V_37_37 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__purity__V_40_40);
    }
#line 1332 "purity.m"
    {
#line 1332 "purity.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__purity__V_30_30, (MR_String) "stm_from_outer_to_inner", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__purity__V_35_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__purity__V_37_37, check_hlds__purity__ModuleInfo_21, check_hlds__purity__Context_14, &check_hlds__purity__OuterToInnerGoal_22);
    }
#line 1338 "purity.m"
    {
#line 1338 "purity.m"
      check_hlds__purity__V_51_51 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1340 "purity.m"
    {
#line 1340 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__OuterUO_16));
#line 1340 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1340 "purity.m"
    }
#line 1338 "purity.m"
    {
#line 1338 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__InnerUO_18));
#line 1338 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1338 "purity.m"
    }
#line 1341 "purity.m"
    {
#line 1341 "purity.m"
      check_hlds__purity__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_62_62, 0) = ((MR_Box) (check_hlds__purity__InnerUO_18));
#line 1341 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_62_62, 1) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1341 "purity.m"
    }
#line 1342 "purity.m"
    {
#line 1342 "purity.m"
      check_hlds__purity__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_67_67, 0) = ((MR_Box) (check_hlds__purity__OuterUO_16));
#line 1342 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_67_67, 1) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1342 "purity.m"
    }
#line 1341 "purity.m"
    {
#line 1341 "purity.m"
      check_hlds__purity__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_66_66, 0) = ((MR_Box) (check_hlds__purity__V_67_67));
#line 1341 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "purity.m"
    }
#line 1341 "purity.m"
    {
#line 1341 "purity.m"
      check_hlds__purity__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__V_62_62));
#line 1341 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 1) = ((MR_Box) (check_hlds__purity__V_66_66));
#line 1341 "purity.m"
    }
#line 1338 "purity.m"
    {
#line 1338 "purity.m"
      check_hlds__purity__V_58_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__purity__V_61_61);
    }
#line 1338 "purity.m"
    {
#line 1338 "purity.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__purity__V_51_51, (MR_String) "stm_from_inner_to_outer", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__purity__V_56_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__purity__V_58_58, check_hlds__purity__ModuleInfo_21, check_hlds__purity__Context_14, &check_hlds__purity__InnerToOuterGoal_23);
    }
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      check_hlds__purity__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_75_75, 0) = ((MR_Box) (check_hlds__purity__InnerToOuterGoal_23));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1345 "purity.m"
    }
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      check_hlds__purity__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_74_74, 0) = ((MR_Box) (check_hlds__purity__Goal0_7));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_74_74, 1) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1345 "purity.m"
    }
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      check_hlds__purity__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_73_73, 0) = ((MR_Box) (check_hlds__purity__OuterToInnerGoal_22));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_73_73, 1) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1345 "purity.m"
    }
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      check_hlds__purity__WrapExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_24, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_24, 2) = ((MR_Box) (check_hlds__purity__V_73_73));
#line 1345 "purity.m"
    }
#line 1350 "purity.m"
    {
#line 1350 "purity.m"
      check_hlds__purity__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_77_77, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1350 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_77_77, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1350 "purity.m"
    }
#line 1350 "purity.m"
    {
#line 1350 "purity.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__purity__V_77_77, check_hlds__purity__NonLocals0_13, &check_hlds__purity__NonLocals_25);
    }
#line 1351 "purity.m"
    {
#line 1351 "purity.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__purity__NonLocals_25, check_hlds__purity__GoalInfo0_12, &check_hlds__purity__GoalInfo1_26);
    }
#line 1352 "purity.m"
    {
#line 1352 "purity.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 21, check_hlds__purity__GoalInfo1_26, &check_hlds__purity__GoalInfo_27);
    }
#line 1354 "purity.m"
    {
#line 1354 "purity.m"
      MR_Word base;
#line 1354 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "purity.m"
      *check_hlds__purity__Goal_9 = base;
#line 1354 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__WrapExpr_24));
#line 1354 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_27));
#line 1354 "purity.m"
    }
#line 1354 "purity.m"
    *check_hlds__purity__STATE_VARIABLE_Info_29 = check_hlds__purity__STATE_VARIABLE_Info_0_28;
#line 1321 "purity.m"
  }
#line 1317 "purity.m"
}

#line 1301 "purity.m"
static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
#line 1301 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1301 "purity.m"
  MR_Word check_hlds__purity__VarTypes_8,
#line 1301 "purity.m"
  MR_Word check_hlds__purity__VarSet_9,
#line 1301 "purity.m"
  MR_Word check_hlds__purity__Var_10,
#line 1301 "purity.m"
  MR_Word * check_hlds__purity__VarType_11,
#line 1301 "purity.m"
  MR_Word * check_hlds__purity__Specs_12)
#line 1301 "purity.m"
{
#line 1304 "purity.m"
  {
#line 1304 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1305 "purity.m"
    {
#line 1305 "purity.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__purity__VarTypes_8, check_hlds__purity__Var_10, check_hlds__purity__VarType_11);
    }
#line 1307 "purity.m"
    {
#line 1307 "purity.m"
      MR_Word check_hlds__purity__V_15_15;

#line 1307 "purity.m"
      {
#line 1307 "purity.m"
        check_hlds__purity__V_15_15 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      }
#line 1307 "purity.m"
      {
#line 1307 "purity.m"
        check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*check_hlds__purity__VarType_11, check_hlds__purity__V_15_15);
      }
#line 1307 "purity.m"
    }
#line 1308 "purity.m"
    if (!(check_hlds__purity__succeeded))
#line 1308 "purity.m"
      {
#line 1308 "purity.m"
        MR_Word check_hlds__purity__V_16_16;

#line 1308 "purity.m"
        {
#line 1308 "purity.m"
          check_hlds__purity__V_16_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
        }
#line 1308 "purity.m"
        {
#line 1308 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*check_hlds__purity__VarType_11, check_hlds__purity__V_16_16);
        }
#line 1308 "purity.m"
      }
#line 1312 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1311 "purity.m"
      *check_hlds__purity__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1312 "purity.m"
    else
#line 1313 "purity.m"
      {
#line 1313 "purity.m"
        MR_Word check_hlds__purity__Spec_13;
#line 1313 "purity.m"
        MR_Word check_hlds__purity__Pieces_23;
#line 1313 "purity.m"
        MR_Word check_hlds__purity__Msg_24;
#line 1313 "purity.m"
        MR_Word check_hlds__purity__V_27_27;
#line 1313 "purity.m"
        MR_Word check_hlds__purity__V_28_28;
#line 1313 "purity.m"
        MR_String check_hlds__purity__V_29_29;
#line 1313 "purity.m"
        MR_Word check_hlds__purity__V_35_35;
#line 1313 "purity.m"
        MR_Word check_hlds__purity__V_36_36;
#line 1313 "purity.m"
        MR_Word check_hlds__purity__V_40_40;

#line 1558 "purity.m"
        {
#line 1558 "purity.m"
          check_hlds__purity__V_29_29 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__purity__VarSet_9, (MR_Integer) 0, check_hlds__purity__Var_10);
        }
#line 1558 "purity.m"
        {
#line 1558 "purity.m"
          check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1558 "purity.m"
        }
#line 1557 "purity.m"
        {
#line 1557 "purity.m"
          check_hlds__purity__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 0) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1557 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[34])));
#line 1557 "purity.m"
        }
#line 1557 "purity.m"
        {
#line 1557 "purity.m"
          check_hlds__purity__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[32])));
#line 1557 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_23, 1) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1557 "purity.m"
        }
#line 1560 "purity.m"
        {
#line 1560 "purity.m"
          check_hlds__purity__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__V_36_36, 0) = ((MR_Box) (check_hlds__purity__Pieces_23));
#line 1560 "purity.m"
        }
#line 1560 "purity.m"
        {
#line 1560 "purity.m"
          check_hlds__purity__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_35_35, 0) = ((MR_Box) (check_hlds__purity__V_36_36));
#line 1560 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1560 "purity.m"
        }
#line 1560 "purity.m"
        {
#line 1560 "purity.m"
          check_hlds__purity__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_24, 0) = ((MR_Box) (check_hlds__purity__Context_7));
#line 1560 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_24, 1) = ((MR_Box) (check_hlds__purity__V_35_35));
#line 1560 "purity.m"
        }
#line 1561 "purity.m"
        {
#line 1561 "purity.m"
          check_hlds__purity__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_40_40, 0) = ((MR_Box) (check_hlds__purity__Msg_24));
#line 1561 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "purity.m"
        }
#line 1561 "purity.m"
        {
#line 1561 "purity.m"
          check_hlds__purity__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1561 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 2) = ((MR_Box) (check_hlds__purity__V_40_40));
#line 1561 "purity.m"
        }
#line 1314 "purity.m"
        {
#line 1314 "purity.m"
          MR_Word base;
#line 1314 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "purity.m"
          *check_hlds__purity__Specs_12 = base;
#line 1314 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_13));
#line 1314 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1314 "purity.m"
        }
#line 1313 "purity.m"
      }
#line 1304 "purity.m"
  }
#line 1301 "purity.m"
}

#line 1281 "purity.m"
static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
#line 1281 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_5,
#line 1281 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_6,
#line 1281 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_7,
#line 1281 "purity.m"
  MR_Word * check_hlds__purity__Specs_8)
#line 1281 "purity.m"
{
#line 1290 "purity.m"
  {
#line 1290 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1285 "purity.m"
    {
#line 1285 "purity.m"
      check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__ActualPurity_7, check_hlds__purity__DeclaredPurity_6);
    }
#line 1290 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1286 "purity.m"
      {
#line 1286 "purity.m"
        MR_Word check_hlds__purity__Context_9;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__Spec_10;
#line 1286 "purity.m"
        MR_String check_hlds__purity__ActualPurityName_16;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__Pieces_17;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__Msg_18;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__V_21_21;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__V_22_22;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__V_23_23;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__V_26_26;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__V_29_29;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__V_37_37;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__V_38_38;
#line 1286 "purity.m"
        MR_Word check_hlds__purity__V_42_42;

#line 1286 "purity.m"
        {
#line 1286 "purity.m"
          check_hlds__purity__Context_9 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_5);
        }
#line 1527 "purity.m"
        {
#line 1527 "purity.m"
          parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_7, &check_hlds__purity__ActualPurityName_16);
        }
#line 1529 "purity.m"
        {
#line 1529 "purity.m"
          check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__ActualPurityName_16));
#line 1529 "purity.m"
        }
#line 1530 "purity.m"
        {
#line 1530 "purity.m"
          check_hlds__purity__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_29_29, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1530 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[15])));
#line 1530 "purity.m"
        }
#line 1529 "purity.m"
        {
#line 1529 "purity.m"
          check_hlds__purity__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[31])));
#line 1529 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_26_26, 1) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1529 "purity.m"
        }
#line 1529 "purity.m"
        {
#line 1529 "purity.m"
          check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[30])));
#line 1529 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (check_hlds__purity__V_26_26));
#line 1529 "purity.m"
        }
#line 1528 "purity.m"
        {
#line 1528 "purity.m"
          check_hlds__purity__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1528 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1528 "purity.m"
        }
#line 1528 "purity.m"
        {
#line 1528 "purity.m"
          check_hlds__purity__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[29])));
#line 1528 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_17, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1528 "purity.m"
        }
#line 1532 "purity.m"
        {
#line 1532 "purity.m"
          check_hlds__purity__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1532 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__V_38_38, 0) = ((MR_Box) (check_hlds__purity__Pieces_17));
#line 1532 "purity.m"
        }
#line 1532 "purity.m"
        {
#line 1532 "purity.m"
          check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 0) = ((MR_Box) (check_hlds__purity__V_38_38));
#line 1532 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1532 "purity.m"
        }
#line 1532 "purity.m"
        {
#line 1532 "purity.m"
          check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1532 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_9));
#line 1532 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1532 "purity.m"
        }
#line 1533 "purity.m"
        {
#line 1533 "purity.m"
          check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1533 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1533 "purity.m"
        }
#line 1533 "purity.m"
        {
#line 1533 "purity.m"
          check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1533 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1533 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1533 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1533 "purity.m"
        }
#line 1289 "purity.m"
        {
#line 1289 "purity.m"
          MR_Word base;
#line 1289 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "purity.m"
          *check_hlds__purity__Specs_8 = base;
#line 1289 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_10));
#line 1289 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "purity.m"
        }
#line 1286 "purity.m"
      }
#line 1290 "purity.m"
    else
#line 1293 "purity.m"
      *check_hlds__purity__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1290 "purity.m"
  }
#line 1281 "purity.m"
}

#line 1217 "purity.m"
static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
#line 1217 "purity.m"
  MR_Word check_hlds__purity__Info_7,
#line 1217 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_8,
#line 1217 "purity.m"
  MR_Word check_hlds__purity__Var_9,
#line 1217 "purity.m"
  MR_Word check_hlds__purity__ConsId_10,
#line 1217 "purity.m"
  MR_Word check_hlds__purity__Args_11,
#line 1217 "purity.m"
  MR_Word * check_hlds__purity__Specs_12)
#line 1217 "purity.m"
{
#line 1221 "purity.m"
  {
#line 1221 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1221 "purity.m"
    MR_Word check_hlds__purity__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1221 "purity.m"
    MR_Word check_hlds__purity__TypeOfVar_14;
#line 1221 "purity.m"
    MR_Word check_hlds__purity__PredInfo_15;
#line 1221 "purity.m"
    MR_Word check_hlds__purity__CallerMarkers_16;
#line 1221 "purity.m"
    MR_Word check_hlds__purity__Context_17;
#line 1221 "purity.m"
    MR_Word check_hlds__purity__ClosureSpecs_34;
#line 1221 "purity.m"
    MR_Word check_hlds__purity__DeclaredPurity_35;
#line 1224 "purity.m"
    MR_Word check_hlds__purity__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1224 "purity.m"
    MR_Word check_hlds__purity__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1224 "purity.m"
    MR_Word check_hlds__purity__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1224 "purity.m"
    MR_Word check_hlds__purity__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1224 "purity.m"
    MR_Word check_hlds__purity__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1224 "purity.m"
    MR_Word check_hlds__purity__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1224 "purity.m"
    MR_Word check_hlds__purity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1226 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 1226 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 1226 "purity.m"
    MR_Word check_hlds__purity__V_48_48;
#line 1226 "purity.m"
    MR_Word check_hlds__purity__V_49_49;
#line 1226 "purity.m"
    MR_Word check_hlds__purity__V_50_50;
#line 1226 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 1226 "purity.m"
    MR_Word check_hlds__purity__V_52_52;
#line 1255 "purity.m"
    MR_Word check_hlds__purity__PName_18;
#line 1255 "purity.m"
    MR_Word check_hlds__purity__TypePurity_21;
#line 1255 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_22;
#line 1255 "purity.m"
    MR_Word check_hlds__purity__VarArgTypes_24;
#line 1230 "purity.m"
    MR_Integer check_hlds__purity__V_19_19;
#line 1230 "purity.m"
    MR_Word check_hlds__purity__V_20_20;

#line 1225 "purity.m"
    {
#line 1225 "purity.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__purity__VarTypes_13, check_hlds__purity__Var_9, &check_hlds__purity__TypeOfVar_14);
    }
#line 1226 "purity.m"
    check_hlds__purity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1226 "purity.m"
    check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1226 "purity.m"
    check_hlds__purity__PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1226 "purity.m"
    check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1226 "purity.m"
    check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1226 "purity.m"
    check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1226 "purity.m"
    check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1226 "purity.m"
    check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1227 "purity.m"
    {
#line 1227 "purity.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__CallerMarkers_16);
    }
#line 1228 "purity.m"
    {
#line 1228 "purity.m"
      check_hlds__purity__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_8);
    }
#line 1230 "purity.m"
    check_hlds__purity__succeeded = ((((MR_tag((MR_Word) check_hlds__purity__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1230 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1230 "purity.m"
      {
#line 1230 "purity.m"
        check_hlds__purity__PName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 1)));
#line 1230 "purity.m"
        check_hlds__purity__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 2)));
#line 1230 "purity.m"
        check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 3)));
#line 1231 "purity.m"
        {
#line 1231 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__purity__TypeOfVar_14, &check_hlds__purity__TypePurity_21, &check_hlds__purity__PredOrFunc_22, &check_hlds__purity__VarArgTypes_24);
        }
#line 1230 "purity.m"
      }
#line 1255 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1234 "purity.m"
      {
#line 1234 "purity.m"
        MR_Word check_hlds__purity__TVarSet_25;
#line 1234 "purity.m"
        MR_Word check_hlds__purity__ExistQTVars_26;
#line 1234 "purity.m"
        MR_Word check_hlds__purity__HeadTypeParams_27;
#line 1234 "purity.m"
        MR_Word check_hlds__purity__ArgTypes0_28;
#line 1234 "purity.m"
        MR_Word check_hlds__purity__PredArgTypes_29;
#line 1234 "purity.m"
        MR_Word check_hlds__purity__ModuleInfo_30;
#line 1239 "purity.m"
        MR_Word check_hlds__purity__V_53_53;
#line 1239 "purity.m"
        MR_Word check_hlds__purity__V_54_54;
#line 1239 "purity.m"
        MR_Word check_hlds__purity__V_55_55;
#line 1239 "purity.m"
        MR_Word check_hlds__purity__V_56_56;
#line 1239 "purity.m"
        MR_Word check_hlds__purity__V_57_57;
#line 1239 "purity.m"
        MR_Word check_hlds__purity__V_58_58;
#line 1239 "purity.m"
        MR_Word check_hlds__purity__V_59_59;
#line 1249 "purity.m"
        MR_Word check_hlds__purity__CalleePredId_31;
#line 1241 "purity.m"
        MR_Word check_hlds__purity__V_37_37;

#line 1234 "purity.m"
        {
#line 1234 "purity.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__TVarSet_25);
        }
#line 1235 "purity.m"
        {
#line 1235 "purity.m"
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__ExistQTVars_26);
        }
#line 1236 "purity.m"
        {
#line 1236 "purity.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__HeadTypeParams_27);
        }
#line 1237 "purity.m"
        {
#line 1237 "purity.m"
          parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__purity__VarTypes_13, check_hlds__purity__Args_11, &check_hlds__purity__ArgTypes0_28);
        }
#line 1238 "purity.m"
        {
#line 1238 "purity.m"
          mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__purity__ArgTypes0_28, check_hlds__purity__VarArgTypes_24, &check_hlds__purity__PredArgTypes_29);
        }
#line 1239 "purity.m"
        check_hlds__purity__ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1239 "purity.m"
        check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1239 "purity.m"
        check_hlds__purity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1239 "purity.m"
        check_hlds__purity__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1239 "purity.m"
        check_hlds__purity__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1239 "purity.m"
        check_hlds__purity__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1239 "purity.m"
        check_hlds__purity__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1239 "purity.m"
        check_hlds__purity__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1241 "purity.m"
        {
#line 1241 "purity.m"
          check_hlds__purity__V_37_37 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__purity__CallerMarkers_16);
        }
#line 1241 "purity.m"
        {
#line 1241 "purity.m"
          check_hlds__purity__succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(check_hlds__purity__V_37_37, check_hlds__purity__PName_18, check_hlds__purity__PredOrFunc_22, check_hlds__purity__TVarSet_25, check_hlds__purity__ExistQTVars_26, check_hlds__purity__PredArgTypes_29, check_hlds__purity__HeadTypeParams_27, check_hlds__purity__ModuleInfo_30, check_hlds__purity__Context_17, &check_hlds__purity__CalleePredId_31);
        }
#line 1249 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1245 "purity.m"
          {
#line 1245 "purity.m"
            MR_Word check_hlds__purity__CalleePredInfo_32;
#line 1245 "purity.m"
            MR_Word check_hlds__purity__CalleePurity_33;

#line 1245 "purity.m"
            {
#line 1245 "purity.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_30, check_hlds__purity__CalleePredId_31, &check_hlds__purity__CalleePredInfo_32);
            }
#line 1246 "purity.m"
            {
#line 1246 "purity.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__CalleePredInfo_32, &check_hlds__purity__CalleePurity_33);
            }
#line 1247 "purity.m"
            {
#line 1247 "purity.m"
              check_hlds__purity__check_closure_purity_4_p_0(check_hlds__purity__GoalInfo_8, check_hlds__purity__TypePurity_21, check_hlds__purity__CalleePurity_33, &check_hlds__purity__ClosureSpecs_34);
            }
#line 1245 "purity.m"
          }
#line 1249 "purity.m"
        else
#line 1253 "purity.m"
          check_hlds__purity__ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1234 "purity.m"
      }
#line 1255 "purity.m"
    else
#line 1257 "purity.m"
      check_hlds__purity__ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1263 "purity.m"
    {
#line 1263 "purity.m"
      check_hlds__purity__DeclaredPurity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_8);
    }
#line 1276 "purity.m"
    if ((check_hlds__purity__DeclaredPurity_35 == (MR_Integer) 0))
#line 1278 "purity.m"
      *check_hlds__purity__Specs_12 = check_hlds__purity__ClosureSpecs_34;
#line 1276 "purity.m"
    else
#line 1272 "purity.m"
      {
#line 1270 "purity.m"
        {
#line 1270 "purity.m"
          check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__CallerMarkers_16, (MR_Integer) 22);
        }
#line 1272 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1271 "purity.m"
          *check_hlds__purity__Specs_12 = check_hlds__purity__ClosureSpecs_34;
#line 1272 "purity.m"
        else
#line 1273 "purity.m"
          {
#line 1273 "purity.m"
            MR_Word check_hlds__purity__Spec_36;

#line 1273 "purity.m"
            {
#line 1273 "purity.m"
              check_hlds__purity__Spec_36 = check_hlds__purity__impure_unification_expr_error_2_f_0(check_hlds__purity__Context_17, check_hlds__purity__DeclaredPurity_35);
            }
#line 1274 "purity.m"
            {
#line 1274 "purity.m"
              MR_Word base;
#line 1274 "purity.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "purity.m"
              *check_hlds__purity__Specs_12 = base;
#line 1274 "purity.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_36));
#line 1274 "purity.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__ClosureSpecs_34));
#line 1274 "purity.m"
            }
#line 1273 "purity.m"
          }
#line 1272 "purity.m"
      }
#line 1221 "purity.m"
  }
#line 1217 "purity.m"
}

#line 1165 "purity.m"
static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
#line 1165 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1165 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1165 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9,
#line 1165 "purity.m"
  MR_Word * check_hlds__purity__ActualPurity_10,
#line 1165 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_17,
#line 1165 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_18)
#line 1165 "purity.m"
{
#line 1169 "purity.m"
  {
#line 1169 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1169 "purity.m"
    MR_Word check_hlds__purity__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1169 "purity.m"
    MR_Word check_hlds__purity__PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1169 "purity.m"
    MR_Word check_hlds__purity__CalleePredInfo_14;
#line 1170 "purity.m"
    MR_Word check_hlds__purity__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1170 "purity.m"
    MR_Word check_hlds__purity__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1170 "purity.m"
    MR_Word check_hlds__purity__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1170 "purity.m"
    MR_Word check_hlds__purity__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1170 "purity.m"
    MR_Word check_hlds__purity__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1170 "purity.m"
    MR_Word check_hlds__purity__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));

#line 1172 "purity.m"
    {
#line 1172 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, &check_hlds__purity__CalleePredInfo_14);
    }
#line 1173 "purity.m"
    {
#line 1173 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__CalleePredInfo_14, check_hlds__purity__ActualPurity_10);
    }
#line 1177 "purity.m"
    check_hlds__purity__succeeded = (*check_hlds__purity__ActualPurity_10 == check_hlds__purity__DeclaredPurity_9);
#line 1180 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1177 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1180 "purity.m"
    else
#line 1186 "purity.m"
      {
#line 1183 "purity.m"
        {
#line 1183 "purity.m"
          check_hlds__purity__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__purity__PredInfo_13);
        }
#line 1186 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1183 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1186 "purity.m"
        else
#line 1192 "purity.m"
          {
#line 1187 "purity.m"
            {
#line 1187 "purity.m"
              check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(*check_hlds__purity__ActualPurity_10, check_hlds__purity__DeclaredPurity_9);
            }
#line 1192 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1190 "purity.m"
              {
#line 1190 "purity.m"
                MR_Word check_hlds__purity__Spec_15;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__Msgs0_44;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__Msgs_45;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__V_47_47;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__V_48_48;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__V_49_49;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__V_50_50;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__V_51_51;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__V_52_52;
#line 1190 "purity.m"
                MR_Word check_hlds__purity__V_53_53;

#line 1189 "purity.m"
                {
#line 1189 "purity.m"
                  check_hlds__purity__Spec_15 = check_hlds__purity__error_missing_body_impurity_decl_3_f_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, check_hlds__purity__Context_7);
                }
#line 1599 "purity.m"
                check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1599 "purity.m"
                check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1599 "purity.m"
                check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1599 "purity.m"
                check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1599 "purity.m"
                check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1599 "purity.m"
                check_hlds__purity__Msgs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1599 "purity.m"
                check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1599 "purity.m"
                check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1600 "purity.m"
                {
#line 1600 "purity.m"
                  check_hlds__purity__Msgs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_45, 0) = ((MR_Box) (check_hlds__purity__Spec_15));
#line 1600 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_45, 1) = ((MR_Box) (check_hlds__purity__Msgs0_44));
#line 1600 "purity.m"
                }
#line 1601 "purity.m"
                {
#line 1601 "purity.m"
                  MR_Word base;
#line 1601 "purity.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "purity.m"
                  *check_hlds__purity__STATE_VARIABLE_Info_18 = base;
#line 1601 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1601 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 1601 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_49_49));
#line 1601 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_50_50));
#line 1601 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_51_51));
#line 1601 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_45));
#line 1601 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_52_52));
#line 1601 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1601 "purity.m"
                }
#line 1190 "purity.m"
              }
#line 1192 "purity.m"
            else
#line 1206 "purity.m"
              {
#line 1199 "purity.m"
                MR_Word check_hlds__purity__Markers_16;

#line 1199 "purity.m"
                {
#line 1199 "purity.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_13, &check_hlds__purity__Markers_16);
                }
#line 1200 "purity.m"
                {
#line 1200 "purity.m"
                  check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 9);
                }
#line 1201 "purity.m"
                if (!(check_hlds__purity__succeeded))
#line 1201 "purity.m"
                  {
#line 1201 "purity.m"
                    {
#line 1201 "purity.m"
                      check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 10);
                    }
#line 1201 "purity.m"
                    if (!(check_hlds__purity__succeeded))
#line 1202 "purity.m"
                      {
#line 1202 "purity.m"
                        {
#line 1202 "purity.m"
                          check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 22);
                        }
#line 1202 "purity.m"
                      }
#line 1201 "purity.m"
                  }
#line 1206 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1202 "purity.m"
                  *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1206 "purity.m"
                else
#line 1208 "purity.m"
                  {
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__Spec_24;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__Msgs0_66;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__Msgs_67;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__V_69_69;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__V_70_70;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__V_71_71;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__V_72_72;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__V_73_73;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__V_74_74;
#line 1208 "purity.m"
                    MR_Word check_hlds__purity__V_75_75;

#line 1207 "purity.m"
                    {
#line 1207 "purity.m"
                      check_hlds__purity__Spec_24 = check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, check_hlds__purity__Context_7, check_hlds__purity__DeclaredPurity_9);
                    }
#line 1599 "purity.m"
                    check_hlds__purity__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1599 "purity.m"
                    check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1599 "purity.m"
                    check_hlds__purity__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1599 "purity.m"
                    check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1599 "purity.m"
                    check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1599 "purity.m"
                    check_hlds__purity__Msgs0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1599 "purity.m"
                    check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1599 "purity.m"
                    check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1600 "purity.m"
                    {
#line 1600 "purity.m"
                      check_hlds__purity__Msgs_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_67, 0) = ((MR_Box) (check_hlds__purity__Spec_24));
#line 1600 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_67, 1) = ((MR_Box) (check_hlds__purity__Msgs0_66));
#line 1600 "purity.m"
                    }
#line 1601 "purity.m"
                    {
#line 1601 "purity.m"
                      MR_Word base;
#line 1601 "purity.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "purity.m"
                      *check_hlds__purity__STATE_VARIABLE_Info_18 = base;
#line 1601 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_69_69));
#line 1601 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_70_70));
#line 1601 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_71_71));
#line 1601 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_72_72));
#line 1601 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_73_73));
#line 1601 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_67));
#line 1601 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1601 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1601 "purity.m"
                    }
#line 1208 "purity.m"
                  }
#line 1206 "purity.m"
              }
#line 1192 "purity.m"
          }
#line 1186 "purity.m"
      }
#line 1169 "purity.m"
  }
#line 1165 "purity.m"
}

#line 1132 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
#line 1132 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1132 "purity.m"
  MR_Word check_hlds__purity__Info_2,
#line 1132 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_3,
#line 1132 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_4)
#line 1132 "purity.m"
{
#line 1135 "purity.m"
  while (MR_TRUE)
#line 1135 "purity.m"
    {
#line 1135 "purity.m"
      /* tailcall optimized into a loop */
#line 1135 "purity.m"
      {
#line 1135 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 1135 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Specs_4 = check_hlds__purity__STATE_VARIABLE_Specs_0_3;
#line 1135 "purity.m"
        else
#line 1136 "purity.m"
          {
#line 1136 "purity.m"
            MR_Word check_hlds__purity__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1136 "purity.m"
            MR_Word check_hlds__purity__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1136 "purity.m"
            MR_Word check_hlds__purity__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_9, (MR_Integer) 0)));
#line 1136 "purity.m"
            MR_Word check_hlds__purity__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_9, (MR_Integer) 1)));
#line 1136 "purity.m"
            MR_Word check_hlds__purity__XVar_23;
#line 1136 "purity.m"
            MR_Word check_hlds__purity__ConsId_24;
#line 1136 "purity.m"
            MR_Word check_hlds__purity__YVars_25;
#line 1136 "purity.m"
            MR_Word check_hlds__purity__UnifySpecs_26;
#line 1136 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_32_32;
#line 1145 "purity.m"
            MR_Word check_hlds__purity__XVarPrime_15;
#line 1145 "purity.m"
            MR_Word check_hlds__purity__ConsIdPrime_20;
#line 1145 "purity.m"
            MR_Word check_hlds__purity__YVarsPrime_22;
#line 1139 "purity.m"
            MR_Word check_hlds__purity__Y_16;
#line 1139 "purity.m"
            MR_Word check_hlds__purity__V_17_17;
#line 1139 "purity.m"
            MR_Word check_hlds__purity__V_18_18;
#line 1139 "purity.m"
            MR_Word check_hlds__purity__V_19_19;
#line 1140 "purity.m"
            MR_Word check_hlds__purity__V_21_21;

#line 1139 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1139 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1139 "purity.m"
              {
#line 1139 "purity.m"
                check_hlds__purity__XVarPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 0)));
#line 1139 "purity.m"
                check_hlds__purity__Y_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 1)));
#line 1139 "purity.m"
                check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 2)));
#line 1139 "purity.m"
                check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 3)));
#line 1139 "purity.m"
                check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 4)));
#line 1140 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Y_16)) == (MR_mktag((MR_Integer) 1)));
#line 1140 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1140 "purity.m"
                  {
#line 1140 "purity.m"
                    check_hlds__purity__ConsIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 0)));
#line 1140 "purity.m"
                    check_hlds__purity__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 1)));
#line 1140 "purity.m"
                    check_hlds__purity__YVarsPrime_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 2)));
#line 1140 "purity.m"
                  }
#line 1139 "purity.m"
              }
#line 1145 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1142 "purity.m"
              {
#line 1142 "purity.m"
                check_hlds__purity__XVar_23 = check_hlds__purity__XVarPrime_15;
#line 1143 "purity.m"
                check_hlds__purity__ConsId_24 = check_hlds__purity__ConsIdPrime_20;
#line 1144 "purity.m"
                check_hlds__purity__YVars_25 = check_hlds__purity__YVarsPrime_22;
#line 1142 "purity.m"
              }
#line 1145 "purity.m"
            else
#line 1146 "purity.m"
              {
#line 1146 "purity.m"
                {
#line 1146 "purity.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_no_ptc\'/4", (MR_String) "from_ground_term_initial conjunct is not functor unify");
#line 1146 "purity.m"
                  return;
                }
#line 1146 "purity.m"
              }
#line 1149 "purity.m"
            {
#line 1149 "purity.m"
              check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__Info_2, check_hlds__purity__GoalInfo0_14, check_hlds__purity__XVar_23, check_hlds__purity__ConsId_24, check_hlds__purity__YVars_25, &check_hlds__purity__UnifySpecs_26);
            }
#line 1151 "purity.m"
            {
#line 1151 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__UnifySpecs_26, check_hlds__purity__STATE_VARIABLE_Specs_0_3);
            }
#line 1152 "purity.m"
            /* direct tailcall eliminated */
#line 1152 "purity.m"
            {
#line 1152 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Goals0_10;
#line 1152 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Specs_32_32;

#line 1152 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_0_3 = check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1152 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 1152 "purity.m"
            }
#line 1152 "purity.m"
            continue;
#line 1136 "purity.m"
          }
#line 1135 "purity.m"
      }
#line 1135 "purity.m"
      break;
#line 1135 "purity.m"
    }
#line 1132 "purity.m"
}

#line 1042 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
#line 1042 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_7,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9,
#line 1042 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0_10,
#line 1042 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Invariants_11)
#line 1042 "purity.m"
{
#line 1048 "purity.m"
  while (MR_TRUE)
#line 1048 "purity.m"
    {
#line 1048 "purity.m"
      /* tailcall optimized into a loop */
#line 1048 "purity.m"
      {
#line 1048 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 1048 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "purity.m"
          {
#line 1048 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Invariants_11 = check_hlds__purity__STATE_VARIABLE_Invariants_0_10;
#line 1048 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_9 = check_hlds__purity__STATE_VARIABLE_Info_0_8;
#line 1048 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_7 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1048 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1048 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2;
#line 1048 "purity.m"
          }
#line 1048 "purity.m"
        else
#line 1051 "purity.m"
          {
#line 1051 "purity.m"
            MR_Word check_hlds__purity__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1051 "purity.m"
            MR_Word check_hlds__purity__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1051 "purity.m"
            MR_Word check_hlds__purity__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 0)));
#line 1051 "purity.m"
            MR_Word check_hlds__purity__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 1)));
#line 1051 "purity.m"
            MR_Word check_hlds__purity__XVar_44;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__Mode_45;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__Unification_46;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__UnifyContext_47;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__ConsId_48;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__YVars_49;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__ModuleInfo_50;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__PredInfo0_51;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__VarTypes0_52;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__VarSet0_53;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__PredInfo_54;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__VarSet_55;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__VarTypes_56;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__Goal1_57;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__IsPlainUnify_58;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__GoalExpr1_59;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__GoalInfo1_60;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__MarkedSubGoal_69;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_97_97;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_98_98;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_99_99;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_115_115;
#line 1051 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_118_118;
#line 1064 "purity.m"
            MR_Word check_hlds__purity__XVarPrime_36;
#line 1064 "purity.m"
            MR_Word check_hlds__purity__ModePrime_38;
#line 1064 "purity.m"
            MR_Word check_hlds__purity__UnificationPrime_39;
#line 1064 "purity.m"
            MR_Word check_hlds__purity__UnifyContextPrime_40;
#line 1064 "purity.m"
            MR_Word check_hlds__purity__ConsIdPrime_41;
#line 1064 "purity.m"
            MR_Word check_hlds__purity__YVarsPrime_43;
#line 1055 "purity.m"
            MR_Word check_hlds__purity__Y_37;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__V_42_42;
#line 1068 "purity.m"
            MR_Word check_hlds__purity__V_131_131;
#line 1068 "purity.m"
            MR_Word check_hlds__purity__V_135_135;
#line 1068 "purity.m"
            MR_Word check_hlds__purity__V_136_136;
#line 1068 "purity.m"
            MR_Word check_hlds__purity__V_137_137;

#line 1054 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1054 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1054 "purity.m"
              {
#line 1054 "purity.m"
                check_hlds__purity__XVarPrime_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 0)));
#line 1054 "purity.m"
                check_hlds__purity__Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 1)));
#line 1054 "purity.m"
                check_hlds__purity__ModePrime_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 2)));
#line 1054 "purity.m"
                check_hlds__purity__UnificationPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 3)));
#line 1054 "purity.m"
                check_hlds__purity__UnifyContextPrime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 4)));
#line 1056 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Y_37)) == (MR_mktag((MR_Integer) 1)));
#line 1056 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1056 "purity.m"
                  {
#line 1056 "purity.m"
                    check_hlds__purity__ConsIdPrime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 0)));
#line 1056 "purity.m"
                    check_hlds__purity__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 1)));
#line 1056 "purity.m"
                    check_hlds__purity__YVarsPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 2)));
#line 1056 "purity.m"
                  }
#line 1054 "purity.m"
              }
#line 1064 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1058 "purity.m"
              {
#line 1058 "purity.m"
                check_hlds__purity__XVar_44 = check_hlds__purity__XVarPrime_36;
#line 1059 "purity.m"
                check_hlds__purity__Mode_45 = check_hlds__purity__ModePrime_38;
#line 1060 "purity.m"
                check_hlds__purity__Unification_46 = check_hlds__purity__UnificationPrime_39;
#line 1061 "purity.m"
                check_hlds__purity__UnifyContext_47 = check_hlds__purity__UnifyContextPrime_40;
#line 1062 "purity.m"
                check_hlds__purity__ConsId_48 = check_hlds__purity__ConsIdPrime_41;
#line 1063 "purity.m"
                check_hlds__purity__YVars_49 = check_hlds__purity__YVarsPrime_43;
#line 1058 "purity.m"
              }
#line 1064 "purity.m"
            else
#line 1065 "purity.m"
              {
#line 1065 "purity.m"
                {
#line 1065 "purity.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_ptc\'/11", (MR_String) "from_ground_term_initial conjunct is not functor unify");
#line 1065 "purity.m"
                  return;
                }
#line 1065 "purity.m"
              }
#line 1068 "purity.m"
            check_hlds__purity__ModuleInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1068 "purity.m"
            check_hlds__purity__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1068 "purity.m"
            check_hlds__purity__PredInfo0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1068 "purity.m"
            check_hlds__purity__VarTypes0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1068 "purity.m"
            check_hlds__purity__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1068 "purity.m"
            check_hlds__purity__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1068 "purity.m"
            check_hlds__purity__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1068 "purity.m"
            check_hlds__purity__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1072 "purity.m"
            {
#line 1072 "purity.m"
              check_hlds__post_typecheck__resolve_unify_functor_16_p_0(check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, check_hlds__purity__Mode_45, check_hlds__purity__Unification_46, check_hlds__purity__UnifyContext_47, check_hlds__purity__GoalInfo0_35, check_hlds__purity__ModuleInfo_50, check_hlds__purity__PredInfo0_51, &check_hlds__purity__PredInfo_54, check_hlds__purity__VarSet0_53, &check_hlds__purity__VarSet_55, check_hlds__purity__VarTypes0_52, &check_hlds__purity__VarTypes_56, &check_hlds__purity__Goal1_57, &check_hlds__purity__IsPlainUnify_58);
            }
#line 1076 "purity.m"
            check_hlds__purity__GoalExpr1_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_57, (MR_Integer) 0)));
#line 1076 "purity.m"
            check_hlds__purity__GoalInfo1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_57, (MR_Integer) 1)));
#line 1105 "purity.m"
            if ((check_hlds__purity__IsPlainUnify_58 == (MR_Integer) 0))
#line 1106 "purity.m"
              {
#line 1106 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_92_92;
#line 1106 "purity.m"
                MR_Word check_hlds__purity__Goal_130;
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_167_167 = check_hlds__purity__V_159_159;
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_168_168 = check_hlds__purity__V_160_160;
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_170_170 = check_hlds__purity__VarTypes_56;
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_172_172 = check_hlds__purity__V_164_164;
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_173_173 = check_hlds__purity__V_165_165;
#line 1106 "purity.m"
                MR_Word check_hlds__purity__V_174_174 = check_hlds__purity__V_166_166;
#line 1107 "purity.m"
                MR_Word check_hlds__purity__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1107 "purity.m"
                MR_Word check_hlds__purity__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1107 "purity.m"
                MR_Word check_hlds__purity__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1110 "purity.m"
                MR_Word check_hlds__purity__V_70_70;
#line 1110 "purity.m"
                MR_Word check_hlds__purity__V_71_71;
#line 1110 "purity.m"
                MR_Word check_hlds__purity__V_72_72;
#line 1110 "purity.m"
                MR_Word check_hlds__purity__V_73_73;
#line 1110 "purity.m"
                MR_Word check_hlds__purity__V_74_74;

#line 1109 "purity.m"
                {
#line 1109 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (check_hlds__purity__V_167_167));
#line 1109 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (check_hlds__purity__V_168_168));
#line 1109 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (check_hlds__purity__PredInfo_54));
#line 1109 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (check_hlds__purity__V_170_170));
#line 1109 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (check_hlds__purity__VarSet_55));
#line 1109 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (check_hlds__purity__V_172_172));
#line 1109 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (check_hlds__purity__V_173_173));
#line 1109 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (check_hlds__purity__V_174_174));
#line 1109 "purity.m"
                }
#line 1110 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr1_59)) == (MR_mktag((MR_Integer) 1)));
#line 1110 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1110 "purity.m"
                  {
#line 1110 "purity.m"
                    check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 0)));
#line 1110 "purity.m"
                    check_hlds__purity__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 1)));
#line 1110 "purity.m"
                    check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 2)));
#line 1110 "purity.m"
                    check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 3)));
#line 1110 "purity.m"
                    check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 4)));
#line 1112 "purity.m"
                    {
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__UnifySpecs_124;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__GoalInfo_125;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_191;

#line 1111 "purity.m"
                      {
#line 1111 "purity.m"
                        check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_92_92, check_hlds__purity__GoalInfo0_35, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, &check_hlds__purity__UnifySpecs_124);
                      }
#line 1113 "purity.m"
                      {
#line 1113 "purity.m"
                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_124, check_hlds__purity__STATE_VARIABLE_Info_92_92, &check_hlds__purity__STATE_VARIABLE_Info_115_115);
                      }
#line 600 "purity.m"
                      {
#line 600 "purity.m"
                        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, check_hlds__purity__GoalInfo1_60, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_191);
                      }
#line 606 "purity.m"
                      {
#line 606 "purity.m"
                        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_191, &check_hlds__purity__GoalInfo_125);
                      }
#line 1116 "purity.m"
                      {
#line 1116 "purity.m"
                        check_hlds__purity__Goal_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_130, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_59));
#line 1116 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_130, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_125));
#line 1116 "purity.m"
                      }
#line 1116 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ContainsTrace_98_98 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1116 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Purity_97_97 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1112 "purity.m"
                    }
#line 1110 "purity.m"
                  }
#line 1110 "purity.m"
                else
#line 1120 "purity.m"
                  {
#line 1120 "purity.m"
                    MR_Word check_hlds__purity__GoalPurity_75;
#line 1120 "purity.m"
                    MR_Word check_hlds__purity__GoalContainsTrace_76;

#line 1119 "purity.m"
                    {
#line 1119 "purity.m"
                      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_57, &check_hlds__purity__Goal_130, &check_hlds__purity__GoalPurity_75, &check_hlds__purity__GoalContainsTrace_76, check_hlds__purity__STATE_VARIABLE_Info_92_92, &check_hlds__purity__STATE_VARIABLE_Info_115_115);
                    }
#line 1121 "purity.m"
                    {
#line 1121 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Purity_97_97 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_75, check_hlds__purity__STATE_VARIABLE_Purity_0_4);
                    }
#line 1122 "purity.m"
                    {
#line 1122 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ContainsTrace_98_98 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_76, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6);
                    }
#line 1120 "purity.m"
                  }
#line 1125 "purity.m"
                {
#line 1125 "purity.m"
                  check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal_130));
#line 1125 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
#line 1125 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
#line 1125 "purity.m"
                }
#line 1126 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Invariants_99_99 = (MR_Integer) 1;
#line 1106 "purity.m"
              }
#line 1105 "purity.m"
            else
#line 1078 "purity.m"
              {
#line 1078 "purity.m"
                MR_Word check_hlds__purity__UnifySpecs_66;
#line 1078 "purity.m"
                MR_Word check_hlds__purity__GoalInfo_67;
#line 1078 "purity.m"
                MR_Word check_hlds__purity__Goal_68;
#line 1078 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_201;

#line 1092 "purity.m"
                {
#line 1092 "purity.m"
                  check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_0_8, check_hlds__purity__GoalInfo0_35, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, &check_hlds__purity__UnifySpecs_66);
                }
#line 1094 "purity.m"
                {
#line 1094 "purity.m"
                  check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_66, check_hlds__purity__STATE_VARIABLE_Info_0_8, &check_hlds__purity__STATE_VARIABLE_Info_115_115);
                }
#line 600 "purity.m"
                {
#line 600 "purity.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, check_hlds__purity__GoalInfo1_60, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_201);
                }
#line 606 "purity.m"
                {
#line 606 "purity.m"
                  hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_201, &check_hlds__purity__GoalInfo_67);
                }
#line 1098 "purity.m"
                {
#line 1098 "purity.m"
                  check_hlds__purity__Goal_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_68, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_59));
#line 1098 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_68, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_67));
#line 1098 "purity.m"
                }
#line 1103 "purity.m"
                {
#line 1103 "purity.m"
                  check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal_68));
#line 1103 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
#line 1103 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
#line 1103 "purity.m"
                }
#line 1103 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Purity_97_97 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1103 "purity.m"
                check_hlds__purity__STATE_VARIABLE_ContainsTrace_98_98 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1103 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Invariants_99_99 = check_hlds__purity__STATE_VARIABLE_Invariants_0_10;
#line 1078 "purity.m"
              }
#line 1128 "purity.m"
            {
#line 1128 "purity.m"
              check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_118_118, 0) = ((MR_Box) (check_hlds__purity__MarkedSubGoal_69));
#line 1128 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_118_118, 1) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2));
#line 1128 "purity.m"
            }
#line 1129 "purity.m"
            /* direct tailcall eliminated */
#line 1129 "purity.m"
            {
#line 1129 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Goals0_28;
#line 1129 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0__tmp_copy_2 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_118_118;
#line 1129 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4 = check_hlds__purity__STATE_VARIABLE_Purity_97_97;
#line 1129 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_98_98;
#line 1129 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_8 = check_hlds__purity__STATE_VARIABLE_Info_115_115;
#line 1129 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0__tmp_copy_10 = check_hlds__purity__STATE_VARIABLE_Invariants_99_99;

#line 1129 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Invariants_0_10 = check_hlds__purity__STATE_VARIABLE_Invariants_0__tmp_copy_10;
#line 1129 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_8 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_8;
#line 1129 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_6;
#line 1129 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_4 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4;
#line 1129 "purity.m"
              check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0__tmp_copy_2;
#line 1129 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 1129 "purity.m"
            }
#line 1129 "purity.m"
            continue;
#line 1051 "purity.m"
          }
#line 1048 "purity.m"
      }
#line 1048 "purity.m"
      break;
#line 1048 "purity.m"
    }
#line 1042 "purity.m"
}

#line 983 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
#line 983 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 983 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 983 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 983 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_3)
#line 983 "purity.m"
{
#line 983 "purity.m"
  {
#line 983 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 983 "purity.m"
    MR_Word check_hlds__purity__conv4_STATE_VARIABLE_Info_9;

#line 983 "purity.m"
    {
#line 983 "purity.m"
      check_hlds__purity__purity_info_add_message_3_p_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2), &check_hlds__purity__conv4_STATE_VARIABLE_Info_9);
    }
#line 983 "purity.m"
    *check_hlds__purity__wrapper_arg_3 = ((MR_Box) (check_hlds__purity__conv4_STATE_VARIABLE_Info_9));
#line 983 "purity.m"
  }
#line 983 "purity.m"
}

#line 991 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
#line 991 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 991 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 991 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2,
#line 991 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_3,
#line 991 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_4)
#line 991 "purity.m"
{
#line 991 "purity.m"
  {
#line 991 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 991 "purity.m"
    MR_Word check_hlds__purity__conv2_Goal_9;
#line 991 "purity.m"
    MR_Word check_hlds__purity__conv1_STATE_VARIABLE_Info_29;

#line 991 "purity.m"
    {
#line 991 "purity.m"
      check_hlds__purity__wrap_inner_outer_goals_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__purity__wrapper_arg_1), &check_hlds__purity__conv2_Goal_9, ((MR_Word) check_hlds__purity__wrapper_arg_3), &check_hlds__purity__conv1_STATE_VARIABLE_Info_29);
    }
#line 991 "purity.m"
    *check_hlds__purity__wrapper_arg_2 = ((MR_Box) (check_hlds__purity__conv2_Goal_9));
#line 991 "purity.m"
    *check_hlds__purity__wrapper_arg_4 = ((MR_Box) (check_hlds__purity__conv1_STATE_VARIABLE_Info_29));
#line 991 "purity.m"
  }
#line 991 "purity.m"
}

#line 863 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
#line 863 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 863 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 863 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2)
#line 863 "purity.m"
{
#line 863 "purity.m"
  {
#line 863 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 863 "purity.m"
    MR_Word check_hlds__purity__conv0_HeadVar__2_2;

#line 863 "purity.m"
    {
#line 863 "purity.m"
      hlds__from_ground_term_util__project_kept_goal_2_p_0(((MR_Word) check_hlds__purity__wrapper_arg_1), &check_hlds__purity__conv0_HeadVar__2_2);
    }
#line 863 "purity.m"
    *check_hlds__purity__wrapper_arg_2 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__2_2));
#line 863 "purity.m"
  }
#line 863 "purity.m"
}

#line 665 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
#line 665 "purity.m"
  MR_Word check_hlds__purity__GoalExpr0_8,
#line 665 "purity.m"
  MR_Word * check_hlds__purity__GoalExpr_9,
#line 665 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_10,
#line 665 "purity.m"
  MR_Word * check_hlds__purity__Purity_11,
#line 665 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_12,
#line 665 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_190,
#line 665 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_191)
#line 665 "purity.m"
{
#line 672 "purity.m"
  {
#line 672 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 672 "purity.m"
    if (((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 823 "purity.m"
      {
#line 823 "purity.m"
        MR_Word check_hlds__purity__Goal0_95 = (MR_Word) MR_body(((MR_Word) check_hlds__purity__GoalExpr0_8), (MR_Integer) 0);
#line 823 "purity.m"
        MR_Word check_hlds__purity__NotGoal0_96;
#line 829 "purity.m"
        MR_Word check_hlds__purity__Goal1_300;
#line 826 "purity.m"
        MR_Word check_hlds__purity__V_237_237;
#line 826 "purity.m"
        MR_Word check_hlds__purity__V_97_97;

#line 825 "purity.m"
        {
#line 825 "purity.m"
          hlds__hlds_goal__negate_goal_3_p_0(check_hlds__purity__Goal0_95, check_hlds__purity__GoalInfo_10, &check_hlds__purity__NotGoal0_96);
        }
#line 826 "purity.m"
        check_hlds__purity__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal0_96, (MR_Integer) 0)));
#line 826 "purity.m"
        check_hlds__purity__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal0_96, (MR_Integer) 1)));
#line 826 "purity.m"
        check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_237_237)) == (MR_mktag((MR_Integer) 0)));
#line 826 "purity.m"
        if (check_hlds__purity__succeeded)
#line 826 "purity.m"
          {
#line 826 "purity.m"
            check_hlds__purity__Goal1_300 = (MR_Word) MR_body(((MR_Word) check_hlds__purity__V_237_237), (MR_Integer) 0);
#line 827 "purity.m"
            {
#line 827 "purity.m"
              MR_Word check_hlds__purity__Goal_299;

#line 827 "purity.m"
              {
#line 827 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_300, &check_hlds__purity__Goal_299, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
              }
#line 828 "purity.m"
              *check_hlds__purity__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__purity__Goal_299);
#line 827 "purity.m"
            }
#line 826 "purity.m"
          }
#line 826 "purity.m"
        else
#line 831 "purity.m"
          {
#line 831 "purity.m"
            MR_Word check_hlds__purity__NotGoal1_98;
#line 832 "purity.m"
            MR_Word check_hlds__purity__V_99_99;

#line 830 "purity.m"
            {
#line 830 "purity.m"
              check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__NotGoal0_96, &check_hlds__purity__NotGoal1_98, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
            }
#line 832 "purity.m"
            *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal1_98, (MR_Integer) 0)));
#line 832 "purity.m"
            check_hlds__purity__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal1_98, (MR_Integer) 1)));
#line 831 "purity.m"
          }
#line 823 "purity.m"
      }
#line 672 "purity.m"
    else
#line 672 "purity.m"
      if (((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 2))))
#line 685 "purity.m"
        {
#line 685 "purity.m"
          MR_Word check_hlds__purity__PredId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)));
#line 685 "purity.m"
          MR_Integer check_hlds__purity__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 685 "purity.m"
          MR_Word check_hlds__purity__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 685 "purity.m"
          MR_Word check_hlds__purity__Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 685 "purity.m"
          MR_Word check_hlds__purity__MaybeUnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 685 "purity.m"
          MR_Word check_hlds__purity__SymName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));
#line 685 "purity.m"
          MR_Word check_hlds__purity__RunPostTypecheck_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 1)));
#line 685 "purity.m"
          MR_Word check_hlds__purity__PredInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 2)));
#line 685 "purity.m"
          MR_Word check_hlds__purity__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 0)));
#line 685 "purity.m"
          MR_Word check_hlds__purity__CallContext_26;
#line 685 "purity.m"
          MR_Word check_hlds__purity__PredId_28;
#line 685 "purity.m"
          MR_Word check_hlds__purity__DeclaredPurity_31;
#line 686 "purity.m"
          MR_Word check_hlds__purity__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 3)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 4)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 5)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 6)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 7)));

#line 689 "purity.m"
          {
#line 689 "purity.m"
            check_hlds__purity__CallContext_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
          }
#line 708 "purity.m"
          if ((check_hlds__purity__RunPostTypecheck_23 == (MR_Integer) 1))
#line 709 "purity.m"
            {
#line 710 "purity.m"
              check_hlds__purity__PredId_28 = check_hlds__purity__PredId0_17;
#line 711 "purity.m"
              *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 709 "purity.m"
            }
#line 708 "purity.m"
          else
#line 691 "purity.m"
            {
#line 691 "purity.m"
              MR_Word check_hlds__purity__SymName_27;
#line 698 "purity.m"
              MR_Word check_hlds__purity__V_257_257;
#line 698 "purity.m"
              MR_String check_hlds__purity__V_258_258;
#line 698 "purity.m"
              MR_Word check_hlds__purity__V_259_259;
#line 698 "purity.m"
              MR_Word check_hlds__purity__V_260_260;
#line 698 "purity.m"
              MR_Word check_hlds__purity__V_509_509;
#line 699 "purity.m"
              MR_Word check_hlds__purity__InputArg_29;
#line 699 "purity.m"
              MR_Word check_hlds__purity__OutputArg_30;

#line 692 "purity.m"
              {
#line 692 "purity.m"
                check_hlds__post_typecheck__finally_resolve_pred_overloading_8_p_0(check_hlds__purity__ArgVars_19, check_hlds__purity__PredInfo_24, check_hlds__purity__ModuleInfo_25, check_hlds__purity__CallContext_26, check_hlds__purity__SymName0_22, &check_hlds__purity__SymName_27, check_hlds__purity__PredId0_17, &check_hlds__purity__PredId_28);
              }
#line 697 "purity.m"
              check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__SymName_27)) == (MR_mktag((MR_Integer) 1)));
#line 697 "purity.m"
              if (check_hlds__purity__succeeded)
#line 697 "purity.m"
                {
#line 697 "purity.m"
                  check_hlds__purity__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__SymName_27, (MR_Integer) 0)));
#line 697 "purity.m"
                  check_hlds__purity__V_258_258 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__purity__SymName_27, (MR_Integer) 1)));
#line 697 "purity.m"
                  {
#line 697 "purity.m"
                    check_hlds__purity__V_509_509 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                  }
#line 697 "purity.m"
                  {
#line 697 "purity.m"
                    check_hlds__purity__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__purity__V_257_257, check_hlds__purity__V_509_509);
                  }
#line 698 "purity.m"
                  if (check_hlds__purity__succeeded)
#line 698 "purity.m"
                    {
#line 697 "purity.m"
                      check_hlds__purity__succeeded = (strcmp(check_hlds__purity__V_258_258, (MR_String) "unsafe_type_cast") == 0);
#line 698 "purity.m"
                      if (check_hlds__purity__succeeded)
#line 698 "purity.m"
                        {
#line 699 "purity.m"
                          check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__ArgVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 699 "purity.m"
                          if (check_hlds__purity__succeeded)
#line 699 "purity.m"
                            {
#line 699 "purity.m"
                              check_hlds__purity__InputArg_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ArgVars_19, (MR_Integer) 0)));
#line 699 "purity.m"
                              check_hlds__purity__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ArgVars_19, (MR_Integer) 1)));
#line 699 "purity.m"
                              check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_259_259)) == (MR_mktag((MR_Integer) 1)));
#line 699 "purity.m"
                              if (check_hlds__purity__succeeded)
#line 699 "purity.m"
                                {
#line 699 "purity.m"
                                  check_hlds__purity__OutputArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_259_259, (MR_Integer) 0)));
#line 699 "purity.m"
                                  check_hlds__purity__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_259_259, (MR_Integer) 1)));
#line 699 "purity.m"
                                  check_hlds__purity__succeeded = (check_hlds__purity__V_260_260 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "purity.m"
                                }
#line 699 "purity.m"
                            }
#line 698 "purity.m"
                        }
#line 698 "purity.m"
                    }
#line 697 "purity.m"
                }
#line 704 "purity.m"
              if (check_hlds__purity__succeeded)
#line 701 "purity.m"
                {
#line 701 "purity.m"
                  MR_Word check_hlds__purity__V_266_266;
#line 701 "purity.m"
                  MR_Word check_hlds__purity__V_267_267;
#line 701 "purity.m"
                  MR_Word check_hlds__purity__V_268_268;
#line 701 "purity.m"
                  MR_Word check_hlds__purity__V_269_269;

#line 702 "purity.m"
                  {
#line 702 "purity.m"
                    check_hlds__purity__V_267_267 = parse_tree__prog_mode__in_mode_0_f_0();
                  }
#line 702 "purity.m"
                  {
#line 702 "purity.m"
                    check_hlds__purity__V_269_269 = parse_tree__prog_mode__out_mode_0_f_0();
                  }
#line 702 "purity.m"
                  {
#line 702 "purity.m"
                    check_hlds__purity__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_268_268, 0) = ((MR_Box) (check_hlds__purity__V_269_269));
#line 702 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_268_268, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "purity.m"
                  }
#line 701 "purity.m"
                  {
#line 701 "purity.m"
                    check_hlds__purity__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_266_266, 0) = ((MR_Box) (check_hlds__purity__V_267_267));
#line 701 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_266_266, 1) = ((MR_Box) (check_hlds__purity__V_268_268));
#line 701 "purity.m"
                  }
#line 701 "purity.m"
                  {
#line 701 "purity.m"
                    MR_Word base;
#line 701 "purity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 701 "purity.m"
                    *check_hlds__purity__GoalExpr_9 = base;
#line 701 "purity.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 701 "purity.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_3[0])));
#line 701 "purity.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__ArgVars_19));
#line 701 "purity.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__V_266_266));
#line 701 "purity.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "purity.m"
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 701 "purity.m"
                  }
#line 701 "purity.m"
                }
#line 704 "purity.m"
              else
#line 705 "purity.m"
                {
#line 705 "purity.m"
                  MR_Word base;
#line 705 "purity.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 705 "purity.m"
                  *check_hlds__purity__GoalExpr_9 = base;
#line 705 "purity.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__purity__PredId_28));
#line 705 "purity.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__purity__ProcId_18));
#line 705 "purity.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__purity__ArgVars_19));
#line 705 "purity.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__purity__Status_20));
#line 705 "purity.m"
                  MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__purity__MaybeUnifyContext_21));
#line 705 "purity.m"
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__purity__SymName_27));
#line 705 "purity.m"
                }
#line 691 "purity.m"
            }
#line 713 "purity.m"
          {
#line 713 "purity.m"
            check_hlds__purity__DeclaredPurity_31 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_10);
          }
#line 714 "purity.m"
          {
#line 714 "purity.m"
            check_hlds__purity__perform_goal_purity_checks_6_p_0(check_hlds__purity__CallContext_26, check_hlds__purity__PredId_28, check_hlds__purity__DeclaredPurity_31, check_hlds__purity__Purity_11, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
          }
#line 717 "purity.m"
          *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 685 "purity.m"
        }
#line 672 "purity.m"
      else
#line 672 "purity.m"
        if (((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 1))))
#line 740 "purity.m"
          {
#line 740 "purity.m"
            MR_Word check_hlds__purity__LHSVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)));
#line 740 "purity.m"
            MR_Word check_hlds__purity__RHS0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 740 "purity.m"
            MR_Word check_hlds__purity__Mode_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 740 "purity.m"
            MR_Word check_hlds__purity__Unification_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 740 "purity.m"
            MR_Word check_hlds__purity__UnifyContext_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));

#line 772 "purity.m"
            if (((MR_tag((MR_Word) check_hlds__purity__RHS0_52)) == (MR_mktag((MR_Integer) 1))))
#line 773 "purity.m"
              {
#line 773 "purity.m"
                MR_Word check_hlds__purity__ConsId_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 0)));
#line 773 "purity.m"
                MR_Word check_hlds__purity__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 2)));
#line 773 "purity.m"
                MR_Word check_hlds__purity__Goal1_83;
#line 773 "purity.m"
                MR_Word check_hlds__purity__Goal_92;
#line 773 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_246_246;
#line 773 "purity.m"
                MR_Word check_hlds__purity__RunPostTypecheck_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 1)));
#line 773 "purity.m"
                MR_Word check_hlds__purity__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 0)));
#line 773 "purity.m"
                MR_Word check_hlds__purity__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 2)));
#line 773 "purity.m"
                MR_Word check_hlds__purity__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 3)));
#line 773 "purity.m"
                MR_Word check_hlds__purity__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 4)));
#line 773 "purity.m"
                MR_Word check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 1)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 5)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 6)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 7)));
#line 798 "purity.m"
                MR_Word check_hlds__purity__V_248_248;
#line 798 "purity.m"
                MR_Word check_hlds__purity__V_90_90;
#line 798 "purity.m"
                MR_Word check_hlds__purity__V_85_85;
#line 798 "purity.m"
                MR_Word check_hlds__purity__V_86_86;
#line 798 "purity.m"
                MR_Word check_hlds__purity__V_87_87;
#line 798 "purity.m"
                MR_Word check_hlds__purity__V_88_88;
#line 798 "purity.m"
                MR_Word check_hlds__purity__V_89_89;
#line 809 "purity.m"
                MR_Word check_hlds__purity__V_93_93;

#line 794 "purity.m"
                if ((check_hlds__purity__RunPostTypecheck_285 == (MR_Integer) 1))
#line 795 "purity.m"
                  {
#line 796 "purity.m"
                    {
#line 796 "purity.m"
                      check_hlds__purity__Goal1_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, 0) = ((MR_Box) (check_hlds__purity__GoalExpr0_8));
#line 796 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_10));
#line 796 "purity.m"
                    }
#line 796 "purity.m"
                    check_hlds__purity__STATE_VARIABLE_Info_246_246 = check_hlds__purity__STATE_VARIABLE_Info_0_190;
#line 795 "purity.m"
                  }
#line 794 "purity.m"
                else
#line 776 "purity.m"
                  {
#line 776 "purity.m"
                    MR_Word check_hlds__purity__VarSet_81;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__VarTypes_82;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__IsPlainUnify_84;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__STATE_VARIABLE_Info_245_245;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__PredInfo_281;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_408_408;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_409_409;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_413_413;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_414_414;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_415_415;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_416_416;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_417_417;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_419_419;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_421_421;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_422_422;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_423_423;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_424_424;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_425_425;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_427_427;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_428_428;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_429_429;
#line 776 "purity.m"
                    MR_Word check_hlds__purity__V_430_430;
#line 785 "purity.m"
                    MR_Word check_hlds__purity__V_410_410;
#line 785 "purity.m"
                    MR_Word check_hlds__purity__V_411_411;
#line 785 "purity.m"
                    MR_Word check_hlds__purity__V_412_412;

#line 781 "purity.m"
                    {
#line 781 "purity.m"
                      check_hlds__post_typecheck__resolve_unify_functor_16_p_0(check_hlds__purity__LHSVar_51, check_hlds__purity__ConsId_75, check_hlds__purity__Args_77, check_hlds__purity__Mode_53, check_hlds__purity__Unification_54, check_hlds__purity__UnifyContext_55, check_hlds__purity__GoalInfo_10, check_hlds__purity__V_373_373, check_hlds__purity__V_374_374, &check_hlds__purity__PredInfo_281, check_hlds__purity__V_376_376, &check_hlds__purity__VarSet_81, check_hlds__purity__V_375_375, &check_hlds__purity__VarTypes_82, &check_hlds__purity__Goal1_83, &check_hlds__purity__IsPlainUnify_84);
                    }
#line 785 "purity.m"
                    check_hlds__purity__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 0)));
#line 785 "purity.m"
                    check_hlds__purity__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 1)));
#line 785 "purity.m"
                    check_hlds__purity__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 2)));
#line 785 "purity.m"
                    check_hlds__purity__V_411_411 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 3)));
#line 785 "purity.m"
                    check_hlds__purity__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 4)));
#line 785 "purity.m"
                    check_hlds__purity__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 5)));
#line 785 "purity.m"
                    check_hlds__purity__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 6)));
#line 785 "purity.m"
                    check_hlds__purity__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 7)));
#line 786 "purity.m"
                    check_hlds__purity__V_416_416 = check_hlds__purity__V_408_408;
#line 786 "purity.m"
                    check_hlds__purity__V_417_417 = check_hlds__purity__V_409_409;
#line 786 "purity.m"
                    check_hlds__purity__V_419_419 = check_hlds__purity__VarTypes_82;
#line 786 "purity.m"
                    check_hlds__purity__V_421_421 = check_hlds__purity__V_413_413;
#line 786 "purity.m"
                    check_hlds__purity__V_422_422 = check_hlds__purity__V_414_414;
#line 786 "purity.m"
                    check_hlds__purity__V_423_423 = check_hlds__purity__V_415_415;
#line 787 "purity.m"
                    check_hlds__purity__V_424_424 = check_hlds__purity__V_416_416;
#line 787 "purity.m"
                    check_hlds__purity__V_425_425 = check_hlds__purity__V_417_417;
#line 787 "purity.m"
                    check_hlds__purity__V_427_427 = check_hlds__purity__V_419_419;
#line 787 "purity.m"
                    check_hlds__purity__V_428_428 = check_hlds__purity__VarSet_81;
#line 787 "purity.m"
                    check_hlds__purity__V_429_429 = check_hlds__purity__V_421_421;
#line 787 "purity.m"
                    check_hlds__purity__V_430_430 = check_hlds__purity__V_422_422;
#line 787 "purity.m"
                    {
#line 787 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Info_245_245 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 787 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_245_245, 0) = ((MR_Box) (check_hlds__purity__V_424_424));
#line 787 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_245_245, 1) = ((MR_Box) (check_hlds__purity__V_425_425));
#line 787 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_245_245, 2) = ((MR_Box) (check_hlds__purity__PredInfo_281));
#line 787 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_245_245, 3) = ((MR_Box) (check_hlds__purity__V_427_427));
#line 787 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_245_245, 4) = ((MR_Box) (check_hlds__purity__V_428_428));
#line 787 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_245_245, 5) = ((MR_Box) (check_hlds__purity__V_429_429));
#line 787 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_245_245, 6) = ((MR_Box) (check_hlds__purity__V_430_430));
#line 787 "purity.m"
                      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_245_245, 7) = ((MR_Box) (check_hlds__purity__V_423_423));
#line 787 "purity.m"
                    }
#line 790 "purity.m"
                    if ((check_hlds__purity__IsPlainUnify_84 == (MR_Integer) 0))
#line 791 "purity.m"
                      {
#line 792 "purity.m"
                        {
#line 792 "purity.m"
                          check_hlds__purity__STATE_VARIABLE_Info_246_246 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 792 "purity.m"
                          MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_246_246, 0) = ((MR_Box) (check_hlds__purity__V_424_424));
#line 792 "purity.m"
                          MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_246_246, 1) = ((MR_Box) (check_hlds__purity__V_425_425));
#line 792 "purity.m"
                          MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_246_246, 2) = ((MR_Box) (check_hlds__purity__PredInfo_281));
#line 792 "purity.m"
                          MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_246_246, 3) = ((MR_Box) (check_hlds__purity__V_427_427));
#line 792 "purity.m"
                          MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_246_246, 4) = ((MR_Box) (check_hlds__purity__V_428_428));
#line 792 "purity.m"
                          MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_246_246, 5) = ((MR_Box) (check_hlds__purity__V_429_429));
#line 792 "purity.m"
                          MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_246_246, 6) = ((MR_Box) (check_hlds__purity__V_430_430));
#line 792 "purity.m"
                          MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_246_246, 7) = ((MR_Box) ((MR_Integer) 1));
#line 792 "purity.m"
                        }
#line 791 "purity.m"
                      }
#line 790 "purity.m"
                    else
#line 789 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Info_246_246 = check_hlds__purity__STATE_VARIABLE_Info_245_245;
#line 776 "purity.m"
                  }
#line 798 "purity.m"
                check_hlds__purity__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, (MR_Integer) 0)));
#line 798 "purity.m"
                check_hlds__purity__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, (MR_Integer) 1)));
#line 798 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_248_248)) == (MR_mktag((MR_Integer) 1)));
#line 798 "purity.m"
                if (check_hlds__purity__succeeded)
#line 798 "purity.m"
                  {
#line 798 "purity.m"
                    check_hlds__purity__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_248_248, (MR_Integer) 0)));
#line 798 "purity.m"
                    check_hlds__purity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_248_248, (MR_Integer) 1)));
#line 798 "purity.m"
                    check_hlds__purity__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_248_248, (MR_Integer) 2)));
#line 798 "purity.m"
                    check_hlds__purity__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_248_248, (MR_Integer) 3)));
#line 798 "purity.m"
                    check_hlds__purity__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_248_248, (MR_Integer) 4)));
#line 800 "purity.m"
                    {
#line 800 "purity.m"
                      MR_Word check_hlds__purity__UnifySpecs_91;

#line 799 "purity.m"
                      {
#line 799 "purity.m"
                        check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_246_246, check_hlds__purity__GoalInfo_10, check_hlds__purity__LHSVar_51, check_hlds__purity__ConsId_75, check_hlds__purity__Args_77, &check_hlds__purity__UnifySpecs_91);
                      }
#line 801 "purity.m"
                      {
#line 801 "purity.m"
                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_91, check_hlds__purity__STATE_VARIABLE_Info_246_246, check_hlds__purity__STATE_VARIABLE_Info_191);
                      }
#line 802 "purity.m"
                      *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 803 "purity.m"
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 804 "purity.m"
                      check_hlds__purity__Goal_92 = check_hlds__purity__Goal1_83;
#line 800 "purity.m"
                    }
#line 798 "purity.m"
                  }
#line 798 "purity.m"
                else
#line 806 "purity.m"
                  {
#line 806 "purity.m"
                    check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_83, &check_hlds__purity__Goal_92, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_246_246, check_hlds__purity__STATE_VARIABLE_Info_191);
                  }
#line 809 "purity.m"
                *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_92, (MR_Integer) 0)));
#line 809 "purity.m"
                check_hlds__purity__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_92, (MR_Integer) 1)));
#line 773 "purity.m"
              }
#line 772 "purity.m"
            else
#line 772 "purity.m"
              if (((MR_tag((MR_Word) check_hlds__purity__RHS0_52)) == (MR_mktag((MR_Integer) 2))))
#line 744 "purity.m"
                {
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaPurity_56 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 744 "purity.m"
                  MR_Word check_hlds__purity__Groundness_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "purity.m"
                  MR_Word check_hlds__purity__PredOrFunc_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaNonLocals_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 2)));
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaQuantVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 3)));
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaModes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 4)));
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaDetism_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 5)));
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaGoal0_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 6)));
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal0_64, (MR_Integer) 0)));
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaGoalInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal0_64, (MR_Integer) 1)));
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaGoalExpr_67;
#line 744 "purity.m"
                  MR_Word check_hlds__purity__GoalPurity_68;
#line 744 "purity.m"
                  MR_Word check_hlds__purity__LambdaGoal_70;
#line 744 "purity.m"
                  MR_Word check_hlds__purity__RHS_71;
#line 744 "purity.m"
                  MR_Word check_hlds__purity__ClosureSpecs_72;
#line 744 "purity.m"
                  MR_Word check_hlds__purity__STATE_VARIABLE_Info_251_251;
#line 744 "purity.m"
                  MR_Word check_hlds__purity__STATE_VARIABLE_Info_252_252;
#line 744 "purity.m"
                  MR_Word check_hlds__purity__DeclaredPurity_280;
#line 746 "purity.m"
                  MR_Word check_hlds__purity__V_69_69;

#line 746 "purity.m"
                  {
#line 746 "purity.m"
                    check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__LambdaGoalExpr0_65, &check_hlds__purity__LambdaGoalExpr_67, check_hlds__purity__LambdaGoalInfo0_66, &check_hlds__purity__GoalPurity_68, &check_hlds__purity__V_69_69, check_hlds__purity__STATE_VARIABLE_Info_0_190, &check_hlds__purity__STATE_VARIABLE_Info_251_251);
                  }
#line 748 "purity.m"
                  {
#line 748 "purity.m"
                    check_hlds__purity__LambdaGoal_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal_70, 0) = ((MR_Box) (check_hlds__purity__LambdaGoalExpr_67));
#line 748 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal_70, 1) = ((MR_Box) (check_hlds__purity__LambdaGoalInfo0_66));
#line 748 "purity.m"
                  }
#line 749 "purity.m"
                  {
#line 749 "purity.m"
                    check_hlds__purity__RHS_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 749 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 0) = ((MR_Box) ((check_hlds__purity__LambdaPurity_56 | ((((check_hlds__purity__Groundness_57 << (MR_Integer) 2)) | ((check_hlds__purity__PredOrFunc_58 << (MR_Integer) 3)))))));
#line 749 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 1) = (MR_Integer) 0;
#line 749 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 2) = ((MR_Box) (check_hlds__purity__LambdaNonLocals_60));
#line 749 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 3) = ((MR_Box) (check_hlds__purity__LambdaQuantVars_61));
#line 749 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 4) = ((MR_Box) (check_hlds__purity__LambdaModes_62));
#line 749 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 5) = ((MR_Box) (check_hlds__purity__LambdaDetism_63));
#line 749 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 6) = ((MR_Box) (check_hlds__purity__LambdaGoal_70));
#line 749 "purity.m"
                  }
#line 753 "purity.m"
                  {
#line 753 "purity.m"
                    check_hlds__purity__check_closure_purity_4_p_0(check_hlds__purity__GoalInfo_10, check_hlds__purity__LambdaPurity_56, check_hlds__purity__GoalPurity_68, &check_hlds__purity__ClosureSpecs_72);
                  }
#line 755 "purity.m"
                  {
#line 755 "purity.m"
                    check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__ClosureSpecs_72, check_hlds__purity__STATE_VARIABLE_Info_251_251, &check_hlds__purity__STATE_VARIABLE_Info_252_252);
                  }
#line 756 "purity.m"
                  {
#line 756 "purity.m"
                    MR_Word base;
#line 756 "purity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 756 "purity.m"
                    *check_hlds__purity__GoalExpr_9 = base;
#line 756 "purity.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__LHSVar_51));
#line 756 "purity.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__RHS_71));
#line 756 "purity.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__purity__Mode_53));
#line 756 "purity.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__purity__Unification_54));
#line 756 "purity.m"
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__purity__UnifyContext_55));
#line 756 "purity.m"
                  }
#line 759 "purity.m"
                  {
#line 759 "purity.m"
                    check_hlds__purity__DeclaredPurity_280 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_10);
                  }
#line 767 "purity.m"
                  if ((check_hlds__purity__DeclaredPurity_280 == (MR_Integer) 0))
#line 768 "purity.m"
                    *check_hlds__purity__STATE_VARIABLE_Info_191 = check_hlds__purity__STATE_VARIABLE_Info_252_252;
#line 767 "purity.m"
                  else
#line 763 "purity.m"
                    {
#line 763 "purity.m"
                      MR_Word check_hlds__purity__Context_73;
#line 763 "purity.m"
                      MR_Word check_hlds__purity__Spec_74;

#line 764 "purity.m"
                      {
#line 764 "purity.m"
                        check_hlds__purity__Context_73 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
                      }
#line 765 "purity.m"
                      {
#line 765 "purity.m"
                        check_hlds__purity__Spec_74 = check_hlds__purity__impure_unification_expr_error_2_f_0(check_hlds__purity__Context_73, check_hlds__purity__DeclaredPurity_280);
                      }
#line 766 "purity.m"
                      {
#line 766 "purity.m"
                        check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_74, check_hlds__purity__STATE_VARIABLE_Info_252_252, check_hlds__purity__STATE_VARIABLE_Info_191);
                      }
#line 763 "purity.m"
                    }
#line 770 "purity.m"
                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 771 "purity.m"
                  *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 744 "purity.m"
                }
#line 772 "purity.m"
              else
#line 811 "purity.m"
                {
#line 812 "purity.m"
                  *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 813 "purity.m"
                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 814 "purity.m"
                  *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 814 "purity.m"
                  *check_hlds__purity__STATE_VARIABLE_Info_191 = check_hlds__purity__STATE_VARIABLE_Info_0_190;
#line 811 "purity.m"
                }
#line 740 "purity.m"
          }
#line 672 "purity.m"
        else
#line 672 "purity.m"
          if (((((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 960 "purity.m"
            {
#line 960 "purity.m"
              MR_Word check_hlds__purity__Attributes_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 960 "purity.m"
              MR_Word check_hlds__purity__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 960 "purity.m"
              MR_Integer check_hlds__purity__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 960 "purity.m"
              MR_Word check_hlds__purity__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 960 "purity.m"
              MR_Word check_hlds__purity__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));
#line 960 "purity.m"
              MR_Word check_hlds__purity__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 6)));
#line 960 "purity.m"
              MR_Word check_hlds__purity__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 7)));

#line 961 "purity.m"
              {
#line 961 "purity.m"
                *check_hlds__purity__Purity_11 = parse_tree__prog_data__get_purity_1_f_0(check_hlds__purity__Attributes_155);
              }
#line 962 "purity.m"
              *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 963 "purity.m"
              *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 963 "purity.m"
              *check_hlds__purity__STATE_VARIABLE_Info_191 = check_hlds__purity__STATE_VARIABLE_Info_0_190;
#line 960 "purity.m"
            }
#line 672 "purity.m"
          else
#line 672 "purity.m"
            if (((((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 672 "purity.m"
              {
#line 672 "purity.m"
                MR_Word check_hlds__purity__ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 672 "purity.m"
                MR_Word check_hlds__purity__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 672 "purity.m"
                MR_Word check_hlds__purity__Goals_16;

#line 677 "purity.m"
                if ((check_hlds__purity__ConjType_14 == (MR_Integer) 1))
#line 678 "purity.m"
                  {
#line 679 "purity.m"
                    {
#line 679 "purity.m"
                      check_hlds__purity__compute_parallel_goals_purity_8_p_0(check_hlds__purity__Goals0_15, &check_hlds__purity__Goals_16, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                    }
#line 678 "purity.m"
                  }
#line 677 "purity.m"
                else
#line 674 "purity.m"
                  {
#line 675 "purity.m"
                    {
#line 675 "purity.m"
                      check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__Goals0_15, &check_hlds__purity__Goals_16, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                    }
#line 674 "purity.m"
                  }
#line 682 "purity.m"
                {
#line 682 "purity.m"
                  MR_Word base;
#line 682 "purity.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 682 "purity.m"
                  *check_hlds__purity__GoalExpr_9 = base;
#line 682 "purity.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 682 "purity.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ConjType_14));
#line 682 "purity.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Goals_16));
#line 682 "purity.m"
                }
#line 672 "purity.m"
              }
#line 672 "purity.m"
            else
#line 672 "purity.m"
              if (((((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 818 "purity.m"
                {
#line 818 "purity.m"
                  MR_Word check_hlds__purity__Goals0_297 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 818 "purity.m"
                  MR_Word check_hlds__purity__Goals_298;

#line 819 "purity.m"
                  {
#line 819 "purity.m"
                    check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__Goals0_297, &check_hlds__purity__Goals_298, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                  }
#line 821 "purity.m"
                  {
#line 821 "purity.m"
                    MR_Word base;
#line 821 "purity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "purity.m"
                    *check_hlds__purity__GoalExpr_9 = base;
#line 821 "purity.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 821 "purity.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Goals_298));
#line 821 "purity.m"
                  }
#line 818 "purity.m"
                }
#line 672 "purity.m"
              else
#line 672 "purity.m"
                if (((((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 720 "purity.m"
                  {
#line 720 "purity.m"
                    MR_Word check_hlds__purity__GenericCall0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 719 "purity.m"
                    MR_Word check_hlds__purity___ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 719 "purity.m"
                    MR_Word check_hlds__purity___Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 719 "purity.m"
                    MR_Word check_hlds__purity___MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 719 "purity.m"
                    MR_Word check_hlds__purity___Det_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));

#line 721 "purity.m"
                    *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 724 "purity.m"
                    if (((MR_tag((MR_Word) check_hlds__purity__GenericCall0_33)) == (MR_mktag((MR_Integer) 1))))
#line 726 "purity.m"
                      *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 724 "purity.m"
                    else
#line 724 "purity.m"
                      if (((MR_tag((MR_Word) check_hlds__purity__GenericCall0_33)) == (MR_mktag((MR_Integer) 0))))
#line 723 "purity.m"
                        {
#line 723 "purity.m"
                          MR_Word check_hlds__purity__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 0)));
#line 723 "purity.m"
                          MR_Word check_hlds__purity__V_39_39;
#line 723 "purity.m"
                          MR_Integer check_hlds__purity__V_40_40;

#line 723 "purity.m"
                          *check_hlds__purity__Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 1)));
#line 723 "purity.m"
                          check_hlds__purity__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 2)));
#line 723 "purity.m"
                          check_hlds__purity__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 3)));
#line 723 "purity.m"
                        }
#line 724 "purity.m"
                      else
#line 731 "purity.m"
                        *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 733 "purity.m"
                    *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 733 "purity.m"
                    *check_hlds__purity__STATE_VARIABLE_Info_191 = check_hlds__purity__STATE_VARIABLE_Info_0_190;
#line 720 "purity.m"
                  }
#line 672 "purity.m"
                else
#line 672 "purity.m"
                  if (((((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 942 "purity.m"
                    {
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Vars_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Cond0_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Then0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Else0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Cond_145;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Purity1_146;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__ContainsTrace1_147;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Then_148;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Purity2_149;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__ContainsTrace2_150;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Else_151;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Purity3_152;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__ContainsTrace3_153;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__Purity12_154;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_211_211;
#line 942 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_212_212;

#line 943 "purity.m"
                      {
#line 943 "purity.m"
                        check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Cond0_142, &check_hlds__purity__Cond_145, &check_hlds__purity__Purity1_146, &check_hlds__purity__ContainsTrace1_147, check_hlds__purity__STATE_VARIABLE_Info_0_190, &check_hlds__purity__STATE_VARIABLE_Info_211_211);
                      }
#line 944 "purity.m"
                      {
#line 944 "purity.m"
                        check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Then0_143, &check_hlds__purity__Then_148, &check_hlds__purity__Purity2_149, &check_hlds__purity__ContainsTrace2_150, check_hlds__purity__STATE_VARIABLE_Info_211_211, &check_hlds__purity__STATE_VARIABLE_Info_212_212);
                      }
#line 945 "purity.m"
                      {
#line 945 "purity.m"
                        check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Else0_144, &check_hlds__purity__Else_151, &check_hlds__purity__Purity3_152, &check_hlds__purity__ContainsTrace3_153, check_hlds__purity__STATE_VARIABLE_Info_212_212, check_hlds__purity__STATE_VARIABLE_Info_191);
                      }
#line 946 "purity.m"
                      {
#line 946 "purity.m"
                        check_hlds__purity__Purity12_154 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity1_146, check_hlds__purity__Purity2_149);
                      }
#line 947 "purity.m"
                      {
#line 947 "purity.m"
                        *check_hlds__purity__Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity12_154, check_hlds__purity__Purity3_152);
                      }
#line 949 "purity.m"
                      check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace1_147 == (MR_Integer) 0);
#line 950 "purity.m"
                      if (!(check_hlds__purity__succeeded))
#line 950 "purity.m"
                        {
#line 950 "purity.m"
                          check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace2_150 == (MR_Integer) 0);
#line 950 "purity.m"
                          if (!(check_hlds__purity__succeeded))
#line 951 "purity.m"
                            check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace3_153 == (MR_Integer) 0);
#line 950 "purity.m"
                        }
#line 955 "purity.m"
                      if (check_hlds__purity__succeeded)
#line 954 "purity.m"
                        *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 955 "purity.m"
                      else
#line 956 "purity.m"
                        *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 958 "purity.m"
                      {
#line 958 "purity.m"
                        MR_Word base;
#line 958 "purity.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 958 "purity.m"
                        *check_hlds__purity__GoalExpr_9 = base;
#line 958 "purity.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 958 "purity.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Vars_141));
#line 958 "purity.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Cond_145));
#line 958 "purity.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__Then_148));
#line 958 "purity.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__purity__Else_151));
#line 958 "purity.m"
                      }
#line 942 "purity.m"
                    }
#line 672 "purity.m"
                  else
#line 672 "purity.m"
                    if (((((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 835 "purity.m"
                      {
#line 835 "purity.m"
                        MR_Word check_hlds__purity__Reason0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 835 "purity.m"
                        MR_Word check_hlds__purity__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));

#line 841 "purity.m"
                        if (((MR_tag((MR_Word) check_hlds__purity__Reason0_100)) == (MR_mktag((MR_Integer) 2))))
#line 837 "purity.m"
                          {
#line 837 "purity.m"
                            MR_Word check_hlds__purity__SubGoal_103;
#line 838 "purity.m"
                            MR_Word check_hlds__purity__V_104_104;

#line 837 "purity.m"
                            *check_hlds__purity__Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__Reason0_100, (MR_Integer) 0)));
#line 838 "purity.m"
                            {
#line 838 "purity.m"
                              check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_103, &check_hlds__purity__V_104_104, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                            }
#line 839 "purity.m"
                            {
#line 839 "purity.m"
                              MR_Word base;
#line 839 "purity.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 839 "purity.m"
                              *check_hlds__purity__GoalExpr_9 = base;
#line 839 "purity.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 839 "purity.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 839 "purity.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_103));
#line 839 "purity.m"
                            }
#line 837 "purity.m"
                          }
#line 841 "purity.m"
                        else
#line 841 "purity.m"
                          if (((((MR_tag((MR_Word) check_hlds__purity__Reason0_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 842 "purity.m"
                            {
#line 842 "purity.m"
                              MR_Word check_hlds__purity__TermVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 1)));
#line 842 "purity.m"
                              MR_Word check_hlds__purity__Kind0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 2)));

#line 897 "purity.m"
                              if ((((check_hlds__purity__Kind0_106 == (MR_Integer) 1)) || ((check_hlds__purity__Kind0_106 == (MR_Integer) 0))))
#line 846 "purity.m"
                                {
#line 846 "purity.m"
                                  MR_Word check_hlds__purity__SubGoalExpr0_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal0_101, (MR_Integer) 0)));
#line 846 "purity.m"
                                  MR_Word check_hlds__purity__SubGoalInfo0_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal0_101, (MR_Integer) 1)));
#line 846 "purity.m"
                                  MR_Word check_hlds__purity__SubGoals0_110;
#line 846 "purity.m"
                                  MR_Word check_hlds__purity__PostTypeCheck_111;
#line 850 "purity.m"
                                  MR_Word check_hlds__purity__SubGoals0Prime_109;
#line 848 "purity.m"
                                  MR_Word check_hlds__purity__V_223_223;
#line 854 "purity.m"
                                  MR_Word check_hlds__purity__V_440_440;
#line 854 "purity.m"
                                  MR_Word check_hlds__purity__V_441_441;
#line 854 "purity.m"
                                  MR_Word check_hlds__purity__V_442_442;
#line 854 "purity.m"
                                  MR_Word check_hlds__purity__V_443_443;
#line 854 "purity.m"
                                  MR_Word check_hlds__purity__V_444_444;
#line 854 "purity.m"
                                  MR_Word check_hlds__purity__V_445_445;
#line 854 "purity.m"
                                  MR_Word check_hlds__purity__V_446_446;

#line 848 "purity.m"
                                  check_hlds__purity__succeeded = ((((MR_tag((MR_Word) check_hlds__purity__SubGoalExpr0_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 848 "purity.m"
                                  if (check_hlds__purity__succeeded)
#line 848 "purity.m"
                                    {
#line 848 "purity.m"
                                      check_hlds__purity__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 1)));
#line 848 "purity.m"
                                      check_hlds__purity__SubGoals0Prime_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 2)));
#line 848 "purity.m"
                                      check_hlds__purity__succeeded = (check_hlds__purity__V_223_223 == (MR_Integer) 0);
#line 848 "purity.m"
                                    }
#line 850 "purity.m"
                                  if (check_hlds__purity__succeeded)
#line 849 "purity.m"
                                    check_hlds__purity__SubGoals0_110 = check_hlds__purity__SubGoals0Prime_109;
#line 850 "purity.m"
                                  else
#line 851 "purity.m"
                                    {
#line 851 "purity.m"
                                      {
#line 851 "purity.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "from_ground_term_initial goal is not plain conj");
#line 851 "purity.m"
                                        return;
                                      }
#line 851 "purity.m"
                                    }
#line 854 "purity.m"
                                  check_hlds__purity__V_440_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 0)));
#line 854 "purity.m"
                                  check_hlds__purity__PostTypeCheck_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 1)));
#line 854 "purity.m"
                                  check_hlds__purity__V_441_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 2)));
#line 854 "purity.m"
                                  check_hlds__purity__V_442_442 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 3)));
#line 854 "purity.m"
                                  check_hlds__purity__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 4)));
#line 854 "purity.m"
                                  check_hlds__purity__V_444_444 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 5)));
#line 854 "purity.m"
                                  check_hlds__purity__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 6)));
#line 854 "purity.m"
                                  check_hlds__purity__V_446_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 7)));
#line 888 "purity.m"
                                  if ((check_hlds__purity__PostTypeCheck_111 == (MR_Integer) 1))
#line 889 "purity.m"
                                    {
#line 889 "purity.m"
                                      MR_Word check_hlds__purity__Specs_121;

#line 890 "purity.m"
                                      *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 891 "purity.m"
                                      {
#line 891 "purity.m"
                                        check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(check_hlds__purity__SubGoals0_110, check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__purity__Specs_121);
                                      }
#line 893 "purity.m"
                                      {
#line 893 "purity.m"
                                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__Specs_121, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                                      }
#line 894 "purity.m"
                                      *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 895 "purity.m"
                                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 889 "purity.m"
                                    }
#line 888 "purity.m"
                                  else
#line 856 "purity.m"
                                    {
#line 856 "purity.m"
                                      MR_Word check_hlds__purity__RevMarkedSubGoals_112;
#line 856 "purity.m"
                                      MR_Word check_hlds__purity__Invariants_113;

#line 857 "purity.m"
                                      {
#line 857 "purity.m"
                                        check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(check_hlds__purity__SubGoals0_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__purity__RevMarkedSubGoals_112, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 0, &check_hlds__purity__Invariants_113);
                                      }
#line 871 "purity.m"
                                      if ((check_hlds__purity__Invariants_113 == (MR_Integer) 1))
#line 872 "purity.m"
                                        {
#line 872 "purity.m"
                                          MR_Word check_hlds__purity__ConstructOrderMarkedSubGoals_118;
#line 872 "purity.m"
                                          MR_Word check_hlds__purity__Order_119;
#line 872 "purity.m"
                                          MR_Word check_hlds__purity__SubGoal_305;
#line 886 "purity.m"
                                          MR_Word check_hlds__purity__V_120_120;

#line 877 "purity.m"
                                          if ((check_hlds__purity__Kind0_106 == (MR_Integer) 1))
#line 878 "purity.m"
                                            {
#line 879 "purity.m"
                                              {
#line 879 "purity.m"
                                                mercury__list__reverse_2_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, check_hlds__purity__RevMarkedSubGoals_112, &check_hlds__purity__ConstructOrderMarkedSubGoals_118);
                                              }
#line 881 "purity.m"
                                              check_hlds__purity__Order_119 = (MR_Integer) 0;
#line 878 "purity.m"
                                            }
#line 877 "purity.m"
                                          else
#line 874 "purity.m"
                                            {
#line 875 "purity.m"
                                              check_hlds__purity__ConstructOrderMarkedSubGoals_118 = check_hlds__purity__RevMarkedSubGoals_112;
#line 876 "purity.m"
                                              check_hlds__purity__Order_119 = (MR_Integer) 1;
#line 874 "purity.m"
                                            }
#line 883 "purity.m"
                                          {
#line 883 "purity.m"
                                            hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(check_hlds__purity__GoalInfo_10, check_hlds__purity__SubGoalInfo0_108, check_hlds__purity__ConstructOrderMarkedSubGoals_118, check_hlds__purity__Order_119, &check_hlds__purity__SubGoal_305);
                                          }
#line 886 "purity.m"
                                          *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_305, (MR_Integer) 0)));
#line 886 "purity.m"
                                          check_hlds__purity__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_305, (MR_Integer) 1)));
#line 872 "purity.m"
                                        }
#line 871 "purity.m"
                                      else
#line 862 "purity.m"
                                        {
#line 862 "purity.m"
                                          MR_Word check_hlds__purity__TypeCtorInfo_494_494 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 862 "purity.m"
                                          MR_Word check_hlds__purity__RevSubGoals_114;
#line 862 "purity.m"
                                          MR_Word check_hlds__purity__SubGoals_115;
#line 862 "purity.m"
                                          MR_Word check_hlds__purity__SubGoalExpr_116;
#line 862 "purity.m"
                                          MR_Word check_hlds__purity__SubGoalInfo_117;
#line 862 "purity.m"
                                          MR_Word check_hlds__purity__SubGoal_304;

#line 863 "purity.m"
                                          {
#line 863 "purity.m"
                                            mercury__list__map_3_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, check_hlds__purity__TypeCtorInfo_494_494, (MR_Word) &check_hlds__purity_scalar_common_1[1], check_hlds__purity__RevMarkedSubGoals_112, &check_hlds__purity__RevSubGoals_114);
                                          }
#line 865 "purity.m"
                                          {
#line 865 "purity.m"
                                            mercury__list__reverse_2_p_0(check_hlds__purity__TypeCtorInfo_494_494, check_hlds__purity__RevSubGoals_114, &check_hlds__purity__SubGoals_115);
                                          }
#line 866 "purity.m"
                                          {
#line 866 "purity.m"
                                            check_hlds__purity__SubGoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 866 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 866 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 1) = ((MR_Box) ((MR_Integer) 0));
#line 866 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 2) = ((MR_Box) (check_hlds__purity__SubGoals_115));
#line 866 "purity.m"
                                          }
#line 867 "purity.m"
                                          {
#line 867 "purity.m"
                                            check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(*check_hlds__purity__Purity_11, *check_hlds__purity__ContainsTrace_12, check_hlds__purity__SubGoalInfo0_108, &check_hlds__purity__SubGoalInfo_117);
                                          }
#line 869 "purity.m"
                                          {
#line 869 "purity.m"
                                            check_hlds__purity__SubGoal_304 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "purity.m"
                                            MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_304, 0) = ((MR_Box) (check_hlds__purity__SubGoalExpr_116));
#line 869 "purity.m"
                                            MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_304, 1) = ((MR_Box) (check_hlds__purity__SubGoalInfo_117));
#line 869 "purity.m"
                                          }
#line 870 "purity.m"
                                          {
#line 870 "purity.m"
                                            MR_Word base;
#line 870 "purity.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 870 "purity.m"
                                            *check_hlds__purity__GoalExpr_9 = base;
#line 870 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 870 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 870 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_304));
#line 870 "purity.m"
                                          }
#line 862 "purity.m"
                                        }
#line 856 "purity.m"
                                    }
#line 846 "purity.m"
                                }
#line 897 "purity.m"
                              else
#line 900 "purity.m"
                                {
#line 900 "purity.m"
                                  MR_Word check_hlds__purity__HaveConvertedUnify_122;
#line 900 "purity.m"
                                  MR_Word check_hlds__purity__STATE_VARIABLE_Info_219_219;
#line 900 "purity.m"
                                  MR_Word check_hlds__purity__SubGoal_310;
#line 901 "purity.m"
                                  MR_Word check_hlds__purity__V_447_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 0)));
#line 901 "purity.m"
                                  MR_Word check_hlds__purity__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 1)));
#line 901 "purity.m"
                                  MR_Word check_hlds__purity__V_449_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 2)));
#line 901 "purity.m"
                                  MR_Word check_hlds__purity__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 3)));
#line 901 "purity.m"
                                  MR_Word check_hlds__purity__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 4)));
#line 901 "purity.m"
                                  MR_Word check_hlds__purity__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 5)));
#line 901 "purity.m"
                                  MR_Word check_hlds__purity__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 6)));
#line 901 "purity.m"
                                  MR_Word check_hlds__purity__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 7)));
#line 904 "purity.m"
                                  MR_Word check_hlds__purity__V_455_455;
#line 904 "purity.m"
                                  MR_Word check_hlds__purity__V_456_456;
#line 904 "purity.m"
                                  MR_Word check_hlds__purity__V_457_457;
#line 904 "purity.m"
                                  MR_Word check_hlds__purity__V_458_458;
#line 904 "purity.m"
                                  MR_Word check_hlds__purity__V_459_459;
#line 904 "purity.m"
                                  MR_Word check_hlds__purity__V_460_460;
#line 904 "purity.m"
                                  MR_Word check_hlds__purity__V_461_461;

#line 901 "purity.m"
                                  {
#line 901 "purity.m"
                                    check_hlds__purity__STATE_VARIABLE_Info_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 901 "purity.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_219_219, 0) = ((MR_Box) (check_hlds__purity__V_447_447));
#line 901 "purity.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_219_219, 1) = ((MR_Box) (check_hlds__purity__V_448_448));
#line 901 "purity.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_219_219, 2) = ((MR_Box) (check_hlds__purity__V_449_449));
#line 901 "purity.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_219_219, 3) = ((MR_Box) (check_hlds__purity__V_450_450));
#line 901 "purity.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_219_219, 4) = ((MR_Box) (check_hlds__purity__V_451_451));
#line 901 "purity.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_219_219, 5) = ((MR_Box) (check_hlds__purity__V_452_452));
#line 901 "purity.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_219_219, 6) = ((MR_Box) (check_hlds__purity__V_453_453));
#line 901 "purity.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_219_219, 7) = ((MR_Box) ((MR_Integer) 0));
#line 901 "purity.m"
                                  }
#line 902 "purity.m"
                                  {
#line 902 "purity.m"
                                    check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_310, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_219_219, check_hlds__purity__STATE_VARIABLE_Info_191);
                                  }
#line 904 "purity.m"
                                  check_hlds__purity__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 0)));
#line 904 "purity.m"
                                  check_hlds__purity__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 1)));
#line 904 "purity.m"
                                  check_hlds__purity__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 2)));
#line 904 "purity.m"
                                  check_hlds__purity__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 3)));
#line 904 "purity.m"
                                  check_hlds__purity__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 4)));
#line 904 "purity.m"
                                  check_hlds__purity__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 5)));
#line 904 "purity.m"
                                  check_hlds__purity__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 6)));
#line 904 "purity.m"
                                  check_hlds__purity__HaveConvertedUnify_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_191, (MR_Integer) 7)));
#line 908 "purity.m"
                                  if ((check_hlds__purity__HaveConvertedUnify_122 == (MR_Integer) 1))
#line 909 "purity.m"
                                    {
#line 909 "purity.m"
                                      MR_Word check_hlds__purity__Reason_123;

#line 914 "purity.m"
                                      {
#line 914 "purity.m"
                                        check_hlds__purity__Reason_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 914 "purity.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 914 "purity.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 1) = ((MR_Box) (check_hlds__purity__TermVar_105));
#line 914 "purity.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 2) = ((MR_Box) ((MR_Integer) 3));
#line 914 "purity.m"
                                      }
#line 915 "purity.m"
                                      {
#line 915 "purity.m"
                                        MR_Word base;
#line 915 "purity.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 915 "purity.m"
                                        *check_hlds__purity__GoalExpr_9 = base;
#line 915 "purity.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 915 "purity.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason_123));
#line 915 "purity.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_310));
#line 915 "purity.m"
                                      }
#line 909 "purity.m"
                                    }
#line 908 "purity.m"
                                  else
#line 907 "purity.m"
                                    {
#line 907 "purity.m"
                                      MR_Word base;
#line 907 "purity.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 907 "purity.m"
                                      *check_hlds__purity__GoalExpr_9 = base;
#line 907 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 907 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 907 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_310));
#line 907 "purity.m"
                                    }
#line 900 "purity.m"
                                }
#line 842 "purity.m"
                            }
#line 841 "purity.m"
                          else
#line 841 "purity.m"
                            if (((((MR_tag((MR_Word) check_hlds__purity__Reason0_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 938 "purity.m"
                              {
#line 939 "purity.m"
                                {
#line 939 "purity.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "loop_control");
#line 939 "purity.m"
                                  return;
                                }
#line 938 "purity.m"
                              }
#line 841 "purity.m"
                            else
#line 841 "purity.m"
                              if (((((MR_tag((MR_Word) check_hlds__purity__Reason0_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 930 "purity.m"
                                {
#line 930 "purity.m"
                                  MR_Word check_hlds__purity__SubGoal_314;
#line 931 "purity.m"
                                  MR_Word check_hlds__purity___SubPurity_136;
#line 931 "purity.m"
                                  MR_Word check_hlds__purity__V_137_137;

#line 931 "purity.m"
                                  {
#line 931 "purity.m"
                                    check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_314, &check_hlds__purity___SubPurity_136, &check_hlds__purity__V_137_137, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                                  }
#line 932 "purity.m"
                                  {
#line 932 "purity.m"
                                    MR_Word base;
#line 932 "purity.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 932 "purity.m"
                                    *check_hlds__purity__GoalExpr_9 = base;
#line 932 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 932 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 932 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_314));
#line 932 "purity.m"
                                  }
#line 933 "purity.m"
                                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 934 "purity.m"
                                  *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 930 "purity.m"
                                }
#line 841 "purity.m"
                              else
#line 925 "purity.m"
                                {
#line 925 "purity.m"
                                  MR_Word check_hlds__purity__SubGoal_313;

#line 926 "purity.m"
                                  {
#line 926 "purity.m"
                                    check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_313, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                                  }
#line 928 "purity.m"
                                  {
#line 928 "purity.m"
                                    MR_Word base;
#line 928 "purity.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 928 "purity.m"
                                    *check_hlds__purity__GoalExpr_9 = base;
#line 928 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 928 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 928 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_313));
#line 928 "purity.m"
                                  }
#line 925 "purity.m"
                                }
#line 835 "purity.m"
                      }
#line 672 "purity.m"
                    else
#line 672 "purity.m"
                      if (((((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 965 "purity.m"
                        {
#line 965 "purity.m"
                          MR_Word check_hlds__purity__ShortHand0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));

#line 1024 "purity.m"
                          if (((MR_tag((MR_Word) check_hlds__purity__ShortHand0_162)) == (MR_mktag((MR_Integer) 1))))
#line 968 "purity.m"
                            {
#line 968 "purity.m"
                              MR_Word check_hlds__purity__GoalType_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_162, (MR_Integer) 0)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__Outer_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_162, (MR_Integer) 1)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__Inner_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_162, (MR_Integer) 2)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__MaybeOutputVars_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_162, (MR_Integer) 3)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__MainGoal0_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_162, (MR_Integer) 4)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__OrElseGoals0_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_162, (MR_Integer) 5)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__OrElseInners_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_162, (MR_Integer) 6)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__MainGoal1_179;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__OrElseGoals1_180;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__MainGoal_183;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__OrElseGoals_184;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__ShortHand_185;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__STATE_VARIABLE_Info_206_206;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__STATE_VARIABLE_Info_207_207;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__RunPostTypecheck_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 1)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__Purity1_325;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__ContainsTrace1_326;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__Purity2_327;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__ContainsTrace2_328;
#line 968 "purity.m"
                              MR_Word check_hlds__purity__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 3)));
#line 968 "purity.m"
                              MR_Word check_hlds__purity__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 4)));
#line 969 "purity.m"
                              MR_Word check_hlds__purity__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 0)));
#line 969 "purity.m"
                              MR_Word check_hlds__purity__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 2)));
#line 969 "purity.m"
                              MR_Word check_hlds__purity__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 5)));
#line 969 "purity.m"
                              MR_Word check_hlds__purity__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 6)));
#line 969 "purity.m"
                              MR_Word check_hlds__purity__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_190, (MR_Integer) 7)));

#line 1001 "purity.m"
                              if ((check_hlds__purity__RunPostTypecheck_321 == (MR_Integer) 1))
#line 1002 "purity.m"
                                {
#line 1003 "purity.m"
                                  check_hlds__purity__MainGoal1_179 = check_hlds__purity__MainGoal0_167;
#line 1004 "purity.m"
                                  check_hlds__purity__OrElseGoals1_180 = check_hlds__purity__OrElseGoals0_168;
#line 1004 "purity.m"
                                  check_hlds__purity__STATE_VARIABLE_Info_206_206 = check_hlds__purity__STATE_VARIABLE_Info_0_190;
#line 1002 "purity.m"
                                }
#line 1001 "purity.m"
                              else
#line 971 "purity.m"
                                {
#line 971 "purity.m"
                                  MR_Word check_hlds__purity__TypeCtorInfo_496_496;
#line 971 "purity.m"
                                  MR_Word check_hlds__purity__OuterDI_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_164, (MR_Integer) 0)));
#line 971 "purity.m"
                                  MR_Word check_hlds__purity__OuterUO_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_164, (MR_Integer) 1)));
#line 971 "purity.m"
                                  MR_Word check_hlds__purity__OuterDITypeSpecs_173;
#line 971 "purity.m"
                                  MR_Word check_hlds__purity__OuterUOTypeSpecs_175;
#line 971 "purity.m"
                                  MR_Word check_hlds__purity__OuterTypeSpecs_176;
#line 971 "purity.m"
                                  MR_Word check_hlds__purity__Context_315;
#line 976 "purity.m"
                                  MR_Word check_hlds__purity___OuterDIType_172;
#line 978 "purity.m"
                                  MR_Word check_hlds__purity___OuterUOType_174;

#line 975 "purity.m"
                                  {
#line 975 "purity.m"
                                    check_hlds__purity__Context_315 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
                                  }
#line 976 "purity.m"
                                  {
#line 976 "purity.m"
                                    check_hlds__purity__check_outer_var_type_6_p_0(check_hlds__purity__Context_315, check_hlds__purity__V_464_464, check_hlds__purity__V_465_465, check_hlds__purity__OuterDI_170, &check_hlds__purity___OuterDIType_172, &check_hlds__purity__OuterDITypeSpecs_173);
                                  }
#line 978 "purity.m"
                                  {
#line 978 "purity.m"
                                    check_hlds__purity__check_outer_var_type_6_p_0(check_hlds__purity__Context_315, check_hlds__purity__V_464_464, check_hlds__purity__V_465_465, check_hlds__purity__OuterUO_171, &check_hlds__purity___OuterUOType_174, &check_hlds__purity__OuterUOTypeSpecs_175);
                                  }
#line 8068 "check_hlds.purity.c"
                                  check_hlds__purity__TypeCtorInfo_496_496 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 980 "purity.m"
                                  {
#line 980 "purity.m"
                                    check_hlds__purity__OuterTypeSpecs_176 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_496_496, check_hlds__purity__OuterDITypeSpecs_173, check_hlds__purity__OuterUOTypeSpecs_175);
                                  }
#line 986 "purity.m"
                                  if ((check_hlds__purity__OuterTypeSpecs_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "purity.m"
                                    {
#line 987 "purity.m"
                                      MR_Word check_hlds__purity__TypeCtorInfo_501_501 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 987 "purity.m"
                                      MR_Word check_hlds__purity__AtomicGoalsAndInners_181;
#line 987 "purity.m"
                                      MR_Word check_hlds__purity__AllAtomicGoals1_182;
#line 987 "purity.m"
                                      MR_Word check_hlds__purity__V_196_196;
#line 987 "purity.m"
                                      MR_Word check_hlds__purity__V_197_197;
#line 987 "purity.m"
                                      MR_Word check_hlds__purity__V_198_198;
#line 987 "purity.m"
                                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_199_199;
#line 991 "purity.m"
                                      MR_Box check_hlds__purity__conv3_STATE_VARIABLE_Info_199_199;
#line 999 "purity.m"
                                      MR_Word check_hlds__purity__V_483_483;
#line 999 "purity.m"
                                      MR_Word check_hlds__purity__V_484_484;
#line 999 "purity.m"
                                      MR_Word check_hlds__purity__V_485_485;
#line 999 "purity.m"
                                      MR_Word check_hlds__purity__V_486_486;
#line 999 "purity.m"
                                      MR_Word check_hlds__purity__V_487_487;
#line 999 "purity.m"
                                      MR_Word check_hlds__purity__V_488_488;
#line 999 "purity.m"
                                      MR_Word check_hlds__purity__V_490_490;
#line 999 "purity.m"
                                      MR_Word check_hlds__purity__V_489_489;

#line 988 "purity.m"
                                      {
#line 988 "purity.m"
                                        check_hlds__purity__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 988 "purity.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__purity__V_196_196, 0) = ((MR_Box) (check_hlds__purity__MainGoal0_167));
#line 988 "purity.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__purity__V_196_196, 1) = ((MR_Box) (check_hlds__purity__OrElseGoals0_168));
#line 988 "purity.m"
                                      }
#line 988 "purity.m"
                                      {
#line 988 "purity.m"
                                        check_hlds__purity__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 988 "purity.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__purity__V_197_197, 0) = ((MR_Box) (check_hlds__purity__Inner_165));
#line 988 "purity.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__purity__V_197_197, 1) = ((MR_Box) (check_hlds__purity__OrElseInners_169));
#line 988 "purity.m"
                                      }
#line 988 "purity.m"
                                      {
#line 988 "purity.m"
                                        check_hlds__purity__AtomicGoalsAndInners_181 = mercury__assoc_list__from_corresponding_lists_2_f_0(check_hlds__purity__TypeCtorInfo_501_501, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0, check_hlds__purity__V_196_196, check_hlds__purity__V_197_197);
                                      }
#line 991 "purity.m"
                                      {
#line 991 "purity.m"
                                        check_hlds__purity__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 991 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__V_198_198, 0) = ((MR_Box) (&check_hlds__purity_scalar_common_5[0]));
#line 991 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__V_198_198, 1) = ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_2));
#line 991 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__V_198_198, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 991 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__V_198_198, 3) = ((MR_Box) (check_hlds__purity__Outer_164));
#line 991 "purity.m"
                                      }
#line 991 "purity.m"
                                      {
#line 991 "purity.m"
                                        mercury__list__map_foldl_5_p_1((MR_Word) &check_hlds__purity_scalar_common_1[0], check_hlds__purity__TypeCtorInfo_501_501, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, check_hlds__purity__V_198_198, check_hlds__purity__AtomicGoalsAndInners_181, &check_hlds__purity__AllAtomicGoals1_182, ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Info_0_190)), &check_hlds__purity__conv3_STATE_VARIABLE_Info_199_199);
                                      }
#line 991 "purity.m"
                                      check_hlds__purity__STATE_VARIABLE_Info_199_199 = ((MR_Word) check_hlds__purity__conv3_STATE_VARIABLE_Info_199_199);
#line 995 "purity.m"
                                      if ((check_hlds__purity__AllAtomicGoals1_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "purity.m"
                                        {
#line 997 "purity.m"
                                          {
#line 997 "purity.m"
                                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "AllAtomicGoals1 = []");
#line 997 "purity.m"
                                            return;
                                          }
#line 996 "purity.m"
                                        }
#line 995 "purity.m"
                                      else
#line 994 "purity.m"
                                        {
#line 994 "purity.m"
                                          check_hlds__purity__MainGoal1_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__AllAtomicGoals1_182, (MR_Integer) 0)));
#line 994 "purity.m"
                                          check_hlds__purity__OrElseGoals1_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__AllAtomicGoals1_182, (MR_Integer) 1)));
#line 994 "purity.m"
                                        }
#line 999 "purity.m"
                                      check_hlds__purity__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_199_199, (MR_Integer) 0)));
#line 999 "purity.m"
                                      check_hlds__purity__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_199_199, (MR_Integer) 1)));
#line 999 "purity.m"
                                      check_hlds__purity__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_199_199, (MR_Integer) 2)));
#line 999 "purity.m"
                                      check_hlds__purity__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_199_199, (MR_Integer) 3)));
#line 999 "purity.m"
                                      check_hlds__purity__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_199_199, (MR_Integer) 4)));
#line 999 "purity.m"
                                      check_hlds__purity__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_199_199, (MR_Integer) 5)));
#line 999 "purity.m"
                                      check_hlds__purity__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_199_199, (MR_Integer) 6)));
#line 999 "purity.m"
                                      check_hlds__purity__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_199_199, (MR_Integer) 7)));
#line 999 "purity.m"
                                      {
#line 999 "purity.m"
                                        check_hlds__purity__STATE_VARIABLE_Info_206_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 999 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_206_206, 0) = ((MR_Box) (check_hlds__purity__V_483_483));
#line 999 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_206_206, 1) = ((MR_Box) (check_hlds__purity__V_484_484));
#line 999 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_206_206, 2) = ((MR_Box) (check_hlds__purity__V_485_485));
#line 999 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_206_206, 3) = ((MR_Box) (check_hlds__purity__V_486_486));
#line 999 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_206_206, 4) = ((MR_Box) (check_hlds__purity__V_487_487));
#line 999 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_206_206, 5) = ((MR_Box) (check_hlds__purity__V_488_488));
#line 999 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_206_206, 6) = ((MR_Box) ((MR_Integer) 0));
#line 999 "purity.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_206_206, 7) = ((MR_Box) (check_hlds__purity__V_490_490));
#line 999 "purity.m"
                                      }
#line 987 "purity.m"
                                    }
#line 986 "purity.m"
                                  else
#line 982 "purity.m"
                                    {
#line 983 "purity.m"
                                      MR_Box check_hlds__purity__conv5_STATE_VARIABLE_Info_206_206;

#line 983 "purity.m"
                                      {
#line 983 "purity.m"
                                        mercury__list__foldl_4_p_0(check_hlds__purity__TypeCtorInfo_496_496, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, (MR_Word) &check_hlds__purity_scalar_common_1[2], check_hlds__purity__OuterTypeSpecs_176, ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Info_0_190)), &check_hlds__purity__conv5_STATE_VARIABLE_Info_206_206);
                                      }
#line 983 "purity.m"
                                      check_hlds__purity__STATE_VARIABLE_Info_206_206 = ((MR_Word) check_hlds__purity__conv5_STATE_VARIABLE_Info_206_206);
#line 984 "purity.m"
                                      check_hlds__purity__MainGoal1_179 = check_hlds__purity__MainGoal0_167;
#line 985 "purity.m"
                                      check_hlds__purity__OrElseGoals1_180 = check_hlds__purity__OrElseGoals0_168;
#line 982 "purity.m"
                                    }
#line 971 "purity.m"
                                }
#line 1006 "purity.m"
                              {
#line 1006 "purity.m"
                                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__MainGoal1_179, &check_hlds__purity__MainGoal_183, &check_hlds__purity__Purity1_325, &check_hlds__purity__ContainsTrace1_326, check_hlds__purity__STATE_VARIABLE_Info_206_206, &check_hlds__purity__STATE_VARIABLE_Info_207_207);
                              }
#line 1008 "purity.m"
                              {
#line 1008 "purity.m"
                                check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__OrElseGoals1_180, &check_hlds__purity__OrElseGoals_184, (MR_Integer) 0, &check_hlds__purity__Purity2_327, (MR_Integer) 1, &check_hlds__purity__ContainsTrace2_328, check_hlds__purity__STATE_VARIABLE_Info_207_207, check_hlds__purity__STATE_VARIABLE_Info_191);
                              }
#line 1011 "purity.m"
                              {
#line 1011 "purity.m"
                                *check_hlds__purity__Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity1_325, check_hlds__purity__Purity2_327);
                              }
#line 1013 "purity.m"
                              check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace1_326 == (MR_Integer) 0);
#line 1014 "purity.m"
                              if (!(check_hlds__purity__succeeded))
#line 1014 "purity.m"
                                check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace2_328 == (MR_Integer) 0);
#line 1018 "purity.m"
                              if (check_hlds__purity__succeeded)
#line 1017 "purity.m"
                                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 1018 "purity.m"
                              else
#line 1019 "purity.m"
                                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 1021 "purity.m"
                              {
#line 1021 "purity.m"
                                check_hlds__purity__ShortHand_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_185, 0) = ((MR_Box) (check_hlds__purity__GoalType_163));
#line 1021 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_185, 1) = ((MR_Box) (check_hlds__purity__Outer_164));
#line 1021 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_185, 2) = ((MR_Box) (check_hlds__purity__Inner_165));
#line 1021 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_185, 3) = ((MR_Box) (check_hlds__purity__MaybeOutputVars_166));
#line 1021 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_185, 4) = ((MR_Box) (check_hlds__purity__MainGoal_183));
#line 1021 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_185, 5) = ((MR_Box) (check_hlds__purity__OrElseGoals_184));
#line 1021 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_185, 6) = ((MR_Box) (check_hlds__purity__OrElseInners_169));
#line 1021 "purity.m"
                              }
#line 1023 "purity.m"
                              {
#line 1023 "purity.m"
                                MR_Word base;
#line 1023 "purity.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "purity.m"
                                *check_hlds__purity__GoalExpr_9 = base;
#line 1023 "purity.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1023 "purity.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ShortHand_185));
#line 1023 "purity.m"
                              }
#line 968 "purity.m"
                            }
#line 1024 "purity.m"
                          else
#line 1024 "purity.m"
                            if (((MR_tag((MR_Word) check_hlds__purity__ShortHand0_162)) == (MR_mktag((MR_Integer) 0))))
#line 1031 "purity.m"
                              {
#line 1033 "purity.m"
                                {
#line 1033 "purity.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "bi_implication");
#line 1033 "purity.m"
                                  return;
                                }
#line 1031 "purity.m"
                              }
#line 1024 "purity.m"
                            else
#line 1025 "purity.m"
                              {
#line 1025 "purity.m"
                                MR_Word check_hlds__purity__MaybeIO_186 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_162, (MR_Integer) 0)));
#line 1025 "purity.m"
                                MR_Word check_hlds__purity__ResultVar_187 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_162, (MR_Integer) 1)));
#line 1025 "purity.m"
                                MR_Word check_hlds__purity__SubGoal0_329 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_162, (MR_Integer) 2)));
#line 1025 "purity.m"
                                MR_Word check_hlds__purity__SubGoal_330;
#line 1025 "purity.m"
                                MR_Word check_hlds__purity__ShortHand_331;

#line 1026 "purity.m"
                                {
#line 1026 "purity.m"
                                  check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_329, &check_hlds__purity__SubGoal_330, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                                }
#line 1028 "purity.m"
                                {
#line 1028 "purity.m"
                                  check_hlds__purity__ShortHand_331 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "purity.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_331, 0) = ((MR_Box) (check_hlds__purity__MaybeIO_186));
#line 1028 "purity.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_331, 1) = ((MR_Box) (check_hlds__purity__ResultVar_187));
#line 1028 "purity.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_331, 2) = ((MR_Box) (check_hlds__purity__SubGoal_330));
#line 1028 "purity.m"
                                }
#line 1029 "purity.m"
                                {
#line 1029 "purity.m"
                                  MR_Word base;
#line 1029 "purity.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "purity.m"
                                  *check_hlds__purity__GoalExpr_9 = base;
#line 1029 "purity.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1029 "purity.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ShortHand_331));
#line 1029 "purity.m"
                                }
#line 1025 "purity.m"
                              }
#line 965 "purity.m"
                        }
#line 672 "purity.m"
                      else
#line 735 "purity.m"
                        {
#line 735 "purity.m"
                          MR_Word check_hlds__purity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 735 "purity.m"
                          MR_Word check_hlds__purity__Canfail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 735 "purity.m"
                          MR_Word check_hlds__purity__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 735 "purity.m"
                          MR_Word check_hlds__purity__Cases_50;

#line 736 "purity.m"
                          {
#line 736 "purity.m"
                            check_hlds__purity__compute_cases_purity_8_p_0(check_hlds__purity__Cases0_49, &check_hlds__purity__Cases_50, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_190, check_hlds__purity__STATE_VARIABLE_Info_191);
                          }
#line 738 "purity.m"
                          {
#line 738 "purity.m"
                            MR_Word base;
#line 738 "purity.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 738 "purity.m"
                            *check_hlds__purity__GoalExpr_9 = base;
#line 738 "purity.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 738 "purity.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Var_47));
#line 738 "purity.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Canfail_48));
#line 738 "purity.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__Cases_50));
#line 738 "purity.m"
                          }
#line 735 "purity.m"
                        }
#line 672 "purity.m"
  }
#line 665 "purity.m"
}

#line 639 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
#line 639 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 639 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 639 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 639 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 639 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 639 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 639 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 639 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 639 "purity.m"
{
#line 643 "purity.m"
  {
#line 643 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 643 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "purity.m"
      {
#line 643 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 643 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 643 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 643 "purity.m"
      }
#line 643 "purity.m"
    else
#line 645 "purity.m"
      {
#line 645 "purity.m"
        MR_Word check_hlds__purity__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 645 "purity.m"
        MR_Word check_hlds__purity__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "purity.m"
        MR_Word check_hlds__purity__Goal_20;
#line 645 "purity.m"
        MR_Word check_hlds__purity__Goals_21;
#line 645 "purity.m"
        MR_Word check_hlds__purity__GoalPurity_25;
#line 645 "purity.m"
        MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 645 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 645 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_38_38;
#line 645 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_39_39;
#line 645 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;

#line 646 "purity.m"
        {
#line 646 "purity.m"
          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_18, &check_hlds__purity__Goal_20, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
        }
#line 651 "purity.m"
        if ((check_hlds__purity__GoalPurity_25 == (MR_Integer) 2))
#line 652 "purity.m"
          {
#line 652 "purity.m"
            MR_Word check_hlds__purity__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
#line 652 "purity.m"
            MR_Word check_hlds__purity__Context_29;
#line 652 "purity.m"
            MR_Word check_hlds__purity__Spec_30;
#line 652 "purity.m"
            MR_String check_hlds__purity__PurityName_47;
#line 652 "purity.m"
            MR_Word check_hlds__purity__Pieces_48;
#line 652 "purity.m"
            MR_Word check_hlds__purity__Msg_49;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_52_52;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_53_53;
#line 652 "purity.m"
            MR_String check_hlds__purity__V_54_54;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_60_60;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_61_61;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_65_65;
#line 652 "purity.m"
            MR_Word check_hlds__purity__Msgs0_71;
#line 652 "purity.m"
            MR_Word check_hlds__purity__Msgs_72;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_74_74;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_75_75;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_76_76;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_77_77;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_78_78;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_79_79;
#line 652 "purity.m"
            MR_Word check_hlds__purity__V_80_80;
#line 653 "purity.m"
            MR_Word check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));

#line 654 "purity.m"
            {
#line 654 "purity.m"
              check_hlds__purity__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_28);
            }
#line 1546 "purity.m"
            {
#line 1546 "purity.m"
              parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__GoalPurity_25, &check_hlds__purity__PurityName_47);
            }
#line 1548 "purity.m"
            {
#line 1548 "purity.m"
              check_hlds__purity__V_54_54 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_47, (MR_String) ",");
            }
#line 1548 "purity.m"
            {
#line 1548 "purity.m"
              check_hlds__purity__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_53_53, 0) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1548 "purity.m"
            }
#line 1547 "purity.m"
            {
#line 1547 "purity.m"
              check_hlds__purity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 0) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1547 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[28])));
#line 1547 "purity.m"
            }
#line 1547 "purity.m"
            {
#line 1547 "purity.m"
              check_hlds__purity__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[26])));
#line 1547 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 1) = ((MR_Box) (check_hlds__purity__V_52_52));
#line 1547 "purity.m"
            }
#line 1550 "purity.m"
            {
#line 1550 "purity.m"
              check_hlds__purity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__Pieces_48));
#line 1550 "purity.m"
            }
#line 1550 "purity.m"
            {
#line 1550 "purity.m"
              check_hlds__purity__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 0) = ((MR_Box) (check_hlds__purity__V_61_61));
#line 1550 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1550 "purity.m"
            }
#line 1550 "purity.m"
            {
#line 1550 "purity.m"
              check_hlds__purity__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 0) = ((MR_Box) (check_hlds__purity__Context_29));
#line 1550 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 1) = ((MR_Box) (check_hlds__purity__V_60_60));
#line 1550 "purity.m"
            }
#line 1551 "purity.m"
            {
#line 1551 "purity.m"
              check_hlds__purity__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 0) = ((MR_Box) (check_hlds__purity__Msg_49));
#line 1551 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1551 "purity.m"
            }
#line 1551 "purity.m"
            {
#line 1551 "purity.m"
              check_hlds__purity__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1551 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1551 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1551 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 2) = ((MR_Box) (check_hlds__purity__V_65_65));
#line 1551 "purity.m"
            }
#line 1599 "purity.m"
            check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
#line 1599 "purity.m"
            check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
#line 1599 "purity.m"
            check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
#line 1599 "purity.m"
            check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
#line 1599 "purity.m"
            check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
#line 1599 "purity.m"
            check_hlds__purity__Msgs0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
#line 1599 "purity.m"
            check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
#line 1599 "purity.m"
            check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 7)));
#line 1600 "purity.m"
            {
#line 1600 "purity.m"
              check_hlds__purity__Msgs_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 0) = ((MR_Box) (check_hlds__purity__Spec_30));
#line 1600 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 1) = ((MR_Box) (check_hlds__purity__Msgs0_71));
#line 1600 "purity.m"
            }
#line 1601 "purity.m"
            {
#line 1601 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1601 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1601 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (check_hlds__purity__V_76_76));
#line 1601 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (check_hlds__purity__V_77_77));
#line 1601 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (check_hlds__purity__V_78_78));
#line 1601 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (check_hlds__purity__Msgs_72));
#line 1601 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) (check_hlds__purity__V_79_79));
#line 1601 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (check_hlds__purity__V_80_80));
#line 1601 "purity.m"
            }
#line 652 "purity.m"
          }
#line 651 "purity.m"
        else
#line 651 "purity.m"
          if ((check_hlds__purity__GoalPurity_25 == (MR_Integer) 0))
#line 648 "purity.m"
            check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 651 "purity.m"
          else
#line 649 "purity.m"
            check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 658 "purity.m"
        {
#line 658 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
#line 659 "purity.m"
        {
#line 659 "purity.m"
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
#line 660 "purity.m"
        {
#line 660 "purity.m"
          check_hlds__purity__compute_parallel_goals_purity_8_p_0(check_hlds__purity__Goals0_19, &check_hlds__purity__Goals_21, check_hlds__purity__STATE_VARIABLE_Purity_39_39, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_38_38, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
#line 645 "purity.m"
        {
#line 645 "purity.m"
          MR_Word base;
#line 645 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 645 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Goal_20));
#line 645 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__Goals_21));
#line 645 "purity.m"
        }
#line 645 "purity.m"
      }
#line 643 "purity.m"
  }
#line 639 "purity.m"
}

#line 625 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_cases_purity_8_p_0(
#line 625 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 625 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 625 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 625 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 625 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 625 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 625 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 625 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 625 "purity.m"
{
#line 629 "purity.m"
  {
#line 629 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 629 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "purity.m"
      {
#line 629 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 629 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 629 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 629 "purity.m"
      }
#line 629 "purity.m"
    else
#line 631 "purity.m"
      {
#line 631 "purity.m"
        MR_Word check_hlds__purity__Case0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 631 "purity.m"
        MR_Word check_hlds__purity__Cases0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 631 "purity.m"
        MR_Word check_hlds__purity__Case_20;
#line 631 "purity.m"
        MR_Word check_hlds__purity__Cases_21;
#line 631 "purity.m"
        MR_Word check_hlds__purity__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 0)));
#line 631 "purity.m"
        MR_Word check_hlds__purity__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 1)));
#line 631 "purity.m"
        MR_Word check_hlds__purity__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 2)));
#line 631 "purity.m"
        MR_Word check_hlds__purity__Goal_28;
#line 631 "purity.m"
        MR_Word check_hlds__purity__GoalPurity_29;
#line 631 "purity.m"
        MR_Word check_hlds__purity__GoalContainsTrace_30;
#line 631 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 631 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_38_38;
#line 631 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39;

#line 633 "purity.m"
        {
#line 633 "purity.m"
          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_27, &check_hlds__purity__Goal_28, &check_hlds__purity__GoalPurity_29, &check_hlds__purity__GoalContainsTrace_30, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
        }
#line 634 "purity.m"
        {
#line 634 "purity.m"
          check_hlds__purity__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 634 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 0) = ((MR_Box) (check_hlds__purity__MainConsId_25));
#line 634 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 1) = ((MR_Box) (check_hlds__purity__OtherConsIds_26));
#line 634 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 2) = ((MR_Box) (check_hlds__purity__Goal_28));
#line 634 "purity.m"
        }
#line 635 "purity.m"
        {
#line 635 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_38_38 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_29, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
#line 636 "purity.m"
        {
#line 636 "purity.m"
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_30, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
#line 637 "purity.m"
        {
#line 637 "purity.m"
          check_hlds__purity__compute_cases_purity_8_p_0(check_hlds__purity__Cases0_19, &check_hlds__purity__Cases_21, check_hlds__purity__STATE_VARIABLE_Purity_38_38, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_37_37, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
#line 631 "purity.m"
        {
#line 631 "purity.m"
          MR_Word base;
#line 631 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 631 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Case_20));
#line 631 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__Cases_21));
#line 631 "purity.m"
        }
#line 631 "purity.m"
      }
#line 629 "purity.m"
  }
#line 625 "purity.m"
}

#line 613 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
#line 613 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 613 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 613 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 613 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 613 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 613 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 613 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 613 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 613 "purity.m"
{
#line 617 "purity.m"
  {
#line 617 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 617 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "purity.m"
      {
#line 617 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 617 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 617 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 617 "purity.m"
      }
#line 617 "purity.m"
    else
#line 619 "purity.m"
      {
#line 619 "purity.m"
        MR_Word check_hlds__purity__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 619 "purity.m"
        MR_Word check_hlds__purity__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 619 "purity.m"
        MR_Word check_hlds__purity__Goal_20;
#line 619 "purity.m"
        MR_Word check_hlds__purity__Goals_21;
#line 619 "purity.m"
        MR_Word check_hlds__purity__GoalPurity_25;
#line 619 "purity.m"
        MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 619 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_33_33;
#line 619 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_34_34;
#line 619 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_35_35;

#line 620 "purity.m"
        {
#line 620 "purity.m"
          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_18, &check_hlds__purity__Goal_20, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_33_33);
        }
#line 621 "purity.m"
        {
#line 621 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_34_34 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
#line 622 "purity.m"
        {
#line 622 "purity.m"
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_35_35 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
#line 623 "purity.m"
        {
#line 623 "purity.m"
          check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__Goals0_19, &check_hlds__purity__Goals_21, check_hlds__purity__STATE_VARIABLE_Purity_34_34, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_35_35, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_33_33, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
#line 619 "purity.m"
        {
#line 619 "purity.m"
          MR_Word base;
#line 619 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 619 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Goal_20));
#line 619 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__Goals_21));
#line 619 "purity.m"
        }
#line 619 "purity.m"
      }
#line 617 "purity.m"
  }
#line 613 "purity.m"
}

#line 596 "purity.m"
static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
#line 596 "purity.m"
  MR_Word check_hlds__purity__Purity_5,
#line 596 "purity.m"
  MR_Word check_hlds__purity__ContainsTrace_6,
#line 596 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8,
#line 596 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_GoalInfo_9)
#line 596 "purity.m"
{
#line 599 "purity.m"
  {
#line 599 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 599 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10;

#line 600 "purity.m"
    {
#line 600 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__Purity_5, check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10);
    }
#line 604 "purity.m"
    if ((check_hlds__purity__ContainsTrace_6 == (MR_Integer) 1))
#line 605 "purity.m"
      {
#line 606 "purity.m"
        {
#line 606 "purity.m"
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10, check_hlds__purity__STATE_VARIABLE_GoalInfo_9);
#line 606 "purity.m"
          return;
        }
#line 605 "purity.m"
      }
#line 604 "purity.m"
    else
#line 602 "purity.m"
      {
#line 603 "purity.m"
        {
#line 603 "purity.m"
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10, check_hlds__purity__STATE_VARIABLE_GoalInfo_9);
#line 603 "purity.m"
          return;
        }
#line 602 "purity.m"
      }
#line 599 "purity.m"
  }
#line 596 "purity.m"
}

#line 586 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
#line 586 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 586 "purity.m"
  MR_Word * check_hlds__purity__Goal_8,
#line 586 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 586 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 586 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 586 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17)
#line 586 "purity.m"
{
#line 589 "purity.m"
  {
#line 589 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 589 "purity.m"
    MR_Word check_hlds__purity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
#line 589 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
#line 589 "purity.m"
    MR_Word check_hlds__purity__GoalExpr_14;
#line 589 "purity.m"
    MR_Word check_hlds__purity__GoalInfo_15;
#line 589 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24;

#line 591 "purity.m"
    {
#line 591 "purity.m"
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_12, &check_hlds__purity__GoalExpr_14, check_hlds__purity__GoalInfo0_13, check_hlds__purity__Purity_9, check_hlds__purity__ContainsTrace_10, check_hlds__purity__STATE_VARIABLE_Info_0_16, check_hlds__purity__STATE_VARIABLE_Info_17);
    }
#line 600 "purity.m"
    {
#line 600 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_9, check_hlds__purity__GoalInfo0_13, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24);
    }
#line 604 "purity.m"
    if ((*check_hlds__purity__ContainsTrace_10 == (MR_Integer) 1))
#line 605 "purity.m"
      {
#line 606 "purity.m"
        {
#line 606 "purity.m"
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
        }
#line 605 "purity.m"
      }
#line 604 "purity.m"
    else
#line 602 "purity.m"
      {
#line 603 "purity.m"
        {
#line 603 "purity.m"
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
        }
#line 602 "purity.m"
      }
#line 594 "purity.m"
    {
#line 594 "purity.m"
      MR_Word base;
#line 594 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "purity.m"
      *check_hlds__purity__Goal_8 = base;
#line 594 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_14));
#line 594 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_15));
#line 594 "purity.m"
    }
#line 589 "purity.m"
  }
#line 586 "purity.m"
}

#line 570 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
#line 570 "purity.m"
  MR_Word check_hlds__purity__Clause_3,
#line 570 "purity.m"
  MR_Word check_hlds__purity__AllProcIds_4)
#line 570 "purity.m"
{
#line 572 "purity.m"
  {
#line 572 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 572 "purity.m"
    MR_Word check_hlds__purity__ApplicableProcIds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 0)));
#line 573 "purity.m"
    MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 1)));
#line 573 "purity.m"
    MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 2)));
#line 573 "purity.m"
    MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 3)));
#line 573 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 4)));

#line 576 "purity.m"
    if ((check_hlds__purity__ApplicableProcIds_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "purity.m"
      check_hlds__purity__succeeded = MR_TRUE;
#line 576 "purity.m"
    else
#line 577 "purity.m"
      {
#line 577 "purity.m"
        MR_Word check_hlds__purity__ClauseProcIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ApplicableProcIds_5, (MR_Integer) 0)));
#line 577 "purity.m"
        MR_Word check_hlds__purity__SortedClauseProcIds_7;

#line 580 "purity.m"
        {
#line 580 "purity.m"
          mercury__list__sort_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__purity__ClauseProcIds_6, &check_hlds__purity__SortedClauseProcIds_7);
        }
#line 581 "purity.m"
        {
#line 581 "purity.m"
          return check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__purity_scalar_common_2[2], ((MR_Box) (check_hlds__purity__SortedClauseProcIds_7)), ((MR_Box) (check_hlds__purity__AllProcIds_4)));
        }
#line 577 "purity.m"
      }
#line 572 "purity.m"
    return check_hlds__purity__succeeded;
#line 572 "purity.m"
  }
#line 570 "purity.m"
}

#line 512 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
#line 512 "purity.m"
  MR_Word check_hlds__purity__Clause0_7,
#line 512 "purity.m"
  MR_Word * check_hlds__purity__Clause_8,
#line 512 "purity.m"
  MR_Word check_hlds__purity__PredInfo_9,
#line 512 "purity.m"
  MR_Word * check_hlds__purity__Purity_10,
#line 512 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_35,
#line 512 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_36)
#line 512 "purity.m"
{
#line 515 "purity.m"
  {
#line 515 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 515 "purity.m"
    MR_Word check_hlds__purity__Goal0_12;
#line 515 "purity.m"
    MR_Word check_hlds__purity__GoalExpr0_13;
#line 515 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_14;
#line 515 "purity.m"
    MR_Word check_hlds__purity__GoalExpr1_15;
#line 515 "purity.m"
    MR_Word check_hlds__purity__BodyPurity0_16;
#line 515 "purity.m"
    MR_Word check_hlds__purity__ClausePurity_21;
#line 515 "purity.m"
    MR_Word check_hlds__purity__GoalInfo1_22;
#line 515 "purity.m"
    MR_Word check_hlds__purity__Goal1_23;
#line 515 "purity.m"
    MR_Word check_hlds__purity__NeedToRequantify_24;
#line 515 "purity.m"
    MR_Word check_hlds__purity__Goal_31;
#line 515 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 515 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_Info_39_39;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_45_45;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_48_48;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_49_49;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_50_50;
#line 519 "purity.m"
    MR_Word check_hlds__purity__V_17_17;
#line 548 "purity.m"
    MR_Word check_hlds__purity__V_52_52;
#line 548 "purity.m"
    MR_Word check_hlds__purity__V_53_53;
#line 548 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 548 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 548 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 548 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 548 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 568 "purity.m"
    MR_Word check_hlds__purity__V_89_89;
#line 568 "purity.m"
    MR_Word check_hlds__purity__V_91_91;
#line 568 "purity.m"
    MR_Word check_hlds__purity__V_92_92;
#line 568 "purity.m"
    MR_Word check_hlds__purity__V_93_93;
#line 568 "purity.m"
    MR_Word check_hlds__purity__V_90_90;

#line 516 "purity.m"
    {
#line 516 "purity.m"
      check_hlds__purity__Goal0_12 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__purity__Clause0_7);
    }
#line 517 "purity.m"
    check_hlds__purity__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_12, (MR_Integer) 0)));
#line 517 "purity.m"
    check_hlds__purity__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_12, (MR_Integer) 1)));
#line 518 "purity.m"
    check_hlds__purity__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 518 "purity.m"
    check_hlds__purity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 518 "purity.m"
    check_hlds__purity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 518 "purity.m"
    check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 518 "purity.m"
    check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 518 "purity.m"
    check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 518 "purity.m"
    check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 518 "purity.m"
    check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 518 "purity.m"
    {
#line 518 "purity.m"
      check_hlds__purity__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (check_hlds__purity__V_45_45));
#line 518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (check_hlds__purity__V_49_49));
#line 518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) ((MR_Integer) 1));
#line 518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 7) = ((MR_Box) (check_hlds__purity__V_51_51));
#line 518 "purity.m"
    }
#line 519 "purity.m"
    {
#line 519 "purity.m"
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_13, &check_hlds__purity__GoalExpr1_15, check_hlds__purity__GoalInfo0_14, &check_hlds__purity__BodyPurity0_16, &check_hlds__purity__V_17_17, check_hlds__purity__STATE_VARIABLE_Info_37_37, &check_hlds__purity__STATE_VARIABLE_Info_39_39);
    }
#line 531 "purity.m"
    {
#line 531 "purity.m"
      MR_Word check_hlds__purity__ProcIds_18;

#line 531 "purity.m"
      {
#line 531 "purity.m"
        check_hlds__purity__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__purity__PredInfo_9);
      }
#line 532 "purity.m"
      {
#line 532 "purity.m"
        check_hlds__purity__succeeded = check_hlds__purity__applies_to_all_modes_2_p_0(check_hlds__purity__Clause0_7, check_hlds__purity__ProcIds_18);
      }
#line 531 "purity.m"
    }
#line 533 "purity.m"
    if (!(check_hlds__purity__succeeded))
#line 533 "purity.m"
      {
#line 534 "purity.m"
        {
#line 534 "purity.m"
          MR_Word check_hlds__purity__Markers_19;

#line 534 "purity.m"
          {
#line 534 "purity.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__Markers_19);
          }
#line 535 "purity.m"
          {
#line 535 "purity.m"
            check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_19, (MR_Integer) 16);
          }
#line 534 "purity.m"
        }
#line 533 "purity.m"
        if (!(check_hlds__purity__succeeded))
#line 537 "purity.m"
          {
#line 537 "purity.m"
            MR_Word check_hlds__purity__GoalType_20;

#line 537 "purity.m"
            {
#line 537 "purity.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__GoalType_20);
            }
#line 538 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__GoalType_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 537 "purity.m"
          }
#line 533 "purity.m"
      }
#line 542 "purity.m"
    if (check_hlds__purity__succeeded)
#line 541 "purity.m"
      check_hlds__purity__ClausePurity_21 = (MR_Integer) 0;
#line 542 "purity.m"
    else
#line 543 "purity.m"
      check_hlds__purity__ClausePurity_21 = (MR_Integer) 2;
#line 545 "purity.m"
    {
#line 545 "purity.m"
      *check_hlds__purity__Purity_10 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__BodyPurity0_16, check_hlds__purity__ClausePurity_21);
    }
#line 546 "purity.m"
    {
#line 546 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_10, check_hlds__purity__GoalInfo0_14, &check_hlds__purity__GoalInfo1_22);
    }
#line 547 "purity.m"
    {
#line 547 "purity.m"
      check_hlds__purity__Goal1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_23, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_15));
#line 547 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_23, 1) = ((MR_Box) (check_hlds__purity__GoalInfo1_22));
#line 547 "purity.m"
    }
#line 548 "purity.m"
    check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 548 "purity.m"
    check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 548 "purity.m"
    check_hlds__purity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 548 "purity.m"
    check_hlds__purity__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 548 "purity.m"
    check_hlds__purity__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 548 "purity.m"
    check_hlds__purity__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 548 "purity.m"
    check_hlds__purity__NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 548 "purity.m"
    check_hlds__purity__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 564 "purity.m"
    if ((check_hlds__purity__NeedToRequantify_24 == (MR_Integer) 1))
#line 565 "purity.m"
      {
#line 566 "purity.m"
        check_hlds__purity__Goal_31 = check_hlds__purity__Goal1_23;
#line 566 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_36 = check_hlds__purity__STATE_VARIABLE_Info_39_39;
#line 565 "purity.m"
      }
#line 564 "purity.m"
    else
#line 550 "purity.m"
      {
#line 550 "purity.m"
        MR_Word check_hlds__purity__ClausesInfo_25;
#line 550 "purity.m"
        MR_Word check_hlds__purity__HeadVars_26;
#line 550 "purity.m"
        MR_Word check_hlds__purity__VarTypes1_27;
#line 550 "purity.m"
        MR_Word check_hlds__purity__VarSet1_28;
#line 550 "purity.m"
        MR_Word check_hlds__purity__EmptyRttiVarmaps_29;
#line 550 "purity.m"
        MR_Word check_hlds__purity__VarSet_32;
#line 550 "purity.m"
        MR_Word check_hlds__purity__VarTypes_33;
#line 550 "purity.m"
        MR_Word check_hlds__purity__V_73_73;
#line 550 "purity.m"
        MR_Word check_hlds__purity__V_74_74;
#line 550 "purity.m"
        MR_Word check_hlds__purity__V_75_75;
#line 550 "purity.m"
        MR_Word check_hlds__purity__V_78_78;
#line 550 "purity.m"
        MR_Word check_hlds__purity__V_79_79;
#line 550 "purity.m"
        MR_Word check_hlds__purity__V_80_80;
#line 553 "purity.m"
        MR_Word check_hlds__purity__V_59_59;
#line 553 "purity.m"
        MR_Word check_hlds__purity__V_60_60;
#line 553 "purity.m"
        MR_Word check_hlds__purity__V_61_61;
#line 553 "purity.m"
        MR_Word check_hlds__purity__V_63_63;
#line 553 "purity.m"
        MR_Word check_hlds__purity__V_64_64;
#line 553 "purity.m"
        MR_Word check_hlds__purity__V_65_65;
#line 558 "purity.m"
        MR_Word check_hlds__purity___Warnings_30;
#line 558 "purity.m"
        MR_Word check_hlds__purity__V_34_34;
#line 562 "purity.m"
        MR_Word check_hlds__purity__V_76_76;
#line 562 "purity.m"
        MR_Word check_hlds__purity__V_77_77;

#line 551 "purity.m"
        {
#line 551 "purity.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__ClausesInfo_25);
        }
#line 552 "purity.m"
        {
#line 552 "purity.m"
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__purity__ClausesInfo_25, &check_hlds__purity__HeadVars_26);
        }
#line 553 "purity.m"
        check_hlds__purity__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 553 "purity.m"
        check_hlds__purity__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 553 "purity.m"
        check_hlds__purity__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 553 "purity.m"
        check_hlds__purity__VarTypes1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 553 "purity.m"
        check_hlds__purity__VarSet1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 553 "purity.m"
        check_hlds__purity__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 553 "purity.m"
        check_hlds__purity__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 553 "purity.m"
        check_hlds__purity__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 557 "purity.m"
        {
#line 557 "purity.m"
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__purity__EmptyRttiVarmaps_29);
        }
#line 558 "purity.m"
        {
#line 558 "purity.m"
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__purity__HeadVars_26, &check_hlds__purity___Warnings_30, check_hlds__purity__Goal1_23, &check_hlds__purity__Goal_31, check_hlds__purity__VarSet1_28, &check_hlds__purity__VarSet_32, check_hlds__purity__VarTypes1_27, &check_hlds__purity__VarTypes_33, check_hlds__purity__EmptyRttiVarmaps_29, &check_hlds__purity__V_34_34);
        }
#line 562 "purity.m"
        check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 562 "purity.m"
        check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 562 "purity.m"
        check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 562 "purity.m"
        check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 562 "purity.m"
        check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 562 "purity.m"
        check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 562 "purity.m"
        check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 562 "purity.m"
        check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 563 "purity.m"
        {
#line 563 "purity.m"
          MR_Word base;
#line 563 "purity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 563 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_36 = base;
#line 563 "purity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_73_73));
#line 563 "purity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 563 "purity.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 563 "purity.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__VarTypes_33));
#line 563 "purity.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__VarSet_32));
#line 563 "purity.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__V_78_78));
#line 563 "purity.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_79_79));
#line 563 "purity.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_80_80));
#line 563 "purity.m"
        }
#line 550 "purity.m"
      }
#line 568 "purity.m"
    check_hlds__purity__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 0)));
#line 568 "purity.m"
    check_hlds__purity__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 1)));
#line 568 "purity.m"
    check_hlds__purity__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 2)));
#line 568 "purity.m"
    check_hlds__purity__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 3)));
#line 568 "purity.m"
    check_hlds__purity__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 4)));
#line 568 "purity.m"
    {
#line 568 "purity.m"
      MR_Word base;
#line 568 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 568 "purity.m"
      *check_hlds__purity__Clause_8 = base;
#line 568 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_89_89));
#line 568 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Goal_31));
#line 568 "purity.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_91_91));
#line 568 "purity.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_92_92));
#line 568 "purity.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_93_93));
#line 568 "purity.m"
    }
#line 515 "purity.m"
  }
#line 512 "purity.m"
}

#line 499 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
#line 499 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 499 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 499 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 499 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 499 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 499 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 499 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7)
#line 499 "purity.m"
{
#line 503 "purity.m"
  {
#line 503 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 503 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "purity.m"
      {
#line 503 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_7 = check_hlds__purity__STATE_VARIABLE_Info_0_6;
#line 503 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 503 "purity.m"
      }
#line 503 "purity.m"
    else
#line 505 "purity.m"
      {
#line 505 "purity.m"
        MR_Word check_hlds__purity__Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "purity.m"
        MR_Word check_hlds__purity__Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "purity.m"
        MR_Word check_hlds__purity__Clause_17;
#line 505 "purity.m"
        MR_Word check_hlds__purity__Clauses_18;
#line 505 "purity.m"
        MR_Word check_hlds__purity__ClausePurity_22;
#line 505 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_27_27;
#line 505 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_28_28;

#line 506 "purity.m"
        {
#line 506 "purity.m"
          check_hlds__purity__compute_purity_for_clause_6_p_0(check_hlds__purity__Clause0_15, &check_hlds__purity__Clause_17, check_hlds__purity__PredInfo_3, &check_hlds__purity__ClausePurity_22, check_hlds__purity__STATE_VARIABLE_Info_0_6, &check_hlds__purity__STATE_VARIABLE_Info_27_27);
        }
#line 507 "purity.m"
        {
#line 507 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__STATE_VARIABLE_Purity_0_4, check_hlds__purity__ClausePurity_22);
        }
#line 508 "purity.m"
        {
#line 508 "purity.m"
          check_hlds__purity__compute_purity_for_clauses_7_p_0(check_hlds__purity__Clauses0_16, &check_hlds__purity__Clauses_18, check_hlds__purity__PredInfo_3, check_hlds__purity__STATE_VARIABLE_Purity_28_28, check_hlds__purity__STATE_VARIABLE_Purity_5, check_hlds__purity__STATE_VARIABLE_Info_27_27, check_hlds__purity__STATE_VARIABLE_Info_7);
        }
#line 505 "purity.m"
        {
#line 505 "purity.m"
          MR_Word base;
#line 505 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 505 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Clause_17));
#line 505 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__Clauses_18));
#line 505 "purity.m"
        }
#line 505 "purity.m"
      }
#line 503 "purity.m"
  }
#line 499 "purity.m"
}

#line 338 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__workaround_gcc_bug_1_f_0(
#line 338 "purity.m"
  MR_Word check_hlds__purity__X_3)
#line 338 "purity.m"
{
#line 341 "purity.m"
  {
#line 341 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 341 "purity.m"
    MR_Word check_hlds__purity__X_2 = check_hlds__purity__X_3;

#line 341 "purity.m"
    return check_hlds__purity__X_2;
#line 341 "purity.m"
  }
#line 338 "purity.m"
}

#line 282 "purity.m"
static void MR_CALL 
check_hlds__purity__puritycheck_pred_6_p_0(
#line 282 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 282 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_35,
#line 282 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_36,
#line 282 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_9,
#line 282 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_37,
#line 282 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_38)
#line 282 "purity.m"
{
#line 285 "purity.m"
  {
#line 285 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 285 "purity.m"
    MR_Word check_hlds__purity__DeclPurity_11;
#line 285 "purity.m"
    MR_Word check_hlds__purity__PromisedPurity_12;
#line 285 "purity.m"
    MR_Word check_hlds__purity__Clauses0_14;
#line 285 "purity.m"
    MR_Word check_hlds__purity__ItemNumbers_15;
#line 285 "purity.m"
    MR_Word check_hlds__purity__VarTypes0_16;
#line 285 "purity.m"
    MR_Word check_hlds__purity__VarSet0_17;
#line 285 "purity.m"
    MR_Word check_hlds__purity__PurityInfo0_18;
#line 285 "purity.m"
    MR_Word check_hlds__purity__Clauses_19;
#line 285 "purity.m"
    MR_Word check_hlds__purity__PurityInfo_21;
#line 285 "purity.m"
    MR_Word check_hlds__purity__VarTypes_24;
#line 285 "purity.m"
    MR_Word check_hlds__purity__VarSet_25;
#line 285 "purity.m"
    MR_Word check_hlds__purity__GoalSpecs_26;
#line 285 "purity.m"
    MR_Word check_hlds__purity__ClausesRep_29;
#line 285 "purity.m"
    MR_Word check_hlds__purity__WorstPurity_30;
#line 285 "purity.m"
    MR_Word check_hlds__purity__PurityCheckResult0_31;
#line 285 "purity.m"
    MR_Word check_hlds__purity__PurityCheckResult_32;
#line 285 "purity.m"
    MR_Word check_hlds__purity__PredSpecs_34;
#line 285 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39;
#line 285 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40;
#line 285 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_46_46;
#line 285 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47;
#line 285 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48;
#line 285 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49;
#line 298 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 298 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 298 "purity.m"
    MR_Word check_hlds__purity__V_27_27;
#line 298 "purity.m"
    MR_Word check_hlds__purity__V_28_28;

#line 286 "purity.m"
    {
#line 286 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__DeclPurity_11);
    }
#line 287 "purity.m"
    {
#line 287 "purity.m"
      hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__PromisedPurity_12);
    }
#line 289 "purity.m"
    {
#line 289 "purity.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39);
    }
#line 290 "purity.m"
    {
#line 290 "purity.m"
      hlds__hlds_clauses__clauses_info_clauses_4_p_0(&check_hlds__purity__Clauses0_14, &check_hlds__purity__ItemNumbers_15, check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40);
    }
#line 291 "purity.m"
    {
#line 291 "purity.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__VarTypes0_16);
    }
#line 292 "purity.m"
    {
#line 292 "purity.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__VarSet0_17);
    }
#line 293 "purity.m"
    {
#line 293 "purity.m"
      check_hlds__purity__PurityInfo0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 293 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 0) = ((MR_Box) (check_hlds__purity__ModuleInfo_9));
#line 293 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 293 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 2) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_PredInfo_0_35));
#line 293 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 3) = ((MR_Box) (check_hlds__purity__VarTypes0_16));
#line 293 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 4) = ((MR_Box) (check_hlds__purity__VarSet0_17));
#line 293 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 6) = ((MR_Box) ((MR_Integer) 1));
#line 293 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 7) = ((MR_Box) ((MR_Integer) 0));
#line 293 "purity.m"
    }
#line 296 "purity.m"
    {
#line 296 "purity.m"
      check_hlds__purity__compute_purity_for_clauses_7_p_0(check_hlds__purity__Clauses0_14, &check_hlds__purity__Clauses_19, check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, (MR_Integer) 0, &check_hlds__purity__WorstPurity_30, check_hlds__purity__PurityInfo0_18, &check_hlds__purity__PurityInfo_21);
    }
#line 298 "purity.m"
    check_hlds__purity__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 0)));
#line 298 "purity.m"
    check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 1)));
#line 298 "purity.m"
    check_hlds__purity__STATE_VARIABLE_PredInfo_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 2)));
#line 298 "purity.m"
    check_hlds__purity__VarTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 3)));
#line 298 "purity.m"
    check_hlds__purity__VarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 4)));
#line 298 "purity.m"
    check_hlds__purity__GoalSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 5)));
#line 298 "purity.m"
    check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 6)));
#line 298 "purity.m"
    check_hlds__purity__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 7)));
#line 300 "purity.m"
    {
#line 300 "purity.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__purity__VarTypes_24, check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47);
    }
#line 301 "purity.m"
    {
#line 301 "purity.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__purity__VarSet_25, check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48);
    }
#line 302 "purity.m"
    {
#line 302 "purity.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__purity__Clauses_19, &check_hlds__purity__ClausesRep_29);
    }
#line 303 "purity.m"
    {
#line 303 "purity.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__purity__ClausesRep_29, check_hlds__purity__ItemNumbers_15, check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49);
    }
#line 304 "purity.m"
    {
#line 304 "purity.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49, check_hlds__purity__STATE_VARIABLE_PredInfo_46_46, check_hlds__purity__STATE_VARIABLE_PredInfo_36);
    }
#line 358 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__PromisedPurity_12 == (MR_Integer) 2);
#line 358 "purity.m"
    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 358 "purity.m"
    if (check_hlds__purity__succeeded)
#line 358 "purity.m"
      {
#line 359 "purity.m"
        check_hlds__purity__succeeded = (check_hlds__purity__DeclPurity_11 == check_hlds__purity__PromisedPurity_12);
#line 359 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 358 "purity.m"
      }
#line 362 "purity.m"
    if (check_hlds__purity__succeeded)
#line 361 "purity.m"
      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 2;
#line 362 "purity.m"
    else
#line 377 "purity.m"
      {
#line 366 "purity.m"
        MR_Word check_hlds__purity__Origin_61;

#line 366 "purity.m"
        check_hlds__purity__succeeded = (check_hlds__purity__PromisedPurity_12 == (MR_Integer) 2);
#line 366 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 366 "purity.m"
        if (check_hlds__purity__succeeded)
#line 366 "purity.m"
          {
#line 367 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__WorstPurity_30 == check_hlds__purity__PromisedPurity_12);
#line 366 "purity.m"
            if (check_hlds__purity__succeeded)
#line 366 "purity.m"
              {
#line 368 "purity.m"
                {
#line 368 "purity.m"
                  check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36);
                }
#line 368 "purity.m"
                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 366 "purity.m"
                if (check_hlds__purity__succeeded)
#line 366 "purity.m"
                  {
#line 369 "purity.m"
                    {
#line 369 "purity.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__Origin_61);
                    }
#line 372 "purity.m"
                    if (((MR_tag((MR_Word) check_hlds__purity__Origin_61)) == (MR_mktag((MR_Integer) 2))))
#line 371 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 372 "purity.m"
                    else
#line 372 "purity.m"
                      if (((((MR_tag((MR_Word) check_hlds__purity__Origin_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Origin_61, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 373 "purity.m"
                        check_hlds__purity__succeeded = MR_TRUE;
#line 372 "purity.m"
                      else
#line 372 "purity.m"
                        check_hlds__purity__succeeded = MR_FALSE;
#line 370 "purity.m"
                    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 366 "purity.m"
                  }
#line 366 "purity.m"
              }
#line 366 "purity.m"
          }
#line 377 "purity.m"
        if (check_hlds__purity__succeeded)
#line 376 "purity.m"
          check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 3;
#line 377 "purity.m"
        else
#line 382 "purity.m"
          {
#line 379 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__WorstPurity_30 == check_hlds__purity__DeclPurity_11);
#line 382 "purity.m"
            if (check_hlds__purity__succeeded)
#line 381 "purity.m"
              check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 382 "purity.m"
            else
#line 394 "purity.m"
              {
#line 383 "purity.m"
                {
#line 383 "purity.m"
                  check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__WorstPurity_30, check_hlds__purity__DeclPurity_11);
                }
#line 394 "purity.m"
                if (check_hlds__purity__succeeded)
#line 388 "purity.m"
                  if ((check_hlds__purity__PromisedPurity_12 == (MR_Integer) 2))
#line 387 "purity.m"
                    check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 1;
#line 388 "purity.m"
                  else
#line 392 "purity.m"
                    check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 394 "purity.m"
                else
#line 416 "purity.m"
                  {
#line 406 "purity.m"
                    MR_Word check_hlds__purity__Markers_66;
#line 406 "purity.m"
                    MR_Word check_hlds__purity__GoalType_67;

#line 406 "purity.m"
                    {
#line 406 "purity.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__Markers_66);
                    }
#line 407 "purity.m"
                    {
#line 407 "purity.m"
                      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__GoalType_67);
                    }
#line 409 "purity.m"
                    if ((check_hlds__purity__GoalType_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 409 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 409 "purity.m"
                    else
#line 409 "purity.m"
                      if ((check_hlds__purity__GoalType_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 408 "purity.m"
                        check_hlds__purity__succeeded = MR_TRUE;
#line 409 "purity.m"
                      else
#line 409 "purity.m"
                        check_hlds__purity__succeeded = MR_FALSE;
#line 409 "purity.m"
                    if (!(check_hlds__purity__succeeded))
#line 409 "purity.m"
                      {
#line 412 "purity.m"
                        {
#line 412 "purity.m"
                          check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 0);
                        }
#line 409 "purity.m"
                        if (!(check_hlds__purity__succeeded))
#line 409 "purity.m"
                          {
#line 411 "purity.m"
                            {
#line 411 "purity.m"
                              check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 10);
                            }
#line 409 "purity.m"
                            if (!(check_hlds__purity__succeeded))
#line 410 "purity.m"
                              {
#line 410 "purity.m"
                                {
#line 410 "purity.m"
                                  check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 9);
                                }
#line 410 "purity.m"
                              }
#line 409 "purity.m"
                          }
#line 409 "purity.m"
                      }
#line 416 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 415 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 416 "purity.m"
                    else
#line 417 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 4;
#line 416 "purity.m"
                  }
#line 394 "purity.m"
              }
#line 382 "purity.m"
          }
#line 377 "purity.m"
      }
#line 312 "purity.m"
    {
#line 312 "purity.m"
      check_hlds__purity__PurityCheckResult_32 = check_hlds__purity__workaround_gcc_bug_1_f_0(check_hlds__purity__PurityCheckResult0_31);
    }
#line 318 "purity.m"
    if ((check_hlds__purity__PurityCheckResult_32 == (MR_Integer) 2))
#line 314 "purity.m"
      {
#line 314 "purity.m"
        MR_Word check_hlds__purity__Spec_33;

#line 315 "purity.m"
        {
#line 315 "purity.m"
          check_hlds__purity__Spec_33 = check_hlds__purity__error_inconsistent_promise_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__DeclPurity_11);
        }
#line 317 "purity.m"
        {
#line 317 "purity.m"
          check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_33));
#line 317 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 317 "purity.m"
        }
#line 314 "purity.m"
      }
#line 318 "purity.m"
    else
#line 318 "purity.m"
      if ((check_hlds__purity__PurityCheckResult_32 == (MR_Integer) 1))
#line 324 "purity.m"
        {
#line 324 "purity.m"
          MR_Word check_hlds__purity__Spec_53;

#line 325 "purity.m"
          {
#line 325 "purity.m"
            check_hlds__purity__Spec_53 = check_hlds__purity__error_inferred_impure_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__WorstPurity_30);
          }
#line 326 "purity.m"
          {
#line 326 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_53));
#line 326 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 326 "purity.m"
          }
#line 324 "purity.m"
        }
#line 318 "purity.m"
      else
#line 318 "purity.m"
        if ((check_hlds__purity__PurityCheckResult_32 == (MR_Integer) 0))
#line 334 "purity.m"
          check_hlds__purity__PredSpecs_34 = check_hlds__purity__GoalSpecs_26;
#line 318 "purity.m"
        else
#line 318 "purity.m"
          if ((check_hlds__purity__PurityCheckResult_32 == (MR_Integer) 4))
#line 319 "purity.m"
            {
#line 319 "purity.m"
              MR_Word check_hlds__purity__Spec_52;

#line 320 "purity.m"
              {
#line 320 "purity.m"
                check_hlds__purity__Spec_52 = check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__DeclPurity_11, check_hlds__purity__WorstPurity_30);
              }
#line 322 "purity.m"
              {
#line 322 "purity.m"
                check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_52));
#line 322 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 322 "purity.m"
              }
#line 319 "purity.m"
            }
#line 318 "purity.m"
          else
#line 328 "purity.m"
            {
#line 328 "purity.m"
              MR_Word check_hlds__purity__Spec_54;

#line 329 "purity.m"
              {
#line 329 "purity.m"
                check_hlds__purity__Spec_54 = check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__PromisedPurity_12);
              }
#line 331 "purity.m"
              {
#line 331 "purity.m"
                check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_54));
#line 331 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 331 "purity.m"
              }
#line 328 "purity.m"
            }
#line 336 "purity.m"
    {
#line 336 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__PredSpecs_34, check_hlds__purity__STATE_VARIABLE_Specs_0_37);
    }
#line 285 "purity.m"
  }
#line 282 "purity.m"
}

#line 227 "purity.m"
static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
#line 227 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 227 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2,
#line 227 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_3,
#line 227 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_4,
#line 227 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_5)
#line 227 "purity.m"
{
#line 231 "purity.m"
  while (MR_TRUE)
#line 231 "purity.m"
    {
#line 231 "purity.m"
      /* tailcall optimized into a loop */
#line 231 "purity.m"
      {
#line 231 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 231 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "purity.m"
          {
#line 231 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Specs_5 = check_hlds__purity__STATE_VARIABLE_Specs_0_4;
#line 231 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ModuleInfo_3 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2;
#line 231 "purity.m"
          }
#line 231 "purity.m"
        else
#line 232 "purity.m"
          {
#line 232 "purity.m"
            MR_Word check_hlds__purity__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "purity.m"
            MR_Word check_hlds__purity__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "purity.m"
            MR_Word check_hlds__purity__PredInfo0_16;
#line 232 "purity.m"
            MR_Word check_hlds__purity__PredInfo_17;
#line 232 "purity.m"
            MR_Word check_hlds__purity__GoalType_19;
#line 232 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 232 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 232 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30;
#line 232 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_31_31;

#line 233 "purity.m"
            {
#line 233 "purity.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__purity__PredId_12, &check_hlds__purity__PredInfo0_16);
            }
#line 235 "purity.m"
            {
#line 235 "purity.m"
              check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__purity__PredInfo0_16);
            }
#line 236 "purity.m"
            if (!(check_hlds__purity__succeeded))
#line 236 "purity.m"
              {
#line 236 "purity.m"
                check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__purity__PredInfo0_16);
              }
#line 240 "purity.m"
            if (check_hlds__purity__succeeded)
#line 239 "purity.m"
              {
#line 239 "purity.m"
                check_hlds__purity__PredInfo_17 = check_hlds__purity__PredInfo0_16;
#line 239 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Specs_28_28 = check_hlds__purity__STATE_VARIABLE_Specs_0_4;
#line 239 "purity.m"
                check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2;
#line 239 "purity.m"
              }
#line 240 "purity.m"
            else
#line 244 "purity.m"
              {
#line 242 "purity.m"
                {
#line 242 "purity.m"
                  hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Purity-checking ", check_hlds__purity__PredId_12, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2);
                }
#line 245 "purity.m"
                {
#line 245 "purity.m"
                  check_hlds__purity__puritycheck_pred_6_p_0(check_hlds__purity__PredId_12, check_hlds__purity__PredInfo0_16, &check_hlds__purity__PredInfo_17, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__purity__STATE_VARIABLE_Specs_0_4, &check_hlds__purity__STATE_VARIABLE_Specs_28_28);
                }
#line 246 "purity.m"
                {
#line 246 "purity.m"
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__purity__PredId_12, check_hlds__purity__PredInfo_17, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 244 "purity.m"
              }
#line 250 "purity.m"
            {
#line 250 "purity.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_17, &check_hlds__purity__GoalType_19);
            }
#line 254 "purity.m"
            if ((check_hlds__purity__GoalType_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "purity.m"
              {
#line 255 "purity.m"
                check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 255 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 255 "purity.m"
              }
#line 254 "purity.m"
            else
#line 254 "purity.m"
              if ((check_hlds__purity__GoalType_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 257 "purity.m"
                {
#line 257 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 257 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 257 "purity.m"
                }
#line 254 "purity.m"
              else
#line 254 "purity.m"
                if ((check_hlds__purity__GoalType_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 256 "purity.m"
                  {
#line 256 "purity.m"
                    check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 256 "purity.m"
                    check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 256 "purity.m"
                  }
#line 254 "purity.m"
                else
#line 254 "purity.m"
                  if ((check_hlds__purity__GoalType_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 258 "purity.m"
                    {
#line 258 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 258 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 258 "purity.m"
                    }
#line 254 "purity.m"
                  else
#line 252 "purity.m"
                    {
#line 252 "purity.m"
                      MR_Word check_hlds__purity__PromiseType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalType_19, (MR_Integer) 0)));

#line 253 "purity.m"
                      {
#line 253 "purity.m"
                        check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0(check_hlds__purity__PromiseType_20, check_hlds__purity__PredId_12, check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30, check_hlds__purity__STATE_VARIABLE_Specs_28_28, &check_hlds__purity__STATE_VARIABLE_Specs_31_31);
                      }
#line 252 "purity.m"
                    }
#line 261 "purity.m"
            /* direct tailcall eliminated */
#line 261 "purity.m"
            {
#line 261 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__PredIds_13;
#line 261 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30;
#line 261 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__purity__STATE_VARIABLE_Specs_31_31;

#line 261 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_0_4 = check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 261 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 261 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 261 "purity.m"
            }
#line 261 "purity.m"
            continue;
#line 232 "purity.m"
          }
#line 231 "purity.m"
      }
#line 231 "purity.m"
      break;
#line 231 "purity.m"
    }
#line 227 "purity.m"
}

#line 162 "purity.m"
MR_Word MR_CALL 
check_hlds__purity__impure_unification_expr_error_2_f_0(
#line 162 "purity.m"
  MR_Word check_hlds__purity__Context_4,
#line 162 "purity.m"
  MR_Word check_hlds__purity__Purity_5)
#line 162 "purity.m"
{
#line 1535 "purity.m"
  {
#line 1535 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__Spec_6;
#line 1535 "purity.m"
    MR_String check_hlds__purity__PurityName_7;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__Pieces_8;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__Msg_9;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__V_12_12;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__V_15_15;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__V_16_16;
#line 1535 "purity.m"
    MR_String check_hlds__purity__V_17_17;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1535 "purity.m"
    MR_Word check_hlds__purity__V_28_28;

#line 1536 "purity.m"
    {
#line 1536 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_5, &check_hlds__purity__PurityName_7);
    }
#line 1538 "purity.m"
    {
#line 1538 "purity.m"
      check_hlds__purity__V_17_17 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_7, (MR_String) ",");
    }
#line 1538 "purity.m"
    {
#line 1538 "purity.m"
      check_hlds__purity__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_16_16, 0) = ((MR_Box) (check_hlds__purity__V_17_17));
#line 1538 "purity.m"
    }
#line 1538 "purity.m"
    {
#line 1538 "purity.m"
      check_hlds__purity__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_15_15, 0) = ((MR_Box) (check_hlds__purity__V_16_16));
#line 1538 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[25])));
#line 1538 "purity.m"
    }
#line 1537 "purity.m"
    {
#line 1537 "purity.m"
      check_hlds__purity__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[23])));
#line 1537 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_12_12, 1) = ((MR_Box) (check_hlds__purity__V_15_15));
#line 1537 "purity.m"
    }
#line 1537 "purity.m"
    {
#line 1537 "purity.m"
      check_hlds__purity__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[22])));
#line 1537 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_8, 1) = ((MR_Box) (check_hlds__purity__V_12_12));
#line 1537 "purity.m"
    }
#line 1540 "purity.m"
    {
#line 1540 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__Pieces_8));
#line 1540 "purity.m"
    }
#line 1540 "purity.m"
    {
#line 1540 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1540 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1540 "purity.m"
    }
#line 1540 "purity.m"
    {
#line 1540 "purity.m"
      check_hlds__purity__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_9, 0) = ((MR_Box) (check_hlds__purity__Context_4));
#line 1540 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_9, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1540 "purity.m"
    }
#line 1541 "purity.m"
    {
#line 1541 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__Msg_9));
#line 1541 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1541 "purity.m"
    }
#line 1541 "purity.m"
    {
#line 1541 "purity.m"
      check_hlds__purity__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1541 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1541 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1541 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 2) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1541 "purity.m"
    }
#line 1535 "purity.m"
    return check_hlds__purity__Spec_6;
#line 1535 "purity.m"
  }
#line 162 "purity.m"
}

#line 156 "purity.m"
void MR_CALL 
check_hlds__purity__repuritycheck_proc_4_p_0(
#line 156 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 156 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 156 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_36,
#line 156 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_37)
#line 156 "purity.m"
{
#line 422 "purity.m"
  {
#line 422 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 422 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_63_63;
#line 422 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_64_64;
#line 422 "purity.m"
    MR_Integer check_hlds__purity__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 422 "purity.m"
    MR_Word check_hlds__purity__Procs0_9;
#line 422 "purity.m"
    MR_Word check_hlds__purity__ProcInfo0_10;
#line 422 "purity.m"
    MR_Word check_hlds__purity__Goal0_11;
#line 422 "purity.m"
    MR_Word check_hlds__purity__VarTypes0_12;
#line 422 "purity.m"
    MR_Word check_hlds__purity__VarSet0_13;
#line 422 "purity.m"
    MR_Word check_hlds__purity__PurityInfo0_14;
#line 422 "purity.m"
    MR_Word check_hlds__purity__Goal_15;
#line 422 "purity.m"
    MR_Word check_hlds__purity__Bodypurity_16;
#line 422 "purity.m"
    MR_Word check_hlds__purity__PurityInfo_18;
#line 422 "purity.m"
    MR_Word check_hlds__purity__VarTypes_21;
#line 422 "purity.m"
    MR_Word check_hlds__purity__VarSet_22;
#line 422 "purity.m"
    MR_Word check_hlds__purity__NeedToRequantify_24;
#line 422 "purity.m"
    MR_Word check_hlds__purity__ProcInfo1_26;
#line 422 "purity.m"
    MR_Word check_hlds__purity__ProcInfo2_27;
#line 422 "purity.m"
    MR_Word check_hlds__purity__ProcInfo3_28;
#line 422 "purity.m"
    MR_Word check_hlds__purity__ProcInfo_29;
#line 422 "purity.m"
    MR_Word check_hlds__purity__Procs_30;
#line 422 "purity.m"
    MR_Word check_hlds__purity__OldPurity_31;
#line 422 "purity.m"
    MR_Word check_hlds__purity__Markers0_32;
#line 422 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_42_42;
#line 422 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_44_44;
#line 422 "purity.m"
    MR_Word check_hlds__purity___PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 424 "purity.m"
    MR_Box check_hlds__purity__conv0_ProcInfo0_10;
#line 431 "purity.m"
    MR_Word check_hlds__purity__V_17_17;
#line 432 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 432 "purity.m"
    MR_Word check_hlds__purity__V_20_20;
#line 432 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 432 "purity.m"
    MR_Word check_hlds__purity__V_25_25;

#line 423 "purity.m"
    {
#line 423 "purity.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_36, &check_hlds__purity__Procs0_9);
    }
#line 10594 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 10596 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 424 "purity.m"
    {
#line 424 "purity.m"
      mercury__map__lookup_3_p_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__TypeCtorInfo_64_64, check_hlds__purity__Procs0_9, ((MR_Box) (check_hlds__purity__ProcId_7)), &check_hlds__purity__conv0_ProcInfo0_10);
    }
#line 424 "purity.m"
    check_hlds__purity__ProcInfo0_10 = ((MR_Word) check_hlds__purity__conv0_ProcInfo0_10);
#line 425 "purity.m"
    {
#line 425 "purity.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__Goal0_11);
    }
#line 426 "purity.m"
    {
#line 426 "purity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__VarTypes0_12);
    }
#line 427 "purity.m"
    {
#line 427 "purity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__VarSet0_13);
    }
#line 428 "purity.m"
    {
#line 428 "purity.m"
      check_hlds__purity__PurityInfo0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 428 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 0) = ((MR_Box) (check_hlds__purity__ModuleInfo_5));
#line 428 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 1) = ((MR_Box) ((MR_Integer) 1));
#line 428 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 2) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_PredInfo_0_36));
#line 428 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 3) = ((MR_Box) (check_hlds__purity__VarTypes0_12));
#line 428 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 4) = ((MR_Box) (check_hlds__purity__VarSet0_13));
#line 428 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 6) = ((MR_Box) ((MR_Integer) 1));
#line 428 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 7) = ((MR_Box) ((MR_Integer) 0));
#line 428 "purity.m"
    }
#line 431 "purity.m"
    {
#line 431 "purity.m"
      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_11, &check_hlds__purity__Goal_15, &check_hlds__purity__Bodypurity_16, &check_hlds__purity__V_17_17, check_hlds__purity__PurityInfo0_14, &check_hlds__purity__PurityInfo_18);
    }
#line 432 "purity.m"
    check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 0)));
#line 432 "purity.m"
    check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 1)));
#line 432 "purity.m"
    check_hlds__purity__STATE_VARIABLE_PredInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 2)));
#line 432 "purity.m"
    check_hlds__purity__VarTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 3)));
#line 432 "purity.m"
    check_hlds__purity__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 4)));
#line 432 "purity.m"
    check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 5)));
#line 432 "purity.m"
    check_hlds__purity__NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 6)));
#line 432 "purity.m"
    check_hlds__purity__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 7)));
#line 434 "purity.m"
    {
#line 434 "purity.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__purity__Goal_15, check_hlds__purity__ProcInfo0_10, &check_hlds__purity__ProcInfo1_26);
    }
#line 435 "purity.m"
    {
#line 435 "purity.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__purity__VarTypes_21, check_hlds__purity__ProcInfo1_26, &check_hlds__purity__ProcInfo2_27);
    }
#line 436 "purity.m"
    {
#line 436 "purity.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__purity__VarSet_22, check_hlds__purity__ProcInfo2_27, &check_hlds__purity__ProcInfo3_28);
    }
#line 441 "purity.m"
    if ((check_hlds__purity__NeedToRequantify_24 == (MR_Integer) 1))
#line 443 "purity.m"
      check_hlds__purity__ProcInfo_29 = check_hlds__purity__ProcInfo3_28;
#line 441 "purity.m"
    else
#line 438 "purity.m"
      {
#line 439 "purity.m"
        {
#line 439 "purity.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__purity__ProcInfo3_28, &check_hlds__purity__ProcInfo_29);
        }
#line 438 "purity.m"
      }
#line 445 "purity.m"
    {
#line 445 "purity.m"
      mercury__map__det_update_4_p_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__TypeCtorInfo_64_64, ((MR_Box) (check_hlds__purity__ProcId_7)), ((MR_Box) (check_hlds__purity__ProcInfo_29)), check_hlds__purity__Procs0_9, &check_hlds__purity__Procs_30);
    }
#line 446 "purity.m"
    {
#line 446 "purity.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__purity__Procs_30, check_hlds__purity__STATE_VARIABLE_PredInfo_42_42, &check_hlds__purity__STATE_VARIABLE_PredInfo_44_44);
    }
#line 452 "purity.m"
    {
#line 452 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, &check_hlds__purity__OldPurity_31);
    }
#line 453 "purity.m"
    {
#line 453 "purity.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, &check_hlds__purity__Markers0_32);
    }
#line 455 "purity.m"
    {
#line 455 "purity.m"
      check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__Bodypurity_16, check_hlds__purity__OldPurity_31);
    }
#line 469 "purity.m"
    if (check_hlds__purity__succeeded)
#line 467 "purity.m"
      {
#line 467 "purity.m"
        MR_Word check_hlds__purity__Markers_34;

#line 461 "purity.m"
        if ((check_hlds__purity__OldPurity_31 == (MR_Integer) 2))
#line 466 "purity.m"
          check_hlds__purity__Markers_34 = check_hlds__purity__Markers0_32;
#line 461 "purity.m"
        else
#line 461 "purity.m"
          if ((check_hlds__purity__OldPurity_31 == (MR_Integer) 0))
#line 458 "purity.m"
            {
#line 458 "purity.m"
              MR_Word check_hlds__purity__Markers1_33;

#line 459 "purity.m"
              {
#line 459 "purity.m"
                hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 15, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_33);
              }
#line 460 "purity.m"
              {
#line 460 "purity.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 14, check_hlds__purity__Markers1_33, &check_hlds__purity__Markers_34);
              }
#line 458 "purity.m"
            }
#line 461 "purity.m"
          else
#line 462 "purity.m"
            {
#line 463 "purity.m"
              {
#line 463 "purity.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 15, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers_34);
              }
#line 462 "purity.m"
            }
#line 468 "purity.m"
        {
#line 468 "purity.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__purity__Markers_34, check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, check_hlds__purity__STATE_VARIABLE_PredInfo_37);
#line 468 "purity.m"
          return;
        }
#line 467 "purity.m"
      }
#line 469 "purity.m"
    else
#line 491 "purity.m"
      {
#line 470 "purity.m"
        MR_Word check_hlds__purity__TypeCtorInfo_66_66;
#line 470 "purity.m"
        MR_Word check_hlds__purity__V_49_49;
#line 470 "purity.m"
        MR_Word check_hlds__purity__V_50_50;
#line 470 "purity.m"
        MR_Word check_hlds__purity__V_65_65;
#line 470 "purity.m"
        MR_Word check_hlds__purity__V_70_70;
#line 470 "purity.m"
        MR_Integer check_hlds__purity__V_71_71;
#line 470 "purity.m"
        MR_Word check_hlds__purity__V_72_72;
#line 471 "purity.m"
        MR_Integer check_hlds__purity__V_35_35;

#line 470 "purity.m"
        {
#line 470 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__OldPurity_31, check_hlds__purity__Bodypurity_16);
        }
#line 470 "purity.m"
        if (check_hlds__purity__succeeded)
#line 470 "purity.m"
          {
#line 471 "purity.m"
            check_hlds__purity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 471 "purity.m"
            {
#line 471 "purity.m"
              check_hlds__purity__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, 0) = NULL;
#line 471 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, 1) = ((MR_Box) (check_hlds__purity__V_50_50));
#line 471 "purity.m"
            }
#line 471 "purity.m"
            {
#line 471 "purity.m"
              check_hlds__purity__V_65_65 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44);
            }
#line 10817 "check_hlds.purity.c"
            check_hlds__purity__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 471 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 471 "purity.m"
            if (check_hlds__purity__succeeded)
#line 471 "purity.m"
              {
#line 471 "purity.m"
                check_hlds__purity__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, (MR_Integer) 0)));
#line 471 "purity.m"
                check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, (MR_Integer) 1)));
#line 471 "purity.m"
                (MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, (MR_Integer) 0)) = ((MR_Box) (check_hlds__purity__V_71_71));
#line 471 "purity.m"
                check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, (MR_Integer) 1)));
#line 471 "purity.m"
                {
#line 471 "purity.m"
                  check_hlds__purity__succeeded = mercury__list____Unify____list_1_0(check_hlds__purity__TypeCtorInfo_66_66, check_hlds__purity__V_70_70, check_hlds__purity__V_72_72);
                }
#line 471 "purity.m"
              }
#line 470 "purity.m"
          }
#line 491 "purity.m"
        if (check_hlds__purity__succeeded)
#line 489 "purity.m"
          {
#line 489 "purity.m"
            MR_Word check_hlds__purity__Markers_60;

#line 482 "purity.m"
            if ((check_hlds__purity__Bodypurity_16 == (MR_Integer) 2))
#line 488 "purity.m"
              check_hlds__purity__Markers_60 = check_hlds__purity__Markers0_32;
#line 482 "purity.m"
            else
#line 482 "purity.m"
              if ((check_hlds__purity__Bodypurity_16 == (MR_Integer) 0))
#line 479 "purity.m"
                {
#line 479 "purity.m"
                  MR_Word check_hlds__purity__Markers1_56;

#line 480 "purity.m"
                  {
#line 480 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 12, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_56);
                  }
#line 481 "purity.m"
                  {
#line 481 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 13, check_hlds__purity__Markers1_56, &check_hlds__purity__Markers_60);
                  }
#line 479 "purity.m"
                }
#line 482 "purity.m"
              else
#line 483 "purity.m"
                {
#line 483 "purity.m"
                  MR_Word check_hlds__purity__Markers1_57;

#line 484 "purity.m"
                  {
#line 484 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 12, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_57);
                  }
#line 485 "purity.m"
                  {
#line 485 "purity.m"
                    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 13, check_hlds__purity__Markers1_57, &check_hlds__purity__Markers_60);
                  }
#line 483 "purity.m"
                }
#line 490 "purity.m"
            {
#line 490 "purity.m"
              hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__purity__Markers_60, check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, check_hlds__purity__STATE_VARIABLE_PredInfo_37);
#line 490 "purity.m"
              return;
            }
#line 489 "purity.m"
          }
#line 491 "purity.m"
        else
#line 490 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_PredInfo_37 = check_hlds__purity__STATE_VARIABLE_PredInfo_44_44;
#line 491 "purity.m"
      }
#line 422 "purity.m"
  }
#line 156 "purity.m"
}

#line 146 "purity.m"
void MR_CALL 
check_hlds__purity__puritycheck_module_4_p_0(
#line 146 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8,
#line 146 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_9,
#line 146 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_10,
#line 146 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_11)
#line 146 "purity.m"
{
#line 223 "purity.m"
  {
#line 223 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 223 "purity.m"
    MR_Word check_hlds__purity__PredIds_7;
#line 223 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_12_12;

#line 224 "purity.m"
    {
#line 224 "purity.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__purity__PredIds_7, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_12_12);
    }
#line 225 "purity.m"
    {
#line 225 "purity.m"
      check_hlds__purity__check_preds_purity_5_p_0(check_hlds__purity__PredIds_7, check_hlds__purity__STATE_VARIABLE_ModuleInfo_12_12, check_hlds__purity__STATE_VARIABLE_ModuleInfo_9, check_hlds__purity__STATE_VARIABLE_Specs_0_10, check_hlds__purity__STATE_VARIABLE_Specs_11);
#line 225 "purity.m"
      return;
    }
#line 223 "purity.m"
  }
#line 146 "purity.m"
}

void mercury__check_hlds__purity__init(void)
{
}

void mercury__check_hlds__purity__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_check_result_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0);
}

void mercury__check_hlds__purity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.purity. */
