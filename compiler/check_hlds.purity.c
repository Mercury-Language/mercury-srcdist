/*
** Automatically generated from `purity.m'
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


/* :- module check_hlds.purity. */
/* :- implementation. */

/*
INIT mercury__check_hlds__purity__init
ENDINIT
*/

#include "check_hlds.purity.mih"


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
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 153 "check_hlds.purity.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

#line 156 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0;

#line 159 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1;

#line 162 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2];

#line 165 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2];

#line 168 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2];

#line 171 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0;

#line 174 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1;

#line 177 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2;

#line 180 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3;

#line 183 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4;

#line 186 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0[5];

#line 189 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0[5];

#line 192 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0[5];

#line 195 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 198 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 201 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 207 "check_hlds.purity.c"
static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8];

#line 210 "check_hlds.purity.c"
static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8];

#line 213 "check_hlds.purity.c"
static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0;

#line 216 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1];

#line 219 "check_hlds.purity.c"
static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1];

#line 222 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1];

#line 225 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1];

#line 228 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0;

#line 231 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1;

#line 234 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2];

#line 237 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2];

#line 240 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2];

#line 243 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
#line 246 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 248 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 251 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
#line 254 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 256 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 258 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 261 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0_10001(
#line 264 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 266 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 269 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0_10001(
#line 272 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 274 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 276 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 279 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
#line 282 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 284 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 287 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
#line 290 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 292 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 294 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 297 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
#line 300 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 302 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 305 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
#line 308 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 310 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 312 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 498 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(
#line 498 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_32,
#line 498 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 498 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 498 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7);

#line 585 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(
#line 585 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__AddrOfGoal_29,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 585 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17);

#line 641 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
#line 641 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_90,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 627 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(
#line 627 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 627 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_44,
#line 627 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 627 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 627 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 627 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 627 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 627 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 612 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(
#line 612 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_41,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 1583 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
#line 1583 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1583 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1583 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1583 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
#line 1583 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1583 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1591 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
#line 1591 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1591 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1591 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1591 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
#line 1591 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1591 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 204 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0(
#line 204 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 204 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 204 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 204 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0(
#line 204 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 204 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1587 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
#line 1587 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1587 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1587 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1587 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
#line 1587 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1587 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1614 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
#line 1614 "purity.m"
  MR_Word check_hlds__purity__Specs_4,
#line 1614 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_10,
#line 1614 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_11);

#line 1606 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
#line 1606 "purity.m"
  MR_Word check_hlds__purity__Spec_4,
#line 1606 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1606 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9);

#line 1494 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
#line 1494 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1494 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 1494 "purity.m"
  MR_Word check_hlds__purity__Context_8,
#line 1494 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9);

#line 1469 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
#line 1469 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 1469 "purity.m"
  MR_Word check_hlds__purity__PredId_6,
#line 1469 "purity.m"
  MR_Word check_hlds__purity__Context_7);

#line 1445 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inferred_impure_4_f_0(
#line 1445 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1445 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1445 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1445 "purity.m"
  MR_Word check_hlds__purity__Purity_9);

#line 1414 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(
#line 1414 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1414 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1414 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1414 "purity.m"
  MR_Word check_hlds__purity__PromisedPurity_9);

#line 1399 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(
#line 1399 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_7,
#line 1399 "purity.m"
  MR_Word check_hlds__purity__PredInfo_8,
#line 1399 "purity.m"
  MR_Word check_hlds__purity__PredId_9,
#line 1399 "purity.m"
  MR_Word check_hlds__purity__DeclPurity_10,
#line 1399 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_11);

#line 1379 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_promise_4_f_0(
#line 1379 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1379 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1379 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1379 "purity.m"
  MR_Word check_hlds__purity__Purity_9);

#line 1328 "purity.m"
static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
#line 1328 "purity.m"
  MR_Word check_hlds__purity__Outer_6,
#line 1328 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1328 "purity.m"
  MR_Word * check_hlds__purity__Goal_9,
#line 1328 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_30,
#line 1328 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_31);

#line 1312 "purity.m"
static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
#line 1312 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1312 "purity.m"
  MR_Word check_hlds__purity__VarTypes_8,
#line 1312 "purity.m"
  MR_Word check_hlds__purity__VarSet_9,
#line 1312 "purity.m"
  MR_Word check_hlds__purity__Var_10,
#line 1312 "purity.m"
  MR_Word * check_hlds__purity__VarType_11,
#line 1312 "purity.m"
  MR_Word * check_hlds__purity__Specs_12);

#line 1292 "purity.m"
static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
#line 1292 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_5,
#line 1292 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_6,
#line 1292 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_7,
#line 1292 "purity.m"
  MR_Word * check_hlds__purity__Specs_8);

#line 1228 "purity.m"
static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
#line 1228 "purity.m"
  MR_Word check_hlds__purity__Info_7,
#line 1228 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_8,
#line 1228 "purity.m"
  MR_Word check_hlds__purity__Var_9,
#line 1228 "purity.m"
  MR_Word check_hlds__purity__ConsId_10,
#line 1228 "purity.m"
  MR_Word check_hlds__purity__Args_11,
#line 1228 "purity.m"
  MR_Word * check_hlds__purity__Specs_12);

#line 1176 "purity.m"
static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
#line 1176 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1176 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1176 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9,
#line 1176 "purity.m"
  MR_Word * check_hlds__purity__ActualPurity_10,
#line 1176 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_17,
#line 1176 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_18);

#line 1143 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
#line 1143 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1143 "purity.m"
  MR_Word check_hlds__purity__Info_2,
#line 1143 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_3,
#line 1143 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_4);

#line 1048 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
#line 1048 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_7,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0_10,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Invariants_11);

#line 989 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
#line 989 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 989 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 989 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 989 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_3);

#line 997 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
#line 997 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 997 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 997 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2,
#line 997 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_3,
#line 997 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_4);

#line 868 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
#line 868 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 868 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 868 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2);

#line 667 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
#line 667 "purity.m"
  MR_Word check_hlds__purity__GoalExpr0_8,
#line 667 "purity.m"
  MR_Word * check_hlds__purity__GoalExpr_9,
#line 667 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_10,
#line 667 "purity.m"
  MR_Word * check_hlds__purity__Purity_11,
#line 667 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_12,
#line 667 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_192,
#line 667 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_193);

#line 641 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
#line 641 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 612 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
#line 612 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 595 "purity.m"
static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
#line 595 "purity.m"
  MR_Word check_hlds__purity__Purity_5,
#line 595 "purity.m"
  MR_Word check_hlds__purity__ContainsTrace_6,
#line 595 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8,
#line 595 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_GoalInfo_9);

#line 585 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
#line 585 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__Goal_8,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 585 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17);

#line 569 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
#line 569 "purity.m"
  MR_Word check_hlds__purity__Clause_3,
#line 569 "purity.m"
  MR_Word check_hlds__purity__AllProcIds_4);

#line 511 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
#line 511 "purity.m"
  MR_Word check_hlds__purity__Clause0_7,
#line 511 "purity.m"
  MR_Word * check_hlds__purity__Clause_8,
#line 511 "purity.m"
  MR_Word check_hlds__purity__PredInfo_9,
#line 511 "purity.m"
  MR_Word * check_hlds__purity__Purity_10,
#line 511 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_35,
#line 511 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_36);

#line 498 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
#line 498 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 498 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 498 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 498 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7);

#line 337 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__workaround_gcc_bug_1_f_0(
#line 337 "purity.m"
  MR_Word check_hlds__purity__X_3);

#line 281 "purity.m"
static void MR_CALL 
check_hlds__purity__puritycheck_pred_6_p_0(
#line 281 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 281 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_35,
#line 281 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_36,
#line 281 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_9,
#line 281 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_37,
#line 281 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_38);

#line 226 "purity.m"
static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
#line 226 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 226 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2,
#line 226 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_3,
#line 226 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_4,
#line 226 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_5);


static /* final */ const MR_Box check_hlds__purity_scalar_common_1[6][3];

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[63][2];

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__purity_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__purity_scalar_common_2[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_4[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_6[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[63][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "no impurity declaration."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be promised pure and should have"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that invokes impure or semipure code"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "indicator."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is sufficient."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "No purity indicator is necessary."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error: unification with expression"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was declared"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but expression was not a function call."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error: parallel conjunct is"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but parallel conjuncts must be pure or semipure."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error in closure: closure body is"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but closure was not declared"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The type of outer variable"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be either io.state or stm_builtin.stm."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: declared"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but promised pure."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A pure"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: declared"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but actually"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: unnecessary"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not invoke any"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code,"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "so there is no need for a"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error:"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It must be pure."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It must be declared"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or promised"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In call to "))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error: call must be in"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an explicit unification which is preceded by"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error: call must be preceded by"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In call to"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1311 "check_hlds.purity.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0
  }
};

#line 1320 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0 = {
  (MR_String) "have_not_converted_unify",
  (MR_Integer) 0
};

#line 1326 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1 = {
  (MR_String) "have_converted_unify",
  (MR_Integer) 1
};

#line 1332 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1
};

#line 1338 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0
};

#line 1344 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1350 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____converted_unify_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____converted_unify_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "converted_unify",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0
};

#line 1367 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0 = {
  (MR_String) "no_worries",
  (MR_Integer) 0
};

#line 1373 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1 = {
  (MR_String) "insufficient_decl",
  (MR_Integer) 1
};

#line 1379 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2 = {
  (MR_String) "inconsistent_promise",
  (MR_Integer) 2
};

#line 1385 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3 = {
  (MR_String) "unnecessary_promise_pure",
  (MR_Integer) 3
};

#line 1391 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4 = {
  (MR_String) "unnecessary_decl",
  (MR_Integer) 4
};

#line 1397 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0[5] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4
};

#line 1406 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0[5] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3
};

#line 1415 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 1424 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_check_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____purity_check_result_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_check_result_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_check_result",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0
};

#line 1441 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1449 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1458 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1466 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1474 "check_hlds.purity.c"
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

#line 1486 "check_hlds.purity.c"
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

#line 1498 "check_hlds.purity.c"
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

#line 1513 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

#line 1518 "check_hlds.purity.c"
static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0
  }
};

#line 1527 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

#line 1532 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1] = {
  (MR_Integer) 0
};

#line 1537 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__purity____Unify____purity_info_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_info_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_info",
  {     check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0 },
  {     check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0
};

#line 1554 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0 = {
  (MR_String) "run_post_typecheck",
  (MR_Integer) 0
};

#line 1560 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1 = {
  (MR_String) "do_not_run_post_typecheck",
  (MR_Integer) 1
};

#line 1566 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1
};

#line 1572 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0
};

#line 1578 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1584 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____run_post_typecheck_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____run_post_typecheck_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "run_post_typecheck",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0
};

#line 1601 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
#line 1604 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1606 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1608 "check_hlds.purity.c"
{
#line 1610 "check_hlds.purity.c"
  {
#line 1612 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1615 "check_hlds.purity.c"
    {
#line 1617 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____converted_unify_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1620 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1622 "check_hlds.purity.c"
  }
#line 1624 "check_hlds.purity.c"
}

#line 1627 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
#line 1630 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1632 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1634 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1636 "check_hlds.purity.c"
{
#line 1638 "check_hlds.purity.c"
  {
#line 1640 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1643 "check_hlds.purity.c"
    {
#line 1645 "check_hlds.purity.c"
      check_hlds__purity____Compare____converted_unify_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1648 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1650 "check_hlds.purity.c"
  }
#line 1652 "check_hlds.purity.c"
}

#line 1655 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0_10001(
#line 1658 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1660 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1662 "check_hlds.purity.c"
{
#line 1664 "check_hlds.purity.c"
  {
#line 1666 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1669 "check_hlds.purity.c"
    {
#line 1671 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____purity_check_result_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1674 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1676 "check_hlds.purity.c"
  }
#line 1678 "check_hlds.purity.c"
}

#line 1681 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0_10001(
#line 1684 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1686 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1688 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1690 "check_hlds.purity.c"
{
#line 1692 "check_hlds.purity.c"
  {
#line 1694 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1697 "check_hlds.purity.c"
    {
#line 1699 "check_hlds.purity.c"
      check_hlds__purity____Compare____purity_check_result_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1702 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1704 "check_hlds.purity.c"
  }
#line 1706 "check_hlds.purity.c"
}

#line 1709 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
#line 1712 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1714 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1716 "check_hlds.purity.c"
{
#line 1718 "check_hlds.purity.c"
  {
#line 1720 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1723 "check_hlds.purity.c"
    {
#line 1725 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____purity_info_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1728 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1730 "check_hlds.purity.c"
  }
#line 1732 "check_hlds.purity.c"
}

#line 1735 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
#line 1738 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1740 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1742 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1744 "check_hlds.purity.c"
{
#line 1746 "check_hlds.purity.c"
  {
#line 1748 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1751 "check_hlds.purity.c"
    {
#line 1753 "check_hlds.purity.c"
      check_hlds__purity____Compare____purity_info_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1756 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1758 "check_hlds.purity.c"
  }
#line 1760 "check_hlds.purity.c"
}

#line 1763 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
#line 1766 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1768 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1770 "check_hlds.purity.c"
{
#line 1772 "check_hlds.purity.c"
  {
#line 1774 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1777 "check_hlds.purity.c"
    {
#line 1779 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____run_post_typecheck_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1782 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1784 "check_hlds.purity.c"
  }
#line 1786 "check_hlds.purity.c"
}

#line 1789 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
#line 1792 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1794 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1796 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1798 "check_hlds.purity.c"
{
#line 1800 "check_hlds.purity.c"
  {
#line 1802 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1805 "check_hlds.purity.c"
    {
#line 1807 "check_hlds.purity.c"
      check_hlds__purity____Compare____run_post_typecheck_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1810 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1812 "check_hlds.purity.c"
  }
#line 1814 "check_hlds.purity.c"
}

#line 498 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(
#line 498 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_32,
#line 498 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 498 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 498 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7)
#line 498 "purity.m"
{
#line 502 "purity.m"
  while (MR_TRUE)
#line 502 "purity.m"
    {
#line 502 "purity.m"
      /* tailcall optimized into a loop */
#line 502 "purity.m"
      {
#line 502 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 502 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "purity.m"
          {
#line 1851 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_7 = check_hlds__purity__STATE_VARIABLE_Info_0_6;
#line 502 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 502 "purity.m"
          }
#line 502 "purity.m"
        else
#line 504 "purity.m"
          {
#line 504 "purity.m"
            MR_Word check_hlds__purity__Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "purity.m"
            MR_Word check_hlds__purity__Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "purity.m"
            MR_Word check_hlds__purity__Clause_17;
#line 504 "purity.m"
            MR_Word check_hlds__purity__ClausePurity_22;
#line 504 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_27_27;
#line 504 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_28_28;
#line 507 "purity.m"
            MR_Word * check_hlds__purity__AddrClauses_31;
#line 507 "purity.m"
            MR_Word check_hlds__purity__HeadVar__2_33;

#line 505 "purity.m"
            {
#line 505 "purity.m"
              check_hlds__purity__compute_purity_for_clause_6_p_0(check_hlds__purity__Clause0_15, &check_hlds__purity__Clause_17, check_hlds__purity__PredInfo_3, &check_hlds__purity__ClausePurity_22, check_hlds__purity__STATE_VARIABLE_Info_0_6, &check_hlds__purity__STATE_VARIABLE_Info_27_27);
            }
#line 506 "purity.m"
            {
#line 506 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__STATE_VARIABLE_Purity_0_4, check_hlds__purity__ClausePurity_22);
            }
#line 503 "purity.m"
            {
#line 503 "purity.m"
              check_hlds__purity__HeadVar__2_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, 0) = ((MR_Box) (check_hlds__purity__Clause_17));
#line 503 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, 1) = NULL;
#line 503 "purity.m"
            }
#line 503 "purity.m"
            check_hlds__purity__AddrClauses_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, (MR_Integer) 1));
#line 1902 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_32 = check_hlds__purity__HeadVar__2_33;
#line 507 "purity.m"
            /* direct tailcall eliminated */
#line 507 "purity.m"
            {
#line 507 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Clauses0_16;
#line 507 "purity.m"
              MR_Word * check_hlds__purity__AddrOfHeadVar__2__tmp_copy_32 = check_hlds__purity__AddrClauses_31;
#line 507 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4 = check_hlds__purity__STATE_VARIABLE_Purity_28_28;
#line 507 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_6 = check_hlds__purity__STATE_VARIABLE_Info_27_27;

#line 507 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_6 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 507 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_4 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4;
#line 507 "purity.m"
              check_hlds__purity__AddrOfHeadVar__2_32 = check_hlds__purity__AddrOfHeadVar__2__tmp_copy_32;
#line 507 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 507 "purity.m"
            }
#line 507 "purity.m"
            continue;
#line 504 "purity.m"
          }
#line 502 "purity.m"
      }
#line 502 "purity.m"
      break;
#line 502 "purity.m"
    }
#line 498 "purity.m"
}

#line 585 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(
#line 585 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__AddrOfGoal_29,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 585 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17)
#line 585 "purity.m"
{
#line 588 "purity.m"
  {
#line 588 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 588 "purity.m"
    MR_Word check_hlds__purity__Goal_8;
#line 588 "purity.m"
    MR_Word check_hlds__purity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
#line 588 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
#line 588 "purity.m"
    MR_Word check_hlds__purity__GoalExpr_14;
#line 588 "purity.m"
    MR_Word check_hlds__purity__GoalInfo_15;
#line 588 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24;

#line 590 "purity.m"
    {
#line 590 "purity.m"
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_12, &check_hlds__purity__GoalExpr_14, check_hlds__purity__GoalInfo0_13, check_hlds__purity__Purity_9, check_hlds__purity__ContainsTrace_10, check_hlds__purity__STATE_VARIABLE_Info_0_16, check_hlds__purity__STATE_VARIABLE_Info_17);
    }
#line 599 "purity.m"
    {
#line 599 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_9, check_hlds__purity__GoalInfo0_13, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24);
    }
#line 603 "purity.m"
#line 603 "purity.m"
    switch (*check_hlds__purity__ContainsTrace_10) {
#line 603 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "purity.m"
      case (MR_Integer) 1:
#line 604 "purity.m"
        {
#line 605 "purity.m"
          {
#line 605 "purity.m"
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
#line 604 "purity.m"
        }
#line 603 "purity.m"
        break;
#line 603 "purity.m"
      case (MR_Integer) 0:
#line 601 "purity.m"
        {
#line 602 "purity.m"
          {
#line 602 "purity.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
#line 601 "purity.m"
        }
#line 603 "purity.m"
        break;
#line 603 "purity.m"
    }
#line 593 "purity.m"
    {
#line 593 "purity.m"
      check_hlds__purity__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_8, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_14));
#line 593 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_8, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_15));
#line 593 "purity.m"
    }
#line 2027 "check_hlds.purity.c"
    *check_hlds__purity__AddrOfGoal_29 = check_hlds__purity__Goal_8;
#line 588 "purity.m"
  }
#line 585 "purity.m"
}

#line 641 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
#line 641 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_90,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 641 "purity.m"
{
#line 645 "purity.m"
  while (MR_TRUE)
#line 645 "purity.m"
    {
#line 645 "purity.m"
      /* tailcall optimized into a loop */
#line 645 "purity.m"
      {
#line 645 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 645 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "purity.m"
          {
#line 2070 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 645 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 645 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 645 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 645 "purity.m"
          }
#line 645 "purity.m"
        else
#line 647 "purity.m"
          {
#line 647 "purity.m"
            MR_Word check_hlds__purity__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 647 "purity.m"
            MR_Word check_hlds__purity__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 647 "purity.m"
            MR_Word check_hlds__purity__Goal_20;
#line 647 "purity.m"
            MR_Word check_hlds__purity__GoalPurity_25;
#line 647 "purity.m"
            MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 647 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 647 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_38_38;
#line 647 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_39_39;
#line 647 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
#line 662 "purity.m"
            MR_Word * check_hlds__purity__AddrGoals_89;
#line 662 "purity.m"
            MR_Word check_hlds__purity__HeadVar__2_91;

#line 648 "purity.m"
            {
#line 648 "purity.m"
              check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_18, &check_hlds__purity__Goal_20, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
            }
#line 653 "purity.m"
#line 653 "purity.m"
            switch (check_hlds__purity__GoalPurity_25) {
#line 653 "purity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 653 "purity.m"
              case (MR_Integer) 2:
#line 654 "purity.m"
                {
#line 654 "purity.m"
                  MR_Word check_hlds__purity__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
#line 654 "purity.m"
                  MR_Word check_hlds__purity__Context_29;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__Spec_30;
#line 654 "purity.m"
                  MR_String check_hlds__purity__PurityName_47;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__Pieces_48;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__Msg_49;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_52_52;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_53_53;
#line 654 "purity.m"
                  MR_String check_hlds__purity__V_54_54;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_60_60;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_61_61;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_65_65;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__Msgs0_71;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__Msgs_72;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_74_74;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_75_75;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_76_76;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_77_77;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_78_78;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_79_79;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_80_80;
#line 655 "purity.m"
                  MR_Word check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));

#line 656 "purity.m"
                  {
#line 656 "purity.m"
                    check_hlds__purity__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_28);
                  }
#line 1557 "purity.m"
                  {
#line 1557 "purity.m"
                    parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__GoalPurity_25, &check_hlds__purity__PurityName_47);
                  }
#line 1559 "purity.m"
                  {
#line 1559 "purity.m"
                    check_hlds__purity__V_54_54 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_47, (MR_String) ",");
                  }
#line 1559 "purity.m"
                  {
#line 1559 "purity.m"
                    check_hlds__purity__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__V_53_53, 0) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1559 "purity.m"
                  }
#line 1559 "purity.m"
                  {
#line 1559 "purity.m"
                    check_hlds__purity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 0) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1559 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[29])));
#line 1559 "purity.m"
                  }
#line 1558 "purity.m"
                  {
#line 1558 "purity.m"
                    check_hlds__purity__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[27])));
#line 1558 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 1) = ((MR_Box) (check_hlds__purity__V_52_52));
#line 1558 "purity.m"
                  }
#line 1561 "purity.m"
                  {
#line 1561 "purity.m"
                    check_hlds__purity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__Pieces_48));
#line 1561 "purity.m"
                  }
#line 1561 "purity.m"
                  {
#line 1561 "purity.m"
                    check_hlds__purity__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 0) = ((MR_Box) (check_hlds__purity__V_61_61));
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "purity.m"
                  }
#line 1561 "purity.m"
                  {
#line 1561 "purity.m"
                    check_hlds__purity__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 0) = ((MR_Box) (check_hlds__purity__Context_29));
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 1) = ((MR_Box) (check_hlds__purity__V_60_60));
#line 1561 "purity.m"
                  }
#line 1562 "purity.m"
                  {
#line 1562 "purity.m"
                    check_hlds__purity__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1562 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 0) = ((MR_Box) (check_hlds__purity__Msg_49));
#line 1562 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1562 "purity.m"
                  }
#line 1562 "purity.m"
                  {
#line 1562 "purity.m"
                    check_hlds__purity__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1562 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1562 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1562 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 2) = ((MR_Box) (check_hlds__purity__V_65_65));
#line 1562 "purity.m"
                  }
#line 1610 "purity.m"
                  check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
#line 1610 "purity.m"
                  check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
#line 1610 "purity.m"
                  check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
#line 1610 "purity.m"
                  check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
#line 1610 "purity.m"
                  check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
#line 1610 "purity.m"
                  check_hlds__purity__Msgs0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
#line 1610 "purity.m"
                  check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
#line 1610 "purity.m"
                  check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 7)));
#line 1611 "purity.m"
                  {
#line 1611 "purity.m"
                    check_hlds__purity__Msgs_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 0) = ((MR_Box) (check_hlds__purity__Spec_30));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 1) = ((MR_Box) (check_hlds__purity__Msgs0_71));
#line 1611 "purity.m"
                  }
#line 1612 "purity.m"
                  {
#line 1612 "purity.m"
                    check_hlds__purity__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1612 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1612 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (check_hlds__purity__V_76_76));
#line 1612 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (check_hlds__purity__V_77_77));
#line 1612 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (check_hlds__purity__V_78_78));
#line 1612 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (check_hlds__purity__Msgs_72));
#line 1612 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) (check_hlds__purity__V_79_79));
#line 1612 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (check_hlds__purity__V_80_80));
#line 1612 "purity.m"
                  }
#line 654 "purity.m"
                }
#line 653 "purity.m"
                break;
#line 653 "purity.m"
              case (MR_Integer) 0:
#line 650 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 653 "purity.m"
                break;
#line 653 "purity.m"
              case (MR_Integer) 1:
#line 651 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 653 "purity.m"
                break;
#line 653 "purity.m"
            }
#line 660 "purity.m"
            {
#line 660 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
#line 661 "purity.m"
            {
#line 661 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
#line 646 "purity.m"
            {
#line 646 "purity.m"
              check_hlds__purity__HeadVar__2_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, 0) = ((MR_Box) (check_hlds__purity__Goal_20));
#line 646 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, 1) = NULL;
#line 646 "purity.m"
            }
#line 646 "purity.m"
            check_hlds__purity__AddrGoals_89 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, (MR_Integer) 1));
#line 2347 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_90 = check_hlds__purity__HeadVar__2_91;
#line 662 "purity.m"
            /* direct tailcall eliminated */
#line 662 "purity.m"
            {
#line 662 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Goals0_19;
#line 662 "purity.m"
              MR_Word * check_hlds__purity__AddrOfHeadVar__2__tmp_copy_90 = check_hlds__purity__AddrGoals_89;
#line 662 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Purity_39_39;
#line 662 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
#line 662 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__purity__STATE_VARIABLE_Info_38_38;

#line 662 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 662 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5;
#line 662 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3;
#line 662 "purity.m"
              check_hlds__purity__AddrOfHeadVar__2_90 = check_hlds__purity__AddrOfHeadVar__2__tmp_copy_90;
#line 662 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 662 "purity.m"
            }
#line 662 "purity.m"
            continue;
#line 647 "purity.m"
          }
#line 645 "purity.m"
      }
#line 645 "purity.m"
      break;
#line 645 "purity.m"
    }
#line 641 "purity.m"
}

#line 627 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(
#line 627 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 627 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_44,
#line 627 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 627 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 627 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 627 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 627 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 627 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 627 "purity.m"
{
#line 631 "purity.m"
  while (MR_TRUE)
#line 631 "purity.m"
    {
#line 631 "purity.m"
      /* tailcall optimized into a loop */
#line 631 "purity.m"
      {
#line 631 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 631 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "purity.m"
          {
#line 2425 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 631 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 631 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 631 "purity.m"
          }
#line 631 "purity.m"
        else
#line 633 "purity.m"
          {
#line 633 "purity.m"
            MR_Word check_hlds__purity__Case0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 633 "purity.m"
            MR_Word check_hlds__purity__Cases0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 633 "purity.m"
            MR_Word check_hlds__purity__Case_20;
#line 633 "purity.m"
            MR_Word check_hlds__purity__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 0)));
#line 633 "purity.m"
            MR_Word check_hlds__purity__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 1)));
#line 633 "purity.m"
            MR_Word check_hlds__purity__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 2)));
#line 633 "purity.m"
            MR_Word check_hlds__purity__Goal_28;
#line 633 "purity.m"
            MR_Word check_hlds__purity__GoalPurity_29;
#line 633 "purity.m"
            MR_Word check_hlds__purity__GoalContainsTrace_30;
#line 633 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 633 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_38_38;
#line 633 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39;
#line 639 "purity.m"
            MR_Word * check_hlds__purity__AddrCases_43;
#line 639 "purity.m"
            MR_Word check_hlds__purity__HeadVar__2_45;

#line 635 "purity.m"
            {
#line 635 "purity.m"
              check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_27, &check_hlds__purity__Goal_28, &check_hlds__purity__GoalPurity_29, &check_hlds__purity__GoalContainsTrace_30, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
            }
#line 636 "purity.m"
            {
#line 636 "purity.m"
              check_hlds__purity__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 636 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 0) = ((MR_Box) (check_hlds__purity__MainConsId_25));
#line 636 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 1) = ((MR_Box) (check_hlds__purity__OtherConsIds_26));
#line 636 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 2) = ((MR_Box) (check_hlds__purity__Goal_28));
#line 636 "purity.m"
            }
#line 637 "purity.m"
            {
#line 637 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_38_38 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_29, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
#line 638 "purity.m"
            {
#line 638 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_30, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
#line 632 "purity.m"
            {
#line 632 "purity.m"
              check_hlds__purity__HeadVar__2_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_45, 0) = ((MR_Box) (check_hlds__purity__Case_20));
#line 632 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_45, 1) = NULL;
#line 632 "purity.m"
            }
#line 632 "purity.m"
            check_hlds__purity__AddrCases_43 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_45, (MR_Integer) 1));
#line 2507 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_44 = check_hlds__purity__HeadVar__2_45;
#line 639 "purity.m"
            /* direct tailcall eliminated */
#line 639 "purity.m"
            {
#line 639 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Cases0_19;
#line 639 "purity.m"
              MR_Word * check_hlds__purity__AddrOfHeadVar__2__tmp_copy_44 = check_hlds__purity__AddrCases_43;
#line 639 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Purity_38_38;
#line 639 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39;
#line 639 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__purity__STATE_VARIABLE_Info_37_37;

#line 639 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 639 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5;
#line 639 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3;
#line 639 "purity.m"
              check_hlds__purity__AddrOfHeadVar__2_44 = check_hlds__purity__AddrOfHeadVar__2__tmp_copy_44;
#line 639 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 639 "purity.m"
            }
#line 639 "purity.m"
            continue;
#line 633 "purity.m"
          }
#line 631 "purity.m"
      }
#line 631 "purity.m"
      break;
#line 631 "purity.m"
    }
#line 627 "purity.m"
}

#line 612 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(
#line 612 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_41,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 612 "purity.m"
{
#line 616 "purity.m"
  while (MR_TRUE)
#line 616 "purity.m"
    {
#line 616 "purity.m"
      /* tailcall optimized into a loop */
#line 616 "purity.m"
      {
#line 616 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 616 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "purity.m"
          {
#line 2585 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 616 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 616 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 616 "purity.m"
          }
#line 616 "purity.m"
        else
#line 618 "purity.m"
          {
#line 618 "purity.m"
            MR_Word check_hlds__purity__HeadGoal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 618 "purity.m"
            MR_Word check_hlds__purity__TailGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "purity.m"
            MR_Word check_hlds__purity__HeadGoal_24;
#line 618 "purity.m"
            MR_Word check_hlds__purity__GoalPurity_25;
#line 618 "purity.m"
            MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 618 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_34_34;
#line 618 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_35_35;
#line 618 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
#line 623 "purity.m"
            MR_Word * check_hlds__purity__AddrTailGoals_40;
#line 623 "purity.m"
            MR_Word check_hlds__purity__HeadVar__2_42;

#line 619 "purity.m"
            {
#line 619 "purity.m"
              check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__HeadGoal0_18, &check_hlds__purity__HeadGoal_24, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_34_34);
            }
#line 621 "purity.m"
            {
#line 621 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
#line 622 "purity.m"
            {
#line 622 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
#line 625 "purity.m"
            {
#line 625 "purity.m"
              check_hlds__purity__HeadVar__2_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_42, 0) = ((MR_Box) (check_hlds__purity__HeadGoal_24));
#line 625 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_42, 1) = NULL;
#line 625 "purity.m"
            }
#line 625 "purity.m"
            check_hlds__purity__AddrTailGoals_40 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_42, (MR_Integer) 1));
#line 2647 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_41 = check_hlds__purity__HeadVar__2_42;
#line 623 "purity.m"
            /* direct tailcall eliminated */
#line 623 "purity.m"
            {
#line 623 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__TailGoals0_19;
#line 623 "purity.m"
              MR_Word * check_hlds__purity__AddrOfHeadVar__2__tmp_copy_41 = check_hlds__purity__AddrTailGoals_40;
#line 623 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Purity_35_35;
#line 623 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
#line 623 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__purity__STATE_VARIABLE_Info_34_34;

#line 623 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 623 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5;
#line 623 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3;
#line 623 "purity.m"
              check_hlds__purity__AddrOfHeadVar__2_41 = check_hlds__purity__AddrOfHeadVar__2__tmp_copy_41;
#line 623 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 623 "purity.m"
            }
#line 623 "purity.m"
            continue;
#line 618 "purity.m"
          }
#line 616 "purity.m"
      }
#line 616 "purity.m"
      break;
#line 616 "purity.m"
    }
#line 612 "purity.m"
}

#line 1583 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
#line 1583 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1583 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1583 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1583 "purity.m"
{
#line 1583 "purity.m"
  {
#line 1583 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1583 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1583 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1583 "purity.m"
    {
#line 1583 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
    }
#line 1583 "purity.m"
  }
#line 1583 "purity.m"
}

#line 1583 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
#line 1583 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1583 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1583 "purity.m"
{
#line 2728 "check_hlds.purity.c"
  {
#line 2730 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 2733 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 2735 "check_hlds.purity.c"
  }
#line 1583 "purity.m"
}

#line 1591 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
#line 1591 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1591 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1591 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1591 "purity.m"
{
#line 1591 "purity.m"
  {
#line 1591 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1591 "purity.m"
    MR_Integer check_hlds__purity__CastX_27 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1591 "purity.m"
    MR_Integer check_hlds__purity__CastY_28 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1591 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__CastX_27 == check_hlds__purity__CastY_28);
#line 1591 "purity.m"
    if (check_hlds__purity__succeeded)
#line 2764 "check_hlds.purity.c"
      *check_hlds__purity__HeadVar__1_1 = (MR_Integer) 0;
#line 1591 "purity.m"
    else
#line 1591 "purity.m"
      {
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 2)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 3)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 4)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 5)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 6)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 7)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 0)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 1)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 2)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 3)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 4)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 5)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 6)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 7)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_20_20;

#line 1591 "purity.m"
        {
#line 1591 "purity.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__purity__V_20_20, check_hlds__purity__V_4_4, check_hlds__purity__V_12_12);
        }
