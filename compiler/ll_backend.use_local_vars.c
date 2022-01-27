/*
** Automatically generated from `use_local_vars.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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


/* :- module ll_backend.use_local_vars. */
/* :- implementation. */

/*
INIT mercury__ll_backend__use_local_vars__init
ENDINIT
*/

#include "ll_backend.use_local_vars.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
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
#include "ll_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
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
#include "ll_backend.basic_block.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.opt_util.mih"
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



#line 794 "use_local_vars.m"
struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s {
#line 794 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2;
#line 796 "use_local_vars.m"
  MR_bool ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded;
#line 155 "ll_backend.use_local_vars.c"
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_12;
#line 811 "use_local_vars.m"
  jmp_buf ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0;
#line 811 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24;
#line 811 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__V_32_32;
#line 811 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_24;
#line 794 "use_local_vars.m"
};


#line 169 "ll_backend.use_local_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 172 "ll_backend.use_local_vars.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 175 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 178 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0;

#line 181 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 184 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 187 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 190 "ll_backend.use_local_vars.c"
static const MR_PseudoTypeInfo ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0[1];

#line 193 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0;

#line 196 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1;

#line 199 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0[1];

#line 202 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1[1];

#line 205 "ll_backend.use_local_vars.c"
static const MR_DuPtagLayout ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0[2];

#line 208 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0[2];

#line 211 "ll_backend.use_local_vars.c"
static const MR_Integer ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0[2];

#line 214 "ll_backend.use_local_vars.c"
static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001(
#line 217 "ll_backend.use_local_vars.c"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
#line 219 "ll_backend.use_local_vars.c"
  MR_Box ll_backend__use_local_vars__wrapper_arg_2);

#line 222 "ll_backend.use_local_vars.c"
static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001(
#line 225 "ll_backend.use_local_vars.c"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_1,
#line 227 "ll_backend.use_local_vars.c"
  MR_Box ll_backend__use_local_vars__wrapper_arg_2,
#line 229 "ll_backend.use_local_vars.c"
  MR_Box ll_backend__use_local_vars__wrapper_arg_3);

#line 550 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__550__1_2_p_0(
#line 550 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumSubsts_32,
#line 550 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__HeadVar__2_46);

#line 541 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__541__1_2_p_0(
#line 541 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_5,
#line 541 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__ToLval_50);

#line 535 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__535__1_2_p_0(
#line 535 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_5,
#line 535 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__ToLval_11);

#line 419 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__419__1_2_p_0(
#line 419 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__SubChosenLvals_32,
#line 419 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_52);

#line 369 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__369__1_3_p_0(
#line 369 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__LiveMap_33,
#line 369 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_64,
#line 369 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__3_65);

#line 344 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__344__1_2_p_0(
#line 344 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__4_4,
#line 344 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_46);

#line 309 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(
#line 309 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__1_1,
#line 309 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
#line 309 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__3_3);

#line 309 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(
#line 309 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 309 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2);

#line 830 "use_local_vars.m"
static MR_Word MR_CALL 
ll_backend__use_local_vars__components_affect_liveness_1_f_0(
#line 830 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1);

#line 811 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(
#line 811 "use_local_vars.m"
  void * ll_backend__use_local_vars__env_ptr_arg);

#line 811 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_3(
#line 811 "use_local_vars.m"
  void * ll_backend__use_local_vars__env_ptr_arg);

#line 811 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(
#line 811 "use_local_vars.m"
  void * ll_backend__use_local_vars__env_ptr_arg);

#line 811 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(
#line 811 "use_local_vars.m"
  void * ll_backend__use_local_vars__env_ptr_arg);

#line 794 "use_local_vars.m"
static MR_Word MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0(
#line 794 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 794 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2);

#line 782 "use_local_vars.m"
static MR_Word MR_CALL 
ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(
#line 782 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Lval_4,
#line 782 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_5);

#line 627 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(
#line 627 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_1,
#line 627 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__NewLval_2,
#line 627 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
#line 627 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
#line 627 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_0_5,
#line 627 "use_local_vars.m"
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_N_6);

#line 583 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(
#line 583 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 583 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
#line 583 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
#line 583 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
#line 583 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5,
#line 583 "use_local_vars.m"
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6);

#line 558 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(
#line 558 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 558 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
#line 558 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
#line 558 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
#line 558 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5,
#line 558 "use_local_vars.m"
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6);

#line 550 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3(
#line 550 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg);

#line 541 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2(
#line 541 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg);

#line 535 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1(
#line 535 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg);

#line 527 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(
#line 527 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_5,
#line 527 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__NewLval_6,
#line 527 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Instr0_7,
#line 527 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__Instr_8);

#line 475 "use_local_vars.m"
static MR_Word MR_CALL 
ll_backend__use_local_vars__reg_type_for_lval_1_f_0(
#line 475 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Lval_3);

#line 468 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(
#line 468 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AlreadyTried_4,
#line 468 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
#line 468 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Lval_6);

#line 452 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_2_p_0(
#line 452 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_3,
#line 452 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Lval_4);

#line 419 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_2(
#line 419 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg);

#line 411 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_1(
#line 411 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg,
#line 411 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1);

#line 400 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0(
#line 400 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 400 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__2_2,
#line 400 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3,
#line 400 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4,
#line 400 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
#line 400 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AlreadyTried0_6,
#line 400 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__AccessThreshold_7);

#line 369 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2(
#line 369 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg,
#line 369 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
#line 369 "use_local_vars.m"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_2);

#line 344 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1(
#line 344 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg);

#line 313 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(
#line 313 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 313 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_2,
#line 313 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeFallThrough_3,
#line 313 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__4_4,
#line 313 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__5_5);

#line 290 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(
#line 290 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 290 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_7,
#line 290 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AvoidLvals_8,
#line 290 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__ToLval_9);

#line 274 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(
#line 274 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 274 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_7,
#line 274 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AvoidLvals_8,
#line 274 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__ToLval_9);

#line 219 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0_1(
#line 219 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg,
#line 219 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
#line 219 "use_local_vars.m"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_2,
#line 219 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_3,
#line 219 "use_local_vars.m"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_4);

#line 181 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0(
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 181 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__2_2,
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3,
#line 181 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4,
#line 181 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6,
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_7,
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeFallThrough_8);

#line 135 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_block_6_p_0(
#line 135 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_7,
#line 135 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_8,
#line 135 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__AccessThreshold_9,
#line 135 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Label_10,
#line 135 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24,
#line 135 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25);

#line 116 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1(
#line 116 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg,
#line 116 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
#line 116 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_2,
#line 116 "use_local_vars.m"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_1[1][3];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_2[2][2];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_3[2][9];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_4[4][5];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_5[2][6];




static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
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



#line 732 "ll_backend.use_local_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 740 "ll_backend.use_local_vars.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 749 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 757 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0
  }
};

#line 766 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 775 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 783 "ll_backend.use_local_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 791 "ll_backend.use_local_vars.c"
static const MR_PseudoTypeInfo ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
};

#line 796 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0 = {
  (MR_String) "known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0,
  NULL,
  NULL,
  NULL
};

#line 811 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1 = {
  (MR_String) "unknown_must_assume_all",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 826 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0[1] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1
};

#line 831 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1[1] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0
};

#line 836 "ll_backend.use_local_vars.c"
static const MR_DuPtagLayout ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1
  }
};

#line 850 "ll_backend.use_local_vars.c"
static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0[2] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0,
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1
};

#line 856 "ll_backend.use_local_vars.c"
static const MR_Integer ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 862 "ll_backend.use_local_vars.c"
const MR_TypeCtorInfo_Struct ll_backend__use_local_vars__ll_backend__use_local_vars__type_ctor_info_maybe_compulsory_lvals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001)),
  ((MR_Box) (ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001)),
  (MR_String) "ll_backend.use_local_vars",
  (MR_String) "maybe_compulsory_lvals",
  {     ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0 },
  {     ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0
};

#line 879 "ll_backend.use_local_vars.c"
static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001(
#line 882 "ll_backend.use_local_vars.c"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
#line 884 "ll_backend.use_local_vars.c"
  MR_Box ll_backend__use_local_vars__wrapper_arg_2)
#line 886 "ll_backend.use_local_vars.c"
{
#line 888 "ll_backend.use_local_vars.c"
  {
#line 890 "ll_backend.use_local_vars.c"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 893 "ll_backend.use_local_vars.c"
    {
#line 895 "ll_backend.use_local_vars.c"
      ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(((MR_Word) ll_backend__use_local_vars__wrapper_arg_1), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_2));
    }
#line 898 "ll_backend.use_local_vars.c"
    return ll_backend__use_local_vars__succeeded;
#line 900 "ll_backend.use_local_vars.c"
  }
#line 902 "ll_backend.use_local_vars.c"
}

#line 905 "ll_backend.use_local_vars.c"
static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001(
#line 908 "ll_backend.use_local_vars.c"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_1,
#line 910 "ll_backend.use_local_vars.c"
  MR_Box ll_backend__use_local_vars__wrapper_arg_2,
#line 912 "ll_backend.use_local_vars.c"
  MR_Box ll_backend__use_local_vars__wrapper_arg_3)
#line 914 "ll_backend.use_local_vars.c"
{
#line 916 "ll_backend.use_local_vars.c"
  {
#line 918 "ll_backend.use_local_vars.c"
    MR_Word ll_backend__use_local_vars__conv0_HeadVar__1_1;

#line 921 "ll_backend.use_local_vars.c"
    {
#line 923 "ll_backend.use_local_vars.c"
      ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(&ll_backend__use_local_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__use_local_vars__wrapper_arg_2), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_3));
    }
#line 926 "ll_backend.use_local_vars.c"
    *ll_backend__use_local_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__use_local_vars__conv0_HeadVar__1_1));
#line 928 "ll_backend.use_local_vars.c"
  }
#line 930 "ll_backend.use_local_vars.c"
}

#line 550 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__550__1_2_p_0(
#line 550 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumSubsts_32,
#line 550 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__HeadVar__2_46)
#line 550 "use_local_vars.m"
{
#line 550 "use_local_vars.m"
  {
#line 550 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__NumSubsts_32 == ll_backend__use_local_vars__HeadVar__2_46);

#line 550 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 550 "use_local_vars.m"
  }
#line 550 "use_local_vars.m"
}

#line 541 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__541__1_2_p_0(
#line 541 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_5,
#line 541 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__ToLval_50)
#line 541 "use_local_vars.m"
{
#line 541 "use_local_vars.m"
  {
#line 541 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 541 "use_local_vars.m"
    {
#line 541 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__use_local_vars__ToLval_50, ll_backend__use_local_vars__OldLval_5);
    }
#line 541 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 541 "use_local_vars.m"
  }
#line 541 "use_local_vars.m"
}

#line 535 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__535__1_2_p_0(
#line 535 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_5,
#line 535 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__ToLval_11)
#line 535 "use_local_vars.m"
{
#line 535 "use_local_vars.m"
  {
#line 535 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 535 "use_local_vars.m"
    {
#line 535 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__use_local_vars__ToLval_11, ll_backend__use_local_vars__OldLval_5);
    }
#line 535 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 535 "use_local_vars.m"
  }
#line 535 "use_local_vars.m"
}

#line 419 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__419__1_2_p_0(
#line 419 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__SubChosenLvals_32,
#line 419 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_52)
#line 419 "use_local_vars.m"
{
#line 419 "use_local_vars.m"
  {
#line 419 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 419 "use_local_vars.m"
    {
#line 419 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__use_local_vars_scalar_common_2[1], ((MR_Box) (ll_backend__use_local_vars__SubChosenLvals_32)), ((MR_Box) (ll_backend__use_local_vars__HeadVar__2_52)));
    }
#line 419 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 419 "use_local_vars.m"
  }
#line 419 "use_local_vars.m"
}

#line 369 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__369__1_3_p_0(
#line 369 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__LiveMap_33,
#line 369 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_64,
#line 369 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__3_65)
#line 369 "use_local_vars.m"
{
#line 369 "use_local_vars.m"
  {
#line 369 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 369 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__conv0_HeadVar__3_65;

#line 369 "use_local_vars.m"
    {
#line 369 "use_local_vars.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__use_local_vars_scalar_common_2[0], ll_backend__use_local_vars__LiveMap_33, ((MR_Box) (ll_backend__use_local_vars__HeadVar__2_64)), &ll_backend__use_local_vars__conv0_HeadVar__3_65);
    }
#line 369 "use_local_vars.m"
    *ll_backend__use_local_vars__HeadVar__3_65 = ((MR_Word) ll_backend__use_local_vars__conv0_HeadVar__3_65);
#line 369 "use_local_vars.m"
  }
#line 369 "use_local_vars.m"
}

#line 344 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__344__1_2_p_0(
#line 344 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__4_4,
#line 344 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_46)
#line 344 "use_local_vars.m"
{
#line 344 "use_local_vars.m"
  {
#line 344 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__HeadVar__4_4 == ll_backend__use_local_vars__HeadVar__2_46);

#line 344 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 344 "use_local_vars.m"
  }
#line 344 "use_local_vars.m"
}

#line 309 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(
#line 309 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__1_1,
#line 309 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
#line 309 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__3_3)
#line 309 "use_local_vars.m"
{
#line 309 "use_local_vars.m"
  {
#line 309 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 309 "use_local_vars.m"
    MR_Integer ll_backend__use_local_vars__CastX_8 = (MR_Integer) ll_backend__use_local_vars__HeadVar__2_2;
#line 309 "use_local_vars.m"
    MR_Integer ll_backend__use_local_vars__CastY_9 = (MR_Integer) ll_backend__use_local_vars__HeadVar__3_3;

#line 309 "use_local_vars.m"
    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__CastX_8 == ll_backend__use_local_vars__CastY_9);
#line 309 "use_local_vars.m"
    if (ll_backend__use_local_vars__succeeded)
#line 1107 "ll_backend.use_local_vars.c"
      *ll_backend__use_local_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 309 "use_local_vars.m"
    else
#line 309 "use_local_vars.m"
    if ((ll_backend__use_local_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "use_local_vars.m"
      if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "use_local_vars.m"
        *ll_backend__use_local_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 309 "use_local_vars.m"
      else
#line 1119 "ll_backend.use_local_vars.c"
        *ll_backend__use_local_vars__HeadVar__1_1 = (MR_Integer) 2;
#line 309 "use_local_vars.m"
    else
#line 309 "use_local_vars.m"
      {
#line 309 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__2_2, (MR_Integer) 0)));

#line 309 "use_local_vars.m"
        if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "ll_backend.use_local_vars.c"
          *ll_backend__use_local_vars__HeadVar__1_1 = (MR_Integer) 1;
#line 309 "use_local_vars.m"
        else
#line 309 "use_local_vars.m"
          {
#line 309 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 0)));

#line 309 "use_local_vars.m"
            {
#line 309 "use_local_vars.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__use_local_vars_scalar_common_2[0], ll_backend__use_local_vars__HeadVar__1_1, ((MR_Box) (ll_backend__use_local_vars__V_11_11)), ((MR_Box) (ll_backend__use_local_vars__V_5_5)));
#line 309 "use_local_vars.m"
              return;
            }
#line 309 "use_local_vars.m"
          }
#line 309 "use_local_vars.m"
      }
#line 309 "use_local_vars.m"
  }
#line 309 "use_local_vars.m"
}

#line 309 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(
#line 309 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 309 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2)
#line 309 "use_local_vars.m"
{
#line 309 "use_local_vars.m"
  {
#line 309 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 309 "use_local_vars.m"
    MR_Integer ll_backend__use_local_vars__CastX_7 = (MR_Integer) ll_backend__use_local_vars__HeadVar__1_1;
#line 309 "use_local_vars.m"
    MR_Integer ll_backend__use_local_vars__CastY_8 = (MR_Integer) ll_backend__use_local_vars__HeadVar__2_2;

#line 309 "use_local_vars.m"
    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__CastX_7 == ll_backend__use_local_vars__CastY_8);
#line 309 "use_local_vars.m"
    if (ll_backend__use_local_vars__succeeded)
#line 309 "use_local_vars.m"
      ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 309 "use_local_vars.m"
    else
#line 309 "use_local_vars.m"
    if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "use_local_vars.m"
      {
#line 309 "use_local_vars.m"
        MR_Integer ll_backend__use_local_vars__CastX_5 = (MR_Integer) ll_backend__use_local_vars__HeadVar__1_1;
#line 309 "use_local_vars.m"
        MR_Integer ll_backend__use_local_vars__CastY_6 = (MR_Integer) ll_backend__use_local_vars__HeadVar__2_2;

#line 309 "use_local_vars.m"
        ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__CastY_6 == ll_backend__use_local_vars__CastX_5);
#line 309 "use_local_vars.m"
      }
#line 309 "use_local_vars.m"
    else
#line 309 "use_local_vars.m"
      {
#line 309 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__TypeInfo_9_9;
#line 309 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 309 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__V_4_4;

#line 309 "use_local_vars.m"
        ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 309 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 309 "use_local_vars.m"
          {
#line 309 "use_local_vars.m"
            ll_backend__use_local_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 1213 "ll_backend.use_local_vars.c"
            ll_backend__use_local_vars__TypeInfo_9_9 = (MR_Word) &ll_backend__use_local_vars_scalar_common_2[0];
#line 1215 "ll_backend.use_local_vars.c"
            {
#line 1217 "ll_backend.use_local_vars.c"
              return ll_backend__use_local_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__use_local_vars__TypeInfo_9_9, ((MR_Box) (ll_backend__use_local_vars__V_3_3)), ((MR_Box) (ll_backend__use_local_vars__V_4_4)));
            }
#line 309 "use_local_vars.m"
          }
#line 309 "use_local_vars.m"
      }
#line 309 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 309 "use_local_vars.m"
  }
#line 309 "use_local_vars.m"
}

#line 830 "use_local_vars.m"
static MR_Word MR_CALL 
ll_backend__use_local_vars__components_affect_liveness_1_f_0(
#line 830 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1)
#line 830 "use_local_vars.m"
{
#line 833 "use_local_vars.m"
  while (MR_TRUE)
#line 833 "use_local_vars.m"
    {
#line 833 "use_local_vars.m"
      /* tailcall optimized into a loop */
#line 833 "use_local_vars.m"
      {
#line 833 "use_local_vars.m"
        MR_bool ll_backend__use_local_vars__succeeded;
#line 833 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__HeadVar__2_2;

#line 833 "use_local_vars.m"
        if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "use_local_vars.m"
          ll_backend__use_local_vars__HeadVar__2_2 = (MR_Integer) 0;
#line 833 "use_local_vars.m"
        else
#line 834 "use_local_vars.m"
          {
#line 834 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Component_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 834 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Components_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));

#line 850 "use_local_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Component_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 855 "use_local_vars.m"
              {
#line 855 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__AffectsLiveness_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 2)));
#line 855 "use_local_vars.m"
                MR_String ll_backend__use_local_vars__Code_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 4)));
#line 854 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 1)));
#line 854 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 3)));

#line 859 "use_local_vars.m"
                if ((ll_backend__use_local_vars__AffectsLiveness_13 == (MR_Integer) 0))
#line 858 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 859 "use_local_vars.m"
                else
#line 859 "use_local_vars.m"
                if ((ll_backend__use_local_vars__AffectsLiveness_13 == (MR_Integer) 2))
#line 866 "use_local_vars.m"
                  {
#line 864 "use_local_vars.m"
                    ll_backend__use_local_vars__succeeded = (strcmp(ll_backend__use_local_vars__Code_14, (MR_String) "") == 0);
#line 866 "use_local_vars.m"
                    if (ll_backend__use_local_vars__succeeded)
#line 865 "use_local_vars.m"
                      ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 866 "use_local_vars.m"
                    else
#line 867 "use_local_vars.m"
                      ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 866 "use_local_vars.m"
                  }
#line 859 "use_local_vars.m"
                else
#line 859 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 855 "use_local_vars.m"
              }
#line 850 "use_local_vars.m"
            else
#line 850 "use_local_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Component_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 855 "use_local_vars.m"
              {
#line 855 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__AffectsLiveness_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 2)));
#line 855 "use_local_vars.m"
                MR_String ll_backend__use_local_vars__Code_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 3)));
