/*
** Automatically generated from `mark_tail_calls.m'
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


/* :- module hlds.mark_tail_calls. */
/* :- implementation. */

/*
INIT mercury__hlds__mark_tail_calls__init
ENDINIT
*/

#include "hlds.mark_tail_calls.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "int.mih"
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
#include "solutions.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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



#line 392 "mark_tail_calls.m"
struct hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0_s {
#line 392 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredId_6;
#line 392 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__ProcId_7;
#line 392 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredInfo_8;
#line 392 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Warning_10;
#line 392 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont;
#line 392 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont_env_ptr;
#line 395 "mark_tail_calls.m"
  MR_bool hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__TypeInfo_25_25;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalInfo_14;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallPredId_15;
#line 395 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallProcId_16;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallArgs_17;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Builtin_18;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SymName_20;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredOrFunc_21;
#line 395 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Arity_22;
#line 395 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Context_23;
#line 392 "mark_tail_calls.m"
};

#line 375 "mark_tail_calls.m"
struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s {
#line 375 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ModuleInfo_3;
#line 375 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__Warning_4;
#line 375 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont;
#line 375 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont_env_ptr;
#line 377 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__TypeCtorInfo_11_15;
#line 377 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredId_6;
#line 377 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11;
#line 377 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcIds_12;
#line 377 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcId_13;
#line 377 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcInfo_14;
#line 379 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv0_PredId_6;
#line 388 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv1_ProcId_13;
#line 375 "mark_tail_calls.m"
};

#line 363 "mark_tail_calls.m"
struct hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0_s {
#line 363 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__wrapper_arg_1;
#line 363 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__cont;
#line 363 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__cont_env_ptr;
#line 363 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__conv0_Warning_10;
#line 363 "mark_tail_calls.m"
};

#line 358 "mark_tail_calls.m"
struct hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0_s {
#line 358 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__wrapper_arg_1;
#line 358 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont;
#line 358 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont_env_ptr;
#line 358 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__conv0_Warning_4;
#line 358 "mark_tail_calls.m"
};


#line 244 "hlds.mark_tail_calls.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 247 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0;

#line 250 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1;

#line 253 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0[2];

#line 256 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0[2];

#line 259 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0[2];

#line 262 "hlds.mark_tail_calls.c"
static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 265 "hlds.mark_tail_calls.c"
static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 268 "hlds.mark_tail_calls.c"
static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[5];

#line 271 "hlds.mark_tail_calls.c"
static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[5];

#line 274 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0;

#line 277 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0[1];

#line 280 "hlds.mark_tail_calls.c"
static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0[1];

#line 283 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0[1];

#line 286 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0[1];

#line 289 "hlds.mark_tail_calls.c"
static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tailcall_warning_0_0[5];

#line 292 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0;

#line 295 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tailcall_warning_0_0[1];

#line 298 "hlds.mark_tail_calls.c"
static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tailcall_warning_0[1];

#line 301 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tailcall_warning_0[1];

#line 304 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tailcall_warning_0[1];

#line 307 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001(
#line 310 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 312 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

#line 315 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001(
#line 318 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 320 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 322 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

#line 325 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001(
#line 328 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 330 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

#line 333 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001(
#line 336 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 338 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 340 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

#line 343 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tailcall_warning_0_0_10001(
#line 346 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 348 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

#line 351 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____tailcall_warning_0_0_10001(
#line 354 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 356 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 358 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

#line 366 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____tailcall_warning_0_0(
#line 366 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 366 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 366 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

#line 366 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tailcall_warning_0_0(
#line 366 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 366 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

#line 67 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(
#line 67 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 67 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 67 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

#line 67 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(
#line 67 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 67 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

#line 76 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0(
#line 76 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 76 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 76 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

#line 76 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0(
#line 76 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
#line 76 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

#line 415 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__report_nontailcall_warning_3_p_0(
#line 415 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Warning_4,
#line 415 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_18,
#line 415 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_19);

#line 395 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_1(
#line 395 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 392 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_proc_5_p_0(
#line 392 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredId_6,
#line 392 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__ProcId_7,
#line 392 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredInfo_8,
#line 392 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ProcInfo_9,
#line 392 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Warning_10,
#line 392 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 392 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr);

#line 379 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_2(
#line 379 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 388 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_4(
#line 388 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 377 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_3(
#line 377 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 377 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_1(
#line 377 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 375 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0(
#line 375 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_3,
#line 375 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Warning_4,
#line 375 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 375 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr);

#line 338 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__match_output_args_2_p_0(
#line 338 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 338 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

#line 317 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_conj_7_p_0(
#line 317 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 317 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Outputs0_2,
#line 317 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__3_3,
#line 317 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
#line 317 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5,
#line 317 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6,
#line 317 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7);

#line 305 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_cases_6_p_0(
#line 305 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 305 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 305 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 305 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4,
#line 305 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5,
#line 305 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6);

#line 295 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goals_6_p_0(
#line 295 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 295 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 295 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 295 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4,
#line 295 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5,
#line 295 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6);

#line 280 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
#line 280 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ToVar_5,
#line 280 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__FromVar_6,
#line 280 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 280 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4);

#line 174 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(
#line 174 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Info_8,
#line 174 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Outputs0_9,
#line 174 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__MaybeOutputs_10,
#line 174 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Goal0_11,
#line 174 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Goal_12,
#line 174 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88,
#line 174 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);

#line 130 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(
#line 130 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
#line 130 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 130 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 130 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
#line 130 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5);

#line 364 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_3(
#line 364 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 364 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 364 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 364 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3);

#line 363 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_1(
#line 363 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 363 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2(
#line 363 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 363 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 363 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 363 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr);

#line 359 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_3(
#line 359 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 359 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 359 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 359 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3);

#line 358 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_1(
#line 358 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 358 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2(
#line 358 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 358 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 358 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 358 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr);


static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[10][2];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_5[1][8];




static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: recursive call is not tail recursive."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_4[0])),
    ((MR_Box) (hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_4[0])),
    ((MR_Box) (hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 781 "hlds.mark_tail_calls.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_tail_calls__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 789 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0 = {
  (MR_String) "found_tail_calls",
  (MR_Integer) 0
};

#line 795 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1 = {
  (MR_String) "not_found_tail_calls",
  (MR_Integer) 1
};

#line 801 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

#line 807 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

#line 813 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 819 "hlds.mark_tail_calls.c"
const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "found_tail_calls",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0
};

#line 836 "hlds.mark_tail_calls.c"
static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 844 "hlds.mark_tail_calls.c"
static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 853 "hlds.mark_tail_calls.c"
static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 862 "hlds.mark_tail_calls.c"
static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[5] = {
  (MR_String) "mtc_feature",
  (MR_String) "mtc_module",
  (MR_String) "mtc_pred_id",
  (MR_String) "mtc_proc_id",
  (MR_String) "mtc_vartypes"
};

#line 871 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0 = {
  (MR_String) "mark_tail_calls_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0,
  NULL,
  NULL
};

#line 886 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0
};

#line 891 "hlds.mark_tail_calls.c"
static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0
  }
};

#line 900 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0
};

#line 905 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0[1] = {
  (MR_Integer) 0
};

#line 910 "hlds.mark_tail_calls.c"
const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "mark_tail_calls_info",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0
};

#line 927 "hlds.mark_tail_calls.c"
static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tailcall_warning_0_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 936 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0 = {
  (MR_String) "tailcall_warning",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tailcall_warning_0_0,
  NULL,
  NULL,
  NULL
};

#line 951 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tailcall_warning_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0
};

#line 956 "hlds.mark_tail_calls.c"
static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tailcall_warning_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tailcall_warning_0_0
  }
};

#line 965 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tailcall_warning_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0
};

#line 970 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tailcall_warning_0[1] = {
  (MR_Integer) 0
};

#line 975 "hlds.mark_tail_calls.c"
const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____tailcall_warning_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____tailcall_warning_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "tailcall_warning",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tailcall_warning_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tailcall_warning_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tailcall_warning_0
};

