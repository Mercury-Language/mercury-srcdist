/*
** Automatically generated from `mark_tail_calls.m'
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


/* :- module hlds.mark_tail_calls. */
/* :- implementation. */

/*
INIT mercury__hlds__mark_tail_calls__init
ENDINIT
*/

#include "hlds.mark_tail_calls.mih"


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
#include "solutions.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 386 "mark_tail_calls.m"
struct hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0_s {
#line 386 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredId_6;
#line 386 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__ProcId_7;
#line 386 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredInfo_8;
#line 386 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Warning_10;
#line 386 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont;
#line 386 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont_env_ptr;
#line 389 "mark_tail_calls.m"
  MR_bool hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__TypeInfo_25_25;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalInfo_14;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallPredId_15;
#line 389 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallProcId_16;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallArgs_17;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Builtin_18;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SymName_20;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredOrFunc_21;
#line 389 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Arity_22;
#line 389 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Context_23;
#line 386 "mark_tail_calls.m"
};

#line 369 "mark_tail_calls.m"
struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s {
#line 369 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ModuleInfo_3;
#line 369 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__Warning_4;
#line 369 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont;
#line 369 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont_env_ptr;
#line 371 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__TypeCtorInfo_11_15;
#line 371 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredId_6;
#line 371 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11;
#line 371 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcIds_12;
#line 371 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcId_13;
#line 371 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcInfo_14;
#line 373 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv0_PredId_6;
#line 382 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv1_ProcId_13;
#line 369 "mark_tail_calls.m"
};

#line 357 "mark_tail_calls.m"
struct hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0_s {
#line 357 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__wrapper_arg_1;
#line 357 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__cont;
#line 357 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__cont_env_ptr;
#line 357 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__conv0_Warning_10;
#line 357 "mark_tail_calls.m"
};

#line 350 "mark_tail_calls.m"
struct hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0_s {
#line 350 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__wrapper_arg_1;
#line 350 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont;
#line 350 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont_env_ptr;
#line 350 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__conv0_Warning_4;
#line 350 "mark_tail_calls.m"
};


#line 238 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0;

#line 241 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1;

#line 244 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0[2];

#line 247 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0[2];

#line 250 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0[2];

#line 253 "hlds.mark_tail_calls.c"
static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 256 "hlds.mark_tail_calls.c"
static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 259 "hlds.mark_tail_calls.c"
static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[5];

#line 262 "hlds.mark_tail_calls.c"
static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[5];

#line 265 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0;

#line 268 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0[1];

#line 271 "hlds.mark_tail_calls.c"
static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0[1];

#line 274 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0[1];

#line 277 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0[1];

#line 280 "hlds.mark_tail_calls.c"
static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tailcall_warning_0_0[5];

#line 283 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0;

#line 286 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tailcall_warning_0_0[1];

#line 289 "hlds.mark_tail_calls.c"
static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tailcall_warning_0[1];

#line 292 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tailcall_warning_0[1];

#line 295 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tailcall_warning_0[1];

#line 298 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001(
#line 301 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 303 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

#line 306 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001(
#line 309 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 311 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 313 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

#line 316 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001(
#line 319 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 321 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

#line 324 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001(
#line 327 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 329 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 331 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

#line 334 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tailcall_warning_0_0_10001(
#line 337 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 339 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2);

#line 342 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____tailcall_warning_0_0_10001(
#line 345 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 347 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 349 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3);

#line 360 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____tailcall_warning_0_0(
#line 360 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 360 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 360 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

#line 360 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tailcall_warning_0_0(
#line 360 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 360 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

#line 63 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(
#line 63 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 63 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 63 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

#line 63 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(
#line 63 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 63 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

#line 72 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0(
#line 72 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 72 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 72 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3);

#line 72 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0(
#line 72 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
#line 72 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

#line 409 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__report_nontailcall_warning_4_p_0(
#line 409 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Globals_5,
#line 409 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Warning_6);

#line 389 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_1(
#line 389 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 386 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_proc_5_p_0(
#line 386 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredId_6,
#line 386 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__ProcId_7,
#line 386 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredInfo_8,
#line 386 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ProcInfo_9,
#line 386 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Warning_10,
#line 386 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 386 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr);

#line 373 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_2(
#line 373 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 382 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_4(
#line 382 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 371 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_3(
#line 371 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 371 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_1(
#line 371 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 369 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0(
#line 369 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_3,
#line 369 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Warning_4,
#line 369 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 369 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr);

#line 330 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__match_output_args_2_p_0(
#line 330 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 330 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2);

#line 309 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_conj_7_p_0(
#line 309 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 309 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Outputs0_2,
#line 309 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__3_3,
#line 309 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
#line 309 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5,
#line 309 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6,
#line 309 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7);

#line 297 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_cases_6_p_0(
#line 297 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 297 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 297 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 297 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4,
#line 297 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5,
#line 297 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6);

#line 287 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goals_6_p_0(
#line 287 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 287 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 287 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 287 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4,
#line 287 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5,
#line 287 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6);

#line 272 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
#line 272 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ToVar_5,
#line 272 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__FromVar_6,
#line 272 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 272 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4);

#line 168 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(
#line 168 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Info_8,
#line 168 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Outputs0_9,
#line 168 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__MaybeOutputs_10,
#line 168 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Goal0_11,
#line 168 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Goal_12,
#line 168 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88,
#line 168 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);

#line 124 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(
#line 124 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
#line 124 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 124 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 124 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
#line 124 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5);

#line 358 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_3(
#line 358 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 358 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 358 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 358 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3);

#line 357 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_1(
#line 357 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 357 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2(
#line 357 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 357 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 357 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 357 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr);

#line 352 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_3(
#line 352 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 352 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 352 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 352 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3);

#line 350 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_1(
#line 350 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg);

#line 350 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2(
#line 350 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 350 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 350 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 350 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr);


static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][8];




static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "warning: recursive call is not tail recursive."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of"))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][8] = {
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 751 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0 = {
  (MR_String) "found_tail_calls",
  (MR_Integer) 0
};

#line 757 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1 = {
  (MR_String) "not_found_tail_calls",
  (MR_Integer) 1
};

#line 763 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

#line 769 "hlds.mark_tail_calls.c"
static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

#line 775 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 781 "hlds.mark_tail_calls.c"
const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "found_tail_calls",
  {
    hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0
  },
  {
    hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_tail_calls_0
};

#line 802 "hlds.mark_tail_calls.c"
static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 810 "hlds.mark_tail_calls.c"
static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 819 "hlds.mark_tail_calls.c"
static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 828 "hlds.mark_tail_calls.c"
static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[5] = {
  (MR_String) "mtc_feature",
  (MR_String) "mtc_module",
  (MR_String) "mtc_pred_id",
  (MR_String) "mtc_proc_id",
  (MR_String) "mtc_vartypes"
};

#line 837 "hlds.mark_tail_calls.c"
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

#line 852 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0
};

#line 857 "hlds.mark_tail_calls.c"
static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0
  }
};

#line 866 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0
};

#line 871 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0[1] = {
  (MR_Integer) 0
};

#line 876 "hlds.mark_tail_calls.c"
const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "mark_tail_calls_info",
  {
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0
  },
  {
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0
};

#line 897 "hlds.mark_tail_calls.c"
static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tailcall_warning_0_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 906 "hlds.mark_tail_calls.c"
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

#line 921 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tailcall_warning_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0
};

#line 926 "hlds.mark_tail_calls.c"
static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tailcall_warning_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tailcall_warning_0_0
  }
};

#line 935 "hlds.mark_tail_calls.c"
static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tailcall_warning_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0
};

#line 940 "hlds.mark_tail_calls.c"
static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tailcall_warning_0[1] = {
  (MR_Integer) 0
};

#line 945 "hlds.mark_tail_calls.c"
const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____tailcall_warning_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____tailcall_warning_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "tailcall_warning",
  {
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tailcall_warning_0
  },
  {
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tailcall_warning_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tailcall_warning_0
};

#line 966 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0_10001(
#line 969 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 971 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
#line 973 "hlds.mark_tail_calls.c"
{
#line 975 "hlds.mark_tail_calls.c"
  {
#line 977 "hlds.mark_tail_calls.c"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 980 "hlds.mark_tail_calls.c"
    {
#line 982 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____found_tail_calls_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
#line 985 "hlds.mark_tail_calls.c"
    return hlds__mark_tail_calls__succeeded;
#line 987 "hlds.mark_tail_calls.c"
  }
#line 989 "hlds.mark_tail_calls.c"
}

#line 992 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0_10001(
#line 995 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 997 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 999 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
#line 1001 "hlds.mark_tail_calls.c"
{
#line 1003 "hlds.mark_tail_calls.c"
  {
#line 1005 "hlds.mark_tail_calls.c"
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

#line 1008 "hlds.mark_tail_calls.c"
    {
#line 1010 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls____Compare____found_tail_calls_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
#line 1013 "hlds.mark_tail_calls.c"
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
#line 1015 "hlds.mark_tail_calls.c"
  }
#line 1017 "hlds.mark_tail_calls.c"
}

#line 1020 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0_10001(
#line 1023 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 1025 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
#line 1027 "hlds.mark_tail_calls.c"
{
#line 1029 "hlds.mark_tail_calls.c"
  {
#line 1031 "hlds.mark_tail_calls.c"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 1034 "hlds.mark_tail_calls.c"
    {
#line 1036 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
#line 1039 "hlds.mark_tail_calls.c"
    return hlds__mark_tail_calls__succeeded;
#line 1041 "hlds.mark_tail_calls.c"
  }
#line 1043 "hlds.mark_tail_calls.c"
}

#line 1046 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0_10001(
#line 1049 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 1051 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 1053 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
#line 1055 "hlds.mark_tail_calls.c"
{
#line 1057 "hlds.mark_tail_calls.c"
  {
#line 1059 "hlds.mark_tail_calls.c"
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

#line 1062 "hlds.mark_tail_calls.c"
    {
#line 1064 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
#line 1067 "hlds.mark_tail_calls.c"
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
#line 1069 "hlds.mark_tail_calls.c"
  }
#line 1071 "hlds.mark_tail_calls.c"
}

#line 1074 "hlds.mark_tail_calls.c"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tailcall_warning_0_0_10001(
#line 1077 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 1079 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2)
#line 1081 "hlds.mark_tail_calls.c"
{
#line 1083 "hlds.mark_tail_calls.c"
  {
#line 1085 "hlds.mark_tail_calls.c"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 1088 "hlds.mark_tail_calls.c"
    {
#line 1090 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls____Unify____tailcall_warning_0_0(((MR_Word) hlds__mark_tail_calls__wrapper_arg_1), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2));
    }
#line 1093 "hlds.mark_tail_calls.c"
    return hlds__mark_tail_calls__succeeded;
#line 1095 "hlds.mark_tail_calls.c"
  }
#line 1097 "hlds.mark_tail_calls.c"
}

#line 1100 "hlds.mark_tail_calls.c"
static void MR_CALL 
hlds__mark_tail_calls____Compare____tailcall_warning_0_0_10001(
#line 1103 "hlds.mark_tail_calls.c"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 1105 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 1107 "hlds.mark_tail_calls.c"
  MR_Box hlds__mark_tail_calls__wrapper_arg_3)
#line 1109 "hlds.mark_tail_calls.c"
{
#line 1111 "hlds.mark_tail_calls.c"
  {
#line 1113 "hlds.mark_tail_calls.c"
    MR_Word hlds__mark_tail_calls__conv0_HeadVar__1_1;

#line 1116 "hlds.mark_tail_calls.c"
    {
#line 1118 "hlds.mark_tail_calls.c"
      hlds__mark_tail_calls____Compare____tailcall_warning_0_0(&hlds__mark_tail_calls__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_tail_calls__wrapper_arg_2), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_3));
    }
#line 1121 "hlds.mark_tail_calls.c"
    *hlds__mark_tail_calls__wrapper_arg_1 = ((MR_Box) (hlds__mark_tail_calls__conv0_HeadVar__1_1));
#line 1123 "hlds.mark_tail_calls.c"
  }
#line 1125 "hlds.mark_tail_calls.c"
}

#line 360 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____tailcall_warning_0_0(
#line 360 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 360 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 360 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
#line 360 "mark_tail_calls.m"
{
#line 360 "mark_tail_calls.m"
  {
#line 360 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 360 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastX_18 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
#line 360 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastY_19 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

#line 360 "mark_tail_calls.m"
    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_18 == hlds__mark_tail_calls__CastY_19);
#line 360 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 1152 "hlds.mark_tail_calls.c"
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
#line 360 "mark_tail_calls.m"
    else
#line 360 "mark_tail_calls.m"
      {
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 4)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_14_14;
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_25_25 = (MR_Integer) hlds__mark_tail_calls__V_4_4;
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_26_26 = (MR_Integer) hlds__mark_tail_calls__V_9_9;

#line 360 "mark_tail_calls.m"
        {
#line 360 "mark_tail_calls.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_14_14, hlds__mark_tail_calls__V_25_25, hlds__mark_tail_calls__V_26_26);
        }
#line 1190 "hlds.mark_tail_calls.c"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_14_14 == (MR_Integer) 0);
#line 360 "mark_tail_calls.m"
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 360 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 360 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_14_14;
#line 360 "mark_tail_calls.m"
        else
#line 360 "mark_tail_calls.m"
          {
#line 360 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_15_15;

#line 360 "mark_tail_calls.m"
            {
#line 360 "mark_tail_calls.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__mark_tail_calls__V_15_15, hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_10_10);
            }
#line 1210 "hlds.mark_tail_calls.c"
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_15_15 == (MR_Integer) 0);
#line 360 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 360 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 360 "mark_tail_calls.m"
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_15_15;
#line 360 "mark_tail_calls.m"
            else
#line 360 "mark_tail_calls.m"
              {
#line 360 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__V_16_16;

#line 360 "mark_tail_calls.m"
                {
#line 360 "mark_tail_calls.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_16_16, hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_11_11);
                }
#line 1230 "hlds.mark_tail_calls.c"
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_16_16 == (MR_Integer) 0);
#line 360 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 360 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 360 "mark_tail_calls.m"
                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_16_16;
#line 360 "mark_tail_calls.m"
                else
#line 360 "mark_tail_calls.m"
                  {
#line 360 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__V_17_17;

#line 360 "mark_tail_calls.m"
                    {
#line 360 "mark_tail_calls.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_17_17, hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_12_12);
                    }
#line 1250 "hlds.mark_tail_calls.c"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_17_17 == (MR_Integer) 0);
#line 360 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 360 "mark_tail_calls.m"
                    if (hlds__mark_tail_calls__succeeded)
#line 360 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_17_17;
#line 360 "mark_tail_calls.m"
                    else
#line 360 "mark_tail_calls.m"
                      {
#line 360 "mark_tail_calls.m"
                        mercury__term____Compare____context_0_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__V_8_8, hlds__mark_tail_calls__V_13_13);
#line 360 "mark_tail_calls.m"
                        return;
                      }
#line 360 "mark_tail_calls.m"
                  }
#line 360 "mark_tail_calls.m"
              }
#line 360 "mark_tail_calls.m"
          }
