/*
** Automatically generated from `par_conj_gen.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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



#line 471 "par_conj_gen.m"
struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s {
#line 475 "par_conj_gen.m"
  MR_bool ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded;
#line 478 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_7;
#line 486 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22;
#line 486 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__AllLocns_15;
#line 486 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__RegLocns_16;
#line 493 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_17;
#line 490 "par_conj_gen.m"
  jmp_buf ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_0;
#line 490 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv1_LocnPrime_17;
#line 494 "par_conj_gen.m"
  jmp_buf ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_1;
#line 494 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv2_LocnPrime_7;
#line 471 "par_conj_gen.m"
};

#line 103 "par_conj_gen.m"
struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s {
#line 335 "par_conj_gen.m"
  MR_bool ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded;
#line 478 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_78;
#line 486 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93;
#line 486 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__AllLocns_86;
#line 486 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__RegLocns_87;
#line 493 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_88;
#line 490 "par_conj_gen.m"
  jmp_buf ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_0;
#line 490 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv1_LocnPrime_88;
#line 494 "par_conj_gen.m"
  jmp_buf ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_1;
#line 494 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv2_LocnPrime_78;
#line 103 "par_conj_gen.m"
};


#line 207 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 213 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 511 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_3(
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 511 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 288 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_2(
#line 288 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 288 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 511 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_1(
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 511 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 272 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__MaybeEnd0_5,
#line 272 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__HeadVar__6_6,
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7,
#line 272 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_8);

#line 591 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__591__1_1_f_0(
#line 591 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_23);

#line 642 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
#line 642 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__GoalInfo_5,
#line 642 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__SlotNum_6,
#line 642 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17,
#line 642 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_18);

#line 623 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__place_all_outputs_3_p_0(
#line 623 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 623 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2,
#line 623 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_3);

#line 609 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__find_outputs_6_p_0(
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5,
#line 609 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6);

#line 595 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
#line 595 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LVal_4,
#line 595 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__Max0_5,
#line 595 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__Max_6);

#line 593 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
#line 593 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 593 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 593 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_2,
#line 593 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_3);

#line 591 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
#line 591 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 591 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 590 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
#line 590 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 590 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 586 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
#line 586 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Instrs_3,
#line 586 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__MaxRef_4);

#line 524 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
#line 524 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 524 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 524 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
#line 524 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
#line 524 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4);

#line 520 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
#line 520 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Lval0_5,
#line 520 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Lval_6);

#line 517 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1(
#line 517 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 517 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 517 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
#line 517 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
#line 517 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4);

#line 513 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
#line 513 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5,
#line 513 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6);

#line 511 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1(
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 511 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 508 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(
#line 508 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4,
#line 508 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Code_5);

#line 497 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
#line 497 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1);

#line 489 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
#line 489 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 489 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_2(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_3(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_4(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_5(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_6(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_7(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 471 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
#line 471 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CI_4,
#line 471 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Var_5,
#line 471 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Locn_6);

#line 454 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
#line 454 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCVarName_5,
#line 454 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCSVarName_6,
#line 454 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlot_7,
#line 454 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CopyStr_8);

#line 448 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
#line 448 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 448 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 448 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 430 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
#line 430 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__FrameSize_6,
#line 430 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVarLocn_7,
#line 430 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVarLocn_8,
#line 430 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlots_9,
#line 430 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CodeStr_10);

#line 319 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
#line 319 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__SyncTermBaseSlot_4,
#line 319 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotLval_5);

#line 391 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_8(
#line 391 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 391 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 391 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 489 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_1(
#line 489 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 489 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_2(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_3(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_4(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_5(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_6(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg);

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_7(
#line 494 "par_conj_gen.m"
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



#line 810 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 818 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 826 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 511 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_3(
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 511 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 511 "par_conj_gen.m"
{
#line 511 "par_conj_gen.m"
  {
#line 511 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 511 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6;

#line 511 "par_conj_gen.m"
    {
#line 511 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6);
    }
#line 511 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6));
#line 511 "par_conj_gen.m"
  }
#line 511 "par_conj_gen.m"
}

#line 288 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_2(
#line 288 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 288 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 288 "par_conj_gen.m"
{
#line 288 "par_conj_gen.m"
  {
#line 288 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
#line 288 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 288 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__2_2;

#line 288 "par_conj_gen.m"
    {
#line 288 "par_conj_gen.m"
      ll_backend__par_conj_gen__conv1_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 288 "par_conj_gen.m"
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__2_2));
#line 288 "par_conj_gen.m"
    return ll_backend__par_conj_gen__wrapper_arg_2;
#line 288 "par_conj_gen.m"
  }
#line 288 "par_conj_gen.m"
}

#line 511 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0_1(
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 511 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 511 "par_conj_gen.m"
{
#line 511 "par_conj_gen.m"
  {
#line 511 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 511 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6;

#line 511 "par_conj_gen.m"
    {
#line 511 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6);
    }
#line 511 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6));
#line 511 "par_conj_gen.m"
  }
#line 511 "par_conj_gen.m"
}

#line 272 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__MaybeEnd0_5,
#line 272 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__HeadVar__6_6,
#line 272 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7,
#line 272 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_8)
#line 272 "par_conj_gen.m"
{
#line 276 "par_conj_gen.m"
  {
#line 276 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;

#line 276 "par_conj_gen.m"
    if ((ll_backend__par_conj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "par_conj_gen.m"
      {
#line 276 "par_conj_gen.m"
        {
#line 276 "par_conj_gen.m"
          *ll_backend__par_conj_gen__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 276 "par_conj_gen.m"
        *ll_backend__par_conj_gen__STATE_VARIABLE_CI_8 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7;
#line 276 "par_conj_gen.m"
      }
#line 276 "par_conj_gen.m"
    else
#line 279 "par_conj_gen.m"
      {
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeInfo_69_69;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_70_70;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_76_76;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_84;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_92;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__StartPos_24;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ThisGoalCode0_25;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ThisGoalCode_26;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__AllSlots_27;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Variables_28;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__LiveVars_29;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__StoreMap0_30;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__StoreMap_31;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__MaybeEnd_32;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SaveCode0_33;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SaveCode_34;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ForkCode_38;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__JoinCode_39;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ThisCode_40;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__RestCode_41;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_52_52;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__V_65_65;
#line 279 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__V_66_66;

#line 280 "par_conj_gen.m"
        {
#line 280 "par_conj_gen.m"
          ll_backend__code_info__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7, &ll_backend__par_conj_gen__StartPos_24);
        }
#line 281 "par_conj_gen.m"
        {
#line 281 "par_conj_gen.m"
          ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__par_conj_gen__Goal_16, &ll_backend__par_conj_gen__ThisGoalCode0_25, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_7, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45);
        }
#line 1032 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_10_84 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 511 "par_conj_gen.m"
        {
#line 511 "par_conj_gen.m"
          mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_84, ll_backend__par_conj_gen__TypeCtorInfo_10_84, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[9], ll_backend__par_conj_gen__ThisGoalCode0_25, &ll_backend__par_conj_gen__ThisGoalCode_26);
        }
#line 284 "par_conj_gen.m"
        {
#line 284 "par_conj_gen.m"
          ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45, &ll_backend__par_conj_gen__AllSlots_27);
        }
#line 285 "par_conj_gen.m"
        {
#line 285 "par_conj_gen.m"
          ll_backend__code_info__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45, &ll_backend__par_conj_gen__Variables_28);
        }
#line 1049 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeInfo_69_69 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0];
#line 286 "par_conj_gen.m"
        {
#line 286 "par_conj_gen.m"
          mercury__set__list_to_set_2_p_0(ll_backend__par_conj_gen__TypeInfo_69_69, ll_backend__par_conj_gen__Variables_28, &ll_backend__par_conj_gen__LiveVars_29);
        }
#line 1056 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 287 "par_conj_gen.m"
        {
#line 287 "par_conj_gen.m"
          mercury__map__select_3_p_0(ll_backend__par_conj_gen__TypeInfo_69_69, ll_backend__par_conj_gen__TypeCtorInfo_70_70, ll_backend__par_conj_gen__AllSlots_27, ll_backend__par_conj_gen__LiveVars_29, &ll_backend__par_conj_gen__StoreMap0_30);
        }
#line 288 "par_conj_gen.m"
        {
#line 288 "par_conj_gen.m"
          ll_backend__par_conj_gen__StoreMap_31 = mercury__map__map_values_only_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__par_conj_gen__TypeInfo_69_69, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[10], ll_backend__par_conj_gen__StoreMap0_30);
        }
#line 289 "par_conj_gen.m"
        {
#line 289 "par_conj_gen.m"
          ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__par_conj_gen__StoreMap_31, ll_backend__par_conj_gen__MaybeEnd0_5, &ll_backend__par_conj_gen__MaybeEnd_32, &ll_backend__par_conj_gen__SaveCode0_33, ll_backend__par_conj_gen__STATE_VARIABLE_CI_45_45, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47);
        }
#line 1073 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_10_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 511 "par_conj_gen.m"
        {
#line 511 "par_conj_gen.m"
          mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_92, ll_backend__par_conj_gen__TypeCtorInfo_10_92, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[11], ll_backend__par_conj_gen__SaveCode0_33, &ll_backend__par_conj_gen__SaveCode_34);
        }
#line 306 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__Goals_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "par_conj_gen.m"
          {
#line 307 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_75_75 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 307 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_48_48;
#line 307 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_49_49;

#line 308 "par_conj_gen.m"
            {
#line 308 "par_conj_gen.m"
              ll_backend__par_conj_gen__ForkCode_38 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75);
            }
#line 310 "par_conj_gen.m"
            {
#line 310 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 310 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_49_49, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__2_2));
#line 310 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_49_49, 2) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
#line 310 "par_conj_gen.m"
            }
#line 309 "par_conj_gen.m"
            {
#line 309 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_48_48, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_49_49));
#line 309 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_48_48, 1) = ((MR_Box) ((MR_String) "finish"));
#line 309 "par_conj_gen.m"
            }
#line 309 "par_conj_gen.m"
            {
#line 309 "par_conj_gen.m"
              ll_backend__par_conj_gen__JoinCode_39 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ((MR_Box) (ll_backend__par_conj_gen__V_48_48)));
            }
#line 310 "par_conj_gen.m"
            ll_backend__par_conj_gen__STATE_VARIABLE_CI_52_52 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47;
#line 307 "par_conj_gen.m"
          }
#line 306 "par_conj_gen.m"
        else
#line 293 "par_conj_gen.m"
          {
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_74_74;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__NextConjunct_37;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_51_51;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_53_53;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_54_54;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_56_56;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_57_57;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_58_58;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_60_60;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_61_61;
#line 293 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_62_62;

#line 294 "par_conj_gen.m"
            {
#line 294 "par_conj_gen.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__NextConjunct_37, ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_51_51);
            }
#line 295 "par_conj_gen.m"
            {
#line 295 "par_conj_gen.m"
              ll_backend__code_info__reset_to_position_3_p_0(ll_backend__par_conj_gen__StartPos_24, ll_backend__par_conj_gen__STATE_VARIABLE_CI_51_51, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_52_52);
            }
#line 1164 "ll_backend.par_conj_gen.c"
            ll_backend__par_conj_gen__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 297 "par_conj_gen.m"
            {
#line 297 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 297 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 297 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_54_54, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__2_2));
#line 297 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_54_54, 2) = ((MR_Box) (ll_backend__par_conj_gen__NextConjunct_37));
#line 297 "par_conj_gen.m"
            }
#line 296 "par_conj_gen.m"
            {
#line 296 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_53_53, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_54_54));
#line 296 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_53_53, 1) = ((MR_Box) ((MR_String) "fork off a child"));
#line 296 "par_conj_gen.m"
            }
#line 296 "par_conj_gen.m"
            {
#line 296 "par_conj_gen.m"
              ll_backend__par_conj_gen__ForkCode_38 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_74_74, ((MR_Box) (ll_backend__par_conj_gen__V_53_53)));
            }
#line 301 "par_conj_gen.m"
            {
#line 301 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 301 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 301 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_58_58, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__2_2));
#line 301 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_58_58, 2) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
#line 301 "par_conj_gen.m"
            }
#line 302 "par_conj_gen.m"
            {
#line 302 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_57_57, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_58_58));
#line 302 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_57_57, 1) = ((MR_Box) ((MR_String) "finish"));
#line 302 "par_conj_gen.m"
            }
#line 303 "par_conj_gen.m"
            {
#line 303 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 303 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_62_62, 1) = ((MR_Box) (ll_backend__par_conj_gen__NextConjunct_37));
#line 303 "par_conj_gen.m"
            }
#line 305 "par_conj_gen.m"
            {
#line 305 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_61_61, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_62_62));
#line 305 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_61_61, 1) = ((MR_Box) ((MR_String) "start of the next conjunct"));
#line 305 "par_conj_gen.m"
            }
#line 302 "par_conj_gen.m"
            {
#line 302 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_60_60, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_61_61));
#line 302 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "par_conj_gen.m"
            }
#line 300 "par_conj_gen.m"
            {
#line 300 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_56_56, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_57_57));
#line 300 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_56_56, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
#line 300 "par_conj_gen.m"
            }
#line 300 "par_conj_gen.m"
            {
#line 300 "par_conj_gen.m"
              ll_backend__par_conj_gen__JoinCode_39 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_74_74, ll_backend__par_conj_gen__V_56_56);
            }
#line 293 "par_conj_gen.m"
          }
#line 1262 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 314 "par_conj_gen.m"
        {
#line 314 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_66_66 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__SaveCode_34, ll_backend__par_conj_gen__JoinCode_39);
        }
#line 314 "par_conj_gen.m"
        {
#line 314 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__ThisGoalCode_26, ll_backend__par_conj_gen__V_66_66);
        }
#line 314 "par_conj_gen.m"
        {
#line 314 "par_conj_gen.m"
          ll_backend__par_conj_gen__ThisCode_40 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__ForkCode_38, ll_backend__par_conj_gen__V_65_65);
        }
#line 315 "par_conj_gen.m"
        {
#line 315 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(ll_backend__par_conj_gen__Goals_17, ll_backend__par_conj_gen__HeadVar__2_2, ll_backend__par_conj_gen__HeadVar__3_3, ll_backend__par_conj_gen__MaybeEnd_32, &ll_backend__par_conj_gen__RestCode_41, ll_backend__par_conj_gen__STATE_VARIABLE_CI_52_52, ll_backend__par_conj_gen__STATE_VARIABLE_CI_8);
        }
#line 317 "par_conj_gen.m"
        {
#line 317 "par_conj_gen.m"
          *ll_backend__par_conj_gen__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__ThisCode_40, ll_backend__par_conj_gen__RestCode_41);
        }
#line 279 "par_conj_gen.m"
      }
#line 276 "par_conj_gen.m"
  }
#line 272 "par_conj_gen.m"
}

#line 591 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__591__1_1_f_0(
#line 591 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_23)
#line 591 "par_conj_gen.m"
{
#line 591 "par_conj_gen.m"
  {
#line 591 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 591 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__HeadVar__2_24;

#line 591 "par_conj_gen.m"
    {
#line 591 "par_conj_gen.m"
      ll_backend__par_conj_gen__HeadVar__2_24 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__HeadVar__1_23);
    }
#line 591 "par_conj_gen.m"
    return ll_backend__par_conj_gen__HeadVar__2_24;
#line 591 "par_conj_gen.m"
  }
#line 591 "par_conj_gen.m"
}

#line 642 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
#line 642 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__GoalInfo_5,
#line 642 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__SlotNum_6,
#line 642 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17,
#line 642 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_18)
#line 642 "par_conj_gen.m"
{
#line 645 "par_conj_gen.m"
  {
#line 645 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 645 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__PredId_8;
#line 645 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__ProcId_9;
#line 645 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__ModuleInfo_10;
#line 645 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__ProcString_11;
#line 645 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__ContainingGoalMap_12;
#line 645 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__GoalId_13;
#line 645 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__GoalPath_14;
#line 645 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__GoalPathString_15;
#line 645 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__String_16;
#line 645 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_27_27;

#line 646 "par_conj_gen.m"
    {
#line 646 "par_conj_gen.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__PredId_8);
    }
#line 647 "par_conj_gen.m"
    {
#line 647 "par_conj_gen.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ProcId_9);
    }
#line 648 "par_conj_gen.m"
    {
#line 648 "par_conj_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ModuleInfo_10);
    }
#line 649 "par_conj_gen.m"
    {
#line 649 "par_conj_gen.m"
      ll_backend__par_conj_gen__ProcString_11 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(ll_backend__par_conj_gen__ModuleInfo_10, ll_backend__par_conj_gen__PredId_8, ll_backend__par_conj_gen__ProcId_9);
    }
#line 651 "par_conj_gen.m"
    {
#line 651 "par_conj_gen.m"
      ll_backend__code_info__get_containing_goal_map_det_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ContainingGoalMap_12);
    }
#line 652 "par_conj_gen.m"
    {
#line 652 "par_conj_gen.m"
      ll_backend__par_conj_gen__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__par_conj_gen__GoalInfo_5);
    }
#line 653 "par_conj_gen.m"
    {
#line 653 "par_conj_gen.m"
      ll_backend__par_conj_gen__GoalPath_14 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__par_conj_gen__ContainingGoalMap_12, ll_backend__par_conj_gen__GoalId_13);
    }
#line 654 "par_conj_gen.m"
    {
#line 654 "par_conj_gen.m"
      ll_backend__par_conj_gen__GoalPathString_15 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__par_conj_gen__GoalPath_14);
    }
#line 1400 "ll_backend.par_conj_gen.c"
    {
#line 1402 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) ": ", ll_backend__par_conj_gen__GoalPathString_15);
    }
#line 1405 "ll_backend.par_conj_gen.c"
    {
#line 1407 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__String_16 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__ProcString_11, ll_backend__par_conj_gen__V_27_27);
    }
#line 657 "par_conj_gen.m"
    {
#line 657 "par_conj_gen.m"
      ll_backend__code_info__add_threadscope_string_4_p_0(ll_backend__par_conj_gen__String_16, ll_backend__par_conj_gen__SlotNum_6, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, ll_backend__par_conj_gen__STATE_VARIABLE_CI_18);
#line 657 "par_conj_gen.m"
      return;
    }
#line 645 "par_conj_gen.m"
  }
#line 642 "par_conj_gen.m"
}

#line 623 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__place_all_outputs_3_p_0(
#line 623 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 623 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2,
#line 623 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_3)
#line 623 "par_conj_gen.m"
{
#line 626 "par_conj_gen.m"
  while (MR_TRUE)
#line 626 "par_conj_gen.m"
    {
#line 626 "par_conj_gen.m"
      /* tailcall optimized into a loop */