#line 992 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001(
#line 995 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 997 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
#line 999 "hlds.mark_tail_calls.c"
{
#line 1001 "hlds.mark_tail_calls.c"
  {
#line 1003 "hlds.mark_tail_calls.c"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 1006 "hlds.mark_tail_calls.c"
    {
#line 1008 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____found_tail_calls_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
#line 1011 "hlds.mark_tail_calls.c"
    return hlds__mark_tail_calls__succeeded;
#line 1013 "hlds.mark_tail_calls.c"
  }
#line 1015 "hlds.mark_tail_calls.c"
}

#line 1018 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001(
#line 1021 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 1023 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 1025 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
#line 1027 "hlds.mark_tail_calls.c"
{
#line 1029 "hlds.mark_tail_calls.c"
  {
#line 1031 "hlds.mark_tail_calls.c"
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

#line 1034 "hlds.mark_tail_calls.c"
    {
#line 1036 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls____Compare____found_tail_calls_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
#line 1039 "hlds.mark_tail_calls.c"
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
#line 1041 "hlds.mark_tail_calls.c"
  }
#line 1043 "hlds.mark_tail_calls.c"
}

#line 1046 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001(
#line 1049 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 1051 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
#line 1053 "hlds.mark_tail_calls.c"
{
#line 1055 "hlds.mark_tail_calls.c"
  {
#line 1057 "hlds.mark_tail_calls.c"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 1060 "hlds.mark_tail_calls.c"
    {
#line 1062 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
#line 1065 "hlds.mark_tail_calls.c"
    return hlds__mark_tail_calls__succeeded;
#line 1067 "hlds.mark_tail_calls.c"
  }
#line 1069 "hlds.mark_tail_calls.c"
}

#line 1072 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001(
#line 1075 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 1077 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 1079 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
#line 1081 "hlds.mark_tail_calls.c"
{
#line 1083 "hlds.mark_tail_calls.c"
  {
#line 1085 "hlds.mark_tail_calls.c"
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

#line 1088 "hlds.mark_tail_calls.c"
    {
#line 1090 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
#line 1093 "hlds.mark_tail_calls.c"
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
#line 1095 "hlds.mark_tail_calls.c"
  }
#line 1097 "hlds.mark_tail_calls.c"
}

#line 1100 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tailcall_warning_0_0_10001(
#line 1103 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 1105 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
#line 1107 "hlds.mark_tail_calls.c"
{
#line 1109 "hlds.mark_tail_calls.c"
  {
#line 1111 "hlds.mark_tail_calls.c"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 1114 "hlds.mark_tail_calls.c"
    {
#line 1116 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____tailcall_warning_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
#line 1119 "hlds.mark_tail_calls.c"
    return hlds__mark_tail_calls__succeeded;
#line 1121 "hlds.mark_tail_calls.c"
  }
#line 1123 "hlds.mark_tail_calls.c"
}

#line 1126 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____tailcall_warning_0_0_10001(
#line 1129 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 1131 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 1133 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
#line 1135 "hlds.mark_tail_calls.c"
{
#line 1137 "hlds.mark_tail_calls.c"
  {
#line 1139 "hlds.mark_tail_calls.c"
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

#line 1142 "hlds.mark_tail_calls.c"
    {
#line 1144 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls____Compare____tailcall_warning_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
#line 1147 "hlds.mark_tail_calls.c"
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
#line 1149 "hlds.mark_tail_calls.c"
  }
#line 1151 "hlds.mark_tail_calls.c"
}

#line 366 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____tailcall_warning_0_0(
#line 366 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 366 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 366 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
#line 366 "mark_tail_calls.m"
{
#line 366 "mark_tail_calls.m"
  {
#line 366 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 366 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastX_18 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
#line 366 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastY_19 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

#line 366 "mark_tail_calls.m"
    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_18 == hlds__mark_tail_calls__CastY_19);
#line 366 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 1178 "hlds.mark_tail_calls.c"
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
#line 366 "mark_tail_calls.m"
    else
#line 366 "mark_tail_calls.m"
      {
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 4)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_14_14;
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_25_25 = (MR_Integer) hlds__mark_tail_calls__V_4_4;
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_26_26 = (MR_Integer) hlds__mark_tail_calls__V_9_9;

#line 366 "mark_tail_calls.m"
        {
#line 366 "mark_tail_calls.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_14_14, hlds__mark_tail_calls__V_25_25, hlds__mark_tail_calls__V_26_26);
        }
#line 1216 "hlds.mark_tail_calls.c"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_14_14 == (MR_Integer) 0);
#line 366 "mark_tail_calls.m"
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 366 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 366 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_14_14;
#line 366 "mark_tail_calls.m"
        else
#line 366 "mark_tail_calls.m"
          {
#line 366 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_15_15;

#line 366 "mark_tail_calls.m"
            {
#line 366 "mark_tail_calls.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__mark_tail_calls__V_15_15, hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_10_10);
            }
#line 1236 "hlds.mark_tail_calls.c"
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_15_15 == (MR_Integer) 0);
#line 366 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 366 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 366 "mark_tail_calls.m"
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_15_15;
#line 366 "mark_tail_calls.m"
            else
#line 366 "mark_tail_calls.m"
              {
#line 366 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__V_16_16;

#line 366 "mark_tail_calls.m"
                {
#line 366 "mark_tail_calls.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_16_16, hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_11_11);
                }
#line 1256 "hlds.mark_tail_calls.c"
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_16_16 == (MR_Integer) 0);
#line 366 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 366 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 366 "mark_tail_calls.m"
                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_16_16;
#line 366 "mark_tail_calls.m"
                else
#line 366 "mark_tail_calls.m"
                  {
#line 366 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__V_17_17;

#line 366 "mark_tail_calls.m"
                    {
#line 366 "mark_tail_calls.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_17_17, hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_12_12);
                    }
#line 1276 "hlds.mark_tail_calls.c"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_17_17 == (MR_Integer) 0);
#line 366 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 366 "mark_tail_calls.m"
                    if (hlds__mark_tail_calls__succeeded)
#line 366 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_17_17;
#line 366 "mark_tail_calls.m"
                    else
#line 366 "mark_tail_calls.m"
                      {
#line 366 "mark_tail_calls.m"
                        mercury__term____Compare____context_0_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__V_8_8, hlds__mark_tail_calls__V_13_13);
                      }
#line 366 "mark_tail_calls.m"
                  }
#line 366 "mark_tail_calls.m"
              }
#line 366 "mark_tail_calls.m"
          }
#line 366 "mark_tail_calls.m"
      }
#line 366 "mark_tail_calls.m"
  }
#line 366 "mark_tail_calls.m"
}

#line 366 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tailcall_warning_0_0(
#line 366 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 366 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
#line 366 "mark_tail_calls.m"
{
#line 366 "mark_tail_calls.m"
  {
#line 366 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 366 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastX_13 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
#line 366 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastY_14 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

#line 366 "mark_tail_calls.m"
    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_13 == hlds__mark_tail_calls__CastY_14);
#line 366 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 366 "mark_tail_calls.m"
      hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 366 "mark_tail_calls.m"
    else
#line 366 "mark_tail_calls.m"
      {
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 4)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
#line 366 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
#line 366 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));

#line 1353 "hlds.mark_tail_calls.c"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_3_3 == hlds__mark_tail_calls__V_8_8);
#line 366 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 366 "mark_tail_calls.m"
          {
#line 1359 "hlds.mark_tail_calls.c"
            {
#line 1361 "hlds.mark_tail_calls.c"
              hlds__mark_tail_calls__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__mark_tail_calls__V_4_4, hlds__mark_tail_calls__V_9_9);
            }
#line 366 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 366 "mark_tail_calls.m"
              {
#line 1368 "hlds.mark_tail_calls.c"
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_5_5 == hlds__mark_tail_calls__V_10_10);
#line 366 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 366 "mark_tail_calls.m"
                  {
#line 1374 "hlds.mark_tail_calls.c"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_6_6 == hlds__mark_tail_calls__V_11_11);
#line 366 "mark_tail_calls.m"
                    if (hlds__mark_tail_calls__succeeded)
#line 1378 "hlds.mark_tail_calls.c"
                      {
#line 1380 "hlds.mark_tail_calls.c"
                        hlds__mark_tail_calls__succeeded = mercury__term____Unify____context_0_0(hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_12_12);
                      }
#line 366 "mark_tail_calls.m"
                  }
#line 366 "mark_tail_calls.m"
              }
#line 366 "mark_tail_calls.m"
          }
#line 366 "mark_tail_calls.m"
      }
#line 366 "mark_tail_calls.m"
    return hlds__mark_tail_calls__succeeded;
#line 366 "mark_tail_calls.m"
  }
#line 366 "mark_tail_calls.m"
}

#line 67 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(
#line 67 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 67 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 67 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
#line 67 "mark_tail_calls.m"
{
#line 67 "mark_tail_calls.m"
  {
#line 67 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 67 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastX_18 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
#line 67 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastY_19 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

#line 67 "mark_tail_calls.m"
    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_18 == hlds__mark_tail_calls__CastY_19);
#line 67 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 1422 "hlds.mark_tail_calls.c"
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mark_tail_calls.m"
    else
#line 67 "mark_tail_calls.m"
      {
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
#line 67 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
#line 67 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 4)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_14_14;
#line 67 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_25_25 = (MR_Integer) hlds__mark_tail_calls__V_4_4;
#line 67 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_26_26 = (MR_Integer) hlds__mark_tail_calls__V_9_9;

#line 67 "mark_tail_calls.m"
        {
#line 67 "mark_tail_calls.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_14_14, hlds__mark_tail_calls__V_25_25, hlds__mark_tail_calls__V_26_26);
        }
#line 1460 "hlds.mark_tail_calls.c"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_14_14 == (MR_Integer) 0);
#line 67 "mark_tail_calls.m"
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 67 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_14_14;
#line 67 "mark_tail_calls.m"
        else
#line 67 "mark_tail_calls.m"
          {
#line 67 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_15_15;

#line 67 "mark_tail_calls.m"
            {
#line 67 "mark_tail_calls.m"
              hlds__hlds_module____Compare____module_info_0_0(&hlds__mark_tail_calls__V_15_15, hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_10_10);
            }
#line 1480 "hlds.mark_tail_calls.c"
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_15_15 == (MR_Integer) 0);
#line 67 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 67 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_15_15;
#line 67 "mark_tail_calls.m"
            else
#line 67 "mark_tail_calls.m"
              {
#line 67 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__V_16_16;

#line 67 "mark_tail_calls.m"
                {
#line 67 "mark_tail_calls.m"
                  hlds__hlds_pred____Compare____pred_id_0_0(&hlds__mark_tail_calls__V_16_16, hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_11_11);
                }
#line 1500 "hlds.mark_tail_calls.c"
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_16_16 == (MR_Integer) 0);
#line 67 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 67 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_16_16;
#line 67 "mark_tail_calls.m"
                else
#line 67 "mark_tail_calls.m"
                  {
#line 67 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__V_17_17;

#line 67 "mark_tail_calls.m"
                    {
#line 67 "mark_tail_calls.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_17_17, hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_12_12);
                    }
#line 1520 "hlds.mark_tail_calls.c"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_17_17 == (MR_Integer) 0);
#line 67 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 67 "mark_tail_calls.m"
                    if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_17_17;
#line 67 "mark_tail_calls.m"
                    else
#line 67 "mark_tail_calls.m"
                      {
#line 67 "mark_tail_calls.m"
                        {
#line 67 "mark_tail_calls.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_2[0], hlds__mark_tail_calls__HeadVar__1_1, ((MR_Box) (hlds__mark_tail_calls__V_8_8)), ((MR_Box) (hlds__mark_tail_calls__V_13_13)));
                        }
#line 67 "mark_tail_calls.m"
                      }
#line 67 "mark_tail_calls.m"
                  }
#line 67 "mark_tail_calls.m"
              }
#line 67 "mark_tail_calls.m"
          }
#line 67 "mark_tail_calls.m"
      }
#line 67 "mark_tail_calls.m"
  }
#line 67 "mark_tail_calls.m"
}

#line 67 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(
#line 67 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 67 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
#line 67 "mark_tail_calls.m"
{
#line 67 "mark_tail_calls.m"
  {
#line 67 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 67 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastX_13 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
#line 67 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastY_14 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

#line 67 "mark_tail_calls.m"
    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_13 == hlds__mark_tail_calls__CastY_14);
#line 67 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
      hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 67 "mark_tail_calls.m"
    else
#line 67 "mark_tail_calls.m"
      {
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__TypeInfo_17_17;
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
#line 67 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 4)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
#line 67 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
#line 67 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));

#line 1603 "hlds.mark_tail_calls.c"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_3_3 == hlds__mark_tail_calls__V_8_8);
#line 67 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
          {
#line 1609 "hlds.mark_tail_calls.c"
            {
#line 1611 "hlds.mark_tail_calls.c"
              hlds__mark_tail_calls__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__mark_tail_calls__V_4_4, hlds__mark_tail_calls__V_9_9);
            }
#line 67 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
              {
#line 1618 "hlds.mark_tail_calls.c"
                {
#line 1620 "hlds.mark_tail_calls.c"
                  hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_10_10);
                }
#line 67 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
                  {
#line 1627 "hlds.mark_tail_calls.c"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_6_6 == hlds__mark_tail_calls__V_11_11);
#line 67 "mark_tail_calls.m"
                    if (hlds__mark_tail_calls__succeeded)
#line 67 "mark_tail_calls.m"
                      {
#line 1633 "hlds.mark_tail_calls.c"
                        hlds__mark_tail_calls__TypeInfo_17_17 = (MR_Word) &hlds__mark_tail_calls_scalar_common_2[0];
#line 1635 "hlds.mark_tail_calls.c"
                        {
#line 1637 "hlds.mark_tail_calls.c"
                          hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeInfo_17_17, ((MR_Box) (hlds__mark_tail_calls__V_7_7)), ((MR_Box) (hlds__mark_tail_calls__V_12_12)));
                        }
#line 67 "mark_tail_calls.m"
                      }
#line 67 "mark_tail_calls.m"
                  }
#line 67 "mark_tail_calls.m"
              }
#line 67 "mark_tail_calls.m"
          }
#line 67 "mark_tail_calls.m"
      }
#line 67 "mark_tail_calls.m"
    return hlds__mark_tail_calls__succeeded;
#line 67 "mark_tail_calls.m"
  }
#line 67 "mark_tail_calls.m"
}