#line 2810 "check_hlds.purity.c"
        check_hlds__purity__succeeded = (check_hlds__purity__V_20_20 == (MR_Integer) 0);
#line 1591 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1591 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
          *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_20_20;
#line 1591 "purity.m"
        else
#line 1591 "purity.m"
          {
#line 1591 "purity.m"
            MR_Word check_hlds__purity__V_21_21;
#line 1591 "purity.m"
            MR_Integer check_hlds__purity__V_37_37 = (MR_Integer) check_hlds__purity__V_5_5;
#line 1591 "purity.m"
            MR_Integer check_hlds__purity__V_38_38 = (MR_Integer) check_hlds__purity__V_13_13;

#line 1591 "purity.m"
            {
#line 1591 "purity.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__purity__V_21_21, check_hlds__purity__V_37_37, check_hlds__purity__V_38_38);
            }
#line 2834 "check_hlds.purity.c"
            check_hlds__purity__succeeded = (check_hlds__purity__V_21_21 == (MR_Integer) 0);
#line 1591 "purity.m"
            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1591 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
              *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_21_21;
#line 1591 "purity.m"
            else
#line 1591 "purity.m"
              {
#line 1591 "purity.m"
                MR_Word check_hlds__purity__V_22_22;

#line 1591 "purity.m"
                {
#line 1591 "purity.m"
                  hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__purity__V_22_22, check_hlds__purity__V_6_6, check_hlds__purity__V_14_14);
                }
#line 2854 "check_hlds.purity.c"
                check_hlds__purity__succeeded = (check_hlds__purity__V_22_22 == (MR_Integer) 0);
#line 1591 "purity.m"
                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1591 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                  *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_22_22;
#line 1591 "purity.m"
                else
#line 1591 "purity.m"
                  {
#line 1591 "purity.m"
                    MR_Word check_hlds__purity__V_23_23;

#line 1591 "purity.m"
                    {
#line 1591 "purity.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_1[1], &check_hlds__purity__V_23_23, ((MR_Box) (check_hlds__purity__V_7_7)), ((MR_Box) (check_hlds__purity__V_15_15)));
                    }
#line 2874 "check_hlds.purity.c"
                    check_hlds__purity__succeeded = (check_hlds__purity__V_23_23 == (MR_Integer) 0);
#line 1591 "purity.m"
                    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1591 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                      *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_23_23;
#line 1591 "purity.m"
                    else
#line 1591 "purity.m"
                      {
#line 1591 "purity.m"
                        MR_Word check_hlds__purity__V_24_24;

#line 1591 "purity.m"
                        {
#line 1591 "purity.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[0], &check_hlds__purity__V_24_24, ((MR_Box) (check_hlds__purity__V_8_8)), ((MR_Box) (check_hlds__purity__V_16_16)));
                        }
#line 2894 "check_hlds.purity.c"
                        check_hlds__purity__succeeded = (check_hlds__purity__V_24_24 == (MR_Integer) 0);
#line 1591 "purity.m"
                        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1591 "purity.m"
                        if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                          *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_24_24;
#line 1591 "purity.m"
                        else
#line 1591 "purity.m"
                          {
#line 1591 "purity.m"
                            MR_Word check_hlds__purity__V_25_25;

#line 1591 "purity.m"
                            {
#line 1591 "purity.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[2], &check_hlds__purity__V_25_25, ((MR_Box) (check_hlds__purity__V_9_9)), ((MR_Box) (check_hlds__purity__V_17_17)));
                            }
#line 2914 "check_hlds.purity.c"
                            check_hlds__purity__succeeded = (check_hlds__purity__V_25_25 == (MR_Integer) 0);
#line 1591 "purity.m"
                            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1591 "purity.m"
                            if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                              *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_25_25;
#line 1591 "purity.m"
                            else
#line 1591 "purity.m"
                              {
#line 1591 "purity.m"
                                MR_Word check_hlds__purity__V_26_26;
#line 1591 "purity.m"
                                MR_Integer check_hlds__purity__V_39_39 = (MR_Integer) check_hlds__purity__V_10_10;
#line 1591 "purity.m"
                                MR_Integer check_hlds__purity__V_40_40 = (MR_Integer) check_hlds__purity__V_18_18;

#line 1591 "purity.m"
                                {
#line 1591 "purity.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__purity__V_26_26, check_hlds__purity__V_39_39, check_hlds__purity__V_40_40);
                                }
#line 2938 "check_hlds.purity.c"
                                check_hlds__purity__succeeded = (check_hlds__purity__V_26_26 == (MR_Integer) 0);
#line 1591 "purity.m"
                                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1591 "purity.m"
                                if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                                  *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_26_26;
#line 1591 "purity.m"
                                else
#line 1591 "purity.m"
                                  {
#line 1591 "purity.m"
                                    MR_Integer check_hlds__purity__V_41_41 = (MR_Integer) check_hlds__purity__V_11_11;
#line 1591 "purity.m"
                                    MR_Integer check_hlds__purity__V_42_42 = (MR_Integer) check_hlds__purity__V_19_19;

#line 1591 "purity.m"
                                    {
#line 1591 "purity.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__V_41_41, check_hlds__purity__V_42_42);
                                    }
#line 1591 "purity.m"
                                  }
#line 1591 "purity.m"
                              }
#line 1591 "purity.m"
                          }
#line 1591 "purity.m"
                      }
#line 1591 "purity.m"
                  }
#line 1591 "purity.m"
              }
#line 1591 "purity.m"
          }
#line 1591 "purity.m"
      }
#line 1591 "purity.m"
  }
#line 1591 "purity.m"
}

#line 1591 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
#line 1591 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1591 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1591 "purity.m"
{
#line 1591 "purity.m"
  {
#line 1591 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1591 "purity.m"
    MR_Integer check_hlds__purity__CastX_19 = (MR_Integer) check_hlds__purity__HeadVar__1_1;
#line 1591 "purity.m"
    MR_Integer check_hlds__purity__CastY_20 = (MR_Integer) check_hlds__purity__HeadVar__2_2;

#line 1591 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__CastX_19 == check_hlds__purity__CastY_20);
#line 1591 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
      check_hlds__purity__succeeded = MR_TRUE;
#line 1591 "purity.m"
    else
#line 1591 "purity.m"
      {
#line 1591 "purity.m"
        MR_Word check_hlds__purity__TypeInfo_23_23;
#line 1591 "purity.m"
        MR_Word check_hlds__purity__TypeInfo_24_24;
#line 1591 "purity.m"
        MR_Word check_hlds__purity__TypeInfo_25_25;
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 2)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 3)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 4)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 5)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 6)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 7)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 2)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 3)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 4)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 5)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 6)));
#line 1591 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 7)));

#line 3048 "check_hlds.purity.c"
        {
#line 3050 "check_hlds.purity.c"
          check_hlds__purity__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__purity__V_3_3, check_hlds__purity__V_11_11);
        }
#line 1591 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
          {
#line 3057 "check_hlds.purity.c"
            check_hlds__purity__succeeded = (check_hlds__purity__V_4_4 == check_hlds__purity__V_12_12);
#line 1591 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
              {
#line 3063 "check_hlds.purity.c"
                {
#line 3065 "check_hlds.purity.c"
                  check_hlds__purity__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__purity__V_5_5, check_hlds__purity__V_13_13);
                }
#line 1591 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                  {
#line 3072 "check_hlds.purity.c"
                    check_hlds__purity__TypeInfo_23_23 = (MR_Word) &check_hlds__purity_scalar_common_1[1];
#line 3074 "check_hlds.purity.c"
                    {
#line 3076 "check_hlds.purity.c"
                      check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_23_23, ((MR_Box) (check_hlds__purity__V_6_6)), ((MR_Box) (check_hlds__purity__V_14_14)));
                    }
#line 1591 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                      {
#line 3083 "check_hlds.purity.c"
                        check_hlds__purity__TypeInfo_24_24 = (MR_Word) &check_hlds__purity_scalar_common_2[0];
#line 3085 "check_hlds.purity.c"
                        {
#line 3087 "check_hlds.purity.c"
                          check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_24_24, ((MR_Box) (check_hlds__purity__V_7_7)), ((MR_Box) (check_hlds__purity__V_15_15)));
                        }
#line 1591 "purity.m"
                        if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                          {
#line 3094 "check_hlds.purity.c"
                            check_hlds__purity__TypeInfo_25_25 = (MR_Word) &check_hlds__purity_scalar_common_2[2];
#line 3096 "check_hlds.purity.c"
                            {
#line 3098 "check_hlds.purity.c"
                              check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_25_25, ((MR_Box) (check_hlds__purity__V_8_8)), ((MR_Box) (check_hlds__purity__V_16_16)));
                            }
#line 1591 "purity.m"
                            if (check_hlds__purity__succeeded)
#line 1591 "purity.m"
                              {
#line 3105 "check_hlds.purity.c"
                                check_hlds__purity__succeeded = (check_hlds__purity__V_9_9 == check_hlds__purity__V_17_17);
#line 1591 "purity.m"
                                if (check_hlds__purity__succeeded)
#line 3109 "check_hlds.purity.c"
                                  check_hlds__purity__succeeded = (check_hlds__purity__V_10_10 == check_hlds__purity__V_18_18);
#line 1591 "purity.m"
                              }
#line 1591 "purity.m"
                          }
#line 1591 "purity.m"
                      }
#line 1591 "purity.m"
                  }
#line 1591 "purity.m"
              }
#line 1591 "purity.m"
          }
#line 1591 "purity.m"
      }
#line 1591 "purity.m"
    return check_hlds__purity__succeeded;
#line 1591 "purity.m"
  }
#line 1591 "purity.m"
}

#line 204 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0(
#line 204 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 204 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 204 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 204 "purity.m"
{
#line 204 "purity.m"
  {
#line 204 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 204 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 204 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 204 "purity.m"
    {
#line 204 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
    }
#line 204 "purity.m"
  }
#line 204 "purity.m"
}

#line 204 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0(
#line 204 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 204 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 204 "purity.m"
{
#line 3171 "check_hlds.purity.c"
  {
#line 3173 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 3176 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 3178 "check_hlds.purity.c"
  }
#line 204 "purity.m"
}

#line 1587 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
#line 1587 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1587 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1587 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1587 "purity.m"
{
#line 1587 "purity.m"
  {
#line 1587 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1587 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1587 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1587 "purity.m"
    {
#line 1587 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
    }
#line 1587 "purity.m"
  }
#line 1587 "purity.m"
}

#line 1587 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
#line 1587 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1587 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1587 "purity.m"
{
#line 3222 "check_hlds.purity.c"
  {
#line 3224 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 3227 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 3229 "check_hlds.purity.c"
  }
#line 1587 "purity.m"
}

#line 1614 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
#line 1614 "purity.m"
  MR_Word check_hlds__purity__Specs_4,
#line 1614 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_10,
#line 1614 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_11)
#line 1614 "purity.m"
{
#line 1619 "purity.m"
  {
#line 1619 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1619 "purity.m"
    if ((check_hlds__purity__Specs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1619 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_11 = check_hlds__purity__STATE_VARIABLE_Info_0_10;
#line 1619 "purity.m"
    else
#line 1621 "purity.m"
      {
#line 1621 "purity.m"
        MR_Word check_hlds__purity__Msgs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1621 "purity.m"
        MR_Word check_hlds__purity__Msgs_9;
#line 1622 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1622 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1622 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1622 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1622 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1622 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1622 "purity.m"
        MR_Word check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1624 "purity.m"
        MR_Word check_hlds__purity__V_20_20;
#line 1624 "purity.m"
        MR_Word check_hlds__purity__V_21_21;
#line 1624 "purity.m"
        MR_Word check_hlds__purity__V_22_22;
#line 1624 "purity.m"
        MR_Word check_hlds__purity__V_23_23;
#line 1624 "purity.m"
        MR_Word check_hlds__purity__V_24_24;
#line 1624 "purity.m"
        MR_Word check_hlds__purity__V_26_26;
#line 1624 "purity.m"
        MR_Word check_hlds__purity__V_27_27;
#line 1624 "purity.m"
        MR_Word check_hlds__purity__V_25_25;

#line 1623 "purity.m"
        {
#line 1623 "purity.m"
          check_hlds__purity__Msgs_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__Specs_4, check_hlds__purity__Msgs0_8);
        }
#line 1624 "purity.m"
        check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1624 "purity.m"
        check_hlds__purity__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1624 "purity.m"
        check_hlds__purity__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1624 "purity.m"
        check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1624 "purity.m"
        check_hlds__purity__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1624 "purity.m"
        check_hlds__purity__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1624 "purity.m"
        check_hlds__purity__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1624 "purity.m"
        check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1624 "purity.m"
        {
#line 1624 "purity.m"
          MR_Word base;
#line 1624 "purity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1624 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_11 = base;
#line 1624 "purity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_20_20));
#line 1624 "purity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1624 "purity.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1624 "purity.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1624 "purity.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1624 "purity.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_9));
#line 1624 "purity.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_26_26));
#line 1624 "purity.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1624 "purity.m"
        }
#line 1621 "purity.m"
      }
#line 1619 "purity.m"
  }
#line 1614 "purity.m"
}

#line 1606 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
#line 1606 "purity.m"
  MR_Word check_hlds__purity__Spec_4,
#line 1606 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1606 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9)
#line 1606 "purity.m"
{
#line 1609 "purity.m"
  {
#line 1609 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1609 "purity.m"
    MR_Word check_hlds__purity__Msgs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1609 "purity.m"
    MR_Word check_hlds__purity__Msgs_7;
#line 1609 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1609 "purity.m"
    MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1609 "purity.m"
    MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1609 "purity.m"
    MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1609 "purity.m"
    MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1609 "purity.m"
    MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1609 "purity.m"
    MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));

#line 1611 "purity.m"
    {
#line 1611 "purity.m"
      check_hlds__purity__Msgs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_7, 0) = ((MR_Box) (check_hlds__purity__Spec_4));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_7, 1) = ((MR_Box) (check_hlds__purity__Msgs0_6));
#line 1611 "purity.m"
    }
#line 1612 "purity.m"
    {
#line 1612 "purity.m"
      MR_Word base;
#line 1612 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_9 = base;
#line 1612 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_11_11));
#line 1612 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_12_12));
#line 1612 "purity.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_13_13));
#line 1612 "purity.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_14_14));
#line 1612 "purity.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_15_15));
#line 1612 "purity.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_7));
#line 1612 "purity.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_16_16));
#line 1612 "purity.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_17_17));
#line 1612 "purity.m"
    }
#line 1609 "purity.m"
  }
#line 1606 "purity.m"
}

#line 1494 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
#line 1494 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1494 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 1494 "purity.m"
  MR_Word check_hlds__purity__Context_8,
#line 1494 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9)
#line 1494 "purity.m"
{
#line 1498 "purity.m"
  {
#line 1498 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_65_65;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__PredInfo_11;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__ActualPurity_12;
#line 1498 "purity.m"
    MR_String check_hlds__purity__DeclaredPurityName_13;
#line 1498 "purity.m"
    MR_String check_hlds__purity__ActualPurityName_14;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__PredPieces_15;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__Pieces1_16;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__Pieces2_17;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_30_30;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_33_33;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_34_34;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1498 "purity.m"
    MR_Word check_hlds__purity__V_63_63;

#line 1499 "purity.m"
    {
#line 1499 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_6, check_hlds__purity__PredId_7, &check_hlds__purity__PredInfo_11);
    }
#line 1500 "purity.m"
    {
#line 1500 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_11, &check_hlds__purity__ActualPurity_12);
    }
#line 1501 "purity.m"
    {
#line 1501 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_9, &check_hlds__purity__DeclaredPurityName_13);
    }
#line 1502 "purity.m"
    {
#line 1502 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_12, &check_hlds__purity__ActualPurityName_14);
    }
#line 1503 "purity.m"
    {
#line 1503 "purity.m"
      check_hlds__purity__PredPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 0, check_hlds__purity__PredId_7);
    }
#line 3507 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1507 "purity.m"
    {
#line 1507 "purity.m"
      check_hlds__purity__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1507 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_34_34, 1) = ((MR_Box) (check_hlds__purity__DeclaredPurityName_13));
#line 1507 "purity.m"
    }
#line 1507 "purity.m"
    {
#line 1507 "purity.m"
      check_hlds__purity__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 0) = ((MR_Box) (check_hlds__purity__V_34_34));
#line 1507 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
#line 1507 "purity.m"
    }
#line 1507 "purity.m"
    {
#line 1507 "purity.m"
      check_hlds__purity__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[44])));
#line 1507 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 1) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1507 "purity.m"
    }
#line 1506 "purity.m"
    {
#line 1506 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (check_hlds__purity__V_30_30));
#line 1506 "purity.m"
    }
#line 1506 "purity.m"
    {
#line 1506 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[61])));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 1) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1506 "purity.m"
    }
#line 1506 "purity.m"
    {
#line 1506 "purity.m"
      check_hlds__purity__V_24_24 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_65_65, check_hlds__purity__PredPieces_15, check_hlds__purity__V_25_25);
    }
#line 1506 "purity.m"
    {
#line 1506 "purity.m"
      check_hlds__purity__Pieces1_16 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[60]), check_hlds__purity__V_24_24);
    }
#line 1512 "purity.m"
#line 1512 "purity.m"
    switch (check_hlds__purity__ActualPurity_12) {
#line 1512 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1512 "purity.m"
      case (MR_Integer) 2:
#line 1512 "purity.m"
      case (MR_Integer) 1:
#line 1515 "purity.m"
        {
#line 1515 "purity.m"
          MR_Word check_hlds__purity__V_43_43;
#line 1515 "purity.m"
          MR_Word check_hlds__purity__V_44_44;

#line 1516 "purity.m"
          {
#line 1516 "purity.m"
            check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1516 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_44_44, 1) = ((MR_Box) (check_hlds__purity__ActualPurityName_14));
#line 1516 "purity.m"
          }
#line 1516 "purity.m"
          {
#line 1516 "purity.m"
            check_hlds__purity__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 0) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1516 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[20])));
#line 1516 "purity.m"
          }
#line 1516 "purity.m"
          {
#line 1516 "purity.m"
            check_hlds__purity__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[62])));
#line 1516 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_17, 1) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1516 "purity.m"
          }
#line 1515 "purity.m"
        }
#line 1512 "purity.m"
        break;
#line 1512 "purity.m"
      case (MR_Integer) 0:
#line 1511 "purity.m"
        check_hlds__purity__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[22]);
#line 1512 "purity.m"
        break;
#line 1512 "purity.m"
    }
#line 1519 "purity.m"
    {
#line 1519 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__Pieces1_16));
#line 1519 "purity.m"
    }
#line 1519 "purity.m"
    {
#line 1519 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__Pieces2_17));
#line 1519 "purity.m"
    }
#line 1519 "purity.m"
    {
#line 1519 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1519 "purity.m"
    }
#line 1519 "purity.m"
    {
#line 1519 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1519 "purity.m"
    }
#line 1519 "purity.m"
    {
#line 1519 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_8));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1519 "purity.m"
    }
#line 1520 "purity.m"
    {
#line 1520 "purity.m"
      check_hlds__purity__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_63_63, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1520 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1520 "purity.m"
    }
#line 1520 "purity.m"
    {
#line 1520 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1520 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1520 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1520 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_63_63));
#line 1520 "purity.m"
    }
#line 1498 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1498 "purity.m"
  }
#line 1494 "purity.m"
}

#line 1469 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
#line 1469 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 1469 "purity.m"
  MR_Word check_hlds__purity__PredId_6,
#line 1469 "purity.m"
  MR_Word check_hlds__purity__Context_7)
#line 1469 "purity.m"
{
#line 1472 "purity.m"
  {
#line 1472 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__Spec_8;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_63_63;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__PredInfo_9;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_10;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__Purity_11;
#line 1472 "purity.m"
    MR_String check_hlds__purity__PurityName_12;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__PredPieces_13;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__Pieces1_14;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__Pieces2_15;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__Msg_16;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_18_18;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_21_21;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1472 "purity.m"
    MR_Word check_hlds__purity__V_61_61;

#line 1473 "purity.m"
    {
#line 1473 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_5, check_hlds__purity__PredId_6, &check_hlds__purity__PredInfo_9);
    }
#line 1474 "purity.m"
    {
#line 1474 "purity.m"
      check_hlds__purity__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_9);
    }
#line 1475 "purity.m"
    {
#line 1475 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__Purity_11);
    }
#line 1476 "purity.m"
    {
#line 1476 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_11, &check_hlds__purity__PurityName_12);
    }
#line 1477 "purity.m"
    {
#line 1477 "purity.m"
      check_hlds__purity__PredPieces_13 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_5, (MR_Integer) 0, check_hlds__purity__PredId_6);
    }
#line 3781 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1479 "purity.m"
    {
#line 1479 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1479 "purity.m"
    }
#line 1479 "purity.m"
    {
#line 1479 "purity.m"
      check_hlds__purity__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1479 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1479 "purity.m"
    }
#line 1479 "purity.m"
    {
#line 1479 "purity.m"
      check_hlds__purity__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[55])));
#line 1479 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_18_18, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1479 "purity.m"
    }
#line 1480 "purity.m"
    {
#line 1480 "purity.m"
      check_hlds__purity__V_24_24 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__PredPieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1479 "purity.m"
    {
#line 1479 "purity.m"
      check_hlds__purity__Pieces1_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__V_18_18, check_hlds__purity__V_24_24);
    }
#line 1485 "purity.m"
#line 1485 "purity.m"
    switch (check_hlds__purity__PredOrFunc_10) {
#line 1485 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1485 "purity.m"
      case (MR_Integer) 1:
#line 1486 "purity.m"
        {
#line 1486 "purity.m"
          MR_Word check_hlds__purity__V_33_33;
#line 1486 "purity.m"
          MR_Word check_hlds__purity__V_36_36;
#line 1486 "purity.m"
          MR_Word check_hlds__purity__V_37_37;

#line 1489 "purity.m"
          {
#line 1489 "purity.m"
            check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1489 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_37_37, 1) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1489 "purity.m"
          }
#line 1489 "purity.m"
          {
#line 1489 "purity.m"
            check_hlds__purity__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 0) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1489 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
#line 1489 "purity.m"
          }
#line 1488 "purity.m"
          {
#line 1488 "purity.m"
            check_hlds__purity__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[57])));
#line 1488 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 1) = ((MR_Box) (check_hlds__purity__V_36_36));
#line 1488 "purity.m"
          }
#line 1487 "purity.m"
          {
#line 1487 "purity.m"
            check_hlds__purity__Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[56])));
#line 1487 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 1) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1487 "purity.m"
          }
#line 1486 "purity.m"
        }
#line 1485 "purity.m"
        break;
#line 1485 "purity.m"
      case (MR_Integer) 0:
#line 1482 "purity.m"
        {
#line 1482 "purity.m"
          MR_Word check_hlds__purity__V_46_46;
#line 1482 "purity.m"
          MR_Word check_hlds__purity__V_47_47;

#line 1484 "purity.m"
          {
#line 1484 "purity.m"
            check_hlds__purity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1484 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_47_47, 1) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1484 "purity.m"
          }
#line 1484 "purity.m"
          {
#line 1484 "purity.m"
            check_hlds__purity__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1484 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
#line 1484 "purity.m"
          }
#line 1483 "purity.m"
          {
#line 1483 "purity.m"
            check_hlds__purity__Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[58])));
#line 1483 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 1) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 1483 "purity.m"
          }
#line 1482 "purity.m"
        }
#line 1485 "purity.m"
        break;
#line 1485 "purity.m"
    }
#line 1491 "purity.m"
    {
#line 1491 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__Pieces1_14));
#line 1491 "purity.m"
    }
#line 1491 "purity.m"
    {
#line 1491 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__Pieces2_15));
#line 1491 "purity.m"
    }
#line 1491 "purity.m"
    {
#line 1491 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1491 "purity.m"
    }
#line 1491 "purity.m"
    {
#line 1491 "purity.m"
      check_hlds__purity__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_54_54, 0) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_54_54, 1) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1491 "purity.m"
    }
#line 1491 "purity.m"
    {
#line 1491 "purity.m"
      check_hlds__purity__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_16, 0) = ((MR_Box) (check_hlds__purity__Context_7));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_16, 1) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1491 "purity.m"
    }
#line 1492 "purity.m"
    {
#line 1492 "purity.m"
      check_hlds__purity__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__Msg_16));
#line 1492 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "purity.m"
    }
#line 1492 "purity.m"
    {
#line 1492 "purity.m"
      check_hlds__purity__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1492 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 2) = ((MR_Box) (check_hlds__purity__V_61_61));
#line 1492 "purity.m"
    }
#line 1472 "purity.m"
    return check_hlds__purity__Spec_8;
#line 1472 "purity.m"
  }
#line 1469 "purity.m"
}

#line 1445 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inferred_impure_4_f_0(
#line 1445 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1445 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1445 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1445 "purity.m"
  MR_Word check_hlds__purity__Purity_9)
#line 1445 "purity.m"
{
#line 1448 "purity.m"
  {
#line 1448 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_81;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_12;
#line 1448 "purity.m"
    MR_String check_hlds__purity__PredOrFuncStr_13;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_14;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__DeclaredPurity_15;
#line 1448 "purity.m"
    MR_String check_hlds__purity__PurityName_16;
#line 1448 "purity.m"
    MR_String check_hlds__purity__DeclaredPurityName_17;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__Pieces1_18;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__Pieces2_19;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__Msg_20;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_29_29;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_53_53;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_62_62;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__PredPieces_68;
#line 1448 "purity.m"
    MR_Word check_hlds__purity__V_74_74;

#line 1449 "purity.m"
    {
#line 1449 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1450 "purity.m"
    {
#line 1450 "purity.m"
      check_hlds__purity__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1451 "purity.m"
    {
#line 1451 "purity.m"
      check_hlds__purity__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__purity__PredOrFunc_12);
    }
#line 1375 "purity.m"
    {
#line 1375 "purity.m"
      check_hlds__purity__PredPieces_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 4091 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__V_74_74 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_81, check_hlds__purity__PredPieces_68, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__PredContextPieces_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_81, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]), check_hlds__purity__V_74_74);
    }
#line 1453 "purity.m"
    {
#line 1453 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__DeclaredPurity_15);
    }
#line 1454 "purity.m"
    {
#line 1454 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_9, &check_hlds__purity__PurityName_16);
    }
#line 1455 "purity.m"
    {
#line 1455 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_15, &check_hlds__purity__DeclaredPurityName_17);
    }
#line 1457 "purity.m"
    {
#line 1457 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__PredOrFuncStr_13));
#line 1457 "purity.m"
    }
#line 1458 "purity.m"
    {
#line 1458 "purity.m"
      check_hlds__purity__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_29_29, 0) = ((MR_Box) (check_hlds__purity__PurityName_16));
#line 1458 "purity.m"
    }
#line 1458 "purity.m"
    {
#line 1458 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1458 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[16])));
#line 1458 "purity.m"
    }
#line 1458 "purity.m"
    {
#line 1458 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[50])));
#line 1458 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 1) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1458 "purity.m"
    }
#line 1457 "purity.m"
    {
#line 1457 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (check_hlds__purity__V_25_25));
#line 1457 "purity.m"
    }
#line 1457 "purity.m"
    {
#line 1457 "purity.m"
      check_hlds__purity__Pieces1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[49])));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces1_18, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1457 "purity.m"
    }
#line 1459 "purity.m"
    {
#line 1459 "purity.m"
      check_hlds__purity__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__purity__PredInfo_7);
    }
#line 1459 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1460 "purity.m"
      {
#line 1460 "purity.m"
        check_hlds__purity__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[52]);
#line 1460 "purity.m"
      }
#line 1459 "purity.m"
    else
#line 1462 "purity.m"
      {
#line 1462 "purity.m"
        MR_Word check_hlds__purity__V_41_41;
#line 1462 "purity.m"
        MR_Word check_hlds__purity__V_42_42;
#line 1462 "purity.m"
        MR_Word check_hlds__purity__V_43_43;
#line 1462 "purity.m"
        MR_Word check_hlds__purity__V_46_46;
#line 1462 "purity.m"
        MR_Word check_hlds__purity__V_47_47;
#line 1462 "purity.m"
        MR_String check_hlds__purity__V_48_48;

#line 1462 "purity.m"
        {
#line 1462 "purity.m"
          check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(3), check_hlds__purity__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(3), check_hlds__purity__V_42_42, 1) = ((MR_Box) (check_hlds__purity__PurityName_16));
#line 1462 "purity.m"
        }
#line 1463 "purity.m"
        {
#line 1463 "purity.m"
          check_hlds__purity__V_48_48 = mercury__string__f_43_43_2_f_0(check_hlds__purity__DeclaredPurityName_17, (MR_String) ".");
        }
#line 1463 "purity.m"
        {
#line 1463 "purity.m"
          check_hlds__purity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_47_47, 0) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 1463 "purity.m"
        }
#line 1463 "purity.m"
        {
#line 1463 "purity.m"
          check_hlds__purity__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1463 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])));
#line 1463 "purity.m"
        }
#line 1463 "purity.m"
        {
#line 1463 "purity.m"
          check_hlds__purity__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[54])));
#line 1463 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 1) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 1463 "purity.m"
        }
#line 1462 "purity.m"
        {
#line 1462 "purity.m"
          check_hlds__purity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 0) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1462 "purity.m"
        }
#line 1462 "purity.m"
        {
#line 1462 "purity.m"
          check_hlds__purity__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[53])));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_19, 1) = ((MR_Box) (check_hlds__purity__V_41_41));
#line 1462 "purity.m"
        }
#line 1462 "purity.m"
      }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_54_54, 0) = ((MR_Box) (check_hlds__purity__PredContextPieces_14));
#line 1466 "purity.m"
    }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__Pieces1_18));
#line 1466 "purity.m"
    }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__Pieces2_19));
#line 1466 "purity.m"
    }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1466 "purity.m"
    }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 1) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1466 "purity.m"
    }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_53_53, 0) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_53_53, 1) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1466 "purity.m"
    }
#line 1465 "purity.m"
    {
#line 1465 "purity.m"
      check_hlds__purity__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_20, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_20, 1) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1465 "purity.m"
    }
#line 1467 "purity.m"
    {
#line 1467 "purity.m"
      check_hlds__purity__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_62_62, 0) = ((MR_Box) (check_hlds__purity__Msg_20));
#line 1467 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1467 "purity.m"
    }
#line 1467 "purity.m"
    {
#line 1467 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1467 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1467 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_62_62));
#line 1467 "purity.m"
    }
#line 1448 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1448 "purity.m"
  }
#line 1445 "purity.m"
}

#line 1414 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(
#line 1414 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1414 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1414 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1414 "purity.m"
  MR_Word check_hlds__purity__PromisedPurity_9)
#line 1414 "purity.m"
{
#line 1418 "purity.m"
  {
#line 1418 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_84;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_12;
#line 1418 "purity.m"
    MR_String check_hlds__purity__Pragma_13;
#line 1418 "purity.m"
    MR_String check_hlds__purity__CodeStr_14;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_15;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__MainPieces_16;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__VerbosePieces_17;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_34_34;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_35_35;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_36_36;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_39_39;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_40_40;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_41_41;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_60_60;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_65_65;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__PredPieces_71;
#line 1418 "purity.m"
    MR_Word check_hlds__purity__V_77_77;

#line 1419 "purity.m"
    {
#line 1419 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1375 "purity.m"
    {
#line 1375 "purity.m"
      check_hlds__purity__PredPieces_71 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 4446 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__V_77_77 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_84, check_hlds__purity__PredPieces_71, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__PredContextPieces_12 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_84, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]), check_hlds__purity__V_77_77);
    }
#line 1425 "purity.m"
#line 1425 "purity.m"
    switch (check_hlds__purity__PromisedPurity_9) {
#line 1425 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1425 "purity.m"
      case (MR_Integer) 2:
#line 1430 "purity.m"
        {
#line 1431 "purity.m"
          {
#line 1431 "purity.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "function \140check_hlds.purity.warn_unnecessary_promise_pure\'/4", (MR_String) "promise_impure");
          }
#line 1430 "purity.m"
        }
#line 1425 "purity.m"
        break;
#line 1425 "purity.m"
      case (MR_Integer) 0:
#line 1422 "purity.m"
        {
#line 1423 "purity.m"
          check_hlds__purity__Pragma_13 = (MR_String) "promise_pure";
#line 1424 "purity.m"
          check_hlds__purity__CodeStr_14 = (MR_String) "impure or semipure";
#line 1422 "purity.m"
        }
#line 1425 "purity.m"
        break;
#line 1425 "purity.m"
      case (MR_Integer) 1:
#line 1426 "purity.m"
        {
#line 1427 "purity.m"
          check_hlds__purity__Pragma_13 = (MR_String) "promise_semipure";
#line 1428 "purity.m"
          check_hlds__purity__CodeStr_14 = (MR_String) "impure";
#line 1426 "purity.m"
        }
#line 1425 "purity.m"
        break;
#line 1425 "purity.m"
    }
#line 1433 "purity.m"
    {
#line 1433 "purity.m"
      check_hlds__purity__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1434 "purity.m"
    {
#line 1434 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1434 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_25_25, 1) = ((MR_Box) (check_hlds__purity__Pragma_13));
#line 1434 "purity.m"
    }
#line 1434 "purity.m"
    {
#line 1434 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__V_25_25));
#line 1434 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[14])));
#line 1434 "purity.m"
    }
#line 1434 "purity.m"
    {
#line 1434 "purity.m"
      check_hlds__purity__MainPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__MainPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[44])));
#line 1434 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__MainPieces_16, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1434 "purity.m"
    }
#line 1436 "purity.m"
    {
#line 1436 "purity.m"
      check_hlds__purity__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_35_35, 1) = ((MR_Box) (check_hlds__purity__PredOrFunc_15));
#line 1436 "purity.m"
    }
#line 1437 "purity.m"
    {
#line 1437 "purity.m"
      check_hlds__purity__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_40_40, 0) = ((MR_Box) (check_hlds__purity__CodeStr_14));
#line 1437 "purity.m"
    }
#line 1438 "purity.m"
    {
#line 1438 "purity.m"
      check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[48])));
