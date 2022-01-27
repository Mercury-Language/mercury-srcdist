/*
** Automatically generated from `par_conj_gen.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module ll_backend.par_conj_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__par_conj_gen__init
ENDINIT
*/

#include "ll_backend.par_conj_gen.mih"


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
#include "tree_bitset.mih"
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
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.var_locn.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 487 "par_conj_gen.m"
struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s {
#line 491 "par_conj_gen.m"
  MR_bool ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded;
#line 494 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_7;
#line 502 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22;
#line 502 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__AllLocns_15;
#line 502 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__RegLocns_16;
#line 509 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_17;
#line 506 "par_conj_gen.m"
  jmp_buf ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_0;
#line 506 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv1_LocnPrime_17;
#line 510 "par_conj_gen.m"
  jmp_buf ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_1;
#line 510 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv2_LocnPrime_7;
#line 487 "par_conj_gen.m"
};

#line 117 "par_conj_gen.m"
struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s {
#line 351 "par_conj_gen.m"
  MR_bool ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded;
#line 494 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_78;
#line 502 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93;
#line 502 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__AllLocns_86;
#line 502 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__RegLocns_87;
#line 509 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_88;
#line 506 "par_conj_gen.m"
  jmp_buf ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_0;
#line 506 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv1_LocnPrime_88;
#line 510 "par_conj_gen.m"
  jmp_buf ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_1;
#line 510 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv2_LocnPrime_78;
#line 117 "par_conj_gen.m"
};


#line 209 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 212 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 215 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_3(
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 527 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 304 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_2(
#line 304 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 304 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_1(
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 527 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 288 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__MaybeEnd0_5,
#line 288 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__HeadVar__6_6,
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7,
#line 288 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_8);

#line 607 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__607__1_1_f_0(
#line 607 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_23);

#line 658 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
#line 658 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__GoalInfo_5,
#line 658 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__SlotNum_6,
#line 658 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17,
#line 658 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_18);

#line 639 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__place_all_outputs_3_p_0(
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2,
#line 639 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_3);

#line 625 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__find_outputs_6_p_0(
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5,
#line 625 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6);

#line 611 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
#line 611 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LVal_4,
#line 611 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__Max0_5,
#line 611 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__Max_6);

#line 609 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
#line 609 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 609 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 609 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_2,
#line 609 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_3);

#line 607 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
#line 607 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 607 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 606 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
#line 606 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 606 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 602 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
#line 602 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Instrs_3,
#line 602 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__MaxRef_4);

#line 540 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
#line 540 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 540 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 540 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
#line 540 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
#line 540 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4);

#line 536 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
#line 536 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Lval0_5,
#line 536 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Lval_6);

#line 533 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1(
#line 533 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 533 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 533 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
#line 533 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
#line 533 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4);

#line 529 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
#line 529 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5,
#line 529 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6);

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1(
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 527 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 524 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(
#line 524 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4,
#line 524 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Code_5);

#line 513 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
#line 513 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1);

#line 505 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
#line 505 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 505 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_2(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_3(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_4(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_5(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_6(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_7(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 487 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
#line 487 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CI_4,
#line 487 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Var_5,
#line 487 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Locn_6);

#line 470 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
#line 470 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCVarName_5,
#line 470 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCSVarName_6,
#line 470 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlot_7,
#line 470 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CopyStr_8);

#line 464 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
#line 464 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 464 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 464 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 446 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
#line 446 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__FrameSize_6,
#line 446 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVarLocn_7,
#line 446 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVarLocn_8,
#line 446 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlots_9,
#line 446 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CodeStr_10);

#line 335 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
#line 335 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__SyncTermBaseSlot_4,
#line 335 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotLval_5);

#line 407 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_8(
#line 407 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 407 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 407 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 505 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_1(
#line 505 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 505 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_2(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_3(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_4(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_5(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_6(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_7(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);


static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_2[2][1];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_3[12][3];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_4[1][4];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_5[2][6];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_6[2][7];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_7[4][5];




static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__par_conj_gen_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) "set the parent stack pointer"))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_1[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_3[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_2[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[0])),
    ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[0])),
    ((MR_Box) (ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[1])),
    ((MR_Box) (ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[1])),
    ((MR_Box) (ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[1])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[2])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[1])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[3])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_7[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 812 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 820 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 828 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_3(
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 527 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 527 "par_conj_gen.m"
{
#line 527 "par_conj_gen.m"
  {
#line 527 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 527 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6;

#line 527 "par_conj_gen.m"
    {
#line 527 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6);
    }
#line 527 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6));
#line 527 "par_conj_gen.m"
  }
#line 527 "par_conj_gen.m"
}

#line 304 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_2(
#line 304 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 304 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 304 "par_conj_gen.m"
{
#line 304 "par_conj_gen.m"
  {
#line 304 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
#line 304 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 304 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__2_2;

#line 304 "par_conj_gen.m"
    {
#line 304 "par_conj_gen.m"
      ll_backend__par_conj_gen__conv1_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 304 "par_conj_gen.m"
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__2_2));
#line 304 "par_conj_gen.m"
    return ll_backend__par_conj_gen__wrapper_arg_2;
#line 304 "par_conj_gen.m"
  }
#line 304 "par_conj_gen.m"
}

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_1(
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 527 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 527 "par_conj_gen.m"
{
#line 527 "par_conj_gen.m"
  {
#line 527 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 527 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6;

#line 527 "par_conj_gen.m"
    {
#line 527 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6);
    }
#line 527 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6));
#line 527 "par_conj_gen.m"
  }
#line 527 "par_conj_gen.m"
}

#line 288 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__MaybeEnd0_5,
#line 288 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__HeadVar__6_6,
#line 288 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7,
#line 288 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_8)
#line 288 "par_conj_gen.m"
{
#line 292 "par_conj_gen.m"
  {
#line 292 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;

#line 292 "par_conj_gen.m"
    if ((ll_backend__par_conj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "par_conj_gen.m"
      {
#line 293 "par_conj_gen.m"
        {
#line 293 "par_conj_gen.m"
          *ll_backend__par_conj_gen__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 293 "par_conj_gen.m"
        *ll_backend__par_conj_gen__STATE_VARIABLE_CI_8 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7;
#line 292 "par_conj_gen.m"
      }
#line 292 "par_conj_gen.m"
    else
#line 295 "par_conj_gen.m"
      {
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeInfo_69_69;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_70_70;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_76_76;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_84;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_92;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__StartPos_24;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ThisGoalCode0_25;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ThisGoalCode_26;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__AllSlots_27;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Variables_28;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__LiveVars_29;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__StoreMap0_30;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__StoreMap_31;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__MaybeEnd_32;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SaveCode0_33;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SaveCode_34;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ForkCode_38;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__JoinCode_39;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ThisCode_40;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__RestCode_41;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_52_52;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__V_65_65;
#line 295 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__V_66_66;

#line 296 "par_conj_gen.m"
        {
#line 296 "par_conj_gen.m"
          ll_backend__code_info__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7, &ll_backend__par_conj_gen__StartPos_24);
        }
#line 297 "par_conj_gen.m"
        {
#line 297 "par_conj_gen.m"
          ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__par_conj_gen__Goal_16, &ll_backend__par_conj_gen__ThisGoalCode0_25, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45);
        }
#line 1034 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_10_84 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 527 "par_conj_gen.m"
        {
#line 527 "par_conj_gen.m"
          mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_84, ll_backend__par_conj_gen__TypeCtorInfo_10_84, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[9], ll_backend__par_conj_gen__ThisGoalCode0_25, &ll_backend__par_conj_gen__ThisGoalCode_26);
        }
#line 300 "par_conj_gen.m"
        {
#line 300 "par_conj_gen.m"
          ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45, &ll_backend__par_conj_gen__AllSlots_27);
        }
#line 301 "par_conj_gen.m"
        {
#line 301 "par_conj_gen.m"
          ll_backend__code_info__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45, &ll_backend__par_conj_gen__Variables_28);
        }
#line 1051 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeInfo_69_69 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0];
#line 302 "par_conj_gen.m"
        {
#line 302 "par_conj_gen.m"
          mercury__set__list_to_set_2_p_0(ll_backend__par_conj_gen__TypeInfo_69_69, ll_backend__par_conj_gen__Variables_28, &ll_backend__par_conj_gen__LiveVars_29);
        }
#line 1058 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 303 "par_conj_gen.m"
        {
#line 303 "par_conj_gen.m"
          mercury__map__select_3_p_0(ll_backend__par_conj_gen__TypeInfo_69_69, ll_backend__par_conj_gen__TypeCtorInfo_70_70, ll_backend__par_conj_gen__AllSlots_27, ll_backend__par_conj_gen__LiveVars_29, &ll_backend__par_conj_gen__StoreMap0_30);
        }
#line 304 "par_conj_gen.m"
        {
#line 304 "par_conj_gen.m"
          ll_backend__par_conj_gen__StoreMap_31 = mercury__map__map_values_only_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__par_conj_gen__TypeInfo_69_69, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[10], ll_backend__par_conj_gen__StoreMap0_30);
        }
#line 305 "par_conj_gen.m"
        {
#line 305 "par_conj_gen.m"
          ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__par_conj_gen__StoreMap_31, ll_backend__par_conj_gen__MaybeEnd0_5, &ll_backend__par_conj_gen__MaybeEnd_32, &ll_backend__par_conj_gen__SaveCode0_33, ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47);
        }
#line 1075 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_10_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 527 "par_conj_gen.m"
        {
#line 527 "par_conj_gen.m"
          mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_92, ll_backend__par_conj_gen__TypeCtorInfo_10_92, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[11], ll_backend__par_conj_gen__SaveCode0_33, &ll_backend__par_conj_gen__SaveCode_34);
        }
#line 322 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__Goals_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "par_conj_gen.m"
          {
#line 323 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_75_75 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 323 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_48_48;
#line 323 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_49_49;

#line 324 "par_conj_gen.m"
            {
#line 324 "par_conj_gen.m"
              ll_backend__par_conj_gen__ForkCode_38 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75);
            }
#line 326 "par_conj_gen.m"
            {
#line 326 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 326 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 326 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_49_49, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__2_2));
#line 326 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_49_49, 2) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
#line 326 "par_conj_gen.m"
            }
#line 326 "par_conj_gen.m"
            {
#line 326 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_48_48, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_49_49));
#line 326 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_48_48, 1) = ((MR_Box) ((MR_String) "finish"));
#line 326 "par_conj_gen.m"
            }
#line 325 "par_conj_gen.m"
            {
#line 325 "par_conj_gen.m"
              ll_backend__par_conj_gen__JoinCode_39 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ((MR_Box) (ll_backend__par_conj_gen__V_48_48)));
            }
#line 327 "par_conj_gen.m"
            ll_backend__par_conj_gen__STATE_VARIABLE_CI_52_52 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47;
#line 323 "par_conj_gen.m"
          }
#line 322 "par_conj_gen.m"
        else
#line 309 "par_conj_gen.m"
          {
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_74_74;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__NextConjunct_37;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_51_51;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_53_53;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_54_54;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_56_56;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_57_57;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_58_58;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_60_60;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_61_61;
#line 309 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_62_62;

#line 310 "par_conj_gen.m"
            {
#line 310 "par_conj_gen.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__NextConjunct_37, ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_51_51);
            }
#line 311 "par_conj_gen.m"
            {
#line 311 "par_conj_gen.m"
              ll_backend__code_info__reset_to_position_3_p_0(ll_backend__par_conj_gen__StartPos_24, ll_backend__par_conj_gen__STATE_VARIABLE_CI_51_51, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_52_52);
            }
#line 1166 "ll_backend.par_conj_gen.c"
            ll_backend__par_conj_gen__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 313 "par_conj_gen.m"
            {
#line 313 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 313 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 313 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_54_54, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__2_2));
#line 313 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_54_54, 2) = ((MR_Box) (ll_backend__par_conj_gen__NextConjunct_37));
#line 313 "par_conj_gen.m"
            }
#line 313 "par_conj_gen.m"
            {
#line 313 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_53_53, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_54_54));
#line 313 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_53_53, 1) = ((MR_Box) ((MR_String) "fork off a child"));
#line 313 "par_conj_gen.m"
            }
#line 312 "par_conj_gen.m"
            {
#line 312 "par_conj_gen.m"
              ll_backend__par_conj_gen__ForkCode_38 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_74_74, ((MR_Box) (ll_backend__par_conj_gen__V_53_53)));
            }
#line 317 "par_conj_gen.m"
            {
#line 317 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 317 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 317 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_58_58, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__2_2));
#line 317 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_58_58, 2) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
#line 317 "par_conj_gen.m"
            }
#line 317 "par_conj_gen.m"
            {
#line 317 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_57_57, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_58_58));
#line 317 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_57_57, 1) = ((MR_Box) ((MR_String) "finish"));
#line 317 "par_conj_gen.m"
            }
#line 319 "par_conj_gen.m"
            {
#line 319 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_62_62, 1) = ((MR_Box) (ll_backend__par_conj_gen__NextConjunct_37));
#line 319 "par_conj_gen.m"
            }
#line 319 "par_conj_gen.m"
            {
#line 319 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_61_61, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_62_62));
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_61_61, 1) = ((MR_Box) ((MR_String) "start of the next conjunct"));
#line 319 "par_conj_gen.m"
            }