#line 626 "par_conj_gen.m"
      {
#line 626 "par_conj_gen.m"
        MR_bool ll_backend__par_conj_gen__succeeded;

#line 626 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "par_conj_gen.m"
          *ll_backend__par_conj_gen__STATE_VARIABLE_CI_3 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2;
#line 626 "par_conj_gen.m"
        else
#line 627 "par_conj_gen.m"
          {
#line 627 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 627 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 627 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__VarLocations_10;
#line 627 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Slot_11;
#line 627 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_15_15;
#line 631 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_19_19;
#line 631 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Locations_12;
#line 631 "par_conj_gen.m"
            MR_Box ll_backend__par_conj_gen__conv0_Locations_12;

#line 628 "par_conj_gen.m"
            {
#line 628 "par_conj_gen.m"
              ll_backend__code_info__variable_locations_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2, &ll_backend__par_conj_gen__VarLocations_10);
            }
#line 629 "par_conj_gen.m"
            {
#line 629 "par_conj_gen.m"
              ll_backend__code_info__get_variable_slot_3_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2, ll_backend__par_conj_gen__Var_7, &ll_backend__par_conj_gen__Slot_11);
            }
#line 631 "par_conj_gen.m"
            {
#line 631 "par_conj_gen.m"
              ll_backend__par_conj_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__VarLocations_10, ((MR_Box) (ll_backend__par_conj_gen__Var_7)), &ll_backend__par_conj_gen__conv0_Locations_12);
            }
#line 631 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 631 "par_conj_gen.m"
              {
#line 631 "par_conj_gen.m"
                ll_backend__par_conj_gen__Locations_12 = ((MR_Word) ll_backend__par_conj_gen__conv0_Locations_12);
#line 631 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 631 "par_conj_gen.m"
              }
#line 631 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 631 "par_conj_gen.m"
              {
#line 1498 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 632 "par_conj_gen.m"
                {
#line 632 "par_conj_gen.m"
                  ll_backend__par_conj_gen__succeeded = mercury__set__member_2_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_19, ((MR_Box) (ll_backend__par_conj_gen__Slot_11)), ll_backend__par_conj_gen__Locations_12);
                }
#line 631 "par_conj_gen.m"
              }
#line 635 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 632 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_CI_15_15 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2;
#line 635 "par_conj_gen.m"
            else
#line 636 "par_conj_gen.m"
              {
#line 636 "par_conj_gen.m"
                ll_backend__code_info__set_var_location_4_p_0(ll_backend__par_conj_gen__Var_7, ll_backend__par_conj_gen__Slot_11, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_15_15);
              }
#line 638 "par_conj_gen.m"
            /* direct tailcall eliminated */
#line 638 "par_conj_gen.m"
            {
#line 638 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1 = ll_backend__par_conj_gen__Vars_8;
#line 638 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0__tmp_copy_2 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_15_15;

#line 638 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_2 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0__tmp_copy_2;
#line 638 "par_conj_gen.m"
              ll_backend__par_conj_gen__HeadVar__1_1 = ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1;
#line 638 "par_conj_gen.m"
            }
#line 638 "par_conj_gen.m"
            continue;
#line 627 "par_conj_gen.m"
          }
#line 626 "par_conj_gen.m"
      }
#line 626 "par_conj_gen.m"
      break;
#line 626 "par_conj_gen.m"
    }
#line 623 "par_conj_gen.m"
}

#line 609 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__find_outputs_6_p_0(
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
#line 609 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5,
#line 609 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6)
#line 609 "par_conj_gen.m"
{
#line 612 "par_conj_gen.m"
  while (MR_TRUE)
#line 612 "par_conj_gen.m"
    {
#line 612 "par_conj_gen.m"
      /* tailcall optimized into a loop */
#line 612 "par_conj_gen.m"
      {
#line 612 "par_conj_gen.m"
        MR_bool ll_backend__par_conj_gen__succeeded;

#line 612 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "par_conj_gen.m"
          *ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5;
#line 612 "par_conj_gen.m"
        else
#line 613 "par_conj_gen.m"
          {
#line 613 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 613 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 613 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__InitialInst_19;
#line 613 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__FinalInst_20;
#line 613 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24;
#line 616 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_23_23;

#line 614 "par_conj_gen.m"
            {
#line 614 "par_conj_gen.m"
              hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__par_conj_gen__HeadVar__2_2, ll_backend__par_conj_gen__Var_13, &ll_backend__par_conj_gen__InitialInst_19);
            }
#line 615 "par_conj_gen.m"
            {
#line 615 "par_conj_gen.m"
              hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__par_conj_gen__HeadVar__3_3, ll_backend__par_conj_gen__Var_13, &ll_backend__par_conj_gen__FinalInst_20);
            }
#line 616 "par_conj_gen.m"
            {
#line 616 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_23_23, 0) = ((MR_Box) (ll_backend__par_conj_gen__InitialInst_19));
#line 616 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_23_23, 1) = ((MR_Box) (ll_backend__par_conj_gen__FinalInst_20));
#line 616 "par_conj_gen.m"
            }
#line 616 "par_conj_gen.m"
            {
#line 616 "par_conj_gen.m"
              ll_backend__par_conj_gen__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ll_backend__par_conj_gen__HeadVar__4_4, ll_backend__par_conj_gen__V_23_23);
            }
#line 618 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 617 "par_conj_gen.m"
              {
#line 617 "par_conj_gen.m"
                ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "par_conj_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24, 0) = ((MR_Box) (ll_backend__par_conj_gen__Var_13));
#line 617 "par_conj_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24, 1) = ((MR_Box) (ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5));
#line 617 "par_conj_gen.m"
              }
#line 618 "par_conj_gen.m"
            else
#line 619 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5;
#line 621 "par_conj_gen.m"
            /* direct tailcall eliminated */
#line 621 "par_conj_gen.m"
            {
#line 621 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1 = ll_backend__par_conj_gen__Vars_14;
#line 621 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0__tmp_copy_5 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24;

#line 621 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0__tmp_copy_5;
#line 621 "par_conj_gen.m"
              ll_backend__par_conj_gen__HeadVar__1_1 = ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1;
#line 621 "par_conj_gen.m"
            }
#line 621 "par_conj_gen.m"
            continue;
#line 613 "par_conj_gen.m"
          }
#line 612 "par_conj_gen.m"
      }
#line 612 "par_conj_gen.m"
      break;
#line 612 "par_conj_gen.m"
    }
#line 609 "par_conj_gen.m"
}

#line 595 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
#line 595 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LVal_4,
#line 595 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__Max0_5,
#line 595 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__Max_6)
#line 595 "par_conj_gen.m"
{
#line 603 "par_conj_gen.m"
  {
#line 603 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__LVal_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LVal_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 603 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__N_7;

#line 599 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 599 "par_conj_gen.m"
      {
#line 599 "par_conj_gen.m"
        ll_backend__par_conj_gen__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LVal_4, (MR_Integer) 1)));
#line 600 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__N_7 > ll_backend__par_conj_gen__Max0_5);
#line 599 "par_conj_gen.m"
      }
#line 603 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 602 "par_conj_gen.m"
      *ll_backend__par_conj_gen__Max_6 = ll_backend__par_conj_gen__N_7;
#line 603 "par_conj_gen.m"
    else
#line 604 "par_conj_gen.m"
      *ll_backend__par_conj_gen__Max_6 = ll_backend__par_conj_gen__Max0_5;
#line 603 "par_conj_gen.m"
  }
#line 595 "par_conj_gen.m"
}

#line 593 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
#line 593 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 593 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 593 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_2,
#line 593 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_3)
#line 593 "par_conj_gen.m"
{
#line 593 "par_conj_gen.m"
  {
#line 593 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 593 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__conv2_Max_6;

#line 593 "par_conj_gen.m"
    {
#line 593 "par_conj_gen.m"
      ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), ((MR_Integer) ll_backend__par_conj_gen__wrapper_arg_2), &ll_backend__par_conj_gen__conv2_Max_6);
    }