#line 360 "mark_tail_calls.m"
      }
#line 360 "mark_tail_calls.m"
  }
#line 360 "mark_tail_calls.m"
}

#line 360 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tailcall_warning_0_0(
#line 360 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 360 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
#line 360 "mark_tail_calls.m"
{
#line 360 "mark_tail_calls.m"
  {
#line 360 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 360 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastX_13 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
#line 360 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastY_14 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

#line 360 "mark_tail_calls.m"
    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_13 == hlds__mark_tail_calls__CastY_14);
#line 360 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 360 "mark_tail_calls.m"
      hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 360 "mark_tail_calls.m"
    else
#line 360 "mark_tail_calls.m"
      {
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 4)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
#line 360 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
#line 360 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));

#line 1329 "hlds.mark_tail_calls.c"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_3_3 == hlds__mark_tail_calls__V_8_8);
#line 360 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 360 "mark_tail_calls.m"
          {
#line 1335 "hlds.mark_tail_calls.c"
            {
#line 1337 "hlds.mark_tail_calls.c"
              hlds__mark_tail_calls__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__mark_tail_calls__V_4_4, hlds__mark_tail_calls__V_9_9);
            }
#line 360 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 360 "mark_tail_calls.m"
              {
#line 1344 "hlds.mark_tail_calls.c"
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_5_5 == hlds__mark_tail_calls__V_10_10);
#line 360 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 360 "mark_tail_calls.m"
                  {
#line 1350 "hlds.mark_tail_calls.c"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_6_6 == hlds__mark_tail_calls__V_11_11);
#line 360 "mark_tail_calls.m"
                    if (hlds__mark_tail_calls__succeeded)
#line 1354 "hlds.mark_tail_calls.c"
                      {
#line 1356 "hlds.mark_tail_calls.c"
                        return hlds__mark_tail_calls__succeeded = mercury__term____Unify____context_0_0(hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_12_12);
                      }
#line 360 "mark_tail_calls.m"
                  }
#line 360 "mark_tail_calls.m"
              }
#line 360 "mark_tail_calls.m"
          }
#line 360 "mark_tail_calls.m"
      }
#line 360 "mark_tail_calls.m"
    return hlds__mark_tail_calls__succeeded;
#line 360 "mark_tail_calls.m"
  }
#line 360 "mark_tail_calls.m"
}

#line 63 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_calls_info_0_0(
#line 63 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 63 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 63 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
#line 63 "mark_tail_calls.m"
{
#line 63 "mark_tail_calls.m"
  {
#line 63 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 63 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastX_18 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
#line 63 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastY_19 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

#line 63 "mark_tail_calls.m"
    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_18 == hlds__mark_tail_calls__CastY_19);
#line 63 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 1398 "hlds.mark_tail_calls.c"
      *hlds__mark_tail_calls__HeadVar__1_1 = (MR_Integer) 0;
#line 63 "mark_tail_calls.m"
    else
#line 63 "mark_tail_calls.m"
      {
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
#line 63 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 2)));
#line 63 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 3)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 4)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_14_14;
#line 63 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_25_25 = (MR_Integer) hlds__mark_tail_calls__V_4_4;
#line 63 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_26_26 = (MR_Integer) hlds__mark_tail_calls__V_9_9;

#line 63 "mark_tail_calls.m"
        {
#line 63 "mark_tail_calls.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_14_14, hlds__mark_tail_calls__V_25_25, hlds__mark_tail_calls__V_26_26);
        }
#line 1436 "hlds.mark_tail_calls.c"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_14_14 == (MR_Integer) 0);
#line 63 "mark_tail_calls.m"
        hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 63 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_14_14;
#line 63 "mark_tail_calls.m"
        else
#line 63 "mark_tail_calls.m"
          {
#line 63 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_15_15;

#line 63 "mark_tail_calls.m"
            {
#line 63 "mark_tail_calls.m"
              hlds__hlds_module____Compare____module_info_0_0(&hlds__mark_tail_calls__V_15_15, hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_10_10);
            }
#line 1456 "hlds.mark_tail_calls.c"
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_15_15 == (MR_Integer) 0);
#line 63 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 63 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
              *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_15_15;
#line 63 "mark_tail_calls.m"
            else
#line 63 "mark_tail_calls.m"
              {
#line 63 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__V_16_16;

#line 63 "mark_tail_calls.m"
                {
#line 63 "mark_tail_calls.m"
                  hlds__hlds_pred____Compare____pred_id_0_0(&hlds__mark_tail_calls__V_16_16, hlds__mark_tail_calls__V_6_6, hlds__mark_tail_calls__V_11_11);
                }
#line 1476 "hlds.mark_tail_calls.c"
                hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_16_16 == (MR_Integer) 0);
#line 63 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 63 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
                  *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_16_16;
#line 63 "mark_tail_calls.m"
                else
#line 63 "mark_tail_calls.m"
                  {
#line 63 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__V_17_17;

#line 63 "mark_tail_calls.m"
                    {
#line 63 "mark_tail_calls.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__mark_tail_calls__V_17_17, hlds__mark_tail_calls__V_7_7, hlds__mark_tail_calls__V_12_12);
                    }
#line 1496 "hlds.mark_tail_calls.c"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_17_17 == (MR_Integer) 0);
#line 63 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = !(hlds__mark_tail_calls__succeeded);
#line 63 "mark_tail_calls.m"
                    if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__V_17_17;
#line 63 "mark_tail_calls.m"
                    else
#line 63 "mark_tail_calls.m"
                      {
#line 63 "mark_tail_calls.m"
                        {
#line 63 "mark_tail_calls.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, hlds__mark_tail_calls__HeadVar__1_1, ((MR_Box) (hlds__mark_tail_calls__V_8_8)), ((MR_Box) (hlds__mark_tail_calls__V_13_13)));
#line 63 "mark_tail_calls.m"
                          return;
                        }
#line 63 "mark_tail_calls.m"
                      }
#line 63 "mark_tail_calls.m"
                  }
#line 63 "mark_tail_calls.m"
              }
#line 63 "mark_tail_calls.m"
          }
#line 63 "mark_tail_calls.m"
      }
#line 63 "mark_tail_calls.m"
  }
#line 63 "mark_tail_calls.m"
}

#line 63 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_calls_info_0_0(
#line 63 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 63 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
#line 63 "mark_tail_calls.m"
{
#line 63 "mark_tail_calls.m"
  {
#line 63 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 63 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastX_13 = (MR_Integer) hlds__mark_tail_calls__HeadVar__1_1;
#line 63 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__CastY_14 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;

#line 63 "mark_tail_calls.m"
    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CastX_13 == hlds__mark_tail_calls__CastY_14);
#line 63 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
      hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 63 "mark_tail_calls.m"
    else
#line 63 "mark_tail_calls.m"
      {
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__TypeCtorInfo_18_18;
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 2)));
#line 63 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 3)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 4)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 2)));
#line 63 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 3)));
#line 63 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 4)));

#line 1581 "hlds.mark_tail_calls.c"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_3_3 == hlds__mark_tail_calls__V_8_8);
#line 63 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
          {
#line 1587 "hlds.mark_tail_calls.c"
            {
#line 1589 "hlds.mark_tail_calls.c"
              hlds__mark_tail_calls__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__mark_tail_calls__V_4_4, hlds__mark_tail_calls__V_9_9);
            }
#line 63 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
              {
#line 1596 "hlds.mark_tail_calls.c"
                {
#line 1598 "hlds.mark_tail_calls.c"
                  hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__mark_tail_calls__V_5_5, hlds__mark_tail_calls__V_10_10);
                }
#line 63 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
                  {
#line 1605 "hlds.mark_tail_calls.c"
                    hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__V_6_6 == hlds__mark_tail_calls__V_11_11);
#line 63 "mark_tail_calls.m"
                    if (hlds__mark_tail_calls__succeeded)
#line 63 "mark_tail_calls.m"
                      {
#line 1611 "hlds.mark_tail_calls.c"
                        hlds__mark_tail_calls__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1613 "hlds.mark_tail_calls.c"
                        {
#line 1615 "hlds.mark_tail_calls.c"
                          return hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_18_18, ((MR_Box) (hlds__mark_tail_calls__V_7_7)), ((MR_Box) (hlds__mark_tail_calls__V_12_12)));
                        }
#line 63 "mark_tail_calls.m"
                      }
#line 63 "mark_tail_calls.m"
                  }
#line 63 "mark_tail_calls.m"
              }
#line 63 "mark_tail_calls.m"
          }
#line 63 "mark_tail_calls.m"
      }
#line 63 "mark_tail_calls.m"
    return hlds__mark_tail_calls__succeeded;