#line 321 "par_conj_gen.m"
            {
#line 321 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_60_60, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_61_61));
#line 321 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "par_conj_gen.m"
            }
#line 318 "par_conj_gen.m"
            {
#line 318 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_56_56, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_57_57));
#line 318 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_56_56, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
#line 318 "par_conj_gen.m"
            }
#line 316 "par_conj_gen.m"
            {
#line 316 "par_conj_gen.m"
              ll_backend__par_conj_gen__JoinCode_39 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_74_74, ll_backend__par_conj_gen__V_56_56);
            }
#line 309 "par_conj_gen.m"
          }
#line 1264 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 330 "par_conj_gen.m"
        {
#line 330 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_66_66 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__SaveCode_34, ll_backend__par_conj_gen__JoinCode_39);
        }
#line 330 "par_conj_gen.m"
        {
#line 330 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__ThisGoalCode_26, ll_backend__par_conj_gen__V_66_66);
        }
#line 330 "par_conj_gen.m"
        {
#line 330 "par_conj_gen.m"
          ll_backend__par_conj_gen__ThisCode_40 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__ForkCode_38, ll_backend__par_conj_gen__V_65_65);
        }
#line 331 "par_conj_gen.m"
        {
#line 331 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(ll_backend__par_conj_gen__Goals_17, ll_backend__par_conj_gen__HeadVar__2_2, ll_backend__par_conj_gen__HeadVar__3_3, ll_backend__par_conj_gen__MaybeEnd_32, &ll_backend__par_conj_gen__RestCode_41, ll_backend__par_conj_gen__STATE_VARIABLE_CI_52_52, ll_backend__par_conj_gen__STATE_VARIABLE_CI_8);
        }
#line 333 "par_conj_gen.m"
        {
#line 333 "par_conj_gen.m"
          *ll_backend__par_conj_gen__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__ThisCode_40, ll_backend__par_conj_gen__RestCode_41);
        }
#line 295 "par_conj_gen.m"
      }
#line 292 "par_conj_gen.m"
  }
#line 288 "par_conj_gen.m"
}

#line 607 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__607__1_1_f_0(
#line 607 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_23)
#line 607 "par_conj_gen.m"
{
#line 607 "par_conj_gen.m"
  {
#line 607 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 607 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__HeadVar__2_24;

#line 607 "par_conj_gen.m"
    {
#line 607 "par_conj_gen.m"
      ll_backend__par_conj_gen__HeadVar__2_24 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__HeadVar__1_23);
    }
#line 607 "par_conj_gen.m"
    return ll_backend__par_conj_gen__HeadVar__2_24;
#line 607 "par_conj_gen.m"
  }
#line 607 "par_conj_gen.m"
}

#line 658 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
#line 658 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__GoalInfo_5,
#line 658 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__SlotNum_6,
#line 658 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17,
#line 658 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_18)
#line 658 "par_conj_gen.m"
{
#line 661 "par_conj_gen.m"
  {
#line 661 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 661 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__PredId_8;
#line 661 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__ProcId_9;
#line 661 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__ModuleInfo_10;
#line 661 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__ProcString_11;
#line 661 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__ContainingGoalMap_12;
#line 661 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__GoalId_13;
#line 661 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__GoalPath_14;
#line 661 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__GoalPathString_15;
#line 661 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__String_16;
#line 661 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_27_27;

#line 662 "par_conj_gen.m"
    {
#line 662 "par_conj_gen.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__PredId_8);
    }
#line 663 "par_conj_gen.m"
    {
#line 663 "par_conj_gen.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ProcId_9);
    }
#line 664 "par_conj_gen.m"
    {
#line 664 "par_conj_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ModuleInfo_10);
    }
#line 665 "par_conj_gen.m"
    {
#line 665 "par_conj_gen.m"
      ll_backend__par_conj_gen__ProcString_11 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(ll_backend__par_conj_gen__ModuleInfo_10, ll_backend__par_conj_gen__PredId_8, ll_backend__par_conj_gen__ProcId_9);
    }
#line 667 "par_conj_gen.m"
    {
#line 667 "par_conj_gen.m"
      ll_backend__code_info__get_containing_goal_map_det_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ContainingGoalMap_12);
    }
#line 668 "par_conj_gen.m"
    {
#line 668 "par_conj_gen.m"
      ll_backend__par_conj_gen__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__par_conj_gen__GoalInfo_5);
    }
#line 669 "par_conj_gen.m"
    {
#line 669 "par_conj_gen.m"
      ll_backend__par_conj_gen__GoalPath_14 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__par_conj_gen__ContainingGoalMap_12, ll_backend__par_conj_gen__GoalId_13);
    }
#line 670 "par_conj_gen.m"
    {
#line 670 "par_conj_gen.m"
      ll_backend__par_conj_gen__GoalPathString_15 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__par_conj_gen__GoalPath_14);
    }
#line 1402 "ll_backend.par_conj_gen.c"
    {
#line 1404 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) ": ", ll_backend__par_conj_gen__GoalPathString_15);
    }
#line 1407 "ll_backend.par_conj_gen.c"
    {
#line 1409 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__String_16 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__ProcString_11, ll_backend__par_conj_gen__V_27_27);
    }
#line 673 "par_conj_gen.m"
    {
#line 673 "par_conj_gen.m"
      ll_backend__code_info__add_threadscope_string_4_p_0(ll_backend__par_conj_gen__String_16, ll_backend__par_conj_gen__SlotNum_6, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, ll_backend__par_conj_gen__STATE_VARIABLE_CI_18);
#line 673 "par_conj_gen.m"
      return;
    }
#line 661 "par_conj_gen.m"
  }
#line 658 "par_conj_gen.m"
}

#line 639 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__place_all_outputs_3_p_0(
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2,
#line 639 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_3)
#line 639 "par_conj_gen.m"
{
#line 642 "par_conj_gen.m"
  while (MR_TRUE)
#line 642 "par_conj_gen.m"
    {
#line 642 "par_conj_gen.m"
      /* tailcall optimized into a loop */
#line 642 "par_conj_gen.m"
      {
#line 642 "par_conj_gen.m"
        MR_bool ll_backend__par_conj_gen__succeeded;

#line 642 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 642 "par_conj_gen.m"
          *ll_backend__par_conj_gen__STATE_VARIABLE_CI_3 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2;
#line 642 "par_conj_gen.m"
        else
#line 643 "par_conj_gen.m"
          {
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__VarLocations_10;
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Slot_11;
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_15_15;
#line 647 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_19_19;
#line 647 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Locations_12;
#line 647 "par_conj_gen.m"
            MR_Box ll_backend__par_conj_gen__conv0_Locations_12;

#line 644 "par_conj_gen.m"
            {
#line 644 "par_conj_gen.m"
              ll_backend__code_info__variable_locations_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2, &ll_backend__par_conj_gen__VarLocations_10);
            }
#line 645 "par_conj_gen.m"
            {
#line 645 "par_conj_gen.m"
              ll_backend__code_info__get_variable_slot_3_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2, ll_backend__par_conj_gen__Var_7, &ll_backend__par_conj_gen__Slot_11);
            }
#line 647 "par_conj_gen.m"
            {
#line 647 "par_conj_gen.m"
              ll_backend__par_conj_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__VarLocations_10, ((MR_Box) (ll_backend__par_conj_gen__Var_7)), &ll_backend__par_conj_gen__conv0_Locations_12);
            }
#line 647 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 647 "par_conj_gen.m"
              {
#line 647 "par_conj_gen.m"
                ll_backend__par_conj_gen__Locations_12 = ((MR_Word) ll_backend__par_conj_gen__conv0_Locations_12);
#line 647 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 647 "par_conj_gen.m"
              }
#line 647 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 647 "par_conj_gen.m"
              {
#line 1500 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 648 "par_conj_gen.m"
                {
#line 648 "par_conj_gen.m"
                  ll_backend__par_conj_gen__succeeded = mercury__set__member_2_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_19, ((MR_Box) (ll_backend__par_conj_gen__Slot_11)), ll_backend__par_conj_gen__Locations_12);
                }
#line 647 "par_conj_gen.m"
              }
#line 651 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 648 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_CI_15_15 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2;
#line 651 "par_conj_gen.m"
            else
#line 652 "par_conj_gen.m"
              {
#line 652 "par_conj_gen.m"
                ll_backend__code_info__set_var_location_4_p_0(ll_backend__par_conj_gen__Var_7, ll_backend__par_conj_gen__Slot_11, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_15_15);
              }
#line 654 "par_conj_gen.m"
            /* direct tailcall eliminated */
#line 654 "par_conj_gen.m"
            {
#line 654 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1 = ll_backend__par_conj_gen__Vars_8;
#line 654 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0__tmp_copy_2 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_15_15;

#line 654 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0__tmp_copy_2;
#line 654 "par_conj_gen.m"
              ll_backend__par_conj_gen__HeadVar__1_1 = ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1;
#line 654 "par_conj_gen.m"
            }
#line 654 "par_conj_gen.m"
            continue;
#line 643 "par_conj_gen.m"
          }
#line 642 "par_conj_gen.m"
      }
#line 642 "par_conj_gen.m"
      break;
#line 642 "par_conj_gen.m"
    }
#line 639 "par_conj_gen.m"
}

#line 625 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__find_outputs_6_p_0(
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
#line 625 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5,
#line 625 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6)
#line 625 "par_conj_gen.m"
{
#line 628 "par_conj_gen.m"
  while (MR_TRUE)
#line 628 "par_conj_gen.m"
    {
#line 628 "par_conj_gen.m"
      /* tailcall optimized into a loop */
#line 628 "par_conj_gen.m"
      {
#line 628 "par_conj_gen.m"
        MR_bool ll_backend__par_conj_gen__succeeded;

#line 628 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "par_conj_gen.m"
          *ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5;
#line 628 "par_conj_gen.m"
        else
#line 629 "par_conj_gen.m"
          {
#line 629 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 629 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 629 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__InitialInst_19;
#line 629 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__FinalInst_20;
#line 629 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24;
#line 632 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_23_23;

#line 630 "par_conj_gen.m"
            {
#line 630 "par_conj_gen.m"
              hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__par_conj_gen__HeadVar__2_2, ll_backend__par_conj_gen__Var_13, &ll_backend__par_conj_gen__InitialInst_19);
            }
#line 631 "par_conj_gen.m"
            {
#line 631 "par_conj_gen.m"
              hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__par_conj_gen__HeadVar__3_3, ll_backend__par_conj_gen__Var_13, &ll_backend__par_conj_gen__FinalInst_20);
            }
#line 632 "par_conj_gen.m"
            {
#line 632 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_23_23, 0) = ((MR_Box) (ll_backend__par_conj_gen__InitialInst_19));
#line 632 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_23_23, 1) = ((MR_Box) (ll_backend__par_conj_gen__FinalInst_20));
#line 632 "par_conj_gen.m"
            }
#line 632 "par_conj_gen.m"
            {
#line 632 "par_conj_gen.m"
              ll_backend__par_conj_gen__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ll_backend__par_conj_gen__HeadVar__4_4, ll_backend__par_conj_gen__V_23_23);
            }
#line 634 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 633 "par_conj_gen.m"
              {
#line 633 "par_conj_gen.m"
                ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "par_conj_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24, 0) = ((MR_Box) (ll_backend__par_conj_gen__Var_13));
#line 633 "par_conj_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24, 1) = ((MR_Box) (ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5));
#line 633 "par_conj_gen.m"
              }
#line 634 "par_conj_gen.m"
            else
#line 635 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5;
#line 637 "par_conj_gen.m"
            /* direct tailcall eliminated */
#line 637 "par_conj_gen.m"
            {
#line 637 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1 = ll_backend__par_conj_gen__Vars_14;
#line 637 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0__tmp_copy_5 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24;

#line 637 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0__tmp_copy_5;
#line 637 "par_conj_gen.m"
              ll_backend__par_conj_gen__HeadVar__1_1 = ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1;
#line 637 "par_conj_gen.m"
            }
#line 637 "par_conj_gen.m"
            continue;
#line 629 "par_conj_gen.m"
          }
#line 628 "par_conj_gen.m"
      }
#line 628 "par_conj_gen.m"
      break;
#line 628 "par_conj_gen.m"
    }
#line 625 "par_conj_gen.m"
}

#line 611 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
#line 611 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LVal_4,
#line 611 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__Max0_5,
#line 611 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__Max_6)
#line 611 "par_conj_gen.m"
{
#line 619 "par_conj_gen.m"
  {
#line 619 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__LVal_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LVal_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 619 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__N_7;

#line 615 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 615 "par_conj_gen.m"
      {
#line 615 "par_conj_gen.m"
        ll_backend__par_conj_gen__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LVal_4, (MR_Integer) 1)));
#line 616 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__N_7 > ll_backend__par_conj_gen__Max0_5);
#line 615 "par_conj_gen.m"
      }
#line 619 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 618 "par_conj_gen.m"
      *ll_backend__par_conj_gen__Max_6 = ll_backend__par_conj_gen__N_7;
#line 619 "par_conj_gen.m"
    else
#line 620 "par_conj_gen.m"
      *ll_backend__par_conj_gen__Max_6 = ll_backend__par_conj_gen__Max0_5;