#line 593 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__par_conj_gen__conv2_Max_6));
#line 593 "par_conj_gen.m"
  }
#line 593 "par_conj_gen.m"
}

#line 591 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
#line 591 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 591 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 591 "par_conj_gen.m"
{
#line 591 "par_conj_gen.m"
  {
#line 591 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
#line 591 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 591 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__2_24;

#line 591 "par_conj_gen.m"
    {
#line 591 "par_conj_gen.m"
      ll_backend__par_conj_gen__conv1_HeadVar__2_24 = ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__591__1_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 591 "par_conj_gen.m"
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__2_24));
#line 591 "par_conj_gen.m"
    return ll_backend__par_conj_gen__wrapper_arg_2;
#line 591 "par_conj_gen.m"
  }
#line 591 "par_conj_gen.m"
}

#line 590 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
#line 590 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 590 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 590 "par_conj_gen.m"
{
#line 590 "par_conj_gen.m"
  {
#line 590 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
#line 590 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 590 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_HeadVar__2_2;

#line 590 "par_conj_gen.m"
    {
#line 590 "par_conj_gen.m"
      ll_backend__par_conj_gen__conv0_HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 590 "par_conj_gen.m"
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_HeadVar__2_2));
#line 590 "par_conj_gen.m"
    return ll_backend__par_conj_gen__wrapper_arg_2;
#line 590 "par_conj_gen.m"
  }
#line 590 "par_conj_gen.m"
}

#line 586 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
#line 586 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Instrs_3,
#line 586 "par_conj_gen.m"
  MR_Integer * ll_backend__par_conj_gen__MaxRef_4)
#line 586 "par_conj_gen.m"
{
#line 588 "par_conj_gen.m"
  {
#line 588 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_18_18;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeInfo_19_19;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_26_26;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__RVals_5;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LVals0_6;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LValsInRvalsLists_7;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LValsSets_8;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LVals_9;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_10_10;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_12_12;
#line 588 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_14_14;
#line 593 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__conv3_MaxRef_4;

#line 589 "par_conj_gen.m"
    {
#line 589 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_10_10 = mercury__cord__list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__par_conj_gen__Instrs_3);
    }
#line 589 "par_conj_gen.m"
    {
#line 589 "par_conj_gen.m"
      ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(ll_backend__par_conj_gen__V_10_10, &ll_backend__par_conj_gen__RVals_5, &ll_backend__par_conj_gen__LVals0_6);
    }
#line 1849 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 1851 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeInfo_19_19 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[2];
#line 590 "par_conj_gen.m"
    {
#line 590 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_12_12 = mercury__set__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_18_18, ll_backend__par_conj_gen__RVals_5);
    }
#line 590 "par_conj_gen.m"
    {
#line 590 "par_conj_gen.m"
      ll_backend__par_conj_gen__LValsInRvalsLists_7 = mercury__list__map_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_18_18, ll_backend__par_conj_gen__TypeInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[6], ll_backend__par_conj_gen__V_12_12);
    }
#line 591 "par_conj_gen.m"
    {
#line 591 "par_conj_gen.m"
      ll_backend__par_conj_gen__LValsSets_8 = mercury__list__map_2_f_0(ll_backend__par_conj_gen__TypeInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[7], ll_backend__par_conj_gen__LValsInRvalsLists_7);
    }
#line 1868 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 592 "par_conj_gen.m"
    {
#line 592 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_14_14 = mercury__set__union_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, ll_backend__par_conj_gen__LValsSets_8);
    }
#line 592 "par_conj_gen.m"
    {
#line 592 "par_conj_gen.m"
      ll_backend__par_conj_gen__LVals_9 = mercury__set__union_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, ll_backend__par_conj_gen__V_14_14, ll_backend__par_conj_gen__LVals0_6);
    }
#line 593 "par_conj_gen.m"
    {
#line 593 "par_conj_gen.m"
      mercury__set__fold_4_p_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[8], ll_backend__par_conj_gen__LVals_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv3_MaxRef_4);
    }
#line 593 "par_conj_gen.m"
    *ll_backend__par_conj_gen__MaxRef_4 = ((MR_Integer) ll_backend__par_conj_gen__conv3_MaxRef_4);
#line 588 "par_conj_gen.m"
  }
#line 586 "par_conj_gen.m"
}

#line 524 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
#line 524 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 524 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 524 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
#line 524 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
#line 524 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4)
#line 524 "par_conj_gen.m"
{
#line 524 "par_conj_gen.m"
  {
#line 524 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 524 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_Lval_6;

#line 524 "par_conj_gen.m"
    {
#line 524 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_Lval_6);
    }
#line 524 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_Lval_6));
#line 524 "par_conj_gen.m"
  }
#line 524 "par_conj_gen.m"
}

#line 520 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
#line 520 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Lval0_5,
#line 520 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Lval_6)
#line 520 "par_conj_gen.m"
{
#line 523 "par_conj_gen.m"
  {
#line 523 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 523 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TransformRval_8 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[5];

#line 530 "par_conj_gen.m"
    if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 531 "par_conj_gen.m"
      {
#line 531 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 531 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 2)));

#line 535 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__Type_10 == (MR_Integer) 1))
#line 537 "par_conj_gen.m"
          *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 535 "par_conj_gen.m"
        else
#line 533 "par_conj_gen.m"
          {
#line 534 "par_conj_gen.m"
            {
#line 534 "par_conj_gen.m"
              MR_Word base;
#line 534 "par_conj_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 534 "par_conj_gen.m"
              *ll_backend__par_conj_gen__Lval_6 = base;
#line 534 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 534 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 534 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_35));
#line 534 "par_conj_gen.m"
            }
#line 533 "par_conj_gen.m"
          }
#line 531 "par_conj_gen.m"
      }
#line 530 "par_conj_gen.m"
    else
#line 530 "par_conj_gen.m"
      if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 574 "par_conj_gen.m"
        {
#line 574 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__TypeCtorInfo_56_56 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 574 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Tag_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 574 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Rval1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 2)));
#line 574 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Rval2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 3)));
#line 574 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Rval3_22;
#line 574 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__Rval4_23;
#line 575 "par_conj_gen.m"
          MR_Box ll_backend__par_conj_gen__conv1_STATE_VARIABLE_Acc_27_27;
#line 576 "par_conj_gen.m"
          MR_Box ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Acc_25;

#line 575 "par_conj_gen.m"
          {
#line 575 "par_conj_gen.m"
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__par_conj_gen__TypeCtorInfo_56_56, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval1_20, &ll_backend__par_conj_gen__Rval3_22, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv1_STATE_VARIABLE_Acc_27_27);
          }
#line 576 "par_conj_gen.m"
          {
#line 576 "par_conj_gen.m"
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__par_conj_gen__TypeCtorInfo_56_56, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval2_21, &ll_backend__par_conj_gen__Rval4_23, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Acc_25);
          }
#line 577 "par_conj_gen.m"
          {
#line 577 "par_conj_gen.m"
            MR_Word base;
#line 577 "par_conj_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 577 "par_conj_gen.m"
            *ll_backend__par_conj_gen__Lval_6 = base;
#line 577 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 577 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Tag_19));
#line 577 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__par_conj_gen__Rval3_22));
#line 577 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__par_conj_gen__Rval4_23));
#line 577 "par_conj_gen.m"
          }
#line 574 "par_conj_gen.m"
        }
#line 530 "par_conj_gen.m"
      else
#line 530 "par_conj_gen.m"
        if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 579 "par_conj_gen.m"
          {
#line 579 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Rval0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 579 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Rval_46;
#line 580 "par_conj_gen.m"
            MR_Box ll_backend__par_conj_gen__conv3_STATE_VARIABLE_Acc_25;

#line 580 "par_conj_gen.m"
            {
#line 580 "par_conj_gen.m"
              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_45, &ll_backend__par_conj_gen__Rval_46, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv3_STATE_VARIABLE_Acc_25);
            }
#line 581 "par_conj_gen.m"
            {
#line 581 "par_conj_gen.m"
              MR_Word base;
#line 581 "par_conj_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "par_conj_gen.m"
              *ll_backend__par_conj_gen__Lval_6 = base;
#line 581 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 581 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_46));
#line 581 "par_conj_gen.m"
            }
#line 579 "par_conj_gen.m"
          }
#line 530 "par_conj_gen.m"
        else
#line 530 "par_conj_gen.m"
          if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 529 "par_conj_gen.m"
            *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 530 "par_conj_gen.m"
          else
#line 530 "par_conj_gen.m"
            if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 570 "par_conj_gen.m"
              {
#line 570 "par_conj_gen.m"
                MR_Word ll_backend__par_conj_gen__Rval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 570 "par_conj_gen.m"
                MR_Word ll_backend__par_conj_gen__Rval_44;
#line 571 "par_conj_gen.m"
                MR_Box ll_backend__par_conj_gen__conv4_STATE_VARIABLE_Acc_25;

#line 571 "par_conj_gen.m"
                {
#line 571 "par_conj_gen.m"
                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_43, &ll_backend__par_conj_gen__Rval_44, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv4_STATE_VARIABLE_Acc_25);
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
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 572 "par_conj_gen.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_44));
#line 572 "par_conj_gen.m"
                }
#line 570 "par_conj_gen.m"
              }
#line 530 "par_conj_gen.m"
            else
#line 530 "par_conj_gen.m"
              if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 562 "par_conj_gen.m"
                {
#line 562 "par_conj_gen.m"
                  MR_Word ll_backend__par_conj_gen__Rval0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 562 "par_conj_gen.m"
                  MR_Word ll_backend__par_conj_gen__Rval_40;
#line 563 "par_conj_gen.m"
                  MR_Box ll_backend__par_conj_gen__conv5_STATE_VARIABLE_Acc_25;

#line 563 "par_conj_gen.m"
                  {
#line 563 "par_conj_gen.m"
                    ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_39, &ll_backend__par_conj_gen__Rval_40, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv5_STATE_VARIABLE_Acc_25);
                  }
#line 564 "par_conj_gen.m"
                  {
#line 564 "par_conj_gen.m"
                    MR_Word base;
#line 564 "par_conj_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "par_conj_gen.m"
                    *ll_backend__par_conj_gen__Lval_6 = base;
#line 564 "par_conj_gen.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 564 "par_conj_gen.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_40));
#line 564 "par_conj_gen.m"
                  }
#line 562 "par_conj_gen.m"
                }
#line 530 "par_conj_gen.m"
              else
#line 530 "par_conj_gen.m"
                if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 558 "par_conj_gen.m"
                  {
#line 558 "par_conj_gen.m"
                    MR_Word ll_backend__par_conj_gen__Rval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 558 "par_conj_gen.m"
                    MR_Word ll_backend__par_conj_gen__Rval_38;
#line 559 "par_conj_gen.m"
                    MR_Box ll_backend__par_conj_gen__conv6_STATE_VARIABLE_Acc_25;

#line 559 "par_conj_gen.m"
                    {
#line 559 "par_conj_gen.m"
                      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_37, &ll_backend__par_conj_gen__Rval_38, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv6_STATE_VARIABLE_Acc_25);
                    }
#line 560 "par_conj_gen.m"
                    {
#line 560 "par_conj_gen.m"
                      MR_Word base;
#line 560 "par_conj_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "par_conj_gen.m"
                      *ll_backend__par_conj_gen__Lval_6 = base;
#line 560 "par_conj_gen.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 560 "par_conj_gen.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_38));
#line 560 "par_conj_gen.m"
                    }
#line 558 "par_conj_gen.m"
                  }
#line 530 "par_conj_gen.m"
                else
#line 530 "par_conj_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 528 "par_conj_gen.m"
                    {
#line 528 "par_conj_gen.m"
                      MR_Integer ll_backend__par_conj_gen__SlotNum_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));

#line 529 "par_conj_gen.m"
                      {
#line 529 "par_conj_gen.m"
                        MR_Word base;
#line 529 "par_conj_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "par_conj_gen.m"
                        *ll_backend__par_conj_gen__Lval_6 = base;
#line 529 "par_conj_gen.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 529 "par_conj_gen.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_58));
#line 529 "par_conj_gen.m"
                      }
#line 528 "par_conj_gen.m"
                    }
#line 530 "par_conj_gen.m"
                  else
#line 530 "par_conj_gen.m"
                    if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 566 "par_conj_gen.m"
                      {
#line 566 "par_conj_gen.m"
                        MR_Word ll_backend__par_conj_gen__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 566 "par_conj_gen.m"
                        MR_Word ll_backend__par_conj_gen__Rval_42;
#line 567 "par_conj_gen.m"
                        MR_Box ll_backend__par_conj_gen__conv7_STATE_VARIABLE_Acc_25;

#line 567 "par_conj_gen.m"
                        {
#line 567 "par_conj_gen.m"
                          ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_41, &ll_backend__par_conj_gen__Rval_42, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv7_STATE_VARIABLE_Acc_25);
                        }
#line 568 "par_conj_gen.m"
                        {
#line 568 "par_conj_gen.m"
                          MR_Word base;
#line 568 "par_conj_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "par_conj_gen.m"
                          *ll_backend__par_conj_gen__Lval_6 = base;
#line 568 "par_conj_gen.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 568 "par_conj_gen.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_42));
#line 568 "par_conj_gen.m"
                        }
#line 566 "par_conj_gen.m"
                      }
#line 530 "par_conj_gen.m"
                    else