#line 853 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 1)));

#line 859 "use_local_vars.m"
                if ((ll_backend__use_local_vars__AffectsLiveness_17 == (MR_Integer) 0))
#line 858 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 859 "use_local_vars.m"
                else
#line 859 "use_local_vars.m"
                if ((ll_backend__use_local_vars__AffectsLiveness_17 == (MR_Integer) 2))
#line 866 "use_local_vars.m"
                  {
#line 864 "use_local_vars.m"
                    ll_backend__use_local_vars__succeeded = (strcmp(ll_backend__use_local_vars__Code_18, (MR_String) "") == 0);
#line 866 "use_local_vars.m"
                    if (ll_backend__use_local_vars__succeeded)
#line 865 "use_local_vars.m"
                      ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 866 "use_local_vars.m"
                    else
#line 867 "use_local_vars.m"
                      ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 866 "use_local_vars.m"
                  }
#line 859 "use_local_vars.m"
                else
#line 859 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 855 "use_local_vars.m"
              }
#line 850 "use_local_vars.m"
            else
#line 850 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 834 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 836 "use_local_vars.m"
              ll_backend__use_local_vars__HeadVar__2_2 = (MR_Integer) 1;
#line 834 "use_local_vars.m"
            else
#line 838 "use_local_vars.m"
              {
#line 838 "use_local_vars.m"
                /* direct tailcall eliminated */
#line 838 "use_local_vars.m"
                {
#line 838 "use_local_vars.m"
                  MR_Word ll_backend__use_local_vars__HeadVar__1__tmp_copy_1 = ll_backend__use_local_vars__Components_4;

#line 838 "use_local_vars.m"
                  ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__HeadVar__1__tmp_copy_1;
#line 838 "use_local_vars.m"
                }
#line 838 "use_local_vars.m"
                continue;
#line 838 "use_local_vars.m"
              }
#line 834 "use_local_vars.m"
          }
#line 833 "use_local_vars.m"
        return ll_backend__use_local_vars__HeadVar__2_2;
#line 833 "use_local_vars.m"
      }
#line 833 "use_local_vars.m"
      break;
#line 833 "use_local_vars.m"
    }
#line 830 "use_local_vars.m"
}

#line 811 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(
#line 811 "use_local_vars.m"
  void * ll_backend__use_local_vars__env_ptr_arg)
#line 811 "use_local_vars.m"
{
#line 811 "use_local_vars.m"
  {
#line 811 "use_local_vars.m"
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * ll_backend__use_local_vars__env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) ll_backend__use_local_vars__env_ptr_arg;

#line 811 "use_local_vars.m"
    MR_builtin_longjmp((ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0, 1);
#line 811 "use_local_vars.m"
  }
#line 811 "use_local_vars.m"
}

#line 811 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_3(
#line 811 "use_local_vars.m"
  void * ll_backend__use_local_vars__env_ptr_arg)
#line 811 "use_local_vars.m"
{
#line 811 "use_local_vars.m"
  {
#line 811 "use_local_vars.m"
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * ll_backend__use_local_vars__env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) ll_backend__use_local_vars__env_ptr_arg;

#line 811 "use_local_vars.m"
    (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24 = ((MR_Word) (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_24);
#line 811 "use_local_vars.m"
    {
#line 811 "use_local_vars.m"
      ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(ll_backend__use_local_vars__env_ptr);
#line 811 "use_local_vars.m"
      return;
    }
#line 811 "use_local_vars.m"
  }
#line 811 "use_local_vars.m"
}

#line 811 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(
#line 811 "use_local_vars.m"
  void * ll_backend__use_local_vars__env_ptr_arg)
#line 811 "use_local_vars.m"
{
#line 811 "use_local_vars.m"
  {
#line 811 "use_local_vars.m"
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * ll_backend__use_local_vars__env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) ll_backend__use_local_vars__env_ptr_arg;

#line 811 "use_local_vars.m"
    {
#line 812 "use_local_vars.m"
      MR_Word ll_backend__use_local_vars__V_25_25;
#line 812 "use_local_vars.m"
      MR_Word ll_backend__use_local_vars__V_26_26;
#line 812 "use_local_vars.m"
      MR_Word ll_backend__use_local_vars__V_27_27;
#line 812 "use_local_vars.m"
      MR_String ll_backend__use_local_vars__V_28_28;
#line 812 "use_local_vars.m"
      MR_Word ll_backend__use_local_vars__V_29_29;
#line 812 "use_local_vars.m"
      MR_Word ll_backend__use_local_vars__V_30_30;

#line 812 "use_local_vars.m"
      (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24, (MR_Integer) 0)));
#line 812 "use_local_vars.m"
      ll_backend__use_local_vars__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24, (MR_Integer) 1)));
#line 812 "use_local_vars.m"
      ll_backend__use_local_vars__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24, (MR_Integer) 2)));
#line 812 "use_local_vars.m"
      ll_backend__use_local_vars__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24, (MR_Integer) 3)));
#line 812 "use_local_vars.m"
      ll_backend__use_local_vars__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24, (MR_Integer) 4)));
#line 812 "use_local_vars.m"
      ll_backend__use_local_vars__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24, (MR_Integer) 5)));
#line 812 "use_local_vars.m"
      ll_backend__use_local_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_24, (MR_Integer) 6)));
#line 812 "use_local_vars.m"
      {
#line 812 "use_local_vars.m"
        (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = ll_backend__llds____Unify____lval_0_0((ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2, (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__V_32_32);
      }
#line 812 "use_local_vars.m"
      if ((ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded)
#line 812 "use_local_vars.m"
        {
#line 812 "use_local_vars.m"
          ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(ll_backend__use_local_vars__env_ptr);
#line 812 "use_local_vars.m"
          return;
        }
#line 811 "use_local_vars.m"
    }
#line 811 "use_local_vars.m"
  }
#line 811 "use_local_vars.m"
}

#line 811 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(
#line 811 "use_local_vars.m"
  void * ll_backend__use_local_vars__env_ptr_arg)
#line 811 "use_local_vars.m"
{
#line 811 "use_local_vars.m"
  {
#line 811 "use_local_vars.m"
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * ll_backend__use_local_vars__env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) ll_backend__use_local_vars__env_ptr_arg;

#line 811 "use_local_vars.m"
    if (MR_builtin_setjmp((ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0) == 0)
#line 811 "use_local_vars.m"
      {
#line 811 "use_local_vars.m"
        {
#line 811 "use_local_vars.m"
          {
#line 811 "use_local_vars.m"
            mercury__list__member_2_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0, &(ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_24, (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_12, ll_backend__use_local_vars__components_update_oldlval_2_f_0_3, ll_backend__use_local_vars__env_ptr);
          }
#line 811 "use_local_vars.m"
        }
#line 811 "use_local_vars.m"
        (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = MR_FALSE;
#line 811 "use_local_vars.m"
      }
#line 811 "use_local_vars.m"
    else
#line 811 "use_local_vars.m"
      (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = MR_TRUE;
#line 811 "use_local_vars.m"
  }
#line 811 "use_local_vars.m"
}

#line 794 "use_local_vars.m"
static MR_Word MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0(
#line 794 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 794 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2)
#line 794 "use_local_vars.m"
{
#line 794 "use_local_vars.m"
  {
#line 794 "use_local_vars.m"
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s ll_backend__use_local_vars__env;

#line 794 "use_local_vars.m"
    (ll_backend__use_local_vars__env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2 = ll_backend__use_local_vars__HeadVar__2_2;
#line 796 "use_local_vars.m"
    while (MR_TRUE)
#line 796 "use_local_vars.m"
      {
#line 796 "use_local_vars.m"
        /* tailcall optimized into a loop */
#line 796 "use_local_vars.m"
        {
#line 796 "use_local_vars.m"
          MR_Word ll_backend__use_local_vars__HeadVar__3_3;

#line 796 "use_local_vars.m"
          if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "use_local_vars.m"
            ll_backend__use_local_vars__HeadVar__3_3 = (MR_Integer) 0;
#line 796 "use_local_vars.m"
          else
#line 797 "use_local_vars.m"
            {
#line 797 "use_local_vars.m"
              MR_Word ll_backend__use_local_vars__Component_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 797 "use_local_vars.m"
              MR_Word ll_backend__use_local_vars__Components_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));

#line 1571 "ll_backend.use_local_vars.c"
              (ll_backend__use_local_vars__env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__Component_5)) == (MR_mktag((MR_Integer) 2)));
#line 1573 "ll_backend.use_local_vars.c"
              if ((ll_backend__use_local_vars__env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded)
#line 1575 "ll_backend.use_local_vars.c"
                {
#line 1577 "ll_backend.use_local_vars.c"
                  (ll_backend__use_local_vars__env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Component_5, (MR_Integer) 0)));
#line 811 "use_local_vars.m"
                  {
#line 811 "use_local_vars.m"
                    ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(&ll_backend__use_local_vars__env);
                  }
#line 1584 "ll_backend.use_local_vars.c"
                }
#line 797 "use_local_vars.m"
              if ((ll_backend__use_local_vars__env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded)
#line 799 "use_local_vars.m"
                ll_backend__use_local_vars__HeadVar__3_3 = (MR_Integer) 1;
#line 797 "use_local_vars.m"
              else
#line 801 "use_local_vars.m"
                {
#line 801 "use_local_vars.m"
                  /* direct tailcall eliminated */
#line 801 "use_local_vars.m"
                  {
#line 801 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__HeadVar__1__tmp_copy_1 = ll_backend__use_local_vars__Components_6;

#line 801 "use_local_vars.m"
                    ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__HeadVar__1__tmp_copy_1;
#line 801 "use_local_vars.m"
                  }
#line 801 "use_local_vars.m"
                  continue;
#line 801 "use_local_vars.m"
                }
#line 797 "use_local_vars.m"
            }
#line 796 "use_local_vars.m"
          return ll_backend__use_local_vars__HeadVar__3_3;
#line 796 "use_local_vars.m"
        }
#line 796 "use_local_vars.m"
        break;
#line 796 "use_local_vars.m"
      }
#line 794 "use_local_vars.m"
  }
#line 794 "use_local_vars.m"
}

#line 782 "use_local_vars.m"
static MR_Word MR_CALL 
ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(
#line 782 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Lval_4,
#line 782 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_5)
#line 782 "use_local_vars.m"
{
#line 784 "use_local_vars.m"
  {
#line 784 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 784 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__HeadVar__3_3;

#line 785 "use_local_vars.m"
    {
#line 785 "use_local_vars.m"
      ll_backend__use_local_vars__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__use_local_vars__Lval_4, ll_backend__use_local_vars__OldLval_5);
    }
#line 784 "use_local_vars.m"
    if (ll_backend__use_local_vars__succeeded)
#line 789 "use_local_vars.m"
      ll_backend__use_local_vars__HeadVar__3_3 = (MR_Integer) 1;
#line 784 "use_local_vars.m"
    else
#line 791 "use_local_vars.m"
      ll_backend__use_local_vars__HeadVar__3_3 = (MR_Integer) 0;
#line 784 "use_local_vars.m"
    return ll_backend__use_local_vars__HeadVar__3_3;
#line 784 "use_local_vars.m"
  }
#line 782 "use_local_vars.m"
}

#line 627 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(
#line 627 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_1,
#line 627 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__NewLval_2,
#line 627 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
#line 627 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
#line 627 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_0_5,
#line 627 "use_local_vars.m"
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_N_6)
#line 627 "use_local_vars.m"
{
#line 631 "use_local_vars.m"
  {
#line 631 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 631 "use_local_vars.m"
    if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "use_local_vars.m"
      {
#line 631 "use_local_vars.m"
        *ll_backend__use_local_vars__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "use_local_vars.m"
        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 631 "use_local_vars.m"
      }
#line 631 "use_local_vars.m"
    else
#line 633 "use_local_vars.m"
      {
#line 633 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Instr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 633 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Instrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 633 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Instr_16;
#line 633 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Instrs_17;
#line 633 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Uinstr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_14, (MR_Integer) 0)));
#line 633 "use_local_vars.m"
        MR_String ll_backend__use_local_vars__Comment_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_14, (MR_Integer) 1)));