#line 1438 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1438 "purity.m"
    }
#line 1437 "purity.m"
    {
#line 1437 "purity.m"
      check_hlds__purity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[47])));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1437 "purity.m"
    }
#line 1437 "purity.m"
    {
#line 1437 "purity.m"
      check_hlds__purity__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 0) = ((MR_Box) (check_hlds__purity__V_40_40));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 1) = ((MR_Box) (check_hlds__purity__V_41_41));
#line 1437 "purity.m"
    }
#line 1437 "purity.m"
    {
#line 1437 "purity.m"
      check_hlds__purity__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[46])));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 1) = ((MR_Box) (check_hlds__purity__V_39_39));
#line 1437 "purity.m"
    }
#line 1436 "purity.m"
    {
#line 1436 "purity.m"
      check_hlds__purity__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 0) = ((MR_Box) (check_hlds__purity__V_35_35));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 1) = ((MR_Box) (check_hlds__purity__V_36_36));
#line 1436 "purity.m"
    }
#line 1436 "purity.m"
    {
#line 1436 "purity.m"
      check_hlds__purity__VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[45])));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 1) = ((MR_Box) (check_hlds__purity__V_34_34));
#line 1436 "purity.m"
    }
#line 1441 "purity.m"
    {
#line 1441 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__PredContextPieces_12));
#line 1441 "purity.m"
    }
#line 1441 "purity.m"
    {
#line 1441 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__MainPieces_16));
#line 1441 "purity.m"
    }
#line 1442 "purity.m"
    {
#line 1442 "purity.m"
      check_hlds__purity__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_60_60, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_60_60, 1) = ((MR_Box) (check_hlds__purity__VerbosePieces_17));
#line 1442 "purity.m"
    }
#line 1442 "purity.m"
    {
#line 1442 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__V_60_60));
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1442 "purity.m"
    }
#line 1441 "purity.m"
    {
#line 1441 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1441 "purity.m"
    }
#line 1441 "purity.m"
    {
#line 1441 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 1) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1441 "purity.m"
    }
#line 1440 "purity.m"
    {
#line 1440 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1440 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1440 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1440 "purity.m"
    }
#line 1443 "purity.m"
    {
#line 1443 "purity.m"
      check_hlds__purity__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1443 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1443 "purity.m"
    }
#line 1443 "purity.m"
    {
#line 1443 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1443 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1443 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_65_65));
#line 1443 "purity.m"
    }
#line 1418 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1418 "purity.m"
  }
#line 1414 "purity.m"
}

#line 1399 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(
#line 1399 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_7,
#line 1399 "purity.m"
  MR_Word check_hlds__purity__PredInfo_8,
#line 1399 "purity.m"
  MR_Word check_hlds__purity__PredId_9,
#line 1399 "purity.m"
  MR_Word check_hlds__purity__DeclPurity_10,
#line 1399 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_11)
#line 1399 "purity.m"
{
#line 1403 "purity.m"
  {
#line 1403 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__Spec_12;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_57;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__Context_13;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_14;
#line 1403 "purity.m"
    MR_String check_hlds__purity__DeclPurityName_15;
#line 1403 "purity.m"
    MR_String check_hlds__purity__ActualPurityName_16;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__Pieces_17;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_27_27;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1403 "purity.m"
    MR_String check_hlds__purity__V_29_29;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_32_32;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_33_33;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_37_37;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__PredPieces_44;
#line 1403 "purity.m"
    MR_Word check_hlds__purity__V_50_50;

#line 1404 "purity.m"
    {
#line 1404 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_8, &check_hlds__purity__Context_13);
    }
#line 1375 "purity.m"
    {
#line 1375 "purity.m"
      check_hlds__purity__PredPieces_44 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_7, (MR_Integer) 1, check_hlds__purity__PredId_9);
    }
#line 4780 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_57 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__V_50_50 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_57, check_hlds__purity__PredPieces_44, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__PredContextPieces_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_57, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]), check_hlds__purity__V_50_50);
    }
#line 1406 "purity.m"
    {
#line 1406 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclPurity_10, &check_hlds__purity__DeclPurityName_15);
    }
#line 1407 "purity.m"
    {
#line 1407 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_11, &check_hlds__purity__ActualPurityName_16);
    }
#line 1409 "purity.m"
    {
#line 1409 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__DeclPurityName_15));
#line 1409 "purity.m"
    }
#line 1410 "purity.m"
    {
#line 1410 "purity.m"
      check_hlds__purity__V_29_29 = mercury__string__f_43_43_2_f_0(check_hlds__purity__ActualPurityName_16, (MR_String) ".");
    }
#line 1410 "purity.m"
    {
#line 1410 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1410 "purity.m"
    }
#line 1410 "purity.m"
    {
#line 1410 "purity.m"
      check_hlds__purity__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 0) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "purity.m"
    }
#line 1410 "purity.m"
    {
#line 1410 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[43])));
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 1) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1410 "purity.m"
    }
#line 1409 "purity.m"
    {
#line 1409 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1409 "purity.m"
    }
#line 1409 "purity.m"
    {
#line 1409 "purity.m"
      check_hlds__purity__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[42])));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 1) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1409 "purity.m"
    }
#line 1408 "purity.m"
    {
#line 1408 "purity.m"
      check_hlds__purity__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__purity__PredContextPieces_14, check_hlds__purity__V_19_19);
    }
#line 1411 "purity.m"
    {
#line 1411 "purity.m"
      check_hlds__purity__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_33_33, 0) = ((MR_Box) (check_hlds__purity__Pieces_17));
#line 1411 "purity.m"
    }
#line 1411 "purity.m"
    {
#line 1411 "purity.m"
      check_hlds__purity__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_32_32, 0) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "purity.m"
    }
#line 1411 "purity.m"
    {
#line 1411 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_13));
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_32_32));
#line 1411 "purity.m"
    }
#line 1412 "purity.m"
    {
#line 1412 "purity.m"
      check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1412 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1412 "purity.m"
    }
#line 1412 "purity.m"
    {
#line 1412 "purity.m"
      check_hlds__purity__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1412 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1412 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 2) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1412 "purity.m"
    }
#line 1403 "purity.m"
    return check_hlds__purity__Spec_12;
#line 1403 "purity.m"
  }
#line 1399 "purity.m"
}

#line 1379 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_promise_4_f_0(
#line 1379 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1379 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1379 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1379 "purity.m"
  MR_Word check_hlds__purity__Purity_9)
#line 1379 "purity.m"
{
#line 1382 "purity.m"
  {
#line 1382 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_70;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_12;
#line 1382 "purity.m"
    MR_String check_hlds__purity__PredOrFuncStr_13;
#line 1382 "purity.m"
    MR_String check_hlds__purity__PurityName_14;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_15;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__MainPieces_16;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__VerbosePieces_17;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_30_30;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_31_31;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_42_42;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_43_43;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_45_45;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_50_50;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__PredPieces_57;
#line 1382 "purity.m"
    MR_Word check_hlds__purity__V_63_63;

#line 1383 "purity.m"
    {
#line 1383 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1384 "purity.m"
    {
#line 1384 "purity.m"
      check_hlds__purity__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1385 "purity.m"
    {
#line 1385 "purity.m"
      check_hlds__purity__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__purity__PredOrFunc_12);
    }
#line 1386 "purity.m"
    {
#line 1386 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_9, &check_hlds__purity__PurityName_14);
    }
#line 1375 "purity.m"
    {
#line 1375 "purity.m"
      check_hlds__purity__PredPieces_57 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 5012 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_70 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__V_63_63 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_70, check_hlds__purity__PredPieces_57, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1377 "purity.m"
    {
#line 1377 "purity.m"
      check_hlds__purity__PredContextPieces_15 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_70, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]), check_hlds__purity__V_63_63);
    }
#line 1389 "purity.m"
    {
#line 1389 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__PurityName_14));
#line 1389 "purity.m"
    }
#line 1389 "purity.m"
    {
#line 1389 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1389 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[40])));
#line 1389 "purity.m"
    }
#line 1389 "purity.m"
    {
#line 1389 "purity.m"
      check_hlds__purity__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[38])));
#line 1389 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 1) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1389 "purity.m"
    }
#line 1388 "purity.m"
    {
#line 1388 "purity.m"
      check_hlds__purity__MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__purity__PredContextPieces_15, check_hlds__purity__V_19_19);
    }
#line 1391 "purity.m"
    {
#line 1391 "purity.m"
      check_hlds__purity__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_31_31, 0) = ((MR_Box) (check_hlds__purity__PredOrFuncStr_13));
#line 1391 "purity.m"
    }
#line 1391 "purity.m"
    {
#line 1391 "purity.m"
      check_hlds__purity__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 0) = ((MR_Box) (check_hlds__purity__V_31_31));
#line 1391 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[12])));
#line 1391 "purity.m"
    }
#line 1391 "purity.m"
    {
#line 1391 "purity.m"
      check_hlds__purity__VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[41])));
#line 1391 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 1) = ((MR_Box) (check_hlds__purity__V_30_30));
#line 1391 "purity.m"
    }
#line 1396 "purity.m"
    {
#line 1396 "purity.m"
      check_hlds__purity__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_43_43, 0) = ((MR_Box) (check_hlds__purity__MainPieces_16));
#line 1396 "purity.m"
    }
#line 1396 "purity.m"
    {
#line 1396 "purity.m"
      check_hlds__purity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_45_45, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_45_45, 1) = ((MR_Box) (check_hlds__purity__VerbosePieces_17));
#line 1396 "purity.m"
    }
#line 1396 "purity.m"
    {
#line 1396 "purity.m"
      check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 0) = ((MR_Box) (check_hlds__purity__V_45_45));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "purity.m"
    }
#line 1396 "purity.m"
    {
#line 1396 "purity.m"
      check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 0) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 1) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1396 "purity.m"
    }
#line 1395 "purity.m"
    {
#line 1395 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1395 "purity.m"
    }
#line 1397 "purity.m"
    {
#line 1397 "purity.m"
      check_hlds__purity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_50_50, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1397 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1397 "purity.m"
    }
#line 1397 "purity.m"
    {
#line 1397 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1397 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1397 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1397 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_50_50));
#line 1397 "purity.m"
    }
#line 1382 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1382 "purity.m"
  }
#line 1379 "purity.m"
}

#line 1328 "purity.m"
static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
#line 1328 "purity.m"
  MR_Word check_hlds__purity__Outer_6,
#line 1328 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1328 "purity.m"
  MR_Word * check_hlds__purity__Goal_9,
#line 1328 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_30,
#line 1328 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_31)
#line 1328 "purity.m"
{
#line 1332 "purity.m"
  {
#line 1332 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1332 "purity.m"
    MR_Word check_hlds__purity__Inner_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1332 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
#line 1332 "purity.m"
    MR_Word check_hlds__purity__NonLocals0_13;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__Context_14;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__OuterDI_15;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__OuterUO_16;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__InnerDI_17;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__InnerUO_18;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__ModuleInfo_21;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__Clobbered_22;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__Unique_23;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__OuterToInnerGoal_24;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__InnerToOuterGoal_25;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__WrapExpr_26;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__NonLocals_27;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__GoalInfo1_28;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__GoalInfo_29;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_36_36;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_41_41;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_43_43;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_48_48;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_49_49;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_61_61;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_62_62;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_63_63;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_64_64;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_67_67;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_68_68;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_69_69;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_71_71;
#line 1333 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
#line 1342 "purity.m"
    MR_Word check_hlds__purity__V_75_75;
#line 1342 "purity.m"
    MR_Word check_hlds__purity__V_76_76;
#line 1342 "purity.m"
    MR_Word check_hlds__purity__V_77_77;
#line 1342 "purity.m"
    MR_Word check_hlds__purity__V_78_78;
#line 1342 "purity.m"
    MR_Word check_hlds__purity__V_79_79;
#line 1342 "purity.m"
    MR_Word check_hlds__purity__V_80_80;
#line 1342 "purity.m"
    MR_Word check_hlds__purity__V_81_81;

#line 1334 "purity.m"
    {
#line 1334 "purity.m"
      check_hlds__purity__NonLocals0_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__purity__GoalInfo0_12);
    }
#line 1335 "purity.m"
    {
#line 1335 "purity.m"
      check_hlds__purity__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_12);
    }
#line 1336 "purity.m"
    check_hlds__purity__OuterDI_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_6, (MR_Integer) 0)));
#line 1336 "purity.m"
    check_hlds__purity__OuterUO_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_6, (MR_Integer) 1)));
#line 1337 "purity.m"
    check_hlds__purity__InnerDI_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Inner_8, (MR_Integer) 0)));
#line 1337 "purity.m"
    check_hlds__purity__InnerUO_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Inner_8, (MR_Integer) 1)));
#line 1342 "purity.m"
    check_hlds__purity__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1342 "purity.m"
    check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1342 "purity.m"
    check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1342 "purity.m"
    check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1342 "purity.m"
    check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 1342 "purity.m"
    check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 1342 "purity.m"
    check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 6)));
#line 1342 "purity.m"
    check_hlds__purity__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 7)));
#line 1343 "purity.m"
    check_hlds__purity__Clobbered_22 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[4]);
#line 1344 "purity.m"
    check_hlds__purity__Unique_23 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[5]);
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      check_hlds__purity__V_36_36 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1347 "purity.m"
    {
#line 1347 "purity.m"
      check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 0) = ((MR_Box) (check_hlds__purity__InnerDI_17));
#line 1347 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1347 "purity.m"
    }
#line 1347 "purity.m"
    {
#line 1347 "purity.m"
      check_hlds__purity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1347 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1347 "purity.m"
    }
#line 1348 "purity.m"
    {
#line 1348 "purity.m"
      check_hlds__purity__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_47_47, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1348 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_47_47, 1) = ((MR_Box) (check_hlds__purity__Clobbered_22));
#line 1348 "purity.m"
    }
#line 1348 "purity.m"
    {
#line 1348 "purity.m"
      check_hlds__purity__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_49_49, 0) = ((MR_Box) (check_hlds__purity__InnerDI_17));
#line 1348 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_49_49, 1) = ((MR_Box) (check_hlds__purity__Unique_23));
#line 1348 "purity.m"
    }
#line 1348 "purity.m"
    {
#line 1348 "purity.m"
      check_hlds__purity__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_48_48, 0) = ((MR_Box) (check_hlds__purity__V_49_49));
#line 1348 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1348 "purity.m"
    }
#line 1348 "purity.m"
    {
#line 1348 "purity.m"
      check_hlds__purity__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1348 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 1) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 1348 "purity.m"
    }
#line 1348 "purity.m"
    {
#line 1348 "purity.m"
      check_hlds__purity__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__purity__V_46_46);
    }
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__purity__V_36_36, (MR_String) "stm_from_outer_to_inner", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__purity__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__purity__V_43_43, check_hlds__purity__ModuleInfo_21, check_hlds__purity__Context_14, &check_hlds__purity__OuterToInnerGoal_24);
    }
#line 1350 "purity.m"
    {
#line 1350 "purity.m"
      check_hlds__purity__V_51_51 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1352 "purity.m"
    {
#line 1352 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__OuterUO_16));
#line 1352 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1352 "purity.m"
    }
#line 1352 "purity.m"
    {
#line 1352 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__InnerUO_18));
#line 1352 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1352 "purity.m"
    }
#line 1353 "purity.m"
    {
#line 1353 "purity.m"
      check_hlds__purity__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_62_62, 0) = ((MR_Box) (check_hlds__purity__InnerUO_18));
#line 1353 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_62_62, 1) = ((MR_Box) (check_hlds__purity__Clobbered_22));
#line 1353 "purity.m"
    }
#line 1353 "purity.m"
    {
#line 1353 "purity.m"
      check_hlds__purity__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_64_64, 0) = ((MR_Box) (check_hlds__purity__OuterUO_16));
#line 1353 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_64_64, 1) = ((MR_Box) (check_hlds__purity__Unique_23));
#line 1353 "purity.m"
    }
#line 1353 "purity.m"
    {
#line 1353 "purity.m"
      check_hlds__purity__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_63_63, 0) = ((MR_Box) (check_hlds__purity__V_64_64));
#line 1353 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1353 "purity.m"
    }
#line 1353 "purity.m"
    {
#line 1353 "purity.m"
      check_hlds__purity__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__V_62_62));
#line 1353 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 1) = ((MR_Box) (check_hlds__purity__V_63_63));
#line 1353 "purity.m"
    }
#line 1353 "purity.m"
    {
#line 1353 "purity.m"
      check_hlds__purity__V_58_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__purity__V_61_61);
    }
#line 1350 "purity.m"
    {
#line 1350 "purity.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__purity__V_51_51, (MR_String) "stm_from_inner_to_outer", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__purity__V_56_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__purity__V_58_58, check_hlds__purity__ModuleInfo_21, check_hlds__purity__Context_14, &check_hlds__purity__InnerToOuterGoal_25);
    }
#line 1356 "purity.m"
    {
#line 1356 "purity.m"
      check_hlds__purity__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_69_69, 0) = ((MR_Box) (check_hlds__purity__InnerToOuterGoal_25));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1356 "purity.m"
    }
#line 1356 "purity.m"
    {
#line 1356 "purity.m"
      check_hlds__purity__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_68_68, 0) = ((MR_Box) (check_hlds__purity__Goal0_7));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_68_68, 1) = ((MR_Box) (check_hlds__purity__V_69_69));
#line 1356 "purity.m"
    }
#line 1356 "purity.m"
    {
#line 1356 "purity.m"
      check_hlds__purity__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_67_67, 0) = ((MR_Box) (check_hlds__purity__OuterToInnerGoal_24));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_67_67, 1) = ((MR_Box) (check_hlds__purity__V_68_68));
#line 1356 "purity.m"
    }
#line 1356 "purity.m"
    {
#line 1356 "purity.m"
      check_hlds__purity__WrapExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1356 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_26, 2) = ((MR_Box) (check_hlds__purity__V_67_67));
#line 1356 "purity.m"
    }
#line 1361 "purity.m"
    {
#line 1361 "purity.m"
      check_hlds__purity__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_71_71, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1361 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_71_71, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1361 "purity.m"
    }
#line 1361 "purity.m"
    {
#line 1361 "purity.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__purity__V_71_71, check_hlds__purity__NonLocals0_13, &check_hlds__purity__NonLocals_27);
    }
#line 1362 "purity.m"
    {
#line 1362 "purity.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__purity__NonLocals_27, check_hlds__purity__GoalInfo0_12, &check_hlds__purity__GoalInfo1_28);
    }
#line 1363 "purity.m"
    {
#line 1363 "purity.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 21, check_hlds__purity__GoalInfo1_28, &check_hlds__purity__GoalInfo_29);
    }
#line 1365 "purity.m"
    {
#line 1365 "purity.m"
      MR_Word base;
#line 1365 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "purity.m"
      *check_hlds__purity__Goal_9 = base;
#line 1365 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__WrapExpr_26));
#line 1365 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_29));
#line 1365 "purity.m"
    }
#line 1332 "purity.m"
    *check_hlds__purity__STATE_VARIABLE_Info_31 = check_hlds__purity__STATE_VARIABLE_Info_0_30;
#line 1332 "purity.m"
  }
#line 1328 "purity.m"
}

#line 1312 "purity.m"
static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
#line 1312 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1312 "purity.m"
  MR_Word check_hlds__purity__VarTypes_8,
#line 1312 "purity.m"
  MR_Word check_hlds__purity__VarSet_9,
#line 1312 "purity.m"
  MR_Word check_hlds__purity__Var_10,
#line 1312 "purity.m"
  MR_Word * check_hlds__purity__VarType_11,
#line 1312 "purity.m"
  MR_Word * check_hlds__purity__Specs_12)
#line 1312 "purity.m"
{
#line 1315 "purity.m"
  {
#line 1315 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1316 "purity.m"
    {
#line 1316 "purity.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__purity__VarTypes_8, check_hlds__purity__Var_10, check_hlds__purity__VarType_11);
    }
#line 1318 "purity.m"
    {
#line 1318 "purity.m"
      MR_Word check_hlds__purity__V_15_15;

#line 1318 "purity.m"
      {
#line 1318 "purity.m"
        check_hlds__purity__V_15_15 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      }
#line 1318 "purity.m"
      {
#line 1318 "purity.m"
        check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*check_hlds__purity__VarType_11, check_hlds__purity__V_15_15);
      }
#line 1318 "purity.m"
    }
#line 1319 "purity.m"
    if (!(check_hlds__purity__succeeded))
#line 1319 "purity.m"
      {
#line 1319 "purity.m"
        MR_Word check_hlds__purity__V_16_16;

#line 1319 "purity.m"
        {
#line 1319 "purity.m"
          check_hlds__purity__V_16_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
        }
#line 1319 "purity.m"
        {
#line 1319 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*check_hlds__purity__VarType_11, check_hlds__purity__V_16_16);
        }
#line 1319 "purity.m"
      }
#line 1317 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1322 "purity.m"
      *check_hlds__purity__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1317 "purity.m"
    else
#line 1324 "purity.m"
      {
#line 1324 "purity.m"
        MR_Word check_hlds__purity__Spec_13;
#line 1324 "purity.m"
        MR_Word check_hlds__purity__Pieces_23;
#line 1324 "purity.m"
        MR_Word check_hlds__purity__Msg_24;
#line 1324 "purity.m"
        MR_Word check_hlds__purity__V_27_27;
#line 1324 "purity.m"
        MR_Word check_hlds__purity__V_28_28;
#line 1324 "purity.m"
        MR_String check_hlds__purity__V_29_29;
#line 1324 "purity.m"
        MR_Word check_hlds__purity__V_34_34;
#line 1324 "purity.m"
        MR_Word check_hlds__purity__V_35_35;
#line 1324 "purity.m"
        MR_Word check_hlds__purity__V_39_39;

#line 1569 "purity.m"
        {
#line 1569 "purity.m"
          check_hlds__purity__V_29_29 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__purity__VarSet_9, check_hlds__purity__Var_10);
        }
#line 1569 "purity.m"
        {
#line 1569 "purity.m"
          check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1569 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1569 "purity.m"
        }
#line 1569 "purity.m"
        {
#line 1569 "purity.m"
          check_hlds__purity__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1569 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 0) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1569 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[35])));
#line 1569 "purity.m"
        }
#line 1568 "purity.m"
        {
#line 1568 "purity.m"
          check_hlds__purity__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[33])));
#line 1568 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_23, 1) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1568 "purity.m"
        }
#line 1571 "purity.m"
        {
#line 1571 "purity.m"
          check_hlds__purity__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__V_35_35, 0) = ((MR_Box) (check_hlds__purity__Pieces_23));
#line 1571 "purity.m"
        }
#line 1571 "purity.m"
        {
#line 1571 "purity.m"
          check_hlds__purity__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 0) = ((MR_Box) (check_hlds__purity__V_35_35));
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1571 "purity.m"
        }
#line 1571 "purity.m"
        {
#line 1571 "purity.m"
          check_hlds__purity__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_24, 0) = ((MR_Box) (check_hlds__purity__Context_7));
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_24, 1) = ((MR_Box) (check_hlds__purity__V_34_34));
#line 1571 "purity.m"
        }
#line 1572 "purity.m"
        {
#line 1572 "purity.m"
          check_hlds__purity__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 0) = ((MR_Box) (check_hlds__purity__Msg_24));
#line 1572 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1572 "purity.m"
        }
#line 1572 "purity.m"
        {
#line 1572 "purity.m"
          check_hlds__purity__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1572 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1572 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1572 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 2) = ((MR_Box) (check_hlds__purity__V_39_39));
#line 1572 "purity.m"
        }
#line 1325 "purity.m"
        {
#line 1325 "purity.m"
          MR_Word base;
#line 1325 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "purity.m"
          *check_hlds__purity__Specs_12 = base;
#line 1325 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_13));
#line 1325 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1325 "purity.m"
        }
#line 1324 "purity.m"
      }
#line 1315 "purity.m"
  }
#line 1312 "purity.m"
}

#line 1292 "purity.m"
static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
#line 1292 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_5,
#line 1292 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_6,
#line 1292 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_7,
#line 1292 "purity.m"
  MR_Word * check_hlds__purity__Specs_8)
#line 1292 "purity.m"
{
#line 1296 "purity.m"
  {
#line 1296 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1296 "purity.m"
    {
#line 1296 "purity.m"
      check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__ActualPurity_7, check_hlds__purity__DeclaredPurity_6);
    }
#line 1296 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1297 "purity.m"
      {
#line 1297 "purity.m"
        MR_Word check_hlds__purity__Context_9;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__Spec_10;
#line 1297 "purity.m"
        MR_String check_hlds__purity__ActualPurityName_16;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__Pieces_17;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__Msg_18;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__V_21_21;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__V_22_22;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__V_23_23;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__V_26_26;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__V_29_29;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__V_37_37;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__V_38_38;
#line 1297 "purity.m"
        MR_Word check_hlds__purity__V_42_42;

#line 1297 "purity.m"
        {
#line 1297 "purity.m"
          check_hlds__purity__Context_9 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_5);
        }
#line 1538 "purity.m"
        {
#line 1538 "purity.m"
          parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_7, &check_hlds__purity__ActualPurityName_16);
        }
#line 1540 "purity.m"
        {
#line 1540 "purity.m"
          check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__ActualPurityName_16));
#line 1540 "purity.m"
        }
#line 1542 "purity.m"
        {
#line 1542 "purity.m"
          check_hlds__purity__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1542 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_29_29, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1542 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[16])));
#line 1542 "purity.m"
        }
#line 1541 "purity.m"
        {
#line 1541 "purity.m"
          check_hlds__purity__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[32])));
#line 1541 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_26_26, 1) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1541 "purity.m"
        }
#line 1540 "purity.m"
        {
#line 1540 "purity.m"
          check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[31])));
#line 1540 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (check_hlds__purity__V_26_26));
#line 1540 "purity.m"
        }
#line 1540 "purity.m"
        {
#line 1540 "purity.m"
          check_hlds__purity__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1540 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1540 "purity.m"
        }
#line 1539 "purity.m"
        {
#line 1539 "purity.m"
          check_hlds__purity__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[30])));
#line 1539 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_17, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1539 "purity.m"
        }
#line 1543 "purity.m"
        {
#line 1543 "purity.m"
          check_hlds__purity__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__V_38_38, 0) = ((MR_Box) (check_hlds__purity__Pieces_17));
#line 1543 "purity.m"
        }
#line 1543 "purity.m"
        {
#line 1543 "purity.m"
          check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 0) = ((MR_Box) (check_hlds__purity__V_38_38));
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1543 "purity.m"
        }
#line 1543 "purity.m"
        {
#line 1543 "purity.m"
          check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_9));
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1543 "purity.m"
        }
#line 1544 "purity.m"
        {
#line 1544 "purity.m"
          check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1544 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1544 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1544 "purity.m"
        }
#line 1544 "purity.m"
        {
#line 1544 "purity.m"
          check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1544 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1544 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1544 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1544 "purity.m"
        }
#line 1300 "purity.m"
        {
#line 1300 "purity.m"
          MR_Word base;
#line 1300 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "purity.m"
          *check_hlds__purity__Specs_8 = base;
#line 1300 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_10));
#line 1300 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "purity.m"
        }
#line 1297 "purity.m"
      }
#line 1296 "purity.m"
    else
#line 1304 "purity.m"
      *check_hlds__purity__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1296 "purity.m"
  }
#line 1292 "purity.m"
}

#line 1228 "purity.m"
static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
#line 1228 "purity.m"
  MR_Word check_hlds__purity__Info_7,
#line 1228 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_8,
#line 1228 "purity.m"
  MR_Word check_hlds__purity__Var_9,
#line 1228 "purity.m"
  MR_Word check_hlds__purity__ConsId_10,
#line 1228 "purity.m"
  MR_Word check_hlds__purity__Args_11,
#line 1228 "purity.m"
  MR_Word * check_hlds__purity__Specs_12)
#line 1228 "purity.m"
{
#line 1232 "purity.m"
  {
#line 1232 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1232 "purity.m"
    MR_Word check_hlds__purity__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1232 "purity.m"
    MR_Word check_hlds__purity__TypeOfVar_14;
#line 1232 "purity.m"
    MR_Word check_hlds__purity__PredInfo_15;
#line 1232 "purity.m"
    MR_Word check_hlds__purity__CallerMarkers_16;
#line 1232 "purity.m"
    MR_Word check_hlds__purity__Context_17;
#line 1232 "purity.m"
    MR_Word check_hlds__purity__ClosureSpecs_34;
#line 1232 "purity.m"
    MR_Word check_hlds__purity__DeclaredPurity_35;
#line 1235 "purity.m"
    MR_Word check_hlds__purity__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1235 "purity.m"
    MR_Word check_hlds__purity__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1235 "purity.m"
    MR_Word check_hlds__purity__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1235 "purity.m"
    MR_Word check_hlds__purity__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1235 "purity.m"
    MR_Word check_hlds__purity__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1235 "purity.m"
    MR_Word check_hlds__purity__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1235 "purity.m"
    MR_Word check_hlds__purity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1237 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 1237 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 1237 "purity.m"
    MR_Word check_hlds__purity__V_48_48;
#line 1237 "purity.m"
    MR_Word check_hlds__purity__V_49_49;
#line 1237 "purity.m"
    MR_Word check_hlds__purity__V_50_50;
#line 1237 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 1237 "purity.m"
    MR_Word check_hlds__purity__V_52_52;
#line 1240 "purity.m"
    MR_Word check_hlds__purity__PName_18;
#line 1240 "purity.m"
    MR_Word check_hlds__purity__TypePurity_21;
#line 1240 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_22;
#line 1240 "purity.m"
    MR_Word check_hlds__purity__VarArgTypes_24;
#line 1241 "purity.m"
    MR_Integer check_hlds__purity__V_19_19;
#line 1241 "purity.m"
    MR_Word check_hlds__purity__V_20_20;

#line 1236 "purity.m"
    {
#line 1236 "purity.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__purity__VarTypes_13, check_hlds__purity__Var_9, &check_hlds__purity__TypeOfVar_14);
    }
#line 1237 "purity.m"
    check_hlds__purity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1237 "purity.m"
    check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1237 "purity.m"
    check_hlds__purity__PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1237 "purity.m"
    check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1237 "purity.m"
    check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1237 "purity.m"
    check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1237 "purity.m"
    check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1237 "purity.m"
    check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1238 "purity.m"
    {
#line 1238 "purity.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__CallerMarkers_16);
    }
#line 1239 "purity.m"
    {
#line 1239 "purity.m"
      check_hlds__purity__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_8);
    }
#line 1241 "purity.m"
    check_hlds__purity__succeeded = ((((MR_tag((MR_Word) check_hlds__purity__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1241 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1241 "purity.m"
      {
#line 1241 "purity.m"
        check_hlds__purity__PName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 1)));
#line 1241 "purity.m"
        check_hlds__purity__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 2)));
#line 1241 "purity.m"
        check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 3)));
#line 1242 "purity.m"
        {
#line 1242 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__purity__TypeOfVar_14, &check_hlds__purity__TypePurity_21, &check_hlds__purity__PredOrFunc_22, &check_hlds__purity__VarArgTypes_24);
        }
#line 1241 "purity.m"
      }
#line 1240 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1245 "purity.m"
      {
#line 1245 "purity.m"
        MR_Word check_hlds__purity__TVarSet_25;
#line 1245 "purity.m"
        MR_Word check_hlds__purity__ExistQTVars_26;
#line 1245 "purity.m"
        MR_Word check_hlds__purity__HeadTypeParams_27;
#line 1245 "purity.m"
        MR_Word check_hlds__purity__ArgTypes0_28;
#line 1245 "purity.m"
        MR_Word check_hlds__purity__PredArgTypes_29;
#line 1245 "purity.m"
        MR_Word check_hlds__purity__ModuleInfo_30;
#line 1250 "purity.m"
        MR_Word check_hlds__purity__V_53_53;
#line 1250 "purity.m"
        MR_Word check_hlds__purity__V_54_54;
#line 1250 "purity.m"
        MR_Word check_hlds__purity__V_55_55;
#line 1250 "purity.m"
        MR_Word check_hlds__purity__V_56_56;
#line 1250 "purity.m"
        MR_Word check_hlds__purity__V_57_57;
#line 1250 "purity.m"
        MR_Word check_hlds__purity__V_58_58;
#line 1250 "purity.m"
        MR_Word check_hlds__purity__V_59_59;
#line 1251 "purity.m"
        MR_Word check_hlds__purity__CalleePredId_31;
#line 1252 "purity.m"
        MR_Word check_hlds__purity__V_37_37;

#line 1245 "purity.m"
        {
#line 1245 "purity.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__TVarSet_25);
        }
#line 1246 "purity.m"
        {
#line 1246 "purity.m"
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__ExistQTVars_26);
        }
#line 1247 "purity.m"
        {
#line 1247 "purity.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__HeadTypeParams_27);
        }
#line 1248 "purity.m"
        {
#line 1248 "purity.m"
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__purity__VarTypes_13, check_hlds__purity__Args_11, &check_hlds__purity__ArgTypes0_28);
        }
#line 1249 "purity.m"
        {
#line 1249 "purity.m"
          mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__purity__ArgTypes0_28, check_hlds__purity__VarArgTypes_24, &check_hlds__purity__PredArgTypes_29);
        }
#line 1250 "purity.m"
        check_hlds__purity__ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1250 "purity.m"
        check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1250 "purity.m"
        check_hlds__purity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1250 "purity.m"
        check_hlds__purity__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1250 "purity.m"
        check_hlds__purity__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1250 "purity.m"
        check_hlds__purity__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1250 "purity.m"
        check_hlds__purity__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1250 "purity.m"
        check_hlds__purity__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1252 "purity.m"
        {
#line 1252 "purity.m"
          check_hlds__purity__V_37_37 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__purity__CallerMarkers_16);
        }