#line 530 "par_conj_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 554 "par_conj_gen.m"
                        {
#line 554 "par_conj_gen.m"
                          MR_Word ll_backend__par_conj_gen__Rval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 554 "par_conj_gen.m"
                          MR_Word ll_backend__par_conj_gen__Rval_18;
#line 555 "par_conj_gen.m"
                          MR_Box ll_backend__par_conj_gen__conv8_STATE_VARIABLE_Acc_25;

#line 555 "par_conj_gen.m"
                          {
#line 555 "par_conj_gen.m"
                            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_17, &ll_backend__par_conj_gen__Rval_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv8_STATE_VARIABLE_Acc_25);
                          }
#line 556 "par_conj_gen.m"
                          {
#line 556 "par_conj_gen.m"
                            MR_Word base;
#line 556 "par_conj_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "par_conj_gen.m"
                            *ll_backend__par_conj_gen__Lval_6 = base;
#line 556 "par_conj_gen.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 556 "par_conj_gen.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_18));
#line 556 "par_conj_gen.m"
                          }
#line 554 "par_conj_gen.m"
                        }
#line 530 "par_conj_gen.m"
                      else
#line 552 "par_conj_gen.m"
                        *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 523 "par_conj_gen.m"
  }
#line 520 "par_conj_gen.m"
}

#line 517 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1(
#line 517 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 517 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 517 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
#line 517 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
#line 517 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4)
#line 517 "par_conj_gen.m"
{
#line 517 "par_conj_gen.m"
  {
#line 517 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 517 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_Lval_6;

#line 517 "par_conj_gen.m"
    {
#line 517 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_Lval_6);
    }
#line 517 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_Lval_6));
#line 517 "par_conj_gen.m"
  }
#line 517 "par_conj_gen.m"
}

#line 513 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
#line 513 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5,
#line 513 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6)
#line 513 "par_conj_gen.m"
{
#line 516 "par_conj_gen.m"
  {
#line 516 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 517 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__conv1_V_4_4;

#line 517 "par_conj_gen.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 517 "par_conj_gen.m"
    {
#line 517 "par_conj_gen.m"
      ll_backend__exprn_aux__transform_lval_in_instr_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[4], ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5, ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv1_V_4_4);
    }
#line 516 "par_conj_gen.m"
  }
#line 513 "par_conj_gen.m"
}

#line 511 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1(
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 511 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 511 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 511 "par_conj_gen.m"
{
#line 511 "par_conj_gen.m"
  {
#line 511 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 511 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6;

#line 511 "par_conj_gen.m"
    {
#line 511 "par_conj_gen.m"
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6);
    }
#line 511 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6));
#line 511 "par_conj_gen.m"
  }
#line 511 "par_conj_gen.m"
}

#line 508 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(
#line 508 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4,
#line 508 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Code_5)
#line 508 "par_conj_gen.m"
{
#line 510 "par_conj_gen.m"
  {
#line 510 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 510 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_10 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 511 "par_conj_gen.m"
    {
#line 511 "par_conj_gen.m"
      mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_10, ll_backend__par_conj_gen__TypeCtorInfo_10_10, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[3], ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4, ll_backend__par_conj_gen__STATE_VARIABLE_Code_5);
#line 511 "par_conj_gen.m"
      return;
    }
#line 510 "par_conj_gen.m"
  }
#line 508 "par_conj_gen.m"
}

#line 497 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
#line 497 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1)
#line 497 "par_conj_gen.m"
{
#line 499 "par_conj_gen.m"
  {
#line 499 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__par_conj_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 499 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_2_2;
#line 499 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__V_3_3;

#line 499 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 499 "par_conj_gen.m"
      {
#line 499 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 499 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 499 "par_conj_gen.m"
      }
#line 499 "par_conj_gen.m"
    return ll_backend__par_conj_gen__succeeded;
#line 499 "par_conj_gen.m"
  }
#line 497 "par_conj_gen.m"
}