#line 619 "par_conj_gen.m"
  }
#line 611 "par_conj_gen.m"
}

#line 609 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
#line 609 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 609 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 609 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_2,
#line 609 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_3)
#line 609 "par_conj_gen.m"
{
#line 609 "par_conj_gen.m"
  {
#line 609 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 609 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__conv2_Max_6;

#line 609 "par_conj_gen.m"
    {
#line 609 "par_conj_gen.m"
      ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), ((MR_Integer) ll_backend__par_conj_gen__wrapper_arg_2), &ll_backend__par_conj_gen__conv2_Max_6);
    }
#line 609 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__par_conj_gen__conv2_Max_6));
#line 609 "par_conj_gen.m"
  }
#line 609 "par_conj_gen.m"
}

#line 607 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
#line 607 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 607 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 607 "par_conj_gen.m"
{
#line 607 "par_conj_gen.m"
  {
#line 607 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
#line 607 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 607 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__2_24;

#line 607 "par_conj_gen.m"
    {
#line 607 "par_conj_gen.m"
      ll_backend__par_conj_gen__conv1_HeadVar__2_24 = ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__607__1_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 607 "par_conj_gen.m"
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__2_24));
#line 607 "par_conj_gen.m"
    return ll_backend__par_conj_gen__wrapper_arg_2;
#line 607 "par_conj_gen.m"
  }
#line 607 "par_conj_gen.m"
}

#line 606 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
#line 606 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 606 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 606 "par_conj_gen.m"
{
#line 606 "par_conj_gen.m"
  {
#line 606 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
#line 606 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 606 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_HeadVar__2_2;

#line 606 "par_conj_gen.m"
    {
#line 606 "par_conj_gen.m"
      ll_backend__par_conj_gen__conv0_HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 606 "par_conj_gen.m"
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_HeadVar__2_2));
#line 606 "par_conj_gen.m"
    return ll_backend__par_conj_gen__wrapper_arg_2;
#line 606 "par_conj_gen.m"
  }
#line 606 "par_conj_gen.m"
}

#line 602 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
#line 602 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Instrs_3,
#line 602 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__MaxRef_4)
#line 602 "par_conj_gen.m"
{
#line 604 "par_conj_gen.m"
  {
#line 604 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_18_18;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeInfo_19_19;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_26_26;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__RVals_5;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LVals0_6;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LValsInRvalsLists_7;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LValsSets_8;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LVals_9;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_10_10;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_12_12;
#line 604 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_14_14;
#line 609 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__conv3_MaxRef_4;

#line 605 "par_conj_gen.m"
    {
#line 605 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_10_10 = mercury__cord__list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__par_conj_gen__Instrs_3);
    }
#line 605 "par_conj_gen.m"
    {
#line 605 "par_conj_gen.m"
      ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(ll_backend__par_conj_gen__V_10_10, &ll_backend__par_conj_gen__RVals_5, &ll_backend__par_conj_gen__LVals0_6);
    }
#line 1851 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 1853 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeInfo_19_19 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[2];
#line 606 "par_conj_gen.m"
    {
#line 606 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_12_12 = mercury__set__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_18_18, ll_backend__par_conj_gen__RVals_5);
    }
#line 606 "par_conj_gen.m"
    {
#line 606 "par_conj_gen.m"
      ll_backend__par_conj_gen__LValsInRvalsLists_7 = mercury__list__map_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_18_18, ll_backend__par_conj_gen__TypeInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[6], ll_backend__par_conj_gen__V_12_12);
    }
#line 607 "par_conj_gen.m"
    {
#line 607 "par_conj_gen.m"
      ll_backend__par_conj_gen__LValsSets_8 = mercury__list__map_2_f_0(ll_backend__par_conj_gen__TypeInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[7], ll_backend__par_conj_gen__LValsInRvalsLists_7);
    }
#line 1870 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 608 "par_conj_gen.m"
    {
#line 608 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_14_14 = mercury__set__union_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, ll_backend__par_conj_gen__LValsSets_8);
    }
#line 608 "par_conj_gen.m"
    {
#line 608 "par_conj_gen.m"
      ll_backend__par_conj_gen__LVals_9 = mercury__set__union_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, ll_backend__par_conj_gen__V_14_14, ll_backend__par_conj_gen__LVals0_6);
    }
#line 609 "par_conj_gen.m"
    {
#line 609 "par_conj_gen.m"
      mercury__set__fold_4_p_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[8], ll_backend__par_conj_gen__LVals_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv3_MaxRef_4);
    }
#line 609 "par_conj_gen.m"
    *ll_backend__par_conj_gen__MaxRef_4 = ((MR_Integer) ll_backend__par_conj_gen__conv3_MaxRef_4);
#line 604 "par_conj_gen.m"
  }
#line 602 "par_conj_gen.m"
}

#line 540 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
#line 540 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 540 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 540 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
#line 540 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
#line 540 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4)
#line 540 "par_conj_gen.m"
{
#line 540 "par_conj_gen.m"
  {
#line 540 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 540 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_Lval_6;

#line 540 "par_conj_gen.m"
    {
#line 540 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_Lval_6);
    }
#line 540 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_Lval_6));
#line 540 "par_conj_gen.m"
  }
#line 540 "par_conj_gen.m"
}

#line 536 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
#line 536 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Lval0_5,
#line 536 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Lval_6)
#line 536 "par_conj_gen.m"
{
#line 539 "par_conj_gen.m"
  {
#line 539 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 539 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TransformRval_8 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[5];

#line 546 "par_conj_gen.m"
    if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 547 "par_conj_gen.m"
      {
#line 547 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 547 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 2)));

#line 551 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__Type_10 == (MR_Integer) 1))
#line 553 "par_conj_gen.m"
          *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 551 "par_conj_gen.m"
        else
#line 549 "par_conj_gen.m"
          {
#line 550 "par_conj_gen.m"
            {
#line 550 "par_conj_gen.m"
              MR_Word base;
#line 550 "par_conj_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 550 "par_conj_gen.m"
              *ll_backend__par_conj_gen__Lval_6 = base;
#line 550 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 550 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 550 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_35));
#line 550 "par_conj_gen.m"
            }
#line 549 "par_conj_gen.m"
          }
#line 547 "par_conj_gen.m"
      }
#line 546 "par_conj_gen.m"
    else
#line 546 "par_conj_gen.m"
      if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 590 "par_conj_gen.m"
        {
#line 590 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__TypeCtorInfo_56_56 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 590 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Tag_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 590 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Rval1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 2)));
#line 590 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Rval2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 3)));
#line 590 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Rval3_22;
#line 590 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Rval4_23;
#line 591 "par_conj_gen.m"
          MR_Box ll_backend__par_conj_gen__conv1_STATE_VARIABLE_Acc_27_27;
#line 592 "par_conj_gen.m"
          MR_Box ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Acc_25;

#line 591 "par_conj_gen.m"
          {
#line 591 "par_conj_gen.m"
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__par_conj_gen__TypeCtorInfo_56_56, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval1_20, &ll_backend__par_conj_gen__Rval3_22, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv1_STATE_VARIABLE_Acc_27_27);
          }
#line 592 "par_conj_gen.m"
          {
#line 592 "par_conj_gen.m"
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__par_conj_gen__TypeCtorInfo_56_56, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval2_21, &ll_backend__par_conj_gen__Rval4_23, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Acc_25);
          }
#line 593 "par_conj_gen.m"
          {
#line 593 "par_conj_gen.m"
            MR_Word base;
#line 593 "par_conj_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 593 "par_conj_gen.m"
            *ll_backend__par_conj_gen__Lval_6 = base;
#line 593 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 593 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Tag_19));
#line 593 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__par_conj_gen__Rval3_22));
#line 593 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__par_conj_gen__Rval4_23));
#line 593 "par_conj_gen.m"
          }
#line 590 "par_conj_gen.m"
        }
#line 546 "par_conj_gen.m"
      else
#line 546 "par_conj_gen.m"
        if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 595 "par_conj_gen.m"
          {
#line 595 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Rval0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 595 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Rval_46;
#line 596 "par_conj_gen.m"
            MR_Box ll_backend__par_conj_gen__conv3_STATE_VARIABLE_Acc_25;

#line 596 "par_conj_gen.m"
            {
#line 596 "par_conj_gen.m"
              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_45, &ll_backend__par_conj_gen__Rval_46, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv3_STATE_VARIABLE_Acc_25);
            }
#line 597 "par_conj_gen.m"
            {
#line 597 "par_conj_gen.m"
              MR_Word base;
#line 597 "par_conj_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "par_conj_gen.m"
              *ll_backend__par_conj_gen__Lval_6 = base;
#line 597 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 597 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_46));
#line 597 "par_conj_gen.m"
            }
#line 595 "par_conj_gen.m"
          }
#line 546 "par_conj_gen.m"
        else
#line 546 "par_conj_gen.m"
          if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 545 "par_conj_gen.m"
            *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 546 "par_conj_gen.m"
          else
#line 546 "par_conj_gen.m"
            if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 586 "par_conj_gen.m"
              {
#line 586 "par_conj_gen.m"
                MR_Word ll_backend__par_conj_gen__Rval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 586 "par_conj_gen.m"
                MR_Word ll_backend__par_conj_gen__Rval_44;
#line 587 "par_conj_gen.m"
                MR_Box ll_backend__par_conj_gen__conv4_STATE_VARIABLE_Acc_25;

#line 587 "par_conj_gen.m"
                {
#line 587 "par_conj_gen.m"
                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_43, &ll_backend__par_conj_gen__Rval_44, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv4_STATE_VARIABLE_Acc_25);
                }
#line 588 "par_conj_gen.m"
                {
#line 588 "par_conj_gen.m"
                  MR_Word base;
#line 588 "par_conj_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "par_conj_gen.m"
                  *ll_backend__par_conj_gen__Lval_6 = base;
#line 588 "par_conj_gen.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 588 "par_conj_gen.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_44));
#line 588 "par_conj_gen.m"
                }
#line 586 "par_conj_gen.m"
              }
#line 546 "par_conj_gen.m"
            else
#line 546 "par_conj_gen.m"
              if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 578 "par_conj_gen.m"
                {
#line 578 "par_conj_gen.m"
                  MR_Word ll_backend__par_conj_gen__Rval0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 578 "par_conj_gen.m"
                  MR_Word ll_backend__par_conj_gen__Rval_40;
#line 579 "par_conj_gen.m"
                  MR_Box ll_backend__par_conj_gen__conv5_STATE_VARIABLE_Acc_25;

#line 579 "par_conj_gen.m"
                  {
#line 579 "par_conj_gen.m"
                    ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_39, &ll_backend__par_conj_gen__Rval_40, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv5_STATE_VARIABLE_Acc_25);
                  }
#line 580 "par_conj_gen.m"
                  {
#line 580 "par_conj_gen.m"
                    MR_Word base;
#line 580 "par_conj_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "par_conj_gen.m"
                    *ll_backend__par_conj_gen__Lval_6 = base;
#line 580 "par_conj_gen.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 580 "par_conj_gen.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_40));
#line 580 "par_conj_gen.m"
                  }
#line 578 "par_conj_gen.m"
                }
#line 546 "par_conj_gen.m"
              else
#line 546 "par_conj_gen.m"
                if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 574 "par_conj_gen.m"
                  {
#line 574 "par_conj_gen.m"
                    MR_Word ll_backend__par_conj_gen__Rval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 574 "par_conj_gen.m"
                    MR_Word ll_backend__par_conj_gen__Rval_38;
#line 575 "par_conj_gen.m"
                    MR_Box ll_backend__par_conj_gen__conv6_STATE_VARIABLE_Acc_25;

#line 575 "par_conj_gen.m"
                    {
#line 575 "par_conj_gen.m"
                      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_37, &ll_backend__par_conj_gen__Rval_38, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv6_STATE_VARIABLE_Acc_25);
                    }
#line 576 "par_conj_gen.m"
                    {
#line 576 "par_conj_gen.m"
                      MR_Word base;
#line 576 "par_conj_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "par_conj_gen.m"
                      *ll_backend__par_conj_gen__Lval_6 = base;
#line 576 "par_conj_gen.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 576 "par_conj_gen.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_38));
#line 576 "par_conj_gen.m"
                    }
#line 574 "par_conj_gen.m"
                  }
#line 546 "par_conj_gen.m"
                else
#line 546 "par_conj_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 544 "par_conj_gen.m"
                    {
#line 544 "par_conj_gen.m"
                      MR_Integer ll_backend__par_conj_gen__SlotNum_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));

#line 545 "par_conj_gen.m"
                      {
#line 545 "par_conj_gen.m"
                        MR_Word base;
#line 545 "par_conj_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "par_conj_gen.m"
                        *ll_backend__par_conj_gen__Lval_6 = base;
#line 545 "par_conj_gen.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 545 "par_conj_gen.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_58));
#line 545 "par_conj_gen.m"
                      }
#line 544 "par_conj_gen.m"
                    }
#line 546 "par_conj_gen.m"
                  else