#line 1252 "purity.m"
        {
#line 1252 "purity.m"
          check_hlds__purity__succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(check_hlds__purity__V_37_37, check_hlds__purity__PName_18, check_hlds__purity__PredOrFunc_22, check_hlds__purity__TVarSet_25, check_hlds__purity__ExistQTVars_26, check_hlds__purity__PredArgTypes_29, check_hlds__purity__HeadTypeParams_27, check_hlds__purity__ModuleInfo_30, check_hlds__purity__Context_17, &check_hlds__purity__CalleePredId_31);
        }
#line 1251 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1256 "purity.m"
          {
#line 1256 "purity.m"
            MR_Word check_hlds__purity__CalleePredInfo_32;
#line 1256 "purity.m"
            MR_Word check_hlds__purity__CalleePurity_33;

#line 1256 "purity.m"
            {
#line 1256 "purity.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_30, check_hlds__purity__CalleePredId_31, &check_hlds__purity__CalleePredInfo_32);
            }
#line 1257 "purity.m"
            {
#line 1257 "purity.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__CalleePredInfo_32, &check_hlds__purity__CalleePurity_33);
            }
#line 1258 "purity.m"
            {
#line 1258 "purity.m"
              check_hlds__purity__check_closure_purity_4_p_0(check_hlds__purity__GoalInfo_8, check_hlds__purity__TypePurity_21, check_hlds__purity__CalleePurity_33, &check_hlds__purity__ClosureSpecs_34);
            }
#line 1256 "purity.m"
          }
#line 1251 "purity.m"
        else
#line 1264 "purity.m"
          check_hlds__purity__ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1245 "purity.m"
      }
#line 1240 "purity.m"
    else
#line 1268 "purity.m"
      check_hlds__purity__ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1274 "purity.m"
    {
#line 1274 "purity.m"
      check_hlds__purity__DeclaredPurity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_8);
    }
#line 1287 "purity.m"
#line 1287 "purity.m"
    switch (check_hlds__purity__DeclaredPurity_35) {
#line 1287 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1287 "purity.m"
      case (MR_Integer) 2:
#line 1287 "purity.m"
      case (MR_Integer) 1:
#line 1281 "purity.m"
        {
#line 1281 "purity.m"
          {
#line 1281 "purity.m"
            check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__CallerMarkers_16, (MR_Integer) 22);
          }
#line 1281 "purity.m"
          if (check_hlds__purity__succeeded)
#line 1282 "purity.m"
            *check_hlds__purity__Specs_12 = check_hlds__purity__ClosureSpecs_34;
#line 1281 "purity.m"
          else
#line 1284 "purity.m"
            {
#line 1284 "purity.m"
              MR_Word check_hlds__purity__Spec_36;

#line 1284 "purity.m"
              {
#line 1284 "purity.m"
                check_hlds__purity__Spec_36 = check_hlds__purity__impure_unification_expr_error_2_f_0(check_hlds__purity__Context_17, check_hlds__purity__DeclaredPurity_35);
              }
#line 1285 "purity.m"
              {
#line 1285 "purity.m"
                MR_Word base;
#line 1285 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "purity.m"
                *check_hlds__purity__Specs_12 = base;
#line 1285 "purity.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_36));
#line 1285 "purity.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__ClosureSpecs_34));
#line 1285 "purity.m"
              }
#line 1284 "purity.m"
            }
#line 1281 "purity.m"
        }
#line 1287 "purity.m"
        break;
#line 1287 "purity.m"
      case (MR_Integer) 0:
#line 1289 "purity.m"
        *check_hlds__purity__Specs_12 = check_hlds__purity__ClosureSpecs_34;
#line 1287 "purity.m"
        break;
#line 1287 "purity.m"
    }
#line 1232 "purity.m"
  }
#line 1228 "purity.m"
}

#line 1176 "purity.m"
static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
#line 1176 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1176 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1176 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9,
#line 1176 "purity.m"
  MR_Word * check_hlds__purity__ActualPurity_10,
#line 1176 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_17,
#line 1176 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_18)
#line 1176 "purity.m"
{
#line 1180 "purity.m"
  {
#line 1180 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1180 "purity.m"
    MR_Word check_hlds__purity__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1180 "purity.m"
    MR_Word check_hlds__purity__PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1180 "purity.m"
    MR_Word check_hlds__purity__CalleePredInfo_14;
#line 1181 "purity.m"
    MR_Word check_hlds__purity__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1181 "purity.m"
    MR_Word check_hlds__purity__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1181 "purity.m"
    MR_Word check_hlds__purity__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1181 "purity.m"
    MR_Word check_hlds__purity__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1181 "purity.m"
    MR_Word check_hlds__purity__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1181 "purity.m"
    MR_Word check_hlds__purity__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));

#line 1183 "purity.m"
    {
#line 1183 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, &check_hlds__purity__CalleePredInfo_14);
    }
#line 1184 "purity.m"
    {
#line 1184 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__CalleePredInfo_14, check_hlds__purity__ActualPurity_10);
    }
#line 1188 "purity.m"
    check_hlds__purity__succeeded = (*check_hlds__purity__ActualPurity_10 == check_hlds__purity__DeclaredPurity_9);
#line 1185 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1185 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1185 "purity.m"
    else
#line 1191 "purity.m"
      {
#line 1194 "purity.m"
        {
#line 1194 "purity.m"
          check_hlds__purity__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__purity__PredInfo_13);
        }
#line 1191 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1191 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1191 "purity.m"
        else
#line 1197 "purity.m"
          {
#line 1198 "purity.m"
            {
#line 1198 "purity.m"
              check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(*check_hlds__purity__ActualPurity_10, check_hlds__purity__DeclaredPurity_9);
            }
#line 1197 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1201 "purity.m"
              {
#line 1201 "purity.m"
                MR_Word check_hlds__purity__Spec_15;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__Msgs0_44;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__Msgs_45;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__V_47_47;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__V_48_48;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__V_49_49;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__V_50_50;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__V_51_51;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__V_52_52;
#line 1201 "purity.m"
                MR_Word check_hlds__purity__V_53_53;

#line 1200 "purity.m"
                {
#line 1200 "purity.m"
                  check_hlds__purity__Spec_15 = check_hlds__purity__error_missing_body_impurity_decl_3_f_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, check_hlds__purity__Context_7);
                }
#line 1610 "purity.m"
                check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1610 "purity.m"
                check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1610 "purity.m"
                check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1610 "purity.m"
                check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1610 "purity.m"
                check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1610 "purity.m"
                check_hlds__purity__Msgs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1610 "purity.m"
                check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1610 "purity.m"
                check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1611 "purity.m"
                {
#line 1611 "purity.m"
                  check_hlds__purity__Msgs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_45, 0) = ((MR_Box) (check_hlds__purity__Spec_15));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_45, 1) = ((MR_Box) (check_hlds__purity__Msgs0_44));
#line 1611 "purity.m"
                }
#line 1612 "purity.m"
                {
#line 1612 "purity.m"
                  MR_Word base;
#line 1612 "purity.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "purity.m"
                  *check_hlds__purity__STATE_VARIABLE_Info_18 = base;
#line 1612 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1612 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 1612 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_49_49));
#line 1612 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_50_50));
#line 1612 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_51_51));
#line 1612 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_45));
#line 1612 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_52_52));
#line 1612 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1612 "purity.m"
                }
#line 1201 "purity.m"
              }
#line 1197 "purity.m"
            else
#line 1203 "purity.m"
              {
#line 1210 "purity.m"
                MR_Word check_hlds__purity__Markers_16;

#line 1210 "purity.m"
                {
#line 1210 "purity.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_13, &check_hlds__purity__Markers_16);
                }
#line 1211 "purity.m"
                {
#line 1211 "purity.m"
                  check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 9);
                }
#line 1212 "purity.m"
                if (!(check_hlds__purity__succeeded))
#line 1212 "purity.m"
                  {
#line 1212 "purity.m"
                    {
#line 1212 "purity.m"
                      check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 10);
                    }
#line 1212 "purity.m"
                    if (!(check_hlds__purity__succeeded))
#line 1213 "purity.m"
                      {
#line 1213 "purity.m"
                        {
#line 1213 "purity.m"
                          check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 22);
                        }
#line 1213 "purity.m"
                      }
#line 1212 "purity.m"
                  }
#line 1203 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1203 "purity.m"
                  *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1203 "purity.m"
                else
#line 1219 "purity.m"
                  {
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__Spec_24;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__Msgs0_66;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__Msgs_67;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__V_69_69;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__V_70_70;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__V_71_71;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__V_72_72;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__V_73_73;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__V_74_74;
#line 1219 "purity.m"
                    MR_Word check_hlds__purity__V_75_75;

#line 1218 "purity.m"
                    {
#line 1218 "purity.m"
                      check_hlds__purity__Spec_24 = check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, check_hlds__purity__Context_7, check_hlds__purity__DeclaredPurity_9);
                    }
#line 1610 "purity.m"
                    check_hlds__purity__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1610 "purity.m"
                    check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1610 "purity.m"
                    check_hlds__purity__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1610 "purity.m"
                    check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1610 "purity.m"
                    check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1610 "purity.m"
                    check_hlds__purity__Msgs0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1610 "purity.m"
                    check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1610 "purity.m"
                    check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1611 "purity.m"
                    {
#line 1611 "purity.m"
                      check_hlds__purity__Msgs_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_67, 0) = ((MR_Box) (check_hlds__purity__Spec_24));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_67, 1) = ((MR_Box) (check_hlds__purity__Msgs0_66));
#line 1611 "purity.m"
                    }
#line 1612 "purity.m"
                    {
#line 1612 "purity.m"
                      MR_Word base;
#line 1612 "purity.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "purity.m"
                      *check_hlds__purity__STATE_VARIABLE_Info_18 = base;
#line 1612 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_69_69));
#line 1612 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_70_70));
#line 1612 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_71_71));
#line 1612 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_72_72));
#line 1612 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_73_73));
#line 1612 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_67));
#line 1612 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1612 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1612 "purity.m"
                    }
#line 1219 "purity.m"
                  }
#line 1203 "purity.m"
              }
#line 1197 "purity.m"
          }
#line 1191 "purity.m"
      }
#line 1180 "purity.m"
  }
#line 1176 "purity.m"
}

#line 1143 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
#line 1143 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1143 "purity.m"
  MR_Word check_hlds__purity__Info_2,
#line 1143 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_3,
#line 1143 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_4)
#line 1143 "purity.m"
{
#line 1146 "purity.m"
  while (MR_TRUE)
#line 1146 "purity.m"
    {
#line 1146 "purity.m"
      /* tailcall optimized into a loop */
#line 1146 "purity.m"
      {
#line 1146 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 1146 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Specs_4 = check_hlds__purity__STATE_VARIABLE_Specs_0_3;
#line 1146 "purity.m"
        else
#line 1147 "purity.m"
          {
#line 1147 "purity.m"
            MR_Word check_hlds__purity__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1147 "purity.m"
            MR_Word check_hlds__purity__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1147 "purity.m"
            MR_Word check_hlds__purity__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_9, (MR_Integer) 0)));
#line 1147 "purity.m"
            MR_Word check_hlds__purity__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_9, (MR_Integer) 1)));
#line 1147 "purity.m"
            MR_Word check_hlds__purity__XVar_23;
#line 1147 "purity.m"
            MR_Word check_hlds__purity__ConsId_24;
#line 1147 "purity.m"
            MR_Word check_hlds__purity__YVars_25;
#line 1147 "purity.m"
            MR_Word check_hlds__purity__UnifySpecs_26;
#line 1147 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_32_32;
#line 1149 "purity.m"
            MR_Word check_hlds__purity__XVarPrime_15;
#line 1149 "purity.m"
            MR_Word check_hlds__purity__ConsIdPrime_20;
#line 1149 "purity.m"
            MR_Word check_hlds__purity__YVarsPrime_22;
#line 1150 "purity.m"
            MR_Word check_hlds__purity__Y_16;
#line 1150 "purity.m"
            MR_Word check_hlds__purity__V_17_17;
#line 1150 "purity.m"
            MR_Word check_hlds__purity__V_18_18;
#line 1150 "purity.m"
            MR_Word check_hlds__purity__V_19_19;
#line 1151 "purity.m"
            MR_Word check_hlds__purity__V_21_21;

#line 1150 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1150 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1150 "purity.m"
              {
#line 1150 "purity.m"
                check_hlds__purity__XVarPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 0)));
#line 1150 "purity.m"
                check_hlds__purity__Y_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 1)));
#line 1150 "purity.m"
                check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 2)));
#line 1150 "purity.m"
                check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 3)));
#line 1150 "purity.m"
                check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 4)));
#line 1151 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Y_16)) == (MR_mktag((MR_Integer) 1)));
#line 1151 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1151 "purity.m"
                  {
#line 1151 "purity.m"
                    check_hlds__purity__ConsIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 0)));
#line 1151 "purity.m"
                    check_hlds__purity__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 1)));
#line 1151 "purity.m"
                    check_hlds__purity__YVarsPrime_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 2)));
#line 1151 "purity.m"
                  }
#line 1150 "purity.m"
              }
#line 1149 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1153 "purity.m"
              {
#line 1153 "purity.m"
                check_hlds__purity__XVar_23 = check_hlds__purity__XVarPrime_15;
#line 1154 "purity.m"
                check_hlds__purity__ConsId_24 = check_hlds__purity__ConsIdPrime_20;
#line 1155 "purity.m"
                check_hlds__purity__YVars_25 = check_hlds__purity__YVarsPrime_22;
#line 1153 "purity.m"
              }
#line 1149 "purity.m"
            else
#line 1157 "purity.m"
              {
#line 1157 "purity.m"
                {
#line 1157 "purity.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_no_ptc\'/4", (MR_String) "from_ground_term_initial conjunct is not functor unify");
#line 1157 "purity.m"
                  return;
                }
#line 1157 "purity.m"
              }
#line 1160 "purity.m"
            {
#line 1160 "purity.m"
              check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__Info_2, check_hlds__purity__GoalInfo0_14, check_hlds__purity__XVar_23, check_hlds__purity__ConsId_24, check_hlds__purity__YVars_25, &check_hlds__purity__UnifySpecs_26);
            }
#line 1162 "purity.m"
            {
#line 1162 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__UnifySpecs_26, check_hlds__purity__STATE_VARIABLE_Specs_0_3);
            }
#line 1163 "purity.m"
            /* direct tailcall eliminated */
#line 1163 "purity.m"
            {
#line 1163 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Goals0_10;
#line 1163 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Specs_32_32;

#line 1163 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_0_3 = check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1163 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 1163 "purity.m"
            }
#line 1163 "purity.m"
            continue;
#line 1147 "purity.m"
          }
#line 1146 "purity.m"
      }
#line 1146 "purity.m"
      break;
#line 1146 "purity.m"
    }
#line 1143 "purity.m"
}

#line 1048 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
#line 1048 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_7,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9,
#line 1048 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0_10,
#line 1048 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Invariants_11)
#line 1048 "purity.m"
{
#line 1054 "purity.m"
  while (MR_TRUE)
#line 1054 "purity.m"
    {
#line 1054 "purity.m"
      /* tailcall optimized into a loop */
#line 1054 "purity.m"
      {
#line 1054 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 1054 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "purity.m"
          {
#line 1055 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Invariants_11 = check_hlds__purity__STATE_VARIABLE_Invariants_0_10;
#line 1055 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_9 = check_hlds__purity__STATE_VARIABLE_Info_0_8;
#line 1055 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_7 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1055 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1054 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2;
#line 1054 "purity.m"
          }
#line 1054 "purity.m"
        else
#line 1057 "purity.m"
          {
#line 1057 "purity.m"
            MR_Word check_hlds__purity__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1057 "purity.m"
            MR_Word check_hlds__purity__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1057 "purity.m"
            MR_Word check_hlds__purity__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 0)));
#line 1057 "purity.m"
            MR_Word check_hlds__purity__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 1)));
#line 1057 "purity.m"
            MR_Word check_hlds__purity__XVar_44;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__Mode_45;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__Unification_46;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__UnifyContext_47;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__ConsId_48;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__YVars_49;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__ModuleInfo_50;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__PredInfo0_51;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__VarTypes0_52;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__VarSet0_53;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__PredInfo_54;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__VarSet_55;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__VarTypes_56;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__Goal1_57;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__IsPlainUnify_58;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__GoalExpr1_59;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__GoalInfo1_60;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__MarkedSubGoal_69;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_100_100;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_102_102;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_118_118;
#line 1057 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121;
#line 1059 "purity.m"
            MR_Word check_hlds__purity__XVarPrime_36;
#line 1059 "purity.m"
            MR_Word check_hlds__purity__ModePrime_38;
#line 1059 "purity.m"
            MR_Word check_hlds__purity__UnificationPrime_39;
#line 1059 "purity.m"
            MR_Word check_hlds__purity__UnifyContextPrime_40;
#line 1059 "purity.m"
            MR_Word check_hlds__purity__ConsIdPrime_41;
#line 1059 "purity.m"
            MR_Word check_hlds__purity__YVarsPrime_43;
#line 1061 "purity.m"
            MR_Word check_hlds__purity__Y_37;
#line 1062 "purity.m"
            MR_Word check_hlds__purity__V_42_42;
#line 1074 "purity.m"
            MR_Word check_hlds__purity__V_134_134;
#line 1074 "purity.m"
            MR_Word check_hlds__purity__V_138_138;
#line 1074 "purity.m"
            MR_Word check_hlds__purity__V_139_139;
#line 1074 "purity.m"
            MR_Word check_hlds__purity__V_140_140;

#line 1060 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1060 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1060 "purity.m"
              {
#line 1060 "purity.m"
                check_hlds__purity__XVarPrime_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 0)));
#line 1060 "purity.m"
                check_hlds__purity__Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 1)));
#line 1060 "purity.m"
                check_hlds__purity__ModePrime_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 2)));
#line 1060 "purity.m"
                check_hlds__purity__UnificationPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 3)));
#line 1060 "purity.m"
                check_hlds__purity__UnifyContextPrime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 4)));
#line 1062 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Y_37)) == (MR_mktag((MR_Integer) 1)));
#line 1062 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1062 "purity.m"
                  {
#line 1062 "purity.m"
                    check_hlds__purity__ConsIdPrime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 0)));
#line 1062 "purity.m"
                    check_hlds__purity__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 1)));
#line 1062 "purity.m"
                    check_hlds__purity__YVarsPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 2)));
#line 1062 "purity.m"
                  }
#line 1060 "purity.m"
              }
#line 1059 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1064 "purity.m"
              {
#line 1064 "purity.m"
                check_hlds__purity__XVar_44 = check_hlds__purity__XVarPrime_36;
#line 1065 "purity.m"
                check_hlds__purity__Mode_45 = check_hlds__purity__ModePrime_38;
#line 1066 "purity.m"
                check_hlds__purity__Unification_46 = check_hlds__purity__UnificationPrime_39;
#line 1067 "purity.m"
                check_hlds__purity__UnifyContext_47 = check_hlds__purity__UnifyContextPrime_40;
#line 1068 "purity.m"
                check_hlds__purity__ConsId_48 = check_hlds__purity__ConsIdPrime_41;
#line 1069 "purity.m"
                check_hlds__purity__YVars_49 = check_hlds__purity__YVarsPrime_43;
#line 1064 "purity.m"
              }
#line 1059 "purity.m"
            else
#line 1071 "purity.m"
              {
#line 1071 "purity.m"
                {
#line 1071 "purity.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_ptc\'/11", (MR_String) "from_ground_term_initial conjunct is not functor unify");
#line 1071 "purity.m"
                  return;
                }
#line 1071 "purity.m"
              }
#line 1074 "purity.m"
            check_hlds__purity__ModuleInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1074 "purity.m"
            check_hlds__purity__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1074 "purity.m"
            check_hlds__purity__PredInfo0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1074 "purity.m"
            check_hlds__purity__VarTypes0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1074 "purity.m"
            check_hlds__purity__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1074 "purity.m"
            check_hlds__purity__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1074 "purity.m"
            check_hlds__purity__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1074 "purity.m"
            check_hlds__purity__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1078 "purity.m"
            {
#line 1078 "purity.m"
              check_hlds__post_typecheck__resolve_unify_functor_16_p_0(check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, check_hlds__purity__Mode_45, check_hlds__purity__Unification_46, check_hlds__purity__UnifyContext_47, check_hlds__purity__GoalInfo0_35, check_hlds__purity__ModuleInfo_50, check_hlds__purity__PredInfo0_51, &check_hlds__purity__PredInfo_54, check_hlds__purity__VarSet0_53, &check_hlds__purity__VarSet_55, check_hlds__purity__VarTypes0_52, &check_hlds__purity__VarTypes_56, &check_hlds__purity__Goal1_57, &check_hlds__purity__IsPlainUnify_58);
            }
#line 1082 "purity.m"
            check_hlds__purity__GoalExpr1_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_57, (MR_Integer) 0)));
#line 1082 "purity.m"
            check_hlds__purity__GoalInfo1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_57, (MR_Integer) 1)));
#line 1111 "purity.m"
#line 1111 "purity.m"
            switch (MR_tag((MR_Word) check_hlds__purity__IsPlainUnify_58)) {
#line 1111 "purity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1111 "purity.m"
              case (MR_Integer) 0:
#line 1111 "purity.m"
#line 1111 "purity.m"
                switch (MR_unmkbody(check_hlds__purity__IsPlainUnify_58)) {
#line 1111 "purity.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1111 "purity.m"
                  case (MR_Integer) 0:
#line 1112 "purity.m"
                    {
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_95_95;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__Goal_133;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_170_170 = check_hlds__purity__V_162_162;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_171_171 = check_hlds__purity__V_163_163;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_173_173 = check_hlds__purity__VarTypes_56;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_175_175 = check_hlds__purity__V_167_167;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_176_176 = check_hlds__purity__V_168_168;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_177_177 = check_hlds__purity__V_169_169;
#line 1113 "purity.m"
                      MR_Word check_hlds__purity__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1113 "purity.m"
                      MR_Word check_hlds__purity__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1113 "purity.m"
                      MR_Word check_hlds__purity__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1116 "purity.m"
                      MR_Word check_hlds__purity__V_70_70;
#line 1116 "purity.m"
                      MR_Word check_hlds__purity__V_71_71;
#line 1116 "purity.m"
                      MR_Word check_hlds__purity__V_72_72;
#line 1116 "purity.m"
                      MR_Word check_hlds__purity__V_73_73;
#line 1116 "purity.m"
                      MR_Word check_hlds__purity__V_74_74;

#line 1115 "purity.m"
                      {
#line 1115 "purity.m"
                        check_hlds__purity__STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (check_hlds__purity__V_170_170));
#line 1115 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (check_hlds__purity__V_171_171));
#line 1115 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (check_hlds__purity__PredInfo_54));
#line 1115 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (check_hlds__purity__V_173_173));
#line 1115 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (check_hlds__purity__VarSet_55));
#line 1115 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (check_hlds__purity__V_175_175));
#line 1115 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (check_hlds__purity__V_176_176));
#line 1115 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (check_hlds__purity__V_177_177));
#line 1115 "purity.m"
                      }
#line 1116 "purity.m"
                      check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr1_59)) == (MR_mktag((MR_Integer) 1)));
#line 1116 "purity.m"
                      if (check_hlds__purity__succeeded)
#line 1116 "purity.m"
                        {
#line 1116 "purity.m"
                          check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 0)));
#line 1116 "purity.m"
                          check_hlds__purity__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 1)));
#line 1116 "purity.m"
                          check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 2)));
#line 1116 "purity.m"
                          check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 3)));
#line 1116 "purity.m"
                          check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 4)));
#line 1118 "purity.m"
                          {
#line 1118 "purity.m"
                            MR_Word check_hlds__purity__UnifySpecs_127;
#line 1118 "purity.m"
                            MR_Word check_hlds__purity__GoalInfo_128;
#line 1118 "purity.m"
                            MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194;

#line 1117 "purity.m"
                            {
#line 1117 "purity.m"
                              check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_95_95, check_hlds__purity__GoalInfo0_35, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, &check_hlds__purity__UnifySpecs_127);
                            }
#line 1119 "purity.m"
                            {
#line 1119 "purity.m"
                              check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_127, check_hlds__purity__STATE_VARIABLE_Info_95_95, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                            }
#line 599 "purity.m"
                            {
#line 599 "purity.m"
                              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, check_hlds__purity__GoalInfo1_60, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194);
                            }
#line 605 "purity.m"
                            {
#line 605 "purity.m"
                              hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194, &check_hlds__purity__GoalInfo_128);
                            }
#line 1122 "purity.m"
                            {
#line 1122 "purity.m"
                              check_hlds__purity__Goal_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "purity.m"
                              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_133, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_59));
#line 1122 "purity.m"
                              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_133, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_128));
#line 1122 "purity.m"
                            }
#line 1118 "purity.m"
                            check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1118 "purity.m"
                            check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1118 "purity.m"
                          }
#line 1116 "purity.m"
                        }
#line 1116 "purity.m"
                      else
#line 1126 "purity.m"
                        {
#line 1126 "purity.m"
                          MR_Word check_hlds__purity__GoalPurity_75;
#line 1126 "purity.m"
                          MR_Word check_hlds__purity__GoalContainsTrace_76;

#line 1125 "purity.m"
                          {
#line 1125 "purity.m"
                            check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_57, &check_hlds__purity__Goal_133, &check_hlds__purity__GoalPurity_75, &check_hlds__purity__GoalContainsTrace_76, check_hlds__purity__STATE_VARIABLE_Info_95_95, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                          }
#line 1127 "purity.m"
                          {
#line 1127 "purity.m"
                            check_hlds__purity__STATE_VARIABLE_Purity_100_100 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_75, check_hlds__purity__STATE_VARIABLE_Purity_0_4);
                          }
#line 1128 "purity.m"
                          {
#line 1128 "purity.m"
                            check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_76, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6);
                          }
#line 1126 "purity.m"
                        }
#line 1131 "purity.m"
                      {
#line 1131 "purity.m"
                        check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "purity.m"
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal_133));
#line 1131 "purity.m"
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
#line 1131 "purity.m"
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
#line 1131 "purity.m"
                      }
#line 1132 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = (MR_Integer) 1;
#line 1112 "purity.m"
                    }
#line 1111 "purity.m"
                    break;
#line 1111 "purity.m"
                  case (MR_Integer) 1:
#line 1084 "purity.m"
                    {
#line 1084 "purity.m"
                      MR_Word check_hlds__purity__UnifySpecs_66;
#line 1084 "purity.m"
                      MR_Word check_hlds__purity__GoalInfo_67;
#line 1084 "purity.m"
                      MR_Word check_hlds__purity__Goal_68;
#line 1084 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204;

#line 1098 "purity.m"
                      {
#line 1098 "purity.m"
                        check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_0_8, check_hlds__purity__GoalInfo0_35, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, &check_hlds__purity__UnifySpecs_66);
                      }
#line 1100 "purity.m"
                      {
#line 1100 "purity.m"
                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_66, check_hlds__purity__STATE_VARIABLE_Info_0_8, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                      }
#line 599 "purity.m"
                      {
#line 599 "purity.m"
                        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, check_hlds__purity__GoalInfo1_60, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204);
                      }
#line 605 "purity.m"
                      {
#line 605 "purity.m"
                        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204, &check_hlds__purity__GoalInfo_67);
                      }
#line 1104 "purity.m"
                      {
#line 1104 "purity.m"
                        check_hlds__purity__Goal_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_68, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_59));
#line 1104 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_68, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_67));
#line 1104 "purity.m"
                      }
#line 1109 "purity.m"
                      {
#line 1109 "purity.m"
                        check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal_68));
#line 1109 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
#line 1109 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
#line 1109 "purity.m"
                      }
#line 1084 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1084 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1084 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = check_hlds__purity__STATE_VARIABLE_Invariants_0_10;
#line 1084 "purity.m"
                    }
#line 1111 "purity.m"
                    break;
#line 1111 "purity.m"
                }
#line 1111 "purity.m"
                break;
#line 1111 "purity.m"
              case (MR_Integer) 1:
#line 1134 "purity.m"
                {
#line 1134 "purity.m"
                  MR_Word check_hlds__purity__Spec_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__IsPlainUnify_58, (MR_Integer) 0)));

#line 1135 "purity.m"
                  {
#line 1135 "purity.m"
                    check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_77, check_hlds__purity__STATE_VARIABLE_Info_0_8, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                  }
#line 1136 "purity.m"
                  {
#line 1136 "purity.m"
                    check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal1_57));
#line 1136 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
#line 1136 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
#line 1136 "purity.m"
                  }
#line 1137 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = (MR_Integer) 1;
#line 1134 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1134 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1134 "purity.m"
                }
#line 1111 "purity.m"
                break;
#line 1111 "purity.m"
            }
#line 1139 "purity.m"
            {
#line 1139 "purity.m"
              check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121, 0) = ((MR_Box) (check_hlds__purity__MarkedSubGoal_69));
#line 1139 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121, 1) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2));
#line 1139 "purity.m"
            }
#line 1140 "purity.m"
            /* direct tailcall eliminated */
#line 1140 "purity.m"
            {
#line 1140 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Goals0_28;
#line 1140 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0__tmp_copy_2 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121;
#line 1140 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4 = check_hlds__purity__STATE_VARIABLE_Purity_100_100;
#line 1140 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101;
#line 1140 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_8 = check_hlds__purity__STATE_VARIABLE_Info_118_118;
#line 1140 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0__tmp_copy_10 = check_hlds__purity__STATE_VARIABLE_Invariants_102_102;

#line 1140 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Invariants_0_10 = check_hlds__purity__STATE_VARIABLE_Invariants_0__tmp_copy_10;
#line 1140 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_8 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_8;
#line 1140 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_6;
#line 1140 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_4 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4;
#line 1140 "purity.m"
              check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0__tmp_copy_2;
#line 1140 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 1140 "purity.m"
            }
#line 1140 "purity.m"
            continue;
#line 1057 "purity.m"
          }
#line 1054 "purity.m"
      }
#line 1054 "purity.m"
      break;
#line 1054 "purity.m"
    }
#line 1048 "purity.m"
}

#line 989 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
#line 989 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 989 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 989 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 989 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_3)
#line 989 "purity.m"
{
#line 989 "purity.m"
  {
#line 989 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 989 "purity.m"
    MR_Word check_hlds__purity__conv4_STATE_VARIABLE_Info_9;

#line 989 "purity.m"
    {
#line 989 "purity.m"
      check_hlds__purity__purity_info_add_message_3_p_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2), &check_hlds__purity__conv4_STATE_VARIABLE_Info_9);
    }
#line 989 "purity.m"
    *check_hlds__purity__wrapper_arg_3 = ((MR_Box) (check_hlds__purity__conv4_STATE_VARIABLE_Info_9));
#line 989 "purity.m"
  }
#line 989 "purity.m"
}

#line 997 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
#line 997 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 997 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 997 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2,
#line 997 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_3,
#line 997 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_4)
#line 997 "purity.m"
{
#line 997 "purity.m"
  {
#line 997 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 997 "purity.m"
    MR_Word check_hlds__purity__conv2_Goal_9;
#line 997 "purity.m"
    MR_Word check_hlds__purity__conv1_STATE_VARIABLE_Info_31;

#line 997 "purity.m"
    {
#line 997 "purity.m"
      check_hlds__purity__wrap_inner_outer_goals_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__purity__wrapper_arg_1), &check_hlds__purity__conv2_Goal_9, ((MR_Word) check_hlds__purity__wrapper_arg_3), &check_hlds__purity__conv1_STATE_VARIABLE_Info_31);
    }
#line 997 "purity.m"
    *check_hlds__purity__wrapper_arg_2 = ((MR_Box) (check_hlds__purity__conv2_Goal_9));
#line 997 "purity.m"
    *check_hlds__purity__wrapper_arg_4 = ((MR_Box) (check_hlds__purity__conv1_STATE_VARIABLE_Info_31));
#line 997 "purity.m"
  }
#line 997 "purity.m"
}

#line 868 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
#line 868 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 868 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 868 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2)
#line 868 "purity.m"
{
#line 868 "purity.m"
  {
#line 868 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 868 "purity.m"
    MR_Word check_hlds__purity__conv0_HeadVar__2_2;

#line 868 "purity.m"
    {
#line 868 "purity.m"
      hlds__from_ground_term_util__project_kept_goal_2_p_0(((MR_Word) check_hlds__purity__wrapper_arg_1), &check_hlds__purity__conv0_HeadVar__2_2);
    }
#line 868 "purity.m"
    *check_hlds__purity__wrapper_arg_2 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__2_2));
#line 868 "purity.m"
  }
#line 868 "purity.m"
}

#line 667 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
#line 667 "purity.m"
  MR_Word check_hlds__purity__GoalExpr0_8,
#line 667 "purity.m"
  MR_Word * check_hlds__purity__GoalExpr_9,
#line 667 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_10,
#line 667 "purity.m"
  MR_Word * check_hlds__purity__Purity_11,
#line 667 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_12,
#line 667 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_192,
#line 667 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_193)
#line 667 "purity.m"
{
#line 674 "purity.m"
  {
#line 674 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 674 "purity.m"
#line 674 "purity.m"
    switch (MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) {
#line 674 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 674 "purity.m"
      case (MR_Integer) 0:
#line 828 "purity.m"
        {
#line 828 "purity.m"
          MR_Word check_hlds__purity__Goal0_95 = (MR_Word) MR_body(((MR_Word) check_hlds__purity__GoalExpr0_8), (MR_Integer) 0);
#line 828 "purity.m"
          MR_Word check_hlds__purity__NotGoal0_96;
#line 831 "purity.m"
          MR_Word check_hlds__purity__Goal1_308;
#line 831 "purity.m"
          MR_Word check_hlds__purity__V_239_239;
#line 831 "purity.m"
          MR_Word check_hlds__purity__V_97_97;

#line 830 "purity.m"
          {
#line 830 "purity.m"
            hlds__hlds_goal__negate_goal_3_p_0(check_hlds__purity__Goal0_95, check_hlds__purity__GoalInfo_10, &check_hlds__purity__NotGoal0_96);
          }
#line 831 "purity.m"
          check_hlds__purity__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal0_96, (MR_Integer) 0)));
#line 831 "purity.m"
          check_hlds__purity__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal0_96, (MR_Integer) 1)));