#line 63 "mark_tail_calls.m"
  }
#line 63 "mark_tail_calls.m"
}

#line 72 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls____Compare____found_tail_calls_0_0(
#line 72 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__1_1,
#line 72 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 72 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3)
#line 72 "mark_tail_calls.m"
{
#line 72 "mark_tail_calls.m"
  {
#line 72 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 72 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar1_4 = (MR_Integer) hlds__mark_tail_calls__HeadVar__2_2;
#line 72 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__Cast_HeadVar2_5 = (MR_Integer) hlds__mark_tail_calls__HeadVar__3_3;

#line 72 "mark_tail_calls.m"
    {
#line 72 "mark_tail_calls.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Cast_HeadVar1_4, hlds__mark_tail_calls__Cast_HeadVar2_5);
#line 72 "mark_tail_calls.m"
      return;
    }
#line 72 "mark_tail_calls.m"
  }
#line 72 "mark_tail_calls.m"
}

#line 72 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_tail_calls_0_0(
#line 72 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_1,
#line 72 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
#line 72 "mark_tail_calls.m"
{
#line 1676 "hlds.mark_tail_calls.c"
  {
#line 1678 "hlds.mark_tail_calls.c"
    MR_bool hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__2_1 == hlds__mark_tail_calls__HeadVar__2_2);

#line 1681 "hlds.mark_tail_calls.c"
    return hlds__mark_tail_calls__succeeded;
#line 1683 "hlds.mark_tail_calls.c"
  }
#line 72 "mark_tail_calls.m"
}

#line 409 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__report_nontailcall_warning_4_p_0(
#line 409 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Globals_5,
#line 409 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Warning_6)
#line 409 "mark_tail_calls.m"
{
#line 412 "mark_tail_calls.m"
  {
#line 412 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_6, (MR_Integer) 0)));
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_6, (MR_Integer) 1)));
#line 412 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_6, (MR_Integer) 2)));
#line 412 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_6, (MR_Integer) 3)));
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Warning_6, (MR_Integer) 4)));
#line 412 "mark_tail_calls.m"
    MR_String hlds__mark_tail_calls__Name_13;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__SimpleCallId_14;
#line 412 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__ProcNumber0_15;
#line 412 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__ProcNumber_16;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Pieces_17;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Msg_18;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Spec_19;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_24_24;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_28_28;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_29_29;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_30_30;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_33_33;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_34_34;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_46_46;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_47_47;
#line 412 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_51_51;
#line 424 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls___NumWarnings_20;
#line 424 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls___NumErrors_21;

#line 414 "mark_tail_calls.m"
    {
#line 414 "mark_tail_calls.m"
      hlds__mark_tail_calls__Name_13 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__mark_tail_calls__SymName_9);
    }
#line 415 "mark_tail_calls.m"
    {
#line 415 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 415 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_24_24, 0) = ((MR_Box) (hlds__mark_tail_calls__Name_13));
#line 415 "mark_tail_calls.m"
    }
#line 415 "mark_tail_calls.m"
    {
#line 415 "mark_tail_calls.m"
      hlds__mark_tail_calls__SimpleCallId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 415 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_14, 0) = ((MR_Box) (hlds__mark_tail_calls__PredOrFunc_8));
#line 415 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_14, 1) = ((MR_Box) (hlds__mark_tail_calls__V_24_24));
#line 415 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__SimpleCallId_14, 2) = ((MR_Box) (hlds__mark_tail_calls__Arity_10));
#line 415 "mark_tail_calls.m"
    }
#line 416 "mark_tail_calls.m"
    {
#line 416 "mark_tail_calls.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__mark_tail_calls__ProcId_11, &hlds__mark_tail_calls__ProcNumber0_15);
    }
#line 417 "mark_tail_calls.m"
    hlds__mark_tail_calls__ProcNumber_16 = (hlds__mark_tail_calls__ProcNumber0_15 + (MR_Integer) 1);
#line 419 "mark_tail_calls.m"
    {
#line 419 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 419 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_29_29, 1) = ((MR_Box) (hlds__mark_tail_calls__ProcNumber_16));
#line 419 "mark_tail_calls.m"
    }
#line 420 "mark_tail_calls.m"
    {
#line 420 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 420 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__V_34_34, 1) = ((MR_Box) (hlds__mark_tail_calls__SimpleCallId_14));
#line 420 "mark_tail_calls.m"
    }
#line 420 "mark_tail_calls.m"
    {
#line 420 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_33_33, 0) = ((MR_Box) (hlds__mark_tail_calls__V_34_34));
#line 420 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[6])));
#line 420 "mark_tail_calls.m"
    }
#line 420 "mark_tail_calls.m"
    {
#line 420 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[8])));
#line 420 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_30_30, 1) = ((MR_Box) (hlds__mark_tail_calls__V_33_33));
#line 420 "mark_tail_calls.m"
    }
#line 419 "mark_tail_calls.m"
    {
#line 419 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_28_28, 0) = ((MR_Box) (hlds__mark_tail_calls__V_29_29));
#line 419 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_28_28, 1) = ((MR_Box) (hlds__mark_tail_calls__V_30_30));
#line 419 "mark_tail_calls.m"
    }
#line 419 "mark_tail_calls.m"
    {
#line 419 "mark_tail_calls.m"
      hlds__mark_tail_calls__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[7])));
#line 419 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__Pieces_17, 1) = ((MR_Box) (hlds__mark_tail_calls__V_28_28));
#line 419 "mark_tail_calls.m"
    }
#line 422 "mark_tail_calls.m"
    {
#line 422 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 422 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_47_47, 0) = ((MR_Box) (hlds__mark_tail_calls__Pieces_17));
#line 422 "mark_tail_calls.m"
    }
#line 422 "mark_tail_calls.m"
    {
#line 422 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_46_46, 0) = ((MR_Box) (hlds__mark_tail_calls__V_47_47));
#line 422 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "mark_tail_calls.m"
    }
#line 422 "mark_tail_calls.m"
    {
#line 422 "mark_tail_calls.m"
      hlds__mark_tail_calls__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_18, 0) = ((MR_Box) (hlds__mark_tail_calls__Context_12));
#line 422 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Msg_18, 1) = ((MR_Box) (hlds__mark_tail_calls__V_46_46));
#line 422 "mark_tail_calls.m"
    }
#line 423 "mark_tail_calls.m"
    {
#line 423 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_51_51, 0) = ((MR_Box) (hlds__mark_tail_calls__Msg_18));
#line 423 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "mark_tail_calls.m"
    }
#line 423 "mark_tail_calls.m"
    {
#line 423 "mark_tail_calls.m"
      hlds__mark_tail_calls__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 423 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 423 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 423 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Spec_19, 2) = ((MR_Box) (hlds__mark_tail_calls__V_51_51));
#line 423 "mark_tail_calls.m"
    }
#line 424 "mark_tail_calls.m"
    {
#line 424 "mark_tail_calls.m"
      parse_tree__error_util__write_error_spec_8_p_0(hlds__mark_tail_calls__Spec_19, hlds__mark_tail_calls__Globals_5, (MR_Integer) 0, &hlds__mark_tail_calls___NumWarnings_20, (MR_Integer) 0, &hlds__mark_tail_calls___NumErrors_21);
    }
#line 412 "mark_tail_calls.m"
  }
#line 409 "mark_tail_calls.m"
}

#line 389 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_1(
#line 389 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 389 "mark_tail_calls.m"
{
#line 389 "mark_tail_calls.m"
  {
#line 389 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 389 "mark_tail_calls.m"
    {
#line 393 "mark_tail_calls.m"
      MR_Word hlds__mark_tail_calls___UnifyContext_19;
#line 399 "mark_tail_calls.m"
      MR_Word hlds__mark_tail_calls__V_24_24;

#line 392 "mark_tail_calls.m"
      (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12, (MR_Integer) 0)));
#line 392 "mark_tail_calls.m"
      (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12, (MR_Integer) 1)));
#line 393 "mark_tail_calls.m"
      (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13)) == (MR_mktag((MR_Integer) 2)));
#line 393 "mark_tail_calls.m"
      if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 393 "mark_tail_calls.m"
        {
#line 393 "mark_tail_calls.m"
          {
#line 393 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 0)));
#line 393 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 1)));
#line 393 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 2)));
#line 393 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 3)));
#line 393 "mark_tail_calls.m"
            hlds__mark_tail_calls___UnifyContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 4)));
#line 393 "mark_tail_calls.m"
            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalExpr_13, (MR_Integer) 5)));
#line 393 "mark_tail_calls.m"
          }
#line 389 "mark_tail_calls.m"
          {
#line 396 "mark_tail_calls.m"
            {
#line 396 "mark_tail_calls.m"
              (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallPredId_15, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredId_6);
            }
#line 389 "mark_tail_calls.m"
            if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 389 "mark_tail_calls.m"
              {
#line 397 "mark_tail_calls.m"
                (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallProcId_16 == (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__ProcId_7);
#line 389 "mark_tail_calls.m"
                if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 389 "mark_tail_calls.m"
                  {
#line 398 "mark_tail_calls.m"
                    (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Builtin_18 == (MR_Integer) 2);
#line 389 "mark_tail_calls.m"
                    if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 389 "mark_tail_calls.m"
                      {
#line 399 "mark_tail_calls.m"
                        hlds__mark_tail_calls__V_24_24 = (MR_Integer) 10;
#line 399 "mark_tail_calls.m"
                        {
#line 399 "mark_tail_calls.m"
                          (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = hlds__hlds_goal__goal_has_feature_2_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12, hlds__mark_tail_calls__V_24_24);
                        }
#line 399 "mark_tail_calls.m"
                        (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = !((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded);
#line 389 "mark_tail_calls.m"
                        if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 389 "mark_tail_calls.m"
                          {
#line 401 "mark_tail_calls.m"
                            {
#line 401 "mark_tail_calls.m"
                              (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredInfo_8);
                            }
#line 401 "mark_tail_calls.m"
                            (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded = !((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded);
#line 389 "mark_tail_calls.m"
                            if ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__succeeded)
#line 389 "mark_tail_calls.m"
                              {
#line 403 "mark_tail_calls.m"
                                {
#line 403 "mark_tail_calls.m"
                                  (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredOrFunc_21 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredInfo_8);
                                }
#line 1997 "hlds.mark_tail_calls.c"
                                (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__TypeInfo_25_25 = (MR_Word) &hlds__mark_tail_calls_scalar_common_1[0];
#line 404 "mark_tail_calls.m"
                                {
#line 404 "mark_tail_calls.m"
                                  mercury__list__length_2_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__TypeInfo_25_25, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallArgs_17, &(hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Arity_22);
                                }
#line 405 "mark_tail_calls.m"
                                {
#line 405 "mark_tail_calls.m"
                                  (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoalInfo_14);
                                }
#line 406 "mark_tail_calls.m"
                                {
#line 406 "mark_tail_calls.m"
                                  MR_Word base;
#line 406 "mark_tail_calls.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 406 "mark_tail_calls.m"
                                  *((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Warning_10) = base;
#line 406 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredOrFunc_21));
#line 406 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SymName_20));
#line 406 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Arity_22));
#line 406 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__CallProcId_16));
#line 406 "mark_tail_calls.m"
                                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Context_23));
#line 406 "mark_tail_calls.m"
                                }
#line 406 "mark_tail_calls.m"
                                {
#line 406 "mark_tail_calls.m"
                                  ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont)((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont_env_ptr);
#line 406 "mark_tail_calls.m"
                                  return;
                                }
#line 389 "mark_tail_calls.m"
                              }
#line 389 "mark_tail_calls.m"
                          }
#line 389 "mark_tail_calls.m"
                      }
#line 389 "mark_tail_calls.m"
                  }
#line 389 "mark_tail_calls.m"
              }
#line 389 "mark_tail_calls.m"
          }
#line 393 "mark_tail_calls.m"
        }
#line 389 "mark_tail_calls.m"
    }
#line 389 "mark_tail_calls.m"
  }
#line 389 "mark_tail_calls.m"
}