#line 546 "par_conj_gen.m"
                    if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 582 "par_conj_gen.m"
                      {
#line 582 "par_conj_gen.m"
                        MR_Word ll_backend__par_conj_gen__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 582 "par_conj_gen.m"
                        MR_Word ll_backend__par_conj_gen__Rval_42;
#line 583 "par_conj_gen.m"
                        MR_Box ll_backend__par_conj_gen__conv7_STATE_VARIABLE_Acc_25;

#line 583 "par_conj_gen.m"
                        {
#line 583 "par_conj_gen.m"
                          ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_41, &ll_backend__par_conj_gen__Rval_42, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv7_STATE_VARIABLE_Acc_25);
                        }
#line 584 "par_conj_gen.m"
                        {
#line 584 "par_conj_gen.m"
                          MR_Word base;
#line 584 "par_conj_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "par_conj_gen.m"
                          *ll_backend__par_conj_gen__Lval_6 = base;
#line 584 "par_conj_gen.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 584 "par_conj_gen.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_42));
#line 584 "par_conj_gen.m"
                        }
#line 582 "par_conj_gen.m"
                      }
#line 546 "par_conj_gen.m"
                    else
#line 546 "par_conj_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 570 "par_conj_gen.m"
                        {
#line 570 "par_conj_gen.m"
                          MR_Word ll_backend__par_conj_gen__Rval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 570 "par_conj_gen.m"
                          MR_Word ll_backend__par_conj_gen__Rval_18;
#line 571 "par_conj_gen.m"
                          MR_Box ll_backend__par_conj_gen__conv8_STATE_VARIABLE_Acc_25;

#line 571 "par_conj_gen.m"
                          {
#line 571 "par_conj_gen.m"
                            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_17, &ll_backend__par_conj_gen__Rval_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv8_STATE_VARIABLE_Acc_25);
                          }
#line 572 "par_conj_gen.m"
                          {
#line 572 "par_conj_gen.m"
                            MR_Word base;
#line 572 "par_conj_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "par_conj_gen.m"
                            *ll_backend__par_conj_gen__Lval_6 = base;
#line 572 "par_conj_gen.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 572 "par_conj_gen.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_18));
#line 572 "par_conj_gen.m"
                          }
#line 570 "par_conj_gen.m"
                        }
#line 546 "par_conj_gen.m"
                      else
#line 568 "par_conj_gen.m"
                        *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 539 "par_conj_gen.m"
  }
#line 536 "par_conj_gen.m"
}

#line 533 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1(
#line 533 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 533 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 533 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
#line 533 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
#line 533 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4)
#line 533 "par_conj_gen.m"
{
#line 533 "par_conj_gen.m"
  {
#line 533 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 533 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_Lval_6;

#line 533 "par_conj_gen.m"
    {
#line 533 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_Lval_6);
    }
#line 533 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_Lval_6));
#line 533 "par_conj_gen.m"
  }
#line 533 "par_conj_gen.m"
}

#line 529 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
#line 529 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5,
#line 529 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6)
#line 529 "par_conj_gen.m"
{
#line 532 "par_conj_gen.m"
  {
#line 532 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 533 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__conv1_V_4_4;

#line 534 "par_conj_gen.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 533 "par_conj_gen.m"
    {
#line 533 "par_conj_gen.m"
      ll_backend__exprn_aux__transform_lval_in_instr_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[4], ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5, ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv1_V_4_4);
    }
#line 532 "par_conj_gen.m"
  }
#line 529 "par_conj_gen.m"
}

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1(
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 527 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 527 "par_conj_gen.m"
{
#line 527 "par_conj_gen.m"
  {
#line 527 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 527 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6;

#line 527 "par_conj_gen.m"
    {
#line 527 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6);
    }
#line 527 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6));
#line 527 "par_conj_gen.m"
  }
#line 527 "par_conj_gen.m"
}

#line 524 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(
#line 524 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4,
#line 524 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Code_5)
#line 524 "par_conj_gen.m"
{
#line 526 "par_conj_gen.m"
  {
#line 526 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 526 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_10 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 527 "par_conj_gen.m"
    {
#line 527 "par_conj_gen.m"
      mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_10, ll_backend__par_conj_gen__TypeCtorInfo_10_10, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[3], ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4, ll_backend__par_conj_gen__STATE_VARIABLE_Code_5);
#line 527 "par_conj_gen.m"
      return;
    }
#line 526 "par_conj_gen.m"
  }
#line 524 "par_conj_gen.m"
}

#line 513 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
#line 513 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1)
#line 513 "par_conj_gen.m"
{
#line 515 "par_conj_gen.m"
  {
#line 515 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__par_conj_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 515 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_2_2;
#line 515 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__V_3_3;

#line 515 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 515 "par_conj_gen.m"
      {
#line 515 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 515 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 515 "par_conj_gen.m"
      }
#line 515 "par_conj_gen.m"
    return ll_backend__par_conj_gen__succeeded;
#line 515 "par_conj_gen.m"
  }
#line 513 "par_conj_gen.m"
}