#line 831 "purity.m"
          check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_239_239)) == (MR_mktag((MR_Integer) 0)));
#line 831 "purity.m"
          if (check_hlds__purity__succeeded)
#line 831 "purity.m"
            {
#line 831 "purity.m"
              check_hlds__purity__Goal1_308 = (MR_Word) MR_body(((MR_Word) check_hlds__purity__V_239_239), (MR_Integer) 0);
#line 832 "purity.m"
              {
#line 832 "purity.m"
                MR_Word check_hlds__purity__Goal_307;

#line 832 "purity.m"
                {
#line 832 "purity.m"
                  check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_308, &check_hlds__purity__Goal_307, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                }
#line 833 "purity.m"
                *check_hlds__purity__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__purity__Goal_307);
#line 832 "purity.m"
              }
#line 831 "purity.m"
            }
#line 831 "purity.m"
          else
#line 836 "purity.m"
            {
#line 836 "purity.m"
              MR_Word check_hlds__purity__NotGoal1_98;
#line 837 "purity.m"
              MR_Word check_hlds__purity__V_99_99;

#line 835 "purity.m"
              {
#line 835 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__NotGoal0_96, &check_hlds__purity__NotGoal1_98, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
              }
#line 837 "purity.m"
              *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal1_98, (MR_Integer) 0)));
#line 837 "purity.m"
              check_hlds__purity__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal1_98, (MR_Integer) 1)));
#line 836 "purity.m"
            }
#line 828 "purity.m"
        }
#line 674 "purity.m"
        break;
#line 674 "purity.m"
      case (MR_Integer) 1:
#line 742 "purity.m"
        {
#line 742 "purity.m"
          MR_Word check_hlds__purity__LHSVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)));
#line 742 "purity.m"
          MR_Word check_hlds__purity__RHS0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 742 "purity.m"
          MR_Word check_hlds__purity__Mode_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 742 "purity.m"
          MR_Word check_hlds__purity__Unification_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 742 "purity.m"
          MR_Word check_hlds__purity__UnifyContext_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));

#line 774 "purity.m"
#line 774 "purity.m"
          switch (MR_tag((MR_Word) check_hlds__purity__RHS0_52)) {
#line 774 "purity.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 774 "purity.m"
            case (MR_Integer) 0:
#line 816 "purity.m"
              {
#line 817 "purity.m"
                *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 818 "purity.m"
                *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 819 "purity.m"
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 816 "purity.m"
                *check_hlds__purity__STATE_VARIABLE_Info_193 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 816 "purity.m"
              }
#line 774 "purity.m"
              break;
#line 774 "purity.m"
            case (MR_Integer) 1:
#line 775 "purity.m"
              {
#line 775 "purity.m"
                MR_Word check_hlds__purity__ConsId_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 0)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 2)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__Goal1_83;
#line 775 "purity.m"
                MR_Word check_hlds__purity__Goal_92;
#line 775 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_249_249;
#line 775 "purity.m"
                MR_Word check_hlds__purity__RunPostTypecheck_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 1)));
#line 776 "purity.m"
                MR_Word check_hlds__purity__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 776 "purity.m"
                MR_Word check_hlds__purity__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 776 "purity.m"
                MR_Word check_hlds__purity__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));
#line 803 "purity.m"
                MR_Word check_hlds__purity__V_251_251;
#line 803 "purity.m"
                MR_Word check_hlds__purity__V_90_90;
#line 803 "purity.m"
                MR_Word check_hlds__purity__V_85_85;
#line 803 "purity.m"
                MR_Word check_hlds__purity__V_86_86;
#line 803 "purity.m"
                MR_Word check_hlds__purity__V_87_87;
#line 803 "purity.m"
                MR_Word check_hlds__purity__V_88_88;
#line 803 "purity.m"
                MR_Word check_hlds__purity__V_89_89;
#line 814 "purity.m"
                MR_Word check_hlds__purity__V_93_93;

#line 799 "purity.m"
#line 799 "purity.m"
                switch (check_hlds__purity__RunPostTypecheck_292) {
#line 799 "purity.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 799 "purity.m"
                  case (MR_Integer) 1:
#line 800 "purity.m"
                    {
#line 801 "purity.m"
                      {
#line 801 "purity.m"
                        check_hlds__purity__Goal1_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, 0) = ((MR_Box) (check_hlds__purity__GoalExpr0_8));
#line 801 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_10));
#line 801 "purity.m"
                      }
#line 800 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Info_249_249 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 800 "purity.m"
                    }
#line 799 "purity.m"
                    break;
#line 799 "purity.m"
                  case (MR_Integer) 0:
#line 778 "purity.m"
                    {
#line 778 "purity.m"
                      MR_Word check_hlds__purity__VarSet_81;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__VarTypes_82;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__IsPlainUnify_84;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_247_247;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__PredInfo_286;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_416_416;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_417_417;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_421_421;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_422_422;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_423_423;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_424_424;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_425_425;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_427_427;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_429_429;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_430_430;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_431_431;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_432_432;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_433_433;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_435_435;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_436_436;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_437_437;
#line 778 "purity.m"
                      MR_Word check_hlds__purity__V_438_438;
#line 787 "purity.m"
                      MR_Word check_hlds__purity__V_418_418;
#line 787 "purity.m"
                      MR_Word check_hlds__purity__V_419_419;
#line 787 "purity.m"
                      MR_Word check_hlds__purity__V_420_420;

#line 783 "purity.m"
                      {
#line 783 "purity.m"
                        check_hlds__post_typecheck__resolve_unify_functor_16_p_0(check_hlds__purity__LHSVar_51, check_hlds__purity__ConsId_75, check_hlds__purity__Args_77, check_hlds__purity__Mode_53, check_hlds__purity__Unification_54, check_hlds__purity__UnifyContext_55, check_hlds__purity__GoalInfo_10, check_hlds__purity__V_381_381, check_hlds__purity__V_382_382, &check_hlds__purity__PredInfo_286, check_hlds__purity__V_384_384, &check_hlds__purity__VarSet_81, check_hlds__purity__V_383_383, &check_hlds__purity__VarTypes_82, &check_hlds__purity__Goal1_83, &check_hlds__purity__IsPlainUnify_84);
                      }
#line 787 "purity.m"
                      check_hlds__purity__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 787 "purity.m"
                      check_hlds__purity__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 787 "purity.m"
                      check_hlds__purity__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 787 "purity.m"
                      check_hlds__purity__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 787 "purity.m"
                      check_hlds__purity__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 787 "purity.m"
                      check_hlds__purity__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 787 "purity.m"
                      check_hlds__purity__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 787 "purity.m"
                      check_hlds__purity__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));
#line 788 "purity.m"
                      check_hlds__purity__V_424_424 = check_hlds__purity__V_416_416;
#line 788 "purity.m"
                      check_hlds__purity__V_425_425 = check_hlds__purity__V_417_417;
#line 788 "purity.m"
                      check_hlds__purity__V_427_427 = check_hlds__purity__VarTypes_82;
#line 788 "purity.m"
                      check_hlds__purity__V_429_429 = check_hlds__purity__V_421_421;
#line 788 "purity.m"
                      check_hlds__purity__V_430_430 = check_hlds__purity__V_422_422;
#line 788 "purity.m"
                      check_hlds__purity__V_431_431 = check_hlds__purity__V_423_423;
#line 789 "purity.m"
                      check_hlds__purity__V_432_432 = check_hlds__purity__V_424_424;
#line 789 "purity.m"
                      check_hlds__purity__V_433_433 = check_hlds__purity__V_425_425;
#line 789 "purity.m"
                      check_hlds__purity__V_435_435 = check_hlds__purity__V_427_427;
#line 789 "purity.m"
                      check_hlds__purity__V_436_436 = check_hlds__purity__VarSet_81;
#line 789 "purity.m"
                      check_hlds__purity__V_437_437 = check_hlds__purity__V_429_429;
#line 789 "purity.m"
                      check_hlds__purity__V_438_438 = check_hlds__purity__V_430_430;
#line 789 "purity.m"
                      {
#line 789 "purity.m"
                        check_hlds__purity__STATE_VARIABLE_Info_247_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 789 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 0) = ((MR_Box) (check_hlds__purity__V_432_432));
#line 789 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 1) = ((MR_Box) (check_hlds__purity__V_433_433));
#line 789 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 2) = ((MR_Box) (check_hlds__purity__PredInfo_286));
#line 789 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 3) = ((MR_Box) (check_hlds__purity__V_435_435));
#line 789 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 4) = ((MR_Box) (check_hlds__purity__V_436_436));
#line 789 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 5) = ((MR_Box) (check_hlds__purity__V_437_437));
#line 789 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 6) = ((MR_Box) (check_hlds__purity__V_438_438));
#line 789 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 7) = ((MR_Box) (check_hlds__purity__V_431_431));
#line 789 "purity.m"
                      }
#line 792 "purity.m"
#line 792 "purity.m"
                      switch (MR_tag((MR_Word) check_hlds__purity__IsPlainUnify_84)) {
#line 792 "purity.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 792 "purity.m"
                        case (MR_Integer) 0:
#line 792 "purity.m"
#line 792 "purity.m"
                          switch (MR_unmkbody(check_hlds__purity__IsPlainUnify_84)) {
#line 792 "purity.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 792 "purity.m"
                            case (MR_Integer) 0:
#line 793 "purity.m"
                              {
#line 794 "purity.m"
                                {
#line 794 "purity.m"
                                  check_hlds__purity__STATE_VARIABLE_Info_249_249 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 794 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 0) = ((MR_Box) (check_hlds__purity__V_432_432));
#line 794 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 1) = ((MR_Box) (check_hlds__purity__V_433_433));
#line 794 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 2) = ((MR_Box) (check_hlds__purity__PredInfo_286));
#line 794 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 3) = ((MR_Box) (check_hlds__purity__V_435_435));
#line 794 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 4) = ((MR_Box) (check_hlds__purity__V_436_436));
#line 794 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 5) = ((MR_Box) (check_hlds__purity__V_437_437));
#line 794 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 6) = ((MR_Box) (check_hlds__purity__V_438_438));
#line 794 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 7) = ((MR_Box) ((MR_Integer) 1));
#line 794 "purity.m"
                                }
#line 793 "purity.m"
                              }
#line 792 "purity.m"
                              break;
#line 792 "purity.m"
                            case (MR_Integer) 1:
#line 791 "purity.m"
                              check_hlds__purity__STATE_VARIABLE_Info_249_249 = check_hlds__purity__STATE_VARIABLE_Info_247_247;
#line 792 "purity.m"
                              break;
#line 792 "purity.m"
                          }
#line 792 "purity.m"
                          break;
#line 792 "purity.m"
                        case (MR_Integer) 1:
#line 796 "purity.m"
                          {
#line 796 "purity.m"
                            MR_Word check_hlds__purity__Spec_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__IsPlainUnify_84, (MR_Integer) 0)));

#line 797 "purity.m"
                            {
#line 797 "purity.m"
                              check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_284, check_hlds__purity__STATE_VARIABLE_Info_247_247, &check_hlds__purity__STATE_VARIABLE_Info_249_249);
                            }
#line 796 "purity.m"
                          }
#line 792 "purity.m"
                          break;
#line 792 "purity.m"
                      }
#line 778 "purity.m"
                    }
#line 799 "purity.m"
                    break;
#line 799 "purity.m"
                }
#line 803 "purity.m"
                check_hlds__purity__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, (MR_Integer) 0)));
#line 803 "purity.m"
                check_hlds__purity__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, (MR_Integer) 1)));
#line 803 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_251_251)) == (MR_mktag((MR_Integer) 1)));
#line 803 "purity.m"
                if (check_hlds__purity__succeeded)
#line 803 "purity.m"
                  {
#line 803 "purity.m"
                    check_hlds__purity__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 0)));
#line 803 "purity.m"
                    check_hlds__purity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 1)));
#line 803 "purity.m"
                    check_hlds__purity__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 2)));
#line 803 "purity.m"
                    check_hlds__purity__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 3)));
#line 803 "purity.m"
                    check_hlds__purity__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 4)));
#line 805 "purity.m"
                    {
#line 805 "purity.m"
                      MR_Word check_hlds__purity__UnifySpecs_91;

#line 804 "purity.m"
                      {
#line 804 "purity.m"
                        check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_249_249, check_hlds__purity__GoalInfo_10, check_hlds__purity__LHSVar_51, check_hlds__purity__ConsId_75, check_hlds__purity__Args_77, &check_hlds__purity__UnifySpecs_91);
                      }
#line 806 "purity.m"
                      {
#line 806 "purity.m"
                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_91, check_hlds__purity__STATE_VARIABLE_Info_249_249, check_hlds__purity__STATE_VARIABLE_Info_193);
                      }
#line 807 "purity.m"
                      *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 808 "purity.m"
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 809 "purity.m"
                      check_hlds__purity__Goal_92 = check_hlds__purity__Goal1_83;
#line 805 "purity.m"
                    }
#line 803 "purity.m"
                  }
#line 803 "purity.m"
                else
#line 811 "purity.m"
                  {
#line 811 "purity.m"
                    check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_83, &check_hlds__purity__Goal_92, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_249_249, check_hlds__purity__STATE_VARIABLE_Info_193);
                  }
#line 814 "purity.m"
                *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_92, (MR_Integer) 0)));
#line 814 "purity.m"
                check_hlds__purity__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_92, (MR_Integer) 1)));
#line 775 "purity.m"
              }
#line 774 "purity.m"
              break;
#line 774 "purity.m"
            case (MR_Integer) 2:
#line 746 "purity.m"
              {
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaPurity_56 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 746 "purity.m"
                MR_Word check_hlds__purity__Groundness_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 746 "purity.m"
                MR_Word check_hlds__purity__PredOrFunc_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaNonLocals_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 2)));
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaQuantVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 3)));
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaModes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 4)));
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaDetism_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 5)));
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaGoal0_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 6)));
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal0_64, (MR_Integer) 0)));
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaGoalInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal0_64, (MR_Integer) 1)));
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaGoalExpr_67;
#line 746 "purity.m"
                MR_Word check_hlds__purity__GoalPurity_68;
#line 746 "purity.m"
                MR_Word check_hlds__purity__LambdaGoal_70;
#line 746 "purity.m"
                MR_Word check_hlds__purity__RHS_71;
#line 746 "purity.m"
                MR_Word check_hlds__purity__ClosureSpecs_72;
#line 746 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_254_254;
#line 746 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_255_255;
#line 746 "purity.m"
                MR_Word check_hlds__purity__DeclaredPurity_283;
#line 748 "purity.m"
                MR_Word check_hlds__purity__V_69_69;

#line 748 "purity.m"
                {
#line 748 "purity.m"
                  check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__LambdaGoalExpr0_65, &check_hlds__purity__LambdaGoalExpr_67, check_hlds__purity__LambdaGoalInfo0_66, &check_hlds__purity__GoalPurity_68, &check_hlds__purity__V_69_69, check_hlds__purity__STATE_VARIABLE_Info_0_192, &check_hlds__purity__STATE_VARIABLE_Info_254_254);
                }
#line 750 "purity.m"
                {
#line 750 "purity.m"
                  check_hlds__purity__LambdaGoal_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal_70, 0) = ((MR_Box) (check_hlds__purity__LambdaGoalExpr_67));
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal_70, 1) = ((MR_Box) (check_hlds__purity__LambdaGoalInfo0_66));
#line 750 "purity.m"
                }
#line 751 "purity.m"
                {
#line 751 "purity.m"
                  check_hlds__purity__RHS_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 751 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 0) = ((MR_Box) ((check_hlds__purity__LambdaPurity_56 | ((((check_hlds__purity__Groundness_57 << (MR_Integer) 2)) | ((check_hlds__purity__PredOrFunc_58 << (MR_Integer) 3)))))));
#line 751 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 1) = (MR_Integer) 0;
#line 751 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 2) = ((MR_Box) (check_hlds__purity__LambdaNonLocals_60));
#line 751 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 3) = ((MR_Box) (check_hlds__purity__LambdaQuantVars_61));
#line 751 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 4) = ((MR_Box) (check_hlds__purity__LambdaModes_62));
#line 751 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 5) = ((MR_Box) (check_hlds__purity__LambdaDetism_63));
#line 751 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 6) = ((MR_Box) (check_hlds__purity__LambdaGoal_70));
#line 751 "purity.m"
                }
#line 755 "purity.m"
                {
#line 755 "purity.m"
                  check_hlds__purity__check_closure_purity_4_p_0(check_hlds__purity__GoalInfo_10, check_hlds__purity__LambdaPurity_56, check_hlds__purity__GoalPurity_68, &check_hlds__purity__ClosureSpecs_72);
                }
#line 757 "purity.m"
                {
#line 757 "purity.m"
                  check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__ClosureSpecs_72, check_hlds__purity__STATE_VARIABLE_Info_254_254, &check_hlds__purity__STATE_VARIABLE_Info_255_255);
                }
#line 758 "purity.m"
                {
#line 758 "purity.m"
                  MR_Word base;
#line 758 "purity.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 758 "purity.m"
                  *check_hlds__purity__GoalExpr_9 = base;
#line 758 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__LHSVar_51));
#line 758 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__RHS_71));
#line 758 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__purity__Mode_53));
#line 758 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__purity__Unification_54));
#line 758 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__purity__UnifyContext_55));
#line 758 "purity.m"
                }
#line 761 "purity.m"
                {
#line 761 "purity.m"
                  check_hlds__purity__DeclaredPurity_283 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_10);
                }
#line 769 "purity.m"
#line 769 "purity.m"
                switch (check_hlds__purity__DeclaredPurity_283) {
#line 769 "purity.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 769 "purity.m"
                  case (MR_Integer) 2:
#line 769 "purity.m"
                  case (MR_Integer) 1:
#line 765 "purity.m"
                    {
#line 765 "purity.m"
                      MR_Word check_hlds__purity__Context_73;
#line 765 "purity.m"
                      MR_Word check_hlds__purity__Spec_74;

#line 766 "purity.m"
                      {
#line 766 "purity.m"
                        check_hlds__purity__Context_73 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
                      }
#line 767 "purity.m"
                      {
#line 767 "purity.m"
                        check_hlds__purity__Spec_74 = check_hlds__purity__impure_unification_expr_error_2_f_0(check_hlds__purity__Context_73, check_hlds__purity__DeclaredPurity_283);
                      }
#line 768 "purity.m"
                      {
#line 768 "purity.m"
                        check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_74, check_hlds__purity__STATE_VARIABLE_Info_255_255, check_hlds__purity__STATE_VARIABLE_Info_193);
                      }
#line 765 "purity.m"
                    }
#line 769 "purity.m"
                    break;
#line 769 "purity.m"
                  case (MR_Integer) 0:
#line 770 "purity.m"
                    *check_hlds__purity__STATE_VARIABLE_Info_193 = check_hlds__purity__STATE_VARIABLE_Info_255_255;
#line 769 "purity.m"
                    break;
#line 769 "purity.m"
                }
#line 772 "purity.m"
                *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 773 "purity.m"
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 746 "purity.m"
              }
#line 774 "purity.m"
              break;
#line 774 "purity.m"
          }
#line 742 "purity.m"
        }
#line 674 "purity.m"
        break;
#line 674 "purity.m"
      case (MR_Integer) 2:
#line 687 "purity.m"
        {
#line 687 "purity.m"
          MR_Word check_hlds__purity__PredId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)));
#line 687 "purity.m"
          MR_Integer check_hlds__purity__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__MaybeUnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__SymName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__RunPostTypecheck_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__PredInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__CallContext_26;
#line 687 "purity.m"
          MR_Word check_hlds__purity__PredId_28;
#line 687 "purity.m"
          MR_Word check_hlds__purity__DeclaredPurity_31;
#line 688 "purity.m"
          MR_Word check_hlds__purity__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 688 "purity.m"
          MR_Word check_hlds__purity__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 688 "purity.m"
          MR_Word check_hlds__purity__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 688 "purity.m"
          MR_Word check_hlds__purity__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 688 "purity.m"
          MR_Word check_hlds__purity__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));

#line 691 "purity.m"
          {
#line 691 "purity.m"
            check_hlds__purity__CallContext_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
          }
#line 710 "purity.m"
#line 710 "purity.m"
          switch (check_hlds__purity__RunPostTypecheck_23) {
#line 710 "purity.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 710 "purity.m"
            case (MR_Integer) 1:
#line 711 "purity.m"
              {
#line 712 "purity.m"
                check_hlds__purity__PredId_28 = check_hlds__purity__PredId0_17;
#line 713 "purity.m"
                *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 711 "purity.m"
              }
#line 710 "purity.m"
              break;
#line 710 "purity.m"
            case (MR_Integer) 0:
#line 693 "purity.m"
              {
#line 693 "purity.m"
                MR_Word check_hlds__purity__SymName_27;
#line 700 "purity.m"
                MR_Word check_hlds__purity__V_260_260;
#line 700 "purity.m"
                MR_String check_hlds__purity__V_261_261;
#line 700 "purity.m"
                MR_Word check_hlds__purity__V_262_262;
#line 700 "purity.m"
                MR_Word check_hlds__purity__V_263_263;
#line 700 "purity.m"
                MR_Word check_hlds__purity__V_517_517;
#line 701 "purity.m"
                MR_Word check_hlds__purity__InputArg_29;
#line 701 "purity.m"
                MR_Word check_hlds__purity__OutputArg_30;

#line 694 "purity.m"
                {
#line 694 "purity.m"
                  check_hlds__post_typecheck__finally_resolve_pred_overloading_8_p_0(check_hlds__purity__ArgVars_19, check_hlds__purity__PredInfo_24, check_hlds__purity__ModuleInfo_25, check_hlds__purity__CallContext_26, check_hlds__purity__SymName0_22, &check_hlds__purity__SymName_27, check_hlds__purity__PredId0_17, &check_hlds__purity__PredId_28);
                }
#line 699 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__SymName_27)) == (MR_mktag((MR_Integer) 1)));
#line 699 "purity.m"
                if (check_hlds__purity__succeeded)
#line 699 "purity.m"
                  {
#line 699 "purity.m"
                    check_hlds__purity__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__SymName_27, (MR_Integer) 0)));
#line 699 "purity.m"
                    check_hlds__purity__V_261_261 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__purity__SymName_27, (MR_Integer) 1)));
#line 699 "purity.m"
                    {
#line 699 "purity.m"
                      check_hlds__purity__V_517_517 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                    }
#line 699 "purity.m"
                    {
#line 699 "purity.m"
                      check_hlds__purity__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__purity__V_260_260, check_hlds__purity__V_517_517);
                    }
#line 700 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 700 "purity.m"
                      {
#line 700 "purity.m"
                        check_hlds__purity__succeeded = (strcmp(check_hlds__purity__V_261_261, (MR_String) "unsafe_type_cast") == 0);
#line 700 "purity.m"
                        if (check_hlds__purity__succeeded)
#line 700 "purity.m"
                          {
#line 701 "purity.m"
                            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__ArgVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 701 "purity.m"
                            if (check_hlds__purity__succeeded)
#line 701 "purity.m"
                              {
#line 701 "purity.m"
                                check_hlds__purity__InputArg_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ArgVars_19, (MR_Integer) 0)));
#line 701 "purity.m"
                                check_hlds__purity__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ArgVars_19, (MR_Integer) 1)));
#line 701 "purity.m"
                                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_262_262)) == (MR_mktag((MR_Integer) 1)));
#line 701 "purity.m"
                                if (check_hlds__purity__succeeded)
#line 701 "purity.m"
                                  {
#line 701 "purity.m"
                                    check_hlds__purity__OutputArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_262_262, (MR_Integer) 0)));
#line 701 "purity.m"
                                    check_hlds__purity__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_262_262, (MR_Integer) 1)));
#line 701 "purity.m"
                                    check_hlds__purity__succeeded = (check_hlds__purity__V_263_263 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "purity.m"
                                  }
#line 701 "purity.m"
                              }
#line 700 "purity.m"
                          }
#line 700 "purity.m"
                      }
#line 699 "purity.m"
                  }
#line 696 "purity.m"
                if (check_hlds__purity__succeeded)
#line 703 "purity.m"
                  {
#line 703 "purity.m"
                    MR_Word check_hlds__purity__V_269_269;
#line 703 "purity.m"
                    MR_Word check_hlds__purity__V_270_270;
#line 703 "purity.m"
                    MR_Word check_hlds__purity__V_271_271;
#line 703 "purity.m"
                    MR_Word check_hlds__purity__V_272_272;

#line 704 "purity.m"
                    {
#line 704 "purity.m"
                      check_hlds__purity__V_270_270 = parse_tree__prog_mode__in_mode_0_f_0();
                    }
#line 704 "purity.m"
                    {
#line 704 "purity.m"
                      check_hlds__purity__V_272_272 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 704 "purity.m"
                    {
#line 704 "purity.m"
                      check_hlds__purity__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__V_271_271, 0) = ((MR_Box) (check_hlds__purity__V_272_272));
#line 704 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__V_271_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "purity.m"
                    }
#line 704 "purity.m"
                    {
#line 704 "purity.m"
                      check_hlds__purity__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__V_269_269, 0) = ((MR_Box) (check_hlds__purity__V_270_270));
#line 704 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__V_269_269, 1) = ((MR_Box) (check_hlds__purity__V_271_271));
#line 704 "purity.m"
                    }
#line 703 "purity.m"
                    {
#line 703 "purity.m"
                      MR_Word base;
#line 703 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 703 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_3[0])));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__ArgVars_19));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__V_269_269));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 703 "purity.m"
                    }
#line 703 "purity.m"
                  }
#line 696 "purity.m"
                else
#line 707 "purity.m"
                  {
#line 707 "purity.m"
                    MR_Word base;
#line 707 "purity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 707 "purity.m"
                    *check_hlds__purity__GoalExpr_9 = base;
#line 707 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__purity__PredId_28));
#line 707 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__purity__ProcId_18));
#line 707 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__purity__ArgVars_19));
#line 707 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__purity__Status_20));
#line 707 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__purity__MaybeUnifyContext_21));
#line 707 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__purity__SymName_27));
#line 707 "purity.m"
                  }
#line 693 "purity.m"
              }
#line 710 "purity.m"
              break;
#line 710 "purity.m"
          }
#line 715 "purity.m"
          {
#line 715 "purity.m"
            check_hlds__purity__DeclaredPurity_31 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_10);
          }
#line 716 "purity.m"
          {
#line 716 "purity.m"
            check_hlds__purity__perform_goal_purity_checks_6_p_0(check_hlds__purity__CallContext_26, check_hlds__purity__PredId_28, check_hlds__purity__DeclaredPurity_31, check_hlds__purity__Purity_11, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
          }
#line 719 "purity.m"
          *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 687 "purity.m"
        }
#line 674 "purity.m"
        break;
#line 674 "purity.m"
      case (MR_Integer) 3:
#line 674 "purity.m"
#line 674 "purity.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) {
#line 674 "purity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 674 "purity.m"
          case (MR_Integer) 0:
#line 722 "purity.m"
            {
#line 722 "purity.m"
              MR_Word check_hlds__purity__GenericCall0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 721 "purity.m"
              MR_Word check_hlds__purity___ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 721 "purity.m"
              MR_Word check_hlds__purity___Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 721 "purity.m"
              MR_Word check_hlds__purity___MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 721 "purity.m"
              MR_Word check_hlds__purity___Det_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));

#line 723 "purity.m"
              *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 726 "purity.m"
#line 726 "purity.m"
              switch (MR_tag((MR_Word) check_hlds__purity__GenericCall0_33)) {
#line 726 "purity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 726 "purity.m"
                case (MR_Integer) 0:
#line 725 "purity.m"
                  {
#line 725 "purity.m"
                    MR_Word check_hlds__purity__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 0)));
#line 725 "purity.m"
                    MR_Word check_hlds__purity__V_39_39;
#line 725 "purity.m"
                    MR_Integer check_hlds__purity__V_40_40;

#line 725 "purity.m"
                    *check_hlds__purity__Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 1)));
#line 725 "purity.m"
                    check_hlds__purity__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 2)));
#line 725 "purity.m"
                    check_hlds__purity__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 3)));
#line 725 "purity.m"
                  }
#line 726 "purity.m"
                  break;
#line 726 "purity.m"
                case (MR_Integer) 1:
#line 728 "purity.m"
                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 726 "purity.m"
                  break;
#line 726 "purity.m"
                case (MR_Integer) 2:
#line 726 "purity.m"
                case (MR_Integer) 3:
#line 733 "purity.m"
                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 726 "purity.m"
                  break;
#line 726 "purity.m"
              }
#line 735 "purity.m"
              *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 722 "purity.m"
              *check_hlds__purity__STATE_VARIABLE_Info_193 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 722 "purity.m"
            }
#line 674 "purity.m"
            break;
#line 674 "purity.m"
          case (MR_Integer) 1:
#line 966 "purity.m"
            {
#line 966 "purity.m"
              MR_Word check_hlds__purity__Attributes_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 966 "purity.m"
              MR_Word check_hlds__purity__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 966 "purity.m"
              MR_Integer check_hlds__purity__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 966 "purity.m"
              MR_Word check_hlds__purity__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 966 "purity.m"
              MR_Word check_hlds__purity__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));
#line 966 "purity.m"
              MR_Word check_hlds__purity__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 6)));
#line 966 "purity.m"
              MR_Word check_hlds__purity__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 7)));

#line 967 "purity.m"
              {
#line 967 "purity.m"
                *check_hlds__purity__Purity_11 = parse_tree__prog_data__get_purity_1_f_0(check_hlds__purity__Attributes_157);
              }
#line 968 "purity.m"
              *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 969 "purity.m"
              *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 966 "purity.m"
              *check_hlds__purity__STATE_VARIABLE_Info_193 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 966 "purity.m"
            }
#line 674 "purity.m"
            break;
#line 674 "purity.m"
          case (MR_Integer) 2:
#line 674 "purity.m"
            {
#line 674 "purity.m"
              MR_Word check_hlds__purity__ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 674 "purity.m"
              MR_Word check_hlds__purity__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 674 "purity.m"
              MR_Word check_hlds__purity__Goals_16;

#line 679 "purity.m"
#line 679 "purity.m"
              switch (check_hlds__purity__ConjType_14) {
#line 679 "purity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 679 "purity.m"
                case (MR_Integer) 1:
#line 680 "purity.m"
                  {
#line 681 "purity.m"
                    {
#line 681 "purity.m"
                      check_hlds__purity__compute_parallel_goals_purity_8_p_0(check_hlds__purity__Goals0_15, &check_hlds__purity__Goals_16, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 680 "purity.m"
                  }
#line 679 "purity.m"
                  break;
#line 679 "purity.m"
                case (MR_Integer) 0:
#line 676 "purity.m"
                  {
#line 677 "purity.m"
                    {
#line 677 "purity.m"
                      check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__Goals0_15, &check_hlds__purity__Goals_16, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 676 "purity.m"
                  }
#line 679 "purity.m"
                  break;
#line 679 "purity.m"
              }
#line 684 "purity.m"
              {
#line 684 "purity.m"
                MR_Word base;
#line 684 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 684 "purity.m"
                *check_hlds__purity__GoalExpr_9 = base;
#line 684 "purity.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 684 "purity.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ConjType_14));
#line 684 "purity.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Goals_16));
#line 684 "purity.m"
              }
#line 674 "purity.m"
            }
#line 674 "purity.m"
            break;
#line 674 "purity.m"
          case (MR_Integer) 3:
#line 823 "purity.m"
            {
#line 823 "purity.m"
              MR_Word check_hlds__purity__Goals0_305 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 824 "purity.m"
              MR_Word * check_hlds__purity__AddrGoals_519;

#line 826 "purity.m"
              {
#line 826 "purity.m"
                MR_Word base;
#line 826 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "purity.m"
                *check_hlds__purity__GoalExpr_9 = base;
#line 826 "purity.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 826 "purity.m"
                MR_hl_field(MR_mktag(3), base, 1) = NULL;
#line 826 "purity.m"
              }
#line 826 "purity.m"
              check_hlds__purity__AddrGoals_519 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 1));
#line 824 "purity.m"
              {
#line 824 "purity.m"
                check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(check_hlds__purity__Goals0_305, check_hlds__purity__AddrGoals_519, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
              }
#line 823 "purity.m"
            }
#line 674 "purity.m"
            break;
#line 674 "purity.m"
          case (MR_Integer) 4:
#line 737 "purity.m"
            {
#line 737 "purity.m"
              MR_Word check_hlds__purity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 737 "purity.m"
              MR_Word check_hlds__purity__Canfail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 737 "purity.m"
              MR_Word check_hlds__purity__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 738 "purity.m"
              MR_Word * check_hlds__purity__AddrCases_522;

#line 740 "purity.m"
              {
#line 740 "purity.m"
                MR_Word base;
#line 740 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 740 "purity.m"
                *check_hlds__purity__GoalExpr_9 = base;
#line 740 "purity.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 740 "purity.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Var_47));
#line 740 "purity.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Canfail_48));
#line 740 "purity.m"
                MR_hl_field(MR_mktag(3), base, 3) = NULL;
#line 740 "purity.m"
              }
#line 740 "purity.m"
              check_hlds__purity__AddrCases_522 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 3));
#line 738 "purity.m"
              {
#line 738 "purity.m"
                check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(check_hlds__purity__Cases0_49, check_hlds__purity__AddrCases_522, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
              }
#line 737 "purity.m"
            }
#line 674 "purity.m"
            break;
#line 674 "purity.m"
          case (MR_Integer) 5:
#line 840 "purity.m"
            {
#line 840 "purity.m"
              MR_Word check_hlds__purity__Reason0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 840 "purity.m"
              MR_Word check_hlds__purity__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));

#line 846 "purity.m"
#line 846 "purity.m"
              switch (MR_tag((MR_Word) check_hlds__purity__Reason0_100)) {
#line 846 "purity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 846 "purity.m"
                case (MR_Integer) 0:
#line 846 "purity.m"
                case (MR_Integer) 1:
#line 932 "purity.m"
                  {
#line 932 "purity.m"
                    MR_Word * check_hlds__purity__AddrSubGoal_520;

#line 934 "purity.m"
                    {
#line 934 "purity.m"
                      MR_Word base;
#line 934 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 934 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 934 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 934 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 934 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 2) = NULL;
#line 934 "purity.m"
                    }
#line 934 "purity.m"
                    check_hlds__purity__AddrSubGoal_520 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 2));