#line 386 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_proc_5_p_0(
#line 386 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredId_6,
#line 386 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__ProcId_7,
#line 386 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredInfo_8,
#line 386 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ProcInfo_9,
#line 386 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Warning_10,
#line 386 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 386 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr)
#line 386 "mark_tail_calls.m"
{
#line 386 "mark_tail_calls.m"
  {
#line 386 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0_s hlds__mark_tail_calls__env;

#line 386 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredId_6 = hlds__mark_tail_calls__PredId_6;
#line 386 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__ProcId_7 = hlds__mark_tail_calls__ProcId_7;
#line 386 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__PredInfo_8 = hlds__mark_tail_calls__PredInfo_8;
#line 386 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__Warning_10 = hlds__mark_tail_calls__Warning_10;
#line 386 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont = hlds__mark_tail_calls__cont;
#line 386 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__cont_env_ptr = hlds__mark_tail_calls__cont_env_ptr;
#line 389 "mark_tail_calls.m"
    {
#line 389 "mark_tail_calls.m"
      MR_Word hlds__mark_tail_calls__Goal_11;

#line 390 "mark_tail_calls.m"
      {
#line 390 "mark_tail_calls.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_tail_calls__ProcInfo_9, &hlds__mark_tail_calls__Goal_11);
      }
#line 391 "mark_tail_calls.m"
      {
#line 391 "mark_tail_calls.m"
        hlds__goal_util__goal_contains_goal_2_p_0(hlds__mark_tail_calls__Goal_11, &(hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_env_0__SubGoal_12, hlds__mark_tail_calls__nontailcall_in_proc_5_p_0_1, &hlds__mark_tail_calls__env);
      }
#line 389 "mark_tail_calls.m"
    }
#line 386 "mark_tail_calls.m"
  }
#line 386 "mark_tail_calls.m"
}

#line 373 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_2(
#line 373 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 373 "mark_tail_calls.m"
{
#line 373 "mark_tail_calls.m"
  {
#line 373 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 373 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredId_6 = ((MR_Word) (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv0_PredId_6);
#line 373 "mark_tail_calls.m"
    {
#line 373 "mark_tail_calls.m"
      hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_1(hlds__mark_tail_calls__env_ptr);
#line 373 "mark_tail_calls.m"
      return;
    }
#line 373 "mark_tail_calls.m"
  }
#line 373 "mark_tail_calls.m"
}

#line 382 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_4(
#line 382 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 382 "mark_tail_calls.m"
{
#line 382 "mark_tail_calls.m"
  {
#line 382 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 382 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcId_13 = ((MR_Integer) (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv1_ProcId_13);
#line 382 "mark_tail_calls.m"
    {
#line 382 "mark_tail_calls.m"
      hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_3(hlds__mark_tail_calls__env_ptr);
#line 382 "mark_tail_calls.m"
      return;
    }
#line 382 "mark_tail_calls.m"
  }
#line 382 "mark_tail_calls.m"
}

#line 371 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_3(
#line 371 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 371 "mark_tail_calls.m"
{
#line 371 "mark_tail_calls.m"
  {
#line 371 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 383 "mark_tail_calls.m"
    {
#line 383 "mark_tail_calls.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcId_13, &(hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcInfo_14);
    }
#line 384 "mark_tail_calls.m"
    {
#line 384 "mark_tail_calls.m"
      hlds__mark_tail_calls__nontailcall_in_proc_5_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredId_6, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcId_13, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcInfo_14, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__Warning_4, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont_env_ptr);
#line 384 "mark_tail_calls.m"
      return;
    }
#line 371 "mark_tail_calls.m"
  }
#line 371 "mark_tail_calls.m"
}

#line 371 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_1(
#line 371 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 371 "mark_tail_calls.m"
{
#line 371 "mark_tail_calls.m"
  {
#line 371 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 380 "mark_tail_calls.m"
    {
#line 380 "mark_tail_calls.m"
      hlds__hlds_module__module_info_pred_info_3_p_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ModuleInfo_3, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredId_6, &(hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11);
    }
#line 381 "mark_tail_calls.m"
    {
#line 381 "mark_tail_calls.m"
      (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcIds_12 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__PredInfo_11);
    }
#line 2218 "hlds.mark_tail_calls.c"
    (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__TypeCtorInfo_11_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 382 "mark_tail_calls.m"
    {
#line 382 "mark_tail_calls.m"
      mercury__list__member_2_p_1((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__TypeCtorInfo_11_15, &(hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv1_ProcId_13, (hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ProcIds_12, hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_4, hlds__mark_tail_calls__env_ptr);
    }
#line 371 "mark_tail_calls.m"
  }
#line 371 "mark_tail_calls.m"
}

#line 369 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0(
#line 369 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_3,
#line 369 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Warning_4,
#line 369 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 369 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr)
#line 369 "mark_tail_calls.m"
{
#line 369 "mark_tail_calls.m"
  {
#line 369 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0_s hlds__mark_tail_calls__env;

#line 369 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ModuleInfo_3 = hlds__mark_tail_calls__ModuleInfo_3;
#line 369 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__Warning_4 = hlds__mark_tail_calls__Warning_4;
#line 369 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont = hlds__mark_tail_calls__cont;
#line 369 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__cont_env_ptr = hlds__mark_tail_calls__cont_env_ptr;
#line 371 "mark_tail_calls.m"
    {
#line 371 "mark_tail_calls.m"
      MR_bool hlds__mark_tail_calls__succeeded;
#line 371 "mark_tail_calls.m"
      MR_Word hlds__mark_tail_calls__PredIds_5;

#line 372 "mark_tail_calls.m"
      {
#line 372 "mark_tail_calls.m"
        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0((hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__ModuleInfo_3, &hlds__mark_tail_calls__PredIds_5);
      }
#line 373 "mark_tail_calls.m"
      {
#line 373 "mark_tail_calls.m"
        mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &(hlds__mark_tail_calls__env).hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_env_0__conv0_PredId_6, hlds__mark_tail_calls__PredIds_5, hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0_2, &hlds__mark_tail_calls__env);
      }
#line 371 "mark_tail_calls.m"
    }
#line 369 "mark_tail_calls.m"
  }
#line 369 "mark_tail_calls.m"
}

#line 330 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__match_output_args_2_p_0(
#line 330 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 330 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2)
#line 330 "mark_tail_calls.m"
{
#line 333 "mark_tail_calls.m"
  while (MR_TRUE)
#line 333 "mark_tail_calls.m"
    {
#line 333 "mark_tail_calls.m"
      /* tailcall optimized into a loop */
#line 333 "mark_tail_calls.m"
      {
#line 333 "mark_tail_calls.m"
        MR_bool hlds__mark_tail_calls__succeeded;

#line 333 "mark_tail_calls.m"
        if ((hlds__mark_tail_calls__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "mark_tail_calls.m"
          {
#line 333 "mark_tail_calls.m"
            if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "mark_tail_calls.m"
              {
#line 333 "mark_tail_calls.m"
              }
#line 333 "mark_tail_calls.m"
            else
#line 334 "mark_tail_calls.m"
              {
#line 335 "mark_tail_calls.m"
                {
#line 335 "mark_tail_calls.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.match_output_args\'/2", (MR_String) "length mismatch");
                }
#line 334 "mark_tail_calls.m"
              }
#line 333 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 333 "mark_tail_calls.m"
          }
#line 333 "mark_tail_calls.m"
        else
#line 333 "mark_tail_calls.m"
          {
#line 333 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 1)));
#line 333 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__1_1, (MR_Integer) 0)));

#line 333 "mark_tail_calls.m"
            if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "mark_tail_calls.m"
              {
#line 337 "mark_tail_calls.m"
                {
#line 337 "mark_tail_calls.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.match_output_args\'/2", (MR_String) "length mismatch");
                }
#line 336 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 336 "mark_tail_calls.m"
              }
#line 333 "mark_tail_calls.m"
            else
#line 338 "mark_tail_calls.m"
              {
#line 338 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__ArgVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 338 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__ArgVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));

#line 341 "mark_tail_calls.m"
                if ((hlds__mark_tail_calls__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "mark_tail_calls.m"
                  hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 341 "mark_tail_calls.m"
                else
#line 342 "mark_tail_calls.m"
                  {
#line 342 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__V_19_19, (MR_Integer) 0)));

#line 342 "mark_tail_calls.m"
                    {
#line 342 "mark_tail_calls.m"
                      hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], ((MR_Box) (hlds__mark_tail_calls__ArgVar_15)), ((MR_Box) (hlds__mark_tail_calls__V_17_17)));
                    }
#line 342 "mark_tail_calls.m"
                  }
#line 338 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 344 "mark_tail_calls.m"
                  {
#line 344 "mark_tail_calls.m"
                    /* direct tailcall eliminated */
#line 344 "mark_tail_calls.m"
                    {
#line 344 "mark_tail_calls.m"
                      MR_Word hlds__mark_tail_calls__HeadVar__1__tmp_copy_1 = hlds__mark_tail_calls__V_18_18;
#line 344 "mark_tail_calls.m"
                      MR_Word hlds__mark_tail_calls__HeadVar__2__tmp_copy_2 = hlds__mark_tail_calls__ArgVars_16;

#line 344 "mark_tail_calls.m"
                      hlds__mark_tail_calls__HeadVar__2_2 = hlds__mark_tail_calls__HeadVar__2__tmp_copy_2;
#line 344 "mark_tail_calls.m"
                      hlds__mark_tail_calls__HeadVar__1_1 = hlds__mark_tail_calls__HeadVar__1__tmp_copy_1;
#line 344 "mark_tail_calls.m"
                    }
#line 344 "mark_tail_calls.m"
                    continue;
#line 344 "mark_tail_calls.m"
                  }
#line 338 "mark_tail_calls.m"
              }
#line 333 "mark_tail_calls.m"
          }
#line 333 "mark_tail_calls.m"
        return hlds__mark_tail_calls__succeeded;
#line 333 "mark_tail_calls.m"
      }
#line 333 "mark_tail_calls.m"
      break;
#line 333 "mark_tail_calls.m"
    }
#line 330 "mark_tail_calls.m"
}

#line 309 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_conj_7_p_0(
#line 309 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 309 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Outputs0_2,
#line 309 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__3_3,
#line 309 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
#line 309 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5,
#line 309 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6,
#line 309 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7)
#line 309 "mark_tail_calls.m"
{
#line 314 "mark_tail_calls.m"
  {
#line 314 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 314 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "mark_tail_calls.m"
      {
#line 314 "mark_tail_calls.m"
        {
#line 314 "mark_tail_calls.m"
          MR_Word base;
#line 314 "mark_tail_calls.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 314 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__3_3 = base;
#line 314 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs0_2));
#line 314 "mark_tail_calls.m"
        }
#line 315 "mark_tail_calls.m"
        *hlds__mark_tail_calls__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6;
#line 314 "mark_tail_calls.m"
      }
#line 314 "mark_tail_calls.m"
    else
#line 317 "mark_tail_calls.m"
      {
#line 317 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__RevGoal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 0)));
#line 317 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__RevGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 1)));
#line 317 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__RevGoal_18;
#line 317 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__RevGoals_19;
#line 317 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__MaybeOutputs1_21;
#line 317 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_25_25;

#line 318 "mark_tail_calls.m"
        {
#line 318 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Outputs0_2, &hlds__mark_tail_calls__MaybeOutputs1_21, hlds__mark_tail_calls__RevGoal0_16, &hlds__mark_tail_calls__RevGoal_18, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_6, &hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_25_25);
        }
#line 324 "mark_tail_calls.m"
        if ((hlds__mark_tail_calls__MaybeOutputs1_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "mark_tail_calls.m"
          {
#line 326 "mark_tail_calls.m"
            *hlds__mark_tail_calls__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "mark_tail_calls.m"
            hlds__mark_tail_calls__RevGoals_19 = hlds__mark_tail_calls__RevGoals0_17;
#line 325 "mark_tail_calls.m"
            *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_25_25;
#line 325 "mark_tail_calls.m"
          }
#line 324 "mark_tail_calls.m"
        else
#line 321 "mark_tail_calls.m"
          {
#line 321 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__Outputs1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeOutputs1_21, (MR_Integer) 0)));

#line 322 "mark_tail_calls.m"
            {
#line 322 "mark_tail_calls.m"
              hlds__mark_tail_calls__mark_tail_calls_in_conj_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__Outputs1_22, hlds__mark_tail_calls__HeadVar__3_3, hlds__mark_tail_calls__RevGoals0_17, &hlds__mark_tail_calls__RevGoals_19, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_25_25, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_7);
            }
#line 321 "mark_tail_calls.m"
          }
#line 317 "mark_tail_calls.m"
        {
#line 317 "mark_tail_calls.m"
          MR_Word base;
#line 317 "mark_tail_calls.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__5_5 = base;
#line 317 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__RevGoal_18));
#line 317 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__RevGoals_19));
#line 317 "mark_tail_calls.m"
        }
#line 317 "mark_tail_calls.m"
      }
#line 314 "mark_tail_calls.m"
  }
#line 309 "mark_tail_calls.m"
}

#line 297 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_cases_6_p_0(
#line 297 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 297 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 297 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 297 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4,
#line 297 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5,
#line 297 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6)
#line 297 "mark_tail_calls.m"
{
#line 301 "mark_tail_calls.m"
  {
#line 301 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 301 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "mark_tail_calls.m"
      {
#line 301 "mark_tail_calls.m"
        *hlds__mark_tail_calls__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5;
#line 301 "mark_tail_calls.m"
      }
#line 301 "mark_tail_calls.m"
    else
#line 303 "mark_tail_calls.m"
      {
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Case_16;
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Cases_17;
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_14, (MR_Integer) 0)));
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_14, (MR_Integer) 1)));
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case0_14, (MR_Integer) 2)));
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goal_23;
#line 303 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_26_26;
#line 305 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_22_22;

#line 305 "mark_tail_calls.m"
        {
#line 305 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, &hlds__mark_tail_calls__V_22_22, hlds__mark_tail_calls__Goal0_21, &hlds__mark_tail_calls__Goal_23, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5, &hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_26_26);
        }
#line 306 "mark_tail_calls.m"
        {
#line 306 "mark_tail_calls.m"
          hlds__mark_tail_calls__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 306 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case_16, 0) = ((MR_Box) (hlds__mark_tail_calls__MainConsId_19));
#line 306 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case_16, 1) = ((MR_Box) (hlds__mark_tail_calls__OtherConsIds_20));
#line 306 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Case_16, 2) = ((MR_Box) (hlds__mark_tail_calls__Goal_23));
#line 306 "mark_tail_calls.m"
        }