#line 647 "use_local_vars.m"
        if ((ll_backend__use_local_vars__Uinstr0_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 768 "use_local_vars.m"
          {
#line 768 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 768 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 768 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 768 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if ((ll_backend__use_local_vars__Uinstr0_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "use_local_vars.m"
          {
#line 769 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 769 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 769 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 769 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 1))))
#line 750 "use_local_vars.m"
          {
#line 751 "use_local_vars.m"
            {
#line 751 "use_local_vars.m"
              ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
            }
#line 750 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 750 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 2))))
#line 761 "use_local_vars.m"
          {
#line 761 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 761 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 761 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 761 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 778 "use_local_vars.m"
          {
#line 778 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 778 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 778 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 778 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 648 "use_local_vars.m"
          {
#line 648 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 648 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Rval0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
#line 649 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_163_163;

#line 649 "use_local_vars.m"
            {
#line 649 "use_local_vars.m"
              ll_backend__use_local_vars__V_163_163 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_38, ll_backend__use_local_vars__OldLval_1);
            }
#line 649 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_163_163 == (MR_Integer) 1);
#line 655 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 652 "use_local_vars.m"
              {
#line 652 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__Rval_40;
#line 652 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__Uinstr_41;

#line 652 "use_local_vars.m"
                {
#line 652 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Rval0_39, &ll_backend__use_local_vars__Rval_40);
                }
#line 653 "use_local_vars.m"
                {
#line 653 "use_local_vars.m"
                  ll_backend__use_local_vars__Uinstr_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 653 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 653 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_41, 1) = ((MR_Box) (ll_backend__use_local_vars__Lval_38));
#line 653 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_41, 2) = ((MR_Box) (ll_backend__use_local_vars__Rval_40));
#line 653 "use_local_vars.m"
                }
#line 654 "use_local_vars.m"
                {
#line 654 "use_local_vars.m"
                  ll_backend__use_local_vars__Instr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 0) = ((MR_Box) (ll_backend__use_local_vars__Uinstr_41));
#line 654 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 1) = ((MR_Box) (ll_backend__use_local_vars__Comment_34));
#line 654 "use_local_vars.m"
                }
#line 652 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 652 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 652 "use_local_vars.m"
              }
#line 655 "use_local_vars.m"
            else
#line 656 "use_local_vars.m"
              {
#line 656 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_153_166;

#line 656 "use_local_vars.m"
                {
#line 656 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_153_166);
                }
#line 657 "use_local_vars.m"
                {
#line 657 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_153_166, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                }
#line 656 "use_local_vars.m"
              }
#line 648 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 645 "use_local_vars.m"
          {
#line 646 "use_local_vars.m"
            {
#line 646 "use_local_vars.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_instr_until_defn_2\'/8", (MR_String) "block");
#line 646 "use_local_vars.m"
              return;
            }
#line 645 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 757 "use_local_vars.m"
          {
#line 758 "use_local_vars.m"
            {
#line 758 "use_local_vars.m"
              ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
            }
#line 757 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 757 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 773 "use_local_vars.m"
          {
#line 773 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 773 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 773 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 773 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 774 "use_local_vars.m"
          {
#line 774 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 774 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 774 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 774 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 732 "use_local_vars.m"
          {
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Components_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__AffectsLiveness_80;
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 3)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 4)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 5)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 6)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 7)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 8)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 9)));
#line 732 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 10)));

#line 733 "use_local_vars.m"
            {
#line 733 "use_local_vars.m"
              ll_backend__use_local_vars__AffectsLiveness_80 = ll_backend__use_local_vars__components_affect_liveness_1_f_0(ll_backend__use_local_vars__Components_71);
            }
#line 746 "use_local_vars.m"
            if ((ll_backend__use_local_vars__AffectsLiveness_80 == (MR_Integer) 0))
#line 740 "use_local_vars.m"
              {
#line 736 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_126_126;

#line 736 "use_local_vars.m"
                {
#line 736 "use_local_vars.m"
                  ll_backend__use_local_vars__V_126_126 = ll_backend__use_local_vars__components_update_oldlval_2_f_0(ll_backend__use_local_vars__Components_71, ll_backend__use_local_vars__OldLval_1);
                }
#line 736 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_126_126 == (MR_Integer) 1);
#line 740 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 739 "use_local_vars.m"
                  {
#line 739 "use_local_vars.m"
                    *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 739 "use_local_vars.m"
                    ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 739 "use_local_vars.m"
                    ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 739 "use_local_vars.m"
                  }
#line 740 "use_local_vars.m"
                else
#line 742 "use_local_vars.m"
                  {
#line 742 "use_local_vars.m"
                    MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_115_128;

#line 741 "use_local_vars.m"
                    {
#line 741 "use_local_vars.m"
                      ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_115_128);
                    }
#line 743 "use_local_vars.m"
                    {
#line 743 "use_local_vars.m"
                      ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_115_128, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                    }
#line 742 "use_local_vars.m"
                  }
#line 740 "use_local_vars.m"
              }
#line 746 "use_local_vars.m"
            else
#line 747 "use_local_vars.m"
              {
#line 747 "use_local_vars.m"
                ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 747 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 747 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 747 "use_local_vars.m"
              }
#line 732 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 776 "use_local_vars.m"
          {
#line 776 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 776 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 776 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 776 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 765 "use_local_vars.m"
          {
#line 765 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 765 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 765 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 765 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 764 "use_local_vars.m"
          {
#line 764 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 764 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 764 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 764 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 753 "use_local_vars.m"
          {
#line 753 "use_local_vars.m"
            MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_108_121;

#line 754 "use_local_vars.m"
            {
#line 754 "use_local_vars.m"
              ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_108_121);
            }
#line 755 "use_local_vars.m"
            {
#line 755 "use_local_vars.m"
              ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_108_121, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
            }
#line 753 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 697 "use_local_vars.m"
          {
#line 697 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Lval_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 694 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
#line 694 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 3)));
#line 694 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 4)));
#line 694 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 5)));
#line 694 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 6)));
#line 694 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 7)));
#line 694 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 8)));
#line 698 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_141_141;

#line 698 "use_local_vars.m"
            {
#line 698 "use_local_vars.m"
              ll_backend__use_local_vars__V_141_141 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_189, ll_backend__use_local_vars__OldLval_1);
            }
#line 698 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_141_141 == (MR_Integer) 1);
#line 702 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 701 "use_local_vars.m"
              {
#line 701 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 701 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 701 "use_local_vars.m"
                ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 701 "use_local_vars.m"
              }
#line 702 "use_local_vars.m"
            else
#line 703 "use_local_vars.m"
              {
#line 703 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_130_143;

#line 703 "use_local_vars.m"
                {
#line 703 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_130_143);
                }
#line 704 "use_local_vars.m"
                {
#line 704 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_130_143, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                }
#line 703 "use_local_vars.m"
              }
#line 697 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 772 "use_local_vars.m"
          {
#line 772 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 772 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 772 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 772 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 775 "use_local_vars.m"
          {
#line 775 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 775 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 775 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 775 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 777 "use_local_vars.m"
          {
#line 777 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 777 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 777 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 777 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 660 "use_local_vars.m"
          {
#line 660 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Lval_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 660 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Rval0_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
#line 661 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_157_157;

#line 661 "use_local_vars.m"
            {
#line 661 "use_local_vars.m"
              ll_backend__use_local_vars__V_157_157 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_176, ll_backend__use_local_vars__OldLval_1);
            }
#line 661 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_157_157 == (MR_Integer) 1);
#line 667 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 664 "use_local_vars.m"
              {
#line 664 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__Rval_172;
#line 664 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__Uinstr_173;

#line 664 "use_local_vars.m"
                {
#line 664 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Rval0_177, &ll_backend__use_local_vars__Rval_172);
                }
#line 665 "use_local_vars.m"
                {
#line 665 "use_local_vars.m"
                  ll_backend__use_local_vars__Uinstr_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 665 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 665 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_173, 1) = ((MR_Box) (ll_backend__use_local_vars__Lval_176));
#line 665 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_173, 2) = ((MR_Box) (ll_backend__use_local_vars__Rval_172));
#line 665 "use_local_vars.m"
                }
#line 666 "use_local_vars.m"
                {
#line 666 "use_local_vars.m"
                  ll_backend__use_local_vars__Instr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 0) = ((MR_Box) (ll_backend__use_local_vars__Uinstr_173));
#line 666 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 1) = ((MR_Box) (ll_backend__use_local_vars__Comment_34));
#line 666 "use_local_vars.m"
                }
#line 664 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 664 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 664 "use_local_vars.m"
              }
#line 667 "use_local_vars.m"
            else
#line 668 "use_local_vars.m"
              {
#line 668 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_147_160;

#line 668 "use_local_vars.m"
                {
#line 668 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_147_160);
                }
#line 669 "use_local_vars.m"
                {
#line 669 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_147_160, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                }
#line 668 "use_local_vars.m"
              }
#line 660 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 760 "use_local_vars.m"
          {
#line 760 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 760 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 760 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 760 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 672 "use_local_vars.m"
          {
#line 672 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Lval_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
#line 672 "use_local_vars.m"
            MR_Integer ll_backend__use_local_vars___NumSlots_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 673 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_152_152;

#line 673 "use_local_vars.m"
            {
#line 673 "use_local_vars.m"
              ll_backend__use_local_vars__V_152_152 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_180, ll_backend__use_local_vars__OldLval_1);
            }
#line 673 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_152_152 == (MR_Integer) 1);
#line 677 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 676 "use_local_vars.m"
              {
#line 676 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 676 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 676 "use_local_vars.m"
                ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 676 "use_local_vars.m"
              }
#line 677 "use_local_vars.m"
            else
#line 678 "use_local_vars.m"
              {
#line 678 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_141_154;

#line 678 "use_local_vars.m"
                {
#line 678 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_141_154);
                }
#line 679 "use_local_vars.m"
                {
#line 679 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_141_154, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                }
#line 678 "use_local_vars.m"
              }
#line 672 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 682 "use_local_vars.m"
          {
#line 682 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Label_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 3)));
#line 682 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Lval_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
#line 682 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Rval0_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 683 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_146_146;

#line 683 "use_local_vars.m"
            {
#line 683 "use_local_vars.m"
              ll_backend__use_local_vars__V_146_146 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_185, ll_backend__use_local_vars__OldLval_1);
            }
#line 683 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_146_146 == (MR_Integer) 1);
#line 689 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 686 "use_local_vars.m"
              {
#line 686 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__Rval_181;
#line 686 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__Uinstr_182;

#line 686 "use_local_vars.m"
                {
#line 686 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Rval0_186, &ll_backend__use_local_vars__Rval_181);
                }
#line 687 "use_local_vars.m"
                {
#line 687 "use_local_vars.m"
                  ll_backend__use_local_vars__Uinstr_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 687 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 687 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_182, 1) = ((MR_Box) (ll_backend__use_local_vars__Rval_181));
#line 687 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_182, 2) = ((MR_Box) (ll_backend__use_local_vars__Lval_185));
#line 687 "use_local_vars.m"
                  MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_182, 3) = ((MR_Box) (ll_backend__use_local_vars__Label_43));
#line 687 "use_local_vars.m"
                }
#line 688 "use_local_vars.m"
                {
#line 688 "use_local_vars.m"
                  ll_backend__use_local_vars__Instr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 0) = ((MR_Box) (ll_backend__use_local_vars__Uinstr_182));
#line 688 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 1) = ((MR_Box) (ll_backend__use_local_vars__Comment_34));
#line 688 "use_local_vars.m"
                }
#line 686 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 686 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 686 "use_local_vars.m"
              }
#line 689 "use_local_vars.m"
            else
#line 690 "use_local_vars.m"
              {
#line 690 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_136_149;

#line 690 "use_local_vars.m"
                {
#line 690 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_136_149);
                }
#line 691 "use_local_vars.m"
                {
#line 691 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_136_149, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                }
#line 690 "use_local_vars.m"
              }
#line 682 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 762 "use_local_vars.m"
          {
#line 762 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 762 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 762 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 762 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 697 "use_local_vars.m"
          {
#line 697 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Lval_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 698 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_190_190;

#line 698 "use_local_vars.m"
            {
#line 698 "use_local_vars.m"
              ll_backend__use_local_vars__V_190_190 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_196, ll_backend__use_local_vars__OldLval_1);
            }
#line 698 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_190_190 == (MR_Integer) 1);
#line 702 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 701 "use_local_vars.m"
              {
#line 701 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 701 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 701 "use_local_vars.m"
                ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 701 "use_local_vars.m"
              }
#line 702 "use_local_vars.m"
            else
#line 703 "use_local_vars.m"
              {
#line 703 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_130_191;

#line 703 "use_local_vars.m"
                {
#line 703 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_130_191);
                }
#line 704 "use_local_vars.m"
                {
#line 704 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_130_191, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                }
#line 703 "use_local_vars.m"
              }
#line 697 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 770 "use_local_vars.m"
          {
#line 770 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 770 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 770 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 770 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 763 "use_local_vars.m"
          {
#line 763 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 763 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 763 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 763 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 771 "use_local_vars.m"
          {
#line 771 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 771 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 771 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 771 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 707 "use_local_vars.m"
          {
#line 707 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__NumLval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 4)));
#line 707 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__AddrLval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 5)));
#line 707 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 707 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
#line 707 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 3)));

#line 709 "use_local_vars.m"
            {
#line 709 "use_local_vars.m"
              MR_Word ll_backend__use_local_vars__V_136_136;

#line 709 "use_local_vars.m"
              {
#line 709 "use_local_vars.m"
                ll_backend__use_local_vars__V_136_136 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__NumLval_54, ll_backend__use_local_vars__OldLval_1);
              }
#line 709 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_136_136 == (MR_Integer) 1);
#line 709 "use_local_vars.m"
            }
#line 710 "use_local_vars.m"
            if (!(ll_backend__use_local_vars__succeeded))
#line 710 "use_local_vars.m"
              {
#line 710 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_135_135;

#line 710 "use_local_vars.m"
                {
#line 710 "use_local_vars.m"
                  ll_backend__use_local_vars__V_135_135 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__AddrLval_55, ll_backend__use_local_vars__OldLval_1);
                }
#line 710 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_135_135 == (MR_Integer) 1);
#line 710 "use_local_vars.m"
              }
#line 716 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 715 "use_local_vars.m"
              {
#line 715 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 715 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 715 "use_local_vars.m"
                ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 715 "use_local_vars.m"
              }
#line 716 "use_local_vars.m"
            else
#line 717 "use_local_vars.m"
              {
#line 717 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_125_138;

#line 717 "use_local_vars.m"
                {
#line 717 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_125_138);
                }
#line 718 "use_local_vars.m"
                {
#line 718 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_125_138, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                }
#line 717 "use_local_vars.m"
              }
#line 707 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 767 "use_local_vars.m"
          {
#line 767 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 767 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 767 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 767 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 697 "use_local_vars.m"
          {
#line 697 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Lval_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
#line 698 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_197_197;

#line 698 "use_local_vars.m"
            {
#line 698 "use_local_vars.m"
              ll_backend__use_local_vars__V_197_197 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_203, ll_backend__use_local_vars__OldLval_1);
            }
#line 698 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_197_197 == (MR_Integer) 1);
#line 702 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 701 "use_local_vars.m"
              {
#line 701 "use_local_vars.m"
                *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 701 "use_local_vars.m"
                ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 701 "use_local_vars.m"
                ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 701 "use_local_vars.m"
              }
#line 702 "use_local_vars.m"
            else
#line 703 "use_local_vars.m"
              {
#line 703 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_130_198;

#line 703 "use_local_vars.m"
                {
#line 703 "use_local_vars.m"
                  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_130_198);
                }
#line 704 "use_local_vars.m"
                {
#line 704 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_130_198, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                }
#line 703 "use_local_vars.m"
              }
#line 697 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 647 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 766 "use_local_vars.m"
          {
#line 766 "use_local_vars.m"
            ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
#line 766 "use_local_vars.m"
            ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
#line 766 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
#line 766 "use_local_vars.m"
          }
#line 647 "use_local_vars.m"
        else
#line 728 "use_local_vars.m"
          {
#line 728 "use_local_vars.m"
            MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_119_132;

#line 729 "use_local_vars.m"
            {
#line 729 "use_local_vars.m"
              ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_119_132);
            }
#line 730 "use_local_vars.m"
            {
#line 730 "use_local_vars.m"
              ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_119_132, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
            }
#line 728 "use_local_vars.m"
          }
#line 633 "use_local_vars.m"
        {
#line 633 "use_local_vars.m"
          MR_Word base;
#line 633 "use_local_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "use_local_vars.m"
          *ll_backend__use_local_vars__HeadVar__4_4 = base;
#line 633 "use_local_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_16));
#line 633 "use_local_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Instrs_17));
#line 633 "use_local_vars.m"
        }
#line 633 "use_local_vars.m"
      }
#line 631 "use_local_vars.m"
  }
#line 627 "use_local_vars.m"
}

#line 583 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(
#line 583 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 583 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
#line 583 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
#line 583 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
#line 583 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5,
#line 583 "use_local_vars.m"
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6)
#line 583 "use_local_vars.m"
{
#line 587 "use_local_vars.m"
  {
#line 587 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 587 "use_local_vars.m"
    if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "use_local_vars.m"
      {
#line 587 "use_local_vars.m"
        *ll_backend__use_local_vars__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "use_local_vars.m"
        *ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
#line 587 "use_local_vars.m"
      }
#line 587 "use_local_vars.m"
    else
#line 589 "use_local_vars.m"
      {
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Output0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Outputs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Output_16;
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Outputs_17;
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Dest0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 0)));
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 1)));
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 2)));
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__VarName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 3)));
#line 589 "use_local_vars.m"
        MR_String ll_backend__use_local_vars__OrigType_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 4)));
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__MaybeForeignType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 5)));
#line 589 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__BoxPolicy_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 6)));
#line 589 "use_local_vars.m"
        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_28_28;

#line 592 "use_local_vars.m"
        {
#line 592 "use_local_vars.m"
          ll_backend__use_local_vars__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__use_local_vars__Dest0_19, ll_backend__use_local_vars__HeadVar__1_1);
        }
#line 596 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 594 "use_local_vars.m"
          {
#line 593 "use_local_vars.m"
            {
#line 593 "use_local_vars.m"
              ll_backend__use_local_vars__Output_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 593 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 0) = ((MR_Box) (ll_backend__use_local_vars__HeadVar__2_2));
#line 593 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 1) = ((MR_Box) (ll_backend__use_local_vars__Type_20));
#line 593 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 2) = ((MR_Box) (ll_backend__use_local_vars__IsDummy_21));
#line 593 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 3) = ((MR_Box) (ll_backend__use_local_vars__VarName_22));
#line 593 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 4) = ((MR_Box) (ll_backend__use_local_vars__OrigType_23));
#line 593 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 5) = ((MR_Box) (ll_backend__use_local_vars__MaybeForeignType_24));
#line 593 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 6) = ((MR_Box) (ll_backend__use_local_vars__BoxPolicy_25));
#line 593 "use_local_vars.m"
            }
#line 595 "use_local_vars.m"
            ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_28_28 = (ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5 + (MR_Integer) 1);
#line 594 "use_local_vars.m"
          }
#line 596 "use_local_vars.m"
        else
#line 597 "use_local_vars.m"
          {
#line 597 "use_local_vars.m"
            ll_backend__use_local_vars__Output_16 = ll_backend__use_local_vars__Output0_14;
#line 597 "use_local_vars.m"
            ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_28_28 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
#line 597 "use_local_vars.m"
          }
#line 599 "use_local_vars.m"
        {
#line 599 "use_local_vars.m"
          ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(ll_backend__use_local_vars__HeadVar__1_1, ll_backend__use_local_vars__HeadVar__2_2, ll_backend__use_local_vars__Outputs0_15, &ll_backend__use_local_vars__Outputs_17, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_28_28, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6);
        }
#line 589 "use_local_vars.m"
        {
#line 589 "use_local_vars.m"
          MR_Word base;
#line 589 "use_local_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "use_local_vars.m"
          *ll_backend__use_local_vars__HeadVar__4_4 = base;
#line 589 "use_local_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Output_16));
#line 589 "use_local_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Outputs_17));
#line 589 "use_local_vars.m"
        }
#line 589 "use_local_vars.m"
      }
#line 587 "use_local_vars.m"
  }
#line 583 "use_local_vars.m"
}

#line 558 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(
#line 558 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 558 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
#line 558 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
#line 558 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
#line 558 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5,
#line 558 "use_local_vars.m"
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6)
#line 558 "use_local_vars.m"
{
#line 562 "use_local_vars.m"
  {
#line 562 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 562 "use_local_vars.m"
    if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 562 "use_local_vars.m"
      {
#line 562 "use_local_vars.m"
        *ll_backend__use_local_vars__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "use_local_vars.m"
        *ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
#line 562 "use_local_vars.m"
      }
#line 562 "use_local_vars.m"
    else
#line 564 "use_local_vars.m"
      {
#line 564 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Comp0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 564 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Comps0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 564 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Comp_16;
#line 564 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Comps_17;
#line 564 "use_local_vars.m"
        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33;

#line 570 "use_local_vars.m"
        if (((MR_tag((MR_Word) ll_backend__use_local_vars__Comp0_14)) == (MR_mktag((MR_Integer) 2))))
#line 566 "use_local_vars.m"
          {
#line 566 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Outputs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Comp0_14, (MR_Integer) 0)));
#line 566 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Outputs_20;

#line 567 "use_local_vars.m"
            {
#line 567 "use_local_vars.m"
              ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(ll_backend__use_local_vars__HeadVar__1_1, ll_backend__use_local_vars__HeadVar__2_2, ll_backend__use_local_vars__Outputs0_19, &ll_backend__use_local_vars__Outputs_20, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33);
            }
#line 569 "use_local_vars.m"
            {
#line 569 "use_local_vars.m"
              ll_backend__use_local_vars__Comp_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "use_local_vars.m"
              MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Comp_16, 0) = ((MR_Box) (ll_backend__use_local_vars__Outputs_20));
#line 569 "use_local_vars.m"
            }
#line 566 "use_local_vars.m"
          }
#line 570 "use_local_vars.m"
        else
#line 577 "use_local_vars.m"
          {
#line 578 "use_local_vars.m"
            ll_backend__use_local_vars__Comp_16 = ll_backend__use_local_vars__Comp0_14;
#line 577 "use_local_vars.m"
            ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
#line 577 "use_local_vars.m"
          }
#line 580 "use_local_vars.m"
        {
#line 580 "use_local_vars.m"
          ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(ll_backend__use_local_vars__HeadVar__1_1, ll_backend__use_local_vars__HeadVar__2_2, ll_backend__use_local_vars__Comps0_15, &ll_backend__use_local_vars__Comps_17, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6);
        }
#line 564 "use_local_vars.m"
        {
#line 564 "use_local_vars.m"
          MR_Word base;
#line 564 "use_local_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "use_local_vars.m"
          *ll_backend__use_local_vars__HeadVar__4_4 = base;
#line 564 "use_local_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Comp_16));
#line 564 "use_local_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Comps_17));
#line 564 "use_local_vars.m"
        }
#line 564 "use_local_vars.m"
      }
#line 562 "use_local_vars.m"
  }
#line 558 "use_local_vars.m"
}

#line 550 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3(
#line 550 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg)
#line 550 "use_local_vars.m"
{
#line 550 "use_local_vars.m"
  {
#line 550 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 550 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

#line 550 "use_local_vars.m"
    {
#line 550 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__550__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
#line 550 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 550 "use_local_vars.m"
  }
#line 550 "use_local_vars.m"
}

#line 541 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2(
#line 541 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg)
#line 541 "use_local_vars.m"
{
#line 541 "use_local_vars.m"
  {
#line 541 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 541 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

#line 541 "use_local_vars.m"
    {
#line 541 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__541__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
#line 541 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 541 "use_local_vars.m"
  }
#line 541 "use_local_vars.m"
}

#line 535 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1(
#line 535 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg)
#line 535 "use_local_vars.m"
{
#line 535 "use_local_vars.m"
  {
#line 535 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 535 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

#line 535 "use_local_vars.m"
    {
#line 535 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__535__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
#line 535 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 535 "use_local_vars.m"
  }
#line 535 "use_local_vars.m"
}

#line 527 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(
#line 527 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__OldLval_5,
#line 527 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__NewLval_6,
#line 527 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Instr0_7,
#line 527 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__Instr_8)
#line 527 "use_local_vars.m"
{
#line 530 "use_local_vars.m"
  {
#line 530 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 530 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__Uinstr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_7, (MR_Integer) 0)));
#line 530 "use_local_vars.m"
    MR_String ll_backend__use_local_vars__Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_7, (MR_Integer) 1)));
#line 530 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__Uinstr_13;
#line 537 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__ToLval_11;
#line 537 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__FromRval_12;

#line 533 "use_local_vars.m"
    ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 533 "use_local_vars.m"
    if (ll_backend__use_local_vars__succeeded)
#line 533 "use_local_vars.m"
      {
#line 533 "use_local_vars.m"
        ll_backend__use_local_vars__ToLval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 1)));