#line 932 "purity.m"
                    {
#line 932 "purity.m"
                      check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_101, check_hlds__purity__AddrSubGoal_520, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 932 "purity.m"
                  }
#line 846 "purity.m"
                  break;
#line 846 "purity.m"
                case (MR_Integer) 2:
#line 842 "purity.m"
                  {
#line 842 "purity.m"
                    MR_Word check_hlds__purity__SubGoal_103;
#line 843 "purity.m"
                    MR_Word check_hlds__purity__V_104_104;

#line 842 "purity.m"
                    *check_hlds__purity__Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__Reason0_100, (MR_Integer) 0)));
#line 843 "purity.m"
                    {
#line 843 "purity.m"
                      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_103, &check_hlds__purity__V_104_104, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 844 "purity.m"
                    {
#line 844 "purity.m"
                      MR_Word base;
#line 844 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 844 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 844 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 844 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 844 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_103));
#line 844 "purity.m"
                    }
#line 842 "purity.m"
                  }
#line 846 "purity.m"
                  break;
#line 846 "purity.m"
                case (MR_Integer) 3:
#line 846 "purity.m"
#line 846 "purity.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 0)))) {
#line 846 "purity.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 846 "purity.m"
                    case (MR_Integer) 0:
#line 846 "purity.m"
                    case (MR_Integer) 1:
#line 846 "purity.m"
                    case (MR_Integer) 2:
#line 846 "purity.m"
                    case (MR_Integer) 3:
#line 846 "purity.m"
                    case (MR_Integer) 4:
#line 932 "purity.m"
                      {
#line 932 "purity.m"
                        MR_Word * check_hlds__purity__AddrSubGoal_520;

#line 934 "purity.m"
                        {
#line 934 "purity.m"
                          MR_Word base;
#line 934 "purity.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 934 "purity.m"
                          *check_hlds__purity__GoalExpr_9 = base;
#line 934 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 934 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 934 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 2) = NULL;
#line 934 "purity.m"
                        }
#line 934 "purity.m"
                        check_hlds__purity__AddrSubGoal_520 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 2));
#line 932 "purity.m"
                        {
#line 932 "purity.m"
                          check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_101, check_hlds__purity__AddrSubGoal_520, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                        }
#line 932 "purity.m"
                      }
#line 846 "purity.m"
                      break;
#line 846 "purity.m"
                    case (MR_Integer) 5:
#line 847 "purity.m"
                      {
#line 847 "purity.m"
                        MR_Word check_hlds__purity__TermVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 1)));
#line 847 "purity.m"
                        MR_Word check_hlds__purity__Kind0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 2)));

#line 902 "purity.m"
#line 902 "purity.m"
                        switch (check_hlds__purity__Kind0_106) {
#line 902 "purity.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 902 "purity.m"
                          case (MR_Integer) 1:
#line 902 "purity.m"
                          case (MR_Integer) 0:
#line 851 "purity.m"
                            {
#line 851 "purity.m"
                              MR_Word check_hlds__purity__SubGoalExpr0_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal0_101, (MR_Integer) 0)));
#line 851 "purity.m"
                              MR_Word check_hlds__purity__SubGoalInfo0_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal0_101, (MR_Integer) 1)));
#line 851 "purity.m"
                              MR_Word check_hlds__purity__SubGoals0_110;
#line 851 "purity.m"
                              MR_Word check_hlds__purity__PostTypeCheck_111;
#line 853 "purity.m"
                              MR_Word check_hlds__purity__SubGoals0Prime_109;
#line 853 "purity.m"
                              MR_Word check_hlds__purity__V_225_225;
#line 859 "purity.m"
                              MR_Word check_hlds__purity__V_448_448;
#line 859 "purity.m"
                              MR_Word check_hlds__purity__V_449_449;
#line 859 "purity.m"
                              MR_Word check_hlds__purity__V_450_450;
#line 859 "purity.m"
                              MR_Word check_hlds__purity__V_451_451;
#line 859 "purity.m"
                              MR_Word check_hlds__purity__V_452_452;
#line 859 "purity.m"
                              MR_Word check_hlds__purity__V_453_453;
#line 859 "purity.m"
                              MR_Word check_hlds__purity__V_454_454;

#line 853 "purity.m"
                              check_hlds__purity__succeeded = ((((MR_tag((MR_Word) check_hlds__purity__SubGoalExpr0_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 853 "purity.m"
                              if (check_hlds__purity__succeeded)
#line 853 "purity.m"
                                {
#line 853 "purity.m"
                                  check_hlds__purity__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 1)));
#line 853 "purity.m"
                                  check_hlds__purity__SubGoals0Prime_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 2)));
#line 853 "purity.m"
                                  check_hlds__purity__succeeded = (check_hlds__purity__V_225_225 == (MR_Integer) 0);
#line 853 "purity.m"
                                }
#line 853 "purity.m"
                              if (check_hlds__purity__succeeded)
#line 854 "purity.m"
                                check_hlds__purity__SubGoals0_110 = check_hlds__purity__SubGoals0Prime_109;
#line 853 "purity.m"
                              else
#line 856 "purity.m"
                                {
#line 856 "purity.m"
                                  {
#line 856 "purity.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "from_ground_term_initial goal is not plain conj");
#line 856 "purity.m"
                                    return;
                                  }
#line 856 "purity.m"
                                }
#line 859 "purity.m"
                              check_hlds__purity__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 859 "purity.m"
                              check_hlds__purity__PostTypeCheck_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 859 "purity.m"
                              check_hlds__purity__V_449_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 859 "purity.m"
                              check_hlds__purity__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 859 "purity.m"
                              check_hlds__purity__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 859 "purity.m"
                              check_hlds__purity__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 859 "purity.m"
                              check_hlds__purity__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 859 "purity.m"
                              check_hlds__purity__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));
#line 893 "purity.m"
#line 893 "purity.m"
                              switch (check_hlds__purity__PostTypeCheck_111) {
#line 893 "purity.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 893 "purity.m"
                                case (MR_Integer) 1:
#line 894 "purity.m"
                                  {
#line 894 "purity.m"
                                    MR_Word check_hlds__purity__Specs_121;

#line 895 "purity.m"
                                    *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 896 "purity.m"
                                    {
#line 896 "purity.m"
                                      check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(check_hlds__purity__SubGoals0_110, check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__purity__Specs_121);
                                    }
#line 898 "purity.m"
                                    {
#line 898 "purity.m"
                                      check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__Specs_121, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                                    }
#line 899 "purity.m"
                                    *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 900 "purity.m"
                                    *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 894 "purity.m"
                                  }
#line 893 "purity.m"
                                  break;
#line 893 "purity.m"
                                case (MR_Integer) 0:
#line 861 "purity.m"
                                  {
#line 861 "purity.m"
                                    MR_Word check_hlds__purity__RevMarkedSubGoals_112;
#line 861 "purity.m"
                                    MR_Word check_hlds__purity__Invariants_113;

#line 862 "purity.m"
                                    {
#line 862 "purity.m"
                                      check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(check_hlds__purity__SubGoals0_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__purity__RevMarkedSubGoals_112, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 0, &check_hlds__purity__Invariants_113);
                                    }
#line 876 "purity.m"
#line 876 "purity.m"
                                    switch (check_hlds__purity__Invariants_113) {
#line 876 "purity.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 876 "purity.m"
                                      case (MR_Integer) 1:
#line 877 "purity.m"
                                        {
#line 877 "purity.m"
                                          MR_Word check_hlds__purity__ConstructOrderMarkedSubGoals_118;
#line 877 "purity.m"
                                          MR_Word check_hlds__purity__Order_119;
#line 877 "purity.m"
                                          MR_Word check_hlds__purity__SubGoal_313;
#line 891 "purity.m"
                                          MR_Word check_hlds__purity__V_120_120;

#line 882 "purity.m"
#line 882 "purity.m"
                                          switch (check_hlds__purity__Kind0_106) {
#line 882 "purity.m"
                                            default: /*NOTREACHED*/ MR_assert(0);
#line 882 "purity.m"
                                            case (MR_Integer) 1:
#line 883 "purity.m"
                                              {
#line 884 "purity.m"
                                                {
#line 884 "purity.m"
                                                  mercury__list__reverse_2_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, check_hlds__purity__RevMarkedSubGoals_112, &check_hlds__purity__ConstructOrderMarkedSubGoals_118);
                                                }
#line 886 "purity.m"
                                                check_hlds__purity__Order_119 = (MR_Integer) 0;
#line 883 "purity.m"
                                              }
#line 882 "purity.m"
                                              break;
#line 882 "purity.m"
                                            case (MR_Integer) 0:
#line 879 "purity.m"
                                              {
#line 880 "purity.m"
                                                check_hlds__purity__ConstructOrderMarkedSubGoals_118 = check_hlds__purity__RevMarkedSubGoals_112;
#line 881 "purity.m"
                                                check_hlds__purity__Order_119 = (MR_Integer) 1;
#line 879 "purity.m"
                                              }
#line 882 "purity.m"
                                              break;
#line 882 "purity.m"
                                          }
#line 888 "purity.m"
                                          {
#line 888 "purity.m"
                                            hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(check_hlds__purity__GoalInfo_10, check_hlds__purity__SubGoalInfo0_108, check_hlds__purity__ConstructOrderMarkedSubGoals_118, check_hlds__purity__Order_119, &check_hlds__purity__SubGoal_313);
                                          }
#line 891 "purity.m"
                                          *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_313, (MR_Integer) 0)));
#line 891 "purity.m"
                                          check_hlds__purity__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_313, (MR_Integer) 1)));
#line 877 "purity.m"
                                        }
#line 876 "purity.m"
                                        break;
#line 876 "purity.m"
                                      case (MR_Integer) 0:
#line 867 "purity.m"
                                        {
#line 867 "purity.m"
                                          MR_Word check_hlds__purity__TypeCtorInfo_502_502 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 867 "purity.m"
                                          MR_Word check_hlds__purity__RevSubGoals_114;
#line 867 "purity.m"
                                          MR_Word check_hlds__purity__SubGoals_115;
#line 867 "purity.m"
                                          MR_Word check_hlds__purity__SubGoalExpr_116;
#line 867 "purity.m"
                                          MR_Word check_hlds__purity__SubGoalInfo_117;
#line 867 "purity.m"
                                          MR_Word check_hlds__purity__SubGoal_312;

#line 868 "purity.m"
                                          {
#line 868 "purity.m"
                                            mercury__list__map_3_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, check_hlds__purity__TypeCtorInfo_502_502, (MR_Word) &check_hlds__purity_scalar_common_1[2], check_hlds__purity__RevMarkedSubGoals_112, &check_hlds__purity__RevSubGoals_114);
                                          }
#line 870 "purity.m"
                                          {
#line 870 "purity.m"
                                            mercury__list__reverse_2_p_0(check_hlds__purity__TypeCtorInfo_502_502, check_hlds__purity__RevSubGoals_114, &check_hlds__purity__SubGoals_115);
                                          }
#line 871 "purity.m"
                                          {
#line 871 "purity.m"
                                            check_hlds__purity__SubGoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 871 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 871 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 1) = ((MR_Box) ((MR_Integer) 0));
#line 871 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 2) = ((MR_Box) (check_hlds__purity__SubGoals_115));
#line 871 "purity.m"
                                          }
#line 872 "purity.m"
                                          {
#line 872 "purity.m"
                                            check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(*check_hlds__purity__Purity_11, *check_hlds__purity__ContainsTrace_12, check_hlds__purity__SubGoalInfo0_108, &check_hlds__purity__SubGoalInfo_117);
                                          }
#line 874 "purity.m"
                                          {
#line 874 "purity.m"
                                            check_hlds__purity__SubGoal_312 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 874 "purity.m"
                                            MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_312, 0) = ((MR_Box) (check_hlds__purity__SubGoalExpr_116));
#line 874 "purity.m"
                                            MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_312, 1) = ((MR_Box) (check_hlds__purity__SubGoalInfo_117));
#line 874 "purity.m"
                                          }
#line 875 "purity.m"
                                          {
#line 875 "purity.m"
                                            MR_Word base;
#line 875 "purity.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 875 "purity.m"
                                            *check_hlds__purity__GoalExpr_9 = base;
#line 875 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 875 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 875 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_312));
#line 875 "purity.m"
                                          }
#line 867 "purity.m"
                                        }
#line 876 "purity.m"
                                        break;
#line 876 "purity.m"
                                    }
#line 861 "purity.m"
                                  }
#line 893 "purity.m"
                                  break;
#line 893 "purity.m"
                              }
#line 851 "purity.m"
                            }
#line 902 "purity.m"
                            break;
#line 902 "purity.m"
                          case (MR_Integer) 2:
#line 902 "purity.m"
                          case (MR_Integer) 3:
#line 905 "purity.m"
                            {
#line 905 "purity.m"
                              MR_Word check_hlds__purity__HaveConvertedUnify_122;
#line 905 "purity.m"
                              MR_Word check_hlds__purity__STATE_VARIABLE_Info_221_221;
#line 905 "purity.m"
                              MR_Word check_hlds__purity__SubGoal_318;
#line 906 "purity.m"
                              MR_Word check_hlds__purity__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 906 "purity.m"
                              MR_Word check_hlds__purity__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 906 "purity.m"
                              MR_Word check_hlds__purity__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 906 "purity.m"
                              MR_Word check_hlds__purity__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 906 "purity.m"
                              MR_Word check_hlds__purity__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 906 "purity.m"
                              MR_Word check_hlds__purity__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 906 "purity.m"
                              MR_Word check_hlds__purity__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 906 "purity.m"
                              MR_Word check_hlds__purity__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));
#line 909 "purity.m"
                              MR_Word check_hlds__purity__V_463_463;
#line 909 "purity.m"
                              MR_Word check_hlds__purity__V_464_464;
#line 909 "purity.m"
                              MR_Word check_hlds__purity__V_465_465;
#line 909 "purity.m"
                              MR_Word check_hlds__purity__V_466_466;
#line 909 "purity.m"
                              MR_Word check_hlds__purity__V_467_467;
#line 909 "purity.m"
                              MR_Word check_hlds__purity__V_468_468;
#line 909 "purity.m"
                              MR_Word check_hlds__purity__V_469_469;

#line 906 "purity.m"
                              {
#line 906 "purity.m"
                                check_hlds__purity__STATE_VARIABLE_Info_221_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 906 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 0) = ((MR_Box) (check_hlds__purity__V_455_455));
#line 906 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 1) = ((MR_Box) (check_hlds__purity__V_456_456));
#line 906 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 2) = ((MR_Box) (check_hlds__purity__V_457_457));
#line 906 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 3) = ((MR_Box) (check_hlds__purity__V_458_458));
#line 906 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 4) = ((MR_Box) (check_hlds__purity__V_459_459));
#line 906 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 5) = ((MR_Box) (check_hlds__purity__V_460_460));
#line 906 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 6) = ((MR_Box) (check_hlds__purity__V_461_461));
#line 906 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 7) = ((MR_Box) ((MR_Integer) 0));
#line 906 "purity.m"
                              }
#line 907 "purity.m"
                              {
#line 907 "purity.m"
                                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_318, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_221_221, check_hlds__purity__STATE_VARIABLE_Info_193);
                              }
#line 909 "purity.m"
                              check_hlds__purity__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 0)));
#line 909 "purity.m"
                              check_hlds__purity__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 1)));
#line 909 "purity.m"
                              check_hlds__purity__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 2)));
#line 909 "purity.m"
                              check_hlds__purity__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 3)));
#line 909 "purity.m"
                              check_hlds__purity__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 4)));
#line 909 "purity.m"
                              check_hlds__purity__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 5)));
#line 909 "purity.m"
                              check_hlds__purity__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 6)));
#line 909 "purity.m"
                              check_hlds__purity__HaveConvertedUnify_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 7)));
#line 913 "purity.m"
#line 913 "purity.m"
                              switch (check_hlds__purity__HaveConvertedUnify_122) {
#line 913 "purity.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 913 "purity.m"
                                case (MR_Integer) 1:
#line 914 "purity.m"
                                  {
#line 914 "purity.m"
                                    MR_Word check_hlds__purity__Reason_123;

#line 919 "purity.m"
                                    {
#line 919 "purity.m"
                                      check_hlds__purity__Reason_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 919 "purity.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 919 "purity.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 1) = ((MR_Box) (check_hlds__purity__TermVar_105));
#line 919 "purity.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 2) = ((MR_Box) ((MR_Integer) 3));
#line 919 "purity.m"
                                    }
#line 920 "purity.m"
                                    {
#line 920 "purity.m"
                                      MR_Word base;
#line 920 "purity.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 920 "purity.m"
                                      *check_hlds__purity__GoalExpr_9 = base;
#line 920 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 920 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason_123));
#line 920 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_318));
#line 920 "purity.m"
                                    }
#line 914 "purity.m"
                                  }
#line 913 "purity.m"
                                  break;
#line 913 "purity.m"
                                case (MR_Integer) 0:
#line 912 "purity.m"
                                  {
#line 912 "purity.m"
                                    MR_Word base;
#line 912 "purity.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 912 "purity.m"
                                    *check_hlds__purity__GoalExpr_9 = base;
#line 912 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 912 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 912 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_318));
#line 912 "purity.m"
                                  }
#line 913 "purity.m"
                                  break;
#line 913 "purity.m"
                              }
#line 905 "purity.m"
                            }
#line 902 "purity.m"
                            break;
#line 902 "purity.m"
                        }
#line 847 "purity.m"
                      }
#line 846 "purity.m"
                      break;
#line 846 "purity.m"
                    case (MR_Integer) 6:
#line 936 "purity.m"
                      {
#line 936 "purity.m"
                        MR_Word check_hlds__purity__SubGoal_322;
#line 937 "purity.m"
                        MR_Word check_hlds__purity___SubPurity_138;
#line 937 "purity.m"
                        MR_Word check_hlds__purity__V_139_139;

#line 937 "purity.m"
                        {
#line 937 "purity.m"
                          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_322, &check_hlds__purity___SubPurity_138, &check_hlds__purity__V_139_139, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                        }
#line 938 "purity.m"
                        {
#line 938 "purity.m"
                          MR_Word base;
#line 938 "purity.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 938 "purity.m"
                          *check_hlds__purity__GoalExpr_9 = base;
#line 938 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 938 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 938 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_322));
#line 938 "purity.m"
                        }
#line 939 "purity.m"
                        *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 940 "purity.m"
                        *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 936 "purity.m"
                      }
#line 846 "purity.m"
                      break;
#line 846 "purity.m"
                    case (MR_Integer) 7:
#line 944 "purity.m"
                      {
#line 945 "purity.m"
                        {
#line 945 "purity.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "loop_control");
#line 945 "purity.m"
                          return;
                        }
#line 944 "purity.m"
                      }
#line 846 "purity.m"
                      break;
#line 846 "purity.m"
                  }
#line 846 "purity.m"
                  break;
#line 846 "purity.m"
              }
#line 840 "purity.m"
            }
#line 674 "purity.m"
            break;
#line 674 "purity.m"
          case (MR_Integer) 6:
#line 948 "purity.m"
            {
#line 948 "purity.m"
              MR_Word check_hlds__purity__Vars_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 948 "purity.m"
              MR_Word check_hlds__purity__Cond0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 948 "purity.m"
              MR_Word check_hlds__purity__Then0_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 948 "purity.m"
              MR_Word check_hlds__purity__Else0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 948 "purity.m"
              MR_Word check_hlds__purity__Cond_147;
#line 948 "purity.m"
              MR_Word check_hlds__purity__Purity1_148;
#line 948 "purity.m"
              MR_Word check_hlds__purity__ContainsTrace1_149;
#line 948 "purity.m"
              MR_Word check_hlds__purity__Then_150;
#line 948 "purity.m"
              MR_Word check_hlds__purity__Purity2_151;
#line 948 "purity.m"
              MR_Word check_hlds__purity__ContainsTrace2_152;
#line 948 "purity.m"
              MR_Word check_hlds__purity__Else_153;
#line 948 "purity.m"
              MR_Word check_hlds__purity__Purity3_154;
#line 948 "purity.m"
              MR_Word check_hlds__purity__ContainsTrace3_155;
#line 948 "purity.m"
              MR_Word check_hlds__purity__Purity12_156;
#line 948 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_213_213;
#line 948 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_214_214;

#line 949 "purity.m"
              {
#line 949 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Cond0_144, &check_hlds__purity__Cond_147, &check_hlds__purity__Purity1_148, &check_hlds__purity__ContainsTrace1_149, check_hlds__purity__STATE_VARIABLE_Info_0_192, &check_hlds__purity__STATE_VARIABLE_Info_213_213);
              }
#line 950 "purity.m"
              {
#line 950 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Then0_145, &check_hlds__purity__Then_150, &check_hlds__purity__Purity2_151, &check_hlds__purity__ContainsTrace2_152, check_hlds__purity__STATE_VARIABLE_Info_213_213, &check_hlds__purity__STATE_VARIABLE_Info_214_214);
              }
#line 951 "purity.m"
              {
#line 951 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Else0_146, &check_hlds__purity__Else_153, &check_hlds__purity__Purity3_154, &check_hlds__purity__ContainsTrace3_155, check_hlds__purity__STATE_VARIABLE_Info_214_214, check_hlds__purity__STATE_VARIABLE_Info_193);
              }
#line 952 "purity.m"
              {
#line 952 "purity.m"
                check_hlds__purity__Purity12_156 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity1_148, check_hlds__purity__Purity2_151);
              }
#line 953 "purity.m"
              {
#line 953 "purity.m"
                *check_hlds__purity__Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity12_156, check_hlds__purity__Purity3_154);
              }
#line 955 "purity.m"
              check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace1_149 == (MR_Integer) 0);
#line 956 "purity.m"
              if (!(check_hlds__purity__succeeded))
#line 956 "purity.m"
                {
#line 956 "purity.m"
                  check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace2_152 == (MR_Integer) 0);
#line 956 "purity.m"
                  if (!(check_hlds__purity__succeeded))
#line 957 "purity.m"
                    check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace3_155 == (MR_Integer) 0);
#line 956 "purity.m"
                }
#line 954 "purity.m"
              if (check_hlds__purity__succeeded)
#line 960 "purity.m"
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 954 "purity.m"
              else
#line 962 "purity.m"
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 964 "purity.m"
              {
#line 964 "purity.m"
                MR_Word base;
#line 964 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 964 "purity.m"
                *check_hlds__purity__GoalExpr_9 = base;
#line 964 "purity.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 964 "purity.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Vars_143));
#line 964 "purity.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Cond_147));
#line 964 "purity.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__Then_150));
#line 964 "purity.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__purity__Else_153));
#line 964 "purity.m"
              }
#line 948 "purity.m"
            }
#line 674 "purity.m"
            break;
#line 674 "purity.m"
          case (MR_Integer) 7:
#line 971 "purity.m"
            {
#line 971 "purity.m"
              MR_Word check_hlds__purity__ShortHand0_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));

#line 1030 "purity.m"
#line 1030 "purity.m"
              switch (MR_tag((MR_Word) check_hlds__purity__ShortHand0_164)) {
#line 1030 "purity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1030 "purity.m"
                case (MR_Integer) 0:
#line 1037 "purity.m"
                  {
#line 1039 "purity.m"
                    {
#line 1039 "purity.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "bi_implication");
#line 1039 "purity.m"
                      return;
                    }
#line 1037 "purity.m"
                  }
#line 1030 "purity.m"
                  break;
#line 1030 "purity.m"
                case (MR_Integer) 1:
#line 974 "purity.m"
                  {
#line 974 "purity.m"
                    MR_Word check_hlds__purity__GoalType_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 0)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__Outer_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 1)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__Inner_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 2)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__MaybeOutputVars_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 3)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__MainGoal0_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 4)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__OrElseGoals0_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 5)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__OrElseInners_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 6)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__MainGoal1_181;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__OrElseGoals1_182;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__MainGoal_185;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__OrElseGoals_186;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__ShortHand_187;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__STATE_VARIABLE_Info_208_208;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__STATE_VARIABLE_Info_209_209;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__RunPostTypecheck_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__Purity1_333;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__ContainsTrace1_334;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__Purity2_335;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__ContainsTrace2_336;
#line 974 "purity.m"
                    MR_Word check_hlds__purity__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 975 "purity.m"
                    MR_Word check_hlds__purity__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 975 "purity.m"
                    MR_Word check_hlds__purity__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 975 "purity.m"
                    MR_Word check_hlds__purity__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 975 "purity.m"
                    MR_Word check_hlds__purity__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 975 "purity.m"
                    MR_Word check_hlds__purity__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));

#line 1007 "purity.m"
#line 1007 "purity.m"
                    switch (check_hlds__purity__RunPostTypecheck_329) {
#line 1007 "purity.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1007 "purity.m"
                      case (MR_Integer) 1:
#line 1008 "purity.m"
                        {
#line 1009 "purity.m"
                          check_hlds__purity__MainGoal1_181 = check_hlds__purity__MainGoal0_169;
#line 1010 "purity.m"
                          check_hlds__purity__OrElseGoals1_182 = check_hlds__purity__OrElseGoals0_170;
#line 1008 "purity.m"
                          check_hlds__purity__STATE_VARIABLE_Info_208_208 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 1008 "purity.m"
                        }
#line 1007 "purity.m"
                        break;
#line 1007 "purity.m"
                      case (MR_Integer) 0:
#line 977 "purity.m"
                        {
#line 977 "purity.m"
                          MR_Word check_hlds__purity__TypeCtorInfo_504_504;
#line 977 "purity.m"
                          MR_Word check_hlds__purity__OuterDI_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_166, (MR_Integer) 0)));
#line 977 "purity.m"
                          MR_Word check_hlds__purity__OuterUO_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_166, (MR_Integer) 1)));
#line 977 "purity.m"
                          MR_Word check_hlds__purity__OuterDITypeSpecs_175;
#line 977 "purity.m"
                          MR_Word check_hlds__purity__OuterUOTypeSpecs_177;
#line 977 "purity.m"
                          MR_Word check_hlds__purity__OuterTypeSpecs_178;
#line 977 "purity.m"
                          MR_Word check_hlds__purity__Context_323;
#line 982 "purity.m"
                          MR_Word check_hlds__purity___OuterDIType_174;
#line 984 "purity.m"
                          MR_Word check_hlds__purity___OuterUOType_176;

#line 981 "purity.m"
                          {
#line 981 "purity.m"
                            check_hlds__purity__Context_323 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
                          }
#line 982 "purity.m"
                          {
#line 982 "purity.m"
                            check_hlds__purity__check_outer_var_type_6_p_0(check_hlds__purity__Context_323, check_hlds__purity__V_472_472, check_hlds__purity__V_473_473, check_hlds__purity__OuterDI_172, &check_hlds__purity___OuterDIType_174, &check_hlds__purity__OuterDITypeSpecs_175);
                          }
#line 984 "purity.m"
                          {
#line 984 "purity.m"
                            check_hlds__purity__check_outer_var_type_6_p_0(check_hlds__purity__Context_323, check_hlds__purity__V_472_472, check_hlds__purity__V_473_473, check_hlds__purity__OuterUO_173, &check_hlds__purity___OuterUOType_176, &check_hlds__purity__OuterUOTypeSpecs_177);
                          }
#line 9444 "check_hlds.purity.c"
                          check_hlds__purity__TypeCtorInfo_504_504 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 986 "purity.m"
                          {
#line 986 "purity.m"
                            check_hlds__purity__OuterTypeSpecs_178 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_504_504, check_hlds__purity__OuterDITypeSpecs_175, check_hlds__purity__OuterUOTypeSpecs_177);
                          }
#line 992 "purity.m"
                          if ((check_hlds__purity__OuterTypeSpecs_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "purity.m"
                            {
#line 993 "purity.m"
                              MR_Word check_hlds__purity__TypeCtorInfo_509_509 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 993 "purity.m"
                              MR_Word check_hlds__purity__AtomicGoalsAndInners_183;
#line 993 "purity.m"
                              MR_Word check_hlds__purity__AllAtomicGoals1_184;
#line 993 "purity.m"
                              MR_Word check_hlds__purity__V_198_198;
#line 993 "purity.m"
                              MR_Word check_hlds__purity__V_199_199;
#line 993 "purity.m"
                              MR_Word check_hlds__purity__V_200_200;
#line 993 "purity.m"
                              MR_Word check_hlds__purity__STATE_VARIABLE_Info_201_201;
#line 997 "purity.m"
                              MR_Box check_hlds__purity__conv3_STATE_VARIABLE_Info_201_201;
#line 1005 "purity.m"
                              MR_Word check_hlds__purity__V_491_491;
#line 1005 "purity.m"
                              MR_Word check_hlds__purity__V_492_492;
#line 1005 "purity.m"
                              MR_Word check_hlds__purity__V_493_493;
#line 1005 "purity.m"
                              MR_Word check_hlds__purity__V_494_494;
#line 1005 "purity.m"
                              MR_Word check_hlds__purity__V_495_495;
#line 1005 "purity.m"
                              MR_Word check_hlds__purity__V_496_496;
#line 1005 "purity.m"
                              MR_Word check_hlds__purity__V_498_498;
#line 1005 "purity.m"
                              MR_Word check_hlds__purity__V_497_497;

#line 995 "purity.m"
                              {
#line 995 "purity.m"
                                check_hlds__purity__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__V_198_198, 0) = ((MR_Box) (check_hlds__purity__MainGoal0_169));
#line 995 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__V_198_198, 1) = ((MR_Box) (check_hlds__purity__OrElseGoals0_170));
#line 995 "purity.m"
                              }
#line 996 "purity.m"
                              {
#line 996 "purity.m"
                                check_hlds__purity__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__V_199_199, 0) = ((MR_Box) (check_hlds__purity__Inner_167));
#line 996 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__V_199_199, 1) = ((MR_Box) (check_hlds__purity__OrElseInners_171));
#line 996 "purity.m"
                              }
#line 994 "purity.m"
                              {
#line 994 "purity.m"
                                check_hlds__purity__AtomicGoalsAndInners_183 = mercury__assoc_list__from_corresponding_lists_2_f_0(check_hlds__purity__TypeCtorInfo_509_509, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0, check_hlds__purity__V_198_198, check_hlds__purity__V_199_199);
                              }
#line 997 "purity.m"
                              {
#line 997 "purity.m"
                                check_hlds__purity__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 997 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__V_200_200, 0) = ((MR_Box) (&check_hlds__purity_scalar_common_5[0]));
#line 997 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__V_200_200, 1) = ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_2));
#line 997 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__V_200_200, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 997 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__V_200_200, 3) = ((MR_Box) (check_hlds__purity__Outer_166));
#line 997 "purity.m"
                              }
#line 997 "purity.m"
                              {
#line 997 "purity.m"
                                mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__purity_scalar_common_1[0], check_hlds__purity__TypeCtorInfo_509_509, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, check_hlds__purity__V_200_200, check_hlds__purity__AtomicGoalsAndInners_183, &check_hlds__purity__AllAtomicGoals1_184, ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Info_0_192)), &check_hlds__purity__conv3_STATE_VARIABLE_Info_201_201);
                              }
#line 997 "purity.m"
                              check_hlds__purity__STATE_VARIABLE_Info_201_201 = ((MR_Word) check_hlds__purity__conv3_STATE_VARIABLE_Info_201_201);
#line 1001 "purity.m"
                              if ((check_hlds__purity__AllAtomicGoals1_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "purity.m"
                                {
#line 1003 "purity.m"
                                  {
#line 1003 "purity.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "AllAtomicGoals1 = []");
#line 1003 "purity.m"
                                    return;
                                  }
#line 1002 "purity.m"
                                }
#line 1001 "purity.m"
                              else
#line 1000 "purity.m"
                                {
#line 1000 "purity.m"
                                  check_hlds__purity__MainGoal1_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__AllAtomicGoals1_184, (MR_Integer) 0)));
#line 1000 "purity.m"
                                  check_hlds__purity__OrElseGoals1_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__AllAtomicGoals1_184, (MR_Integer) 1)));
#line 1000 "purity.m"
                                }
#line 1005 "purity.m"
                              check_hlds__purity__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 0)));
#line 1005 "purity.m"
                              check_hlds__purity__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 1)));
#line 1005 "purity.m"
                              check_hlds__purity__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 2)));
#line 1005 "purity.m"
                              check_hlds__purity__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 3)));
#line 1005 "purity.m"
                              check_hlds__purity__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 4)));
#line 1005 "purity.m"
                              check_hlds__purity__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 5)));
#line 1005 "purity.m"
                              check_hlds__purity__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 6)));
#line 1005 "purity.m"
                              check_hlds__purity__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 7)));
#line 1005 "purity.m"
                              {
#line 1005 "purity.m"
                                check_hlds__purity__STATE_VARIABLE_Info_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 0) = ((MR_Box) (check_hlds__purity__V_491_491));
#line 1005 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 1) = ((MR_Box) (check_hlds__purity__V_492_492));
#line 1005 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 2) = ((MR_Box) (check_hlds__purity__V_493_493));
#line 1005 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 3) = ((MR_Box) (check_hlds__purity__V_494_494));
#line 1005 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 4) = ((MR_Box) (check_hlds__purity__V_495_495));
#line 1005 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 5) = ((MR_Box) (check_hlds__purity__V_496_496));
#line 1005 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1005 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 7) = ((MR_Box) (check_hlds__purity__V_498_498));
#line 1005 "purity.m"
                              }
#line 993 "purity.m"
                            }
#line 992 "purity.m"
                          else
#line 988 "purity.m"
                            {
#line 989 "purity.m"
                              MR_Box check_hlds__purity__conv5_STATE_VARIABLE_Info_208_208;

#line 989 "purity.m"
                              {
#line 989 "purity.m"
                                mercury__list__foldl_4_p_0(check_hlds__purity__TypeCtorInfo_504_504, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, (MR_Word) &check_hlds__purity_scalar_common_1[3], check_hlds__purity__OuterTypeSpecs_178, ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Info_0_192)), &check_hlds__purity__conv5_STATE_VARIABLE_Info_208_208);
                              }