#line 307 "mark_tail_calls.m"
        {
#line 307 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_cases_6_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, hlds__mark_tail_calls__Cases0_15, &hlds__mark_tail_calls__Cases_17, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_26_26, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6);
        }
#line 302 "mark_tail_calls.m"
        {
#line 302 "mark_tail_calls.m"
          MR_Word base;
#line 302 "mark_tail_calls.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__4_4 = base;
#line 302 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Case_16));
#line 302 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Cases_17));
#line 302 "mark_tail_calls.m"
        }
#line 303 "mark_tail_calls.m"
      }
#line 301 "mark_tail_calls.m"
  }
#line 297 "mark_tail_calls.m"
}

#line 287 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goals_6_p_0(
#line 287 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__1_1,
#line 287 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 287 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 287 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4,
#line 287 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5,
#line 287 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6)
#line 287 "mark_tail_calls.m"
{
#line 291 "mark_tail_calls.m"
  {
#line 291 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 291 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "mark_tail_calls.m"
      {
#line 291 "mark_tail_calls.m"
        *hlds__mark_tail_calls__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 291 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5;
#line 291 "mark_tail_calls.m"
      }
#line 291 "mark_tail_calls.m"
    else
#line 293 "mark_tail_calls.m"
      {
#line 293 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 293 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goal_16;
#line 293 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Goals_17;
#line 293 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_22_22;
#line 294 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_19_19;

#line 294 "mark_tail_calls.m"
        {
#line 294 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, &hlds__mark_tail_calls__V_19_19, hlds__mark_tail_calls__Goal0_14, &hlds__mark_tail_calls__Goal_16, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_5, &hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_22_22);
        }
#line 295 "mark_tail_calls.m"
        {
#line 295 "mark_tail_calls.m"
          hlds__mark_tail_calls__mark_tail_calls_in_goals_6_p_0(hlds__mark_tail_calls__HeadVar__1_1, hlds__mark_tail_calls__HeadVar__2_2, hlds__mark_tail_calls__Goals0_15, &hlds__mark_tail_calls__Goals_17, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_22_22, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_6);
        }
#line 292 "mark_tail_calls.m"
        {
#line 292 "mark_tail_calls.m"
          MR_Word base;
#line 292 "mark_tail_calls.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "mark_tail_calls.m"
          *hlds__mark_tail_calls__HeadVar__4_4 = base;
#line 292 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Goal_16));
#line 292 "mark_tail_calls.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__Goals_17));
#line 292 "mark_tail_calls.m"
        }
#line 293 "mark_tail_calls.m"
      }
#line 291 "mark_tail_calls.m"
  }
#line 287 "mark_tail_calls.m"
}

#line 272 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
#line 272 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ToVar_5,
#line 272 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__FromVar_6,
#line 272 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 272 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__4_4)
#line 272 "mark_tail_calls.m"
{
#line 276 "mark_tail_calls.m"
  {
#line 276 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 276 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__MaybeVar0_7;
#line 276 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__MaybeVars0_8;
#line 276 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__MaybeVar_9;
#line 276 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__MaybeVars_10;

#line 276 "mark_tail_calls.m"
    if (hlds__mark_tail_calls__succeeded)
#line 276 "mark_tail_calls.m"
      {
#line 276 "mark_tail_calls.m"
        hlds__mark_tail_calls__MaybeVar0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "mark_tail_calls.m"
        hlds__mark_tail_calls__MaybeVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 281 "mark_tail_calls.m"
        if ((hlds__mark_tail_calls__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "mark_tail_calls.m"
          {
#line 283 "mark_tail_calls.m"
            hlds__mark_tail_calls__MaybeVar_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 284 "mark_tail_calls.m"
            {
#line 284 "mark_tail_calls.m"
              hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_5, hlds__mark_tail_calls__FromVar_6, hlds__mark_tail_calls__MaybeVars0_8, &hlds__mark_tail_calls__MaybeVars_10);
            }
#line 282 "mark_tail_calls.m"
          }
#line 281 "mark_tail_calls.m"
        else
#line 278 "mark_tail_calls.m"
          {
#line 278 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeVar0_7, (MR_Integer) 0)));

#line 278 "mark_tail_calls.m"
            {
#line 278 "mark_tail_calls.m"
              hlds__mark_tail_calls__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_tail_calls_scalar_common_1[0], ((MR_Box) (hlds__mark_tail_calls__ToVar_5)), ((MR_Box) (hlds__mark_tail_calls__V_11_11)));
            }
#line 278 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 278 "mark_tail_calls.m"
              {
#line 280 "mark_tail_calls.m"
                hlds__mark_tail_calls__MaybeVars_10 = hlds__mark_tail_calls__MaybeVars0_8;
#line 279 "mark_tail_calls.m"
                {
#line 279 "mark_tail_calls.m"
                  hlds__mark_tail_calls__MaybeVar_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 279 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__MaybeVar_9, 0) = ((MR_Box) (hlds__mark_tail_calls__FromVar_6));
#line 279 "mark_tail_calls.m"
                }
#line 279 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 278 "mark_tail_calls.m"
              }
#line 278 "mark_tail_calls.m"
          }
#line 276 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 276 "mark_tail_calls.m"
          {
#line 276 "mark_tail_calls.m"
            {
#line 276 "mark_tail_calls.m"
              MR_Word base;
#line 276 "mark_tail_calls.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "mark_tail_calls.m"
              *hlds__mark_tail_calls__HeadVar__4_4 = base;
#line 276 "mark_tail_calls.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__MaybeVar_9));
#line 276 "mark_tail_calls.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__MaybeVars_10));
#line 276 "mark_tail_calls.m"
            }
#line 276 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 276 "mark_tail_calls.m"
          }
#line 276 "mark_tail_calls.m"
      }
#line 276 "mark_tail_calls.m"
    return hlds__mark_tail_calls__succeeded;
#line 276 "mark_tail_calls.m"
  }
#line 272 "mark_tail_calls.m"
}

#line 168 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(
#line 168 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Info_8,
#line 168 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Outputs0_9,
#line 168 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__MaybeOutputs_10,
#line 168 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Goal0_11,
#line 168 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__Goal_12,
#line 168 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88,
#line 168 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89)
#line 168 "mark_tail_calls.m"
{
#line 174 "mark_tail_calls.m"
  {
#line 174 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 174 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_11, (MR_Integer) 0)));
#line 174 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Goal0_11, (MR_Integer) 1)));

#line 184 "mark_tail_calls.m"
    if (((MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_14)) == (MR_mktag((MR_Integer) 2))))
#line 212 "mark_tail_calls.m"
      {
#line 212 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__CallPredId_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)));
#line 212 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__CallProcId_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 212 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));
#line 212 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Builtin_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 3)));
#line 212 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__PredId_65;
#line 212 "mark_tail_calls.m"
        MR_Integer hlds__mark_tail_calls__ProcId_66;
#line 211 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls___UnifyContext_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 4)));
#line 211 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls___SymName_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 5)));
#line 214 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_112_112;
#line 214 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_113_113;
#line 214 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__V_115_115;

#line 213 "mark_tail_calls.m"
        *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 214 "mark_tail_calls.m"
        hlds__mark_tail_calls__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
#line 214 "mark_tail_calls.m"
        hlds__mark_tail_calls__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
#line 214 "mark_tail_calls.m"
        hlds__mark_tail_calls__PredId_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
#line 214 "mark_tail_calls.m"
        hlds__mark_tail_calls__ProcId_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
#line 214 "mark_tail_calls.m"
        hlds__mark_tail_calls__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));
#line 217 "mark_tail_calls.m"
        {
#line 217 "mark_tail_calls.m"
          hlds__mark_tail_calls__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__mark_tail_calls__CallPredId_59, hlds__mark_tail_calls__PredId_65);
        }
#line 217 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 217 "mark_tail_calls.m"
          {
#line 218 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__CallProcId_60 == hlds__mark_tail_calls__ProcId_66);
#line 217 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 217 "mark_tail_calls.m"
              {
#line 219 "mark_tail_calls.m"
                {
#line 219 "mark_tail_calls.m"
                  hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__match_output_args_2_p_0(hlds__mark_tail_calls__Outputs0_9, hlds__mark_tail_calls__Args_61);
                }
#line 217 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 220 "mark_tail_calls.m"
                  hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__Builtin_62 == (MR_Integer) 2);
#line 217 "mark_tail_calls.m"
              }
#line 217 "mark_tail_calls.m"
          }
#line 226 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 222 "mark_tail_calls.m"
          {
#line 222 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__Feature_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
#line 222 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__GoalInfo_68;
#line 222 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
#line 222 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
#line 222 "mark_tail_calls.m"
            MR_Integer hlds__mark_tail_calls__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
#line 222 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));

#line 223 "mark_tail_calls.m"
            {
#line 223 "mark_tail_calls.m"
              hlds__hlds_goal__goal_info_add_feature_3_p_0(hlds__mark_tail_calls__Feature_67, hlds__mark_tail_calls__GoalInfo0_15, &hlds__mark_tail_calls__GoalInfo_68);
            }
#line 224 "mark_tail_calls.m"
            {
#line 224 "mark_tail_calls.m"
              MR_Word base;
#line 224 "mark_tail_calls.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 224 "mark_tail_calls.m"
              *hlds__mark_tail_calls__Goal_12 = base;
#line 224 "mark_tail_calls.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr0_14));
#line 224 "mark_tail_calls.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo_68));
#line 224 "mark_tail_calls.m"
            }
#line 225 "mark_tail_calls.m"
            *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = (MR_Integer) 0;
#line 222 "mark_tail_calls.m"
          }