#line 505 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
#line 505 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 505 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 505 "par_conj_gen.m"
{
#line 505 "par_conj_gen.m"
  {
#line 505 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 505 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;

#line 505 "par_conj_gen.m"
    {
#line 505 "par_conj_gen.m"
      return ll_backend__par_conj_gen__succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 505 "par_conj_gen.m"
    return ll_backend__par_conj_gen__succeeded;
#line 505 "par_conj_gen.m"
  }
#line 505 "par_conj_gen.m"
}

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_2(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 506 "par_conj_gen.m"
{
#line 506 "par_conj_gen.m"
  {
#line 506 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 506 "par_conj_gen.m"
    MR_builtin_longjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_0, 1);
#line 506 "par_conj_gen.m"
  }
#line 506 "par_conj_gen.m"
}

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_3(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 506 "par_conj_gen.m"
{
#line 506 "par_conj_gen.m"
  {
#line 506 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 506 "par_conj_gen.m"
    (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_17 = ((MR_Word) (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv1_LocnPrime_17);
#line 506 "par_conj_gen.m"
    {
#line 506 "par_conj_gen.m"
      ll_backend__par_conj_gen__best_variable_location_det_3_p_0_2(ll_backend__par_conj_gen__env_ptr);
#line 506 "par_conj_gen.m"
      return;
    }
#line 506 "par_conj_gen.m"
  }
#line 506 "par_conj_gen.m"
}

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_4(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 506 "par_conj_gen.m"
{
#line 506 "par_conj_gen.m"
  {
#line 506 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 506 "par_conj_gen.m"
    if (MR_builtin_setjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_0) == 0)
#line 506 "par_conj_gen.m"
      {
#line 506 "par_conj_gen.m"
        {
#line 506 "par_conj_gen.m"
          mercury__set__member_2_p_1((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22, &(ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv1_LocnPrime_17, (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__RegLocns_16, ll_backend__par_conj_gen__best_variable_location_det_3_p_0_3, ll_backend__par_conj_gen__env_ptr);
        }
#line 506 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_FALSE;
#line 506 "par_conj_gen.m"
      }
#line 506 "par_conj_gen.m"
    else
#line 506 "par_conj_gen.m"
      (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_TRUE;
#line 506 "par_conj_gen.m"
  }
#line 506 "par_conj_gen.m"
}

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_5(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 510 "par_conj_gen.m"
{
#line 510 "par_conj_gen.m"
  {
#line 510 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 510 "par_conj_gen.m"
    MR_builtin_longjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_1, 1);
#line 510 "par_conj_gen.m"
  }
#line 510 "par_conj_gen.m"
}

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_6(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 510 "par_conj_gen.m"
{
#line 510 "par_conj_gen.m"
  {
#line 510 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 510 "par_conj_gen.m"
    (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_7 = ((MR_Word) (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv2_LocnPrime_7);
#line 510 "par_conj_gen.m"
    {
#line 510 "par_conj_gen.m"
      ll_backend__par_conj_gen__best_variable_location_det_3_p_0_5(ll_backend__par_conj_gen__env_ptr);
#line 510 "par_conj_gen.m"
      return;
    }
#line 510 "par_conj_gen.m"
  }
#line 510 "par_conj_gen.m"
}

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_7(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 510 "par_conj_gen.m"
{
#line 510 "par_conj_gen.m"
  {
#line 510 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 510 "par_conj_gen.m"
    if (MR_builtin_setjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_1) == 0)
#line 510 "par_conj_gen.m"
      {
#line 510 "par_conj_gen.m"
        {
#line 510 "par_conj_gen.m"
          mercury__set__member_2_p_1((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22, &(ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv2_LocnPrime_7, (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__AllLocns_15, ll_backend__par_conj_gen__best_variable_location_det_3_p_0_6, ll_backend__par_conj_gen__env_ptr);
        }
#line 510 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_FALSE;
#line 510 "par_conj_gen.m"
      }
#line 510 "par_conj_gen.m"
    else
#line 510 "par_conj_gen.m"
      (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_TRUE;
#line 510 "par_conj_gen.m"
  }
#line 510 "par_conj_gen.m"
}

#line 487 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
#line 487 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CI_4,
#line 487 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Var_5,
#line 487 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Locn_6)
#line 487 "par_conj_gen.m"
{
#line 487 "par_conj_gen.m"
  {
#line 487 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s ll_backend__par_conj_gen__env;

#line 491 "par_conj_gen.m"
    {
#line 502 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__Map_14;
#line 502 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_18_18;
#line 504 "par_conj_gen.m"
      MR_Box ll_backend__par_conj_gen__conv0_AllLocns_15;

#line 503 "par_conj_gen.m"
      {
#line 503 "par_conj_gen.m"
        ll_backend__code_info__variable_locations_2_p_0(ll_backend__par_conj_gen__CI_4, &ll_backend__par_conj_gen__Map_14);
      }
#line 504 "par_conj_gen.m"
      {
#line 504 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__Map_14, ((MR_Box) (ll_backend__par_conj_gen__Var_5)), &ll_backend__par_conj_gen__conv0_AllLocns_15);
      }
#line 504 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded)
#line 504 "par_conj_gen.m"
        {
#line 504 "par_conj_gen.m"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__AllLocns_15 = ((MR_Word) ll_backend__par_conj_gen__conv0_AllLocns_15);
#line 504 "par_conj_gen.m"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_TRUE;
#line 504 "par_conj_gen.m"
        }
#line 502 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded)
#line 502 "par_conj_gen.m"
        {
#line 505 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_18_18 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[2];
#line 2668 "ll_backend.par_conj_gen.c"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 505 "par_conj_gen.m"
          {
#line 505 "par_conj_gen.m"
            mercury__set__filter_3_p_0((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22, ll_backend__par_conj_gen__V_18_18, (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__AllLocns_15, &(ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__RegLocns_16);
          }
#line 506 "par_conj_gen.m"
          {
#line 506 "par_conj_gen.m"
            ll_backend__par_conj_gen__best_variable_location_det_3_p_0_4(&ll_backend__par_conj_gen__env);
          }
#line 509 "par_conj_gen.m"
          if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded)
#line 508 "par_conj_gen.m"
            {
#line 508 "par_conj_gen.m"
              (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_7 = (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_17;
#line 508 "par_conj_gen.m"
              (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_TRUE;
#line 508 "par_conj_gen.m"
            }
#line 509 "par_conj_gen.m"
          else
#line 510 "par_conj_gen.m"
            {
#line 510 "par_conj_gen.m"
              {
#line 510 "par_conj_gen.m"
                ll_backend__par_conj_gen__best_variable_location_det_3_p_0_7(&ll_backend__par_conj_gen__env);
              }
#line 510 "par_conj_gen.m"
            }
#line 502 "par_conj_gen.m"
        }
#line 494 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded)
#line 493 "par_conj_gen.m"
        *ll_backend__par_conj_gen__Locn_6 = (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_7;
#line 494 "par_conj_gen.m"
      else
#line 495 "par_conj_gen.m"
        {
#line 495 "par_conj_gen.m"
          {
#line 495 "par_conj_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
#line 495 "par_conj_gen.m"
            return;
          }
#line 495 "par_conj_gen.m"
        }
#line 491 "par_conj_gen.m"
    }
#line 487 "par_conj_gen.m"
  }
#line 487 "par_conj_gen.m"
}

#line 470 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
#line 470 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCVarName_5,
#line 470 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCSVarName_6,
#line 470 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlot_7,
#line 470 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CopyStr_8)
#line 470 "par_conj_gen.m"
{
#line 481 "par_conj_gen.m"
  {
#line 481 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 481 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__StackSlotName_9;

#line 474 "par_conj_gen.m"
    {
#line 474 "par_conj_gen.m"
      ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__StackSlot_7, &ll_backend__par_conj_gen__StackSlotName_9);
    }
#line 481 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 478 "par_conj_gen.m"
      {
#line 478 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__N_10;

#line 475 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__StackSlot_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__StackSlot_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 475 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 475 "par_conj_gen.m"
          {
#line 475 "par_conj_gen.m"
            ll_backend__par_conj_gen__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__StackSlot_7, (MR_Integer) 1)));
#line 476 "par_conj_gen.m"
            {
#line 476 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_28_28;
#line 476 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_30_30;
#line 476 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_31_31;
#line 476 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_32_32;
#line 476 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_34_34;
#line 476 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_35_35;
#line 476 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_37_37;
#line 476 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_38_38;

#line 2786 "ll_backend.par_conj_gen.c"
              {
#line 2788 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__StackSlotName_9, (MR_String) ";\n");
              }
#line 2791 "ll_backend.par_conj_gen.c"
              {
#line 2793 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", ll_backend__par_conj_gen__V_28_28);
              }
#line 2796 "ll_backend.par_conj_gen.c"
              {
#line 2798 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_31_31 = mercury__string__int_to_string_1_f_0(ll_backend__par_conj_gen__N_10);
              }
#line 2801 "ll_backend.par_conj_gen.c"
              {
#line 2803 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_31_31, ll_backend__par_conj_gen__V_30_30);
              }
#line 2806 "ll_backend.par_conj_gen.c"
              {
#line 2808 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_32_32);
              }
#line 2811 "ll_backend.par_conj_gen.c"
              {
#line 2813 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__LCSVarName_6, ll_backend__par_conj_gen__V_34_34);
              }
#line 2816 "ll_backend.par_conj_gen.c"
              {
#line 2818 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_35_35);
              }
#line 2821 "ll_backend.par_conj_gen.c"
              {
#line 2823 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_38_38 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__LCVarName_5, ll_backend__par_conj_gen__V_37_37);
              }
#line 2826 "ll_backend.par_conj_gen.c"
              {
#line 2828 "ll_backend.par_conj_gen.c"
                *ll_backend__par_conj_gen__CopyStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_worker_sv(", ll_backend__par_conj_gen__V_38_38);
              }
#line 476 "par_conj_gen.m"
            }
#line 475 "par_conj_gen.m"
          }
#line 475 "par_conj_gen.m"
        else
#line 479 "par_conj_gen.m"
          {
#line 479 "par_conj_gen.m"
            {
#line 479 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "not stack slot");
#line 479 "par_conj_gen.m"
              return;
            }
#line 479 "par_conj_gen.m"
          }
#line 478 "par_conj_gen.m"
      }
#line 481 "par_conj_gen.m"
    else
#line 482 "par_conj_gen.m"
      {
#line 482 "par_conj_gen.m"
        {
#line 482 "par_conj_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "cannot convert to string");
#line 482 "par_conj_gen.m"
          return;
        }
#line 482 "par_conj_gen.m"
      }
#line 481 "par_conj_gen.m"
  }
#line 470 "par_conj_gen.m"
}

#line 464 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
#line 464 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 464 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 464 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 464 "par_conj_gen.m"
{
#line 464 "par_conj_gen.m"
  {
#line 464 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 464 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__conv0_CopyStr_8;

#line 464 "par_conj_gen.m"
    {
#line 464 "par_conj_gen.m"
      ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_CopyStr_8);
    }
#line 464 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_CopyStr_8));
#line 464 "par_conj_gen.m"
  }
#line 464 "par_conj_gen.m"
}

#line 446 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
#line 446 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__FrameSize_6,
#line 446 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVarLocn_7,
#line 446 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVarLocn_8,
#line 446 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlots_9,
#line 446 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CodeStr_10)
#line 446 "par_conj_gen.m"
{
#line 450 "par_conj_gen.m"
  {
#line 450 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCVarName_13;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCSVarName_14;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__IncrLine_16;
#line 450 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__CopyStrs_17;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__CopyLines_18;
#line 450 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_31_31;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_32_32;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_33_33;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_39_39;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_40_40;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_42_42;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_43_43;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_45_45;
#line 450 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_46_46;
#line 457 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCVarNamePrime_11;
#line 457 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCSVarNamePrime_12;

#line 452 "par_conj_gen.m"
    {
#line 452 "par_conj_gen.m"
      ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__LCVarLocn_7, &ll_backend__par_conj_gen__LCVarNamePrime_11);
    }
#line 452 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 453 "par_conj_gen.m"
      {
#line 453 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__LCSVarLocn_8, &ll_backend__par_conj_gen__LCSVarNamePrime_12);
      }
#line 457 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 455 "par_conj_gen.m"
      {
#line 455 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCVarName_13 = ll_backend__par_conj_gen__LCVarNamePrime_11;
#line 456 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCSVarName_14 = ll_backend__par_conj_gen__LCSVarNamePrime_12;
#line 455 "par_conj_gen.m"
      }
#line 457 "par_conj_gen.m"
    else
#line 458 "par_conj_gen.m"
      {
#line 458 "par_conj_gen.m"
        {
#line 458 "par_conj_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_slots_to_child_stack\'/5", (MR_String) "cannot convert to string");
#line 458 "par_conj_gen.m"
          return;
        }
#line 458 "par_conj_gen.m"
      }
#line 2985 "ll_backend.par_conj_gen.c"
    {
#line 2987 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_39_39 = mercury__string__int_to_string_1_f_0(ll_backend__par_conj_gen__FrameSize_6);
    }
#line 2990 "ll_backend.par_conj_gen.c"
    {
#line 2992 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_39_39, (MR_String) ");\n");
    }
#line 2995 "ll_backend.par_conj_gen.c"
    {
#line 2997 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_40_40);
    }
#line 3000 "ll_backend.par_conj_gen.c"
    {
#line 3002 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_43_43 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__LCSVarName_14, ll_backend__par_conj_gen__V_42_42);
    }
#line 3005 "ll_backend.par_conj_gen.c"
    {
#line 3007 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_43_43);
    }
#line 3010 "ll_backend.par_conj_gen.c"
    {
#line 3012 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_46_46 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__LCVarName_13, ll_backend__par_conj_gen__V_45_45);
    }
#line 3015 "ll_backend.par_conj_gen.c"
    {
#line 3017 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__IncrLine_16 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_inc_worker_sp(", ll_backend__par_conj_gen__V_46_46);
    }
#line 464 "par_conj_gen.m"
    {
#line 464 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 464 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[0]));
#line 464 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 1) = ((MR_Box) (ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1));
#line 464 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 464 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 3) = ((MR_Box) (ll_backend__par_conj_gen__LCVarName_13));
#line 464 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 4) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarName_14));
#line 464 "par_conj_gen.m"
    }
#line 464 "par_conj_gen.m"
    {
#line 464 "par_conj_gen.m"
      mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__par_conj_gen__V_31_31, ll_backend__par_conj_gen__StackSlots_9, &ll_backend__par_conj_gen__CopyStrs_17);
    }
#line 466 "par_conj_gen.m"
    {
#line 466 "par_conj_gen.m"
      mercury__string__append_list_2_p_0(ll_backend__par_conj_gen__CopyStrs_17, &ll_backend__par_conj_gen__CopyLines_18);
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__CopyLines_18, (MR_String) "\t}\n");
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__IncrLine_16, ll_backend__par_conj_gen__V_33_33);
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      *ll_backend__par_conj_gen__CodeStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", ll_backend__par_conj_gen__V_32_32);
    }
#line 450 "par_conj_gen.m"
  }
#line 446 "par_conj_gen.m"
}

#line 335 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
#line 335 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__SyncTermBaseSlot_4,
#line 335 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotLval_5)
#line 335 "par_conj_gen.m"
{
#line 339 "par_conj_gen.m"
  {
#line 339 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 339 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__HeadVar__3_3;
#line 339 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Components_6;
#line 339 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_17_17;
#line 339 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_20_20;
#line 339 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_21_21;
#line 339 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_22_22;
#line 339 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_24_24;
#line 339 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_31_31;
#line 339 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_32_32;

#line 342 "par_conj_gen.m"
    {
#line 342 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_22_22, 0) = ((MR_Box) (ll_backend__par_conj_gen__SyncTermBaseSlotLval_5));
#line 342 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "par_conj_gen.m"
    }
#line 342 "par_conj_gen.m"
    {
#line 342 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_21_21 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__V_22_22);
    }
#line 342 "par_conj_gen.m"
    {
#line 342 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_20_20, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_21_21));
#line 342 "par_conj_gen.m"
    }
#line 3121 "ll_backend.par_conj_gen.c"
    {
#line 3123 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_31_31 = mercury__string__int_to_string_1_f_0(ll_backend__par_conj_gen__SyncTermBaseSlot_4);
    }
#line 3126 "ll_backend.par_conj_gen.c"
    {
#line 3128 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_31_31, (MR_String) "));\n#endif\n");
    }
#line 3131 "ll_backend.par_conj_gen.c"
    {
#line 3133 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "#ifdef MR_THREADSCOPE\nMR_threadscope_post_end_par_conj(&MR_sv(", ll_backend__par_conj_gen__V_32_32);
    }
#line 340 "par_conj_gen.m"
    {
#line 340 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 340 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 340 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 1) = ((MR_Box) ((MR_Integer) 1));
#line 340 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 2) = ((MR_Box) ((MR_Integer) 1));
#line 340 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 3) = ((MR_Box) (ll_backend__par_conj_gen__V_20_20));
#line 340 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 4) = ((MR_Box) (ll_backend__par_conj_gen__V_24_24));
#line 340 "par_conj_gen.m"
    }
#line 343 "par_conj_gen.m"
    {
#line 343 "par_conj_gen.m"
      ll_backend__par_conj_gen__Components_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__Components_6, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_17_17));
#line 343 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__Components_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "par_conj_gen.m"
    }
#line 338 "par_conj_gen.m"
    {
#line 338 "par_conj_gen.m"
      ll_backend__par_conj_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__par_conj_gen__Components_6));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 1));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 9) = ((MR_Box) ((MR_Integer) 1));
#line 338 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 10) = ((MR_Box) ((MR_Integer) 0));
#line 338 "par_conj_gen.m"
    }
#line 339 "par_conj_gen.m"
    return ll_backend__par_conj_gen__HeadVar__3_3;
#line 339 "par_conj_gen.m"
  }
#line 335 "par_conj_gen.m"
}

#line 407 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_8(
#line 407 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 407 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 407 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 407 "par_conj_gen.m"
{
#line 407 "par_conj_gen.m"
  {
#line 407 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 407 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv3_HeadVar__3_3;

#line 407 "par_conj_gen.m"
    {
#line 407 "par_conj_gen.m"
      ll_backend__code_info__get_variable_slot_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv3_HeadVar__3_3);
    }
#line 407 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv3_HeadVar__3_3));
#line 407 "par_conj_gen.m"
  }
#line 407 "par_conj_gen.m"
}

#line 505 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_1(
#line 505 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 505 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 505 "par_conj_gen.m"
{
#line 505 "par_conj_gen.m"
  {
#line 505 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 505 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;

#line 505 "par_conj_gen.m"
    {
#line 505 "par_conj_gen.m"
      return ll_backend__par_conj_gen__succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 505 "par_conj_gen.m"
    return ll_backend__par_conj_gen__succeeded;
#line 505 "par_conj_gen.m"
  }
#line 505 "par_conj_gen.m"
}

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_2(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 506 "par_conj_gen.m"
{
#line 506 "par_conj_gen.m"
  {
#line 506 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 506 "par_conj_gen.m"
    MR_builtin_longjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_0, 1);
#line 506 "par_conj_gen.m"
  }
#line 506 "par_conj_gen.m"
}

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_3(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 506 "par_conj_gen.m"
{
#line 506 "par_conj_gen.m"
  {
#line 506 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 506 "par_conj_gen.m"
    (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_88 = ((MR_Word) (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv1_LocnPrime_88);
#line 506 "par_conj_gen.m"
    {
#line 506 "par_conj_gen.m"
      ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_2(ll_backend__par_conj_gen__env_ptr);
#line 506 "par_conj_gen.m"
      return;
    }
#line 506 "par_conj_gen.m"
  }
#line 506 "par_conj_gen.m"
}

#line 506 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_4(
#line 506 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 506 "par_conj_gen.m"
{
#line 506 "par_conj_gen.m"
  {
#line 506 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 506 "par_conj_gen.m"
    if (MR_builtin_setjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_0) == 0)
#line 506 "par_conj_gen.m"
      {
#line 506 "par_conj_gen.m"
        {
#line 506 "par_conj_gen.m"
          mercury__set__member_2_p_1((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93, &(ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv1_LocnPrime_88, (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__RegLocns_87, ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_3, ll_backend__par_conj_gen__env_ptr);
        }
#line 506 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_FALSE;
#line 506 "par_conj_gen.m"
      }
#line 506 "par_conj_gen.m"
    else
#line 506 "par_conj_gen.m"
      (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_TRUE;
#line 506 "par_conj_gen.m"
  }
#line 506 "par_conj_gen.m"
}

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_5(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 510 "par_conj_gen.m"
{
#line 510 "par_conj_gen.m"
  {
#line 510 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 510 "par_conj_gen.m"
    MR_builtin_longjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_1, 1);
#line 510 "par_conj_gen.m"
  }
#line 510 "par_conj_gen.m"
}

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_6(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 510 "par_conj_gen.m"
{
#line 510 "par_conj_gen.m"
  {
#line 510 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 510 "par_conj_gen.m"
    (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_78 = ((MR_Word) (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv2_LocnPrime_78);
#line 510 "par_conj_gen.m"
    {
#line 510 "par_conj_gen.m"
      ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_5(ll_backend__par_conj_gen__env_ptr);
#line 510 "par_conj_gen.m"
      return;
    }
#line 510 "par_conj_gen.m"
  }
#line 510 "par_conj_gen.m"
}

#line 510 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_7(
#line 510 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 510 "par_conj_gen.m"
{
#line 510 "par_conj_gen.m"
  {
#line 510 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 510 "par_conj_gen.m"
    if (MR_builtin_setjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_1) == 0)
#line 510 "par_conj_gen.m"
      {
#line 510 "par_conj_gen.m"
        {
#line 510 "par_conj_gen.m"
          mercury__set__member_2_p_1((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93, &(ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv2_LocnPrime_78, (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__AllLocns_86, ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_6, ll_backend__par_conj_gen__env_ptr);
        }
#line 510 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_FALSE;
#line 510 "par_conj_gen.m"
      }
#line 510 "par_conj_gen.m"
    else
#line 510 "par_conj_gen.m"
      (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_TRUE;
#line 510 "par_conj_gen.m"
  }
#line 510 "par_conj_gen.m"
}

#line 117 "par_conj_gen.m"
void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0(
#line 117 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Goal_8,
#line 117 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVar_9,
#line 117 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVar_10,
#line 117 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__UseParentStack_11,
#line 117 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Code_12,
#line 117 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_43,
#line 117 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_44)
#line 117 "par_conj_gen.m"
{
#line 117 "par_conj_gen.m"
  {
#line 117 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s ll_backend__par_conj_gen__env;

#line 351 "par_conj_gen.m"
    {
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__TypeCtorInfo_69_69;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__TypeCtorInfo_70_70;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__KnownVars_14;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__KnownVarsSet_15;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__NonLocalsSet_16;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__InputVarsSet_17;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__InputVars_18;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SaveCode_19;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LCVarLocn_20;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LCSVarLocn_21;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnOffLabel_22;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnUinstr_23;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnInstr_24;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnOffCode_25;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__PositionAfterSpawnOff_26;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LabelUinstr_27;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LabelInstr_28;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LabelCode_29;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__GoalCode_30;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnedOffCode0_31;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnedOffCode_32;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__CopyCode_33;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_45_45;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_48_48;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_49_49;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_52_52;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_54_54;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_57_57;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_65_65;
#line 351 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_67_67;
#line 359 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_68_68;
#line 502 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__Map_85;
#line 502 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_89_89;
#line 504 "par_conj_gen.m"
      MR_Box ll_backend__par_conj_gen__conv0_AllLocns_86;

#line 357 "par_conj_gen.m"
      {
#line 357 "par_conj_gen.m"
        ll_backend__code_info__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_43, &ll_backend__par_conj_gen__KnownVars_14);
      }
#line 3521 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 358 "par_conj_gen.m"
      {
#line 358 "par_conj_gen.m"
        ll_backend__par_conj_gen__KnownVarsSet_15 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__KnownVars_14);
      }
#line 359 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__Goal_8, (MR_Integer) 0)));
#line 359 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__Goal_8, (MR_Integer) 1)));
#line 359 "par_conj_gen.m"
      {
#line 359 "par_conj_gen.m"
        ll_backend__par_conj_gen__NonLocalsSet_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__par_conj_gen__V_45_45);
      }
#line 360 "par_conj_gen.m"
      {
#line 360 "par_conj_gen.m"
        ll_backend__par_conj_gen__InputVarsSet_17 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__NonLocalsSet_16, ll_backend__par_conj_gen__KnownVarsSet_15);
      }
#line 361 "par_conj_gen.m"
      {
#line 361 "par_conj_gen.m"
        ll_backend__par_conj_gen__InputVars_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__InputVarsSet_17);
      }
#line 362 "par_conj_gen.m"
      {
#line 362 "par_conj_gen.m"
        ll_backend__code_info__save_variables_on_stack_4_p_0(ll_backend__par_conj_gen__InputVars_18, &ll_backend__par_conj_gen__SaveCode_19, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_43, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46);
      }
#line 503 "par_conj_gen.m"
      {
#line 503 "par_conj_gen.m"
        ll_backend__code_info__variable_locations_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46, &ll_backend__par_conj_gen__Map_85);
      }
#line 504 "par_conj_gen.m"
      {
#line 504 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__Map_85, ((MR_Box) (ll_backend__par_conj_gen__LCVar_9)), &ll_backend__par_conj_gen__conv0_AllLocns_86);
      }
#line 504 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded)
#line 504 "par_conj_gen.m"
        {
#line 504 "par_conj_gen.m"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__AllLocns_86 = ((MR_Word) ll_backend__par_conj_gen__conv0_AllLocns_86);
#line 504 "par_conj_gen.m"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_TRUE;
#line 504 "par_conj_gen.m"
        }
#line 502 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded)
#line 502 "par_conj_gen.m"
        {
#line 505 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_89_89 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[1];
#line 3578 "ll_backend.par_conj_gen.c"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 505 "par_conj_gen.m"
          {
#line 505 "par_conj_gen.m"
            mercury__set__filter_3_p_0((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93, ll_backend__par_conj_gen__V_89_89, (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__AllLocns_86, &(ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__RegLocns_87);
          }
#line 506 "par_conj_gen.m"
          {
#line 506 "par_conj_gen.m"
            ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_4(&ll_backend__par_conj_gen__env);
          }
#line 509 "par_conj_gen.m"
          if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded)
#line 508 "par_conj_gen.m"
            {
#line 508 "par_conj_gen.m"
              (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_78 = (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_88;
#line 508 "par_conj_gen.m"
              (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_TRUE;
#line 508 "par_conj_gen.m"
            }
#line 509 "par_conj_gen.m"
          else
#line 510 "par_conj_gen.m"
            {
#line 510 "par_conj_gen.m"
              {
#line 510 "par_conj_gen.m"
                ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_7(&ll_backend__par_conj_gen__env);
              }
#line 510 "par_conj_gen.m"
            }
#line 502 "par_conj_gen.m"
        }
#line 494 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded)
#line 493 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCVarLocn_20 = (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_78;
#line 494 "par_conj_gen.m"
      else
#line 495 "par_conj_gen.m"
        {
#line 495 "par_conj_gen.m"
          {
#line 495 "par_conj_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
#line 495 "par_conj_gen.m"
            return;
          }
#line 495 "par_conj_gen.m"
        }
#line 365 "par_conj_gen.m"
      {
#line 365 "par_conj_gen.m"
        ll_backend__par_conj_gen__best_variable_location_det_3_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46, ll_backend__par_conj_gen__LCSVar_10, &ll_backend__par_conj_gen__LCSVarLocn_21);
      }
#line 367 "par_conj_gen.m"
      {
#line 367 "par_conj_gen.m"
        ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__SpawnOffLabel_22, ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47);
      }
#line 368 "par_conj_gen.m"
      {
#line 368 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 368 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_48_48, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_20));
#line 368 "par_conj_gen.m"
      }
#line 368 "par_conj_gen.m"
      {
#line 368 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 368 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_49_49, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_21));
#line 368 "par_conj_gen.m"
      }
#line 368 "par_conj_gen.m"
      {
#line 368 "par_conj_gen.m"
        ll_backend__par_conj_gen__SpawnUinstr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 368 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 368 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_23, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_48_48));
#line 368 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_23, 2) = ((MR_Box) (ll_backend__par_conj_gen__V_49_49));
#line 368 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_23, 3) = ((MR_Box) (ll_backend__par_conj_gen__SpawnOffLabel_22));
#line 368 "par_conj_gen.m"
      }
#line 370 "par_conj_gen.m"
      {
#line 370 "par_conj_gen.m"
        ll_backend__par_conj_gen__SpawnInstr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__SpawnInstr_24, 0) = ((MR_Box) (ll_backend__par_conj_gen__SpawnUinstr_23));
#line 370 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__SpawnInstr_24, 1) = ((MR_Box) ((MR_String) ""));
#line 370 "par_conj_gen.m"
      }
#line 3680 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__TypeCtorInfo_70_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 371 "par_conj_gen.m"
      {
#line 371 "par_conj_gen.m"
        ll_backend__par_conj_gen__SpawnOffCode_25 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ((MR_Box) (ll_backend__par_conj_gen__SpawnInstr_24)));
      }
#line 372 "par_conj_gen.m"
      {
#line 372 "par_conj_gen.m"
        ll_backend__code_info__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47, &ll_backend__par_conj_gen__PositionAfterSpawnOff_26);
      }
#line 375 "par_conj_gen.m"
      {
#line 375 "par_conj_gen.m"
        ll_backend__par_conj_gen__LabelUinstr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LabelUinstr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 375 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LabelUinstr_27, 1) = ((MR_Box) (ll_backend__par_conj_gen__SpawnOffLabel_22));
#line 375 "par_conj_gen.m"
      }
#line 376 "par_conj_gen.m"
      {
#line 376 "par_conj_gen.m"
        ll_backend__par_conj_gen__LabelInstr_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__LabelInstr_28, 0) = ((MR_Box) (ll_backend__par_conj_gen__LabelUinstr_27));
#line 376 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__LabelInstr_28, 1) = ((MR_Box) ((MR_String) "Label for spawned off code"));
#line 376 "par_conj_gen.m"
      }
#line 377 "par_conj_gen.m"
      {
#line 377 "par_conj_gen.m"
        ll_backend__par_conj_gen__LabelCode_29 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ((MR_Box) (ll_backend__par_conj_gen__LabelInstr_28)));
      }
#line 382 "par_conj_gen.m"
      {
#line 382 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "par_conj_gen.m"
        MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_54_54, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_21));
#line 382 "par_conj_gen.m"
        MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "par_conj_gen.m"
      }
#line 382 "par_conj_gen.m"
      {
#line 382 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "par_conj_gen.m"
        MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_52_52, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_20));
#line 382 "par_conj_gen.m"
        MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_52_52, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_54_54));
#line 382 "par_conj_gen.m"
      }
#line 382 "par_conj_gen.m"
      {
#line 382 "par_conj_gen.m"
        ll_backend__code_info__clobber_regs_3_p_0(ll_backend__par_conj_gen__V_52_52, ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53);
      }
#line 384 "par_conj_gen.m"
      {
#line 384 "par_conj_gen.m"
        ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__par_conj_gen__Goal_8, &ll_backend__par_conj_gen__GoalCode_30, ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_57_57);
      }
#line 386 "par_conj_gen.m"
      {
#line 386 "par_conj_gen.m"
        ll_backend__par_conj_gen__SpawnedOffCode0_31 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ll_backend__par_conj_gen__LabelCode_29, ll_backend__par_conj_gen__GoalCode_30);
      }
#line 388 "par_conj_gen.m"
      {
#line 388 "par_conj_gen.m"
        ll_backend__code_info__reset_to_position_3_p_0(ll_backend__par_conj_gen__PositionAfterSpawnOff_26, ll_backend__par_conj_gen__STATE_VARIABLE_CI_57_57, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58);
      }
#line 405 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__UseParentStack_11 == (MR_Integer) 1))
#line 406 "par_conj_gen.m"
        {
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__TypeCtorInfo_74_74;
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__InputStackSlots_35;
#line 406 "par_conj_gen.m"
          MR_Integer ll_backend__par_conj_gen__FrameSize_37;
#line 406 "par_conj_gen.m"
          MR_String ll_backend__par_conj_gen__CopyStr_38;
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__LiveLvalsInfo_40;
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__CopyUinstr_41;
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__CopyInstr_42;
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_59_59;
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_60_60;
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_61_61;
#line 406 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_62_62;

#line 407 "par_conj_gen.m"
          {
#line 407 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 407 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[0]));
#line 407 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 1) = ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_8));
#line 407 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 407 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 3) = ((MR_Box) (ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58));
#line 407 "par_conj_gen.m"
          }
#line 3798 "ll_backend.par_conj_gen.c"
          ll_backend__par_conj_gen__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 407 "par_conj_gen.m"
          {
#line 407 "par_conj_gen.m"
            mercury__list__map_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], ll_backend__par_conj_gen__TypeCtorInfo_74_74, ll_backend__par_conj_gen__V_59_59, ll_backend__par_conj_gen__InputVars_18, &ll_backend__par_conj_gen__InputStackSlots_35);
          }
#line 411 "par_conj_gen.m"
          {
#line 411 "par_conj_gen.m"
            ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(ll_backend__par_conj_gen__SpawnedOffCode0_31, &ll_backend__par_conj_gen__FrameSize_37);
          }
#line 412 "par_conj_gen.m"
          ll_backend__par_conj_gen__SpawnedOffCode_32 = ll_backend__par_conj_gen__SpawnedOffCode0_31;
#line 429 "par_conj_gen.m"
          {
#line 429 "par_conj_gen.m"
            ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(ll_backend__par_conj_gen__FrameSize_37, ll_backend__par_conj_gen__LCVarLocn_20, ll_backend__par_conj_gen__LCSVarLocn_21, ll_backend__par_conj_gen__InputStackSlots_35, &ll_backend__par_conj_gen__CopyStr_38);
          }
#line 433 "par_conj_gen.m"
          {
#line 433 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_62_62, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_21));
#line 433 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_62_62, 1) = ((MR_Box) (ll_backend__par_conj_gen__InputStackSlots_35));
#line 433 "par_conj_gen.m"
          }
#line 433 "par_conj_gen.m"
          {
#line 433 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_61_61, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_20));
#line 433 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_61_61, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_62_62));
#line 433 "par_conj_gen.m"
          }
#line 433 "par_conj_gen.m"
          {
#line 433 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_60_60 = mercury__set__list_to_set_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_74_74, ll_backend__par_conj_gen__V_61_61);
          }
#line 432 "par_conj_gen.m"
          {
#line 432 "par_conj_gen.m"
            ll_backend__par_conj_gen__LiveLvalsInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__LiveLvalsInfo_40, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
#line 432 "par_conj_gen.m"
          }
#line 434 "par_conj_gen.m"
          {
#line 434 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyUinstr_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 434 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 434 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_41, 1) = ((MR_Box) ((MR_Integer) 1));
#line 434 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_41, 2) = ((MR_Box) (ll_backend__par_conj_gen__LiveLvalsInfo_40));
#line 434 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_41, 3) = ((MR_Box) (ll_backend__par_conj_gen__CopyStr_38));
#line 434 "par_conj_gen.m"
          }
#line 436 "par_conj_gen.m"
          {
#line 436 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyInstr_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__CopyInstr_42, 0) = ((MR_Box) (ll_backend__par_conj_gen__CopyUinstr_41));
#line 436 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__CopyInstr_42, 1) = ((MR_Box) ((MR_String) ""));
#line 436 "par_conj_gen.m"
          }
#line 437 "par_conj_gen.m"
          {
#line 437 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyCode_33 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ((MR_Box) (ll_backend__par_conj_gen__CopyInstr_42)));
          }
#line 437 "par_conj_gen.m"
          ll_backend__par_conj_gen__STATE_VARIABLE_CI_65_65 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58;
#line 406 "par_conj_gen.m"
        }
#line 405 "par_conj_gen.m"
      else
#line 391 "par_conj_gen.m"
        {
#line 391 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__OutputVars_34;
#line 391 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_64_64;

#line 392 "par_conj_gen.m"
          {
#line 392 "par_conj_gen.m"
            ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(ll_backend__par_conj_gen__SpawnedOffCode0_31, &ll_backend__par_conj_gen__SpawnedOffCode_32);
          }
#line 393 "par_conj_gen.m"
          {
#line 393 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyCode_33 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70);
          }
#line 403 "par_conj_gen.m"
          {
#line 403 "par_conj_gen.m"
            ll_backend__par_conj_gen__OutputVars_34 = parse_tree__set_of_var__difference_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__NonLocalsSet_16, ll_backend__par_conj_gen__KnownVarsSet_15);
          }
#line 404 "par_conj_gen.m"
          {
#line 404 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_64_64 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__OutputVars_34);
          }
#line 404 "par_conj_gen.m"
          {
#line 404 "par_conj_gen.m"
            ll_backend__par_conj_gen__place_all_outputs_3_p_0(ll_backend__par_conj_gen__V_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_65_65);
          }
#line 391 "par_conj_gen.m"
        }