#line 989 "purity.m"
                              check_hlds__purity__STATE_VARIABLE_Info_208_208 = ((MR_Word) check_hlds__purity__conv5_STATE_VARIABLE_Info_208_208);
#line 990 "purity.m"
                              check_hlds__purity__MainGoal1_181 = check_hlds__purity__MainGoal0_169;
#line 991 "purity.m"
                              check_hlds__purity__OrElseGoals1_182 = check_hlds__purity__OrElseGoals0_170;
#line 988 "purity.m"
                            }
#line 977 "purity.m"
                        }
#line 1007 "purity.m"
                        break;
#line 1007 "purity.m"
                    }
#line 1012 "purity.m"
                    {
#line 1012 "purity.m"
                      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__MainGoal1_181, &check_hlds__purity__MainGoal_185, &check_hlds__purity__Purity1_333, &check_hlds__purity__ContainsTrace1_334, check_hlds__purity__STATE_VARIABLE_Info_208_208, &check_hlds__purity__STATE_VARIABLE_Info_209_209);
                    }
#line 1014 "purity.m"
                    {
#line 1014 "purity.m"
                      check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__OrElseGoals1_182, &check_hlds__purity__OrElseGoals_186, (MR_Integer) 0, &check_hlds__purity__Purity2_335, (MR_Integer) 1, &check_hlds__purity__ContainsTrace2_336, check_hlds__purity__STATE_VARIABLE_Info_209_209, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 1017 "purity.m"
                    {
#line 1017 "purity.m"
                      *check_hlds__purity__Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity1_333, check_hlds__purity__Purity2_335);
                    }
#line 1019 "purity.m"
                    check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace1_334 == (MR_Integer) 0);
#line 1020 "purity.m"
                    if (!(check_hlds__purity__succeeded))
#line 1020 "purity.m"
                      check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace2_336 == (MR_Integer) 0);
#line 1018 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 1023 "purity.m"
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 1018 "purity.m"
                    else
#line 1025 "purity.m"
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 1027 "purity.m"
                    {
#line 1027 "purity.m"
                      check_hlds__purity__ShortHand_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 0) = ((MR_Box) (check_hlds__purity__GoalType_165));
#line 1027 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 1) = ((MR_Box) (check_hlds__purity__Outer_166));
#line 1027 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 2) = ((MR_Box) (check_hlds__purity__Inner_167));
#line 1027 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 3) = ((MR_Box) (check_hlds__purity__MaybeOutputVars_168));
#line 1027 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 4) = ((MR_Box) (check_hlds__purity__MainGoal_185));
#line 1027 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 5) = ((MR_Box) (check_hlds__purity__OrElseGoals_186));
#line 1027 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 6) = ((MR_Box) (check_hlds__purity__OrElseInners_171));
#line 1027 "purity.m"
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
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ShortHand_187));
#line 1029 "purity.m"
                    }
#line 974 "purity.m"
                  }
#line 1030 "purity.m"
                  break;
#line 1030 "purity.m"
                case (MR_Integer) 2:
#line 1031 "purity.m"
                  {
#line 1031 "purity.m"
                    MR_Word check_hlds__purity__MaybeIO_188 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_164, (MR_Integer) 0)));
#line 1031 "purity.m"
                    MR_Word check_hlds__purity__ResultVar_189 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_164, (MR_Integer) 1)));
#line 1031 "purity.m"
                    MR_Word check_hlds__purity__SubGoal0_337 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_164, (MR_Integer) 2)));
#line 1032 "purity.m"
                    MR_Word check_hlds__purity__ShortHand_339;
#line 1032 "purity.m"
                    MR_Word * check_hlds__purity__AddrSubGoal_521;

#line 1034 "purity.m"
                    {
#line 1034 "purity.m"
                      check_hlds__purity__ShortHand_339 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "purity.m"
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_339, 0) = ((MR_Box) (check_hlds__purity__MaybeIO_188));
#line 1034 "purity.m"
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_339, 1) = ((MR_Box) (check_hlds__purity__ResultVar_189));
#line 1034 "purity.m"
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_339, 2) = NULL;
#line 1034 "purity.m"
                    }
#line 1034 "purity.m"
                    check_hlds__purity__AddrSubGoal_521 = (MR_Word *) &(MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_339, (MR_Integer) 2));
#line 1035 "purity.m"
                    {
#line 1035 "purity.m"
                      MR_Word base;
#line 1035 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 1035 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1035 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ShortHand_339));
#line 1035 "purity.m"
                    }
#line 1032 "purity.m"
                    {
#line 1032 "purity.m"
                      check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_337, check_hlds__purity__AddrSubGoal_521, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 1031 "purity.m"
                  }
#line 1030 "purity.m"
                  break;
#line 1030 "purity.m"
              }
#line 971 "purity.m"
            }
#line 674 "purity.m"
            break;
#line 674 "purity.m"
        }
#line 674 "purity.m"
        break;
#line 674 "purity.m"
    }
#line 674 "purity.m"
  }
#line 667 "purity.m"
}

#line 641 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
#line 641 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 641 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 641 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 641 "purity.m"
{
#line 645 "purity.m"
  {
#line 645 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 645 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "purity.m"
      {
#line 645 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 645 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 645 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 645 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 645 "purity.m"
      }
#line 645 "purity.m"
    else
#line 647 "purity.m"
      {
#line 647 "purity.m"
        MR_Word check_hlds__purity__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 647 "purity.m"
        MR_Word check_hlds__purity__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 647 "purity.m"
        MR_Word check_hlds__purity__Goal_20;
#line 647 "purity.m"
        MR_Word check_hlds__purity__GoalPurity_25;
#line 647 "purity.m"
        MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 647 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 647 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_38_38;
#line 647 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_39_39;
#line 647 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
#line 662 "purity.m"
        MR_Word * check_hlds__purity__AddrGoals_89;

#line 648 "purity.m"
        {
#line 648 "purity.m"
          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_18, &check_hlds__purity__Goal_20, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
        }
#line 653 "purity.m"
#line 653 "purity.m"
        switch (check_hlds__purity__GoalPurity_25) {
#line 653 "purity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 653 "purity.m"
          case (MR_Integer) 2:
#line 654 "purity.m"
            {
#line 654 "purity.m"
              MR_Word check_hlds__purity__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
#line 654 "purity.m"
              MR_Word check_hlds__purity__Context_29;
#line 654 "purity.m"
              MR_Word check_hlds__purity__Spec_30;
#line 654 "purity.m"
              MR_String check_hlds__purity__PurityName_47;
#line 654 "purity.m"
              MR_Word check_hlds__purity__Pieces_48;
#line 654 "purity.m"
              MR_Word check_hlds__purity__Msg_49;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_52_52;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_53_53;
#line 654 "purity.m"
              MR_String check_hlds__purity__V_54_54;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_60_60;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_61_61;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_65_65;
#line 654 "purity.m"
              MR_Word check_hlds__purity__Msgs0_71;
#line 654 "purity.m"
              MR_Word check_hlds__purity__Msgs_72;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_74_74;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_75_75;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_76_76;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_77_77;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_78_78;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_79_79;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_80_80;
#line 655 "purity.m"
              MR_Word check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));

#line 656 "purity.m"
              {
#line 656 "purity.m"
                check_hlds__purity__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_28);
              }
#line 1557 "purity.m"
              {
#line 1557 "purity.m"
                parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__GoalPurity_25, &check_hlds__purity__PurityName_47);
              }
#line 1559 "purity.m"
              {
#line 1559 "purity.m"
                check_hlds__purity__V_54_54 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_47, (MR_String) ",");
              }
#line 1559 "purity.m"
              {
#line 1559 "purity.m"
                check_hlds__purity__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "purity.m"
                MR_hl_field(MR_mktag(2), check_hlds__purity__V_53_53, 0) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1559 "purity.m"
              }
#line 1559 "purity.m"
              {
#line 1559 "purity.m"
                check_hlds__purity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 0) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1559 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[29])));
#line 1559 "purity.m"
              }
#line 1558 "purity.m"
              {
#line 1558 "purity.m"
                check_hlds__purity__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[27])));
#line 1558 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 1) = ((MR_Box) (check_hlds__purity__V_52_52));
#line 1558 "purity.m"
              }
#line 1561 "purity.m"
              {
#line 1561 "purity.m"
                check_hlds__purity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__Pieces_48));
#line 1561 "purity.m"
              }
#line 1561 "purity.m"
              {
#line 1561 "purity.m"
                check_hlds__purity__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 0) = ((MR_Box) (check_hlds__purity__V_61_61));
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "purity.m"
              }
#line 1561 "purity.m"
              {
#line 1561 "purity.m"
                check_hlds__purity__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 0) = ((MR_Box) (check_hlds__purity__Context_29));
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 1) = ((MR_Box) (check_hlds__purity__V_60_60));
#line 1561 "purity.m"
              }
#line 1562 "purity.m"
              {
#line 1562 "purity.m"
                check_hlds__purity__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1562 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 0) = ((MR_Box) (check_hlds__purity__Msg_49));
#line 1562 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1562 "purity.m"
              }
#line 1562 "purity.m"
              {
#line 1562 "purity.m"
                check_hlds__purity__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1562 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1562 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1562 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 2) = ((MR_Box) (check_hlds__purity__V_65_65));
#line 1562 "purity.m"
              }
#line 1610 "purity.m"
              check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
#line 1610 "purity.m"
              check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
#line 1610 "purity.m"
              check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
#line 1610 "purity.m"
              check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
#line 1610 "purity.m"
              check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
#line 1610 "purity.m"
              check_hlds__purity__Msgs0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
#line 1610 "purity.m"
              check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
#line 1610 "purity.m"
              check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 7)));
#line 1611 "purity.m"
              {
#line 1611 "purity.m"
                check_hlds__purity__Msgs_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 0) = ((MR_Box) (check_hlds__purity__Spec_30));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 1) = ((MR_Box) (check_hlds__purity__Msgs0_71));
#line 1611 "purity.m"
              }
#line 1612 "purity.m"
              {
#line 1612 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1612 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1612 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (check_hlds__purity__V_76_76));
#line 1612 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (check_hlds__purity__V_77_77));
#line 1612 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (check_hlds__purity__V_78_78));
#line 1612 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (check_hlds__purity__Msgs_72));
#line 1612 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) (check_hlds__purity__V_79_79));
#line 1612 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (check_hlds__purity__V_80_80));
#line 1612 "purity.m"
              }
#line 654 "purity.m"
            }
#line 653 "purity.m"
            break;
#line 653 "purity.m"
          case (MR_Integer) 0:
#line 650 "purity.m"
            check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 653 "purity.m"
            break;
#line 653 "purity.m"
          case (MR_Integer) 1:
#line 651 "purity.m"
            check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 653 "purity.m"
            break;
#line 653 "purity.m"
        }
#line 660 "purity.m"
        {
#line 660 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
#line 661 "purity.m"
        {
#line 661 "purity.m"
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
#line 646 "purity.m"
        {
#line 646 "purity.m"
          MR_Word base;
#line 646 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 646 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Goal_20));
#line 646 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 646 "purity.m"
        }
#line 646 "purity.m"
        check_hlds__purity__AddrGoals_89 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
#line 662 "purity.m"
        {
#line 662 "purity.m"
          check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(check_hlds__purity__Goals0_19, check_hlds__purity__AddrGoals_89, check_hlds__purity__STATE_VARIABLE_Purity_39_39, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_38_38, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
#line 647 "purity.m"
      }
#line 645 "purity.m"
  }
#line 641 "purity.m"
}

#line 612 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
#line 612 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 612 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 612 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 612 "purity.m"
{
#line 616 "purity.m"
  {
#line 616 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 616 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "purity.m"
      {
#line 616 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 616 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 616 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 616 "purity.m"
      }
#line 616 "purity.m"
    else
#line 618 "purity.m"
      {
#line 618 "purity.m"
        MR_Word check_hlds__purity__HeadGoal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 618 "purity.m"
        MR_Word check_hlds__purity__TailGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "purity.m"
        MR_Word check_hlds__purity__HeadGoal_24;
#line 618 "purity.m"
        MR_Word check_hlds__purity__GoalPurity_25;
#line 618 "purity.m"
        MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 618 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_34_34;
#line 618 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_35_35;
#line 618 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
#line 623 "purity.m"
        MR_Word * check_hlds__purity__AddrTailGoals_40;

#line 619 "purity.m"
        {
#line 619 "purity.m"
          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__HeadGoal0_18, &check_hlds__purity__HeadGoal_24, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_34_34);
        }
#line 621 "purity.m"
        {
#line 621 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
#line 622 "purity.m"
        {
#line 622 "purity.m"
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
#line 625 "purity.m"
        {
#line 625 "purity.m"
          MR_Word base;
#line 625 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 625 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__HeadGoal_24));
#line 625 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 625 "purity.m"
        }
#line 625 "purity.m"
        check_hlds__purity__AddrTailGoals_40 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
#line 623 "purity.m"
        {
#line 623 "purity.m"
          check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(check_hlds__purity__TailGoals0_19, check_hlds__purity__AddrTailGoals_40, check_hlds__purity__STATE_VARIABLE_Purity_35_35, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_34_34, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
#line 618 "purity.m"
      }
#line 616 "purity.m"
  }
#line 612 "purity.m"
}

#line 595 "purity.m"
static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
#line 595 "purity.m"
  MR_Word check_hlds__purity__Purity_5,
#line 595 "purity.m"
  MR_Word check_hlds__purity__ContainsTrace_6,
#line 595 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8,
#line 595 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_GoalInfo_9)
#line 595 "purity.m"
{
#line 598 "purity.m"
  {
#line 598 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 598 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10;

#line 599 "purity.m"
    {
#line 599 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__Purity_5, check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10);
    }
#line 603 "purity.m"
#line 603 "purity.m"
    switch (check_hlds__purity__ContainsTrace_6) {
#line 603 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "purity.m"
      case (MR_Integer) 1:
#line 604 "purity.m"
        {
#line 605 "purity.m"
          {
#line 605 "purity.m"
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10, check_hlds__purity__STATE_VARIABLE_GoalInfo_9);
          }
#line 604 "purity.m"
        }
#line 603 "purity.m"
        break;
#line 603 "purity.m"
      case (MR_Integer) 0:
#line 601 "purity.m"
        {
#line 602 "purity.m"
          {
#line 602 "purity.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10, check_hlds__purity__STATE_VARIABLE_GoalInfo_9);
          }
#line 601 "purity.m"
        }
#line 603 "purity.m"
        break;
#line 603 "purity.m"
    }
#line 598 "purity.m"
  }
#line 595 "purity.m"
}

#line 585 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
#line 585 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__Goal_8,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 585 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 585 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17)
#line 585 "purity.m"
{
#line 588 "purity.m"
  {
#line 588 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 588 "purity.m"
    MR_Word check_hlds__purity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
#line 588 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
#line 588 "purity.m"
    MR_Word check_hlds__purity__GoalExpr_14;
#line 588 "purity.m"
    MR_Word check_hlds__purity__GoalInfo_15;
#line 588 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24;

#line 590 "purity.m"
    {
#line 590 "purity.m"
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_12, &check_hlds__purity__GoalExpr_14, check_hlds__purity__GoalInfo0_13, check_hlds__purity__Purity_9, check_hlds__purity__ContainsTrace_10, check_hlds__purity__STATE_VARIABLE_Info_0_16, check_hlds__purity__STATE_VARIABLE_Info_17);
    }
#line 599 "purity.m"
    {
#line 599 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_9, check_hlds__purity__GoalInfo0_13, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24);
    }
#line 603 "purity.m"
#line 603 "purity.m"
    switch (*check_hlds__purity__ContainsTrace_10) {
#line 603 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "purity.m"
      case (MR_Integer) 1:
#line 604 "purity.m"
        {
#line 605 "purity.m"
          {
#line 605 "purity.m"
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
#line 604 "purity.m"
        }
#line 603 "purity.m"
        break;
#line 603 "purity.m"
      case (MR_Integer) 0:
#line 601 "purity.m"
        {
#line 602 "purity.m"
          {
#line 602 "purity.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
#line 601 "purity.m"
        }
#line 603 "purity.m"
        break;
#line 603 "purity.m"
    }
#line 593 "purity.m"
    {
#line 593 "purity.m"
      MR_Word base;
#line 593 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "purity.m"
      *check_hlds__purity__Goal_8 = base;
#line 593 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_14));
#line 593 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_15));
#line 593 "purity.m"
    }
#line 588 "purity.m"
  }
#line 585 "purity.m"
}

#line 569 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
#line 569 "purity.m"
  MR_Word check_hlds__purity__Clause_3,
#line 569 "purity.m"
  MR_Word check_hlds__purity__AllProcIds_4)
#line 569 "purity.m"
{
#line 571 "purity.m"
  {
#line 571 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 571 "purity.m"
    MR_Word check_hlds__purity__ApplicableProcIds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 0)));
#line 572 "purity.m"
    MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 1)));
#line 572 "purity.m"
    MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 2)));
#line 572 "purity.m"
    MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 3)));
#line 572 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 4)));

#line 575 "purity.m"
    if ((check_hlds__purity__ApplicableProcIds_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "purity.m"
      check_hlds__purity__succeeded = MR_TRUE;
#line 575 "purity.m"
    else
#line 576 "purity.m"
      {
#line 576 "purity.m"
        MR_Word check_hlds__purity__ClauseProcIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ApplicableProcIds_5, (MR_Integer) 0)));
#line 576 "purity.m"
        MR_Word check_hlds__purity__SortedClauseProcIds_7;

#line 579 "purity.m"
        {
#line 579 "purity.m"
          mercury__list__sort_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__purity__ClauseProcIds_6, &check_hlds__purity__SortedClauseProcIds_7);
        }
#line 580 "purity.m"
        {
#line 580 "purity.m"
          check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__purity_scalar_common_2[3], ((MR_Box) (check_hlds__purity__SortedClauseProcIds_7)), ((MR_Box) (check_hlds__purity__AllProcIds_4)));
        }
#line 576 "purity.m"
      }
#line 571 "purity.m"
    return check_hlds__purity__succeeded;
#line 571 "purity.m"
  }
#line 569 "purity.m"
}

#line 511 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
#line 511 "purity.m"
  MR_Word check_hlds__purity__Clause0_7,
#line 511 "purity.m"
  MR_Word * check_hlds__purity__Clause_8,
#line 511 "purity.m"
  MR_Word check_hlds__purity__PredInfo_9,
#line 511 "purity.m"
  MR_Word * check_hlds__purity__Purity_10,
#line 511 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_35,
#line 511 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_36)
#line 511 "purity.m"
{
#line 514 "purity.m"
  {
#line 514 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 514 "purity.m"
    MR_Word check_hlds__purity__Goal0_12;
#line 514 "purity.m"
    MR_Word check_hlds__purity__GoalExpr0_13;
#line 514 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_14;
#line 514 "purity.m"
    MR_Word check_hlds__purity__GoalExpr1_15;
#line 514 "purity.m"
    MR_Word check_hlds__purity__BodyPurity0_16;
#line 514 "purity.m"
    MR_Word check_hlds__purity__ClausePurity_21;
#line 514 "purity.m"
    MR_Word check_hlds__purity__GoalInfo1_22;
#line 514 "purity.m"
    MR_Word check_hlds__purity__Goal1_23;
#line 514 "purity.m"
    MR_Word check_hlds__purity__NeedToRequantify_24;
#line 514 "purity.m"
    MR_Word check_hlds__purity__Goal_31;
#line 514 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 514 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_Info_39_39;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_45_45;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_48_48;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_49_49;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_50_50;
#line 518 "purity.m"
    MR_Word check_hlds__purity__V_17_17;
#line 547 "purity.m"
    MR_Word check_hlds__purity__V_52_52;
#line 547 "purity.m"
    MR_Word check_hlds__purity__V_53_53;
#line 547 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 547 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 547 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 547 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 547 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 567 "purity.m"
    MR_Word check_hlds__purity__V_89_89;
#line 567 "purity.m"
    MR_Word check_hlds__purity__V_91_91;
#line 567 "purity.m"
    MR_Word check_hlds__purity__V_92_92;
#line 567 "purity.m"
    MR_Word check_hlds__purity__V_93_93;
#line 567 "purity.m"
    MR_Word check_hlds__purity__V_90_90;

#line 515 "purity.m"
    {
#line 515 "purity.m"
      check_hlds__purity__Goal0_12 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__purity__Clause0_7);
    }
#line 516 "purity.m"
    check_hlds__purity__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_12, (MR_Integer) 0)));
#line 516 "purity.m"
    check_hlds__purity__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_12, (MR_Integer) 1)));
#line 517 "purity.m"
    check_hlds__purity__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 517 "purity.m"
    check_hlds__purity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 517 "purity.m"
    check_hlds__purity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 517 "purity.m"
    check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 517 "purity.m"
    check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 517 "purity.m"
    check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 517 "purity.m"
    check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 517 "purity.m"
    check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 517 "purity.m"
    {
#line 517 "purity.m"
      check_hlds__purity__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 517 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 517 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (check_hlds__purity__V_45_45));
#line 517 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 517 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 517 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 517 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (check_hlds__purity__V_49_49));
#line 517 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) ((MR_Integer) 1));
#line 517 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 7) = ((MR_Box) (check_hlds__purity__V_51_51));
#line 517 "purity.m"
    }
#line 518 "purity.m"
    {
#line 518 "purity.m"
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_13, &check_hlds__purity__GoalExpr1_15, check_hlds__purity__GoalInfo0_14, &check_hlds__purity__BodyPurity0_16, &check_hlds__purity__V_17_17, check_hlds__purity__STATE_VARIABLE_Info_37_37, &check_hlds__purity__STATE_VARIABLE_Info_39_39);
    }
#line 530 "purity.m"
    {
#line 530 "purity.m"
      MR_Word check_hlds__purity__ProcIds_18;

#line 530 "purity.m"
      {
#line 530 "purity.m"
        check_hlds__purity__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__purity__PredInfo_9);
      }
#line 531 "purity.m"
      {
#line 531 "purity.m"
        check_hlds__purity__succeeded = check_hlds__purity__applies_to_all_modes_2_p_0(check_hlds__purity__Clause0_7, check_hlds__purity__ProcIds_18);
      }
#line 530 "purity.m"
    }
#line 532 "purity.m"
    if (!(check_hlds__purity__succeeded))
#line 532 "purity.m"
      {
#line 533 "purity.m"
        {
#line 533 "purity.m"
          MR_Word check_hlds__purity__Markers_19;

#line 533 "purity.m"
          {
#line 533 "purity.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__Markers_19);
          }
#line 534 "purity.m"
          {
#line 534 "purity.m"
            check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_19, (MR_Integer) 16);
          }
#line 533 "purity.m"
        }
#line 532 "purity.m"
        if (!(check_hlds__purity__succeeded))
#line 536 "purity.m"
          {
#line 536 "purity.m"
            MR_Word check_hlds__purity__GoalType_20;

#line 536 "purity.m"
            {
#line 536 "purity.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__GoalType_20);
            }
#line 537 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__GoalType_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 536 "purity.m"
          }
#line 532 "purity.m"
      }
#line 528 "purity.m"
    if (check_hlds__purity__succeeded)
#line 540 "purity.m"
      check_hlds__purity__ClausePurity_21 = (MR_Integer) 0;
#line 528 "purity.m"
    else
#line 542 "purity.m"
      check_hlds__purity__ClausePurity_21 = (MR_Integer) 2;
#line 544 "purity.m"
    {
#line 544 "purity.m"
      *check_hlds__purity__Purity_10 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__BodyPurity0_16, check_hlds__purity__ClausePurity_21);
    }
#line 545 "purity.m"
    {
#line 545 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_10, check_hlds__purity__GoalInfo0_14, &check_hlds__purity__GoalInfo1_22);
    }
#line 546 "purity.m"
    {
#line 546 "purity.m"
      check_hlds__purity__Goal1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_23, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_15));
#line 546 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_23, 1) = ((MR_Box) (check_hlds__purity__GoalInfo1_22));
#line 546 "purity.m"
    }
#line 547 "purity.m"
    check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 547 "purity.m"
    check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 547 "purity.m"
    check_hlds__purity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 547 "purity.m"
    check_hlds__purity__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 547 "purity.m"
    check_hlds__purity__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 547 "purity.m"
    check_hlds__purity__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 547 "purity.m"
    check_hlds__purity__NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 547 "purity.m"
    check_hlds__purity__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 563 "purity.m"
#line 563 "purity.m"
    switch (check_hlds__purity__NeedToRequantify_24) {
#line 563 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 563 "purity.m"
      case (MR_Integer) 1:
#line 564 "purity.m"
        {
#line 565 "purity.m"
          check_hlds__purity__Goal_31 = check_hlds__purity__Goal1_23;
#line 564 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_36 = check_hlds__purity__STATE_VARIABLE_Info_39_39;
#line 564 "purity.m"
        }
#line 563 "purity.m"
        break;
#line 563 "purity.m"
      case (MR_Integer) 0:
#line 549 "purity.m"
        {
#line 549 "purity.m"
          MR_Word check_hlds__purity__ClausesInfo_25;
#line 549 "purity.m"
          MR_Word check_hlds__purity__HeadVars_26;
#line 549 "purity.m"
          MR_Word check_hlds__purity__VarTypes1_27;
#line 549 "purity.m"
          MR_Word check_hlds__purity__VarSet1_28;
#line 549 "purity.m"
          MR_Word check_hlds__purity__EmptyRttiVarmaps_29;
#line 549 "purity.m"
          MR_Word check_hlds__purity__VarSet_32;
#line 549 "purity.m"
          MR_Word check_hlds__purity__VarTypes_33;
#line 549 "purity.m"
          MR_Word check_hlds__purity__V_73_73;
#line 549 "purity.m"
          MR_Word check_hlds__purity__V_74_74;
#line 549 "purity.m"
          MR_Word check_hlds__purity__V_75_75;
#line 549 "purity.m"
          MR_Word check_hlds__purity__V_78_78;
#line 549 "purity.m"
          MR_Word check_hlds__purity__V_79_79;
#line 549 "purity.m"
          MR_Word check_hlds__purity__V_80_80;
#line 552 "purity.m"
          MR_Word check_hlds__purity__V_59_59;
#line 552 "purity.m"
          MR_Word check_hlds__purity__V_60_60;
#line 552 "purity.m"
          MR_Word check_hlds__purity__V_61_61;
#line 552 "purity.m"
          MR_Word check_hlds__purity__V_63_63;
#line 552 "purity.m"
          MR_Word check_hlds__purity__V_64_64;
#line 552 "purity.m"
          MR_Word check_hlds__purity__V_65_65;
#line 557 "purity.m"
          MR_Word check_hlds__purity___Warnings_30;
#line 557 "purity.m"
          MR_Word check_hlds__purity__V_34_34;
#line 561 "purity.m"
          MR_Word check_hlds__purity__V_76_76;
#line 561 "purity.m"
          MR_Word check_hlds__purity__V_77_77;

#line 550 "purity.m"
          {
#line 550 "purity.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__ClausesInfo_25);
          }
#line 551 "purity.m"
          {
#line 551 "purity.m"
            hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__purity__ClausesInfo_25, &check_hlds__purity__HeadVars_26);
          }
#line 552 "purity.m"
          check_hlds__purity__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 552 "purity.m"
          check_hlds__purity__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 552 "purity.m"
          check_hlds__purity__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 552 "purity.m"
          check_hlds__purity__VarTypes1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 552 "purity.m"
          check_hlds__purity__VarSet1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 552 "purity.m"
          check_hlds__purity__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 552 "purity.m"
          check_hlds__purity__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 552 "purity.m"
          check_hlds__purity__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 556 "purity.m"
          {
#line 556 "purity.m"
            hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__purity__EmptyRttiVarmaps_29);
          }
#line 557 "purity.m"
          {
#line 557 "purity.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__purity__HeadVars_26, &check_hlds__purity___Warnings_30, check_hlds__purity__Goal1_23, &check_hlds__purity__Goal_31, check_hlds__purity__VarSet1_28, &check_hlds__purity__VarSet_32, check_hlds__purity__VarTypes1_27, &check_hlds__purity__VarTypes_33, check_hlds__purity__EmptyRttiVarmaps_29, &check_hlds__purity__V_34_34);
          }
#line 561 "purity.m"
          check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 561 "purity.m"
          check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 561 "purity.m"
          check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 561 "purity.m"
          check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 561 "purity.m"
          check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 561 "purity.m"
          check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 561 "purity.m"
          check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 561 "purity.m"
          check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 562 "purity.m"
          {
#line 562 "purity.m"
            MR_Word base;
#line 562 "purity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 562 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_36 = base;
#line 562 "purity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_73_73));
#line 562 "purity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 562 "purity.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 562 "purity.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__VarTypes_33));
#line 562 "purity.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__VarSet_32));
#line 562 "purity.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__V_78_78));
#line 562 "purity.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_79_79));
#line 562 "purity.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_80_80));
#line 562 "purity.m"
          }
#line 549 "purity.m"
        }
#line 563 "purity.m"
        break;
#line 563 "purity.m"
    }
#line 567 "purity.m"
    check_hlds__purity__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 0)));
#line 567 "purity.m"
    check_hlds__purity__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 1)));
#line 567 "purity.m"
    check_hlds__purity__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 2)));
#line 567 "purity.m"
    check_hlds__purity__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 3)));
#line 567 "purity.m"
    check_hlds__purity__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 4)));
#line 567 "purity.m"
    {
#line 567 "purity.m"
      MR_Word base;
#line 567 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 567 "purity.m"
      *check_hlds__purity__Clause_8 = base;
#line 567 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_89_89));
#line 567 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Goal_31));
#line 567 "purity.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_91_91));
#line 567 "purity.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_92_92));
#line 567 "purity.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_93_93));
#line 567 "purity.m"
    }
#line 514 "purity.m"
  }
#line 511 "purity.m"
}

#line 498 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
#line 498 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 498 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 498 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 498 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 498 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7)
#line 498 "purity.m"
{
#line 502 "purity.m"
  {
#line 502 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 502 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "purity.m"
      {
#line 502 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_7 = check_hlds__purity__STATE_VARIABLE_Info_0_6;
#line 502 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 502 "purity.m"
      }
#line 502 "purity.m"
    else
#line 504 "purity.m"
      {
#line 504 "purity.m"
        MR_Word check_hlds__purity__Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "purity.m"
        MR_Word check_hlds__purity__Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "purity.m"
        MR_Word check_hlds__purity__Clause_17;
#line 504 "purity.m"
        MR_Word check_hlds__purity__ClausePurity_22;
#line 504 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_27_27;
#line 504 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_28_28;
#line 507 "purity.m"
        MR_Word * check_hlds__purity__AddrClauses_31;

#line 505 "purity.m"
        {
#line 505 "purity.m"
          check_hlds__purity__compute_purity_for_clause_6_p_0(check_hlds__purity__Clause0_15, &check_hlds__purity__Clause_17, check_hlds__purity__PredInfo_3, &check_hlds__purity__ClausePurity_22, check_hlds__purity__STATE_VARIABLE_Info_0_6, &check_hlds__purity__STATE_VARIABLE_Info_27_27);
        }
#line 506 "purity.m"
        {
#line 506 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__STATE_VARIABLE_Purity_0_4, check_hlds__purity__ClausePurity_22);
        }
#line 503 "purity.m"
        {
#line 503 "purity.m"
          MR_Word base;
#line 503 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 503 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Clause_17));
#line 503 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 503 "purity.m"
        }
#line 503 "purity.m"
        check_hlds__purity__AddrClauses_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
#line 507 "purity.m"
        {
#line 507 "purity.m"
          check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(check_hlds__purity__Clauses0_16, check_hlds__purity__AddrClauses_31, check_hlds__purity__PredInfo_3, check_hlds__purity__STATE_VARIABLE_Purity_28_28, check_hlds__purity__STATE_VARIABLE_Purity_5, check_hlds__purity__STATE_VARIABLE_Info_27_27, check_hlds__purity__STATE_VARIABLE_Info_7);
        }
#line 504 "purity.m"
      }
#line 502 "purity.m"
  }
#line 498 "purity.m"
}

#line 337 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__workaround_gcc_bug_1_f_0(
#line 337 "purity.m"
  MR_Word check_hlds__purity__X_3)
#line 337 "purity.m"
{
#line 340 "purity.m"
  {
#line 340 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 340 "purity.m"
    MR_Word check_hlds__purity__X_2 = check_hlds__purity__X_3;

#line 340 "purity.m"
    return check_hlds__purity__X_2;
#line 340 "purity.m"
  }
#line 337 "purity.m"
}