#line 533 "use_local_vars.m"
        ll_backend__use_local_vars__FromRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 2)));
#line 535 "use_local_vars.m"
        {
#line 535 "use_local_vars.m"
          MR_Word ll_backend__use_local_vars__V_33_33;

#line 535 "use_local_vars.m"
          {
#line 535 "use_local_vars.m"
            ll_backend__use_local_vars__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 535 "use_local_vars.m"
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_33_33, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[2]));
#line 535 "use_local_vars.m"
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_33_33, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1));
#line 535 "use_local_vars.m"
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 535 "use_local_vars.m"
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_33_33, 3) = ((MR_Box) (ll_backend__use_local_vars__OldLval_5));
#line 535 "use_local_vars.m"
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_33_33, 4) = ((MR_Box) (ll_backend__use_local_vars__ToLval_11));
#line 535 "use_local_vars.m"
          }
#line 535 "use_local_vars.m"
          {
#line 535 "use_local_vars.m"
            mercury__require__expect_4_p_0(ll_backend__use_local_vars__V_33_33, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in assign");
          }
#line 536 "use_local_vars.m"
          {
#line 536 "use_local_vars.m"
            ll_backend__use_local_vars__Uinstr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 536 "use_local_vars.m"
            MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "use_local_vars.m"
            MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 1) = ((MR_Box) (ll_backend__use_local_vars__NewLval_6));
#line 536 "use_local_vars.m"
            MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 2) = ((MR_Box) (ll_backend__use_local_vars__FromRval_12));
#line 536 "use_local_vars.m"
          }
#line 535 "use_local_vars.m"
        }
#line 533 "use_local_vars.m"
      }
#line 533 "use_local_vars.m"
    else
#line 544 "use_local_vars.m"
      {
#line 544 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__MaybeTag_14;
#line 544 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__SizeRval_15;
#line 544 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__MO_16;
#line 544 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Type_17;
#line 544 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__MayUseAtomic_18;
#line 544 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__MaybeRegionRval_19;
#line 544 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__MaybeReuse_20;
#line 544 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__ToLval_50;

#line 538 "use_local_vars.m"
        ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 538 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 538 "use_local_vars.m"
          {
#line 538 "use_local_vars.m"
            ll_backend__use_local_vars__ToLval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 1)));
#line 538 "use_local_vars.m"
            ll_backend__use_local_vars__MaybeTag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 2)));
#line 538 "use_local_vars.m"
            ll_backend__use_local_vars__SizeRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 3)));
#line 538 "use_local_vars.m"
            ll_backend__use_local_vars__MO_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 4)));
#line 538 "use_local_vars.m"
            ll_backend__use_local_vars__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 5)));
#line 538 "use_local_vars.m"
            ll_backend__use_local_vars__MayUseAtomic_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 6)));
#line 538 "use_local_vars.m"
            ll_backend__use_local_vars__MaybeRegionRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 7)));
#line 538 "use_local_vars.m"
            ll_backend__use_local_vars__MaybeReuse_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 8)));
#line 541 "use_local_vars.m"
            {
#line 541 "use_local_vars.m"
              MR_Word ll_backend__use_local_vars__V_37_37;

#line 541 "use_local_vars.m"
              {
#line 541 "use_local_vars.m"
                ll_backend__use_local_vars__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 541 "use_local_vars.m"
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_37_37, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[2]));
#line 541 "use_local_vars.m"
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_37_37, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2));
#line 541 "use_local_vars.m"
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 541 "use_local_vars.m"
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_37_37, 3) = ((MR_Box) (ll_backend__use_local_vars__OldLval_5));
#line 541 "use_local_vars.m"
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_37_37, 4) = ((MR_Box) (ll_backend__use_local_vars__ToLval_50));
#line 541 "use_local_vars.m"
              }
#line 541 "use_local_vars.m"
              {
#line 541 "use_local_vars.m"
                mercury__require__expect_4_p_0(ll_backend__use_local_vars__V_37_37, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in incr_hp");
              }
#line 542 "use_local_vars.m"
              {
#line 542 "use_local_vars.m"
                ll_backend__use_local_vars__Uinstr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 1) = ((MR_Box) (ll_backend__use_local_vars__NewLval_6));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 2) = ((MR_Box) (ll_backend__use_local_vars__MaybeTag_14));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 3) = ((MR_Box) (ll_backend__use_local_vars__SizeRval_15));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 4) = ((MR_Box) (ll_backend__use_local_vars__MO_16));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 5) = ((MR_Box) (ll_backend__use_local_vars__Type_17));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 6) = ((MR_Box) (ll_backend__use_local_vars__MayUseAtomic_18));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 7) = ((MR_Box) (ll_backend__use_local_vars__MaybeRegionRval_19));
#line 542 "use_local_vars.m"
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 8) = ((MR_Box) (ll_backend__use_local_vars__MaybeReuse_20));
#line 542 "use_local_vars.m"
              }
#line 541 "use_local_vars.m"
            }
#line 538 "use_local_vars.m"
          }
#line 538 "use_local_vars.m"
        else
#line 553 "use_local_vars.m"
          {
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__D_21;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Comps0_22;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__MCM_23;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__FNL_24;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__FL_25;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__FOL_26;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__NF_27;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__MDL_28;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__S_29;
#line 553 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__MD_30;

#line 545 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 545 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 545 "use_local_vars.m"
              {
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__D_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 1)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__Comps0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 2)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__MCM_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 3)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__FNL_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 4)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__FL_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 5)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__FOL_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 6)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__NF_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 7)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__MDL_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 8)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__S_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 9)));
#line 545 "use_local_vars.m"
                ll_backend__use_local_vars__MD_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 10)));
#line 549 "use_local_vars.m"
                {
#line 549 "use_local_vars.m"
                  MR_Word ll_backend__use_local_vars__Comps_31;
#line 549 "use_local_vars.m"
                  MR_Integer ll_backend__use_local_vars__NumSubsts_32;
#line 549 "use_local_vars.m"
                  MR_Word ll_backend__use_local_vars__V_42_42;

#line 548 "use_local_vars.m"
                  {
#line 548 "use_local_vars.m"
                    ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(ll_backend__use_local_vars__OldLval_5, ll_backend__use_local_vars__NewLval_6, ll_backend__use_local_vars__Comps0_22, &ll_backend__use_local_vars__Comps_31, (MR_Integer) 0, &ll_backend__use_local_vars__NumSubsts_32);
                  }
#line 550 "use_local_vars.m"
                  {
#line 550 "use_local_vars.m"
                    ll_backend__use_local_vars__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 550 "use_local_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[3]));
#line 550 "use_local_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3));
#line 550 "use_local_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 550 "use_local_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 3) = ((MR_Box) (ll_backend__use_local_vars__NumSubsts_32));
#line 550 "use_local_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 4) = ((MR_Box) ((MR_Integer) 1));
#line 550 "use_local_vars.m"
                  }
#line 550 "use_local_vars.m"
                  {
#line 550 "use_local_vars.m"
                    mercury__require__expect_4_p_0(ll_backend__use_local_vars__V_42_42, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in foreign_proc_code");
                  }
#line 552 "use_local_vars.m"
                  {
#line 552 "use_local_vars.m"
                    ll_backend__use_local_vars__Uinstr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 1) = ((MR_Box) (ll_backend__use_local_vars__D_21));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 2) = ((MR_Box) (ll_backend__use_local_vars__Comps_31));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 3) = ((MR_Box) (ll_backend__use_local_vars__MCM_23));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 4) = ((MR_Box) (ll_backend__use_local_vars__FNL_24));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 5) = ((MR_Box) (ll_backend__use_local_vars__FL_25));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 6) = ((MR_Box) (ll_backend__use_local_vars__FOL_26));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 7) = ((MR_Box) (ll_backend__use_local_vars__NF_27));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 8) = ((MR_Box) (ll_backend__use_local_vars__MDL_28));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 9) = ((MR_Box) (ll_backend__use_local_vars__S_29));
#line 552 "use_local_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 10) = ((MR_Box) (ll_backend__use_local_vars__MD_30));
#line 552 "use_local_vars.m"
                  }
#line 549 "use_local_vars.m"
                }
#line 545 "use_local_vars.m"
              }
#line 545 "use_local_vars.m"
            else
#line 554 "use_local_vars.m"
              {
#line 554 "use_local_vars.m"
                {
#line 554 "use_local_vars.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "unexpected instruction");
#line 554 "use_local_vars.m"
                  return;
                }
#line 554 "use_local_vars.m"
              }
#line 553 "use_local_vars.m"
          }
#line 544 "use_local_vars.m"
      }
#line 556 "use_local_vars.m"
    {
#line 556 "use_local_vars.m"
      MR_Word base;
#line 556 "use_local_vars.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "use_local_vars.m"
      *ll_backend__use_local_vars__Instr_8 = base;
#line 556 "use_local_vars.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Uinstr_13));
#line 556 "use_local_vars.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Comment_10));
#line 556 "use_local_vars.m"
    }
#line 530 "use_local_vars.m"
  }
#line 527 "use_local_vars.m"
}

#line 475 "use_local_vars.m"
static MR_Word MR_CALL 
ll_backend__use_local_vars__reg_type_for_lval_1_f_0(
#line 475 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Lval_3)
#line 475 "use_local_vars.m"
{
#line 479 "use_local_vars.m"
  {
#line 479 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 479 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__RegType_4;

#line 479 "use_local_vars.m"
    if (((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_3)) == (MR_mktag((MR_Integer) 1))))
#line 479 "use_local_vars.m"
      {
#line 479 "use_local_vars.m"
        MR_Integer ll_backend__use_local_vars__V_5_5;

#line 479 "use_local_vars.m"
        ll_backend__use_local_vars__RegType_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_3, (MR_Integer) 0)));
#line 479 "use_local_vars.m"
        ll_backend__use_local_vars__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_3, (MR_Integer) 1)));
#line 479 "use_local_vars.m"
      }
#line 479 "use_local_vars.m"
    else
#line 479 "use_local_vars.m"
    if (((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_3)) == (MR_mktag((MR_Integer) 2))))
#line 481 "use_local_vars.m"
      {
#line 481 "use_local_vars.m"
        MR_Integer ll_backend__use_local_vars__V_6_6;

#line 481 "use_local_vars.m"
        ll_backend__use_local_vars__RegType_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Lval_3, (MR_Integer) 0)));
#line 481 "use_local_vars.m"
        ll_backend__use_local_vars__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Lval_3, (MR_Integer) 1)));
#line 481 "use_local_vars.m"
      }
#line 479 "use_local_vars.m"
    else
#line 479 "use_local_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 484 "use_local_vars.m"
      ll_backend__use_local_vars__RegType_4 = (MR_Integer) 1;
#line 479 "use_local_vars.m"
    else
#line 505 "use_local_vars.m"
      ll_backend__use_local_vars__RegType_4 = (MR_Integer) 0;
#line 479 "use_local_vars.m"
    return ll_backend__use_local_vars__RegType_4;
#line 479 "use_local_vars.m"
  }
#line 475 "use_local_vars.m"
}

#line 468 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(
#line 468 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AlreadyTried_4,
#line 468 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
#line 468 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Lval_6)
#line 468 "use_local_vars.m"
{
#line 471 "use_local_vars.m"
  {
#line 471 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 472 "use_local_vars.m"
    {
#line 472 "use_local_vars.m"
      ll_backend__use_local_vars__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__use_local_vars__Lval_6)), ll_backend__use_local_vars__AlreadyTried_4);
    }
#line 472 "use_local_vars.m"
    ll_backend__use_local_vars__succeeded = !(ll_backend__use_local_vars__succeeded);
#line 471 "use_local_vars.m"
    if (ll_backend__use_local_vars__succeeded)
#line 456 "use_local_vars.m"
      {
#line 456 "use_local_vars.m"
        if (((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_6)) == (MR_mktag((MR_Integer) 1))))
#line 456 "use_local_vars.m"
          {
#line 456 "use_local_vars.m"
            MR_Integer ll_backend__use_local_vars__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_6, (MR_Integer) 1)));
#line 456 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_6, (MR_Integer) 0)));

#line 456 "use_local_vars.m"
            if ((ll_backend__use_local_vars__V_19_19 == (MR_Integer) 1))
#line 459 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
            else
#line 457 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_18_18 > ll_backend__use_local_vars__NumRealRRegs_5);
#line 456 "use_local_vars.m"
          }
#line 456 "use_local_vars.m"
        else
#line 456 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 465 "use_local_vars.m"
          ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
        else
#line 456 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 463 "use_local_vars.m"
          ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
        else
#line 456 "use_local_vars.m"
        if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 461 "use_local_vars.m"
          ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
        else
#line 456 "use_local_vars.m"
          ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 456 "use_local_vars.m"
      }
#line 471 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 471 "use_local_vars.m"
  }
#line 468 "use_local_vars.m"
}

#line 452 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_2_p_0(
#line 452 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_3,
#line 452 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Lval_4)
#line 452 "use_local_vars.m"
{
#line 456 "use_local_vars.m"
  {
#line 456 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;

#line 456 "use_local_vars.m"
    if (((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_4)) == (MR_mktag((MR_Integer) 1))))
#line 456 "use_local_vars.m"
      {
#line 456 "use_local_vars.m"
        MR_Integer ll_backend__use_local_vars__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_4, (MR_Integer) 1)));
#line 456 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_4, (MR_Integer) 0)));

#line 456 "use_local_vars.m"
        if ((ll_backend__use_local_vars__V_14_14 == (MR_Integer) 1))
#line 459 "use_local_vars.m"
          ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
        else
#line 457 "use_local_vars.m"
          ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_13_13 > ll_backend__use_local_vars__NumRealRRegs_3);
#line 456 "use_local_vars.m"
      }
#line 456 "use_local_vars.m"
    else
#line 456 "use_local_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 465 "use_local_vars.m"
      ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
    else
#line 456 "use_local_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 463 "use_local_vars.m"
      ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
    else
#line 456 "use_local_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 461 "use_local_vars.m"
      ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
    else
#line 456 "use_local_vars.m"
      ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 456 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 456 "use_local_vars.m"
  }
#line 452 "use_local_vars.m"
}

#line 419 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_2(
#line 419 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg)
#line 419 "use_local_vars.m"
{
#line 419 "use_local_vars.m"
  {
#line 419 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 419 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

#line 419 "use_local_vars.m"
    {
#line 419 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__419__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
#line 419 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 419 "use_local_vars.m"
  }
#line 419 "use_local_vars.m"
}

#line 411 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_1(
#line 411 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg,
#line 411 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1)
#line 411 "use_local_vars.m"
{
#line 411 "use_local_vars.m"
  {
#line 411 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 411 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

#line 411 "use_local_vars.m"
    {
#line 411 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_1));
    }
#line 411 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 411 "use_local_vars.m"
  }
#line 411 "use_local_vars.m"
}

#line 400 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0(
#line 400 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 400 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__2_2,
#line 400 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3,
#line 400 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4,
#line 400 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
#line 400 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AlreadyTried0_6,
#line 400 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__AccessThreshold_7)
#line 400 "use_local_vars.m"
{
#line 403 "use_local_vars.m"
  while (MR_TRUE)
#line 403 "use_local_vars.m"
    {
#line 403 "use_local_vars.m"
      /* tailcall optimized into a loop */
#line 403 "use_local_vars.m"
      {
#line 403 "use_local_vars.m"
        MR_bool ll_backend__use_local_vars__succeeded;

#line 403 "use_local_vars.m"
        if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "use_local_vars.m"
          {
#line 403 "use_local_vars.m"
            *ll_backend__use_local_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3;
#line 403 "use_local_vars.m"
          }
#line 403 "use_local_vars.m"
        else
#line 405 "use_local_vars.m"
          {
#line 405 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Instr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__TailInstrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 405 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Uinstr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_14, (MR_Integer) 0)));
#line 406 "use_local_vars.m"
            MR_String ll_backend__use_local_vars___Comment0_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_14, (MR_Integer) 1)));
#line 444 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__ChosenLval_27;
#line 444 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__ChooseableRvals_28;
#line 408 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__TypeCtorInfo_68_68;
#line 408 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__ToLval_23;
#line 408 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__FromRval_24;
#line 408 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__SubLvals_25;
#line 408 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__ReplaceableSubLvals_26;
#line 408 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_43_43;
#line 408 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_44_44;
#line 408 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_45_45;

#line 408 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 408 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 408 "use_local_vars.m"
              {
#line 408 "use_local_vars.m"
                ll_backend__use_local_vars__ToLval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_21, (MR_Integer) 1)));
#line 408 "use_local_vars.m"
                ll_backend__use_local_vars__FromRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_21, (MR_Integer) 2)));
#line 3708 "ll_backend.use_local_vars.c"
                ll_backend__use_local_vars__TypeCtorInfo_68_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 409 "use_local_vars.m"
                {
#line 409 "use_local_vars.m"
                  ll_backend__use_local_vars__V_43_43 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__use_local_vars__ToLval_23);
                }
#line 409 "use_local_vars.m"
                {
#line 409 "use_local_vars.m"
                  ll_backend__use_local_vars__V_44_44 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__use_local_vars__FromRval_24);
                }
#line 409 "use_local_vars.m"
                {
#line 409 "use_local_vars.m"
                  ll_backend__use_local_vars__SubLvals_25 = mercury__list__f_43_43_2_f_0(ll_backend__use_local_vars__TypeCtorInfo_68_68, ll_backend__use_local_vars__V_43_43, ll_backend__use_local_vars__V_44_44);
                }
#line 411 "use_local_vars.m"
                {
#line 411 "use_local_vars.m"
                  ll_backend__use_local_vars__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 411 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_45_45, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_5[1]));
#line 411 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_45_45, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_access_7_p_0_1));
#line 411 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 411 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_45_45, 3) = ((MR_Box) (ll_backend__use_local_vars__AlreadyTried0_6));
#line 411 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_45_45, 4) = ((MR_Box) (ll_backend__use_local_vars__NumRealRRegs_5));
#line 411 "use_local_vars.m"
                }
#line 410 "use_local_vars.m"
                {
#line 410 "use_local_vars.m"
                  mercury__list__filter_3_p_0(ll_backend__use_local_vars__TypeCtorInfo_68_68, ll_backend__use_local_vars__V_45_45, ll_backend__use_local_vars__SubLvals_25, &ll_backend__use_local_vars__ReplaceableSubLvals_26);
                }
#line 413 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__ReplaceableSubLvals_26)) == (MR_mktag((MR_Integer) 1)));
#line 413 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 413 "use_local_vars.m"
                  {
#line 413 "use_local_vars.m"
                    ll_backend__use_local_vars__ChosenLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ReplaceableSubLvals_26, (MR_Integer) 0)));