#line 441 "par_conj_gen.m"
      {
#line 441 "par_conj_gen.m"
        ll_backend__code_info__add_out_of_line_code_3_p_0(ll_backend__par_conj_gen__SpawnedOffCode_32, ll_backend__par_conj_gen__STATE_VARIABLE_CI_65_65, ll_backend__par_conj_gen__STATE_VARIABLE_CI_44);
      }
#line 444 "par_conj_gen.m"
      {
#line 444 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_67_67 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ll_backend__par_conj_gen__CopyCode_33, ll_backend__par_conj_gen__SpawnOffCode_25);
      }
#line 444 "par_conj_gen.m"
      {
#line 444 "par_conj_gen.m"
        *ll_backend__par_conj_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ll_backend__par_conj_gen__SaveCode_19, ll_backend__par_conj_gen__V_67_67);
      }
#line 351 "par_conj_gen.m"
    }
#line 117 "par_conj_gen.m"
  }
#line 117 "par_conj_gen.m"
}

#line 114 "par_conj_gen.m"
void MR_CALL 
ll_backend__par_conj_gen__generate_par_conj_6_p_0(
#line 114 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Goals_7,
#line 114 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__GoalInfo_8,
#line 114 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CodeModel_9,
#line 114 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Code_10,
#line 114 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45,
#line 114 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_46)
#line 114 "par_conj_gen.m"
{
#line 161 "par_conj_gen.m"
  {
#line 161 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_124_124;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Globals_12;
#line 161 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__STSize_13;
#line 161 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__Depth_14;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MaybeSetParentSpCode_16;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MaybeRestoreParentSpCode_17;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SaveCode_20;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Nonlocals_21;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Variables_22;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Initial_23;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Delta_24;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Final_25;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__ModuleInfo_26;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Outputs_27;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Contents_28;
#line 161 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__SlotNum_35;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SyncTermBaseSlot_36;
#line 161 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__NumGoals_38;
#line 161 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__StaticConjId_39;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MakeSyncTermCode_40;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__EndLabel_41;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__GoalCode_42;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__EndLabelCode_43;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_86_86;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_87_87;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_95_95;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_98_98;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_99_99;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_100_100;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_102_102;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_103_103;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_104_104;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_107_107;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_108_108;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_109_109;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_110_110;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114;
#line 161 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_116_116;

#line 165 "par_conj_gen.m"
    if ((ll_backend__par_conj_gen__CodeModel_9 == (MR_Integer) 0))
#line 164 "par_conj_gen.m"
      {
#line 164 "par_conj_gen.m"
      }
#line 165 "par_conj_gen.m"
    else
#line 165 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__CodeModel_9 == (MR_Integer) 2))
#line 169 "par_conj_gen.m"
        {
#line 170 "par_conj_gen.m"
          {
#line 170 "par_conj_gen.m"
            mercury__require__sorry_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/6", (MR_String) "nondet parallel conjunction not implemented");
#line 170 "par_conj_gen.m"
            return;
          }
#line 169 "par_conj_gen.m"
        }
#line 165 "par_conj_gen.m"
      else
#line 166 "par_conj_gen.m"
        {
#line 167 "par_conj_gen.m"
          {
#line 167 "par_conj_gen.m"
            mercury__require__sorry_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/6", (MR_String) "semidet parallel conjunction not implemented");
#line 167 "par_conj_gen.m"
            return;
          }
#line 166 "par_conj_gen.m"
        }
#line 173 "par_conj_gen.m"
    {
#line 173 "par_conj_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__Globals_12);
    }
#line 174 "par_conj_gen.m"
    {
#line 174 "par_conj_gen.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__par_conj_gen__Globals_12, (MR_Integer) 242, &ll_backend__par_conj_gen__STSize_13);
    }
#line 180 "par_conj_gen.m"
    {
#line 180 "par_conj_gen.m"
      ll_backend__code_info__get_par_conj_depth_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__Depth_14);
    }
#line 204 "par_conj_gen.m"
    {
#line 204 "par_conj_gen.m"
      ll_backend__par_conj_gen__Nonlocals_21 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__par_conj_gen__GoalInfo_8);
    }
#line 205 "par_conj_gen.m"
    {
#line 205 "par_conj_gen.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__par_conj_gen__Nonlocals_21, &ll_backend__par_conj_gen__Variables_22);
    }
#line 207 "par_conj_gen.m"
    {
#line 207 "par_conj_gen.m"
      ll_backend__par_conj_gen__Delta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__par_conj_gen__GoalInfo_8);
    }