#line 489 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
#line 489 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 489 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 489 "par_conj_gen.m"
{
#line 489 "par_conj_gen.m"
  {
#line 489 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 489 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;

#line 489 "par_conj_gen.m"
    {
#line 489 "par_conj_gen.m"
      return ll_backend__par_conj_gen__succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 489 "par_conj_gen.m"
    return ll_backend__par_conj_gen__succeeded;
#line 489 "par_conj_gen.m"
  }
#line 489 "par_conj_gen.m"
}

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_2(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 490 "par_conj_gen.m"
{
#line 490 "par_conj_gen.m"
  {
#line 490 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 490 "par_conj_gen.m"
    MR_builtin_longjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_0, 1);
#line 490 "par_conj_gen.m"
  }
#line 490 "par_conj_gen.m"
}

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_3(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 490 "par_conj_gen.m"
{
#line 490 "par_conj_gen.m"
  {
#line 490 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 490 "par_conj_gen.m"
    (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_17 = ((MR_Word) (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv1_LocnPrime_17);
#line 490 "par_conj_gen.m"
    {
#line 490 "par_conj_gen.m"
      ll_backend__par_conj_gen__best_variable_location_det_3_p_0_2(ll_backend__par_conj_gen__env_ptr);
#line 490 "par_conj_gen.m"
      return;
    }
#line 490 "par_conj_gen.m"
  }
#line 490 "par_conj_gen.m"
}

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_4(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 490 "par_conj_gen.m"
{
#line 490 "par_conj_gen.m"
  {
#line 490 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 490 "par_conj_gen.m"
    if (MR_builtin_setjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_0) == 0)
#line 490 "par_conj_gen.m"
      {
#line 490 "par_conj_gen.m"
        {
#line 490 "par_conj_gen.m"
          mercury__set__member_2_p_1((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22, &(ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv1_LocnPrime_17, (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__RegLocns_16, ll_backend__par_conj_gen__best_variable_location_det_3_p_0_3, ll_backend__par_conj_gen__env_ptr);
        }
#line 490 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_FALSE;
#line 490 "par_conj_gen.m"
      }
#line 490 "par_conj_gen.m"
    else
#line 490 "par_conj_gen.m"
      (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_TRUE;
#line 490 "par_conj_gen.m"
  }
#line 490 "par_conj_gen.m"
}

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_5(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 494 "par_conj_gen.m"
{
#line 494 "par_conj_gen.m"
  {
#line 494 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 494 "par_conj_gen.m"
    MR_builtin_longjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_1, 1);
#line 494 "par_conj_gen.m"
  }
#line 494 "par_conj_gen.m"
}

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_6(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 494 "par_conj_gen.m"
{
#line 494 "par_conj_gen.m"
  {
#line 494 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 494 "par_conj_gen.m"
    (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_7 = ((MR_Word) (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv2_LocnPrime_7);
#line 494 "par_conj_gen.m"
    {
#line 494 "par_conj_gen.m"
      ll_backend__par_conj_gen__best_variable_location_det_3_p_0_5(ll_backend__par_conj_gen__env_ptr);
#line 494 "par_conj_gen.m"
      return;
    }
#line 494 "par_conj_gen.m"
  }
#line 494 "par_conj_gen.m"
}

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_7(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 494 "par_conj_gen.m"
{
#line 494 "par_conj_gen.m"
  {
#line 494 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 494 "par_conj_gen.m"
    if (MR_builtin_setjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__commit_1) == 0)
#line 494 "par_conj_gen.m"
      {
#line 494 "par_conj_gen.m"
        {
#line 494 "par_conj_gen.m"
          mercury__set__member_2_p_1((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22, &(ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__conv2_LocnPrime_7, (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__AllLocns_15, ll_backend__par_conj_gen__best_variable_location_det_3_p_0_6, ll_backend__par_conj_gen__env_ptr);
        }
#line 494 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_FALSE;
#line 494 "par_conj_gen.m"
      }
#line 494 "par_conj_gen.m"
    else
#line 494 "par_conj_gen.m"
      (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_TRUE;
#line 494 "par_conj_gen.m"
  }
#line 494 "par_conj_gen.m"
}

#line 471 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
#line 471 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CI_4,
#line 471 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Var_5,
#line 471 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Locn_6)
#line 471 "par_conj_gen.m"
{
#line 471 "par_conj_gen.m"
  {
#line 471 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0_s ll_backend__par_conj_gen__env;

#line 475 "par_conj_gen.m"
    {
#line 486 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__Map_14;
#line 486 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_18_18;
#line 488 "par_conj_gen.m"
      MR_Box ll_backend__par_conj_gen__conv0_AllLocns_15;

#line 487 "par_conj_gen.m"
      {
#line 487 "par_conj_gen.m"
        ll_backend__code_info__variable_locations_2_p_0(ll_backend__par_conj_gen__CI_4, &ll_backend__par_conj_gen__Map_14);
      }
#line 488 "par_conj_gen.m"
      {
#line 488 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__Map_14, ((MR_Box) (ll_backend__par_conj_gen__Var_5)), &ll_backend__par_conj_gen__conv0_AllLocns_15);
      }
#line 488 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded)
#line 488 "par_conj_gen.m"
        {
#line 488 "par_conj_gen.m"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__AllLocns_15 = ((MR_Word) ll_backend__par_conj_gen__conv0_AllLocns_15);
#line 488 "par_conj_gen.m"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_TRUE;
#line 488 "par_conj_gen.m"
        }
#line 486 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded)
#line 486 "par_conj_gen.m"
        {
#line 489 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_18_18 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[2];
#line 2666 "ll_backend.par_conj_gen.c"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 489 "par_conj_gen.m"
          {
#line 489 "par_conj_gen.m"
            mercury__set__filter_3_p_0((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__TypeCtorInfo_15_22, ll_backend__par_conj_gen__V_18_18, (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__AllLocns_15, &(ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__RegLocns_16);
          }
#line 490 "par_conj_gen.m"
          {
#line 490 "par_conj_gen.m"
            ll_backend__par_conj_gen__best_variable_location_det_3_p_0_4(&ll_backend__par_conj_gen__env);
          }
#line 493 "par_conj_gen.m"
          if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded)
#line 492 "par_conj_gen.m"
            {
#line 492 "par_conj_gen.m"
              (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_7 = (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_17;
#line 492 "par_conj_gen.m"
              (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded = MR_TRUE;
#line 492 "par_conj_gen.m"
            }
#line 493 "par_conj_gen.m"
          else
#line 494 "par_conj_gen.m"
            {
#line 494 "par_conj_gen.m"
              {
#line 494 "par_conj_gen.m"
                ll_backend__par_conj_gen__best_variable_location_det_3_p_0_7(&ll_backend__par_conj_gen__env);
              }
#line 494 "par_conj_gen.m"
            }
#line 486 "par_conj_gen.m"
        }
#line 478 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__succeeded)
#line 477 "par_conj_gen.m"
        *ll_backend__par_conj_gen__Locn_6 = (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__best_variable_location_det_3_p_0_env_0__LocnPrime_7;
#line 478 "par_conj_gen.m"
      else
#line 479 "par_conj_gen.m"
        {
#line 479 "par_conj_gen.m"
          {
#line 479 "par_conj_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
#line 479 "par_conj_gen.m"
            return;
          }
#line 479 "par_conj_gen.m"
        }
#line 475 "par_conj_gen.m"
    }
#line 471 "par_conj_gen.m"
  }
#line 471 "par_conj_gen.m"
}

#line 454 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
#line 454 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCVarName_5,
#line 454 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCSVarName_6,
#line 454 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlot_7,
#line 454 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CopyStr_8)
#line 454 "par_conj_gen.m"
{
#line 465 "par_conj_gen.m"
  {
#line 465 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 465 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__StackSlotName_9;

#line 458 "par_conj_gen.m"
    {
#line 458 "par_conj_gen.m"
      ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__StackSlot_7, &ll_backend__par_conj_gen__StackSlotName_9);
    }
#line 465 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 462 "par_conj_gen.m"
      {
#line 462 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__N_10;

#line 459 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__StackSlot_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__StackSlot_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 459 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 459 "par_conj_gen.m"
          {
#line 459 "par_conj_gen.m"
            ll_backend__par_conj_gen__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__StackSlot_7, (MR_Integer) 1)));
#line 460 "par_conj_gen.m"
            {
#line 460 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_28_28;
#line 460 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_30_30;
#line 460 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_31_31;
#line 460 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_32_32;
#line 460 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_34_34;
#line 460 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_35_35;
#line 460 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_37_37;
#line 460 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_38_38;

#line 2784 "ll_backend.par_conj_gen.c"
              {
#line 2786 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__StackSlotName_9, (MR_String) ";\n");
              }
#line 2789 "ll_backend.par_conj_gen.c"
              {
#line 2791 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", ll_backend__par_conj_gen__V_28_28);
              }
#line 2794 "ll_backend.par_conj_gen.c"
              {
#line 2796 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_31_31 = mercury__string__int_to_string_1_f_0(ll_backend__par_conj_gen__N_10);
              }
#line 2799 "ll_backend.par_conj_gen.c"
              {
#line 2801 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_31_31, ll_backend__par_conj_gen__V_30_30);
              }
#line 2804 "ll_backend.par_conj_gen.c"
              {
#line 2806 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_32_32);
              }
#line 2809 "ll_backend.par_conj_gen.c"
              {
#line 2811 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__LCSVarName_6, ll_backend__par_conj_gen__V_34_34);
              }
#line 2814 "ll_backend.par_conj_gen.c"
              {
#line 2816 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_35_35);
              }
#line 2819 "ll_backend.par_conj_gen.c"
              {
#line 2821 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__V_38_38 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__LCVarName_5, ll_backend__par_conj_gen__V_37_37);
              }
#line 2824 "ll_backend.par_conj_gen.c"
              {
#line 2826 "ll_backend.par_conj_gen.c"
                *ll_backend__par_conj_gen__CopyStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_worker_sv(", ll_backend__par_conj_gen__V_38_38);
              }
#line 460 "par_conj_gen.m"
            }
#line 459 "par_conj_gen.m"
          }
#line 459 "par_conj_gen.m"
        else
#line 463 "par_conj_gen.m"
          {
#line 463 "par_conj_gen.m"
            {
#line 463 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "not stack slot");
#line 463 "par_conj_gen.m"
              return;
            }
#line 463 "par_conj_gen.m"
          }
#line 462 "par_conj_gen.m"
      }
#line 465 "par_conj_gen.m"
    else
#line 466 "par_conj_gen.m"
      {
#line 466 "par_conj_gen.m"
        {
#line 466 "par_conj_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "cannot convert to string");
#line 466 "par_conj_gen.m"
          return;
        }
#line 466 "par_conj_gen.m"
      }
#line 465 "par_conj_gen.m"
  }
#line 454 "par_conj_gen.m"
}

#line 448 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
#line 448 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 448 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 448 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 448 "par_conj_gen.m"
{
#line 448 "par_conj_gen.m"
  {
#line 448 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 448 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__conv0_CopyStr_8;

#line 448 "par_conj_gen.m"
    {
#line 448 "par_conj_gen.m"
      ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_CopyStr_8);
    }
#line 448 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_CopyStr_8));
#line 448 "par_conj_gen.m"
  }
#line 448 "par_conj_gen.m"
}

#line 430 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
#line 430 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__FrameSize_6,
#line 430 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVarLocn_7,
#line 430 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVarLocn_8,
#line 430 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlots_9,
#line 430 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CodeStr_10)
#line 430 "par_conj_gen.m"
{
#line 434 "par_conj_gen.m"
  {
#line 434 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCVarName_13;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCSVarName_14;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__IncrLine_16;
#line 434 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__CopyStrs_17;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__CopyLines_18;
#line 434 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_31_31;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_32_32;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_33_33;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_39_39;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_40_40;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_42_42;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_43_43;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_45_45;
#line 434 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_46_46;
#line 441 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCVarNamePrime_11;
#line 441 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCSVarNamePrime_12;

#line 436 "par_conj_gen.m"
    {
#line 436 "par_conj_gen.m"
      ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__LCVarLocn_7, &ll_backend__par_conj_gen__LCVarNamePrime_11);
    }
#line 436 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 437 "par_conj_gen.m"
      {
#line 437 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__LCSVarLocn_8, &ll_backend__par_conj_gen__LCSVarNamePrime_12);
      }
#line 441 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 439 "par_conj_gen.m"
      {
#line 439 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCVarName_13 = ll_backend__par_conj_gen__LCVarNamePrime_11;
#line 440 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCSVarName_14 = ll_backend__par_conj_gen__LCSVarNamePrime_12;
#line 439 "par_conj_gen.m"
      }
#line 441 "par_conj_gen.m"
    else
#line 442 "par_conj_gen.m"
      {
#line 442 "par_conj_gen.m"
        {
#line 442 "par_conj_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_slots_to_child_stack\'/5", (MR_String) "cannot convert to string");
#line 442 "par_conj_gen.m"
          return;
        }
#line 442 "par_conj_gen.m"
      }
#line 2983 "ll_backend.par_conj_gen.c"
    {
#line 2985 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_39_39 = mercury__string__int_to_string_1_f_0(ll_backend__par_conj_gen__FrameSize_6);
    }
#line 2988 "ll_backend.par_conj_gen.c"
    {
#line 2990 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_39_39, (MR_String) ");\n");
    }
#line 2993 "ll_backend.par_conj_gen.c"
    {
#line 2995 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_40_40);
    }
#line 2998 "ll_backend.par_conj_gen.c"
    {
#line 3000 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_43_43 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__LCSVarName_14, ll_backend__par_conj_gen__V_42_42);
    }
#line 3003 "ll_backend.par_conj_gen.c"
    {
#line 3005 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_43_43);
    }
#line 3008 "ll_backend.par_conj_gen.c"
    {
#line 3010 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_46_46 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__LCVarName_13, ll_backend__par_conj_gen__V_45_45);
    }
#line 3013 "ll_backend.par_conj_gen.c"
    {
#line 3015 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__IncrLine_16 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_inc_worker_sp(", ll_backend__par_conj_gen__V_46_46);
    }
#line 448 "par_conj_gen.m"
    {
#line 448 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 448 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[0]));
#line 448 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 1) = ((MR_Box) (ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1));
#line 448 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 448 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 3) = ((MR_Box) (ll_backend__par_conj_gen__LCVarName_13));
#line 448 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 4) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarName_14));
#line 448 "par_conj_gen.m"
    }
#line 448 "par_conj_gen.m"
    {
#line 448 "par_conj_gen.m"
      mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__par_conj_gen__V_31_31, ll_backend__par_conj_gen__StackSlots_9, &ll_backend__par_conj_gen__CopyStrs_17);
    }
#line 450 "par_conj_gen.m"
    {
#line 450 "par_conj_gen.m"
      mercury__string__append_list_2_p_0(ll_backend__par_conj_gen__CopyStrs_17, &ll_backend__par_conj_gen__CopyLines_18);
    }
#line 452 "par_conj_gen.m"
    {
#line 452 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__CopyLines_18, (MR_String) "\t}\n");
    }
#line 452 "par_conj_gen.m"
    {
#line 452 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__IncrLine_16, ll_backend__par_conj_gen__V_33_33);
    }
#line 452 "par_conj_gen.m"
    {
#line 452 "par_conj_gen.m"
      *ll_backend__par_conj_gen__CodeStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", ll_backend__par_conj_gen__V_32_32);
    }
#line 434 "par_conj_gen.m"
  }
#line 430 "par_conj_gen.m"
}

#line 319 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
#line 319 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__SyncTermBaseSlot_4,
#line 319 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotLval_5)
#line 319 "par_conj_gen.m"
{
#line 323 "par_conj_gen.m"
  {
#line 323 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 323 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__HeadVar__3_3;
#line 323 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Components_6;
#line 323 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_17_17;
#line 323 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_20_20;
#line 323 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_21_21;
#line 323 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_22_22;
#line 323 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_24_24;
#line 323 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_31_31;
#line 323 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_32_32;

#line 326 "par_conj_gen.m"
    {
#line 326 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_22_22, 0) = ((MR_Box) (ll_backend__par_conj_gen__SyncTermBaseSlotLval_5));
#line 326 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "par_conj_gen.m"
    }
#line 326 "par_conj_gen.m"
    {
#line 326 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_21_21 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__V_22_22);
    }
#line 324 "par_conj_gen.m"
    {
#line 324 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 324 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_20_20, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_21_21));
#line 324 "par_conj_gen.m"
    }
#line 3119 "ll_backend.par_conj_gen.c"
    {
#line 3121 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_31_31 = mercury__string__int_to_string_1_f_0(ll_backend__par_conj_gen__SyncTermBaseSlot_4);
    }
#line 3124 "ll_backend.par_conj_gen.c"
    {
#line 3126 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_31_31, (MR_String) "));\n#endif\n");
    }
#line 3129 "ll_backend.par_conj_gen.c"
    {
#line 3131 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "#ifdef MR_THREADSCOPE\nMR_threadscope_post_end_par_conj(&MR_sv(", ll_backend__par_conj_gen__V_32_32);
    }
#line 327 "par_conj_gen.m"
    {
#line 327 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 327 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 1) = ((MR_Box) ((MR_Integer) 1));
#line 327 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 2) = ((MR_Box) ((MR_Integer) 1));
#line 327 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 3) = ((MR_Box) (ll_backend__par_conj_gen__V_20_20));
#line 327 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 4) = ((MR_Box) (ll_backend__par_conj_gen__V_24_24));
#line 327 "par_conj_gen.m"
    }
#line 324 "par_conj_gen.m"
    {
#line 324 "par_conj_gen.m"
      ll_backend__par_conj_gen__Components_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__Components_6, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_17_17));
#line 324 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__Components_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "par_conj_gen.m"
    }
#line 323 "par_conj_gen.m"
    {
#line 323 "par_conj_gen.m"
      ll_backend__par_conj_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__par_conj_gen__Components_6));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 1));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 9) = ((MR_Box) ((MR_Integer) 1));
#line 323 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 10) = ((MR_Box) ((MR_Integer) 0));
#line 323 "par_conj_gen.m"
    }
#line 323 "par_conj_gen.m"
    return ll_backend__par_conj_gen__HeadVar__3_3;
#line 323 "par_conj_gen.m"
  }
#line 319 "par_conj_gen.m"
}

#line 391 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_8(
#line 391 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 391 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 391 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 391 "par_conj_gen.m"
{
#line 391 "par_conj_gen.m"
  {
#line 391 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 391 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv3_HeadVar__3_3;

#line 391 "par_conj_gen.m"
    {
#line 391 "par_conj_gen.m"
      ll_backend__code_info__get_variable_slot_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv3_HeadVar__3_3);
    }
#line 391 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv3_HeadVar__3_3));
#line 391 "par_conj_gen.m"
  }
#line 391 "par_conj_gen.m"
}

#line 489 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_1(
#line 489 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 489 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 489 "par_conj_gen.m"
{
#line 489 "par_conj_gen.m"
  {
#line 489 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 489 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;

#line 489 "par_conj_gen.m"
    {
#line 489 "par_conj_gen.m"
      return ll_backend__par_conj_gen__succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 489 "par_conj_gen.m"
    return ll_backend__par_conj_gen__succeeded;
#line 489 "par_conj_gen.m"
  }
#line 489 "par_conj_gen.m"
}

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_2(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 490 "par_conj_gen.m"
{
#line 490 "par_conj_gen.m"
  {
#line 490 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 490 "par_conj_gen.m"
    MR_builtin_longjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_0, 1);
#line 490 "par_conj_gen.m"
  }
#line 490 "par_conj_gen.m"
}

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_3(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 490 "par_conj_gen.m"
{
#line 490 "par_conj_gen.m"
  {
#line 490 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 490 "par_conj_gen.m"
    (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_88 = ((MR_Word) (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv1_LocnPrime_88);
#line 490 "par_conj_gen.m"
    {
#line 490 "par_conj_gen.m"
      ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_2(ll_backend__par_conj_gen__env_ptr);
#line 490 "par_conj_gen.m"
      return;
    }
#line 490 "par_conj_gen.m"
  }
#line 490 "par_conj_gen.m"
}

#line 490 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_4(
#line 490 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 490 "par_conj_gen.m"
{
#line 490 "par_conj_gen.m"
  {
#line 490 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 490 "par_conj_gen.m"
    if (MR_builtin_setjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_0) == 0)
#line 490 "par_conj_gen.m"
      {
#line 490 "par_conj_gen.m"
        {
#line 490 "par_conj_gen.m"
          mercury__set__member_2_p_1((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93, &(ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv1_LocnPrime_88, (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__RegLocns_87, ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_3, ll_backend__par_conj_gen__env_ptr);
        }
#line 490 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_FALSE;
#line 490 "par_conj_gen.m"
      }
#line 490 "par_conj_gen.m"
    else
#line 490 "par_conj_gen.m"
      (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_TRUE;
#line 490 "par_conj_gen.m"
  }
#line 490 "par_conj_gen.m"
}

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_5(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 494 "par_conj_gen.m"
{
#line 494 "par_conj_gen.m"
  {
#line 494 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 494 "par_conj_gen.m"
    MR_builtin_longjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_1, 1);
#line 494 "par_conj_gen.m"
  }
#line 494 "par_conj_gen.m"
}

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_6(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 494 "par_conj_gen.m"
{
#line 494 "par_conj_gen.m"
  {
#line 494 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 494 "par_conj_gen.m"
    (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_78 = ((MR_Word) (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv2_LocnPrime_78);
#line 494 "par_conj_gen.m"
    {
#line 494 "par_conj_gen.m"
      ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_5(ll_backend__par_conj_gen__env_ptr);
#line 494 "par_conj_gen.m"
      return;
    }
#line 494 "par_conj_gen.m"
  }
#line 494 "par_conj_gen.m"
}

#line 494 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_7(
#line 494 "par_conj_gen.m"
  void * ll_backend__par_conj_gen__env_ptr_arg)
#line 494 "par_conj_gen.m"
{
#line 494 "par_conj_gen.m"
  {
#line 494 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s * ll_backend__par_conj_gen__env_ptr = (struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s *) ll_backend__par_conj_gen__env_ptr_arg;

#line 494 "par_conj_gen.m"
    if (MR_builtin_setjmp((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__commit_1) == 0)
#line 494 "par_conj_gen.m"
      {
#line 494 "par_conj_gen.m"
        {
#line 494 "par_conj_gen.m"
          mercury__set__member_2_p_1((ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93, &(ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__conv2_LocnPrime_78, (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__AllLocns_86, ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_6, ll_backend__par_conj_gen__env_ptr);
        }
#line 494 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_FALSE;
#line 494 "par_conj_gen.m"
      }
#line 494 "par_conj_gen.m"
    else
#line 494 "par_conj_gen.m"
      (ll_backend__par_conj_gen__env_ptr)->ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_TRUE;
#line 494 "par_conj_gen.m"
  }
#line 494 "par_conj_gen.m"
}

#line 103 "par_conj_gen.m"
void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0(
#line 103 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Goal_8,
#line 103 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVar_9,
#line 103 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVar_10,
#line 103 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__UseParentStack_11,
#line 103 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Code_12,
#line 103 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_43,
#line 103 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_44)
#line 103 "par_conj_gen.m"
{
#line 103 "par_conj_gen.m"
  {
#line 103 "par_conj_gen.m"
    struct ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0_s ll_backend__par_conj_gen__env;

#line 335 "par_conj_gen.m"
    {
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__TypeCtorInfo_69_69;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__TypeCtorInfo_70_70;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__KnownVars_14;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__KnownVarsSet_15;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__NonLocalsSet_16;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__InputVarsSet_17;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__InputVars_18;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SaveCode_19;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LCVarLocn_20;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LCSVarLocn_21;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnOffLabel_22;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnUinstr_23;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnInstr_24;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnOffCode_25;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__PositionAfterSpawnOff_26;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LabelUinstr_27;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LabelInstr_28;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__LabelCode_29;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__GoalCode_30;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnedOffCode0_31;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__SpawnedOffCode_32;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__CopyCode_33;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_45_45;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_48_48;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_49_49;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_52_52;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_54_54;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_57_57;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_65_65;
#line 335 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_67_67;
#line 343 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_68_68;
#line 486 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__Map_85;
#line 486 "par_conj_gen.m"
      MR_Word ll_backend__par_conj_gen__V_89_89;
#line 488 "par_conj_gen.m"
      MR_Box ll_backend__par_conj_gen__conv0_AllLocns_86;

#line 341 "par_conj_gen.m"
      {
#line 341 "par_conj_gen.m"
        ll_backend__code_info__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_43, &ll_backend__par_conj_gen__KnownVars_14);
      }
#line 3519 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 342 "par_conj_gen.m"
      {
#line 342 "par_conj_gen.m"
        ll_backend__par_conj_gen__KnownVarsSet_15 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__KnownVars_14);
      }
#line 343 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__Goal_8, (MR_Integer) 0)));
#line 343 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__Goal_8, (MR_Integer) 1)));
#line 343 "par_conj_gen.m"
      {
#line 343 "par_conj_gen.m"
        ll_backend__par_conj_gen__NonLocalsSet_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__par_conj_gen__V_45_45);
      }
#line 344 "par_conj_gen.m"
      {
#line 344 "par_conj_gen.m"
        ll_backend__par_conj_gen__InputVarsSet_17 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__NonLocalsSet_16, ll_backend__par_conj_gen__KnownVarsSet_15);
      }
#line 345 "par_conj_gen.m"
      {
#line 345 "par_conj_gen.m"
        ll_backend__par_conj_gen__InputVars_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__InputVarsSet_17);
      }
#line 346 "par_conj_gen.m"
      {
#line 346 "par_conj_gen.m"
        ll_backend__code_info__save_variables_on_stack_4_p_0(ll_backend__par_conj_gen__InputVars_18, &ll_backend__par_conj_gen__SaveCode_19, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_43, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46);
      }
#line 487 "par_conj_gen.m"
      {
#line 487 "par_conj_gen.m"
        ll_backend__code_info__variable_locations_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46, &ll_backend__par_conj_gen__Map_85);
      }
#line 488 "par_conj_gen.m"
      {
#line 488 "par_conj_gen.m"
        (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__Map_85, ((MR_Box) (ll_backend__par_conj_gen__LCVar_9)), &ll_backend__par_conj_gen__conv0_AllLocns_86);
      }
#line 488 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded)
#line 488 "par_conj_gen.m"
        {
#line 488 "par_conj_gen.m"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__AllLocns_86 = ((MR_Word) ll_backend__par_conj_gen__conv0_AllLocns_86);
#line 488 "par_conj_gen.m"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_TRUE;
#line 488 "par_conj_gen.m"
        }
#line 486 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded)
#line 486 "par_conj_gen.m"
        {
#line 489 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_89_89 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[1];
#line 3576 "ll_backend.par_conj_gen.c"
          (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 489 "par_conj_gen.m"
          {
#line 489 "par_conj_gen.m"
            mercury__set__filter_3_p_0((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__TypeCtorInfo_15_93, ll_backend__par_conj_gen__V_89_89, (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__AllLocns_86, &(ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__RegLocns_87);
          }
#line 490 "par_conj_gen.m"
          {
#line 490 "par_conj_gen.m"
            ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_4(&ll_backend__par_conj_gen__env);
          }
#line 493 "par_conj_gen.m"
          if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded)
#line 492 "par_conj_gen.m"
            {
#line 492 "par_conj_gen.m"
              (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_78 = (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_88;
#line 492 "par_conj_gen.m"
              (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded = MR_TRUE;
#line 492 "par_conj_gen.m"
            }
#line 493 "par_conj_gen.m"
          else
#line 494 "par_conj_gen.m"
            {
#line 494 "par_conj_gen.m"
              {
#line 494 "par_conj_gen.m"
                ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_7(&ll_backend__par_conj_gen__env);
              }
#line 494 "par_conj_gen.m"
            }
#line 486 "par_conj_gen.m"
        }
#line 478 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__succeeded)
#line 477 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCVarLocn_20 = (ll_backend__par_conj_gen__env).ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_env_0__LocnPrime_78;
#line 478 "par_conj_gen.m"
      else
#line 479 "par_conj_gen.m"
        {
#line 479 "par_conj_gen.m"
          {
#line 479 "par_conj_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
#line 479 "par_conj_gen.m"
            return;
          }
#line 479 "par_conj_gen.m"
        }
#line 349 "par_conj_gen.m"
      {
#line 349 "par_conj_gen.m"
        ll_backend__par_conj_gen__best_variable_location_det_3_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46, ll_backend__par_conj_gen__LCSVar_10, &ll_backend__par_conj_gen__LCSVarLocn_21);
      }
#line 351 "par_conj_gen.m"
      {
#line 351 "par_conj_gen.m"
        ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__SpawnOffLabel_22, ll_backend__par_conj_gen__STATE_VARIABLE_CI_46_46, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47);
      }
#line 352 "par_conj_gen.m"
      {
#line 352 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 352 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_48_48, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_20));
#line 352 "par_conj_gen.m"
      }
#line 352 "par_conj_gen.m"
      {
#line 352 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 352 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_49_49, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_21));
#line 352 "par_conj_gen.m"
      }
#line 352 "par_conj_gen.m"
      {
#line 352 "par_conj_gen.m"
        ll_backend__par_conj_gen__SpawnUinstr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 352 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 352 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_23, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_48_48));
#line 352 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_23, 2) = ((MR_Box) (ll_backend__par_conj_gen__V_49_49));
#line 352 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_23, 3) = ((MR_Box) (ll_backend__par_conj_gen__SpawnOffLabel_22));
#line 352 "par_conj_gen.m"
      }
#line 354 "par_conj_gen.m"
      {
#line 354 "par_conj_gen.m"
        ll_backend__par_conj_gen__SpawnInstr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__SpawnInstr_24, 0) = ((MR_Box) (ll_backend__par_conj_gen__SpawnUinstr_23));
#line 354 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__SpawnInstr_24, 1) = ((MR_Box) ((MR_String) ""));
#line 354 "par_conj_gen.m"
      }
#line 3678 "ll_backend.par_conj_gen.c"
      ll_backend__par_conj_gen__TypeCtorInfo_70_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 355 "par_conj_gen.m"
      {
#line 355 "par_conj_gen.m"
        ll_backend__par_conj_gen__SpawnOffCode_25 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ((MR_Box) (ll_backend__par_conj_gen__SpawnInstr_24)));
      }
#line 356 "par_conj_gen.m"
      {
#line 356 "par_conj_gen.m"
        ll_backend__code_info__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47, &ll_backend__par_conj_gen__PositionAfterSpawnOff_26);
      }
#line 359 "par_conj_gen.m"
      {
#line 359 "par_conj_gen.m"
        ll_backend__par_conj_gen__LabelUinstr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LabelUinstr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 359 "par_conj_gen.m"
        MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LabelUinstr_27, 1) = ((MR_Box) (ll_backend__par_conj_gen__SpawnOffLabel_22));
#line 359 "par_conj_gen.m"
      }
#line 360 "par_conj_gen.m"
      {
#line 360 "par_conj_gen.m"
        ll_backend__par_conj_gen__LabelInstr_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__LabelInstr_28, 0) = ((MR_Box) (ll_backend__par_conj_gen__LabelUinstr_27));
#line 360 "par_conj_gen.m"
        MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__LabelInstr_28, 1) = ((MR_Box) ((MR_String) "Label for spawned off code"));
#line 360 "par_conj_gen.m"
      }
#line 361 "par_conj_gen.m"
      {
#line 361 "par_conj_gen.m"
        ll_backend__par_conj_gen__LabelCode_29 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ((MR_Box) (ll_backend__par_conj_gen__LabelInstr_28)));
      }
#line 366 "par_conj_gen.m"
      {
#line 366 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "par_conj_gen.m"
        MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_54_54, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_21));
#line 366 "par_conj_gen.m"
        MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "par_conj_gen.m"
      }
#line 366 "par_conj_gen.m"
      {
#line 366 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "par_conj_gen.m"
        MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_52_52, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_20));
#line 366 "par_conj_gen.m"
        MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_52_52, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_54_54));
#line 366 "par_conj_gen.m"
      }
#line 366 "par_conj_gen.m"
      {
#line 366 "par_conj_gen.m"
        ll_backend__code_info__clobber_regs_3_p_0(ll_backend__par_conj_gen__V_52_52, ll_backend__par_conj_gen__STATE_VARIABLE_CI_47_47, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53);
      }
#line 368 "par_conj_gen.m"
      {
#line 368 "par_conj_gen.m"
        ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__par_conj_gen__Goal_8, &ll_backend__par_conj_gen__GoalCode_30, ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_57_57);
      }
#line 370 "par_conj_gen.m"
      {
#line 370 "par_conj_gen.m"
        ll_backend__par_conj_gen__SpawnedOffCode0_31 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ll_backend__par_conj_gen__LabelCode_29, ll_backend__par_conj_gen__GoalCode_30);
      }
#line 372 "par_conj_gen.m"
      {
#line 372 "par_conj_gen.m"
        ll_backend__code_info__reset_to_position_3_p_0(ll_backend__par_conj_gen__PositionAfterSpawnOff_26, ll_backend__par_conj_gen__STATE_VARIABLE_CI_57_57, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58);
      }
#line 389 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__UseParentStack_11 == (MR_Integer) 1))
#line 390 "par_conj_gen.m"
        {
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__TypeCtorInfo_74_74;
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__InputStackSlots_35;
#line 390 "par_conj_gen.m"
          MR_Integer ll_backend__par_conj_gen__FrameSize_37;
#line 390 "par_conj_gen.m"
          MR_String ll_backend__par_conj_gen__CopyStr_38;
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__LiveLvalsInfo_40;
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__CopyUinstr_41;
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__CopyInstr_42;
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_59_59;
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_60_60;
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_61_61;
#line 390 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_62_62;

#line 391 "par_conj_gen.m"
          {
#line 391 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 391 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[0]));
#line 391 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 1) = ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0_8));
#line 391 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 3) = ((MR_Box) (ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58));
#line 391 "par_conj_gen.m"
          }
#line 3796 "ll_backend.par_conj_gen.c"
          ll_backend__par_conj_gen__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 391 "par_conj_gen.m"
          {
#line 391 "par_conj_gen.m"
            mercury__list__map_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], ll_backend__par_conj_gen__TypeCtorInfo_74_74, ll_backend__par_conj_gen__V_59_59, ll_backend__par_conj_gen__InputVars_18, &ll_backend__par_conj_gen__InputStackSlots_35);
          }
#line 395 "par_conj_gen.m"
          {
#line 395 "par_conj_gen.m"
            ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(ll_backend__par_conj_gen__SpawnedOffCode0_31, &ll_backend__par_conj_gen__FrameSize_37);
          }
#line 396 "par_conj_gen.m"
          ll_backend__par_conj_gen__SpawnedOffCode_32 = ll_backend__par_conj_gen__SpawnedOffCode0_31;
#line 413 "par_conj_gen.m"
          {
#line 413 "par_conj_gen.m"
            ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(ll_backend__par_conj_gen__FrameSize_37, ll_backend__par_conj_gen__LCVarLocn_20, ll_backend__par_conj_gen__LCSVarLocn_21, ll_backend__par_conj_gen__InputStackSlots_35, &ll_backend__par_conj_gen__CopyStr_38);
          }
#line 417 "par_conj_gen.m"
          {
#line 417 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_62_62, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_21));
#line 417 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_62_62, 1) = ((MR_Box) (ll_backend__par_conj_gen__InputStackSlots_35));
#line 417 "par_conj_gen.m"
          }
#line 417 "par_conj_gen.m"
          {
#line 417 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_61_61, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_20));
#line 417 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_61_61, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_62_62));
#line 417 "par_conj_gen.m"
          }
#line 416 "par_conj_gen.m"
          {
#line 416 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_60_60 = mercury__set__list_to_set_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_74_74, ll_backend__par_conj_gen__V_61_61);
          }
#line 416 "par_conj_gen.m"
          {
#line 416 "par_conj_gen.m"
            ll_backend__par_conj_gen__LiveLvalsInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__LiveLvalsInfo_40, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
#line 416 "par_conj_gen.m"
          }
#line 418 "par_conj_gen.m"
          {
#line 418 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyUinstr_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 418 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 418 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_41, 1) = ((MR_Box) ((MR_Integer) 1));
#line 418 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_41, 2) = ((MR_Box) (ll_backend__par_conj_gen__LiveLvalsInfo_40));
#line 418 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_41, 3) = ((MR_Box) (ll_backend__par_conj_gen__CopyStr_38));
#line 418 "par_conj_gen.m"
          }
#line 420 "par_conj_gen.m"
          {
#line 420 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyInstr_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 420 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__CopyInstr_42, 0) = ((MR_Box) (ll_backend__par_conj_gen__CopyUinstr_41));
#line 420 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__CopyInstr_42, 1) = ((MR_Box) ((MR_String) ""));
#line 420 "par_conj_gen.m"
          }
#line 421 "par_conj_gen.m"
          {
#line 421 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyCode_33 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ((MR_Box) (ll_backend__par_conj_gen__CopyInstr_42)));
          }
#line 421 "par_conj_gen.m"
          ll_backend__par_conj_gen__STATE_VARIABLE_CI_65_65 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58;
#line 390 "par_conj_gen.m"
        }
#line 389 "par_conj_gen.m"
      else
#line 375 "par_conj_gen.m"
        {
#line 375 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__OutputVars_34;
#line 375 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_64_64;

#line 376 "par_conj_gen.m"
          {
#line 376 "par_conj_gen.m"
            ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(ll_backend__par_conj_gen__SpawnedOffCode0_31, &ll_backend__par_conj_gen__SpawnedOffCode_32);
          }
#line 377 "par_conj_gen.m"
          {
#line 377 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyCode_33 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70);
          }
#line 387 "par_conj_gen.m"
          {
#line 387 "par_conj_gen.m"
            ll_backend__par_conj_gen__OutputVars_34 = parse_tree__set_of_var__difference_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__NonLocalsSet_16, ll_backend__par_conj_gen__KnownVarsSet_15);
          }
#line 388 "par_conj_gen.m"
          {
#line 388 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_64_64 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_69_69, ll_backend__par_conj_gen__OutputVars_34);
          }
#line 388 "par_conj_gen.m"
          {
#line 388 "par_conj_gen.m"
            ll_backend__par_conj_gen__place_all_outputs_3_p_0(ll_backend__par_conj_gen__V_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CI_58_58, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_65_65);
          }
#line 375 "par_conj_gen.m"
        }
#line 425 "par_conj_gen.m"
      {
#line 425 "par_conj_gen.m"
        ll_backend__code_info__add_out_of_line_code_3_p_0(ll_backend__par_conj_gen__SpawnedOffCode_32, ll_backend__par_conj_gen__STATE_VARIABLE_CI_65_65, ll_backend__par_conj_gen__STATE_VARIABLE_CI_44);
      }
#line 428 "par_conj_gen.m"
      {
#line 428 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_67_67 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ll_backend__par_conj_gen__CopyCode_33, ll_backend__par_conj_gen__SpawnOffCode_25);
      }
#line 428 "par_conj_gen.m"
      {
#line 428 "par_conj_gen.m"
        *ll_backend__par_conj_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_70_70, ll_backend__par_conj_gen__SaveCode_19, ll_backend__par_conj_gen__V_67_67);
      }
#line 335 "par_conj_gen.m"
    }