#line 76 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0(
#line 76 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 76 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 76 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
#line 76 "mark_tail_calls.m"
{
#line 76 "mark_tail_calls.m"
  {
#line 76 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 76 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
#line 76 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

#line 76 "mark_tail_calls.m"
    {
#line 76 "mark_tail_calls.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
    }
#line 76 "mark_tail_calls.m"
  }
#line 76 "mark_tail_calls.m"
}

#line 76 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0(
#line 76 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
#line 76 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
#line 76 "mark_tail_calls.m"
{
#line 1696 "hlds.mark_tail_calls.c"
  {
#line 1698 "hlds.mark_tail_calls.c"
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

#line 1701 "hlds.mark_tail_calls.c"
    return hlds__mark_tail_calls__succeeded;
#line 1703 "hlds.mark_tail_calls.c"
  }
#line 76 "mark_tail_calls.m"
}

#line 415 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__report_nontailcall_warning_3_p_0(
#line 415 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Warning_4,
#line 415 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_18,
#line 415 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_19)
#line 415 "mark_tail_calls.m"
{
#line 418 "mark_tail_calls.m"
  {
#line 418 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_4, (MR_Integer) 0)));
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_4, (MR_Integer) 1)));
#line 418 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_4, (MR_Integer) 2)));
#line 418 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_4, (MR_Integer) 3)));
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_4, (MR_Integer) 4)));
#line 418 "mark_tail_calls.m"
    MR_String hlds__mark_tail_calls__Name_11;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__SimpleCallId_12;
#line 418 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__ProcNumber0_13;
#line 418 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__ProcNumber_14;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Pieces_15;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Msg_16;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Spec_17;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_20_20;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_24_24;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_25_25;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_26_26;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_29_29;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_30_30;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_42_42;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_43_43;
#line 418 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_47_47;

#line 420 "mark_tail_calls.m"
    {
#line 420 "mark_tail_calls.m"
      hlds__mark_tail_calls__Name_11 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__mark_tail_calls__SymName_7);
    }
#line 421 "mark_tail_calls.m"
    {
#line 421 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 421 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_20_20, 0) = ((MR_Box) (hlds__mark_tail_calls__Name_11));
#line 421 "mark_tail_calls.m"
    }
#line 421 "mark_tail_calls.m"
    {
#line 421 "mark_tail_calls.m"
      hlds__mark_tail_calls__SimpleCallId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 421 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_12, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_6));
#line 421 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_12, 1) = ((MR_Box) (hlds__mark_tail_calls__V_20_20));
#line 421 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_12, 2) = ((MR_Box) (hlds__mark_tail_calls__Arity_8));
#line 421 "mark_tail_calls.m"
    }
#line 422 "mark_tail_calls.m"
    {
#line 422 "mark_tail_calls.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__mark_tail_calls__ProcId_9, &hlds__mark_tail_calls__ProcNumber0_13);
    }
#line 423 "mark_tail_calls.m"
    hlds__mark_tail_calls__ProcNumber_14 = (hlds__mark_tail_calls__ProcNumber0_13 + (MR_Integer) 1);
#line 425 "mark_tail_calls.m"
    {
#line 425 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 425 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_25_25, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcNumber_14));
#line 425 "mark_tail_calls.m"
    }
#line 426 "mark_tail_calls.m"
    {
#line 426 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 426 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_30_30, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_12));
#line 426 "mark_tail_calls.m"
    }
#line 426 "mark_tail_calls.m"
    {
#line 426 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_29_29, 0) = ((MR_Box) (hlds__mark_tail_calls__V_30_30));
#line 426 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[7])));
#line 426 "mark_tail_calls.m"
    }
#line 426 "mark_tail_calls.m"
    {
#line 426 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[9])));
#line 426 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_26_26, 1) = ((MR_Box) (hlds__mark_tail_calls__V_29_29));
#line 426 "mark_tail_calls.m"
    }
#line 425 "mark_tail_calls.m"
    {
#line 425 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_24_24, 0) = ((MR_Box) (hlds__mark_tail_calls__V_25_25));
#line 425 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_24_24, 1) = ((MR_Box) (hlds__mark_tail_calls__V_26_26));
#line 425 "mark_tail_calls.m"
    }
#line 425 "mark_tail_calls.m"
    {
#line 425 "mark_tail_calls.m"
      hlds__mark_tail_calls__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[8])));
#line 425 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_15, 1) = ((MR_Box) (hlds__mark_tail_calls__V_24_24));
#line 425 "mark_tail_calls.m"
    }
#line 428 "mark_tail_calls.m"
    {
#line 428 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 428 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_43_43, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_15));
#line 428 "mark_tail_calls.m"
    }
#line 428 "mark_tail_calls.m"
    {
#line 428 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_42_42, 0) = ((MR_Box) (hlds__mark_tail_calls__V_43_43));
#line 428 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "mark_tail_calls.m"
    }
#line 428 "mark_tail_calls.m"
    {
#line 428 "mark_tail_calls.m"
      hlds__mark_tail_calls__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 428 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_16, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_10));
#line 428 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_16, 1) = ((MR_Box) (hlds__mark_tail_calls__V_42_42));
#line 428 "mark_tail_calls.m"
    }
#line 429 "mark_tail_calls.m"
    {
#line 429 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_47_47, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_16));
#line 429 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "mark_tail_calls.m"
    }
#line 429 "mark_tail_calls.m"
    {
#line 429 "mark_tail_calls.m"
      hlds__mark_tail_calls__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 429 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 429 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 429 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_17, 2) = ((MR_Box) (hlds__mark_tail_calls__V_47_47));
#line 429 "mark_tail_calls.m"
    }
#line 430 "mark_tail_calls.m"
    {
#line 430 "mark_tail_calls.m"
      MR_Word base;
#line 430 "mark_tail_calls.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "mark_tail_calls.m"
      *hlds__mark_tail_calls__STATE_VARIABLE_Specs_19 = base;
#line 430 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Spec_17));
#line 430 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_18));
#line 430 "mark_tail_calls.m"
    }
#line 418 "mark_tail_calls.m"
  }
#line 415 "mark_tail_calls.m"
}

#line 395 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_1(
#line 395 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 395 "mark_tail_calls.m"
{
#line 395 "mark_tail_calls.m"
  {
#line 395 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 395 "mark_tail_calls.m"
    {
#line 399 "mark_tail_calls.m"
      MR_Word hlds__mark_tail_calls___UnifyContext_19;
#line 405 "mark_tail_calls.m"
      MR_Word hlds__mark_tail_calls__V_24_24;

#line 398 "mark_tail_calls.m"
      (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12, (MR_Integer) 0)));
#line 398 "mark_tail_calls.m"
      (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12, (MR_Integer) 1)));
#line 399 "mark_tail_calls.m"
      (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13)) == (MR_mktag((MR_Integer) 2)));
#line 399 "mark_tail_calls.m"
      if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 399 "mark_tail_calls.m"
        {
#line 399 "mark_tail_calls.m"
          {
#line 399 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 0)));
#line 399 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 1)));
#line 399 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 2)));
#line 399 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 3)));
#line 399 "mark_tail_calls.m"
            hlds__mark_tail_calls___UnifyContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 4)));
#line 399 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 5)));
#line 399 "mark_tail_calls.m"
          }