#line 413 "use_local_vars.m"
                    ll_backend__use_local_vars__ChooseableRvals_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ReplaceableSubLvals_26, (MR_Integer) 1)));
#line 413 "use_local_vars.m"
                  }
#line 408 "use_local_vars.m"
              }
#line 444 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 415 "use_local_vars.m"
              {
#line 415 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__TypeCtorInfo_71_71;
#line 415 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__TempNum_30;
#line 415 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__TempLval_31;
#line 415 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__SubChosenLvals_32;
#line 415 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__Instrs1_33;
#line 415 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__NumReplacements_34;
#line 415 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__AlreadyTried1_35;
#line 415 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_46_46;
#line 415 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_47_47;
#line 415 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_48_48;

#line 416 "use_local_vars.m"
                {
#line 416 "use_local_vars.m"
                  mercury__counter__allocate_3_p_0(&ll_backend__use_local_vars__TempNum_30, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, &ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_46_46);
                }
#line 479 "use_local_vars.m"
                if (((MR_tag((MR_Word) ll_backend__use_local_vars__ChosenLval_27)) == (MR_mktag((MR_Integer) 1))))
#line 479 "use_local_vars.m"
                  {
#line 479 "use_local_vars.m"
                    MR_Integer ll_backend__use_local_vars__V_75_75;

#line 479 "use_local_vars.m"
                    ll_backend__use_local_vars__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 0)));
#line 479 "use_local_vars.m"
                    ll_backend__use_local_vars__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 1)));
#line 479 "use_local_vars.m"
                  }
#line 479 "use_local_vars.m"
                else
#line 479 "use_local_vars.m"
                if (((MR_tag((MR_Word) ll_backend__use_local_vars__ChosenLval_27)) == (MR_mktag((MR_Integer) 2))))
#line 481 "use_local_vars.m"
                  {
#line 481 "use_local_vars.m"
                    MR_Integer ll_backend__use_local_vars__V_76_76;

#line 481 "use_local_vars.m"
                    ll_backend__use_local_vars__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 0)));
#line 481 "use_local_vars.m"
                    ll_backend__use_local_vars__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 1)));
#line 481 "use_local_vars.m"
                  }
#line 479 "use_local_vars.m"
                else
#line 479 "use_local_vars.m"
                if (((((MR_tag((MR_Word) ll_backend__use_local_vars__ChosenLval_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 484 "use_local_vars.m"
                  ll_backend__use_local_vars__V_47_47 = (MR_Integer) 1;
#line 479 "use_local_vars.m"
                else
#line 505 "use_local_vars.m"
                  ll_backend__use_local_vars__V_47_47 = (MR_Integer) 0;
#line 417 "use_local_vars.m"
                {
#line 417 "use_local_vars.m"
                  ll_backend__use_local_vars__TempLval_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "use_local_vars.m"
                  MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__TempLval_31, 0) = ((MR_Box) (ll_backend__use_local_vars__V_47_47));
#line 417 "use_local_vars.m"
                  MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__TempLval_31, 1) = ((MR_Box) (ll_backend__use_local_vars__TempNum_30));
#line 417 "use_local_vars.m"
                }
#line 418 "use_local_vars.m"
                {
#line 418 "use_local_vars.m"
                  ll_backend__use_local_vars__SubChosenLvals_32 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__use_local_vars__ChosenLval_27);
                }
#line 419 "use_local_vars.m"
                {
#line 419 "use_local_vars.m"
                  ll_backend__use_local_vars__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 419 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_48_48, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[1]));
#line 419 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_48_48, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_access_7_p_0_2));
#line 419 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 419 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_48_48, 3) = ((MR_Box) (ll_backend__use_local_vars__SubChosenLvals_32));
#line 419 "use_local_vars.m"
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "use_local_vars.m"
                }
#line 419 "use_local_vars.m"
                {
#line 419 "use_local_vars.m"
                  mercury__require__expect_4_p_0(ll_backend__use_local_vars__V_48_48, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.opt_access\'/7", (MR_String) "nonempty SubChosenLvals");
                }
#line 421 "use_local_vars.m"
                {
#line 421 "use_local_vars.m"
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__ChosenLval_27, ll_backend__use_local_vars__TempLval_31, ll_backend__use_local_vars__HeadVar__1_1, &ll_backend__use_local_vars__Instrs1_33, (MR_Integer) 0, &ll_backend__use_local_vars__NumReplacements_34);
                }
#line 3869 "ll_backend.use_local_vars.c"
                ll_backend__use_local_vars__TypeCtorInfo_71_71 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 423 "use_local_vars.m"
                {
#line 423 "use_local_vars.m"
                  mercury__set__insert_3_p_0(ll_backend__use_local_vars__TypeCtorInfo_71_71, ((MR_Box) (ll_backend__use_local_vars__ChosenLval_27)), ll_backend__use_local_vars__AlreadyTried0_6, &ll_backend__use_local_vars__AlreadyTried1_35);
                }
#line 424 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__NumReplacements_34 >= ll_backend__use_local_vars__AccessThreshold_7);
#line 430 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 426 "use_local_vars.m"
                  {
#line 426 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__TempAssign_36;
#line 426 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__Instrs2_37;
#line 426 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__V_55_55;
#line 426 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__V_56_56;

#line 425 "use_local_vars.m"
                    {
#line 425 "use_local_vars.m"
                      ll_backend__use_local_vars__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 425 "use_local_vars.m"
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_56_56, 0) = ((MR_Box) (ll_backend__use_local_vars__ChosenLval_27));
#line 425 "use_local_vars.m"
                    }
#line 425 "use_local_vars.m"
                    {
#line 425 "use_local_vars.m"
                      ll_backend__use_local_vars__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 425 "use_local_vars.m"
                      MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 425 "use_local_vars.m"
                      MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__V_55_55, 1) = ((MR_Box) (ll_backend__use_local_vars__TempLval_31));
#line 425 "use_local_vars.m"
                      MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__V_55_55, 2) = ((MR_Box) (ll_backend__use_local_vars__V_56_56));
#line 425 "use_local_vars.m"
                    }
#line 425 "use_local_vars.m"
                    {
#line 425 "use_local_vars.m"
                      ll_backend__use_local_vars__TempAssign_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 425 "use_local_vars.m"
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__TempAssign_36, 0) = ((MR_Box) (ll_backend__use_local_vars__V_55_55));
#line 425 "use_local_vars.m"
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__TempAssign_36, 1) = ((MR_Box) ((MR_String) "factor out common sub lval"));
#line 425 "use_local_vars.m"
                    }
#line 427 "use_local_vars.m"
                    {
#line 427 "use_local_vars.m"
                      ll_backend__use_local_vars__Instrs2_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "use_local_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs2_37, 0) = ((MR_Box) (ll_backend__use_local_vars__TempAssign_36));
#line 427 "use_local_vars.m"
                      MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs2_37, 1) = ((MR_Box) (ll_backend__use_local_vars__Instrs1_33));
#line 427 "use_local_vars.m"
                    }
#line 428 "use_local_vars.m"
                    /* direct tailcall eliminated */
#line 428 "use_local_vars.m"
                    {
#line 428 "use_local_vars.m"
                      MR_Word ll_backend__use_local_vars__HeadVar__1__tmp_copy_1 = ll_backend__use_local_vars__Instrs2_37;
#line 428 "use_local_vars.m"
                      MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0__tmp_copy_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_46_46;
#line 428 "use_local_vars.m"
                      MR_Word ll_backend__use_local_vars__AlreadyTried0__tmp_copy_6 = ll_backend__use_local_vars__AlreadyTried1_35;

#line 428 "use_local_vars.m"
                      ll_backend__use_local_vars__AlreadyTried0_6 = ll_backend__use_local_vars__AlreadyTried0__tmp_copy_6;
#line 428 "use_local_vars.m"
                      ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0__tmp_copy_3;
#line 428 "use_local_vars.m"
                      ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__HeadVar__1__tmp_copy_1;
#line 428 "use_local_vars.m"
                    }
#line 428 "use_local_vars.m"
                    continue;
#line 426 "use_local_vars.m"
                  }
#line 430 "use_local_vars.m"
                else
#line 436 "use_local_vars.m"
                if ((ll_backend__use_local_vars__ChooseableRvals_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "use_local_vars.m"
                  {
#line 437 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__TailInstrs_40;
#line 437 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__V_61_61;

#line 440 "use_local_vars.m"
                    {
#line 440 "use_local_vars.m"
                      ll_backend__use_local_vars__V_61_61 = mercury__set__init_0_f_0(ll_backend__use_local_vars__TypeCtorInfo_71_71);
                    }
#line 439 "use_local_vars.m"
                    {
#line 439 "use_local_vars.m"
                      ll_backend__use_local_vars__opt_access_7_p_0(ll_backend__use_local_vars__TailInstrs0_15, &ll_backend__use_local_vars__TailInstrs_40, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__V_61_61, ll_backend__use_local_vars__AccessThreshold_7);
                    }
#line 441 "use_local_vars.m"
                    {
#line 441 "use_local_vars.m"
                      MR_Word base;
#line 441 "use_local_vars.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "use_local_vars.m"
                      *ll_backend__use_local_vars__HeadVar__2_2 = base;
#line 441 "use_local_vars.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr0_14));
#line 441 "use_local_vars.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_40));
#line 441 "use_local_vars.m"
                    }
#line 437 "use_local_vars.m"
                  }
#line 436 "use_local_vars.m"
                else
#line 434 "use_local_vars.m"
                  {
#line 434 "use_local_vars.m"
                    /* direct tailcall eliminated */
#line 434 "use_local_vars.m"
                    {
#line 434 "use_local_vars.m"
                      MR_Word ll_backend__use_local_vars__AlreadyTried0__tmp_copy_6 = ll_backend__use_local_vars__AlreadyTried1_35;

#line 434 "use_local_vars.m"
                      ll_backend__use_local_vars__AlreadyTried0_6 = ll_backend__use_local_vars__AlreadyTried0__tmp_copy_6;
#line 434 "use_local_vars.m"
                    }
#line 434 "use_local_vars.m"
                    continue;
#line 434 "use_local_vars.m"
                  }
#line 415 "use_local_vars.m"
              }
#line 444 "use_local_vars.m"
            else
#line 446 "use_local_vars.m"
              {
#line 446 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_66_66;
#line 446 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__TailInstrs_67;

#line 446 "use_local_vars.m"
                {
#line 446 "use_local_vars.m"
                  ll_backend__use_local_vars__V_66_66 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                }
#line 445 "use_local_vars.m"
                {
#line 445 "use_local_vars.m"
                  ll_backend__use_local_vars__opt_access_7_p_0(ll_backend__use_local_vars__TailInstrs0_15, &ll_backend__use_local_vars__TailInstrs_67, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__V_66_66, ll_backend__use_local_vars__AccessThreshold_7);
                }
#line 447 "use_local_vars.m"
                {
#line 447 "use_local_vars.m"
                  MR_Word base;
#line 447 "use_local_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "use_local_vars.m"
                  *ll_backend__use_local_vars__HeadVar__2_2 = base;
#line 447 "use_local_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr0_14));
#line 447 "use_local_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_67));
#line 447 "use_local_vars.m"
                }
#line 446 "use_local_vars.m"
              }
#line 405 "use_local_vars.m"
          }
#line 403 "use_local_vars.m"
      }
#line 403 "use_local_vars.m"
      break;
#line 403 "use_local_vars.m"
    }
#line 400 "use_local_vars.m"
}

#line 369 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2(
#line 369 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg,
#line 369 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
#line 369 "use_local_vars.m"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_2)
#line 369 "use_local_vars.m"
{
#line 369 "use_local_vars.m"
  {
#line 369 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;
#line 369 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__conv1_HeadVar__3_65;

#line 369 "use_local_vars.m"
    {
#line 369 "use_local_vars.m"
      ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__369__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_1), &ll_backend__use_local_vars__conv1_HeadVar__3_65);
    }
#line 369 "use_local_vars.m"
    *ll_backend__use_local_vars__wrapper_arg_2 = ((MR_Box) (ll_backend__use_local_vars__conv1_HeadVar__3_65));
#line 369 "use_local_vars.m"
  }
#line 369 "use_local_vars.m"
}

#line 344 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1(
#line 344 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg)
#line 344 "use_local_vars.m"
{
#line 344 "use_local_vars.m"
  {
#line 344 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 344 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

#line 344 "use_local_vars.m"
    {
#line 344 "use_local_vars.m"
      return ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__344__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
#line 344 "use_local_vars.m"
    return ll_backend__use_local_vars__succeeded;
#line 344 "use_local_vars.m"
  }
#line 344 "use_local_vars.m"
}

#line 313 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(
#line 313 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 313 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_2,
#line 313 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeFallThrough_3,
#line 313 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__4_4,
#line 313 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__5_5)
#line 313 "use_local_vars.m"
{
#line 317 "use_local_vars.m"
  while (MR_TRUE)
#line 317 "use_local_vars.m"
    {
#line 317 "use_local_vars.m"
      /* tailcall optimized into a loop */
#line 317 "use_local_vars.m"
      {
#line 317 "use_local_vars.m"
        MR_bool ll_backend__use_local_vars__succeeded;

#line 317 "use_local_vars.m"
        if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "use_local_vars.m"
          if ((ll_backend__use_local_vars__MaybeFallThrough_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "use_local_vars.m"
            *ll_backend__use_local_vars__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 328 "use_local_vars.m"
          else
#line 319 "use_local_vars.m"
            {
#line 319 "use_local_vars.m"
              MR_Word ll_backend__use_local_vars__FallThrough_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeFallThrough_3, (MR_Integer) 0)));

#line 324 "use_local_vars.m"
              if ((ll_backend__use_local_vars__MaybeLiveMap_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "use_local_vars.m"
                *ll_backend__use_local_vars__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 324 "use_local_vars.m"
              else
#line 321 "use_local_vars.m"
                {
#line 321 "use_local_vars.m"
                  MR_Word ll_backend__use_local_vars__LiveMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeLiveMap_2, (MR_Integer) 0)));
#line 321 "use_local_vars.m"
                  MR_Word ll_backend__use_local_vars__CompulsoryLvals_12;
#line 322 "use_local_vars.m"
                  MR_Box ll_backend__use_local_vars__conv0_CompulsoryLvals_12;

#line 322 "use_local_vars.m"
                  {
#line 322 "use_local_vars.m"
                    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__use_local_vars_scalar_common_2[0], ll_backend__use_local_vars__LiveMap_11, ((MR_Box) (ll_backend__use_local_vars__FallThrough_10)), &ll_backend__use_local_vars__conv0_CompulsoryLvals_12);
                  }
#line 322 "use_local_vars.m"
                  ll_backend__use_local_vars__CompulsoryLvals_12 = ((MR_Word) ll_backend__use_local_vars__conv0_CompulsoryLvals_12);
#line 323 "use_local_vars.m"
                  {
#line 323 "use_local_vars.m"
                    MR_Word base;
#line 323 "use_local_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "use_local_vars.m"
                    *ll_backend__use_local_vars__HeadVar__5_5 = base;
#line 323 "use_local_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__CompulsoryLvals_12));
#line 323 "use_local_vars.m"
                  }
#line 321 "use_local_vars.m"
                }
#line 319 "use_local_vars.m"
            }
#line 317 "use_local_vars.m"
        else
#line 333 "use_local_vars.m"
          {
#line 333 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Instr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 333 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Instrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 333 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Uinstr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_13, (MR_Integer) 0)));
#line 334 "use_local_vars.m"
            MR_String ll_backend__use_local_vars__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_13, (MR_Integer) 1)));
#line 341 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__LiveLvals_21;

#line 336 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr_19)) == (MR_mktag((MR_Integer) 2)));
#line 336 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 336 "use_local_vars.m"
              {
#line 336 "use_local_vars.m"
                ll_backend__use_local_vars__LiveLvals_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 0)));
#line 339 "use_local_vars.m"
                {
#line 339 "use_local_vars.m"
                  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40;

#line 338 "use_local_vars.m"
                  {
#line 338 "use_local_vars.m"
                    ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(ll_backend__use_local_vars__Instrs_14, ll_backend__use_local_vars__MaybeLiveMap_2, ll_backend__use_local_vars__MaybeFallThrough_3, (MR_Integer) 1, &ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40);
                  }
#line 391 "use_local_vars.m"
                  if ((ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "use_local_vars.m"
                    *ll_backend__use_local_vars__HeadVar__5_5 = ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40;
#line 391 "use_local_vars.m"
                  else
#line 391 "use_local_vars.m"
                    {
#line 391 "use_local_vars.m"
                      MR_Word ll_backend__use_local_vars__OldCompulsoryLvals_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40, (MR_Integer) 0)));
#line 391 "use_local_vars.m"
                      MR_Word ll_backend__use_local_vars__AllCompulsoryLvals_76;

#line 392 "use_local_vars.m"
                      {
#line 392 "use_local_vars.m"
                        mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__use_local_vars__LiveLvals_21, ll_backend__use_local_vars__OldCompulsoryLvals_75, &ll_backend__use_local_vars__AllCompulsoryLvals_76);
                      }
#line 393 "use_local_vars.m"
                      {
#line 393 "use_local_vars.m"
                        MR_Word base;
#line 393 "use_local_vars.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "use_local_vars.m"
                        *ll_backend__use_local_vars__HeadVar__5_5 = base;
#line 393 "use_local_vars.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__AllCompulsoryLvals_76));
#line 393 "use_local_vars.m"
                      }
#line 391 "use_local_vars.m"
                    }
#line 339 "use_local_vars.m"
                }
#line 336 "use_local_vars.m"
              }
#line 336 "use_local_vars.m"
            else
#line 349 "use_local_vars.m"
              {
#line 342 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_22_22;
#line 342 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_23_23;
#line 342 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_24_24;
#line 342 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_25_25;
#line 342 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_26_26;
#line 342 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_27_27;

#line 342 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 342 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 342 "use_local_vars.m"
                  {
#line 342 "use_local_vars.m"
                    ll_backend__use_local_vars__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 1)));
#line 342 "use_local_vars.m"
                    ll_backend__use_local_vars__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 2)));
#line 342 "use_local_vars.m"
                    ll_backend__use_local_vars__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 3)));
#line 342 "use_local_vars.m"
                    ll_backend__use_local_vars__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 4)));
#line 342 "use_local_vars.m"
                    ll_backend__use_local_vars__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 5)));
#line 342 "use_local_vars.m"
                    ll_backend__use_local_vars__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 6)));