#line 103 "par_conj_gen.m"
  }
#line 103 "par_conj_gen.m"
}

#line 100 "par_conj_gen.m"
void MR_CALL 
ll_backend__par_conj_gen__generate_par_conj_6_p_0(
#line 100 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Goals_7,
#line 100 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__GoalInfo_8,
#line 100 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CodeModel_9,
#line 100 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Code_10,
#line 100 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45,
#line 100 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_46)
#line 100 "par_conj_gen.m"
{
#line 146 "par_conj_gen.m"
  {
#line 146 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_124_124;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Globals_12;
#line 146 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__STSize_13;
#line 146 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__Depth_14;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MaybeSetParentSpCode_16;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MaybeRestoreParentSpCode_17;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SaveCode_20;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Nonlocals_21;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Variables_22;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Initial_23;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Delta_24;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Final_25;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__ModuleInfo_26;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Outputs_27;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Contents_28;
#line 146 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__SlotNum_35;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SyncTermBaseSlot_36;
#line 146 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__NumGoals_38;
#line 146 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__StaticConjId_39;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MakeSyncTermCode_40;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__EndLabel_41;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__GoalCode_42;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__EndLabelCode_43;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_86_86;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_87_87;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_95_95;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_98_98;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_99_99;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_100_100;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_102_102;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_103_103;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_104_104;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_107_107;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_108_108;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_109_109;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_110_110;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114;
#line 146 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_116_116;

#line 149 "par_conj_gen.m"
    if ((ll_backend__par_conj_gen__CodeModel_9 == (MR_Integer) 0))
#line 148 "par_conj_gen.m"
      {
#line 148 "par_conj_gen.m"
      }
#line 149 "par_conj_gen.m"
    else
#line 149 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__CodeModel_9 == (MR_Integer) 2))
#line 153 "par_conj_gen.m"
        {
#line 154 "par_conj_gen.m"
          {
#line 154 "par_conj_gen.m"
            mercury__require__sorry_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/6", (MR_String) "nondet parallel conjunction not implemented");
#line 154 "par_conj_gen.m"
            return;
          }
#line 153 "par_conj_gen.m"
        }
#line 149 "par_conj_gen.m"
      else
#line 150 "par_conj_gen.m"
        {
#line 151 "par_conj_gen.m"
          {
#line 151 "par_conj_gen.m"
            mercury__require__sorry_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/6", (MR_String) "semidet parallel conjunction not implemented");
#line 151 "par_conj_gen.m"
            return;
          }
#line 150 "par_conj_gen.m"
        }
#line 157 "par_conj_gen.m"
    {
#line 157 "par_conj_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__Globals_12);
    }
#line 158 "par_conj_gen.m"
    {
#line 158 "par_conj_gen.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__par_conj_gen__Globals_12, (MR_Integer) 244, &ll_backend__par_conj_gen__STSize_13);
    }
#line 164 "par_conj_gen.m"
    {
#line 164 "par_conj_gen.m"
      ll_backend__code_info__get_par_conj_depth_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__Depth_14);
    }
#line 188 "par_conj_gen.m"
    {
#line 188 "par_conj_gen.m"
      ll_backend__par_conj_gen__Nonlocals_21 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__par_conj_gen__GoalInfo_8);
    }
#line 189 "par_conj_gen.m"
    {
#line 189 "par_conj_gen.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__par_conj_gen__Nonlocals_21, &ll_backend__par_conj_gen__Variables_22);
    }
#line 191 "par_conj_gen.m"
    {
#line 191 "par_conj_gen.m"
      ll_backend__par_conj_gen__Delta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__par_conj_gen__GoalInfo_8);
    }