#line 395 "mark_tail_calls.m"
          {
#line 402 "mark_tail_calls.m"
            {
#line 402 "mark_tail_calls.m"
              (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallPredId_15, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredId_6);
            }
#line 395 "mark_tail_calls.m"
            if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 395 "mark_tail_calls.m"
              {
#line 403 "mark_tail_calls.m"
                (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallProcId_16 == (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__ProcId_7);
#line 395 "mark_tail_calls.m"
                if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 395 "mark_tail_calls.m"
                  {
#line 404 "mark_tail_calls.m"
                    (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Builtin_18 == (MR_Integer) 2);
#line 395 "mark_tail_calls.m"
                    if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 395 "mark_tail_calls.m"
                      {
#line 405 "mark_tail_calls.m"
                        hlds__mark_tail_calls__V_24_24 = (MR_Integer) 10;
#line 405 "mark_tail_calls.m"
                        {
#line 405 "mark_tail_calls.m"
                          (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = hlds__hlds_goal__goal_has_feature_2_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12, hlds__mark_tail_calls__V_24_24);
                        }
#line 405 "mark_tail_calls.m"
                        (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = !((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded);
#line 395 "mark_tail_calls.m"
                        if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 395 "mark_tail_calls.m"
                          {
#line 407 "mark_tail_calls.m"
                            {
#line 407 "mark_tail_calls.m"
                              (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredInfo_8);
                            }
#line 407 "mark_tail_calls.m"
                            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = !((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded);
#line 395 "mark_tail_calls.m"
                            if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 395 "mark_tail_calls.m"
                              {
#line 409 "mark_tail_calls.m"
                                {
#line 409 "mark_tail_calls.m"
                                  (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredOrFunc_21 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredInfo_8);
                                }
#line 2024 "hlds.mark_tail_calls.c"
                                (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__TypeInfo_25_25 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[1];
#line 410 "mark_tail_calls.m"
                                {
#line 410 "mark_tail_calls.m"
                                  mercury__list__length_2_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__TypeInfo_25_25, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallArgs_17, &(hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Arity_22);
                                }
#line 411 "mark_tail_calls.m"
                                {
#line 411 "mark_tail_calls.m"
                                  (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalInfo_14);
                                }
#line 412 "mark_tail_calls.m"
                                {
#line 412 "mark_tail_calls.m"
                                  MR_Word base;
#line 412 "mark_tail_calls.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 412 "mark_tail_calls.m"
                                  *((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Warning_10) = base;
#line 412 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredOrFunc_21));
#line 412 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SymName_20));
#line 412 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Arity_22));
#line 412 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallProcId_16));
#line 412 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Context_23));
#line 412 "mark_tail_calls.m"
                                }
#line 412 "mark_tail_calls.m"
                                {
#line 412 "mark_tail_calls.m"
                                  ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont)((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont_env_ptr);
                                }
#line 395 "mark_tail_calls.m"
                              }
#line 395 "mark_tail_calls.m"
                          }
#line 395 "mark_tail_calls.m"
                      }
#line 395 "mark_tail_calls.m"
                  }
#line 395 "mark_tail_calls.m"
              }
#line 395 "mark_tail_calls.m"
          }
#line 399 "mark_tail_calls.m"
        }
#line 395 "mark_tail_calls.m"
    }
#line 395 "mark_tail_calls.m"
  }
#line 395 "mark_tail_calls.m"
}

#line 392 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_proc_5_p_0(
#line 392 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredId_6,
#line 392 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__ProcId_7,
#line 392 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredInfo_8,
#line 392 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ProcInfo_9,
#line 392 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Warning_10,
#line 392 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 392 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr)
#line 392 "mark_tail_calls.m"
{
#line 392 "mark_tail_calls.m"
  {
#line 392 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0_s hlds__mark_tail_calls__env;

#line 392 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredId_6 = hlds__mark_tail_calls__PredId_6;
#line 392 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__ProcId_7 = hlds__mark_tail_calls__ProcId_7;
#line 392 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredInfo_8 = hlds__mark_tail_calls__PredInfo_8;
#line 392 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Warning_10 = hlds__mark_tail_calls__Warning_10;
#line 392 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont = hlds__mark_tail_calls__cont;
#line 392 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont_env_ptr = hlds__mark_tail_calls__cont_env_ptr;
#line 395 "mark_tail_calls.m"
    {
#line 395 "mark_tail_calls.m"
      MR_Word hlds__mark_tail_calls__Goal_11;

#line 396 "mark_tail_calls.m"
      {
#line 396 "mark_tail_calls.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_tail_calls__ProcInfo_9, &hlds__mark_tail_calls__Goal_11);
      }
#line 397 "mark_tail_calls.m"
      {
#line 397 "mark_tail_calls.m"
        hlds__goal_util__goal_contains_goal_2_p_0(hlds__mark_tail_calls__Goal_11, &(hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12, hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_1, &hlds__mark_tail_calls__env);
      }
#line 395 "mark_tail_calls.m"
    }
#line 392 "mark_tail_calls.m"
  }
#line 392 "mark_tail_calls.m"
}

#line 379 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_2(
#line 379 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 379 "mark_tail_calls.m"
{
#line 379 "mark_tail_calls.m"
  {
#line 379 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 379 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredId_6 = ((MR_Word) (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv0_PredId_6);
#line 379 "mark_tail_calls.m"
    {
#line 379 "mark_tail_calls.m"
      hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_1(hlds__mark_tail_calls__env_ptr);
    }
#line 379 "mark_tail_calls.m"
  }
#line 379 "mark_tail_calls.m"
}

#line 388 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_4(
#line 388 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 388 "mark_tail_calls.m"
{
#line 388 "mark_tail_calls.m"
  {
#line 388 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 388 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcId_13 = ((MR_Integer) (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv1_ProcId_13);
#line 388 "mark_tail_calls.m"
    {
#line 388 "mark_tail_calls.m"
      hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_3(hlds__mark_tail_calls__env_ptr);
    }
#line 388 "mark_tail_calls.m"
  }
#line 388 "mark_tail_calls.m"
}

#line 377 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_3(
#line 377 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 377 "mark_tail_calls.m"
{
#line 377 "mark_tail_calls.m"
  {
#line 377 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 389 "mark_tail_calls.m"
    {
#line 389 "mark_tail_calls.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcId_13, &(hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcInfo_14);
    }
#line 390 "mark_tail_calls.m"
    {
#line 390 "mark_tail_calls.m"
      hlds__mark_tail_calls__nontailcall_in_proc_5_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredId_6, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcId_13, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcInfo_14, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__Warning_4, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont_env_ptr);
    }
#line 377 "mark_tail_calls.m"
  }
#line 377 "mark_tail_calls.m"
}

#line 377 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_1(
#line 377 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 377 "mark_tail_calls.m"
{
#line 377 "mark_tail_calls.m"
  {
#line 377 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 386 "mark_tail_calls.m"
    {
#line 386 "mark_tail_calls.m"
      hlds__hlds_module__module_info_pred_info_3_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ModuleInfo_3, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredId_6, &(hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11);
    }
#line 387 "mark_tail_calls.m"
    {
#line 387 "mark_tail_calls.m"
      (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcIds_12 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11);
    }
#line 2237 "hlds.mark_tail_calls.c"
    (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__TypeCtorInfo_11_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 388 "mark_tail_calls.m"
    {
#line 388 "mark_tail_calls.m"
      mercury__list__member_2_p_1((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__TypeCtorInfo_11_15, &(hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv1_ProcId_13, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcIds_12, hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_4, hlds__mark_tail_calls__env_ptr);
    }
#line 377 "mark_tail_calls.m"
  }
#line 377 "mark_tail_calls.m"
}

#line 375 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0(
#line 375 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_3,
#line 375 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Warning_4,
#line 375 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 375 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr)
#line 375 "mark_tail_calls.m"
{
#line 375 "mark_tail_calls.m"
  {
#line 375 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s hlds__mark_tail_calls__env;

#line 375 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ModuleInfo_3 = hlds__mark_tail_calls__ModuleInfo_3;
#line 375 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__Warning_4 = hlds__mark_tail_calls__Warning_4;
#line 375 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont = hlds__mark_tail_calls__cont;
#line 375 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont_env_ptr = hlds__mark_tail_calls__cont_env_ptr;
#line 377 "mark_tail_calls.m"
    {
#line 377 "mark_tail_calls.m"
      MR_bool hlds__mark_tail_calls__succeeded;
#line 377 "mark_tail_calls.m"
      MR_Word hlds__mark_tail_calls__PredIds_5;

#line 378 "mark_tail_calls.m"
      {
#line 378 "mark_tail_calls.m"
        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0((hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ModuleInfo_3, &hlds__mark_tail_calls__PredIds_5);
      }
#line 379 "mark_tail_calls.m"
      {
#line 379 "mark_tail_calls.m"
        mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &(hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv0_PredId_6, hlds__mark_tail_calls__PredIds_5, hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_2, &hlds__mark_tail_calls__env);
      }
#line 377 "mark_tail_calls.m"
    }
#line 375 "mark_tail_calls.m"
  }
#line 375 "mark_tail_calls.m"
}

#line 338 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__match_output_args_2_p_0(
#line 338 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 338 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
#line 338 "mark_tail_calls.m"
{
#line 341 "mark_tail_calls.m"
  while (MR_TRUE)
#line 341 "mark_tail_calls.m"
    {
#line 341 "mark_tail_calls.m"
      /* tailcall optimized into a loop */
#line 341 "mark_tail_calls.m"
      {
#line 341 "mark_tail_calls.m"
        MR_bool hlds__mark_tail_calls__succeeded;

#line 341 "mark_tail_calls.m"
        if ((hlds__mark_tail_calls__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "mark_tail_calls.m"
          {
#line 341 "mark_tail_calls.m"
            if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "mark_tail_calls.m"
              {
#line 341 "mark_tail_calls.m"
              }
#line 341 "mark_tail_calls.m"
            else
#line 342 "mark_tail_calls.m"
              {
#line 343 "mark_tail_calls.m"
                {
#line 343 "mark_tail_calls.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.match_output_args\'/2", (MR_String) "length mismatch");
                }
#line 342 "mark_tail_calls.m"
              }
#line 341 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 341 "mark_tail_calls.m"
          }
#line 341 "mark_tail_calls.m"
        else
#line 341 "mark_tail_calls.m"
          {
#line 341 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
#line 341 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));

#line 341 "mark_tail_calls.m"
            if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "mark_tail_calls.m"
              {
#line 345 "mark_tail_calls.m"
                {
#line 345 "mark_tail_calls.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.match_output_args\'/2", (MR_String) "length mismatch");
                }
#line 344 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 344 "mark_tail_calls.m"
              }
#line 341 "mark_tail_calls.m"
            else
#line 346 "mark_tail_calls.m"
              {
#line 346 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__ArgVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 346 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__ArgVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));

#line 349 "mark_tail_calls.m"
                if ((hlds__mark_tail_calls__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "mark_tail_calls.m"
                  hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 349 "mark_tail_calls.m"
                else
#line 350 "mark_tail_calls.m"
                  {
#line 350 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_19_19, (MR_Integer) 0)));

#line 350 "mark_tail_calls.m"
                    {
#line 350 "mark_tail_calls.m"
                      hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[1], ((MR_Box) (hlds__mark_tail_calls__ArgVar_15)), ((MR_Box) (hlds__mark_tail_calls__V_17_17)));
                    }
#line 350 "mark_tail_calls.m"
                  }
#line 346 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 352 "mark_tail_calls.m"
                  {
#line 352 "mark_tail_calls.m"
                    /* direct tailcall eliminated */
#line 352 "mark_tail_calls.m"
                    {
#line 352 "mark_tail_calls.m"
                      MR_Word hlds__mark_tail_calls__HeadVar__1__tmp_copy_1 = hlds__mark_tail_calls__V_18_18;
#line 352 "mark_tail_calls.m"
                      MR_Word hlds__mark_tail_calls__HeadVar__2__tmp_copy_2 = hlds__mark_tail_calls__ArgVars_16;

#line 352 "mark_tail_calls.m"
                      hlds__mark_tail_calls__HeadVar__2_2 = hlds__mark_tail_calls__HeadVar__2__tmp_copy_2;
#line 352 "mark_tail_calls.m"
                      hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__HeadVar__1__tmp_copy_1;
#line 352 "mark_tail_calls.m"
                    }
#line 352 "mark_tail_calls.m"
                    continue;
#line 352 "mark_tail_calls.m"
                  }
#line 346 "mark_tail_calls.m"
              }
#line 341 "mark_tail_calls.m"
          }
#line 341 "mark_tail_calls.m"
        return hlds__mark_tail_calls__succeeded;
#line 341 "mark_tail_calls.m"
      }
#line 341 "mark_tail_calls.m"
      break;
#line 341 "mark_tail_calls.m"
    }
#line 338 "mark_tail_calls.m"
}

#line 317 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_conj_7_p_0(
#line 317 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 317 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Outputs0_2,
#line 317 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__3_3,
#line 317 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
#line 317 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5,
#line 317 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6,
#line 317 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7)
#line 317 "mark_tail_calls.m"
{
#line 322 "mark_tail_calls.m"
  {
#line 322 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 322 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 322 "mark_tail_calls.m"
      {
#line 322 "mark_tail_calls.m"
        {
#line 322 "mark_tail_calls.m"
          MR_Word base;
#line 322 "mark_tail_calls.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 322 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__3_3 = base;
#line 322 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs0_2));
#line 322 "mark_tail_calls.m"
        }
#line 323 "mark_tail_calls.m"
        *hlds__mark_tail_calls__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6;
#line 322 "mark_tail_calls.m"
      }
#line 322 "mark_tail_calls.m"
    else
#line 325 "mark_tail_calls.m"
      {
#line 325 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__RevGoal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 0)));
#line 325 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__RevGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 1)));
#line 325 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__RevGoal_18;
#line 325 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__RevGoals_19;
#line 325 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__MaybeOutputs1_21;
#line 325 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_25_25;

#line 326 "mark_tail_calls.m"
        {
#line 326 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Outputs0_2, &hlds__mark_tail_calls__MaybeOutputs1_21, hlds__mark_tail_calls__RevGoal0_16, &hlds__mark_tail_calls__RevGoal_18, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6, &hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_25_25);
        }
#line 332 "mark_tail_calls.m"
        if ((hlds__mark_tail_calls__MaybeOutputs1_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "mark_tail_calls.m"
          {
#line 334 "mark_tail_calls.m"
            *hlds__mark_tail_calls__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 335 "mark_tail_calls.m"
            hlds__mark_tail_calls__RevGoals_19 = hlds__mark_tail_calls__RevGoals0_17;
#line 333 "mark_tail_calls.m"
            *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_25_25;
#line 333 "mark_tail_calls.m"
          }
#line 332 "mark_tail_calls.m"
        else
#line 329 "mark_tail_calls.m"
          {
#line 329 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__Outputs1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeOutputs1_21, (MR_Integer) 0)));

#line 330 "mark_tail_calls.m"
            {
#line 330 "mark_tail_calls.m"
              hlds__mark_tail_calls__mark_tail_calls_in_conj_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Outputs1_22, hlds__mark_tail_calls__HeadVar__3_3, hlds__mark_tail_calls__RevGoals0_17, &hlds__mark_tail_calls__RevGoals_19, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_25_25, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7);
            }
#line 329 "mark_tail_calls.m"
          }
#line 325 "mark_tail_calls.m"
        {
#line 325 "mark_tail_calls.m"
          MR_Word base;
#line 325 "mark_tail_calls.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__5_5 = base;
#line 325 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__RevGoal_18));
#line 325 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__RevGoals_19));
#line 325 "mark_tail_calls.m"
        }
#line 325 "mark_tail_calls.m"
      }
#line 322 "mark_tail_calls.m"
  }
#line 317 "mark_tail_calls.m"
}

#line 305 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_cases_6_p_0(
#line 305 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 305 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 305 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 305 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4,
#line 305 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5,
#line 305 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6)
#line 305 "mark_tail_calls.m"
{
#line 309 "mark_tail_calls.m"
  {
#line 309 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 309 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "mark_tail_calls.m"
      {
#line 309 "mark_tail_calls.m"
        *hlds__mark_tail_calls__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5;
#line 309 "mark_tail_calls.m"
      }
#line 309 "mark_tail_calls.m"
    else
#line 311 "mark_tail_calls.m"
      {
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Case_16;
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Cases_17;
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_14, (MR_Integer) 0)));
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_14, (MR_Integer) 1)));
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_14, (MR_Integer) 2)));
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goal_23;
#line 311 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_26_26;
#line 313 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_22_22;

#line 313 "mark_tail_calls.m"
        {
#line 313 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, &hlds__mark_tail_calls__V_22_22, hlds__mark_tail_calls__Goal0_21, &hlds__mark_tail_calls__Goal_23, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5, &hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_26_26);
        }
#line 314 "mark_tail_calls.m"
        {
#line 314 "mark_tail_calls.m"
          hlds__mark_tail_calls__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case_16, 0) = ((MR_Box) (hlds__mark_tail_calls__MainConsId_19));
#line 314 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case_16, 1) = ((MR_Box) (hlds__mark_tail_calls__OtherConsIds_20));
#line 314 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case_16, 2) = ((MR_Box) (hlds__mark_tail_calls__Goal_23));
#line 314 "mark_tail_calls.m"
        }
#line 315 "mark_tail_calls.m"
        {
#line 315 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_cases_6_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, hlds__mark_tail_calls__Cases0_15, &hlds__mark_tail_calls__Cases_17, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_26_26, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6);
        }
#line 310 "mark_tail_calls.m"
        {
#line 310 "mark_tail_calls.m"
          MR_Word base;
#line 310 "mark_tail_calls.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__4_4 = base;
#line 310 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Case_16));
#line 310 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Cases_17));
#line 310 "mark_tail_calls.m"
        }
#line 311 "mark_tail_calls.m"
      }
#line 309 "mark_tail_calls.m"
  }
#line 305 "mark_tail_calls.m"
}