#line 345 "use_local_vars.m"
                    {
#line 345 "use_local_vars.m"
                      MR_Word ll_backend__use_local_vars__V_42_42;
#line 345 "use_local_vars.m"
                      MR_Word ll_backend__use_local_vars__V_48_48;

#line 344 "use_local_vars.m"
                      {
#line 344 "use_local_vars.m"
                        ll_backend__use_local_vars__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 344 "use_local_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[0]));
#line 344 "use_local_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 1) = ((MR_Box) (ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1));
#line 344 "use_local_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 344 "use_local_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 3) = ((MR_Box) (ll_backend__use_local_vars__HeadVar__4_4));
#line 344 "use_local_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_42_42, 4) = ((MR_Box) ((MR_Integer) 1));
#line 344 "use_local_vars.m"
                      }
#line 344 "use_local_vars.m"
                      {
#line 344 "use_local_vars.m"
                        mercury__require__expect_4_p_0(ll_backend__use_local_vars__V_42_42, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.find_compulsory_lvals\'/5", (MR_String) "call without livevals");
                      }
#line 348 "use_local_vars.m"
                      {
#line 348 "use_local_vars.m"
                        ll_backend__use_local_vars__V_48_48 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                      }
#line 348 "use_local_vars.m"
                      {
#line 348 "use_local_vars.m"
                        MR_Word base;
#line 348 "use_local_vars.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 348 "use_local_vars.m"
                        *ll_backend__use_local_vars__HeadVar__5_5 = base;
#line 348 "use_local_vars.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__V_48_48));
#line 348 "use_local_vars.m"
                      }
#line 345 "use_local_vars.m"
                    }
#line 342 "use_local_vars.m"
                  }
#line 342 "use_local_vars.m"
                else
#line 356 "use_local_vars.m"
                  {
#line 350 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars___Target_28;

#line 350 "use_local_vars.m"
                    ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 350 "use_local_vars.m"
                    if (ll_backend__use_local_vars__succeeded)
#line 350 "use_local_vars.m"
                      {
#line 350 "use_local_vars.m"
                        ll_backend__use_local_vars___Target_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 1)));
#line 351 "use_local_vars.m"
                        ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__HeadVar__4_4 == (MR_Integer) 1);
#line 350 "use_local_vars.m"
                      }
#line 356 "use_local_vars.m"
                    if (ll_backend__use_local_vars__succeeded)
#line 355 "use_local_vars.m"
                      {
#line 355 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__V_50_50;

#line 355 "use_local_vars.m"
                        {
#line 355 "use_local_vars.m"
                          ll_backend__use_local_vars__V_50_50 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                        }
#line 355 "use_local_vars.m"
                        {
#line 355 "use_local_vars.m"
                          MR_Word base;
#line 355 "use_local_vars.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "use_local_vars.m"
                          *ll_backend__use_local_vars__HeadVar__5_5 = base;
#line 355 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__V_50_50));
#line 355 "use_local_vars.m"
                        }
#line 355 "use_local_vars.m"
                      }
#line 356 "use_local_vars.m"
                    else
#line 357 "use_local_vars.m"
                      {
#line 357 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__Labels_29;
#line 357 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__NonLabelCodeAddrs_30;

#line 357 "use_local_vars.m"
                        {
#line 357 "use_local_vars.m"
                          ll_backend__opt_util__possible_targets_3_p_0(ll_backend__use_local_vars__Uinstr_19, &ll_backend__use_local_vars__Labels_29, &ll_backend__use_local_vars__NonLabelCodeAddrs_30);
                        }
#line 380 "use_local_vars.m"
                        if ((ll_backend__use_local_vars__NonLabelCodeAddrs_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "use_local_vars.m"
                          if ((ll_backend__use_local_vars__Labels_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "use_local_vars.m"
                            {
#line 363 "use_local_vars.m"
                              /* direct tailcall eliminated */
#line 363 "use_local_vars.m"
                              {
#line 363 "use_local_vars.m"
                                MR_Word ll_backend__use_local_vars__HeadVar__1__tmp_copy_1 = ll_backend__use_local_vars__Instrs_14;

#line 363 "use_local_vars.m"
                                ll_backend__use_local_vars__HeadVar__4_4 = (MR_Integer) 0;
#line 363 "use_local_vars.m"
                                ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__HeadVar__1__tmp_copy_1;
#line 363 "use_local_vars.m"
                              }
#line 363 "use_local_vars.m"
                              continue;
#line 361 "use_local_vars.m"
                            }
#line 365 "use_local_vars.m"
                          else
#line 375 "use_local_vars.m"
                          if ((ll_backend__use_local_vars__MaybeLiveMap_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "use_local_vars.m"
                            *ll_backend__use_local_vars__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "use_local_vars.m"
                          else
#line 368 "use_local_vars.m"
                            {
#line 368 "use_local_vars.m"
                              MR_Word ll_backend__use_local_vars__LiveMap_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeLiveMap_2, (MR_Integer) 0)));
#line 368 "use_local_vars.m"
                              MR_Word ll_backend__use_local_vars__LabelsLiveLvals_34;
#line 368 "use_local_vars.m"
                              MR_Word ll_backend__use_local_vars__AllLabelsLiveLvals_35;
#line 368 "use_local_vars.m"
                              MR_Word ll_backend__use_local_vars__V_53_53;
#line 368 "use_local_vars.m"
                              MR_Word ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55;

#line 369 "use_local_vars.m"
                              {
#line 369 "use_local_vars.m"
                                ll_backend__use_local_vars__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 369 "use_local_vars.m"
                                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_53_53, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_5[0]));
#line 369 "use_local_vars.m"
                                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_53_53, 1) = ((MR_Box) (ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2));
#line 369 "use_local_vars.m"
                                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 369 "use_local_vars.m"
                                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_53_53, 3) = ((MR_Box) (ll_backend__use_local_vars__LiveMap_33));
#line 369 "use_local_vars.m"
                              }
#line 369 "use_local_vars.m"
                              {
#line 369 "use_local_vars.m"
                                mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__use_local_vars_scalar_common_2[0], ll_backend__use_local_vars__V_53_53, ll_backend__use_local_vars__Labels_29, &ll_backend__use_local_vars__LabelsLiveLvals_34);
                              }
#line 370 "use_local_vars.m"
                              {
#line 370 "use_local_vars.m"
                                ll_backend__use_local_vars__AllLabelsLiveLvals_35 = mercury__set__union_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__use_local_vars__LabelsLiveLvals_34);
                              }
#line 371 "use_local_vars.m"
                              {
#line 371 "use_local_vars.m"
                                ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(ll_backend__use_local_vars__Instrs_14, ll_backend__use_local_vars__MaybeLiveMap_2, ll_backend__use_local_vars__MaybeFallThrough_3, (MR_Integer) 0, &ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55);
                              }
#line 391 "use_local_vars.m"
                              if ((ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "use_local_vars.m"
                                *ll_backend__use_local_vars__HeadVar__5_5 = ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55;
#line 391 "use_local_vars.m"
                              else
#line 391 "use_local_vars.m"
                                {
#line 391 "use_local_vars.m"
                                  MR_Word ll_backend__use_local_vars__OldCompulsoryLvals_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55, (MR_Integer) 0)));
#line 391 "use_local_vars.m"
                                  MR_Word ll_backend__use_local_vars__AllCompulsoryLvals_84;

#line 392 "use_local_vars.m"
                                  {
#line 392 "use_local_vars.m"
                                    mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__use_local_vars__AllLabelsLiveLvals_35, ll_backend__use_local_vars__OldCompulsoryLvals_83, &ll_backend__use_local_vars__AllCompulsoryLvals_84);
                                  }
#line 393 "use_local_vars.m"
                                  {
#line 393 "use_local_vars.m"
                                    MR_Word base;
#line 393 "use_local_vars.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "use_local_vars.m"
                                    *ll_backend__use_local_vars__HeadVar__5_5 = base;
#line 393 "use_local_vars.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__AllCompulsoryLvals_84));
#line 393 "use_local_vars.m"
                                  }
#line 391 "use_local_vars.m"
                                }
#line 368 "use_local_vars.m"
                            }
#line 380 "use_local_vars.m"
                        else
#line 382 "use_local_vars.m"
                          *ll_backend__use_local_vars__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "use_local_vars.m"
                      }
#line 356 "use_local_vars.m"
                  }
#line 349 "use_local_vars.m"
              }
#line 333 "use_local_vars.m"
          }
#line 317 "use_local_vars.m"
      }
#line 317 "use_local_vars.m"
      break;
#line 317 "use_local_vars.m"
    }
#line 313 "use_local_vars.m"
}

#line 290 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(
#line 290 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 290 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_7,
#line 290 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AvoidLvals_8,
#line 290 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__ToLval_9)
#line 290 "use_local_vars.m"
{
#line 294 "use_local_vars.m"
  while (MR_TRUE)
#line 294 "use_local_vars.m"
    {
#line 294 "use_local_vars.m"
      /* tailcall optimized into a loop */
#line 294 "use_local_vars.m"
      {
#line 294 "use_local_vars.m"
        MR_bool ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 294 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Output_5;
#line 294 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Outputs_6;
#line 294 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Dest_10;
#line 295 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars___Type_11;
#line 295 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars___IsDummy_12;
#line 295 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars___VarName_13;
#line 295 "use_local_vars.m"
        MR_String ll_backend__use_local_vars___OrigType_14;
#line 295 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars___MaybeForeignType_15;
#line 295 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars___BoxPolicy_16;
#line 299 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__TypeCtorInfo_17_17;

#line 293 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 293 "use_local_vars.m"
          {
#line 293 "use_local_vars.m"
            ll_backend__use_local_vars__Output_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "use_local_vars.m"
            ll_backend__use_local_vars__Outputs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "use_local_vars.m"
            ll_backend__use_local_vars__Dest_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 0)));
#line 295 "use_local_vars.m"
            ll_backend__use_local_vars___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 1)));
#line 295 "use_local_vars.m"
            ll_backend__use_local_vars___IsDummy_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 2)));
#line 295 "use_local_vars.m"
            ll_backend__use_local_vars___VarName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 3)));
#line 295 "use_local_vars.m"
            ll_backend__use_local_vars___OrigType_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 4)));
#line 295 "use_local_vars.m"
            ll_backend__use_local_vars___MaybeForeignType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 5)));
#line 295 "use_local_vars.m"
            ll_backend__use_local_vars___BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 6)));
#line 456 "use_local_vars.m"
            if (((MR_tag((MR_Word) ll_backend__use_local_vars__Dest_10)) == (MR_mktag((MR_Integer) 1))))
#line 456 "use_local_vars.m"
              {
#line 456 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Dest_10, (MR_Integer) 1)));
#line 456 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Dest_10, (MR_Integer) 0)));

#line 456 "use_local_vars.m"
                if ((ll_backend__use_local_vars__V_29_29 == (MR_Integer) 1))
#line 459 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
                else
#line 457 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__V_28_28 > ll_backend__use_local_vars__NumRealRRegs_7);
#line 456 "use_local_vars.m"
              }
#line 456 "use_local_vars.m"
            else
#line 456 "use_local_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Dest_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Dest_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 465 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
            else
#line 456 "use_local_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Dest_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Dest_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 463 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
            else
#line 456 "use_local_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Dest_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Dest_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 461 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 456 "use_local_vars.m"
            else
#line 456 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 298 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 298 "use_local_vars.m"
              {
#line 4642 "ll_backend.use_local_vars.c"
                ll_backend__use_local_vars__TypeCtorInfo_17_17 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 299 "use_local_vars.m"
                {
#line 299 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = mercury__list__member_2_p_0(ll_backend__use_local_vars__TypeCtorInfo_17_17, ((MR_Box) (ll_backend__use_local_vars__Dest_10)), ll_backend__use_local_vars__AvoidLvals_8);
                }
#line 299 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = !(ll_backend__use_local_vars__succeeded);
#line 298 "use_local_vars.m"
              }
#line 302 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 301 "use_local_vars.m"
              {
#line 301 "use_local_vars.m"
                *ll_backend__use_local_vars__ToLval_9 = ll_backend__use_local_vars__Dest_10;
#line 301 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 301 "use_local_vars.m"
              }
#line 302 "use_local_vars.m"
            else
#line 303 "use_local_vars.m"
              {
#line 303 "use_local_vars.m"
                /* direct tailcall eliminated */
#line 303 "use_local_vars.m"
                {
#line 303 "use_local_vars.m"
                  MR_Word ll_backend__use_local_vars__HeadVar__1__tmp_copy_1 = ll_backend__use_local_vars__Outputs_6;

#line 303 "use_local_vars.m"
                  ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__HeadVar__1__tmp_copy_1;
#line 303 "use_local_vars.m"
                }
#line 303 "use_local_vars.m"
                continue;
#line 303 "use_local_vars.m"
              }
#line 293 "use_local_vars.m"
          }
#line 294 "use_local_vars.m"
        return ll_backend__use_local_vars__succeeded;
#line 294 "use_local_vars.m"
      }
#line 294 "use_local_vars.m"
      break;
#line 294 "use_local_vars.m"
    }
#line 290 "use_local_vars.m"
}

#line 274 "use_local_vars.m"
static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(
#line 274 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 274 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_7,
#line 274 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AvoidLvals_8,
#line 274 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__ToLval_9)
#line 274 "use_local_vars.m"
{
#line 278 "use_local_vars.m"
  while (MR_TRUE)
#line 278 "use_local_vars.m"
    {
#line 278 "use_local_vars.m"
      /* tailcall optimized into a loop */
#line 278 "use_local_vars.m"
      {
#line 278 "use_local_vars.m"
        MR_bool ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 278 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Comp_5;
#line 278 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Comps_6;
#line 285 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__ToLvalPrime_11;
#line 280 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Outputs_10;

#line 277 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 277 "use_local_vars.m"
          {
#line 277 "use_local_vars.m"
            ll_backend__use_local_vars__Comp_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 277 "use_local_vars.m"
            ll_backend__use_local_vars__Comps_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 280 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__Comp_5)) == (MR_mktag((MR_Integer) 2)));
#line 280 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 280 "use_local_vars.m"
              {
#line 280 "use_local_vars.m"
                ll_backend__use_local_vars__Outputs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Comp_5, (MR_Integer) 0)));
#line 281 "use_local_vars.m"
                {
#line 281 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(ll_backend__use_local_vars__Outputs_10, ll_backend__use_local_vars__NumRealRRegs_7, ll_backend__use_local_vars__AvoidLvals_8, &ll_backend__use_local_vars__ToLvalPrime_11);
                }
#line 280 "use_local_vars.m"
              }
#line 285 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 284 "use_local_vars.m"
              {
#line 284 "use_local_vars.m"
                *ll_backend__use_local_vars__ToLval_9 = ll_backend__use_local_vars__ToLvalPrime_11;
#line 284 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 284 "use_local_vars.m"
              }
#line 285 "use_local_vars.m"
            else
#line 286 "use_local_vars.m"
              {
#line 286 "use_local_vars.m"
                /* direct tailcall eliminated */
#line 286 "use_local_vars.m"
                {
#line 286 "use_local_vars.m"
                  MR_Word ll_backend__use_local_vars__HeadVar__1__tmp_copy_1 = ll_backend__use_local_vars__Comps_6;

#line 286 "use_local_vars.m"
                  ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__HeadVar__1__tmp_copy_1;
#line 286 "use_local_vars.m"
                }
#line 286 "use_local_vars.m"
                continue;
#line 286 "use_local_vars.m"
              }
#line 277 "use_local_vars.m"
          }
#line 278 "use_local_vars.m"
        return ll_backend__use_local_vars__succeeded;
#line 278 "use_local_vars.m"
      }
#line 278 "use_local_vars.m"
      break;
#line 278 "use_local_vars.m"
    }
#line 274 "use_local_vars.m"
}

#line 219 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0_1(
#line 219 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg,
#line 219 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
#line 219 "use_local_vars.m"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_2,
#line 219 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_3,
#line 219 "use_local_vars.m"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_4)
#line 219 "use_local_vars.m"
{
#line 219 "use_local_vars.m"
  {
#line 219 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;
#line 219 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__conv1_HeadVar__4_4;
#line 219 "use_local_vars.m"
    MR_Integer ll_backend__use_local_vars__conv0_HeadVar__6_6;

#line 219 "use_local_vars.m"
    {
#line 219 "use_local_vars.m"
      ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_1), &ll_backend__use_local_vars__conv1_HeadVar__4_4, ((MR_Integer) ll_backend__use_local_vars__wrapper_arg_3), &ll_backend__use_local_vars__conv0_HeadVar__6_6);
    }
#line 219 "use_local_vars.m"
    *ll_backend__use_local_vars__wrapper_arg_2 = ((MR_Box) (ll_backend__use_local_vars__conv1_HeadVar__4_4));
#line 219 "use_local_vars.m"
    *ll_backend__use_local_vars__wrapper_arg_4 = ((MR_Box) (ll_backend__use_local_vars__conv0_HeadVar__6_6));
#line 219 "use_local_vars.m"
  }
#line 219 "use_local_vars.m"
}

#line 181 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0(
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
#line 181 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__HeadVar__2_2,
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3,
#line 181 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4,
#line 181 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6,
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_7,
#line 181 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeFallThrough_8)
#line 181 "use_local_vars.m"
{
#line 185 "use_local_vars.m"
  while (MR_TRUE)
#line 185 "use_local_vars.m"
    {
#line 185 "use_local_vars.m"
      /* tailcall optimized into a loop */
#line 185 "use_local_vars.m"
      {
#line 185 "use_local_vars.m"
        MR_bool ll_backend__use_local_vars__succeeded;

#line 185 "use_local_vars.m"
        if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "use_local_vars.m"
          {
#line 185 "use_local_vars.m"
            *ll_backend__use_local_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "use_local_vars.m"
            *ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3;
#line 185 "use_local_vars.m"
          }
#line 185 "use_local_vars.m"
        else
#line 187 "use_local_vars.m"
          {
#line 187 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Instr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 187 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__TailInstrs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 187 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__Uinstr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_16, (MR_Integer) 0)));
#line 188 "use_local_vars.m"
            MR_String ll_backend__use_local_vars___Comment0_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_16, (MR_Integer) 1)));
#line 268 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__ToLval_26;
#line 268 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__MaybeMore_35;

#line 200 "use_local_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 197 "use_local_vars.m"
              {
#line 193 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___FromRval_27;

#line 193 "use_local_vars.m"
                ll_backend__use_local_vars__ToLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 1)));
#line 193 "use_local_vars.m"
                ll_backend__use_local_vars___FromRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 2)));
#line 198 "use_local_vars.m"
                {
#line 198 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__base_lval_worth_replacing_2_p_0(ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__ToLval_26);
                }
#line 197 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 197 "use_local_vars.m"
                  {
#line 199 "use_local_vars.m"
                    ll_backend__use_local_vars__MaybeMore_35 = (MR_Integer) 0;
#line 199 "use_local_vars.m"
                    ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 197 "use_local_vars.m"
                  }
#line 197 "use_local_vars.m"
              }
#line 200 "use_local_vars.m"
            else
#line 200 "use_local_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 202 "use_local_vars.m"
              {
#line 202 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__Comps_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 2)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___D_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 1)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___MCM_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 3)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___FNL_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 4)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___FL_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 5)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___FOL_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 6)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___NF_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 7)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___MDL_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 8)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___S_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 9)));
#line 201 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___MD_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 10)));

#line 203 "use_local_vars.m"
                {
#line 203 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(ll_backend__use_local_vars__Comps_37, ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6, &ll_backend__use_local_vars__ToLval_26);
                }
#line 202 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 202 "use_local_vars.m"
                  {
#line 205 "use_local_vars.m"
                    ll_backend__use_local_vars__MaybeMore_35 = (MR_Integer) 1;
#line 205 "use_local_vars.m"
                    ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 202 "use_local_vars.m"
                  }
#line 202 "use_local_vars.m"
              }