#line 197 "par_conj_gen.m"
    {
#line 197 "par_conj_gen.m"
      ll_backend__par_conj_gen__Contents_28 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__par_conj_gen__STSize_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))));
    }
#line 213 "par_conj_gen.m"
    {
#line 213 "par_conj_gen.m"
      ll_backend__par_conj_gen__NumGoals_38 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__par_conj_gen__Goals_7);
    }
#line 4113 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_124_124 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 223 "par_conj_gen.m"
    ll_backend__par_conj_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 165 "par_conj_gen.m"
    ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__Depth_14 == (MR_Integer) 0);
#line 4119 "ll_backend.par_conj_gen.c"
    if (ll_backend__par_conj_gen__succeeded)
#line 4121 "ll_backend.par_conj_gen.c"
      {
#line 4123 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_118_118;
#line 4125 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__Vars_19;
#line 4127 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__SyncTermSlots_29;
#line 4129 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__StackId_30;
#line 4131 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37;
#line 4133 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSpSlot1_44;
#line 4135 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_56_56;
#line 4137 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_58_58;
#line 4139 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_59_59;
#line 4141 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_60_60;
#line 4143 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_72_72;
#line 4145 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_73_73;
#line 4147 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_75_75;
#line 4149 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_81;
#line 4151 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_85;
#line 4153 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90;
#line 4155 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_92;
#line 4157 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_94;
#line 4159 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_96;
#line 4161 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_97;
#line 4163 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_112_112;
#line 198 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___N_31;
#line 198 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___M_32;
#line 209 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33;
#line 209 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__SlotNumPrime_34;
#line 202 "par_conj_gen.m"
        MR_Box ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_33;

#line 166 "par_conj_gen.m"
        {
#line 166 "par_conj_gen.m"
          ll_backend__code_info__acquire_temp_slot_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_2[1]), (MR_Integer) 1, &ll_backend__par_conj_gen__ParentSpSlot1_44, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_56_56);
        }
#line 4181 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_118_118 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 169 "par_conj_gen.m"
        {
#line 169 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 169 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_60_60, 1) = ((MR_Box) (ll_backend__par_conj_gen__ParentSpSlot1_44));
#line 169 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_60_60, 2) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_2[1]));
#line 169 "par_conj_gen.m"
        }
#line 170 "par_conj_gen.m"
        {
#line 170 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
#line 170 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_59_59, 1) = ((MR_Box) ((MR_String) "save the old parent stack pointer"));
#line 170 "par_conj_gen.m"
        }
#line 168 "par_conj_gen.m"
        {
#line 168 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "par_conj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_58_58, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_59_59));
#line 168 "par_conj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_1[4])));
#line 168 "par_conj_gen.m"
        }
#line 168 "par_conj_gen.m"
        {
#line 168 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeSetParentSpCode_16 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_118_118, ll_backend__par_conj_gen__V_58_58);
        }
#line 175 "par_conj_gen.m"
        {
#line 175 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 175 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_75_75, 0) = ((MR_Box) (ll_backend__par_conj_gen__ParentSpSlot1_44));
#line 175 "par_conj_gen.m"
        }
#line 175 "par_conj_gen.m"
        {
#line 175 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 175 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 175 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 175 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_73_73, 2) = ((MR_Box) (ll_backend__par_conj_gen__V_75_75));
#line 175 "par_conj_gen.m"
        }
#line 174 "par_conj_gen.m"
        {
#line 174 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_72_72, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_73_73));
#line 174 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_72_72, 1) = ((MR_Box) ((MR_String) "restore old parent stack pointer"));
#line 174 "par_conj_gen.m"
        }
#line 174 "par_conj_gen.m"
        {
#line 174 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeRestoreParentSpCode_17 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_118_118, ((MR_Box) (ll_backend__par_conj_gen__V_72_72)));
        }
#line 185 "par_conj_gen.m"
        {
#line 185 "par_conj_gen.m"
          ll_backend__code_info__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_56_56, &ll_backend__par_conj_gen__Vars_19);
        }
#line 186 "par_conj_gen.m"
        {
#line 186 "par_conj_gen.m"
          ll_backend__code_info__save_variables_on_stack_4_p_0(ll_backend__par_conj_gen__Vars_19, &ll_backend__par_conj_gen__SaveCode_20, ll_backend__par_conj_gen__STATE_VARIABLE_CI_56_56, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77);
        }
#line 190 "par_conj_gen.m"
        {
#line 190 "par_conj_gen.m"
          ll_backend__code_info__get_instmap_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__Initial_23);
        }
#line 198 "par_conj_gen.m"
        {
#line 198 "par_conj_gen.m"
          ll_backend__code_info__acquire_several_temp_slots_8_p_0(ll_backend__par_conj_gen__Contents_28, (MR_Integer) 0, &ll_backend__par_conj_gen__SyncTermSlots_29, &ll_backend__par_conj_gen__StackId_30, &ll_backend__par_conj_gen___N_31, &ll_backend__par_conj_gen___M_32, ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_81);
        }
#line 202 "par_conj_gen.m"
        {
#line 202 "par_conj_gen.m"
          ll_backend__par_conj_gen__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__SyncTermSlots_29, &ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_33);
        }
#line 202 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 202 "par_conj_gen.m"
          {
#line 202 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33 = ((MR_Word) ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_33);
#line 202 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 202 "par_conj_gen.m"
          }
#line 202 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 202 "par_conj_gen.m"
          {
#line 204 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__StackId_30 == (MR_Integer) 0);
#line 202 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 202 "par_conj_gen.m"
              {
#line 203 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 203 "par_conj_gen.m"
                if (ll_backend__par_conj_gen__succeeded)
#line 203 "par_conj_gen.m"
                  ll_backend__par_conj_gen__SlotNumPrime_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33, (MR_Integer) 1)));
#line 202 "par_conj_gen.m"
              }
#line 202 "par_conj_gen.m"
          }
#line 209 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 206 "par_conj_gen.m"
          {
#line 206 "par_conj_gen.m"
            ll_backend__par_conj_gen__SlotNum_35 = ll_backend__par_conj_gen__SlotNumPrime_34;
#line 207 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlot_36 = ll_backend__par_conj_gen__SyncTermBaseSlotPrime_33;
#line 208 "par_conj_gen.m"
            {
#line 208 "par_conj_gen.m"
              ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 208 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_35));
#line 208 "par_conj_gen.m"
            }
#line 206 "par_conj_gen.m"
          }