#line 295 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goals_6_p_0(
#line 295 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 295 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 295 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 295 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4,
#line 295 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5,
#line 295 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6)
#line 295 "mark_tail_calls.m"
{
#line 299 "mark_tail_calls.m"
  {
#line 299 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 299 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "mark_tail_calls.m"
      {
#line 299 "mark_tail_calls.m"
        *hlds__mark_tail_calls__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5;
#line 299 "mark_tail_calls.m"
      }
#line 299 "mark_tail_calls.m"
    else
#line 301 "mark_tail_calls.m"
      {
#line 301 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 301 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 301 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goal_16;
#line 301 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goals_17;
#line 301 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_22_22;
#line 302 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_19_19;

#line 302 "mark_tail_calls.m"
        {
#line 302 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, &hlds__mark_tail_calls__V_19_19, hlds__mark_tail_calls__Goal0_14, &hlds__mark_tail_calls__Goal_16, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5, &hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_22_22);
        }
#line 303 "mark_tail_calls.m"
        {
#line 303 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_goals_6_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, hlds__mark_tail_calls__Goals0_15, &hlds__mark_tail_calls__Goals_17, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_22_22, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6);
        }
#line 300 "mark_tail_calls.m"
        {
#line 300 "mark_tail_calls.m"
          MR_Word base;
#line 300 "mark_tail_calls.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__4_4 = base;
#line 300 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Goal_16));
#line 300 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Goals_17));
#line 300 "mark_tail_calls.m"
        }
#line 301 "mark_tail_calls.m"
      }
#line 299 "mark_tail_calls.m"
  }
#line 295 "mark_tail_calls.m"
}

#line 280 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
#line 280 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ToVar_5,
#line 280 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__FromVar_6,
#line 280 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 280 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4)
#line 280 "mark_tail_calls.m"
{
#line 284 "mark_tail_calls.m"
  {
#line 284 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 284 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__MaybeVar0_7;
#line 284 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__MaybeVars0_8;
#line 284 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__MaybeVar_9;
#line 284 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__MaybeVars_10;

#line 284 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 284 "mark_tail_calls.m"
      {
#line 284 "mark_tail_calls.m"
        hlds__mark_tail_calls__MaybeVar0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 284 "mark_tail_calls.m"
        hlds__mark_tail_calls__MaybeVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "mark_tail_calls.m"
        if ((hlds__mark_tail_calls__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "mark_tail_calls.m"
          {
#line 291 "mark_tail_calls.m"
            hlds__mark_tail_calls__MaybeVar_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 292 "mark_tail_calls.m"
            {
#line 292 "mark_tail_calls.m"
              hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_5, hlds__mark_tail_calls__FromVar_6, hlds__mark_tail_calls__MaybeVars0_8, &hlds__mark_tail_calls__MaybeVars_10);
            }
#line 290 "mark_tail_calls.m"
          }
#line 289 "mark_tail_calls.m"
        else
#line 286 "mark_tail_calls.m"
          {
#line 286 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeVar0_7, (MR_Integer) 0)));

#line 286 "mark_tail_calls.m"
            {
#line 286 "mark_tail_calls.m"
              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[1], ((MR_Box) (hlds__mark_tail_calls__ToVar_5)), ((MR_Box) (hlds__mark_tail_calls__V_11_11)));
            }
#line 286 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 286 "mark_tail_calls.m"
              {
#line 288 "mark_tail_calls.m"
                hlds__mark_tail_calls__MaybeVars_10 = hlds__mark_tail_calls__MaybeVars0_8;
#line 287 "mark_tail_calls.m"
                {
#line 287 "mark_tail_calls.m"
                  hlds__mark_tail_calls__MaybeVar_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeVar_9, 0) = ((MR_Box) (hlds__mark_tail_calls__FromVar_6));
#line 287 "mark_tail_calls.m"
                }
#line 287 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 286 "mark_tail_calls.m"
              }
#line 286 "mark_tail_calls.m"
          }
#line 284 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 284 "mark_tail_calls.m"
          {
#line 284 "mark_tail_calls.m"
            {
#line 284 "mark_tail_calls.m"
              MR_Word base;
#line 284 "mark_tail_calls.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "mark_tail_calls.m"
              *hlds__mark_tail_calls__HeadVar__4_4 = base;
#line 284 "mark_tail_calls.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__MaybeVar_9));
#line 284 "mark_tail_calls.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__MaybeVars_10));
#line 284 "mark_tail_calls.m"
            }
#line 284 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 284 "mark_tail_calls.m"
          }
#line 284 "mark_tail_calls.m"
      }
#line 284 "mark_tail_calls.m"
    return hlds__mark_tail_calls__succeeded;
#line 284 "mark_tail_calls.m"
  }
#line 280 "mark_tail_calls.m"
}

#line 174 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(
#line 174 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Info_8,
#line 174 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Outputs0_9,
#line 174 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__MaybeOutputs_10,
#line 174 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Goal0_11,
#line 174 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Goal_12,
#line 174 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88,
#line 174 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89)
#line 174 "mark_tail_calls.m"
{
#line 180 "mark_tail_calls.m"
  {
#line 180 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 180 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_11, (MR_Integer) 0)));
#line 180 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_11, (MR_Integer) 1)));

#line 190 "mark_tail_calls.m"
#line 190 "mark_tail_calls.m"
    switch (MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_14)) {
#line 190 "mark_tail_calls.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 190 "mark_tail_calls.m"
      case (MR_Integer) 0:
#line 187 "mark_tail_calls.m"
        {
#line 188 "mark_tail_calls.m"
          *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "mark_tail_calls.m"
          *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 187 "mark_tail_calls.m"
          *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 187 "mark_tail_calls.m"
        }
#line 190 "mark_tail_calls.m"
        break;
#line 190 "mark_tail_calls.m"
      case (MR_Integer) 1:
#line 191 "mark_tail_calls.m"
        {
#line 191 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__LHS_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)));
#line 191 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Unify0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 3)));
#line 191 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__ModuleInfo_36;
#line 191 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__VarTypes_37;
#line 191 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 191 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));
#line 191 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 4)));
#line 193 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_104_104;
#line 193 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_105_105;
#line 193 "mark_tail_calls.m"
          MR_Integer hlds__mark_tail_calls__V_106_106;

#line 192 "mark_tail_calls.m"
          *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 193 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
#line 193 "mark_tail_calls.m"
          hlds__mark_tail_calls__ModuleInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
#line 193 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
#line 193 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
#line 193 "mark_tail_calls.m"
          hlds__mark_tail_calls__VarTypes_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));
#line 195 "mark_tail_calls.m"
          {
#line 195 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(hlds__mark_tail_calls__ModuleInfo_36, hlds__mark_tail_calls__VarTypes_37, hlds__mark_tail_calls__LHS_31);
          }
#line 195 "mark_tail_calls.m"
          if (hlds__mark_tail_calls__succeeded)
#line 198 "mark_tail_calls.m"
            {
#line 198 "mark_tail_calls.m"
              MR_Word base;
#line 198 "mark_tail_calls.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 198 "mark_tail_calls.m"
              *hlds__mark_tail_calls__MaybeOutputs_10 = base;
#line 198 "mark_tail_calls.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs0_9));
#line 198 "mark_tail_calls.m"
            }
#line 195 "mark_tail_calls.m"
          else
#line 207 "mark_tail_calls.m"
#line 207 "mark_tail_calls.m"
            switch (MR_tag((MR_Word) hlds__mark_tail_calls__Unify0_34)) {
#line 207 "mark_tail_calls.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 207 "mark_tail_calls.m"
              case (MR_Integer) 0:
#line 207 "mark_tail_calls.m"
              case (MR_Integer) 1:
#line 206 "mark_tail_calls.m"
                *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "mark_tail_calls.m"
                break;
#line 207 "mark_tail_calls.m"
              case (MR_Integer) 2:
#line 208 "mark_tail_calls.m"
                {
#line 208 "mark_tail_calls.m"
                  MR_Word hlds__mark_tail_calls__ToVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_34, (MR_Integer) 0)));
#line 208 "mark_tail_calls.m"
                  MR_Word hlds__mark_tail_calls__FromVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_34, (MR_Integer) 1)));
#line 209 "mark_tail_calls.m"
                  MR_Word hlds__mark_tail_calls__Outputs_58;

#line 210 "mark_tail_calls.m"
                  {
#line 210 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_56, hlds__mark_tail_calls__FromVar_57, hlds__mark_tail_calls__Outputs0_9, &hlds__mark_tail_calls__Outputs_58);
                  }
#line 209 "mark_tail_calls.m"
                  if (hlds__mark_tail_calls__succeeded)