#line 226 "mark_tail_calls.m"
        else
#line 227 "mark_tail_calls.m"
          {
#line 227 "mark_tail_calls.m"
            *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 227 "mark_tail_calls.m"
            *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 227 "mark_tail_calls.m"
          }
#line 212 "mark_tail_calls.m"
      }
#line 184 "mark_tail_calls.m"
    else
#line 184 "mark_tail_calls.m"
      if (((MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_14)) == (MR_mktag((MR_Integer) 1))))
#line 185 "mark_tail_calls.m"
        {
#line 185 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__LHS_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)));
#line 185 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Unify0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 3)));
#line 185 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__ModuleInfo_36;
#line 185 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__VarTypes_37;
#line 185 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 185 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));
#line 185 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 4)));
#line 187 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_104_104;
#line 187 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_105_105;
#line 187 "mark_tail_calls.m"
          MR_Integer hlds__mark_tail_calls__V_106_106;

#line 186 "mark_tail_calls.m"
          *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 187 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 0)));
#line 187 "mark_tail_calls.m"
          hlds__mark_tail_calls__ModuleInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 1)));
#line 187 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 2)));
#line 187 "mark_tail_calls.m"
          hlds__mark_tail_calls__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 3)));
#line 187 "mark_tail_calls.m"
          hlds__mark_tail_calls__VarTypes_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_8, (MR_Integer) 4)));
#line 189 "mark_tail_calls.m"
          {
#line 189 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(hlds__mark_tail_calls__ModuleInfo_36, hlds__mark_tail_calls__VarTypes_37, hlds__mark_tail_calls__LHS_31);
          }
#line 193 "mark_tail_calls.m"
          if (hlds__mark_tail_calls__succeeded)
#line 192 "mark_tail_calls.m"
            {
#line 192 "mark_tail_calls.m"
              MR_Word base;
#line 192 "mark_tail_calls.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 192 "mark_tail_calls.m"
              *hlds__mark_tail_calls__MaybeOutputs_10 = base;
#line 192 "mark_tail_calls.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs0_9));
#line 192 "mark_tail_calls.m"
            }
#line 193 "mark_tail_calls.m"
          else
#line 201 "mark_tail_calls.m"
            if (((MR_tag((MR_Word) hlds__mark_tail_calls__Unify0_34)) == (MR_mktag((MR_Integer) 2))))
#line 202 "mark_tail_calls.m"
              {
#line 202 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__ToVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_34, (MR_Integer) 0)));
#line 202 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__FromVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_tail_calls__Unify0_34, (MR_Integer) 1)));
#line 205 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__Outputs_58;

#line 203 "mark_tail_calls.m"
                {
#line 203 "mark_tail_calls.m"
                  hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(hlds__mark_tail_calls__ToVar_56, hlds__mark_tail_calls__FromVar_57, hlds__mark_tail_calls__Outputs0_9, &hlds__mark_tail_calls__Outputs_58);
                }
#line 205 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 204 "mark_tail_calls.m"
                  {
#line 204 "mark_tail_calls.m"
                    MR_Word base;
#line 204 "mark_tail_calls.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 204 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__MaybeOutputs_10 = base;
#line 204 "mark_tail_calls.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__Outputs_58));
#line 204 "mark_tail_calls.m"
                  }
#line 205 "mark_tail_calls.m"
                else
#line 206 "mark_tail_calls.m"
                  *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "mark_tail_calls.m"
              }
#line 201 "mark_tail_calls.m"
            else
#line 200 "mark_tail_calls.m"
              *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "mark_tail_calls.m"
          *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 185 "mark_tail_calls.m"
        }
#line 184 "mark_tail_calls.m"
      else
#line 184 "mark_tail_calls.m"
        if (((((MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 230 "mark_tail_calls.m"
          {
#line 230 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__ConjType_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 230 "mark_tail_calls.m"
            MR_Word hlds__mark_tail_calls__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));

#line 239 "mark_tail_calls.m"
            if ((hlds__mark_tail_calls__ConjType_69 == (MR_Integer) 1))
#line 240 "mark_tail_calls.m"
              {
#line 241 "mark_tail_calls.m"
                *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "mark_tail_calls.m"
                *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 240 "mark_tail_calls.m"
                *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 240 "mark_tail_calls.m"
              }
#line 239 "mark_tail_calls.m"
            else
#line 232 "mark_tail_calls.m"
              {
#line 232 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__TypeCtorInfo_124_124 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 232 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__RevGoals0_71;
#line 232 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__RevGoals_72;
#line 232 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__Goals_73;
#line 232 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__GoalExpr_74;

#line 233 "mark_tail_calls.m"
                {
#line 233 "mark_tail_calls.m"
                  mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_124_124, hlds__mark_tail_calls__Goals0_70, &hlds__mark_tail_calls__RevGoals0_71);
                }
#line 234 "mark_tail_calls.m"
                {
#line 234 "mark_tail_calls.m"
                  hlds__mark_tail_calls__mark_tail_calls_in_conj_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, hlds__mark_tail_calls__MaybeOutputs_10, hlds__mark_tail_calls__RevGoals0_71, &hlds__mark_tail_calls__RevGoals_72, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);
                }
#line 236 "mark_tail_calls.m"
                {
#line 236 "mark_tail_calls.m"
                  mercury__list__reverse_2_p_0(hlds__mark_tail_calls__TypeCtorInfo_124_124, hlds__mark_tail_calls__RevGoals_72, &hlds__mark_tail_calls__Goals_73);
                }
#line 237 "mark_tail_calls.m"
                {
#line 237 "mark_tail_calls.m"
                  hlds__mark_tail_calls__GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 237 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 237 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_74, 1) = ((MR_Box) (hlds__mark_tail_calls__ConjType_69));
#line 237 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_74, 2) = ((MR_Box) (hlds__mark_tail_calls__Goals_73));
#line 237 "mark_tail_calls.m"
                }
#line 238 "mark_tail_calls.m"
                {
#line 238 "mark_tail_calls.m"
                  MR_Word base;
#line 238 "mark_tail_calls.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 238 "mark_tail_calls.m"
                  *hlds__mark_tail_calls__Goal_12 = base;
#line 238 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_74));
#line 238 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_15));
#line 238 "mark_tail_calls.m"
                }
#line 232 "mark_tail_calls.m"
              }
#line 230 "mark_tail_calls.m"
          }
#line 184 "mark_tail_calls.m"
        else