#line 281 "purity.m"
static void MR_CALL 
check_hlds__purity__puritycheck_pred_6_p_0(
#line 281 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 281 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_35,
#line 281 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_36,
#line 281 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_9,
#line 281 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_37,
#line 281 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_38)
#line 281 "purity.m"
{
#line 284 "purity.m"
  {
#line 284 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 284 "purity.m"
    MR_Word check_hlds__purity__DeclPurity_11;
#line 284 "purity.m"
    MR_Word check_hlds__purity__PromisedPurity_12;
#line 284 "purity.m"
    MR_Word check_hlds__purity__Clauses0_14;
#line 284 "purity.m"
    MR_Word check_hlds__purity__ItemNumbers_15;
#line 284 "purity.m"
    MR_Word check_hlds__purity__VarTypes0_16;
#line 284 "purity.m"
    MR_Word check_hlds__purity__VarSet0_17;
#line 284 "purity.m"
    MR_Word check_hlds__purity__PurityInfo0_18;
#line 284 "purity.m"
    MR_Word check_hlds__purity__Clauses_19;
#line 284 "purity.m"
    MR_Word check_hlds__purity__PurityInfo_21;
#line 284 "purity.m"
    MR_Word check_hlds__purity__VarTypes_24;
#line 284 "purity.m"
    MR_Word check_hlds__purity__VarSet_25;
#line 284 "purity.m"
    MR_Word check_hlds__purity__GoalSpecs_26;
#line 284 "purity.m"
    MR_Word check_hlds__purity__ClausesRep_29;
#line 284 "purity.m"
    MR_Word check_hlds__purity__WorstPurity_30;
#line 284 "purity.m"
    MR_Word check_hlds__purity__PurityCheckResult0_31;
#line 284 "purity.m"
    MR_Word check_hlds__purity__PurityCheckResult_32;
#line 284 "purity.m"
    MR_Word check_hlds__purity__PredSpecs_34;
#line 284 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39;
#line 284 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40;
#line 284 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_46_46;
#line 284 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47;
#line 284 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48;
#line 284 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49;
#line 297 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 297 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 297 "purity.m"
    MR_Word check_hlds__purity__V_27_27;
#line 297 "purity.m"
    MR_Word check_hlds__purity__V_28_28;

#line 285 "purity.m"
    {
#line 285 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__DeclPurity_11);
    }
#line 286 "purity.m"
    {
#line 286 "purity.m"
      hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__PromisedPurity_12);
    }
#line 288 "purity.m"
    {
#line 288 "purity.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39);
    }
#line 289 "purity.m"
    {
#line 289 "purity.m"
      hlds__hlds_clauses__clauses_info_clauses_4_p_0(&check_hlds__purity__Clauses0_14, &check_hlds__purity__ItemNumbers_15, check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40);
    }
#line 290 "purity.m"
    {
#line 290 "purity.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__VarTypes0_16);
    }
#line 291 "purity.m"
    {
#line 291 "purity.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__VarSet0_17);
    }
#line 292 "purity.m"
    {
#line 292 "purity.m"
      check_hlds__purity__PurityInfo0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 292 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 0) = ((MR_Box) (check_hlds__purity__ModuleInfo_9));
#line 292 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 292 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 2) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_PredInfo_0_35));
#line 292 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 3) = ((MR_Box) (check_hlds__purity__VarTypes0_16));
#line 292 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 4) = ((MR_Box) (check_hlds__purity__VarSet0_17));
#line 292 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 6) = ((MR_Box) ((MR_Integer) 1));
#line 292 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 7) = ((MR_Box) ((MR_Integer) 0));
#line 292 "purity.m"
    }
#line 295 "purity.m"
    {
#line 295 "purity.m"
      check_hlds__purity__compute_purity_for_clauses_7_p_0(check_hlds__purity__Clauses0_14, &check_hlds__purity__Clauses_19, check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, (MR_Integer) 0, &check_hlds__purity__WorstPurity_30, check_hlds__purity__PurityInfo0_18, &check_hlds__purity__PurityInfo_21);
    }
#line 297 "purity.m"
    check_hlds__purity__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 0)));
#line 297 "purity.m"
    check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 1)));
#line 297 "purity.m"
    check_hlds__purity__STATE_VARIABLE_PredInfo_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 2)));
#line 297 "purity.m"
    check_hlds__purity__VarTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 3)));
#line 297 "purity.m"
    check_hlds__purity__VarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 4)));
#line 297 "purity.m"
    check_hlds__purity__GoalSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 5)));
#line 297 "purity.m"
    check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 6)));
#line 297 "purity.m"
    check_hlds__purity__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 7)));
#line 299 "purity.m"
    {
#line 299 "purity.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__purity__VarTypes_24, check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47);
    }
#line 300 "purity.m"
    {
#line 300 "purity.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__purity__VarSet_25, check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48);
    }
#line 301 "purity.m"
    {
#line 301 "purity.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__purity__Clauses_19, &check_hlds__purity__ClausesRep_29);
    }
#line 302 "purity.m"
    {
#line 302 "purity.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__purity__ClausesRep_29, check_hlds__purity__ItemNumbers_15, check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49);
    }
#line 303 "purity.m"
    {
#line 303 "purity.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49, check_hlds__purity__STATE_VARIABLE_PredInfo_46_46, check_hlds__purity__STATE_VARIABLE_PredInfo_36);
    }
#line 357 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__PromisedPurity_12 == (MR_Integer) 2);
#line 357 "purity.m"
    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 357 "purity.m"
    if (check_hlds__purity__succeeded)
#line 357 "purity.m"
      {
#line 358 "purity.m"
        check_hlds__purity__succeeded = (check_hlds__purity__DeclPurity_11 == check_hlds__purity__PromisedPurity_12);
#line 358 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 357 "purity.m"
      }
#line 354 "purity.m"
    if (check_hlds__purity__succeeded)
#line 360 "purity.m"
      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 2;
#line 354 "purity.m"
    else
#line 361 "purity.m"
      {
#line 365 "purity.m"
        MR_Word check_hlds__purity__Origin_61;

#line 365 "purity.m"
        check_hlds__purity__succeeded = (check_hlds__purity__PromisedPurity_12 == (MR_Integer) 2);
#line 365 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 365 "purity.m"
        if (check_hlds__purity__succeeded)
#line 365 "purity.m"
          {
#line 366 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__WorstPurity_30 == check_hlds__purity__PromisedPurity_12);
#line 365 "purity.m"
            if (check_hlds__purity__succeeded)
#line 365 "purity.m"
              {
#line 367 "purity.m"
                {
#line 367 "purity.m"
                  check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36);
                }
#line 367 "purity.m"
                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 365 "purity.m"
                if (check_hlds__purity__succeeded)
#line 365 "purity.m"
                  {
#line 368 "purity.m"
                    {
#line 368 "purity.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__Origin_61);
                    }
#line 371 "purity.m"
                    if (((MR_tag((MR_Word) check_hlds__purity__Origin_61)) == (MR_mktag((MR_Integer) 2))))
#line 370 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 371 "purity.m"
                    else
#line 371 "purity.m"
                    if (((((MR_tag((MR_Word) check_hlds__purity__Origin_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Origin_61, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 372 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 371 "purity.m"
                    else
#line 371 "purity.m"
                      check_hlds__purity__succeeded = MR_FALSE;
#line 369 "purity.m"
                    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 365 "purity.m"
                  }
#line 365 "purity.m"
              }
#line 365 "purity.m"
          }
#line 361 "purity.m"
        if (check_hlds__purity__succeeded)
#line 375 "purity.m"
          check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 3;
#line 361 "purity.m"
        else
#line 376 "purity.m"
          {
#line 378 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__WorstPurity_30 == check_hlds__purity__DeclPurity_11);
#line 376 "purity.m"
            if (check_hlds__purity__succeeded)
#line 380 "purity.m"
              check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 376 "purity.m"
            else
#line 381 "purity.m"
              {
#line 382 "purity.m"
                {
#line 382 "purity.m"
                  check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__WorstPurity_30, check_hlds__purity__DeclPurity_11);
                }
#line 381 "purity.m"
                if (check_hlds__purity__succeeded)
#line 387 "purity.m"
#line 387 "purity.m"
                  switch (check_hlds__purity__PromisedPurity_12) {
#line 387 "purity.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 387 "purity.m"
                    case (MR_Integer) 2:
#line 386 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 1;
#line 387 "purity.m"
                      break;
#line 387 "purity.m"
                    case (MR_Integer) 0:
#line 387 "purity.m"
                    case (MR_Integer) 1:
#line 391 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 387 "purity.m"
                      break;
#line 387 "purity.m"
                  }
#line 381 "purity.m"
                else
#line 393 "purity.m"
                  {
#line 405 "purity.m"
                    MR_Word check_hlds__purity__Markers_66;
#line 405 "purity.m"
                    MR_Word check_hlds__purity__GoalType_67;

#line 405 "purity.m"
                    {
#line 405 "purity.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__Markers_66);
                    }
#line 406 "purity.m"
                    {
#line 406 "purity.m"
                      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__GoalType_67);
                    }
#line 408 "purity.m"
                    if ((check_hlds__purity__GoalType_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 408 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 408 "purity.m"
                    else
#line 408 "purity.m"
                    if ((check_hlds__purity__GoalType_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 407 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 408 "purity.m"
                    else
#line 408 "purity.m"
                      check_hlds__purity__succeeded = MR_FALSE;
#line 408 "purity.m"
                    if (!(check_hlds__purity__succeeded))
#line 408 "purity.m"
                      {
#line 411 "purity.m"
                        {
#line 411 "purity.m"
                          check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 0);
                        }
#line 408 "purity.m"
                        if (!(check_hlds__purity__succeeded))
#line 408 "purity.m"
                          {
#line 410 "purity.m"
                            {
#line 410 "purity.m"
                              check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 10);
                            }
#line 408 "purity.m"
                            if (!(check_hlds__purity__succeeded))
#line 409 "purity.m"
                              {
#line 409 "purity.m"
                                {
#line 409 "purity.m"
                                  check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 9);
                                }
#line 409 "purity.m"
                              }
#line 408 "purity.m"
                          }
#line 408 "purity.m"
                      }
#line 393 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 414 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 393 "purity.m"
                    else
#line 416 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 4;
#line 393 "purity.m"
                  }
#line 381 "purity.m"
              }
#line 376 "purity.m"
          }
#line 361 "purity.m"
      }
#line 311 "purity.m"
    {
#line 311 "purity.m"
      check_hlds__purity__PurityCheckResult_32 = check_hlds__purity__workaround_gcc_bug_1_f_0(check_hlds__purity__PurityCheckResult0_31);
    }
#line 317 "purity.m"
#line 317 "purity.m"
    switch (check_hlds__purity__PurityCheckResult_32) {
#line 317 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 317 "purity.m"
      case (MR_Integer) 2:
#line 313 "purity.m"
        {
#line 313 "purity.m"
          MR_Word check_hlds__purity__Spec_33;

#line 314 "purity.m"
          {
#line 314 "purity.m"
            check_hlds__purity__Spec_33 = check_hlds__purity__error_inconsistent_promise_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__DeclPurity_11);
          }
#line 316 "purity.m"
          {
#line 316 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_33));
#line 316 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 316 "purity.m"
          }
#line 313 "purity.m"
        }
#line 317 "purity.m"
        break;
#line 317 "purity.m"
      case (MR_Integer) 1:
#line 323 "purity.m"
        {
#line 323 "purity.m"
          MR_Word check_hlds__purity__Spec_53;

#line 324 "purity.m"
          {
#line 324 "purity.m"
            check_hlds__purity__Spec_53 = check_hlds__purity__error_inferred_impure_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__WorstPurity_30);
          }
#line 325 "purity.m"
          {
#line 325 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_53));
#line 325 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 325 "purity.m"
          }
#line 323 "purity.m"
        }
#line 317 "purity.m"
        break;
#line 317 "purity.m"
      case (MR_Integer) 0:
#line 333 "purity.m"
        check_hlds__purity__PredSpecs_34 = check_hlds__purity__GoalSpecs_26;
#line 317 "purity.m"
        break;
#line 317 "purity.m"
      case (MR_Integer) 4:
#line 318 "purity.m"
        {
#line 318 "purity.m"
          MR_Word check_hlds__purity__Spec_52;

#line 319 "purity.m"
          {
#line 319 "purity.m"
            check_hlds__purity__Spec_52 = check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__DeclPurity_11, check_hlds__purity__WorstPurity_30);
          }
#line 321 "purity.m"
          {
#line 321 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_52));
#line 321 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 321 "purity.m"
          }
#line 318 "purity.m"
        }
#line 317 "purity.m"
        break;
#line 317 "purity.m"
      case (MR_Integer) 3:
#line 327 "purity.m"
        {
#line 327 "purity.m"
          MR_Word check_hlds__purity__Spec_54;

#line 328 "purity.m"
          {
#line 328 "purity.m"
            check_hlds__purity__Spec_54 = check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__PromisedPurity_12);
          }
#line 330 "purity.m"
          {
#line 330 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_54));
#line 330 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 330 "purity.m"
          }
#line 327 "purity.m"
        }
#line 317 "purity.m"
        break;
#line 317 "purity.m"
    }
#line 335 "purity.m"
    {
#line 335 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__PredSpecs_34, check_hlds__purity__STATE_VARIABLE_Specs_0_37);
    }
#line 284 "purity.m"
  }
#line 281 "purity.m"
}

#line 226 "purity.m"
static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
#line 226 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 226 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2,
#line 226 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_3,
#line 226 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_4,
#line 226 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_5)
#line 226 "purity.m"
{
#line 230 "purity.m"
  while (MR_TRUE)
#line 230 "purity.m"
    {
#line 230 "purity.m"
      /* tailcall optimized into a loop */
#line 230 "purity.m"
      {
#line 230 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 230 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "purity.m"
          {
#line 230 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Specs_5 = check_hlds__purity__STATE_VARIABLE_Specs_0_4;
#line 230 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ModuleInfo_3 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2;
#line 230 "purity.m"
          }
#line 230 "purity.m"
        else
#line 231 "purity.m"
          {
#line 231 "purity.m"
            MR_Word check_hlds__purity__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "purity.m"
            MR_Word check_hlds__purity__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "purity.m"
            MR_Word check_hlds__purity__PredInfo0_16;
#line 231 "purity.m"
            MR_Word check_hlds__purity__PredInfo_17;
#line 231 "purity.m"
            MR_Word check_hlds__purity__GoalType_19;
#line 231 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 231 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 231 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30;
#line 231 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_31_31;

#line 232 "purity.m"
            {
#line 232 "purity.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__purity__PredId_12, &check_hlds__purity__PredInfo0_16);
            }
#line 234 "purity.m"
            {
#line 234 "purity.m"
              check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__purity__PredInfo0_16);
            }
#line 235 "purity.m"
            if (!(check_hlds__purity__succeeded))
#line 235 "purity.m"
              {
#line 235 "purity.m"
                check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__purity__PredInfo0_16);
              }
#line 233 "purity.m"
            if (check_hlds__purity__succeeded)
#line 238 "purity.m"
              {
#line 238 "purity.m"
                check_hlds__purity__PredInfo_17 = check_hlds__purity__PredInfo0_16;
#line 238 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Specs_28_28 = check_hlds__purity__STATE_VARIABLE_Specs_0_4;
#line 238 "purity.m"
                check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2;
#line 238 "purity.m"
              }
#line 233 "purity.m"
            else
#line 243 "purity.m"
              {
#line 241 "purity.m"
                {
#line 241 "purity.m"
                  hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Purity-checking ", check_hlds__purity__PredId_12, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2);
                }
#line 244 "purity.m"
                {
#line 244 "purity.m"
                  check_hlds__purity__puritycheck_pred_6_p_0(check_hlds__purity__PredId_12, check_hlds__purity__PredInfo0_16, &check_hlds__purity__PredInfo_17, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__purity__STATE_VARIABLE_Specs_0_4, &check_hlds__purity__STATE_VARIABLE_Specs_28_28);
                }
#line 245 "purity.m"
                {
#line 245 "purity.m"
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__purity__PredId_12, check_hlds__purity__PredInfo_17, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 243 "purity.m"
              }
#line 249 "purity.m"
            {
#line 249 "purity.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_17, &check_hlds__purity__GoalType_19);
            }
#line 253 "purity.m"
#line 253 "purity.m"
            switch (MR_tag((MR_Word) check_hlds__purity__GoalType_19)) {
#line 253 "purity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 253 "purity.m"
              case (MR_Integer) 0:
#line 253 "purity.m"
#line 253 "purity.m"
                switch (MR_unmkbody(check_hlds__purity__GoalType_19)) {
#line 253 "purity.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 253 "purity.m"
                  case (MR_Integer) 0:
#line 254 "purity.m"
                    {
#line 254 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 254 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 254 "purity.m"
                    }
#line 253 "purity.m"
                    break;
#line 253 "purity.m"
                  case (MR_Integer) 1:
#line 255 "purity.m"
                    {
#line 255 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 255 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 255 "purity.m"
                    }
#line 253 "purity.m"
                    break;
#line 253 "purity.m"
                  case (MR_Integer) 2:
#line 256 "purity.m"
                    {
#line 256 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 256 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 256 "purity.m"
                    }
#line 253 "purity.m"
                    break;
#line 253 "purity.m"
                  case (MR_Integer) 3:
#line 257 "purity.m"
                    {
#line 257 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 257 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 257 "purity.m"
                    }
#line 253 "purity.m"
                    break;
#line 253 "purity.m"
                }
#line 253 "purity.m"
                break;
#line 253 "purity.m"
              case (MR_Integer) 1:
#line 251 "purity.m"
                {
#line 251 "purity.m"
                  MR_Word check_hlds__purity__PromiseType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalType_19, (MR_Integer) 0)));

#line 252 "purity.m"
                  {
#line 252 "purity.m"
                    check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0(check_hlds__purity__PromiseType_20, check_hlds__purity__PredId_12, check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30, check_hlds__purity__STATE_VARIABLE_Specs_28_28, &check_hlds__purity__STATE_VARIABLE_Specs_31_31);
                  }
#line 251 "purity.m"
                }
#line 253 "purity.m"
                break;
#line 253 "purity.m"
            }
#line 260 "purity.m"
            /* direct tailcall eliminated */
#line 260 "purity.m"
            {
#line 260 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__PredIds_13;
#line 260 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30;
#line 260 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__purity__STATE_VARIABLE_Specs_31_31;

#line 260 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_0_4 = check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 260 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 260 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 260 "purity.m"
            }
#line 260 "purity.m"
            continue;
#line 231 "purity.m"
          }
#line 230 "purity.m"
      }
#line 230 "purity.m"
      break;
#line 230 "purity.m"
    }
#line 226 "purity.m"
}

#line 163 "purity.m"
MR_Word MR_CALL 
check_hlds__purity__impure_unification_expr_error_2_f_0(
#line 163 "purity.m"
  MR_Word check_hlds__purity__Context_4,
#line 163 "purity.m"
  MR_Word check_hlds__purity__Purity_5)
#line 163 "purity.m"
{
#line 1546 "purity.m"
  {
#line 1546 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__Spec_6;
#line 1546 "purity.m"
    MR_String check_hlds__purity__PurityName_7;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__Pieces_8;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__Msg_9;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__V_12_12;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__V_15_15;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__V_16_16;
#line 1546 "purity.m"
    MR_String check_hlds__purity__V_17_17;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1546 "purity.m"
    MR_Word check_hlds__purity__V_28_28;

#line 1547 "purity.m"
    {
#line 1547 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_5, &check_hlds__purity__PurityName_7);
    }
#line 1549 "purity.m"
    {
#line 1549 "purity.m"
      check_hlds__purity__V_17_17 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_7, (MR_String) ",");
    }
#line 1549 "purity.m"
    {
#line 1549 "purity.m"
      check_hlds__purity__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_16_16, 0) = ((MR_Box) (check_hlds__purity__V_17_17));
#line 1549 "purity.m"
    }
#line 1549 "purity.m"
    {
#line 1549 "purity.m"
      check_hlds__purity__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_15_15, 0) = ((MR_Box) (check_hlds__purity__V_16_16));
#line 1549 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[26])));
#line 1549 "purity.m"
    }
#line 1549 "purity.m"
    {
#line 1549 "purity.m"
      check_hlds__purity__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[24])));
#line 1549 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_12_12, 1) = ((MR_Box) (check_hlds__purity__V_15_15));
#line 1549 "purity.m"
    }
#line 1548 "purity.m"
    {
#line 1548 "purity.m"
      check_hlds__purity__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[23])));
#line 1548 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_8, 1) = ((MR_Box) (check_hlds__purity__V_12_12));
#line 1548 "purity.m"
    }
#line 1551 "purity.m"
    {
#line 1551 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__Pieces_8));
#line 1551 "purity.m"
    }
#line 1551 "purity.m"
    {
#line 1551 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1551 "purity.m"
    }
#line 1551 "purity.m"
    {
#line 1551 "purity.m"
      check_hlds__purity__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_9, 0) = ((MR_Box) (check_hlds__purity__Context_4));
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_9, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1551 "purity.m"
    }
#line 1552 "purity.m"
    {
#line 1552 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__Msg_9));
#line 1552 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1552 "purity.m"
    }
#line 1552 "purity.m"
    {
#line 1552 "purity.m"
      check_hlds__purity__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1552 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1552 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1552 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 2) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1552 "purity.m"
    }
#line 1546 "purity.m"
    return check_hlds__purity__Spec_6;
#line 1546 "purity.m"
  }
#line 163 "purity.m"
}

#line 157 "purity.m"
void MR_CALL 
check_hlds__purity__repuritycheck_proc_4_p_0(
#line 157 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 157 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 157 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_36,
#line 157 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_37)
#line 157 "purity.m"
{
#line 421 "purity.m"
  {
#line 421 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 421 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_64_64;
#line 421 "purity.m"
    MR_Integer check_hlds__purity__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 421 "purity.m"
    MR_Word check_hlds__purity__Procs0_9;
#line 421 "purity.m"
    MR_Word check_hlds__purity__ProcInfo0_10;
#line 421 "purity.m"
    MR_Word check_hlds__purity__Goal0_11;
#line 421 "purity.m"
    MR_Word check_hlds__purity__VarTypes0_12;
#line 421 "purity.m"
    MR_Word check_hlds__purity__VarSet0_13;
#line 421 "purity.m"
    MR_Word check_hlds__purity__PurityInfo0_14;
#line 421 "purity.m"
    MR_Word check_hlds__purity__Goal_15;
#line 421 "purity.m"
    MR_Word check_hlds__purity__Bodypurity_16;
#line 421 "purity.m"
    MR_Word check_hlds__purity__PurityInfo_18;
#line 421 "purity.m"
    MR_Word check_hlds__purity__VarTypes_21;
#line 421 "purity.m"
    MR_Word check_hlds__purity__VarSet_22;
#line 421 "purity.m"
    MR_Word check_hlds__purity__NeedToRequantify_24;
#line 421 "purity.m"
    MR_Word check_hlds__purity__ProcInfo1_26;
#line 421 "purity.m"
    MR_Word check_hlds__purity__ProcInfo2_27;
#line 421 "purity.m"
    MR_Word check_hlds__purity__ProcInfo3_28;
#line 421 "purity.m"
    MR_Word check_hlds__purity__ProcInfo_29;
#line 421 "purity.m"
    MR_Word check_hlds__purity__Procs_30;
#line 421 "purity.m"
    MR_Word check_hlds__purity__OldPurity_31;
#line 421 "purity.m"
    MR_Word check_hlds__purity__Markers0_32;
#line 421 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_42_42;
#line 421 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_44_44;
#line 421 "purity.m"
    MR_Word check_hlds__purity___PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 423 "purity.m"
    MR_Box check_hlds__purity__conv0_ProcInfo0_10;
#line 430 "purity.m"
    MR_Word check_hlds__purity__V_17_17;
#line 431 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 431 "purity.m"
    MR_Word check_hlds__purity__V_20_20;
#line 431 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 431 "purity.m"
    MR_Word check_hlds__purity__V_25_25;

#line 422 "purity.m"
    {
#line 422 "purity.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_36, &check_hlds__purity__Procs0_9);
    }
#line 11903 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 423 "purity.m"
    {
#line 423 "purity.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__purity__TypeCtorInfo_64_64, check_hlds__purity__Procs0_9, check_hlds__purity__ProcId_7, &check_hlds__purity__conv0_ProcInfo0_10);
    }
#line 423 "purity.m"
    check_hlds__purity__ProcInfo0_10 = ((MR_Word) check_hlds__purity__conv0_ProcInfo0_10);
#line 424 "purity.m"
    {
#line 424 "purity.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__Goal0_11);
    }
#line 425 "purity.m"
    {
#line 425 "purity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__VarTypes0_12);
    }
#line 426 "purity.m"
    {
#line 426 "purity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__VarSet0_13);
    }
#line 427 "purity.m"
    {
#line 427 "purity.m"
      check_hlds__purity__PurityInfo0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 427 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 0) = ((MR_Box) (check_hlds__purity__ModuleInfo_5));
#line 427 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 1) = ((MR_Box) ((MR_Integer) 1));
#line 427 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 2) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_PredInfo_0_36));
#line 427 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 3) = ((MR_Box) (check_hlds__purity__VarTypes0_12));
#line 427 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 4) = ((MR_Box) (check_hlds__purity__VarSet0_13));
#line 427 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 6) = ((MR_Box) ((MR_Integer) 1));
#line 427 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 7) = ((MR_Box) ((MR_Integer) 0));
#line 427 "purity.m"
    }
#line 430 "purity.m"
    {
#line 430 "purity.m"
      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_11, &check_hlds__purity__Goal_15, &check_hlds__purity__Bodypurity_16, &check_hlds__purity__V_17_17, check_hlds__purity__PurityInfo0_14, &check_hlds__purity__PurityInfo_18);
    }
#line 431 "purity.m"
    check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 0)));
#line 431 "purity.m"
    check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 1)));
#line 431 "purity.m"
    check_hlds__purity__STATE_VARIABLE_PredInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 2)));
#line 431 "purity.m"
    check_hlds__purity__VarTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 3)));
#line 431 "purity.m"
    check_hlds__purity__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 4)));
#line 431 "purity.m"
    check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 5)));
#line 431 "purity.m"
    check_hlds__purity__NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 6)));
#line 431 "purity.m"
    check_hlds__purity__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 7)));
#line 433 "purity.m"
    {
#line 433 "purity.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__purity__Goal_15, check_hlds__purity__ProcInfo0_10, &check_hlds__purity__ProcInfo1_26);
    }
#line 434 "purity.m"
    {
#line 434 "purity.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__purity__VarTypes_21, check_hlds__purity__ProcInfo1_26, &check_hlds__purity__ProcInfo2_27);
    }
#line 435 "purity.m"
    {
#line 435 "purity.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__purity__VarSet_22, check_hlds__purity__ProcInfo2_27, &check_hlds__purity__ProcInfo3_28);
    }
#line 440 "purity.m"
#line 440 "purity.m"
    switch (check_hlds__purity__NeedToRequantify_24) {
#line 440 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 440 "purity.m"
      case (MR_Integer) 1:
#line 442 "purity.m"
        check_hlds__purity__ProcInfo_29 = check_hlds__purity__ProcInfo3_28;
#line 440 "purity.m"
        break;
#line 440 "purity.m"
      case (MR_Integer) 0:
#line 437 "purity.m"
        {
#line 438 "purity.m"
          {
#line 438 "purity.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__purity__ProcInfo3_28, &check_hlds__purity__ProcInfo_29);
          }
#line 437 "purity.m"
        }
#line 440 "purity.m"
        break;
#line 440 "purity.m"
    }
#line 444 "purity.m"
    {
#line 444 "purity.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__purity__TypeCtorInfo_64_64, check_hlds__purity__ProcId_7, ((MR_Box) (check_hlds__purity__ProcInfo_29)), check_hlds__purity__Procs0_9, &check_hlds__purity__Procs_30);
    }
#line 445 "purity.m"
    {
#line 445 "purity.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__purity__Procs_30, check_hlds__purity__STATE_VARIABLE_PredInfo_42_42, &check_hlds__purity__STATE_VARIABLE_PredInfo_44_44);
    }
#line 451 "purity.m"
    {
#line 451 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, &check_hlds__purity__OldPurity_31);
    }
#line 452 "purity.m"
    {
#line 452 "purity.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, &check_hlds__purity__Markers0_32);
    }
#line 454 "purity.m"
    {
#line 454 "purity.m"
      check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__Bodypurity_16, check_hlds__purity__OldPurity_31);
    }
#line 453 "purity.m"
    if (check_hlds__purity__succeeded)
#line 466 "purity.m"
      {
#line 466 "purity.m"
        MR_Word check_hlds__purity__Markers_34;

#line 460 "purity.m"
#line 460 "purity.m"
        switch (check_hlds__purity__OldPurity_31) {
#line 460 "purity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 460 "purity.m"
          case (MR_Integer) 2:
#line 465 "purity.m"
            check_hlds__purity__Markers_34 = check_hlds__purity__Markers0_32;
#line 460 "purity.m"
            break;
#line 460 "purity.m"
          case (MR_Integer) 0:
#line 457 "purity.m"
            {
#line 457 "purity.m"
              MR_Word check_hlds__purity__Markers1_33;

#line 458 "purity.m"
              {
#line 458 "purity.m"
                hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 15, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_33);
              }
#line 459 "purity.m"
              {
#line 459 "purity.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 14, check_hlds__purity__Markers1_33, &check_hlds__purity__Markers_34);
              }
#line 457 "purity.m"
            }
#line 460 "purity.m"
            break;
#line 460 "purity.m"
          case (MR_Integer) 1:
#line 461 "purity.m"
            {
#line 462 "purity.m"
              {
#line 462 "purity.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 15, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers_34);
              }
#line 461 "purity.m"
            }
#line 460 "purity.m"
            break;
#line 460 "purity.m"
        }
#line 467 "purity.m"
        {
#line 467 "purity.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__purity__Markers_34, check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, check_hlds__purity__STATE_VARIABLE_PredInfo_37);
        }
#line 466 "purity.m"
      }
#line 453 "purity.m"
    else
#line 468 "purity.m"
      {
#line 469 "purity.m"
        MR_Word check_hlds__purity__TypeCtorInfo_66_66;
#line 469 "purity.m"
        MR_Word check_hlds__purity__V_49_49;
#line 469 "purity.m"
        MR_Word check_hlds__purity__V_50_50;
#line 469 "purity.m"
        MR_Word check_hlds__purity__V_65_65;
#line 469 "purity.m"
        MR_Word check_hlds__purity__V_70_70;
#line 469 "purity.m"
        MR_Integer check_hlds__purity__V_71_71;
#line 469 "purity.m"
        MR_Word check_hlds__purity__V_72_72;
#line 470 "purity.m"
        MR_Integer check_hlds__purity__V_35_35;

#line 469 "purity.m"
        {
#line 469 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__OldPurity_31, check_hlds__purity__Bodypurity_16);
        }
#line 469 "purity.m"
        if (check_hlds__purity__succeeded)
#line 469 "purity.m"
          {
#line 470 "purity.m"
            check_hlds__purity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "purity.m"
            {
#line 470 "purity.m"
              check_hlds__purity__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, 0) = NULL;
#line 470 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, 1) = ((MR_Box) (check_hlds__purity__V_50_50));
#line 470 "purity.m"
            }
#line 470 "purity.m"
            {
#line 470 "purity.m"
              check_hlds__purity__V_65_65 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44);
            }
#line 12144 "check_hlds.purity.c"
            check_hlds__purity__TypeCtorInfo_66_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 470 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 470 "purity.m"
            if (check_hlds__purity__succeeded)
#line 470 "purity.m"
              {
#line 470 "purity.m"
                check_hlds__purity__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, (MR_Integer) 0)));
#line 470 "purity.m"
                check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, (MR_Integer) 1)));
#line 470 "purity.m"
                (MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, (MR_Integer) 0)) = ((MR_Box) (check_hlds__purity__V_71_71));
#line 470 "purity.m"
                check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, (MR_Integer) 1)));
#line 470 "purity.m"
                {
#line 470 "purity.m"
                  check_hlds__purity__succeeded = mercury__list____Unify____list_1_0(check_hlds__purity__TypeCtorInfo_66_66, check_hlds__purity__V_70_70, check_hlds__purity__V_72_72);
                }
#line 470 "purity.m"
              }
#line 469 "purity.m"
          }
#line 468 "purity.m"
        if (check_hlds__purity__succeeded)
#line 488 "purity.m"
          {
#line 488 "purity.m"
            MR_Word check_hlds__purity__Markers_60;

#line 481 "purity.m"
#line 481 "purity.m"
            switch (check_hlds__purity__Bodypurity_16) {
#line 481 "purity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 481 "purity.m"
              case (MR_Integer) 2:
#line 487 "purity.m"
                check_hlds__purity__Markers_60 = check_hlds__purity__Markers0_32;
#line 481 "purity.m"
                break;
#line 481 "purity.m"
              case (MR_Integer) 0:
#line 478 "purity.m"
                {
#line 478 "purity.m"
                  MR_Word check_hlds__purity__Markers1_56;

#line 479 "purity.m"
                  {
#line 479 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 12, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_56);
                  }
#line 480 "purity.m"
                  {
#line 480 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 13, check_hlds__purity__Markers1_56, &check_hlds__purity__Markers_60);
                  }
#line 478 "purity.m"
                }
#line 481 "purity.m"
                break;
#line 481 "purity.m"
              case (MR_Integer) 1:
#line 482 "purity.m"
                {
#line 482 "purity.m"
                  MR_Word check_hlds__purity__Markers1_57;

#line 483 "purity.m"
                  {
#line 483 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 12, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_57);
                  }
#line 484 "purity.m"
                  {
#line 484 "purity.m"
                    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 13, check_hlds__purity__Markers1_57, &check_hlds__purity__Markers_60);
                  }
#line 482 "purity.m"
                }
#line 481 "purity.m"
                break;
#line 481 "purity.m"
            }
#line 489 "purity.m"
            {
#line 489 "purity.m"
              hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__purity__Markers_60, check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, check_hlds__purity__STATE_VARIABLE_PredInfo_37);
            }
#line 488 "purity.m"
          }
#line 468 "purity.m"
        else
#line 468 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_PredInfo_37 = check_hlds__purity__STATE_VARIABLE_PredInfo_44_44;
#line 468 "purity.m"
      }
#line 421 "purity.m"
  }
#line 157 "purity.m"
}

#line 147 "purity.m"
void MR_CALL 
check_hlds__purity__puritycheck_module_4_p_0(
#line 147 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8,
#line 147 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_9,
#line 147 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_10,
#line 147 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_11)
#line 147 "purity.m"
{
#line 222 "purity.m"
  {
#line 222 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 222 "purity.m"
    MR_Word check_hlds__purity__PredIds_7;

#line 223 "purity.m"
    {
#line 223 "purity.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__purity__PredIds_7);
    }
#line 224 "purity.m"
    {
#line 224 "purity.m"
      check_hlds__purity__check_preds_purity_5_p_0(check_hlds__purity__PredIds_7, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__purity__STATE_VARIABLE_ModuleInfo_9, check_hlds__purity__STATE_VARIABLE_Specs_0_10, check_hlds__purity__STATE_VARIABLE_Specs_11);
    }
#line 222 "purity.m"
  }
#line 147 "purity.m"
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