#line 212 "mark_tail_calls.m"
                    {
#line 212 "mark_tail_calls.m"
                      MR_Word base;
#line 212 "mark_tail_calls.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__MaybeOutputs_10 = base;
#line 212 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_58));
#line 212 "mark_tail_calls.m"
                    }
#line 209 "mark_tail_calls.m"
                  else
#line 214 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 208 "mark_tail_calls.m"
                }
#line 207 "mark_tail_calls.m"
                break;
#line 207 "mark_tail_calls.m"
              case (MR_Integer) 3:
#line 206 "mark_tail_calls.m"
                *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "mark_tail_calls.m"
                break;
#line 207 "mark_tail_calls.m"
            }
#line 191 "mark_tail_calls.m"
          *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 191 "mark_tail_calls.m"
        }
#line 190 "mark_tail_calls.m"
        break;
#line 190 "mark_tail_calls.m"
      case (MR_Integer) 2:
#line 220 "mark_tail_calls.m"
        {
#line 220 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__CallPredId_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)));
#line 220 "mark_tail_calls.m"
          MR_Integer hlds__mark_tail_calls__CallProcId_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 220 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));
#line 220 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Builtin_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 3)));
#line 220 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__PredId_65;
#line 220 "mark_tail_calls.m"
          MR_Integer hlds__mark_tail_calls__ProcId_66;
#line 219 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls___UnifyContext_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 4)));
#line 219 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls___SymName_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 5)));
#line 222 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_112_112;
#line 222 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_113_113;
#line 222 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_115_115;

#line 221 "mark_tail_calls.m"
          *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
#line 222 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
#line 222 "mark_tail_calls.m"
          hlds__mark_tail_calls__PredId_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
#line 222 "mark_tail_calls.m"
          hlds__mark_tail_calls__ProcId_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
#line 222 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));
#line 225 "mark_tail_calls.m"
          {
#line 225 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__mark_tail_calls__CallPredId_59, hlds__mark_tail_calls__PredId_65);
          }
#line 225 "mark_tail_calls.m"
          if (hlds__mark_tail_calls__succeeded)
#line 225 "mark_tail_calls.m"
            {
#line 226 "mark_tail_calls.m"
              hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CallProcId_60 == hlds__mark_tail_calls__ProcId_66);
#line 225 "mark_tail_calls.m"
              if (hlds__mark_tail_calls__succeeded)
#line 225 "mark_tail_calls.m"
                {
#line 227 "mark_tail_calls.m"
                  {
#line 227 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__match_output_args_2_p_0(hlds__mark_tail_calls__Outputs0_9, hlds__mark_tail_calls__Args_61);
                  }
#line 225 "mark_tail_calls.m"
                  if (hlds__mark_tail_calls__succeeded)
#line 228 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Builtin_62 == (MR_Integer) 2);
#line 225 "mark_tail_calls.m"
                }
#line 225 "mark_tail_calls.m"
            }
#line 224 "mark_tail_calls.m"
          if (hlds__mark_tail_calls__succeeded)
#line 230 "mark_tail_calls.m"
            {
#line 230 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Feature_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
#line 230 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__GoalInfo_68;
#line 230 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
#line 230 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
#line 230 "mark_tail_calls.m"
              MR_Integer hlds__mark_tail_calls__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
#line 230 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));

#line 231 "mark_tail_calls.m"
              {
#line 231 "mark_tail_calls.m"
                hlds__hlds_goal__goal_info_add_feature_3_p_0(hlds__mark_tail_calls__Feature_67, hlds__mark_tail_calls__GoalInfo0_15, &hlds__mark_tail_calls__GoalInfo_68);
              }
#line 232 "mark_tail_calls.m"
              {
#line 232 "mark_tail_calls.m"
                MR_Word base;
#line 232 "mark_tail_calls.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "mark_tail_calls.m"
                *hlds__mark_tail_calls__Goal_12 = base;
#line 232 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr0_14));
#line 232 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo_68));
#line 232 "mark_tail_calls.m"
              }
#line 233 "mark_tail_calls.m"
              *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = (MR_Integer) 0;
#line 230 "mark_tail_calls.m"
            }
#line 224 "mark_tail_calls.m"
          else
#line 235 "mark_tail_calls.m"
            {
#line 235 "mark_tail_calls.m"
              *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 235 "mark_tail_calls.m"
              *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 235 "mark_tail_calls.m"
            }
#line 220 "mark_tail_calls.m"
        }
#line 190 "mark_tail_calls.m"
        break;
#line 190 "mark_tail_calls.m"
      case (MR_Integer) 3:
#line 190 "mark_tail_calls.m"
#line 190 "mark_tail_calls.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)))) {
#line 190 "mark_tail_calls.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 190 "mark_tail_calls.m"
          case (MR_Integer) 0:
#line 190 "mark_tail_calls.m"
          case (MR_Integer) 1:
#line 190 "mark_tail_calls.m"
          case (MR_Integer) 5:
#line 187 "mark_tail_calls.m"
            {
#line 188 "mark_tail_calls.m"
              *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "mark_tail_calls.m"
              *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 187 "mark_tail_calls.m"
              *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 187 "mark_tail_calls.m"
            }
#line 190 "mark_tail_calls.m"
            break;
#line 190 "mark_tail_calls.m"
          case (MR_Integer) 2:
#line 238 "mark_tail_calls.m"
            {
#line 238 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__ConjType_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 238 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));

#line 247 "mark_tail_calls.m"
#line 247 "mark_tail_calls.m"
              switch (hlds__mark_tail_calls__ConjType_69) {
#line 247 "mark_tail_calls.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 247 "mark_tail_calls.m"
                case (MR_Integer) 1:
#line 248 "mark_tail_calls.m"
                  {
#line 249 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 248 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 248 "mark_tail_calls.m"
                  }
#line 247 "mark_tail_calls.m"
                  break;
#line 247 "mark_tail_calls.m"
                case (MR_Integer) 0:
#line 240 "mark_tail_calls.m"
                  {
#line 240 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__TypeCtorInfo_124_124 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 240 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__RevGoals0_71;
#line 240 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__RevGoals_72;
#line 240 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__Goals_73;
#line 240 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__GoalExpr_74;

#line 241 "mark_tail_calls.m"
                    {
#line 241 "mark_tail_calls.m"
                      mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_124_124, hlds__mark_tail_calls__Goals0_70, &hlds__mark_tail_calls__RevGoals0_71);
                    }
#line 242 "mark_tail_calls.m"
                    {
#line 242 "mark_tail_calls.m"
                      hlds__mark_tail_calls__mark_tail_calls_in_conj_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, hlds__mark_tail_calls__MaybeOutputs_10, hlds__mark_tail_calls__RevGoals0_71, &hlds__mark_tail_calls__RevGoals_72, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);
                    }
#line 244 "mark_tail_calls.m"
                    {
#line 244 "mark_tail_calls.m"
                      mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_124_124, hlds__mark_tail_calls__RevGoals_72, &hlds__mark_tail_calls__Goals_73);
                    }
#line 245 "mark_tail_calls.m"
                    {
#line 245 "mark_tail_calls.m"
                      hlds__mark_tail_calls__GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 245 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 245 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_74, 1) = ((MR_Box) (hlds__mark_tail_calls__ConjType_69));
#line 245 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_74, 2) = ((MR_Box) (hlds__mark_tail_calls__Goals_73));
#line 245 "mark_tail_calls.m"
                    }
#line 246 "mark_tail_calls.m"
                    {
#line 246 "mark_tail_calls.m"
                      MR_Word base;
#line 246 "mark_tail_calls.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__Goal_12 = base;
#line 246 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_74));
#line 246 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_15));
#line 246 "mark_tail_calls.m"
                    }
#line 240 "mark_tail_calls.m"
                  }
#line 247 "mark_tail_calls.m"
                  break;
#line 247 "mark_tail_calls.m"
              }
#line 238 "mark_tail_calls.m"
            }
#line 190 "mark_tail_calls.m"
            break;
#line 190 "mark_tail_calls.m"
          case (MR_Integer) 3:
#line 253 "mark_tail_calls.m"
            {
#line 253 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 253 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Goals_100;
#line 253 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__GoalExpr_101;

#line 254 "mark_tail_calls.m"
              {
#line 254 "mark_tail_calls.m"
                hlds__mark_tail_calls__mark_tail_calls_in_goals_6_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, hlds__mark_tail_calls__Goals0_99, &hlds__mark_tail_calls__Goals_100, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);
              }
#line 256 "mark_tail_calls.m"
              *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 257 "mark_tail_calls.m"
              {
#line 257 "mark_tail_calls.m"
                hlds__mark_tail_calls__GoalExpr_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 257 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_101, 1) = ((MR_Box) (hlds__mark_tail_calls__Goals_100));
#line 257 "mark_tail_calls.m"
              }
#line 258 "mark_tail_calls.m"
              {
#line 258 "mark_tail_calls.m"
                MR_Word base;
#line 258 "mark_tail_calls.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 258 "mark_tail_calls.m"
                *hlds__mark_tail_calls__Goal_12 = base;
#line 258 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_101));
#line 258 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_15));
#line 258 "mark_tail_calls.m"
              }
#line 253 "mark_tail_calls.m"
            }
#line 190 "mark_tail_calls.m"
            break;
#line 190 "mark_tail_calls.m"
          case (MR_Integer) 4:
#line 260 "mark_tail_calls.m"
            {
#line 260 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 260 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__CanFail_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));
#line 260 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Cases0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 3)));
#line 260 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Cases_78;
#line 260 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__GoalExpr_102;

#line 261 "mark_tail_calls.m"
              {
#line 261 "mark_tail_calls.m"
                hlds__mark_tail_calls__mark_tail_calls_in_cases_6_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, hlds__mark_tail_calls__Cases0_77, &hlds__mark_tail_calls__Cases_78, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);
              }
#line 263 "mark_tail_calls.m"
              *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 264 "mark_tail_calls.m"
              {
#line 264 "mark_tail_calls.m"
                hlds__mark_tail_calls__GoalExpr_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 264 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 264 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_102, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_75));
#line 264 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_102, 2) = ((MR_Box) (hlds__mark_tail_calls__CanFail_76));
#line 264 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_102, 3) = ((MR_Box) (hlds__mark_tail_calls__Cases_78));
#line 264 "mark_tail_calls.m"
              }
#line 265 "mark_tail_calls.m"
              {
#line 265 "mark_tail_calls.m"
                MR_Word base;
#line 265 "mark_tail_calls.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 265 "mark_tail_calls.m"
                *hlds__mark_tail_calls__Goal_12 = base;
#line 265 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_102));
#line 265 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_15));
#line 265 "mark_tail_calls.m"
              }
#line 260 "mark_tail_calls.m"
            }
#line 190 "mark_tail_calls.m"
            break;
#line 190 "mark_tail_calls.m"
          case (MR_Integer) 6:
#line 267 "mark_tail_calls.m"
            {
#line 267 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Vars_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 267 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Cond_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));
#line 267 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Then0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 3)));
#line 267 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Else0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 4)));
#line 267 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Then_84;
#line 267 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Else_86;
#line 267 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_93_93;
#line 267 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__GoalExpr_103;
#line 268 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__V_83_83;
#line 270 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__V_85_85;

#line 268 "mark_tail_calls.m"
              {
#line 268 "mark_tail_calls.m"
                hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, &hlds__mark_tail_calls__V_83_83, hlds__mark_tail_calls__Then0_81, &hlds__mark_tail_calls__Then_84, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88, &hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_93_93);
              }