#line 184 "mark_tail_calls.m"
          if (((((MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 245 "mark_tail_calls.m"
            {
#line 245 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 245 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__Goals_100;
#line 245 "mark_tail_calls.m"
              MR_Word hlds__mark_tail_calls__GoalExpr_101;

#line 246 "mark_tail_calls.m"
              {
#line 246 "mark_tail_calls.m"
                hlds__mark_tail_calls__mark_tail_calls_in_goals_6_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, hlds__mark_tail_calls__Goals0_99, &hlds__mark_tail_calls__Goals_100, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);
              }
#line 248 "mark_tail_calls.m"
              *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 249 "mark_tail_calls.m"
              {
#line 249 "mark_tail_calls.m"
                hlds__mark_tail_calls__GoalExpr_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 249 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_101, 1) = ((MR_Box) (hlds__mark_tail_calls__Goals_100));
#line 249 "mark_tail_calls.m"
              }
#line 250 "mark_tail_calls.m"
              {
#line 250 "mark_tail_calls.m"
                MR_Word base;
#line 250 "mark_tail_calls.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "mark_tail_calls.m"
                *hlds__mark_tail_calls__Goal_12 = base;
#line 250 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_101));
#line 250 "mark_tail_calls.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_15));
#line 250 "mark_tail_calls.m"
              }
#line 245 "mark_tail_calls.m"
            }
#line 184 "mark_tail_calls.m"
          else
#line 184 "mark_tail_calls.m"
            if (((((MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 259 "mark_tail_calls.m"
              {
#line 259 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__Vars_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 259 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__Cond_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));
#line 259 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__Then0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 3)));
#line 259 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__Else0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 4)));
#line 259 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__Then_84;
#line 259 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__Else_86;
#line 259 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_93_93;
#line 259 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__GoalExpr_103;
#line 260 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__V_83_83;
#line 262 "mark_tail_calls.m"
                MR_Word hlds__mark_tail_calls__V_85_85;

#line 260 "mark_tail_calls.m"
                {
#line 260 "mark_tail_calls.m"
                  hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, &hlds__mark_tail_calls__V_83_83, hlds__mark_tail_calls__Then0_81, &hlds__mark_tail_calls__Then_84, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88, &hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_93_93);
                }
#line 262 "mark_tail_calls.m"
                {
#line 262 "mark_tail_calls.m"
                  hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, &hlds__mark_tail_calls__V_85_85, hlds__mark_tail_calls__Else0_82, &hlds__mark_tail_calls__Else_86, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_93_93, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);
                }
#line 264 "mark_tail_calls.m"
                *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "mark_tail_calls.m"
                {
#line 265 "mark_tail_calls.m"
                  hlds__mark_tail_calls__GoalExpr_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 265 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 265 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 1) = ((MR_Box) (hlds__mark_tail_calls__Vars_79));
#line 265 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 2) = ((MR_Box) (hlds__mark_tail_calls__Cond_80));
#line 265 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 3) = ((MR_Box) (hlds__mark_tail_calls__Then_84));
#line 265 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_103, 4) = ((MR_Box) (hlds__mark_tail_calls__Else_86));
#line 265 "mark_tail_calls.m"
                }
#line 266 "mark_tail_calls.m"
                {
#line 266 "mark_tail_calls.m"
                  MR_Word base;
#line 266 "mark_tail_calls.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "mark_tail_calls.m"
                  *hlds__mark_tail_calls__Goal_12 = base;
#line 266 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_103));
#line 266 "mark_tail_calls.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_15));
#line 266 "mark_tail_calls.m"
                }
#line 259 "mark_tail_calls.m"
              }
#line 184 "mark_tail_calls.m"
            else
#line 184 "mark_tail_calls.m"
              if (((((MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 268 "mark_tail_calls.m"
                {
#line 269 "mark_tail_calls.m"
                  {
#line 269 "mark_tail_calls.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_calls_in_goal\'/7", (MR_String) "shorthand");
#line 269 "mark_tail_calls.m"
                    return;
                  }
#line 268 "mark_tail_calls.m"
                }
#line 184 "mark_tail_calls.m"
              else
#line 184 "mark_tail_calls.m"
                if (((((MR_tag((MR_Word) hlds__mark_tail_calls__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 252 "mark_tail_calls.m"
                  {
#line 252 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 1)));
#line 252 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__CanFail_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 2)));
#line 252 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__Cases0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr0_14, (MR_Integer) 3)));
#line 252 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__Cases_78;
#line 252 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__GoalExpr_102;

#line 253 "mark_tail_calls.m"
                    {
#line 253 "mark_tail_calls.m"
                      hlds__mark_tail_calls__mark_tail_calls_in_cases_6_p_0(hlds__mark_tail_calls__Info_8, hlds__mark_tail_calls__Outputs0_9, hlds__mark_tail_calls__Cases0_77, &hlds__mark_tail_calls__Cases_78, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88, hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89);
                    }
#line 255 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 256 "mark_tail_calls.m"
                    {
#line 256 "mark_tail_calls.m"
                      hlds__mark_tail_calls__GoalExpr_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 256 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 256 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_102, 1) = ((MR_Box) (hlds__mark_tail_calls__Var_75));
#line 256 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_102, 2) = ((MR_Box) (hlds__mark_tail_calls__CanFail_76));
#line 256 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(3), hlds__mark_tail_calls__GoalExpr_102, 3) = ((MR_Box) (hlds__mark_tail_calls__Cases_78));
#line 256 "mark_tail_calls.m"
                    }
#line 257 "mark_tail_calls.m"
                    {
#line 257 "mark_tail_calls.m"
                      MR_Word base;
#line 257 "mark_tail_calls.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__Goal_12 = base;
#line 257 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_tail_calls__GoalExpr_102));
#line 257 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_tail_calls__GoalInfo0_15));
#line 257 "mark_tail_calls.m"
                    }
#line 252 "mark_tail_calls.m"
                  }
#line 184 "mark_tail_calls.m"
                else
#line 181 "mark_tail_calls.m"
                  {
#line 182 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__MaybeOutputs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__Goal_12 = hlds__mark_tail_calls__Goal0_11;
#line 181 "mark_tail_calls.m"
                    *hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_89 = hlds__mark_tail_calls__STATE_VARIABLE_FoundTailCalls_0_88;
#line 181 "mark_tail_calls.m"
                  }
#line 174 "mark_tail_calls.m"
  }
#line 168 "mark_tail_calls.m"
}

#line 124 "mark_tail_calls.m"
static MR_bool MR_CALL 
hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(
#line 124 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_1,
#line 124 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__2_2,
#line 124 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 124 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__4_4,
#line 124 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__HeadVar__5_5)
#line 124 "mark_tail_calls.m"
{
#line 128 "mark_tail_calls.m"
  {
#line 128 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;

#line 128 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "mark_tail_calls.m"
      {
#line 128 "mark_tail_calls.m"
        hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 128 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 128 "mark_tail_calls.m"
          {
#line 128 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = (hlds__mark_tail_calls__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 128 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 128 "mark_tail_calls.m"
              {
#line 128 "mark_tail_calls.m"
                *hlds__mark_tail_calls__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 128 "mark_tail_calls.m"
                hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 128 "mark_tail_calls.m"
              }
#line 128 "mark_tail_calls.m"
          }
#line 128 "mark_tail_calls.m"
      }
#line 128 "mark_tail_calls.m"
    else
#line 130 "mark_tail_calls.m"
      {
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Mode_10;
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Modes_11;
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Var_12;
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__Vars_13;
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__OutputVar_14;
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__OutputVars_15;
#line 130 "mark_tail_calls.m"
        MR_Word hlds__mark_tail_calls__ArgMode_16;

#line 129 "mark_tail_calls.m"
        hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 129 "mark_tail_calls.m"
        if (hlds__mark_tail_calls__succeeded)
#line 129 "mark_tail_calls.m"
          {
#line 129 "mark_tail_calls.m"
            hlds__mark_tail_calls__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 129 "mark_tail_calls.m"
            hlds__mark_tail_calls__Modes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = ((MR_tag((MR_Word) hlds__mark_tail_calls__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 130 "mark_tail_calls.m"
            if (hlds__mark_tail_calls__succeeded)
#line 130 "mark_tail_calls.m"
              {
#line 130 "mark_tail_calls.m"
                hlds__mark_tail_calls__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 0)));
#line 130 "mark_tail_calls.m"
                hlds__mark_tail_calls__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__HeadVar__4_4, (MR_Integer) 1)));
#line 131 "mark_tail_calls.m"
                {
#line 131 "mark_tail_calls.m"
                  check_hlds__mode_util__mode_to_arg_mode_4_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Mode_10, hlds__mark_tail_calls__Type_8, &hlds__mark_tail_calls__ArgMode_16);
                }
#line 137 "mark_tail_calls.m"
                if ((hlds__mark_tail_calls__ArgMode_16 == (MR_Integer) 1))
#line 138 "mark_tail_calls.m"
                  {
#line 138 "mark_tail_calls.m"
                    MR_Word hlds__mark_tail_calls__IsDummy_17;

#line 139 "mark_tail_calls.m"
                    {
#line 139 "mark_tail_calls.m"
                      hlds__mark_tail_calls__IsDummy_17 = check_hlds__type_util__check_dummy_type_2_f_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Type_8);
                    }
#line 143 "mark_tail_calls.m"
                    if ((hlds__mark_tail_calls__IsDummy_17 == (MR_Integer) 0))
#line 145 "mark_tail_calls.m"
                      hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 143 "mark_tail_calls.m"
                    else
#line 142 "mark_tail_calls.m"
                      {
#line 142 "mark_tail_calls.m"
                        hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "mark_tail_calls.m"
                        MR_hl_field(MR_mktag(1), hlds__mark_tail_calls__OutputVar_14, 0) = ((MR_Box) (hlds__mark_tail_calls__Var_12));
#line 142 "mark_tail_calls.m"
                      }
#line 138 "mark_tail_calls.m"
                  }
#line 137 "mark_tail_calls.m"
                else
#line 136 "mark_tail_calls.m"
                  hlds__mark_tail_calls__OutputVar_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "mark_tail_calls.m"
                {
#line 148 "mark_tail_calls.m"
                  hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_1, hlds__mark_tail_calls__Types_9, hlds__mark_tail_calls__Modes_11, hlds__mark_tail_calls__Vars_13, &hlds__mark_tail_calls__OutputVars_15);
                }
#line 130 "mark_tail_calls.m"
                if (hlds__mark_tail_calls__succeeded)
#line 130 "mark_tail_calls.m"
                  {
#line 130 "mark_tail_calls.m"
                    {
#line 130 "mark_tail_calls.m"
                      MR_Word base;
#line 130 "mark_tail_calls.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "mark_tail_calls.m"
                      *hlds__mark_tail_calls__HeadVar__5_5 = base;
#line 130 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_tail_calls__OutputVar_14));
#line 130 "mark_tail_calls.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_tail_calls__OutputVars_15));
#line 130 "mark_tail_calls.m"
                    }
#line 130 "mark_tail_calls.m"
                    hlds__mark_tail_calls__succeeded = MR_TRUE;
#line 130 "mark_tail_calls.m"
                  }
#line 130 "mark_tail_calls.m"
              }
#line 129 "mark_tail_calls.m"
          }
#line 130 "mark_tail_calls.m"
      }
#line 128 "mark_tail_calls.m"
    return hlds__mark_tail_calls__succeeded;
#line 128 "mark_tail_calls.m"
  }
#line 124 "mark_tail_calls.m"
}

#line 358 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_3(
#line 358 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 358 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 358 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 358 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3)
#line 358 "mark_tail_calls.m"
{
#line 358 "mark_tail_calls.m"
  {
#line 358 "mark_tail_calls.m"
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;

#line 358 "mark_tail_calls.m"
    {
#line 358 "mark_tail_calls.m"
      hlds__mark_tail_calls__report_nontailcall_warning_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1));
#line 358 "mark_tail_calls.m"
      return;
    }
#line 358 "mark_tail_calls.m"
  }
#line 358 "mark_tail_calls.m"
}

#line 357 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_1(
#line 357 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 357 "mark_tail_calls.m"
{
#line 357 "mark_tail_calls.m"
  {
#line 357 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 357 "mark_tail_calls.m"
    *((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__conv0_Warning_10));
#line 357 "mark_tail_calls.m"
    {
#line 357 "mark_tail_calls.m"
      ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__cont)((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__cont_env_ptr);
#line 357 "mark_tail_calls.m"
      return;
    }
#line 357 "mark_tail_calls.m"
  }
#line 357 "mark_tail_calls.m"
}

#line 357 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2(
#line 357 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 357 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 357 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 357 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr)
#line 357 "mark_tail_calls.m"
{
#line 357 "mark_tail_calls.m"
  {
#line 357 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0_s hlds__mark_tail_calls__env;

#line 357 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__wrapper_arg_1 = hlds__mark_tail_calls__wrapper_arg_1;
#line 357 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__cont = hlds__mark_tail_calls__cont;
#line 357 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__cont_env_ptr = hlds__mark_tail_calls__cont_env_ptr;
#line 357 "mark_tail_calls.m"
    {
#line 357 "mark_tail_calls.m"
      MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;

#line 357 "mark_tail_calls.m"
      {
#line 357 "mark_tail_calls.m"
        hlds__mark_tail_calls__nontailcall_in_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 6))), &(hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2_env_0__conv0_Warning_10, hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_1, &hlds__mark_tail_calls__env);
      }
#line 357 "mark_tail_calls.m"
    }
#line 357 "mark_tail_calls.m"
  }
#line 357 "mark_tail_calls.m"
}

#line 39 "mark_tail_calls.m"
void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0(
#line 39 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Globals_8,
#line 39 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredId_9,
#line 39 "mark_tail_calls.m"
  MR_Integer hlds__mark_tail_calls__ProcId_10,
#line 39 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredInfo_11,
#line 39 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ProcInfo_12)
#line 39 "mark_tail_calls.m"
{
#line 355 "mark_tail_calls.m"
  {
#line 355 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 355 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__TypeCtorInfo_21_21;
#line 355 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Warnings_14;
#line 355 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_17_17;
#line 355 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_18_18;
#line 358 "mark_tail_calls.m"
    MR_Box hlds__mark_tail_calls__conv1_STATE_VARIABLE_IO_16;

#line 357 "mark_tail_calls.m"
    {
#line 357 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 357 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_17_17, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_4[0]));
#line 357 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_17_17, 1) = ((MR_Box) (hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_2));
#line 357 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 357 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_17_17, 3) = ((MR_Box) (hlds__mark_tail_calls__PredId_9));
#line 357 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_17_17, 4) = ((MR_Box) (hlds__mark_tail_calls__ProcId_10));
#line 357 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_17_17, 5) = ((MR_Box) (hlds__mark_tail_calls__PredInfo_11));
#line 357 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_17_17, 6) = ((MR_Box) (hlds__mark_tail_calls__ProcInfo_12));
#line 357 "mark_tail_calls.m"
    }
#line 3667 "hlds.mark_tail_calls.c"
    hlds__mark_tail_calls__TypeCtorInfo_21_21 = (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0;
#line 356 "mark_tail_calls.m"
    {
#line 356 "mark_tail_calls.m"
      mercury__solutions__solutions_2_p_1(hlds__mark_tail_calls__TypeCtorInfo_21_21, hlds__mark_tail_calls__V_17_17, &hlds__mark_tail_calls__Warnings_14);
    }
#line 358 "mark_tail_calls.m"
    {
#line 358 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 358 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_18_18, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0]));
#line 358 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_18_18, 1) = ((MR_Box) (hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0_3));
#line 358 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 358 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_18_18, 3) = ((MR_Box) (hlds__mark_tail_calls__Globals_8));
#line 358 "mark_tail_calls.m"
    }
#line 358 "mark_tail_calls.m"
    {
#line 358 "mark_tail_calls.m"
      mercury__list__foldl_4_p_2(hlds__mark_tail_calls__TypeCtorInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__mark_tail_calls__V_18_18, hlds__mark_tail_calls__Warnings_14, ((MR_Box) ((MR_Integer) 0)), &hlds__mark_tail_calls__conv1_STATE_VARIABLE_IO_16);
    }
#line 355 "mark_tail_calls.m"
  }
#line 39 "mark_tail_calls.m"
}

#line 352 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_3(
#line 352 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 352 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_1,
#line 352 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__wrapper_arg_2,
#line 352 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_3)
#line 352 "mark_tail_calls.m"
{
#line 352 "mark_tail_calls.m"
  {
#line 352 "mark_tail_calls.m"
    MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;

#line 352 "mark_tail_calls.m"
    {
#line 352 "mark_tail_calls.m"
      hlds__mark_tail_calls__report_nontailcall_warning_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), ((MR_Word) hlds__mark_tail_calls__wrapper_arg_1));
#line 352 "mark_tail_calls.m"
      return;
    }
#line 352 "mark_tail_calls.m"
  }
#line 352 "mark_tail_calls.m"
}

#line 350 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_1(
#line 350 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__env_ptr_arg)
#line 350 "mark_tail_calls.m"
{
#line 350 "mark_tail_calls.m"
  {
#line 350 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0_s * hlds__mark_tail_calls__env_ptr = (struct hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0_s *) hlds__mark_tail_calls__env_ptr_arg;

#line 350 "mark_tail_calls.m"
    *((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__conv0_Warning_4));
#line 350 "mark_tail_calls.m"
    {
#line 350 "mark_tail_calls.m"
      ((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont)((hlds__mark_tail_calls__env_ptr)->hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont_env_ptr);
#line 350 "mark_tail_calls.m"
      return;
    }
#line 350 "mark_tail_calls.m"
  }
#line 350 "mark_tail_calls.m"
}

#line 350 "mark_tail_calls.m"
static void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2(
#line 350 "mark_tail_calls.m"
  MR_Box hlds__mark_tail_calls__closure_arg,
#line 350 "mark_tail_calls.m"
  MR_Box * hlds__mark_tail_calls__wrapper_arg_1,
#line 350 "mark_tail_calls.m"
  MR_Cont hlds__mark_tail_calls__cont,
#line 350 "mark_tail_calls.m"
  void * hlds__mark_tail_calls__cont_env_ptr)
#line 350 "mark_tail_calls.m"
{
#line 350 "mark_tail_calls.m"
  {
#line 350 "mark_tail_calls.m"
    struct hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0_s hlds__mark_tail_calls__env;

#line 350 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__wrapper_arg_1 = hlds__mark_tail_calls__wrapper_arg_1;
#line 350 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont = hlds__mark_tail_calls__cont;
#line 350 "mark_tail_calls.m"
    (hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__cont_env_ptr = hlds__mark_tail_calls__cont_env_ptr;
#line 350 "mark_tail_calls.m"
    {
#line 350 "mark_tail_calls.m"
      MR_Box hlds__mark_tail_calls__closure = hlds__mark_tail_calls__closure_arg;

#line 350 "mark_tail_calls.m"
      {
#line 350 "mark_tail_calls.m"
        hlds__mark_tail_calls__nontailcall_in_hlds_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__closure, (MR_Integer) 3))), &(hlds__mark_tail_calls__env).hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2_env_0__conv0_Warning_4, hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_1, &hlds__mark_tail_calls__env);
      }
#line 350 "mark_tail_calls.m"
    }
#line 350 "mark_tail_calls.m"
  }
#line 350 "mark_tail_calls.m"
}

#line 37 "mark_tail_calls.m"
void MR_CALL 
hlds__mark_tail_calls__warn_non_tail_calls_3_p_0(
#line 37 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_4)
#line 37 "mark_tail_calls.m"
{
#line 349 "mark_tail_calls.m"
  {
#line 349 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 349 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__TypeCtorInfo_14_14;
#line 349 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Warnings_6;
#line 349 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Globals_7;
#line 349 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_10_10;
#line 349 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__V_11_11;
#line 352 "mark_tail_calls.m"
    MR_Box hlds__mark_tail_calls__conv1_STATE_VARIABLE_IO_9;

#line 350 "mark_tail_calls.m"
    {
#line 350 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 350 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_10_10, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_2[0]));
#line 350 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_10_10, 1) = ((MR_Box) (hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_2));
#line 350 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 350 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_10_10, 3) = ((MR_Box) (hlds__mark_tail_calls__ModuleInfo_4));
#line 350 "mark_tail_calls.m"
    }
#line 3833 "hlds.mark_tail_calls.c"
    hlds__mark_tail_calls__TypeCtorInfo_14_14 = (MR_Word) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0;
#line 350 "mark_tail_calls.m"
    {
#line 350 "mark_tail_calls.m"
      mercury__solutions__solutions_2_p_1(hlds__mark_tail_calls__TypeCtorInfo_14_14, hlds__mark_tail_calls__V_10_10, &hlds__mark_tail_calls__Warnings_6);
    }
#line 351 "mark_tail_calls.m"
    {
#line 351 "mark_tail_calls.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__mark_tail_calls__ModuleInfo_4, &hlds__mark_tail_calls__Globals_7);
    }
#line 352 "mark_tail_calls.m"
    {
#line 352 "mark_tail_calls.m"
      hlds__mark_tail_calls__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 352 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_11_11, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0]));
#line 352 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_11_11, 1) = ((MR_Box) (hlds__mark_tail_calls__warn_non_tail_calls_3_p_0_3));
#line 352 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 352 "mark_tail_calls.m"
      MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__V_11_11, 3) = ((MR_Box) (hlds__mark_tail_calls__Globals_7));
#line 352 "mark_tail_calls.m"
    }