#line 213 "par_conj_gen.m"
    {
#line 213 "par_conj_gen.m"
      ll_backend__par_conj_gen__Contents_28 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__par_conj_gen__STSize_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))));
    }
#line 229 "par_conj_gen.m"
    {
#line 229 "par_conj_gen.m"
      ll_backend__par_conj_gen__NumGoals_38 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__par_conj_gen__Goals_7);
    }
#line 4115 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_124_124 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 240 "par_conj_gen.m"
    ll_backend__par_conj_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "par_conj_gen.m"
    ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__Depth_14 == (MR_Integer) 0);
#line 4121 "ll_backend.par_conj_gen.c"
    if (ll_backend__par_conj_gen__succeeded)
#line 4123 "ll_backend.par_conj_gen.c"
      {
#line 4125 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_118_118;
#line 4127 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__Vars_19;
#line 4129 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__SyncTermSlots_29;
#line 4131 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__StackId_30;
#line 4133 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37;
#line 4135 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSpSlot1_44;
#line 4137 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_56_56;
#line 4139 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_58_58;
#line 4141 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_59_59;
#line 4143 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_60_60;
#line 4145 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_72_72;
#line 4147 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_73_73;
#line 4149 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_75_75;
#line 4151 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_81;
#line 4153 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_85;
#line 4155 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90;
#line 4157 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_92;
#line 4159 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_94;
#line 4161 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_96;
#line 4163 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_97;
#line 4165 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_112_112;
#line 214 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___N_31;
#line 214 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___M_32;
#line 225 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33;
#line 225 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__SlotNumPrime_34;
#line 218 "par_conj_gen.m"
        MR_Box ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_33;

#line 182 "par_conj_gen.m"
        {
#line 182 "par_conj_gen.m"
          ll_backend__code_info__acquire_temp_slot_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_2[1]), (MR_Integer) 1, &ll_backend__par_conj_gen__ParentSpSlot1_44, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_56_56);
        }
#line 4183 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_118_118 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 185 "par_conj_gen.m"
        {
#line 185 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 185 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 185 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_60_60, 1) = ((MR_Box) (ll_backend__par_conj_gen__ParentSpSlot1_44));
#line 185 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_60_60, 2) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_2[1]));
#line 185 "par_conj_gen.m"
        }
#line 185 "par_conj_gen.m"
        {
#line 185 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
#line 185 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 1) = ((MR_Box) ((MR_String) "save the old parent stack pointer"));
#line 185 "par_conj_gen.m"
        }
#line 186 "par_conj_gen.m"
        {
#line 186 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "par_conj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_58_58, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_59_59));
#line 186 "par_conj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_1[4])));
#line 186 "par_conj_gen.m"
        }
#line 184 "par_conj_gen.m"
        {
#line 184 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeSetParentSpCode_16 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_118_118, ll_backend__par_conj_gen__V_58_58);
        }
#line 191 "par_conj_gen.m"
        {
#line 191 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 191 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_75_75, 0) = ((MR_Box) (ll_backend__par_conj_gen__ParentSpSlot1_44));
#line 191 "par_conj_gen.m"
        }
#line 191 "par_conj_gen.m"
        {
#line 191 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 191 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 191 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 191 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_73_73, 2) = ((MR_Box) (ll_backend__par_conj_gen__V_75_75));
#line 191 "par_conj_gen.m"
        }
#line 191 "par_conj_gen.m"
        {
#line 191 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 191 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_72_72, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_73_73));
#line 191 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_72_72, 1) = ((MR_Box) ((MR_String) "restore old parent stack pointer"));
#line 191 "par_conj_gen.m"
        }
#line 190 "par_conj_gen.m"
        {
#line 190 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeRestoreParentSpCode_17 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_118_118, ((MR_Box) (ll_backend__par_conj_gen__V_72_72)));
        }
#line 201 "par_conj_gen.m"
        {
#line 201 "par_conj_gen.m"
          ll_backend__code_info__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_56_56, &ll_backend__par_conj_gen__Vars_19);
        }
#line 202 "par_conj_gen.m"
        {
#line 202 "par_conj_gen.m"
          ll_backend__code_info__save_variables_on_stack_4_p_0(ll_backend__par_conj_gen__Vars_19, &ll_backend__par_conj_gen__SaveCode_20, ll_backend__par_conj_gen__STATE_VARIABLE_CI_56_56, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77);
        }
#line 206 "par_conj_gen.m"
        {
#line 206 "par_conj_gen.m"
          ll_backend__code_info__get_instmap_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__Initial_23);
        }
#line 214 "par_conj_gen.m"
        {
#line 214 "par_conj_gen.m"
          ll_backend__code_info__acquire_several_temp_slots_8_p_0(ll_backend__par_conj_gen__Contents_28, (MR_Integer) 0, &ll_backend__par_conj_gen__SyncTermSlots_29, &ll_backend__par_conj_gen__StackId_30, &ll_backend__par_conj_gen___N_31, &ll_backend__par_conj_gen___M_32, ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_81);
        }
#line 218 "par_conj_gen.m"
        {
#line 218 "par_conj_gen.m"
          ll_backend__par_conj_gen__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__SyncTermSlots_29, &ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_33);
        }
#line 218 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 218 "par_conj_gen.m"
          {
#line 218 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33 = ((MR_Word) ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_33);
#line 218 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 218 "par_conj_gen.m"
          }
#line 218 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 218 "par_conj_gen.m"
          {
#line 220 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__StackId_30 == (MR_Integer) 0);
#line 218 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 218 "par_conj_gen.m"
              {
#line 219 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 219 "par_conj_gen.m"
                if (ll_backend__par_conj_gen__succeeded)
#line 219 "par_conj_gen.m"
                  ll_backend__par_conj_gen__SlotNumPrime_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33, (MR_Integer) 1)));
#line 218 "par_conj_gen.m"
              }
#line 218 "par_conj_gen.m"
          }
#line 225 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 222 "par_conj_gen.m"
          {
#line 222 "par_conj_gen.m"
            ll_backend__par_conj_gen__SlotNum_35 = ll_backend__par_conj_gen__SlotNumPrime_34;
#line 223 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlot_36 = ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33;
#line 224 "par_conj_gen.m"
            {
#line 224 "par_conj_gen.m"
              ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 224 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_35));