#line 209 "par_conj_gen.m"
        else
#line 210 "par_conj_gen.m"
          {
#line 210 "par_conj_gen.m"
            {
#line 210 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/6", (MR_String) "cannot find stack slot");
#line 210 "par_conj_gen.m"
              return;
            }
#line 210 "par_conj_gen.m"
          }
#line 214 "par_conj_gen.m"
        {
#line 214 "par_conj_gen.m"
          ll_backend__par_conj_gen__create_static_conj_id_4_p_0(ll_backend__par_conj_gen__GoalInfo_8, &ll_backend__par_conj_gen__StaticConjId_39, ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_81, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_85);
        }
#line 220 "par_conj_gen.m"
        {
#line 220 "par_conj_gen.m"
          ll_backend__code_info__set_par_conj_depth_3_p_0((MR_Integer) 1, ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_85, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90);
        }
#line 221 "par_conj_gen.m"
        {
#line 221 "par_conj_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__EndLabel_41, ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_92);
        }
#line 222 "par_conj_gen.m"
        {
#line 222 "par_conj_gen.m"
          ll_backend__code_info__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_92, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_94);
        }
#line 223 "par_conj_gen.m"
        {
#line 223 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(ll_backend__par_conj_gen__Goals_7, ll_backend__par_conj_gen__ParentSyncTermBaseSlot_37, ll_backend__par_conj_gen__EndLabel_41, ll_backend__par_conj_gen__V_95_95, &ll_backend__par_conj_gen__GoalCode_42, ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_94, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_96);
        }
#line 225 "par_conj_gen.m"
        {
#line 225 "par_conj_gen.m"
          ll_backend__code_info__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__Depth_14, ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_96, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_97);
        }
#line 259 "par_conj_gen.m"
        {
#line 259 "par_conj_gen.m"
          ll_backend__code_info__release_several_temp_slots_4_p_0(ll_backend__par_conj_gen__SyncTermSlots_29, (MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_97, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_112_112);
        }
#line 265 "par_conj_gen.m"
        {
#line 265 "par_conj_gen.m"
          ll_backend__code_info__release_temp_slot_4_p_0(ll_backend__par_conj_gen__ParentSpSlot1_44, (MR_Integer) 1, ll_backend__par_conj_gen__STATE_VARIABLE_CI_112_112, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114);
        }
#line 4383 "ll_backend.par_conj_gen.c"
      }
#line 4385 "ll_backend.par_conj_gen.c"
    else
#line 4387 "ll_backend.par_conj_gen.c"
      {
#line 4389 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 4391 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__Vars_141;
#line 4393 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__SyncTermSlots_142;
#line 4395 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__StackId_143;
#line 4397 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148;
#line 4399 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_150;
#line 4401 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_154;
#line 4403 "ll_backend.par_conj_gen.c"
        MR_Integer ll_backend__par_conj_gen__V_155_155;
#line 4405 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_156;
#line 4407 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_157;
#line 4409 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_158;
#line 4411 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_159;
#line 4413 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_160;
#line 198 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___N_126;
#line 198 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___M_127;
#line 209 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132;
#line 209 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__SlotNumPrime_133;
#line 202 "par_conj_gen.m"
        MR_Box ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_132;

#line 180 "par_conj_gen.m"
        {
#line 180 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeSetParentSpCode_16 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_119_119);
        }
#line 181 "par_conj_gen.m"
        {
#line 181 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeRestoreParentSpCode_17 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_119_119);
        }
#line 185 "par_conj_gen.m"
        {
#line 185 "par_conj_gen.m"
          ll_backend__code_info__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__Vars_141);
        }
#line 186 "par_conj_gen.m"
        {
#line 186 "par_conj_gen.m"
          ll_backend__code_info__save_variables_on_stack_4_p_0(ll_backend__par_conj_gen__Vars_141, &ll_backend__par_conj_gen__SaveCode_20, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_45, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77);
        }
#line 190 "par_conj_gen.m"
        {
#line 190 "par_conj_gen.m"
          ll_backend__code_info__get_instmap_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__Initial_23);
        }
#line 198 "par_conj_gen.m"
        {
#line 198 "par_conj_gen.m"
          ll_backend__code_info__acquire_several_temp_slots_8_p_0(ll_backend__par_conj_gen__Contents_28, (MR_Integer) 0, &ll_backend__par_conj_gen__SyncTermSlots_142, &ll_backend__par_conj_gen__StackId_143, &ll_backend__par_conj_gen___N_126, &ll_backend__par_conj_gen___M_127, ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_150);
        }
#line 202 "par_conj_gen.m"
        {
#line 202 "par_conj_gen.m"
          ll_backend__par_conj_gen__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__SyncTermSlots_142, &ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_132);
        }
#line 202 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 202 "par_conj_gen.m"
          {
#line 202 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132 = ((MR_Word) ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_132);
#line 202 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 202 "par_conj_gen.m"
          }
#line 202 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 202 "par_conj_gen.m"
          {
#line 204 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__StackId_143 == (MR_Integer) 0);
#line 202 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 202 "par_conj_gen.m"
              {
#line 203 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 203 "par_conj_gen.m"
                if (ll_backend__par_conj_gen__succeeded)
#line 203 "par_conj_gen.m"
                  ll_backend__par_conj_gen__SlotNumPrime_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132, (MR_Integer) 1)));
#line 202 "par_conj_gen.m"
              }
#line 202 "par_conj_gen.m"
          }
#line 209 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 206 "par_conj_gen.m"
          {
#line 206 "par_conj_gen.m"
            ll_backend__par_conj_gen__SlotNum_35 = ll_backend__par_conj_gen__SlotNumPrime_133;
#line 207 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlot_36 = ll_backend__par_conj_gen__SyncTermBaseSlotPrime_132;
#line 208 "par_conj_gen.m"
            {
#line 208 "par_conj_gen.m"
              ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 208 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_35));
#line 208 "par_conj_gen.m"
            }
#line 206 "par_conj_gen.m"
          }
#line 209 "par_conj_gen.m"
        else
#line 210 "par_conj_gen.m"
          {
#line 210 "par_conj_gen.m"
            {
#line 210 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/6", (MR_String) "cannot find stack slot");
#line 210 "par_conj_gen.m"
              return;
            }
#line 210 "par_conj_gen.m"
          }
#line 214 "par_conj_gen.m"
        {
#line 214 "par_conj_gen.m"
          ll_backend__par_conj_gen__create_static_conj_id_4_p_0(ll_backend__par_conj_gen__GoalInfo_8, &ll_backend__par_conj_gen__StaticConjId_39, ll_backend__par_conj_gen__STATE_VARIABLE_CI_81_150, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_154);
        }
#line 220 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_155_155 = (ll_backend__par_conj_gen__Depth_14 + (MR_Integer) 1);
#line 220 "par_conj_gen.m"
        {
#line 220 "par_conj_gen.m"
          ll_backend__code_info__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__V_155_155, ll_backend__par_conj_gen__STATE_VARIABLE_CI_85_154, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_156);
        }
#line 221 "par_conj_gen.m"
        {
#line 221 "par_conj_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__EndLabel_41, ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_156, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_157);
        }
#line 222 "par_conj_gen.m"
        {
#line 222 "par_conj_gen.m"
          ll_backend__code_info__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_92_157, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_158);
        }
#line 223 "par_conj_gen.m"
        {
#line 223 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(ll_backend__par_conj_gen__Goals_7, ll_backend__par_conj_gen__ParentSyncTermBaseSlot_148, ll_backend__par_conj_gen__EndLabel_41, ll_backend__par_conj_gen__V_95_95, &ll_backend__par_conj_gen__GoalCode_42, ll_backend__par_conj_gen__STATE_VARIABLE_CI_94_158, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_159);
        }
#line 225 "par_conj_gen.m"
        {
#line 225 "par_conj_gen.m"
          ll_backend__code_info__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__Depth_14, ll_backend__par_conj_gen__STATE_VARIABLE_CI_96_159, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_160);
        }
#line 258 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__Depth_14 == (MR_Integer) 0);
#line 260 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 259 "par_conj_gen.m"
          {
#line 259 "par_conj_gen.m"
            {
#line 259 "par_conj_gen.m"
              ll_backend__code_info__release_several_temp_slots_4_p_0(ll_backend__par_conj_gen__SyncTermSlots_142, (MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_160, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114);
            }
#line 259 "par_conj_gen.m"
          }
#line 260 "par_conj_gen.m"
        else
#line 259 "par_conj_gen.m"
          ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_97_160;
#line 4573 "ll_backend.par_conj_gen.c"
      }
#line 192 "par_conj_gen.m"
    {
#line 192 "par_conj_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__par_conj_gen__Initial_23, ll_backend__par_conj_gen__Delta_24, &ll_backend__par_conj_gen__Final_25);
    }
#line 193 "par_conj_gen.m"
    {
#line 193 "par_conj_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_77_77, &ll_backend__par_conj_gen__ModuleInfo_26);
    }
#line 194 "par_conj_gen.m"
    {
#line 194 "par_conj_gen.m"
      ll_backend__par_conj_gen__find_outputs_6_p_0(ll_backend__par_conj_gen__Variables_22, ll_backend__par_conj_gen__Initial_23, ll_backend__par_conj_gen__Final_25, ll_backend__par_conj_gen__ModuleInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__par_conj_gen__Outputs_27);
    }
#line 216 "par_conj_gen.m"
    {
#line 216 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 216 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 216 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_87_87, 1) = ((MR_Box) (ll_backend__par_conj_gen__SyncTermBaseSlot_36));
#line 216 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_87_87, 2) = ((MR_Box) (ll_backend__par_conj_gen__NumGoals_38));
#line 216 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_87_87, 3) = ((MR_Box) (ll_backend__par_conj_gen__StaticConjId_39));
#line 216 "par_conj_gen.m"
    }
#line 215 "par_conj_gen.m"
    {
#line 215 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_86_86, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_87_87));
#line 215 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_86_86, 1) = ((MR_Box) ((MR_String) "initialize sync term"));
#line 215 "par_conj_gen.m"
    }
#line 215 "par_conj_gen.m"
    {
#line 215 "par_conj_gen.m"
      ll_backend__par_conj_gen__MakeSyncTermCode_40 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ((MR_Box) (ll_backend__par_conj_gen__V_86_86)));
    }
#line 228 "par_conj_gen.m"
    {
#line 228 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_100_100, 1) = ((MR_Box) (ll_backend__par_conj_gen__EndLabel_41));
#line 228 "par_conj_gen.m"
    }
#line 228 "par_conj_gen.m"
    {
#line 228 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_99_99, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_100_100));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_99_99, 1) = ((MR_Box) ((MR_String) "end of parallel conjunction"));
#line 228 "par_conj_gen.m"
    }
#line 229 "par_conj_gen.m"
    {
#line 229 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_104_104 = ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(ll_backend__par_conj_gen__SlotNum_35, ll_backend__par_conj_gen__SyncTermBaseSlot_36);
    }
#line 231 "par_conj_gen.m"
    {
#line 231 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 231 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_103_103, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_104_104));
#line 231 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_103_103, 1) = ((MR_Box) ((MR_String) "finish parallel conjunction (ThreadScope instrumentation"));
#line 231 "par_conj_gen.m"
    }
#line 228 "par_conj_gen.m"
    {
#line 228 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_102_102, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_103_103));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "par_conj_gen.m"
    }
#line 227 "par_conj_gen.m"
    {
#line 227 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_98_98, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_99_99));
#line 227 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_98_98, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_102_102));
#line 227 "par_conj_gen.m"
    }
#line 227 "par_conj_gen.m"
    {
#line 227 "par_conj_gen.m"
      ll_backend__par_conj_gen__EndLabelCode_43 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__V_98_98);
    }
#line 236 "par_conj_gen.m"
    {
#line 236 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_110_110 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__EndLabelCode_43, ll_backend__par_conj_gen__MaybeRestoreParentSpCode_17);
    }
#line 235 "par_conj_gen.m"
    {
#line 235 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_109_109 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__GoalCode_42, ll_backend__par_conj_gen__V_110_110);
    }
#line 234 "par_conj_gen.m"
    {
#line 234 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_108_108 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__MakeSyncTermCode_40, ll_backend__par_conj_gen__V_109_109);
    }
#line 233 "par_conj_gen.m"
    {
#line 233 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_107_107 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__SaveCode_20, ll_backend__par_conj_gen__V_108_108);
    }
#line 232 "par_conj_gen.m"
    {
#line 232 "par_conj_gen.m"
      *ll_backend__par_conj_gen__Code_10 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_124_124, ll_backend__par_conj_gen__MaybeSetParentSpCode_16, ll_backend__par_conj_gen__V_107_107);
    }
#line 269 "par_conj_gen.m"
    {
#line 269 "par_conj_gen.m"
      ll_backend__code_info__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_114_114, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_116_116);
    }
#line 270 "par_conj_gen.m"
    {
#line 270 "par_conj_gen.m"
      ll_backend__par_conj_gen__place_all_outputs_3_p_0(ll_backend__par_conj_gen__Outputs_27, ll_backend__par_conj_gen__STATE_VARIABLE_CI_116_116, ll_backend__par_conj_gen__STATE_VARIABLE_CI_46);
#line 270 "par_conj_gen.m"
      return;
    }
#line 146 "par_conj_gen.m"
  }
#line 100 "par_conj_gen.m"
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