#line 352 "mark_tail_calls.m"
    {
#line 352 "mark_tail_calls.m"
      mercury__list__foldl_4_p_2(hlds__mark_tail_calls__TypeCtorInfo_14_14, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__mark_tail_calls__V_11_11, hlds__mark_tail_calls__Warnings_6, ((MR_Box) ((MR_Integer) 0)), &hlds__mark_tail_calls__conv1_STATE_VARIABLE_IO_9);
    }
#line 349 "mark_tail_calls.m"
  }
#line 37 "mark_tail_calls.m"
}

#line 34 "mark_tail_calls.m"
void MR_CALL 
hlds__mark_tail_calls__mark_tail_calls_6_p_0(
#line 34 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__Feature_7,
#line 34 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__ModuleInfo_8,
#line 34 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__HeadVar__3_3,
#line 34 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__PredInfo_11,
#line 34 "mark_tail_calls.m"
  MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27,
#line 34 "mark_tail_calls.m"
  MR_Word * hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_28)
#line 34 "mark_tail_calls.m"
{
#line 77 "mark_tail_calls.m"
  {
#line 77 "mark_tail_calls.m"
    MR_bool hlds__mark_tail_calls__succeeded;
#line 77 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 0)));
#line 77 "mark_tail_calls.m"
    MR_Integer hlds__mark_tail_calls__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Types_13;
#line 77 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Goal0_14;
#line 77 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__Detism_15;
#line 77 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls__SolnCount_17;
#line 81 "mark_tail_calls.m"
    MR_Word hlds__mark_tail_calls___CanFail_16;

#line 78 "mark_tail_calls.m"
    {
#line 78 "mark_tail_calls.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__mark_tail_calls__PredInfo_11, &hlds__mark_tail_calls__Types_13);
    }
#line 79 "mark_tail_calls.m"
    {
#line 79 "mark_tail_calls.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__Goal0_14);
    }
#line 80 "mark_tail_calls.m"
    {
#line 80 "mark_tail_calls.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__Detism_15);
    }
#line 81 "mark_tail_calls.m"
    {
#line 81 "mark_tail_calls.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__mark_tail_calls__Detism_15, &hlds__mark_tail_calls___CanFail_16, &hlds__mark_tail_calls__SolnCount_17);
    }
#line 90 "mark_tail_calls.m"
    if ((hlds__mark_tail_calls__SolnCount_17 == (MR_Integer) 3))
#line 87 "mark_tail_calls.m"
      *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_28 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27;
#line 90 "mark_tail_calls.m"
    else
#line 90 "mark_tail_calls.m"
      if ((hlds__mark_tail_calls__SolnCount_17 == (MR_Integer) 0))
#line 88 "mark_tail_calls.m"
        *hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_28 = hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27;
#line 90 "mark_tail_calls.m"
      else
#line 93 "mark_tail_calls.m"
        {
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Modes_18;
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__HeadVars_19;
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__VarTypes_20;
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Outputs_21;
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Info_22;
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__Goal_24;
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__FoundTailCalls_25;
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__TailCallEvents_26;
#line 93 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_30_30;
#line 120 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__OutputsPrime_37;
#line 100 "mark_tail_calls.m"
          MR_Word hlds__mark_tail_calls__V_23_23;

#line 94 "mark_tail_calls.m"
          {
#line 94 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__Modes_18);
          }
#line 95 "mark_tail_calls.m"
          {
#line 95 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__HeadVars_19);
          }
#line 96 "mark_tail_calls.m"
          {
#line 96 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__VarTypes_20);
          }
#line 118 "mark_tail_calls.m"
          {
#line 118 "mark_tail_calls.m"
            hlds__mark_tail_calls__succeeded = hlds__mark_tail_calls__find_maybe_output_args_2_5_p_0(hlds__mark_tail_calls__ModuleInfo_8, hlds__mark_tail_calls__Types_13, hlds__mark_tail_calls__Modes_18, hlds__mark_tail_calls__HeadVars_19, &hlds__mark_tail_calls__OutputsPrime_37);
          }
#line 120 "mark_tail_calls.m"
          if (hlds__mark_tail_calls__succeeded)
#line 119 "mark_tail_calls.m"
            hlds__mark_tail_calls__Outputs_21 = hlds__mark_tail_calls__OutputsPrime_37;
#line 120 "mark_tail_calls.m"
          else
#line 121 "mark_tail_calls.m"
            {
#line 121 "mark_tail_calls.m"
              {
#line 121 "mark_tail_calls.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_tail_calls", (MR_String) "predicate \140hlds.mark_tail_calls.find_maybe_output_args\'/5", (MR_String) "list length mismatch");
#line 121 "mark_tail_calls.m"
                return;
              }
#line 121 "mark_tail_calls.m"
            }
#line 98 "mark_tail_calls.m"
          {
#line 98 "mark_tail_calls.m"
            hlds__mark_tail_calls__Info_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 98 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 0) = ((MR_Box) (hlds__mark_tail_calls__Feature_7));
#line 98 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 1) = ((MR_Box) (hlds__mark_tail_calls__ModuleInfo_8));
#line 98 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 2) = ((MR_Box) (hlds__mark_tail_calls__PredId_9));
#line 98 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 3) = ((MR_Box) (hlds__mark_tail_calls__ProcId_10));
#line 98 "mark_tail_calls.m"
            MR_hl_field(MR_mktag(0), hlds__mark_tail_calls__Info_22, 4) = ((MR_Box) (hlds__mark_tail_calls__VarTypes_20));
#line 98 "mark_tail_calls.m"
          }
#line 100 "mark_tail_calls.m"
          {
#line 100 "mark_tail_calls.m"
            hlds__mark_tail_calls__mark_tail_calls_in_goal_7_p_0(hlds__mark_tail_calls__Info_22, hlds__mark_tail_calls__Outputs_21, &hlds__mark_tail_calls__V_23_23, hlds__mark_tail_calls__Goal0_14, &hlds__mark_tail_calls__Goal_24, (MR_Integer) 1, &hlds__mark_tail_calls__FoundTailCalls_25);
          }
#line 102 "mark_tail_calls.m"
          {
#line 102 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__mark_tail_calls__Goal_24, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_0_27, &hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_30_30);
          }
#line 106 "mark_tail_calls.m"
          if ((hlds__mark_tail_calls__FoundTailCalls_25 == (MR_Integer) 0))
#line 105 "mark_tail_calls.m"
            hlds__mark_tail_calls__TailCallEvents_26 = (MR_Integer) 0;
#line 106 "mark_tail_calls.m"
          else
#line 108 "mark_tail_calls.m"
            hlds__mark_tail_calls__TailCallEvents_26 = (MR_Integer) 1;
#line 110 "mark_tail_calls.m"
          {
#line 110 "mark_tail_calls.m"
            hlds__hlds_pred__proc_info_set_has_tail_call_event_3_p_0(hlds__mark_tail_calls__TailCallEvents_26, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_30_30, hlds__mark_tail_calls__STATE_VARIABLE_ProcInfo_28);
#line 110 "mark_tail_calls.m"
            return;
          }
#line 93 "mark_tail_calls.m"
        }
#line 77 "mark_tail_calls.m"
  }
#line 34 "mark_tail_calls.m"
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