#line 270 "mark_tail_calls.m"
              {
#line 270 "mark_tail_calls.m"
                hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, &hlds__mark_tail_calls__V_85_85, hlds__mark_tail_calls__Else0_82, &hlds__mark_tail_calls__Else_86, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_93_93, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);
              }
#line 272 "mark_tail_calls.m"
              *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "mark_tail_calls.m"
              {
#line 273 "mark_tail_calls.m"
                hlds__mark_tail_calls__GoalExpr_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 273 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 273 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 1) = ((MR_Box) (hlds__mark_tail_calls__Vars_79));
#line 273 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 2) = ((MR_Box) (hlds__mark_tail_calls__Cond_80));
#line 273 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 3) = ((MR_Box) (hlds__mark_tail_calls__Then_84));
#line 273 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 4) = ((MR_Box) (hlds__mark_tail_calls__Else_86));
#line 273 "mark_tail_calls.m"
              }
#line 274 "mark_tail_calls.m"
              {
#line 274 "mark_tail_calls.m"
                MR_Word base;
#line 274 "mark_tail_calls.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "mark_tail_calls.m"
                *hlds__mark_tail_calls__Goal_12 = base;
#line 274 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_103));
#line 274 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_15));
#line 274 "mark_tail_calls.m"
              }
#line 267 "mark_tail_calls.m"
            }
#line 190 "mark_tail_calls.m"
            break;
#line 190 "mark_tail_calls.m"
          case (MR_Integer) 7:
#line 276 "mark_tail_calls.m"
            {
#line 277 "mark_tail_calls.m"
              {
#line 277 "mark_tail_calls.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_calls_in_goal\'/7", (MR_String) "shorthand");
#line 277 "mark_tail_calls.m"
                return;
              }
#line 276 "mark_tail_calls.m"
            }
#line 190 "mark_tail_calls.m"
            break;
#line 190 "mark_tail_calls.m"
        }
#line 190 "mark_tail_calls.m"
        break;
#line 190 "mark_tail_calls.m"
    }
#line 180 "mark_tail_calls.m"
  }
#line 174 "mark_tail_calls.m"
}

#line 130 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(
#line 130 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
#line 130 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 130 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 130 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
#line 130 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5)
#line 130 "mark_tail_calls.m"
{
#line 134 "mark_tail_calls.m"
  {
#line 134 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 134 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 134 "mark_tail_calls.m"
      {
#line 134 "mark_tail_calls.m"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 134 "mark_tail_calls.m"
          {
#line 134 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 134 "mark_tail_calls.m"
              {
#line 134 "mark_tail_calls.m"
                *hlds__mark_tail_calls__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 134 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 134 "mark_tail_calls.m"
              }
#line 134 "mark_tail_calls.m"
          }
#line 134 "mark_tail_calls.m"
      }
#line 134 "mark_tail_calls.m"
    else
#line 136 "mark_tail_calls.m"
      {
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Mode_10;
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Modes_11;
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Var_12;
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Vars_13;
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__OutputVar_14;
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__OutputVars_15;
#line 136 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__ArgMode_16;

#line 135 "mark_tail_calls.m"
        hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 135 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 135 "mark_tail_calls.m"
          {
#line 135 "mark_tail_calls.m"
            hlds__mark_tail_calls__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 135 "mark_tail_calls.m"
            hlds__mark_tail_calls__Modes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 136 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 136 "mark_tail_calls.m"
              {
#line 136 "mark_tail_calls.m"
                hlds__mark_tail_calls__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 0)));
#line 136 "mark_tail_calls.m"
                hlds__mark_tail_calls__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 1)));
#line 137 "mark_tail_calls.m"
                {
#line 137 "mark_tail_calls.m"
                  check_hlds__mode_util__mode_to_arg_mode_4_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Mode_10, hlds__mark_tail_calls__Type_8, &hlds__mark_tail_calls__ArgMode_16);
                }
#line 143 "mark_tail_calls.m"
#line 143 "mark_tail_calls.m"
                switch (hlds__mark_tail_calls__ArgMode_16) {
#line 143 "mark_tail_calls.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 143 "mark_tail_calls.m"
                  case (MR_Integer) 0:
#line 143 "mark_tail_calls.m"
                  case (MR_Integer) 2:
#line 142 "mark_tail_calls.m"
                    hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 143 "mark_tail_calls.m"
                    break;
#line 143 "mark_tail_calls.m"
                  case (MR_Integer) 1:
#line 144 "mark_tail_calls.m"
                    {
#line 144 "mark_tail_calls.m"
                      MR_Word hlds__mark_tail_calls__IsDummy_17;

#line 145 "mark_tail_calls.m"
                      {
#line 145 "mark_tail_calls.m"
                        hlds__mark_tail_calls__IsDummy_17 = check_hlds__type_util__check_dummy_type_2_f_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Type_8);
                      }
#line 149 "mark_tail_calls.m"
#line 149 "mark_tail_calls.m"
                      switch (hlds__mark_tail_calls__IsDummy_17) {
#line 149 "mark_tail_calls.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 149 "mark_tail_calls.m"
                        case (MR_Integer) 0:
#line 151 "mark_tail_calls.m"
                          hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 149 "mark_tail_calls.m"
                          break;
#line 149 "mark_tail_calls.m"
                        case (MR_Integer) 1:
#line 148 "mark_tail_calls.m"
                          {
#line 148 "mark_tail_calls.m"
                            hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 148 "mark_tail_calls.m"
                            MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__OutputVar_14, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_12));
#line 148 "mark_tail_calls.m"
                          }
#line 149 "mark_tail_calls.m"
                          break;
#line 149 "mark_tail_calls.m"
                      }
#line 144 "mark_tail_calls.m"
                    }
#line 143 "mark_tail_calls.m"
                    break;
#line 143 "mark_tail_calls.m"
                }
#line 154 "mark_tail_calls.m"
                {
#line 154 "mark_tail_calls.m"
                  hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Types_9, hlds__mark_tail_calls__Modes_11, hlds__mark_tail_calls__Vars_13, &hlds__mark_tail_calls__OutputVars_15);
                }
#line 136 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 136 "mark_tail_calls.m"
                  {
#line 136 "mark_tail_calls.m"
                    {
#line 136 "mark_tail_calls.m"
                      MR_Word base;
#line 136 "mark_tail_calls.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__HeadVar__5_5 = base;
#line 136 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__OutputVar_14));
#line 136 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__OutputVars_15));
#line 136 "mark_tail_calls.m"
                    }
#line 136 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 136 "mark_tail_calls.m"
                  }
#line 136 "mark_tail_calls.m"
              }
#line 135 "mark_tail_calls.m"
          }
#line 136 "mark_tail_calls.m"
      }
#line 134 "mark_tail_calls.m"
    return hlds__mark_tail_calls__succeeded;
#line 134 "mark_tail_calls.m"
  }
#line 130 "mark_tail_calls.m"
}

#line 364 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_3(
#line 364 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 364 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 364 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 364 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3)
#line 364 "mark_tail_calls.m"
{
#line 364 "mark_tail_calls.m"
  {
#line 364 "mark_tail_calls.m"
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
#line 364 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__conv1_STATE_VARIABLE_Specs_19;

#line 364 "mark_tail_calls.m"
    {
#line 364 "mark_tail_calls.m"
      hlds__mark_tail_calls__report_nontailcall_warning_3_p_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), &hlds__mark_tail_calls__conv1_STATE_VARIABLE_Specs_19);
    }
#line 364 "mark_tail_calls.m"
    *hlds__mark_tail_calls__wrapper_arg_3 = ((MR_Box) (hlds__mark_tail_calls__conv1_STATE_VARIABLE_Specs_19));
#line 364 "mark_tail_calls.m"
  }
#line 364 "mark_tail_calls.m"
}

#line 363 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_1(
#line 363 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 363 "mark_tail_calls.m"
{
#line 363 "mark_tail_calls.m"
  {
#line 363 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 363 "mark_tail_calls.m"
    *((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__conv0_Warning_10));
#line 363 "mark_tail_calls.m"
    {
#line 363 "mark_tail_calls.m"
      ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__cont)((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__cont_env_ptr);
    }
#line 363 "mark_tail_calls.m"
  }
#line 363 "mark_tail_calls.m"
}

#line 363 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2(
#line 363 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 363 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 363 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 363 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr)
#line 363 "mark_tail_calls.m"
{
#line 363 "mark_tail_calls.m"
  {
#line 363 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0_s hlds__mark_tail_calls__env;

#line 363 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__wrapper_arg_1 = hlds__mark_tail_calls__wrapper_arg_1;
#line 363 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__cont = hlds__mark_tail_calls__cont;
#line 363 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__cont_env_ptr = hlds__mark_tail_calls__cont_env_ptr;
#line 363 "mark_tail_calls.m"
    {
#line 363 "mark_tail_calls.m"
      MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;

#line 363 "mark_tail_calls.m"
      {
#line 363 "mark_tail_calls.m"
        hlds__mark_tail_calls__nontailcall_in_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 6))), &(hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2_env_0__conv0_Warning_10, hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_1, &hlds__mark_tail_calls__env);
      }
#line 363 "mark_tail_calls.m"
    }
#line 363 "mark_tail_calls.m"
  }
#line 363 "mark_tail_calls.m"
}

#line 41 "mark_tail_calls.m"
void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0(
#line 41 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredId_7,
#line 41 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__ProcId_8,
#line 41 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredInfo_9,
#line 41 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ProcInfo_10,
#line 41 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_13,
#line 41 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_14)
#line 41 "mark_tail_calls.m"
{
#line 361 "mark_tail_calls.m"
  {
#line 361 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 361 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__TypeCtorInfo_19_19;
#line 361 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Warnings_12;
#line 361 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_15_15;
#line 364 "mark_tail_calls.m"
    MR_Box hlds__mark_tail_calls__conv2_STATE_VARIABLE_Specs_14;

#line 363 "mark_tail_calls.m"
    {
#line 363 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 363 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_15_15, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_5[0]));
#line 363 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_15_15, 1) = ((MR_Box) (hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0_2));
#line 363 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 363 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_15_15, 3) = ((MR_Box) (hlds__mark_tail_calls__PredId_7));
#line 363 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_15_15, 4) = ((MR_Box) (hlds__mark_tail_calls__ProcId_8));
#line 363 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_15_15, 5) = ((MR_Box) (hlds__mark_tail_calls__PredInfo_9));
#line 363 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_15_15, 6) = ((MR_Box) (hlds__mark_tail_calls__ProcInfo_10));
#line 363 "mark_tail_calls.m"
    }
#line 3780 "hlds.mark_tail_calls.c"
    hlds__mark_tail_calls__TypeCtorInfo_19_19 = (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0;
#line 362 "mark_tail_calls.m"
    {
#line 362 "mark_tail_calls.m"
      mercury__solutions__solutions_2_p_1(hlds__mark_tail_calls__TypeCtorInfo_19_19, hlds__mark_tail_calls__V_15_15, &hlds__mark_tail_calls__Warnings_12);
    }
#line 364 "mark_tail_calls.m"
    {
#line 364 "mark_tail_calls.m"
      mercury__list__foldl_4_p_0(hlds__mark_tail_calls__TypeCtorInfo_19_19, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], (MR_Word) &hlds__mark_tail_calls_scalar_common_2[2], hlds__mark_tail_calls__Warnings_12, ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_13)), &hlds__mark_tail_calls__conv2_STATE_VARIABLE_Specs_14);
    }
#line 364 "mark_tail_calls.m"
    *hlds__mark_tail_calls__STATE_VARIABLE_Specs_14 = ((MR_Word) hlds__mark_tail_calls__conv2_STATE_VARIABLE_Specs_14);
#line 361 "mark_tail_calls.m"
  }