#line 200 "use_local_vars.m"
            else
#line 200 "use_local_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 197 "use_local_vars.m"
              {
#line 195 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___MaybeTag_28;
#line 195 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___SizeRval_29;
#line 195 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___MO_30;
#line 195 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___Type_31;
#line 195 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars___Atomic_32;
#line 195 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_33_33;
#line 195 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_34_34;

#line 195 "use_local_vars.m"
                ll_backend__use_local_vars__ToLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 1)));
#line 195 "use_local_vars.m"
                ll_backend__use_local_vars___MaybeTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 2)));
#line 195 "use_local_vars.m"
                ll_backend__use_local_vars___SizeRval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 3)));
#line 195 "use_local_vars.m"
                ll_backend__use_local_vars___MO_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 4)));
#line 195 "use_local_vars.m"
                ll_backend__use_local_vars___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 5)));
#line 195 "use_local_vars.m"
                ll_backend__use_local_vars___Atomic_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 6)));
#line 195 "use_local_vars.m"
                ll_backend__use_local_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 7)));
#line 195 "use_local_vars.m"
                ll_backend__use_local_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 8)));
#line 198 "use_local_vars.m"
                {
#line 198 "use_local_vars.m"
                  ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__base_lval_worth_replacing_2_p_0(ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__ToLval_26);
                }
#line 197 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 197 "use_local_vars.m"
                  {
#line 199 "use_local_vars.m"
                    ll_backend__use_local_vars__MaybeMore_35 = (MR_Integer) 0;
#line 199 "use_local_vars.m"
                    ll_backend__use_local_vars__succeeded = MR_TRUE;
#line 197 "use_local_vars.m"
                  }
#line 197 "use_local_vars.m"
              }
#line 200 "use_local_vars.m"
            else
#line 200 "use_local_vars.m"
              ll_backend__use_local_vars__succeeded = MR_FALSE;
#line 268 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 233 "use_local_vars.m"
              {
#line 209 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__MaybeCompulsoryLvals_48;
#line 209 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__CompulsoryLvals_49;
#line 209 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_62_62;
#line 209 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__V_46_46;
#line 209 "use_local_vars.m"
                MR_Integer ll_backend__use_local_vars__V_47_47;
#line 213 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__TypeCtorInfo_122_122;

#line 209 "use_local_vars.m"
                ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__ToLval_26)) == (MR_mktag((MR_Integer) 1)));
#line 209 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 209 "use_local_vars.m"
                  {
#line 209 "use_local_vars.m"
                    ll_backend__use_local_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ToLval_26, (MR_Integer) 0)));
#line 209 "use_local_vars.m"
                    ll_backend__use_local_vars__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ToLval_26, (MR_Integer) 1)));
#line 211 "use_local_vars.m"
                    ll_backend__use_local_vars__V_62_62 = (MR_Integer) 0;
#line 210 "use_local_vars.m"
                    {
#line 210 "use_local_vars.m"
                      ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(ll_backend__use_local_vars__TailInstrs0_17, ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8, ll_backend__use_local_vars__V_62_62, &ll_backend__use_local_vars__MaybeCompulsoryLvals_48);
                    }
#line 212 "use_local_vars.m"
                    ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__MaybeCompulsoryLvals_48)) == (MR_mktag((MR_Integer) 1)));
#line 212 "use_local_vars.m"
                    if (ll_backend__use_local_vars__succeeded)
#line 212 "use_local_vars.m"
                      {
#line 212 "use_local_vars.m"
                        ll_backend__use_local_vars__CompulsoryLvals_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeCompulsoryLvals_48, (MR_Integer) 0)));
#line 5061 "ll_backend.use_local_vars.c"
                        ll_backend__use_local_vars__TypeCtorInfo_122_122 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 213 "use_local_vars.m"
                        {
#line 213 "use_local_vars.m"
                          ll_backend__use_local_vars__succeeded = mercury__set__member_2_p_0(ll_backend__use_local_vars__TypeCtorInfo_122_122, ((MR_Box) (ll_backend__use_local_vars__ToLval_26)), ll_backend__use_local_vars__CompulsoryLvals_49);
                        }
#line 213 "use_local_vars.m"
                        ll_backend__use_local_vars__succeeded = !(ll_backend__use_local_vars__succeeded);
#line 212 "use_local_vars.m"
                      }
#line 209 "use_local_vars.m"
                  }
#line 233 "use_local_vars.m"
                if (ll_backend__use_local_vars__succeeded)
#line 215 "use_local_vars.m"
                  {
#line 215 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__TypeCtorInfo_127_127;
#line 215 "use_local_vars.m"
                    MR_Integer ll_backend__use_local_vars__TempNum_50;
#line 215 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__NewLval_51;
#line 215 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__Instr_52;
#line 215 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__TailInstrs1_53;
#line 215 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_63_63;
#line 215 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__V_64_64;
#line 215 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__V_65_65;
#line 479 "use_local_vars.m"
                    MR_Integer ll_backend__use_local_vars__V_131_131;
#line 218 "use_local_vars.m"
                    MR_Integer ll_backend__use_local_vars__V_54_54;
#line 218 "use_local_vars.m"
                    MR_Box ll_backend__use_local_vars__conv2_V_54_54;

#line 215 "use_local_vars.m"
                    {
#line 215 "use_local_vars.m"
                      mercury__counter__allocate_3_p_0(&ll_backend__use_local_vars__TempNum_50, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, &ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_63_63);
                    }
#line 479 "use_local_vars.m"
                    ll_backend__use_local_vars__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ToLval_26, (MR_Integer) 0)));
#line 479 "use_local_vars.m"
                    ll_backend__use_local_vars__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ToLval_26, (MR_Integer) 1)));
#line 216 "use_local_vars.m"
                    {
#line 216 "use_local_vars.m"
                      ll_backend__use_local_vars__NewLval_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "use_local_vars.m"
                      MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__NewLval_51, 0) = ((MR_Box) (ll_backend__use_local_vars__V_64_64));
#line 216 "use_local_vars.m"
                      MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__NewLval_51, 1) = ((MR_Box) (ll_backend__use_local_vars__TempNum_50));
#line 216 "use_local_vars.m"
                    }
#line 217 "use_local_vars.m"
                    {
#line 217 "use_local_vars.m"
                      ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(ll_backend__use_local_vars__ToLval_26, ll_backend__use_local_vars__NewLval_51, ll_backend__use_local_vars__Instr0_16, &ll_backend__use_local_vars__Instr_52);
                    }
#line 219 "use_local_vars.m"
                    {
#line 219 "use_local_vars.m"
                      ll_backend__use_local_vars__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 219 "use_local_vars.m"
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_65_65, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_3[1]));
#line 219 "use_local_vars.m"
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_65_65, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_assign_8_p_0_1));
#line 219 "use_local_vars.m"
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 219 "use_local_vars.m"
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_65_65, 3) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
#line 219 "use_local_vars.m"
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_65_65, 4) = ((MR_Box) (ll_backend__use_local_vars__NewLval_51));
#line 219 "use_local_vars.m"
                    }
#line 5141 "ll_backend.use_local_vars.c"
                    ll_backend__use_local_vars__TypeCtorInfo_127_127 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 218 "use_local_vars.m"
                    {
#line 218 "use_local_vars.m"
                      mercury__list__map_foldl_5_p_0(ll_backend__use_local_vars__TypeCtorInfo_127_127, ll_backend__use_local_vars__TypeCtorInfo_127_127, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__use_local_vars__V_65_65, ll_backend__use_local_vars__TailInstrs0_17, &ll_backend__use_local_vars__TailInstrs1_53, ((MR_Box) ((MR_Integer) 0)), &ll_backend__use_local_vars__conv2_V_54_54);
                    }
#line 218 "use_local_vars.m"
                    ll_backend__use_local_vars__V_54_54 = ((MR_Integer) ll_backend__use_local_vars__conv2_V_54_54);
#line 226 "use_local_vars.m"
                    if ((ll_backend__use_local_vars__MaybeMore_35 == (MR_Integer) 0))
#line 222 "use_local_vars.m"
                      {
#line 222 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__TailInstrs_55;

#line 223 "use_local_vars.m"
                        {
#line 223 "use_local_vars.m"
                          ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__TailInstrs1_53, &ll_backend__use_local_vars__TailInstrs_55, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_63_63, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8);
                        }
#line 225 "use_local_vars.m"
                        {
#line 225 "use_local_vars.m"
                          MR_Word base;
#line 225 "use_local_vars.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "use_local_vars.m"
                          *ll_backend__use_local_vars__HeadVar__2_2 = base;
#line 225 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_52));
#line 225 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_55));
#line 225 "use_local_vars.m"
                        }
#line 222 "use_local_vars.m"
                      }
#line 226 "use_local_vars.m"
                    else
#line 227 "use_local_vars.m"
                      {
#line 227 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__Instrs1_56;
#line 227 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90;

#line 228 "use_local_vars.m"
                        {
#line 228 "use_local_vars.m"
                          ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90, 0) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
#line 228 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90, 1) = ((MR_Box) (ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6));
#line 228 "use_local_vars.m"
                        }
#line 229 "use_local_vars.m"
                        {
#line 229 "use_local_vars.m"
                          ll_backend__use_local_vars__Instrs1_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs1_56, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_52));
#line 229 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs1_56, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs1_53));
#line 229 "use_local_vars.m"
                        }
#line 230 "use_local_vars.m"
                        /* direct tailcall eliminated */
#line 230 "use_local_vars.m"
                        {
#line 230 "use_local_vars.m"
                          MR_Word ll_backend__use_local_vars__HeadVar__1__tmp_copy_1 = ll_backend__use_local_vars__Instrs1_56;
#line 230 "use_local_vars.m"
                          MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0__tmp_copy_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_63_63;
#line 230 "use_local_vars.m"
                          MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0__tmp_copy_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90;

#line 230 "use_local_vars.m"
                          ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0__tmp_copy_6;
#line 230 "use_local_vars.m"
                          ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0__tmp_copy_3;
#line 230 "use_local_vars.m"
                          ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__HeadVar__1__tmp_copy_1;
#line 230 "use_local_vars.m"
                        }
#line 230 "use_local_vars.m"
                        continue;
#line 227 "use_local_vars.m"
                      }
#line 215 "use_local_vars.m"
                  }
#line 233 "use_local_vars.m"
                else
#line 254 "use_local_vars.m"
                  {
#line 254 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_71_71;
#line 254 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__NewLval_113;
#line 254 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__TailInstrs1_115;
#line 234 "use_local_vars.m"
                    MR_Integer ll_backend__use_local_vars__NumSubst_57;
#line 234 "use_local_vars.m"
                    MR_Word ll_backend__use_local_vars__V_72_72;
#line 234 "use_local_vars.m"
                    MR_Integer ll_backend__use_local_vars__TempNum_91;

#line 234 "use_local_vars.m"
                    {
#line 234 "use_local_vars.m"
                      mercury__counter__allocate_3_p_0(&ll_backend__use_local_vars__TempNum_91, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, &ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_71_71);
                    }
#line 235 "use_local_vars.m"
                    {
#line 235 "use_local_vars.m"
                      ll_backend__use_local_vars__V_72_72 = ll_backend__use_local_vars__reg_type_for_lval_1_f_0(ll_backend__use_local_vars__ToLval_26);
                    }
#line 235 "use_local_vars.m"
                    {
#line 235 "use_local_vars.m"
                      ll_backend__use_local_vars__NewLval_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "use_local_vars.m"
                      MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__NewLval_113, 0) = ((MR_Box) (ll_backend__use_local_vars__V_72_72));
#line 235 "use_local_vars.m"
                      MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__NewLval_113, 1) = ((MR_Box) (ll_backend__use_local_vars__TempNum_91));
#line 235 "use_local_vars.m"
                    }
#line 236 "use_local_vars.m"
                    {
#line 236 "use_local_vars.m"
                      ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__ToLval_26, ll_backend__use_local_vars__NewLval_113, ll_backend__use_local_vars__TailInstrs0_17, &ll_backend__use_local_vars__TailInstrs1_115, (MR_Integer) 0, &ll_backend__use_local_vars__NumSubst_57);
                    }
#line 238 "use_local_vars.m"
                    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__NumSubst_57 > (MR_Integer) 1);
#line 254 "use_local_vars.m"
                    if (ll_backend__use_local_vars__succeeded)
#line 240 "use_local_vars.m"
                      {
#line 240 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__CopyInstr_58;
#line 240 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__V_75_75;
#line 240 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__V_76_76;
#line 240 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__Instr_100;

#line 240 "use_local_vars.m"
                        {
#line 240 "use_local_vars.m"
                          ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(ll_backend__use_local_vars__ToLval_26, ll_backend__use_local_vars__NewLval_113, ll_backend__use_local_vars__Instr0_16, &ll_backend__use_local_vars__Instr_100);
                        }
#line 241 "use_local_vars.m"
                        {
#line 241 "use_local_vars.m"
                          ll_backend__use_local_vars__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "use_local_vars.m"
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_76_76, 0) = ((MR_Box) (ll_backend__use_local_vars__NewLval_113));
#line 241 "use_local_vars.m"
                        }
#line 241 "use_local_vars.m"
                        {
#line 241 "use_local_vars.m"
                          ll_backend__use_local_vars__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 241 "use_local_vars.m"
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "use_local_vars.m"
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__V_75_75, 1) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
#line 241 "use_local_vars.m"
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__V_75_75, 2) = ((MR_Box) (ll_backend__use_local_vars__V_76_76));
#line 241 "use_local_vars.m"
                        }
#line 241 "use_local_vars.m"
                        {
#line 241 "use_local_vars.m"
                          ll_backend__use_local_vars__CopyInstr_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "use_local_vars.m"
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__CopyInstr_58, 0) = ((MR_Box) (ll_backend__use_local_vars__V_75_75));
#line 241 "use_local_vars.m"
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__CopyInstr_58, 1) = ((MR_Box) ((MR_String) ""));
#line 241 "use_local_vars.m"
                        }
#line 247 "use_local_vars.m"
                        if ((ll_backend__use_local_vars__MaybeMore_35 == (MR_Integer) 0))
#line 243 "use_local_vars.m"
                          {
#line 243 "use_local_vars.m"
                            MR_Word ll_backend__use_local_vars__V_83_83;
#line 243 "use_local_vars.m"
                            MR_Word ll_backend__use_local_vars__TailInstrs_93;

#line 244 "use_local_vars.m"
                            {
#line 244 "use_local_vars.m"
                              ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__TailInstrs1_115, &ll_backend__use_local_vars__TailInstrs_93, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_71_71, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8);
                            }
#line 246 "use_local_vars.m"
                            {
#line 246 "use_local_vars.m"
                              ll_backend__use_local_vars__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__V_83_83, 0) = ((MR_Box) (ll_backend__use_local_vars__CopyInstr_58));
#line 246 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__V_83_83, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_93));
#line 246 "use_local_vars.m"
                            }
#line 246 "use_local_vars.m"
                            {
#line 246 "use_local_vars.m"
                              MR_Word base;
#line 246 "use_local_vars.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "use_local_vars.m"
                              *ll_backend__use_local_vars__HeadVar__2_2 = base;
#line 246 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_100));
#line 246 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__V_83_83));
#line 246 "use_local_vars.m"
                            }
#line 243 "use_local_vars.m"
                          }
#line 247 "use_local_vars.m"
                        else
#line 248 "use_local_vars.m"
                          {
#line 248 "use_local_vars.m"
                            MR_Word ll_backend__use_local_vars__V_79_79;
#line 248 "use_local_vars.m"
                            MR_Word ll_backend__use_local_vars__Instrs1_95;
#line 248 "use_local_vars.m"
                            MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96;

#line 249 "use_local_vars.m"
                            {
#line 249 "use_local_vars.m"
                              ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96, 0) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
#line 249 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96, 1) = ((MR_Box) (ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6));
#line 249 "use_local_vars.m"
                            }
#line 250 "use_local_vars.m"
                            {
#line 250 "use_local_vars.m"
                              ll_backend__use_local_vars__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__V_79_79, 0) = ((MR_Box) (ll_backend__use_local_vars__CopyInstr_58));
#line 250 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__V_79_79, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs1_115));
#line 250 "use_local_vars.m"
                            }
#line 250 "use_local_vars.m"
                            {
#line 250 "use_local_vars.m"
                              ll_backend__use_local_vars__Instrs1_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs1_95, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_100));
#line 250 "use_local_vars.m"
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs1_95, 1) = ((MR_Box) (ll_backend__use_local_vars__V_79_79));
#line 250 "use_local_vars.m"
                            }
#line 251 "use_local_vars.m"
                            /* direct tailcall eliminated */
#line 251 "use_local_vars.m"
                            {
#line 251 "use_local_vars.m"
                              MR_Word ll_backend__use_local_vars__HeadVar__1__tmp_copy_1 = ll_backend__use_local_vars__Instrs1_95;
#line 251 "use_local_vars.m"
                              MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0__tmp_copy_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_71_71;
#line 251 "use_local_vars.m"
                              MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0__tmp_copy_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96;

#line 251 "use_local_vars.m"
                              ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0__tmp_copy_6;
#line 251 "use_local_vars.m"
                              ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0__tmp_copy_3;
#line 251 "use_local_vars.m"
                              ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__HeadVar__1__tmp_copy_1;
#line 251 "use_local_vars.m"
                            }
#line 251 "use_local_vars.m"
                            continue;
#line 248 "use_local_vars.m"
                          }
#line 240 "use_local_vars.m"
                      }
#line 254 "use_local_vars.m"
                    else
#line 260 "use_local_vars.m"
                    if ((ll_backend__use_local_vars__MaybeMore_35 == (MR_Integer) 0))
#line 256 "use_local_vars.m"
                      {
#line 256 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__TailInstrs_105;

#line 257 "use_local_vars.m"
                        {
#line 257 "use_local_vars.m"
                          ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__TailInstrs0_17, &ll_backend__use_local_vars__TailInstrs_105, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8);
                        }
#line 259 "use_local_vars.m"
                        {
#line 259 "use_local_vars.m"
                          MR_Word base;
#line 259 "use_local_vars.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "use_local_vars.m"
                          *ll_backend__use_local_vars__HeadVar__2_2 = base;
#line 259 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr0_16));
#line 259 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_105));
#line 259 "use_local_vars.m"
                        }
#line 256 "use_local_vars.m"
                      }
#line 260 "use_local_vars.m"
                    else
#line 261 "use_local_vars.m"
                      {
#line 261 "use_local_vars.m"
                        MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108;

#line 262 "use_local_vars.m"
                        {
#line 262 "use_local_vars.m"
                          ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108, 0) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
#line 262 "use_local_vars.m"
                          MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108, 1) = ((MR_Box) (ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6));