#line 224 "par_conj_gen.m"
            }
#line 222 "par_conj_gen.m"
          }
#line 225 "par_conj_gen.m"
        else
#line 226 "par_conj_gen.m"
          {
#line 226 "par_conj_gen.m"
            {
#line 226 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/6", (MR_String) "cannot find stack slot");
#line 226 "par_conj_gen.m"
              return;
            }
#line 226 "par_conj_gen.m"
          }
#line 230 "par_conj_gen.m"
        {
#line 230 "par_conj_gen.m"
          ll_backend__par_conj_gen__create_static_conj_id_4_p_0(ll_backend__par_conj_gen__GoalInfo_8, &ll_backend__par_conj_gen__StaticConjId_39, ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_81, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_85);
        }
#line 236 "par_conj_gen.m"
        {
#line 236 "par_conj_gen.m"
          ll_backend__code_info__set_par_conj_depth_3_p_0((MR_Integer) 1, ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_85, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90);
        }
#line 237 "par_conj_gen.m"
        {
#line 237 "par_conj_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__EndLabel_41, ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_92);
        }
#line 238 "par_conj_gen.m"
        {
#line 238 "par_conj_gen.m"
          ll_backend__code_info__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_92, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_94);
        }
#line 239 "par_conj_gen.m"
        {
#line 239 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(ll_backend__par_conj_gen__Goals_7, ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37, ll_backend__par_conj_gen__EndLabel_41, ll_backend__par_conj_gen__V_95_95, &ll_backend__par_conj_gen__GoalCode_42, ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_94, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_96);
        }
#line 241 "par_conj_gen.m"
        {
#line 241 "par_conj_gen.m"
          ll_backend__code_info__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__Depth_14, ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_96, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_97);
        }
#line 275 "par_conj_gen.m"
        {
#line 275 "par_conj_gen.m"
          ll_backend__code_info__release_several_temp_slots_4_p_0(ll_backend__par_conj_gen__SyncTermSlots_29, (MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_97, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_112_112);
        }
#line 281 "par_conj_gen.m"
        {
#line 281 "par_conj_gen.m"
          ll_backend__code_info__release_temp_slot_4_p_0(ll_backend__par_conj_gen__ParentSpSlot1_44, (MR_Integer) 1, ll_backend__par_conj_gen__STATE_VARIABLE_CI_112_112, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114);
        }
#line 4385 "ll_backend.par_conj_gen.c"
      }
#line 4387 "ll_backend.par_conj_gen.c"
    else
#line 4389 "ll_backend.par_conj_gen.c"
      {
#line 4391 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 4393 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__Vars_141;
#line 4395 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__SyncTermSlots_142;
#line 4397 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__StackId_143;
#line 4399 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148;
#line 4401 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_150;
#line 4403 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_154;
#line 4405 "ll_backend.par_conj_gen.c"
        MR_Integer ll_backend__par_conj_gen__V_155_155;
#line 4407 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_156;
#line 4409 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_157;
#line 4411 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_158;
#line 4413 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_159;
#line 4415 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_160;
#line 214 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___N_126;
#line 214 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___M_127;
#line 225 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132;
#line 225 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__SlotNumPrime_133;
#line 218 "par_conj_gen.m"
        MR_Box ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_132;

#line 196 "par_conj_gen.m"
        {
#line 196 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeSetParentSpCode_16 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_119_119);
        }
#line 197 "par_conj_gen.m"
        {
#line 197 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeRestoreParentSpCode_17 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_119_119);
        }
#line 201 "par_conj_gen.m"
        {
#line 201 "par_conj_gen.m"
          ll_backend__code_info__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__Vars_141);
        }
#line 202 "par_conj_gen.m"
        {
#line 202 "par_conj_gen.m"
          ll_backend__code_info__save_variables_on_stack_4_p_0(ll_backend__par_conj_gen__Vars_141, &ll_backend__par_conj_gen__SaveCode_20, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77);
        }
#line 206 "par_conj_gen.m"
        {
#line 206 "par_conj_gen.m"
          ll_backend__code_info__get_instmap_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__Initial_23);
        }
#line 214 "par_conj_gen.m"
        {
#line 214 "par_conj_gen.m"
          ll_backend__code_info__acquire_several_temp_slots_8_p_0(ll_backend__par_conj_gen__Contents_28, (MR_Integer) 0, &ll_backend__par_conj_gen__SyncTermSlots_142, &ll_backend__par_conj_gen__StackId_143, &ll_backend__par_conj_gen___N_126, &ll_backend__par_conj_gen___M_127, ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_150);
        }
#line 218 "par_conj_gen.m"
        {
#line 218 "par_conj_gen.m"
          ll_backend__par_conj_gen__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__SyncTermSlots_142, &ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_132);
        }
#line 218 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 218 "par_conj_gen.m"
          {
#line 218 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132 = ((MR_Word) ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_132);
#line 218 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 218 "par_conj_gen.m"
          }
#line 218 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 218 "par_conj_gen.m"
          {
#line 220 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__StackId_143 == (MR_Integer) 0);
#line 218 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 218 "par_conj_gen.m"
              {
#line 219 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 219 "par_conj_gen.m"
                if (ll_backend__par_conj_gen__succeeded)
#line 219 "par_conj_gen.m"
                  ll_backend__par_conj_gen__SlotNumPrime_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132, (MR_Integer) 1)));
#line 218 "par_conj_gen.m"
              }
#line 218 "par_conj_gen.m"
          }
#line 225 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 222 "par_conj_gen.m"
          {
#line 222 "par_conj_gen.m"
            ll_backend__par_conj_gen__SlotNum_35 = ll_backend__par_conj_gen__SlotNumPrime_133;
#line 223 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlot_36 = ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132;
#line 224 "par_conj_gen.m"
            {
#line 224 "par_conj_gen.m"
              ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 224 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_35));
#line 224 "par_conj_gen.m"
            }
#line 222 "par_conj_gen.m"
          }
#line 225 "par_conj_gen.m"
        else
#line 226 "par_conj_gen.m"
          {
#line 226 "par_conj_gen.m"
            {
#line 226 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/6", (MR_String) "cannot find stack slot");
#line 226 "par_conj_gen.m"
              return;
            }
#line 226 "par_conj_gen.m"
          }
#line 230 "par_conj_gen.m"
        {
#line 230 "par_conj_gen.m"
          ll_backend__par_conj_gen__create_static_conj_id_4_p_0(ll_backend__par_conj_gen__GoalInfo_8, &ll_backend__par_conj_gen__StaticConjId_39, ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_150, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_154);
        }
#line 236 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_155_155 = (ll_backend__par_conj_gen__Depth_14 + (MR_Integer) 1);
#line 236 "par_conj_gen.m"
        {
#line 236 "par_conj_gen.m"
          ll_backend__code_info__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__V_155_155, ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_154, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_156);
        }
#line 237 "par_conj_gen.m"
        {
#line 237 "par_conj_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__EndLabel_41, ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_156, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_157);
        }
#line 238 "par_conj_gen.m"
        {
#line 238 "par_conj_gen.m"
          ll_backend__code_info__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_157, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_158);
        }
#line 239 "par_conj_gen.m"
        {
#line 239 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(ll_backend__par_conj_gen__Goals_7, ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148, ll_backend__par_conj_gen__EndLabel_41, ll_backend__par_conj_gen__V_95_95, &ll_backend__par_conj_gen__GoalCode_42, ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_158, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_159);
        }
#line 241 "par_conj_gen.m"
        {
#line 241 "par_conj_gen.m"
          ll_backend__code_info__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__Depth_14, ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_159, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_160);
        }
#line 274 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__Depth_14 == (MR_Integer) 0);
#line 276 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 275 "par_conj_gen.m"
          {
#line 275 "par_conj_gen.m"
            {
#line 275 "par_conj_gen.m"
              ll_backend__code_info__release_several_temp_slots_4_p_0(ll_backend__par_conj_gen__SyncTermSlots_142, (MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_160, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114);
            }
#line 275 "par_conj_gen.m"
          }
#line 276 "par_conj_gen.m"
        else
#line 275 "par_conj_gen.m"
          ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_160;
#line 4575 "ll_backend.par_conj_gen.c"
      }
#line 208 "par_conj_gen.m"
    {
#line 208 "par_conj_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__par_conj_gen__Initial_23, ll_backend__par_conj_gen__Delta_24, &ll_backend__par_conj_gen__Final_25);
    }
#line 209 "par_conj_gen.m"
    {
#line 209 "par_conj_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__ModuleInfo_26);
    }
#line 210 "par_conj_gen.m"
    {
#line 210 "par_conj_gen.m"
      ll_backend__par_conj_gen__find_outputs_6_p_0(ll_backend__par_conj_gen__Variables_22, ll_backend__par_conj_gen__Initial_23, ll_backend__par_conj_gen__Final_25, ll_backend__par_conj_gen__ModuleInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__par_conj_gen__Outputs_27);
    }
#line 232 "par_conj_gen.m"
    {
#line 232 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 232 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 232 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_87_87, 1) = ((MR_Box) (ll_backend__par_conj_gen__SyncTermBaseSlot_36));
#line 232 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_87_87, 2) = ((MR_Box) (ll_backend__par_conj_gen__NumGoals_38));
#line 232 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_87_87, 3) = ((MR_Box) (ll_backend__par_conj_gen__StaticConjId_39));
#line 232 "par_conj_gen.m"
    }
#line 232 "par_conj_gen.m"
    {
#line 232 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_86_86, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_87_87));
#line 232 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_86_86, 1) = ((MR_Box) ((MR_String) "initialize sync term"));
#line 232 "par_conj_gen.m"
    }
#line 231 "par_conj_gen.m"
    {
#line 231 "par_conj_gen.m"
      ll_backend__par_conj_gen__MakeSyncTermCode_40 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ((MR_Box) (ll_backend__par_conj_gen__V_86_86)));
    }
#line 244 "par_conj_gen.m"
    {
#line 244 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 244 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_100_100, 1) = ((MR_Box) (ll_backend__par_conj_gen__EndLabel_41));
#line 244 "par_conj_gen.m"
    }
#line 244 "par_conj_gen.m"
    {
#line 244 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_99_99, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_100_100));
#line 244 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_99_99, 1) = ((MR_Box) ((MR_String) "end of parallel conjunction"));
#line 244 "par_conj_gen.m"
    }
#line 245 "par_conj_gen.m"
    {
#line 245 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_104_104 = ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(ll_backend__par_conj_gen__SlotNum_35, ll_backend__par_conj_gen__SyncTermBaseSlot_36);
    }
#line 245 "par_conj_gen.m"
    {
#line 245 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_103_103, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_104_104));
#line 245 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_103_103, 1) = ((MR_Box) ((MR_String) "finish parallel conjunction (ThreadScope instrumentation"));
#line 245 "par_conj_gen.m"
    }
#line 247 "par_conj_gen.m"
    {
#line 247 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_102_102, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_103_103));
#line 247 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "par_conj_gen.m"
    }
#line 244 "par_conj_gen.m"
    {
#line 244 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_98_98, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_99_99));
#line 244 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_98_98, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_102_102));
#line 244 "par_conj_gen.m"
    }
#line 243 "par_conj_gen.m"
    {
#line 243 "par_conj_gen.m"
      ll_backend__par_conj_gen__EndLabelCode_43 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__V_98_98);
    }
#line 253 "par_conj_gen.m"
    {
#line 253 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_110_110 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__EndLabelCode_43, ll_backend__par_conj_gen__MaybeRestoreParentSpCode_17);
    }
#line 252 "par_conj_gen.m"
    {
#line 252 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_109_109 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__GoalCode_42, ll_backend__par_conj_gen__V_110_110);
    }
#line 251 "par_conj_gen.m"
    {
#line 251 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_108_108 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__MakeSyncTermCode_40, ll_backend__par_conj_gen__V_109_109);
    }
#line 250 "par_conj_gen.m"
    {
#line 250 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_107_107 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__SaveCode_20, ll_backend__par_conj_gen__V_108_108);
    }
#line 249 "par_conj_gen.m"
    {
#line 249 "par_conj_gen.m"
      *ll_backend__par_conj_gen__Code_10 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__MaybeSetParentSpCode_16, ll_backend__par_conj_gen__V_107_107);
    }
#line 285 "par_conj_gen.m"
    {
#line 285 "par_conj_gen.m"
      ll_backend__code_info__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_116_116);
    }
#line 286 "par_conj_gen.m"
    {
#line 286 "par_conj_gen.m"
      ll_backend__par_conj_gen__place_all_outputs_3_p_0(ll_backend__par_conj_gen__Outputs_27, ll_backend__par_conj_gen__STATE_VARIABLE_CI_116_116, ll_backend__par_conj_gen__STATE_VARIABLE_CI_46);
#line 286 "par_conj_gen.m"
      return;
    }
#line 161 "par_conj_gen.m"
  }
#line 114 "par_conj_gen.m"
}

void mercury__ll_backend__par_conj_gen__init(void)
{
}

void mercury__ll_backend__par_conj_gen__init_type_tables(void)
{
}

void mercury__ll_backend__par_conj_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.par_conj_gen. */