#line 41 "mark_tail_calls.m"
}

#line 359 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_3(
#line 359 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 359 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 359 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 359 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3)
#line 359 "mark_tail_calls.m"
{
#line 359 "mark_tail_calls.m"
  {
#line 359 "mark_tail_calls.m"
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;
#line 359 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__conv1_STATE_VARIABLE_Specs_19;

#line 359 "mark_tail_calls.m"
    {
#line 359 "mark_tail_calls.m"
      hlds__mark_tail_calls__report_nontailcall_warning_3_p_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), &hlds__mark_tail_calls__conv1_STATE_VARIABLE_Specs_19);
    }
#line 359 "mark_tail_calls.m"
    *hlds__mark_tail_calls__wrapper_arg_3 = ((MR_Box) (hlds__mark_tail_calls__conv1_STATE_VARIABLE_Specs_19));
#line 359 "mark_tail_calls.m"
  }
#line 359 "mark_tail_calls.m"
}

#line 358 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_1(
#line 358 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 358 "mark_tail_calls.m"
{
#line 358 "mark_tail_calls.m"
  {
#line 358 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 358 "mark_tail_calls.m"
    *((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__conv0_Warning_4));
#line 358 "mark_tail_calls.m"
    {
#line 358 "mark_tail_calls.m"
      ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont)((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont_env_ptr);
    }
#line 358 "mark_tail_calls.m"
  }
#line 358 "mark_tail_calls.m"
}

#line 358 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2(
#line 358 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 358 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 358 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 358 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr)
#line 358 "mark_tail_calls.m"
{
#line 358 "mark_tail_calls.m"
  {
#line 358 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0_s hlds__mark_tail_calls__env;

#line 358 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__wrapper_arg_1 = hlds__mark_tail_calls__wrapper_arg_1;
#line 358 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont = hlds__mark_tail_calls__cont;
#line 358 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont_env_ptr = hlds__mark_tail_calls__cont_env_ptr;
#line 358 "mark_tail_calls.m"
    {
#line 358 "mark_tail_calls.m"
      MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;

#line 358 "mark_tail_calls.m"
      {
#line 358 "mark_tail_calls.m"
        hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), &(hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__conv0_Warning_4, hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_1, &hlds__mark_tail_calls__env);
      }
#line 358 "mark_tail_calls.m"
    }
#line 358 "mark_tail_calls.m"
  }
#line 358 "mark_tail_calls.m"
}

#line 38 "mark_tail_calls.m"
void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0(
#line 38 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_4,
#line 38 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_7,
#line 38 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_Specs_8)
#line 38 "mark_tail_calls.m"
{
#line 357 "mark_tail_calls.m"
  {
#line 357 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 357 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__TypeCtorInfo_13_13;
#line 357 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Warnings_6;
#line 357 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_9_9;
#line 359 "mark_tail_calls.m"
    MR_Box hlds__mark_tail_calls__conv2_STATE_VARIABLE_Specs_8;

#line 358 "mark_tail_calls.m"
    {
#line 358 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 358 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_9_9, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0]));
#line 358 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_9_9, 1) = ((MR_Box) (hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2));
#line 358 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 358 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_9_9, 3) = ((MR_Box) (hlds__mark_tail_calls__ModuleInfo_4));
#line 358 "mark_tail_calls.m"
    }
#line 3934 "hlds.mark_tail_calls.c"
    hlds__mark_tail_calls__TypeCtorInfo_13_13 = (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0;
#line 358 "mark_tail_calls.m"
    {
#line 358 "mark_tail_calls.m"
      mercury__solutions__solutions_2_p_1(hlds__mark_tail_calls__TypeCtorInfo_13_13, hlds__mark_tail_calls__V_9_9, &hlds__mark_tail_calls__Warnings_6);
    }
#line 359 "mark_tail_calls.m"
    {
#line 359 "mark_tail_calls.m"
      mercury__list__foldl_4_p_0(hlds__mark_tail_calls__TypeCtorInfo_13_13, (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], (MR_Word) &hlds__mark_tail_calls_scalar_common_2[1], hlds__mark_tail_calls__Warnings_6, ((MR_Box) (hlds__mark_tail_calls__STATE_VARIABLE_Specs_0_7)), &hlds__mark_tail_calls__conv2_STATE_VARIABLE_Specs_8);
    }
#line 359 "mark_tail_calls.m"
    *hlds__mark_tail_calls__STATE_VARIABLE_Specs_8 = ((MR_Word) hlds__mark_tail_calls__conv2_STATE_VARIABLE_Specs_8);
#line 357 "mark_tail_calls.m"
  }
#line 38 "mark_tail_calls.m"
}

#line 35 "mark_tail_calls.m"
void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_6_p_0(
#line 35 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Feature_7,
#line 35 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_8,
#line 35 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 35 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredInfo_11,
#line 35 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27,
#line 35 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_28)
#line 35 "mark_tail_calls.m"
{
#line 81 "mark_tail_calls.m"
  {
#line 81 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 81 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 81 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 81 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Types_13;
#line 81 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Goal0_14;
#line 81 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Detism_15;
#line 81 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__SolnCount_17;
#line 85 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls___CanFail_16;

#line 82 "mark_tail_calls.m"
    {
#line 82 "mark_tail_calls.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__mark_tail_calls__PredInfo_11, &hlds__mark_tail_calls__Types_13);
    }
#line 83 "mark_tail_calls.m"
    {
#line 83 "mark_tail_calls.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__Goal0_14);
    }
#line 84 "mark_tail_calls.m"
    {
#line 84 "mark_tail_calls.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__Detism_15);
    }
#line 85 "mark_tail_calls.m"
    {
#line 85 "mark_tail_calls.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__mark_tail_calls__Detism_15, &hlds__mark_tail_calls___CanFail_16, &hlds__mark_tail_calls__SolnCount_17);
    }
#line 94 "mark_tail_calls.m"
#line 94 "mark_tail_calls.m"
    switch (hlds__mark_tail_calls__SolnCount_17) {
#line 94 "mark_tail_calls.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 94 "mark_tail_calls.m"
      case (MR_Integer) 3:
#line 91 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_28 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27;
#line 94 "mark_tail_calls.m"
        break;
#line 94 "mark_tail_calls.m"
      case (MR_Integer) 2:
#line 94 "mark_tail_calls.m"
      case (MR_Integer) 1:
#line 97 "mark_tail_calls.m"
        {
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Modes_18;
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__HeadVars_19;
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__VarTypes_20;
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Outputs_21;
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Info_22;
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Goal_24;
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__FoundTailCalls_25;
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__TailCallEvents_26;
#line 97 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_30_30;
#line 122 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__OutputsPrime_37;
#line 104 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_23_23;

#line 98 "mark_tail_calls.m"
          {
#line 98 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__Modes_18);
          }
#line 99 "mark_tail_calls.m"
          {
#line 99 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__HeadVars_19);
          }
#line 100 "mark_tail_calls.m"
          {
#line 100 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__VarTypes_20);
          }
#line 123 "mark_tail_calls.m"
          {
#line 123 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_8, hlds__mark_tail_calls__Types_13, hlds__mark_tail_calls__Modes_18, hlds__mark_tail_calls__HeadVars_19, &hlds__mark_tail_calls__OutputsPrime_37);
          }
#line 122 "mark_tail_calls.m"
          if (hlds__mark_tail_calls__succeeded)
#line 125 "mark_tail_calls.m"
            hlds__mark_tail_calls__Outputs_21 = hlds__mark_tail_calls__OutputsPrime_37;
#line 122 "mark_tail_calls.m"
          else
#line 127 "mark_tail_calls.m"
            {
#line 127 "mark_tail_calls.m"
              {
#line 127 "mark_tail_calls.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.find_maybe_output_args\'/5", (MR_String) "list length mismatch");
#line 127 "mark_tail_calls.m"
                return;
              }
#line 127 "mark_tail_calls.m"
            }
#line 102 "mark_tail_calls.m"
          {
#line 102 "mark_tail_calls.m"
            hlds__mark_tail_calls__Info_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 102 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 0) = ((MR_Box) (hlds__mark_tail_calls__Feature_7));
#line 102 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 1) = ((MR_Box) (hlds__mark_tail_calls__ModuleInfo_8));
#line 102 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 2) = ((MR_Box) (hlds__mark_tail_calls__PredId_9));
#line 102 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 3) = ((MR_Box) (hlds__mark_tail_calls__ProcId_10));
#line 102 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 4) = ((MR_Box) (hlds__mark_tail_calls__VarTypes_20));
#line 102 "mark_tail_calls.m"
          }
#line 104 "mark_tail_calls.m"
          {
#line 104 "mark_tail_calls.m"
            hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_22, hlds__mark_tail_calls__Outputs_21, &hlds__mark_tail_calls__V_23_23, hlds__mark_tail_calls__Goal0_14, &hlds__mark_tail_calls__Goal_24, (MR_Integer) 1, &hlds__mark_tail_calls__FoundTailCalls_25);
          }
#line 106 "mark_tail_calls.m"
          {
#line 106 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__mark_tail_calls__Goal_24, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_30_30);
          }
#line 110 "mark_tail_calls.m"
#line 110 "mark_tail_calls.m"
          switch (hlds__mark_tail_calls__FoundTailCalls_25) {
#line 110 "mark_tail_calls.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 110 "mark_tail_calls.m"
            case (MR_Integer) 0:
#line 109 "mark_tail_calls.m"
              hlds__mark_tail_calls__TailCallEvents_26 = (MR_Integer) 0;
#line 110 "mark_tail_calls.m"
              break;
#line 110 "mark_tail_calls.m"
            case (MR_Integer) 1:
#line 112 "mark_tail_calls.m"
              hlds__mark_tail_calls__TailCallEvents_26 = (MR_Integer) 1;
#line 110 "mark_tail_calls.m"
              break;
#line 110 "mark_tail_calls.m"
          }
#line 114 "mark_tail_calls.m"
          {
#line 114 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_set_has_tail_call_event_3_p_0(hlds__mark_tail_calls__TailCallEvents_26, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_30_30, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_28);
          }
#line 97 "mark_tail_calls.m"
        }
#line 94 "mark_tail_calls.m"
        break;
#line 94 "mark_tail_calls.m"
      case (MR_Integer) 0:
#line 92 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_28 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27;
#line 94 "mark_tail_calls.m"
        break;
#line 94 "mark_tail_calls.m"
    }
#line 81 "mark_tail_calls.m"
  }
#line 35 "mark_tail_calls.m"
}

void mercury__hlds__mark_tail_calls__init(void)
{
}

void mercury__hlds__mark_tail_calls__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0);
}

void mercury__hlds__mark_tail_calls__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.mark_tail_calls. */