#line 262 "use_local_vars.m"
                        }
#line 264 "use_local_vars.m"
                        /* direct tailcall eliminated */
#line 264 "use_local_vars.m"
                        {
#line 264 "use_local_vars.m"
                          MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0__tmp_copy_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108;

#line 264 "use_local_vars.m"
                          ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0__tmp_copy_6;
#line 264 "use_local_vars.m"
                        }
#line 264 "use_local_vars.m"
                        continue;
#line 261 "use_local_vars.m"
                      }
#line 254 "use_local_vars.m"
                  }
#line 233 "use_local_vars.m"
              }
#line 268 "use_local_vars.m"
            else
#line 270 "use_local_vars.m"
              {
#line 270 "use_local_vars.m"
                MR_Word ll_backend__use_local_vars__TailInstrs_120;

#line 269 "use_local_vars.m"
                {
#line 269 "use_local_vars.m"
                  ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__TailInstrs0_17, &ll_backend__use_local_vars__TailInstrs_120, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8);
                }
#line 271 "use_local_vars.m"
                {
#line 271 "use_local_vars.m"
                  MR_Word base;
#line 271 "use_local_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "use_local_vars.m"
                  *ll_backend__use_local_vars__HeadVar__2_2 = base;
#line 271 "use_local_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr0_16));
#line 271 "use_local_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_120));
#line 271 "use_local_vars.m"
                }
#line 270 "use_local_vars.m"
              }
#line 187 "use_local_vars.m"
          }
#line 185 "use_local_vars.m"
      }
#line 185 "use_local_vars.m"
      break;
#line 185 "use_local_vars.m"
    }
#line 181 "use_local_vars.m"
}

#line 135 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_block_6_p_0(
#line 135 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_7,
#line 135 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_8,
#line 135 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__AccessThreshold_9,
#line 135 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Label_10,
#line 135 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24,
#line 135 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25)
#line 135 "use_local_vars.m"
{
#line 139 "use_local_vars.m"
  {
#line 139 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__BlockInfo0_12;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__BlockLabel_13;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__LabelInstr_14;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__RestInstrs0_15;
#line 139 "use_local_vars.m"
    MR_Integer ll_backend__use_local_vars__BlockSize_16;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__FallInto_17;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__JumpLabels_18;
#line 139 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__MaybeFallThrough_19;
#line 140 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__conv0_BlockInfo0_12;

#line 140 "use_local_vars.m"
    {
#line 140 "use_local_vars.m"
      mercury__map__lookup_3_p_0(ll_backend__use_local_vars__TypeCtorInfo_29_29, ll_backend__use_local_vars__TypeCtorInfo_30_30, ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24, ((MR_Box) (ll_backend__use_local_vars__Label_10)), &ll_backend__use_local_vars__conv0_BlockInfo0_12);
    }
#line 140 "use_local_vars.m"
    ll_backend__use_local_vars__BlockInfo0_12 = ((MR_Word) ll_backend__use_local_vars__conv0_BlockInfo0_12);
#line 141 "use_local_vars.m"
    ll_backend__use_local_vars__BlockLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 0)));
#line 141 "use_local_vars.m"
    ll_backend__use_local_vars__LabelInstr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 1)));
#line 141 "use_local_vars.m"
    ll_backend__use_local_vars__RestInstrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 2)));
#line 141 "use_local_vars.m"
    ll_backend__use_local_vars__BlockSize_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 3)));
#line 141 "use_local_vars.m"
    ll_backend__use_local_vars__FallInto_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 4)));
#line 141 "use_local_vars.m"
    ll_backend__use_local_vars__JumpLabels_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 5)));
#line 141 "use_local_vars.m"
    ll_backend__use_local_vars__MaybeFallThrough_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 6)));
#line 146 "use_local_vars.m"
    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__BlockSize_16 < (MR_Integer) 200);
#line 158 "use_local_vars.m"
    if (ll_backend__use_local_vars__succeeded)
#line 147 "use_local_vars.m"
      {
#line 147 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__TempCounter0_20;
#line 147 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__RestInstrs_21;
#line 147 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__TempCounter_22;
#line 147 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__STATE_VARIABLE_RestInstrs_19_42;
#line 147 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_20_43;

#line 147 "use_local_vars.m"
        {
#line 147 "use_local_vars.m"
          mercury__counter__init_2_p_0((MR_Integer) 1, &ll_backend__use_local_vars__TempCounter0_20);
        }
#line 170 "use_local_vars.m"
        {
#line 170 "use_local_vars.m"
          ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__RestInstrs0_15, &ll_backend__use_local_vars__STATE_VARIABLE_RestInstrs_19_42, ll_backend__use_local_vars__TempCounter0_20, &ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_20_43, ll_backend__use_local_vars__NumRealRRegs_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_19);
        }
#line 172 "use_local_vars.m"
        ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__AccessThreshold_9 >= (MR_Integer) 1);
#line 175 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 173 "use_local_vars.m"
          {
#line 173 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_48_48;

#line 174 "use_local_vars.m"
            {
#line 174 "use_local_vars.m"
              ll_backend__use_local_vars__V_48_48 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
            }
#line 173 "use_local_vars.m"
            {
#line 173 "use_local_vars.m"
              ll_backend__use_local_vars__opt_access_7_p_0(ll_backend__use_local_vars__STATE_VARIABLE_RestInstrs_19_42, &ll_backend__use_local_vars__RestInstrs_21, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_20_43, &ll_backend__use_local_vars__TempCounter_22, ll_backend__use_local_vars__NumRealRRegs_8, ll_backend__use_local_vars__V_48_48, ll_backend__use_local_vars__AccessThreshold_9);
            }
#line 173 "use_local_vars.m"
          }
#line 175 "use_local_vars.m"
        else
#line 176 "use_local_vars.m"
          {
#line 176 "use_local_vars.m"
            ll_backend__use_local_vars__TempCounter_22 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_20_43;
#line 176 "use_local_vars.m"
            ll_backend__use_local_vars__RestInstrs_21 = ll_backend__use_local_vars__STATE_VARIABLE_RestInstrs_19_42;
#line 176 "use_local_vars.m"
          }
#line 151 "use_local_vars.m"
        {
#line 151 "use_local_vars.m"
          ll_backend__use_local_vars__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__use_local_vars__TempCounter_22, ll_backend__use_local_vars__TempCounter0_20);
        }
#line 153 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 153 "use_local_vars.m"
          *ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25 = ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24;
#line 153 "use_local_vars.m"
        else
#line 155 "use_local_vars.m"
          {
#line 155 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__BlockInfo_23;

#line 154 "use_local_vars.m"
            {
#line 154 "use_local_vars.m"
              ll_backend__use_local_vars__BlockInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 154 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 0) = ((MR_Box) (ll_backend__use_local_vars__BlockLabel_13));
#line 154 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 1) = ((MR_Box) (ll_backend__use_local_vars__LabelInstr_14));
#line 154 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 2) = ((MR_Box) (ll_backend__use_local_vars__RestInstrs_21));
#line 154 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 3) = ((MR_Box) (ll_backend__use_local_vars__BlockSize_16));
#line 154 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 4) = ((MR_Box) (ll_backend__use_local_vars__FallInto_17));
#line 154 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 5) = ((MR_Box) (ll_backend__use_local_vars__JumpLabels_18));
#line 154 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 6) = ((MR_Box) (ll_backend__use_local_vars__MaybeFallThrough_19));
#line 154 "use_local_vars.m"
            }
#line 156 "use_local_vars.m"
            {
#line 156 "use_local_vars.m"
              mercury__map__det_update_4_p_0(ll_backend__use_local_vars__TypeCtorInfo_29_29, ll_backend__use_local_vars__TypeCtorInfo_30_30, ((MR_Box) (ll_backend__use_local_vars__Label_10)), ((MR_Box) (ll_backend__use_local_vars__BlockInfo_23)), ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24, ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25);
#line 156 "use_local_vars.m"
              return;
            }
#line 155 "use_local_vars.m"
          }
#line 147 "use_local_vars.m"
      }
#line 158 "use_local_vars.m"
    else
#line 158 "use_local_vars.m"
      *ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25 = ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24;
#line 139 "use_local_vars.m"
  }
#line 135 "use_local_vars.m"
}

#line 116 "use_local_vars.m"
static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1(
#line 116 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__closure_arg,
#line 116 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
#line 116 "use_local_vars.m"
  MR_Box ll_backend__use_local_vars__wrapper_arg_2,
#line 116 "use_local_vars.m"
  MR_Box * ll_backend__use_local_vars__wrapper_arg_3)
#line 116 "use_local_vars.m"
{
#line 116 "use_local_vars.m"
  {
#line 116 "use_local_vars.m"
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;
#line 116 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__conv0_STATE_VARIABLE_BlockMap_25;

#line 116 "use_local_vars.m"
    {
#line 116 "use_local_vars.m"
      ll_backend__use_local_vars__use_local_vars_block_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_1), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_2), &ll_backend__use_local_vars__conv0_STATE_VARIABLE_BlockMap_25);
    }
#line 116 "use_local_vars.m"
    *ll_backend__use_local_vars__wrapper_arg_3 = ((MR_Box) (ll_backend__use_local_vars__conv0_STATE_VARIABLE_BlockMap_25));
#line 116 "use_local_vars.m"
  }
#line 116 "use_local_vars.m"
}

#line 76 "use_local_vars.m"
void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0(
#line 76 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__Instrs0_9,
#line 76 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__Instrs_10,
#line 76 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_11,
#line 76 "use_local_vars.m"
  MR_Integer ll_backend__use_local_vars__AccessThreshold_12,
#line 76 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__AutoComments_13,
#line 76 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__ProcLabel_14,
#line 76 "use_local_vars.m"
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_C_0_32,
#line 76 "use_local_vars.m"
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_C_33)
#line 76 "use_local_vars.m"
{
#line 105 "use_local_vars.m"
  {
#line 105 "use_local_vars.m"
    MR_bool ll_backend__use_local_vars__succeeded;
#line 105 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__Comments0_16;
#line 105 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__NewLabels_17;
#line 105 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__LabelSeq_18;
#line 105 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__BlockMap0_19;
#line 105 "use_local_vars.m"
    MR_Word ll_backend__use_local_vars__TentativeInstrs_20;
#line 105 "use_local_vars.m"
    MR_Integer ll_backend__use_local_vars__NumTentativeInstrs_21;

#line 106 "use_local_vars.m"
    {
#line 106 "use_local_vars.m"
      ll_backend__basic_block__create_basic_blocks_8_p_0(ll_backend__use_local_vars__Instrs0_9, &ll_backend__use_local_vars__Comments0_16, ll_backend__use_local_vars__ProcLabel_14, ll_backend__use_local_vars__STATE_VARIABLE_C_0_32, ll_backend__use_local_vars__STATE_VARIABLE_C_33, &ll_backend__use_local_vars__NewLabels_17, &ll_backend__use_local_vars__LabelSeq_18, &ll_backend__use_local_vars__BlockMap0_19);
    }
#line 108 "use_local_vars.m"
    {
#line 108 "use_local_vars.m"
      ll_backend__basic_block__flatten_basic_blocks_4_p_0(ll_backend__use_local_vars__LabelSeq_18, ll_backend__use_local_vars__BlockMap0_19, &ll_backend__use_local_vars__TentativeInstrs_20, &ll_backend__use_local_vars__NumTentativeInstrs_21);
    }
#line 112 "use_local_vars.m"
    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__NumTentativeInstrs_21 < (MR_Integer) 10000);
#line 131 "use_local_vars.m"
    if (ll_backend__use_local_vars__succeeded)
#line 113 "use_local_vars.m"
      {
#line 113 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__MaybeLiveMap_22;
#line 113 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__EBBLabelSeq_23;
#line 113 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__EBBBlockMap0_24;
#line 113 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__EBBBlockMap_25;
#line 113 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Instrs1_26;
#line 113 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__Comments_31;
#line 113 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__V_36_36;
#line 116 "use_local_vars.m"
        MR_Box ll_backend__use_local_vars__conv1_EBBBlockMap_25;
#line 118 "use_local_vars.m"
        MR_Integer ll_backend__use_local_vars__V_27_27;
#line 127 "use_local_vars.m"
        MR_Word ll_backend__use_local_vars__LiveMap_28;

#line 113 "use_local_vars.m"
        {
#line 113 "use_local_vars.m"
          ll_backend__livemap__build_livemap_2_p_0(ll_backend__use_local_vars__TentativeInstrs_20, &ll_backend__use_local_vars__MaybeLiveMap_22);
        }
#line 114 "use_local_vars.m"
        {
#line 114 "use_local_vars.m"
          ll_backend__basic_block__extend_basic_blocks_5_p_0(ll_backend__use_local_vars__LabelSeq_18, &ll_backend__use_local_vars__EBBLabelSeq_23, ll_backend__use_local_vars__BlockMap0_19, &ll_backend__use_local_vars__EBBBlockMap0_24, ll_backend__use_local_vars__NewLabels_17);
        }
#line 116 "use_local_vars.m"
        {
#line 116 "use_local_vars.m"
          ll_backend__use_local_vars__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 116 "use_local_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_36_36, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_3[0]));
#line 116 "use_local_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_36_36, 1) = ((MR_Box) (ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1));
#line 116 "use_local_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 116 "use_local_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_36_36, 3) = ((MR_Box) (ll_backend__use_local_vars__MaybeLiveMap_22));
#line 116 "use_local_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_36_36, 4) = ((MR_Box) (ll_backend__use_local_vars__NumRealRRegs_11));
#line 116 "use_local_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__V_36_36, 5) = ((MR_Box) (ll_backend__use_local_vars__AccessThreshold_12));
#line 116 "use_local_vars.m"
        }
#line 116 "use_local_vars.m"
        {
#line 116 "use_local_vars.m"
          mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__use_local_vars_scalar_common_1[0], ll_backend__use_local_vars__V_36_36, ll_backend__use_local_vars__EBBLabelSeq_23, ((MR_Box) (ll_backend__use_local_vars__EBBBlockMap0_24)), &ll_backend__use_local_vars__conv1_EBBBlockMap_25);
        }
#line 116 "use_local_vars.m"
        ll_backend__use_local_vars__EBBBlockMap_25 = ((MR_Word) ll_backend__use_local_vars__conv1_EBBBlockMap_25);
#line 118 "use_local_vars.m"
        {
#line 118 "use_local_vars.m"
          ll_backend__basic_block__flatten_basic_blocks_4_p_0(ll_backend__use_local_vars__EBBLabelSeq_23, ll_backend__use_local_vars__EBBBlockMap_25, &ll_backend__use_local_vars__Instrs1_26, &ll_backend__use_local_vars__V_27_27);
        }
#line 122 "use_local_vars.m"
        ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__AutoComments_13 == (MR_Integer) 1);
#line 121 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 121 "use_local_vars.m"
          {
#line 121 "use_local_vars.m"
            ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__MaybeLiveMap_22)) == (MR_mktag((MR_Integer) 1)));
#line 121 "use_local_vars.m"
            if (ll_backend__use_local_vars__succeeded)
#line 121 "use_local_vars.m"
              ll_backend__use_local_vars__LiveMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeLiveMap_22, (MR_Integer) 0)));
#line 121 "use_local_vars.m"
          }
#line 127 "use_local_vars.m"
        if (ll_backend__use_local_vars__succeeded)
#line 124 "use_local_vars.m"
          {
#line 124 "use_local_vars.m"
            MR_String ll_backend__use_local_vars__NewComment_29;
#line 124 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__NewCommentInstr_30;
#line 124 "use_local_vars.m"
            MR_String ll_backend__use_local_vars__V_38_38;
#line 124 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_39_39;
#line 124 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_40_40;
#line 124 "use_local_vars.m"
            MR_Word ll_backend__use_local_vars__V_42_42;

#line 124 "use_local_vars.m"
            {
#line 124 "use_local_vars.m"
              ll_backend__use_local_vars__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 124 "use_local_vars.m"
              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__V_39_39, 0) = ((MR_Box) (ll_backend__use_local_vars__ProcLabel_14));
#line 124 "use_local_vars.m"
            }
#line 124 "use_local_vars.m"
            {
#line 124 "use_local_vars.m"
              ll_backend__use_local_vars__V_38_38 = ll_backend__opt_debug__dump_livemap_2_f_0(ll_backend__use_local_vars__V_39_39, ll_backend__use_local_vars__LiveMap_28);
            }
#line 124 "use_local_vars.m"
            {
#line 124 "use_local_vars.m"
              ll_backend__use_local_vars__NewComment_29 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__use_local_vars__V_38_38);
            }
#line 125 "use_local_vars.m"
            {
#line 125 "use_local_vars.m"
              ll_backend__use_local_vars__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 125 "use_local_vars.m"
              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__V_40_40, 0) = ((MR_Box) (ll_backend__use_local_vars__NewComment_29));
#line 125 "use_local_vars.m"
            }
#line 125 "use_local_vars.m"
            {
#line 125 "use_local_vars.m"
              ll_backend__use_local_vars__NewCommentInstr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__NewCommentInstr_30, 0) = ((MR_Box) (ll_backend__use_local_vars__V_40_40));
#line 125 "use_local_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__NewCommentInstr_30, 1) = ((MR_Box) ((MR_String) ""));
#line 125 "use_local_vars.m"
            }
#line 126 "use_local_vars.m"
            {
#line 126 "use_local_vars.m"
              ll_backend__use_local_vars__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "use_local_vars.m"
              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__V_42_42, 0) = ((MR_Box) (ll_backend__use_local_vars__NewCommentInstr_30));
#line 126 "use_local_vars.m"
              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 126 "use_local_vars.m"
            }
#line 126 "use_local_vars.m"
            {
#line 126 "use_local_vars.m"
              ll_backend__use_local_vars__Comments_31 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__use_local_vars__Comments0_16, ll_backend__use_local_vars__V_42_42);
            }
#line 124 "use_local_vars.m"
          }
#line 127 "use_local_vars.m"
        else
#line 128 "use_local_vars.m"
          ll_backend__use_local_vars__Comments_31 = ll_backend__use_local_vars__Comments0_16;
#line 130 "use_local_vars.m"
        {
#line 130 "use_local_vars.m"
          *ll_backend__use_local_vars__Instrs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__use_local_vars__Comments_31, ll_backend__use_local_vars__Instrs1_26);
        }
#line 113 "use_local_vars.m"
      }
#line 131 "use_local_vars.m"
    else
#line 132 "use_local_vars.m"
      *ll_backend__use_local_vars__Instrs_10 = ll_backend__use_local_vars__Instrs0_9;
#line 105 "use_local_vars.m"
  }
#line 76 "use_local_vars.m"
}

void mercury__ll_backend__use_local_vars__init(void)
{
}

void mercury__ll_backend__use_local_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__use_local_vars__ll_backend__use_local_vars__type_ctor_info_maybe_compulsory_lvals_0);
}

void mercury__ll_backend__use_local_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.use_local_vars. */
