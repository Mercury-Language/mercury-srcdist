/*
** Automatically generated from `par_conj_gen.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module ll_backend.par_conj_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__par_conj_gen__init
ENDINIT
*/

#include "ll_backend.par_conj_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 168 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 174 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_3(
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 527 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 309 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_2(
#line 309 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 309 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_1(
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 527 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 527 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 292 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__MaybeEnd0_6,
#line 292 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__HeadVar__7_7,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8,
#line 292 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_9);

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
ll_backend__par_conj_gen__place_all_outputs_4_p_0(
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3,
#line 639 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CLD_4);

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

#line 500 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
#line 500 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 500 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

#line 493 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
#line 493 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CLD_4,
#line 493 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Var_5,
#line 493 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Locn_6);

#line 476 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
#line 476 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCVarName_5,
#line 476 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCSVarName_6,
#line 476 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlot_7,
#line 476 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CopyStr_8);

#line 470 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
#line 470 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 470 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 470 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 452 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
#line 452 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__FrameSize_6,
#line 452 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVarLocn_7,
#line 452 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVarLocn_8,
#line 452 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlots_9,
#line 452 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CodeStr_10);

#line 341 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
#line 341 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__SyncTermBaseSlot_4,
#line 341 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotLval_5);

#line 413 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2(
#line 413 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 413 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 413 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

#line 500 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1(
#line 500 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 500 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);


static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_2[3][1];

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

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
    ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1)),
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
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[3])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_3)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 699 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 707 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 715 "ll_backend.par_conj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_3(
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

#line 309 "par_conj_gen.m"
static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_2(
#line 309 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 309 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 309 "par_conj_gen.m"
{
#line 309 "par_conj_gen.m"
  {
#line 309 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
#line 309 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 309 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__2_2;

#line 309 "par_conj_gen.m"
    {
#line 309 "par_conj_gen.m"
      ll_backend__par_conj_gen__conv1_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 309 "par_conj_gen.m"
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__2_2));
#line 309 "par_conj_gen.m"
    return ll_backend__par_conj_gen__wrapper_arg_2;
#line 309 "par_conj_gen.m"
  }
#line 309 "par_conj_gen.m"
}

#line 527 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_1(
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

#line 292 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__MaybeEnd0_6,
#line 292 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__HeadVar__7_7,
#line 292 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8,
#line 292 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_9)
#line 292 "par_conj_gen.m"
{
#line 296 "par_conj_gen.m"
  {
#line 296 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;

#line 296 "par_conj_gen.m"
    if ((ll_backend__par_conj_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "par_conj_gen.m"
      {
#line 297 "par_conj_gen.m"
        {
#line 297 "par_conj_gen.m"
          *ll_backend__par_conj_gen__HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 297 "par_conj_gen.m"
        *ll_backend__par_conj_gen__STATE_VARIABLE_CI_9 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8;
#line 296 "par_conj_gen.m"
      }
#line 296 "par_conj_gen.m"
    else
#line 299 "par_conj_gen.m"
      {
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeInfo_72_72;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_73_73;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_79_79;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_87;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_95;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ThisGoalCode0_28;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ThisGoalCode_29;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__AllSlots_30;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__Variables_31;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__LiveVars_32;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__StoreMap0_33;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__StoreMap_34;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__MaybeEnd_35;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SaveCode0_36;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SaveCode_37;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__ForkCode_41;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__JoinCode_42;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__GoalCode_43;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__GoalsCode_44;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_47_47;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50_50;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_55_55;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__V_68_68;
#line 299 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__V_69_69;

#line 301 "par_conj_gen.m"
        {
#line 301 "par_conj_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__par_conj_gen__HeadVar__1_1, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_47_47);
        }
#line 302 "par_conj_gen.m"
        {
#line 302 "par_conj_gen.m"
          ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__par_conj_gen__Goal_19, &ll_backend__par_conj_gen__ThisGoalCode0_28, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_47_47, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50_50);
        }
#line 923 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_10_87 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 527 "par_conj_gen.m"
        {
#line 527 "par_conj_gen.m"
          mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_87, ll_backend__par_conj_gen__TypeCtorInfo_10_87, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[9], ll_backend__par_conj_gen__ThisGoalCode0_28, &ll_backend__par_conj_gen__ThisGoalCode_29);
        }
#line 305 "par_conj_gen.m"
        {
#line 305 "par_conj_gen.m"
          ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49, &ll_backend__par_conj_gen__AllSlots_30);
        }
#line 306 "par_conj_gen.m"
        {
#line 306 "par_conj_gen.m"
          ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50_50, &ll_backend__par_conj_gen__Variables_31);
        }
#line 940 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeInfo_72_72 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0];
#line 307 "par_conj_gen.m"
        {
#line 307 "par_conj_gen.m"
          mercury__set__list_to_set_2_p_0(ll_backend__par_conj_gen__TypeInfo_72_72, ll_backend__par_conj_gen__Variables_31, &ll_backend__par_conj_gen__LiveVars_32);
        }
#line 947 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 308 "par_conj_gen.m"
        {
#line 308 "par_conj_gen.m"
          mercury__map__select_3_p_0(ll_backend__par_conj_gen__TypeInfo_72_72, ll_backend__par_conj_gen__TypeCtorInfo_73_73, ll_backend__par_conj_gen__AllSlots_30, ll_backend__par_conj_gen__LiveVars_32, &ll_backend__par_conj_gen__StoreMap0_33);
        }
#line 309 "par_conj_gen.m"
        {
#line 309 "par_conj_gen.m"
          ll_backend__par_conj_gen__StoreMap_34 = mercury__map__map_values_only_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_73_73, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__par_conj_gen__TypeInfo_72_72, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[10], ll_backend__par_conj_gen__StoreMap0_33);
        }
#line 310 "par_conj_gen.m"
        {
#line 310 "par_conj_gen.m"
          ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__par_conj_gen__StoreMap_34, ll_backend__par_conj_gen__MaybeEnd0_6, &ll_backend__par_conj_gen__MaybeEnd_35, &ll_backend__par_conj_gen__SaveCode0_36, ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50_50);
        }
#line 964 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_10_95 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 527 "par_conj_gen.m"
        {
#line 527 "par_conj_gen.m"
          mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_95, ll_backend__par_conj_gen__TypeCtorInfo_10_95, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[11], ll_backend__par_conj_gen__SaveCode0_36, &ll_backend__par_conj_gen__SaveCode_37);
        }
#line 328 "par_conj_gen.m"
        if ((ll_backend__par_conj_gen__Goals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "par_conj_gen.m"
          {
#line 329 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 329 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_52_52;
#line 329 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_53_53;

#line 330 "par_conj_gen.m"
            {
#line 330 "par_conj_gen.m"
              ll_backend__par_conj_gen__ForkCode_41 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_78_78);
            }
#line 332 "par_conj_gen.m"
            {
#line 332 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 332 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 332 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_53_53, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
#line 332 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_53_53, 2) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__4_4));
#line 332 "par_conj_gen.m"
            }
#line 332 "par_conj_gen.m"
            {
#line 332 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_52_52, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_53_53));
#line 332 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_52_52, 1) = ((MR_Box) ((MR_String) "finish"));
#line 332 "par_conj_gen.m"
            }
#line 331 "par_conj_gen.m"
            {
#line 331 "par_conj_gen.m"
              ll_backend__par_conj_gen__JoinCode_42 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_78_78, ((MR_Box) (ll_backend__par_conj_gen__V_52_52)));
            }
#line 329 "par_conj_gen.m"
            ll_backend__par_conj_gen__STATE_VARIABLE_CI_55_55 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49;
#line 329 "par_conj_gen.m"
          }
#line 328 "par_conj_gen.m"
        else
#line 316 "par_conj_gen.m"
          {
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_77_77;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__NextConjunct_40;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_56_56;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_57_57;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_59_59;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_60_60;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_61_61;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_63_63;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_64_64;
#line 316 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__V_65_65;

#line 317 "par_conj_gen.m"
            {
#line 317 "par_conj_gen.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__NextConjunct_40, ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_55_55);
            }
#line 1048 "ll_backend.par_conj_gen.c"
            ll_backend__par_conj_gen__TypeCtorInfo_77_77 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 319 "par_conj_gen.m"
            {
#line 319 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_57_57, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_57_57, 2) = ((MR_Box) (ll_backend__par_conj_gen__NextConjunct_40));
#line 319 "par_conj_gen.m"
            }
#line 319 "par_conj_gen.m"
            {
#line 319 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_56_56, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_57_57));
#line 319 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_56_56, 1) = ((MR_Box) ((MR_String) "fork off a child"));
#line 319 "par_conj_gen.m"
            }
#line 318 "par_conj_gen.m"
            {
#line 318 "par_conj_gen.m"
              ll_backend__par_conj_gen__ForkCode_41 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__par_conj_gen__V_56_56)));
            }
#line 323 "par_conj_gen.m"
            {
#line 323 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 323 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 323 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_61_61, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
#line 323 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_61_61, 2) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__4_4));
#line 323 "par_conj_gen.m"
            }
#line 323 "par_conj_gen.m"
            {
#line 323 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_60_60, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_61_61));
#line 323 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_60_60, 1) = ((MR_Box) ((MR_String) "finish"));
#line 323 "par_conj_gen.m"
            }
#line 325 "par_conj_gen.m"
            {
#line 325 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 325 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_65_65, 1) = ((MR_Box) (ll_backend__par_conj_gen__NextConjunct_40));
#line 325 "par_conj_gen.m"
            }
#line 325 "par_conj_gen.m"
            {
#line 325 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_64_64, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_65_65));
#line 325 "par_conj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_64_64, 1) = ((MR_Box) ((MR_String) "start of the next conjunct"));
#line 325 "par_conj_gen.m"
            }
#line 327 "par_conj_gen.m"
            {
#line 327 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_63_63, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_64_64));
#line 327 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "par_conj_gen.m"
            }
#line 324 "par_conj_gen.m"
            {
#line 324 "par_conj_gen.m"
              ll_backend__par_conj_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_59_59, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
#line 324 "par_conj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_59_59, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_63_63));
#line 324 "par_conj_gen.m"
            }
#line 322 "par_conj_gen.m"
            {
#line 322 "par_conj_gen.m"
              ll_backend__par_conj_gen__JoinCode_42 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_77_77, ll_backend__par_conj_gen__V_59_59);
            }
#line 316 "par_conj_gen.m"
          }
#line 1146 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_79_79 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 336 "par_conj_gen.m"
        {
#line 336 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_69_69 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_79_79, ll_backend__par_conj_gen__SaveCode_37, ll_backend__par_conj_gen__JoinCode_42);
        }
#line 336 "par_conj_gen.m"
        {
#line 336 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_68_68 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_79_79, ll_backend__par_conj_gen__ThisGoalCode_29, ll_backend__par_conj_gen__V_69_69);
        }
#line 336 "par_conj_gen.m"
        {
#line 336 "par_conj_gen.m"
          ll_backend__par_conj_gen__GoalCode_43 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_79_79, ll_backend__par_conj_gen__ForkCode_41, ll_backend__par_conj_gen__V_68_68);
        }
#line 337 "par_conj_gen.m"
        {
#line 337 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(ll_backend__par_conj_gen__HeadVar__1_1, ll_backend__par_conj_gen__Goals_20, ll_backend__par_conj_gen__HeadVar__3_3, ll_backend__par_conj_gen__HeadVar__4_4, ll_backend__par_conj_gen__MaybeEnd_35, &ll_backend__par_conj_gen__GoalsCode_44, ll_backend__par_conj_gen__STATE_VARIABLE_CI_55_55, ll_backend__par_conj_gen__STATE_VARIABLE_CI_9);
        }
#line 339 "par_conj_gen.m"
        {
#line 339 "par_conj_gen.m"
          *ll_backend__par_conj_gen__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_79_79, ll_backend__par_conj_gen__GoalCode_43, ll_backend__par_conj_gen__GoalsCode_44);
        }
#line 299 "par_conj_gen.m"
      }
#line 296 "par_conj_gen.m"
  }
#line 292 "par_conj_gen.m"
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
    MR_String ll_backend__par_conj_gen__V_26_26;
#line 661 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_32_32;
#line 661 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_34_34;
#line 661 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_35_35;

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
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ContainingGoalMap_12);
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
#line 1290 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__V_32_32 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_2[2];
#line 672 "par_conj_gen.m"
    {
#line 672 "par_conj_gen.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_32_32, ll_backend__par_conj_gen__GoalPathString_15, &ll_backend__par_conj_gen__V_26_26);
    }
#line 672 "par_conj_gen.m"
    {
#line 672 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ": ", ll_backend__par_conj_gen__V_26_26);
    }
#line 672 "par_conj_gen.m"
    {
#line 672 "par_conj_gen.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_32_32, ll_backend__par_conj_gen__ProcString_11, &ll_backend__par_conj_gen__V_35_35);
    }
#line 672 "par_conj_gen.m"
    {
#line 672 "par_conj_gen.m"
      ll_backend__par_conj_gen__String_16 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_35_35, ll_backend__par_conj_gen__V_34_34);
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
ll_backend__par_conj_gen__place_all_outputs_4_p_0(
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
#line 639 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3,
#line 639 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CLD_4)
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
          *ll_backend__par_conj_gen__STATE_VARIABLE_CLD_4 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3;
#line 642 "par_conj_gen.m"
        else
#line 643 "par_conj_gen.m"
          {
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__VarLocations_13;
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Slot_14;
#line 643 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_18_18;
#line 647 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_22_22;
#line 647 "par_conj_gen.m"
            MR_Word ll_backend__par_conj_gen__Locations_15;
#line 647 "par_conj_gen.m"
            MR_Box ll_backend__par_conj_gen__conv0_Locations_15;

#line 644 "par_conj_gen.m"
            {
#line 644 "par_conj_gen.m"
              ll_backend__code_loc_dep__variable_locations_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3, &ll_backend__par_conj_gen__VarLocations_13);
            }
#line 645 "par_conj_gen.m"
            {
#line 645 "par_conj_gen.m"
              ll_backend__code_info__get_variable_slot_3_p_0(ll_backend__par_conj_gen__HeadVar__2_2, ll_backend__par_conj_gen__Var_9, &ll_backend__par_conj_gen__Slot_14);
            }
#line 647 "par_conj_gen.m"
            {
#line 647 "par_conj_gen.m"
              ll_backend__par_conj_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__VarLocations_13, ((MR_Box) (ll_backend__par_conj_gen__Var_9)), &ll_backend__par_conj_gen__conv0_Locations_15);
            }
#line 647 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 647 "par_conj_gen.m"
              {
#line 647 "par_conj_gen.m"
                ll_backend__par_conj_gen__Locations_15 = ((MR_Word) ll_backend__par_conj_gen__conv0_Locations_15);
#line 647 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 647 "par_conj_gen.m"
              }
#line 647 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 647 "par_conj_gen.m"
              {
#line 1402 "ll_backend.par_conj_gen.c"
                ll_backend__par_conj_gen__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 648 "par_conj_gen.m"
                {
#line 648 "par_conj_gen.m"
                  ll_backend__par_conj_gen__succeeded = mercury__set__member_2_p_0(ll_backend__par_conj_gen__TypeCtorInfo_22_22, ((MR_Box) (ll_backend__par_conj_gen__Slot_14)), ll_backend__par_conj_gen__Locations_15);
                }
#line 647 "par_conj_gen.m"
              }
#line 651 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 651 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_CLD_18_18 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3;
#line 651 "par_conj_gen.m"
            else
#line 652 "par_conj_gen.m"
              {
#line 652 "par_conj_gen.m"
                ll_backend__code_loc_dep__set_var_location_4_p_0(ll_backend__par_conj_gen__Var_9, ll_backend__par_conj_gen__Slot_14, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_18_18);
              }
#line 654 "par_conj_gen.m"
            /* direct tailcall eliminated */
#line 654 "par_conj_gen.m"
            {
#line 654 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1 = ll_backend__par_conj_gen__Vars_10;
#line 654 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0__tmp_copy_3 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_18_18;

#line 654 "par_conj_gen.m"
              ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0__tmp_copy_3;
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
#line 1753 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 1755 "ll_backend.par_conj_gen.c"
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
#line 1772 "ll_backend.par_conj_gen.c"
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
#line 546 "par_conj_gen.m"
    switch (MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) {
#line 546 "par_conj_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 546 "par_conj_gen.m"
      case (MR_Integer) 0:
#line 568 "par_conj_gen.m"
        *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 546 "par_conj_gen.m"
        break;
#line 546 "par_conj_gen.m"
      case (MR_Integer) 1:
#line 546 "par_conj_gen.m"
      case (MR_Integer) 2:
#line 568 "par_conj_gen.m"
        *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 546 "par_conj_gen.m"
        break;
#line 546 "par_conj_gen.m"
      case (MR_Integer) 3:
#line 546 "par_conj_gen.m"
#line 546 "par_conj_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) {
#line 546 "par_conj_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 546 "par_conj_gen.m"
          case (MR_Integer) 0:
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
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 1:
#line 545 "par_conj_gen.m"
            *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 546 "par_conj_gen.m"
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 2:
#line 546 "par_conj_gen.m"
          case (MR_Integer) 11:
#line 546 "par_conj_gen.m"
          case (MR_Integer) 12:
#line 568 "par_conj_gen.m"
            *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 546 "par_conj_gen.m"
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 3:
#line 547 "par_conj_gen.m"
            {
#line 547 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
#line 547 "par_conj_gen.m"
              MR_Integer ll_backend__par_conj_gen__SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 2)));

#line 551 "par_conj_gen.m"
#line 551 "par_conj_gen.m"
              switch (ll_backend__par_conj_gen__Type_10) {
#line 551 "par_conj_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 551 "par_conj_gen.m"
                case (MR_Integer) 1:
#line 553 "par_conj_gen.m"
                  *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
#line 551 "par_conj_gen.m"
                  break;
#line 551 "par_conj_gen.m"
                case (MR_Integer) 0:
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
#line 551 "par_conj_gen.m"
                  break;
#line 551 "par_conj_gen.m"
              }
#line 547 "par_conj_gen.m"
            }
#line 546 "par_conj_gen.m"
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 4:
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
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 5:
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
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 6:
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
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 7:
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
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 8:
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
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 9:
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
            break;
#line 546 "par_conj_gen.m"
          case (MR_Integer) 10:
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
            break;
#line 546 "par_conj_gen.m"
        }
#line 546 "par_conj_gen.m"
        break;
#line 546 "par_conj_gen.m"
    }
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

#line 500 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
#line 500 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 500 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 500 "par_conj_gen.m"
{
#line 500 "par_conj_gen.m"
  {
#line 500 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 500 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;

#line 500 "par_conj_gen.m"
    {
#line 500 "par_conj_gen.m"
      return ll_backend__par_conj_gen__succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 500 "par_conj_gen.m"
    return ll_backend__par_conj_gen__succeeded;
#line 500 "par_conj_gen.m"
  }
#line 500 "par_conj_gen.m"
}

#line 493 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
#line 493 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CLD_4,
#line 493 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Var_5,
#line 493 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Locn_6)
#line 493 "par_conj_gen.m"
{
#line 496 "par_conj_gen.m"
  {
#line 496 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 496 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_19_19;
#line 496 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Map_7;
#line 496 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__AllLocnsSet_8;
#line 496 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__AllLocns_9;
#line 496 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__RegLocns_10;
#line 498 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__conv0_AllLocnsSet_8;

#line 497 "par_conj_gen.m"
    {
#line 497 "par_conj_gen.m"
      ll_backend__code_loc_dep__variable_locations_2_p_0(ll_backend__par_conj_gen__CLD_4, &ll_backend__par_conj_gen__Map_7);
    }
#line 498 "par_conj_gen.m"
    {
#line 498 "par_conj_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__Map_7, ((MR_Box) (ll_backend__par_conj_gen__Var_5)), &ll_backend__par_conj_gen__conv0_AllLocnsSet_8);
    }
#line 498 "par_conj_gen.m"
    ll_backend__par_conj_gen__AllLocnsSet_8 = ((MR_Word) ll_backend__par_conj_gen__conv0_AllLocnsSet_8);
#line 2452 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 499 "par_conj_gen.m"
    {
#line 499 "par_conj_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_19, ll_backend__par_conj_gen__AllLocnsSet_8, &ll_backend__par_conj_gen__AllLocns_9);
    }
#line 500 "par_conj_gen.m"
    {
#line 500 "par_conj_gen.m"
      mercury__list__filter_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[2], ll_backend__par_conj_gen__AllLocns_9, &ll_backend__par_conj_gen__RegLocns_10);
    }
#line 503 "par_conj_gen.m"
    if ((ll_backend__par_conj_gen__RegLocns_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__AllLocns_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "par_conj_gen.m"
        {
#line 509 "par_conj_gen.m"
          {
#line 509 "par_conj_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
#line 509 "par_conj_gen.m"
            return;
          }
#line 508 "par_conj_gen.m"
        }
#line 507 "par_conj_gen.m"
      else
#line 506 "par_conj_gen.m"
        {
#line 506 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_12_12;

#line 506 "par_conj_gen.m"
          *ll_backend__par_conj_gen__Locn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__AllLocns_9, (MR_Integer) 0)));
#line 506 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__AllLocns_9, (MR_Integer) 1)));
#line 506 "par_conj_gen.m"
        }
#line 503 "par_conj_gen.m"
    else
#line 502 "par_conj_gen.m"
      {
#line 502 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__V_11_11;

#line 502 "par_conj_gen.m"
        *ll_backend__par_conj_gen__Locn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__RegLocns_10, (MR_Integer) 0)));
#line 502 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__RegLocns_10, (MR_Integer) 1)));
#line 502 "par_conj_gen.m"
      }
#line 496 "par_conj_gen.m"
  }
#line 493 "par_conj_gen.m"
}

#line 476 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
#line 476 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCVarName_5,
#line 476 "par_conj_gen.m"
  MR_String ll_backend__par_conj_gen__LCSVarName_6,
#line 476 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlot_7,
#line 476 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CopyStr_8)
#line 476 "par_conj_gen.m"
{
#line 487 "par_conj_gen.m"
  {
#line 487 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 487 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__StackSlotName_9;

#line 480 "par_conj_gen.m"
    {
#line 480 "par_conj_gen.m"
      ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__StackSlot_7, &ll_backend__par_conj_gen__StackSlotName_9);
    }
#line 487 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 484 "par_conj_gen.m"
      {
#line 484 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__N_10;

#line 481 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__StackSlot_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__StackSlot_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 481 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 481 "par_conj_gen.m"
          {
#line 481 "par_conj_gen.m"
            ll_backend__par_conj_gen__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__StackSlot_7, (MR_Integer) 1)));
#line 482 "par_conj_gen.m"
            {
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_28_28;
#line 482 "par_conj_gen.m"
              MR_Word ll_backend__par_conj_gen__V_34_34 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_2[2];
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_35_35;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_37_37;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_38_38;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_45_45;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_47_47;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_48_48;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_55_55;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_57_57;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_58_58;
#line 482 "par_conj_gen.m"
              MR_String ll_backend__par_conj_gen__V_65_65;

#line 483 "par_conj_gen.m"
              {
#line 483 "par_conj_gen.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_34_34, ll_backend__par_conj_gen__StackSlotName_9, &ll_backend__par_conj_gen__V_28_28);
              }
#line 482 "par_conj_gen.m"
              {
#line 482 "par_conj_gen.m"
                ll_backend__par_conj_gen__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_28_28, (MR_String) ";\n");
              }
#line 482 "par_conj_gen.m"
              {
#line 482 "par_conj_gen.m"
                ll_backend__par_conj_gen__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", ll_backend__par_conj_gen__V_35_35);
              }
#line 483 "par_conj_gen.m"
              {
#line 483 "par_conj_gen.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_34_34, ll_backend__par_conj_gen__N_10, &ll_backend__par_conj_gen__V_38_38);
              }
#line 482 "par_conj_gen.m"
              {
#line 482 "par_conj_gen.m"
                ll_backend__par_conj_gen__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_38_38, ll_backend__par_conj_gen__V_37_37);
              }
#line 482 "par_conj_gen.m"
              {
#line 482 "par_conj_gen.m"
                ll_backend__par_conj_gen__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_45_45);
              }
#line 483 "par_conj_gen.m"
              {
#line 483 "par_conj_gen.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_34_34, ll_backend__par_conj_gen__LCSVarName_6, &ll_backend__par_conj_gen__V_48_48);
              }
#line 482 "par_conj_gen.m"
              {
#line 482 "par_conj_gen.m"
                ll_backend__par_conj_gen__V_55_55 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_48_48, ll_backend__par_conj_gen__V_47_47);
              }
#line 482 "par_conj_gen.m"
              {
#line 482 "par_conj_gen.m"
                ll_backend__par_conj_gen__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_55_55);
              }
#line 483 "par_conj_gen.m"
              {
#line 483 "par_conj_gen.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_34_34, ll_backend__par_conj_gen__LCVarName_5, &ll_backend__par_conj_gen__V_58_58);
              }
#line 482 "par_conj_gen.m"
              {
#line 482 "par_conj_gen.m"
                ll_backend__par_conj_gen__V_65_65 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_58_58, ll_backend__par_conj_gen__V_57_57);
              }
#line 482 "par_conj_gen.m"
              {
#line 482 "par_conj_gen.m"
                *ll_backend__par_conj_gen__CopyStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_worker_sv(", ll_backend__par_conj_gen__V_65_65);
              }
#line 482 "par_conj_gen.m"
            }
#line 481 "par_conj_gen.m"
          }
#line 481 "par_conj_gen.m"
        else
#line 485 "par_conj_gen.m"
          {
#line 485 "par_conj_gen.m"
            {
#line 485 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "not stack slot");
#line 485 "par_conj_gen.m"
              return;
            }
#line 485 "par_conj_gen.m"
          }
#line 484 "par_conj_gen.m"
      }
#line 487 "par_conj_gen.m"
    else
#line 488 "par_conj_gen.m"
      {
#line 488 "par_conj_gen.m"
        {
#line 488 "par_conj_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "cannot convert to string");
#line 488 "par_conj_gen.m"
          return;
        }
#line 488 "par_conj_gen.m"
      }
#line 487 "par_conj_gen.m"
  }
#line 476 "par_conj_gen.m"
}

#line 470 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
#line 470 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 470 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 470 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 470 "par_conj_gen.m"
{
#line 470 "par_conj_gen.m"
  {
#line 470 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 470 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__conv0_CopyStr_8;

#line 470 "par_conj_gen.m"
    {
#line 470 "par_conj_gen.m"
      ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_CopyStr_8);
    }
#line 470 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_CopyStr_8));
#line 470 "par_conj_gen.m"
  }
#line 470 "par_conj_gen.m"
}

#line 452 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
#line 452 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__FrameSize_6,
#line 452 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVarLocn_7,
#line 452 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVarLocn_8,
#line 452 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__StackSlots_9,
#line 452 "par_conj_gen.m"
  MR_String * ll_backend__par_conj_gen__CodeStr_10)
#line 452 "par_conj_gen.m"
{
#line 456 "par_conj_gen.m"
  {
#line 456 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCVarName_13;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCSVarName_14;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__IncrLine_16;
#line 456 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__CopyStrs_17;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__CopyLines_18;
#line 456 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_31_31;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_32_32;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_33_33;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_39_39;
#line 456 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_45_45;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_46_46;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_48_48;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_49_49;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_56_56;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_58_58;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_59_59;
#line 456 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_66_66;
#line 463 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCVarNamePrime_11;
#line 463 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__LCSVarNamePrime_12;

#line 458 "par_conj_gen.m"
    {
#line 458 "par_conj_gen.m"
      ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__LCVarLocn_7, &ll_backend__par_conj_gen__LCVarNamePrime_11);
    }
#line 458 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 459 "par_conj_gen.m"
      {
#line 459 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__LCSVarLocn_8, &ll_backend__par_conj_gen__LCSVarNamePrime_12);
      }
#line 463 "par_conj_gen.m"
    if (ll_backend__par_conj_gen__succeeded)
#line 461 "par_conj_gen.m"
      {
#line 461 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCVarName_13 = ll_backend__par_conj_gen__LCVarNamePrime_11;
#line 462 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCSVarName_14 = ll_backend__par_conj_gen__LCSVarNamePrime_12;
#line 461 "par_conj_gen.m"
      }
#line 463 "par_conj_gen.m"
    else
#line 464 "par_conj_gen.m"
      {
#line 464 "par_conj_gen.m"
        {
#line 464 "par_conj_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_slots_to_child_stack\'/5", (MR_String) "cannot convert to string");
#line 464 "par_conj_gen.m"
          return;
        }
#line 464 "par_conj_gen.m"
      }
#line 2797 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__V_45_45 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_2[2];
#line 469 "par_conj_gen.m"
    {
#line 469 "par_conj_gen.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_45_45, ll_backend__par_conj_gen__FrameSize_6, &ll_backend__par_conj_gen__V_39_39);
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_46_46 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_39_39, (MR_String) ");\n");
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_46_46);
    }
#line 469 "par_conj_gen.m"
    {
#line 469 "par_conj_gen.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_45_45, ll_backend__par_conj_gen__LCSVarName_14, &ll_backend__par_conj_gen__V_49_49);
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_49_49, ll_backend__par_conj_gen__V_48_48);
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_56_56);
    }
#line 469 "par_conj_gen.m"
    {
#line 469 "par_conj_gen.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_45_45, ll_backend__par_conj_gen__LCVarName_13, &ll_backend__par_conj_gen__V_59_59);
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_59_59, ll_backend__par_conj_gen__V_58_58);
    }
#line 468 "par_conj_gen.m"
    {
#line 468 "par_conj_gen.m"
      ll_backend__par_conj_gen__IncrLine_16 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_inc_worker_sp(", ll_backend__par_conj_gen__V_66_66);
    }
#line 470 "par_conj_gen.m"
    {
#line 470 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 470 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[0]));
#line 470 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 1) = ((MR_Box) (ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1));
#line 470 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 470 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 3) = ((MR_Box) (ll_backend__par_conj_gen__LCVarName_13));
#line 470 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 4) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarName_14));
#line 470 "par_conj_gen.m"
    }
#line 470 "par_conj_gen.m"
    {
#line 470 "par_conj_gen.m"
      mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__par_conj_gen__V_31_31, ll_backend__par_conj_gen__StackSlots_9, &ll_backend__par_conj_gen__CopyStrs_17);
    }
#line 472 "par_conj_gen.m"
    {
#line 472 "par_conj_gen.m"
      mercury__string__append_list_2_p_0(ll_backend__par_conj_gen__CopyStrs_17, &ll_backend__par_conj_gen__CopyLines_18);
    }
#line 474 "par_conj_gen.m"
    {
#line 474 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__CopyLines_18, (MR_String) "\t}\n");
    }
#line 474 "par_conj_gen.m"
    {
#line 474 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__IncrLine_16, ll_backend__par_conj_gen__V_33_33);
    }
#line 474 "par_conj_gen.m"
    {
#line 474 "par_conj_gen.m"
      *ll_backend__par_conj_gen__CodeStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", ll_backend__par_conj_gen__V_32_32);
    }
#line 456 "par_conj_gen.m"
  }
#line 452 "par_conj_gen.m"
}

#line 341 "par_conj_gen.m"
static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
#line 341 "par_conj_gen.m"
  MR_Integer ll_backend__par_conj_gen__SyncTermBaseSlot_4,
#line 341 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotLval_5)
#line 341 "par_conj_gen.m"
{
#line 345 "par_conj_gen.m"
  {
#line 345 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 345 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__HeadVar__3_3;
#line 345 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Components_6;
#line 345 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_17_17;
#line 345 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_20_20;
#line 345 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_21_21;
#line 345 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_22_22;
#line 345 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_24_24;
#line 345 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_31_31;
#line 345 "par_conj_gen.m"
    MR_String ll_backend__par_conj_gen__V_38_38;

#line 348 "par_conj_gen.m"
    {
#line 348 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_22_22, 0) = ((MR_Box) (ll_backend__par_conj_gen__SyncTermBaseSlotLval_5));
#line 348 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "par_conj_gen.m"
    }
#line 348 "par_conj_gen.m"
    {
#line 348 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_21_21 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__V_22_22);
    }
#line 348 "par_conj_gen.m"
    {
#line 348 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 348 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_20_20, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_21_21));
#line 348 "par_conj_gen.m"
    }
#line 349 "par_conj_gen.m"
    {
#line 349 "par_conj_gen.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_2[2], ll_backend__par_conj_gen__SyncTermBaseSlot_4, &ll_backend__par_conj_gen__V_31_31);
    }
#line 349 "par_conj_gen.m"
    {
#line 349 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_38_38 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_31_31, (MR_String) "));\n#endif\n");
    }
#line 349 "par_conj_gen.m"
    {
#line 349 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "#ifdef MR_THREADSCOPE\nMR_threadscope_post_end_par_conj(&MR_sv(", ll_backend__par_conj_gen__V_38_38);
    }
#line 346 "par_conj_gen.m"
    {
#line 346 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 346 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 346 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 1) = ((MR_Box) ((MR_Integer) 1));
#line 346 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 2) = ((MR_Box) ((MR_Integer) 1));
#line 346 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 3) = ((MR_Box) (ll_backend__par_conj_gen__V_20_20));
#line 346 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 4) = ((MR_Box) (ll_backend__par_conj_gen__V_24_24));
#line 346 "par_conj_gen.m"
    }
#line 349 "par_conj_gen.m"
    {
#line 349 "par_conj_gen.m"
      ll_backend__par_conj_gen__Components_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__Components_6, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_17_17));
#line 349 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__Components_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "par_conj_gen.m"
    }
#line 344 "par_conj_gen.m"
    {
#line 344 "par_conj_gen.m"
      ll_backend__par_conj_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__par_conj_gen__Components_6));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 1));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 9) = ((MR_Box) ((MR_Integer) 1));
#line 344 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 10) = ((MR_Box) ((MR_Integer) 0));
#line 344 "par_conj_gen.m"
    }
#line 345 "par_conj_gen.m"
    return ll_backend__par_conj_gen__HeadVar__3_3;
#line 345 "par_conj_gen.m"
  }
#line 341 "par_conj_gen.m"
}

#line 413 "par_conj_gen.m"
static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2(
#line 413 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 413 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
#line 413 "par_conj_gen.m"
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
#line 413 "par_conj_gen.m"
{
#line 413 "par_conj_gen.m"
  {
#line 413 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
#line 413 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__3_3;

#line 413 "par_conj_gen.m"
    {
#line 413 "par_conj_gen.m"
      ll_backend__code_info__get_variable_slot_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv1_HeadVar__3_3);
    }
#line 413 "par_conj_gen.m"
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__3_3));
#line 413 "par_conj_gen.m"
  }
#line 413 "par_conj_gen.m"
}

#line 500 "par_conj_gen.m"
static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1(
#line 500 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__closure_arg,
#line 500 "par_conj_gen.m"
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
#line 500 "par_conj_gen.m"
{
#line 500 "par_conj_gen.m"
  {
#line 500 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 500 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;

#line 500 "par_conj_gen.m"
    {
#line 500 "par_conj_gen.m"
      return ll_backend__par_conj_gen__succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
#line 500 "par_conj_gen.m"
    return ll_backend__par_conj_gen__succeeded;
#line 500 "par_conj_gen.m"
  }
#line 500 "par_conj_gen.m"
}

#line 119 "par_conj_gen.m"
void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0(
#line 119 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Goal_10,
#line 119 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCVar_11,
#line 119 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__LCSVar_12,
#line 119 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__UseParentStack_13,
#line 119 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Code_14,
#line 119 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_47,
#line 119 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_48,
#line 119 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_49,
#line 119 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50)
#line 119 "par_conj_gen.m"
{
#line 357 "par_conj_gen.m"
  {
#line 357 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_75_75;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_76_76;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_19_96;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__KnownVars_17;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__KnownVarsSet_18;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__NonLocalsSet_19;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__InputVarsSet_20;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__InputVars_21;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SaveCode_22;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LCVarLocn_23;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LCSVarLocn_24;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SpawnOffLabel_25;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SpawnUinstr_26;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SpawnInstr_27;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SpawnOffCode_28;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__PositionAfterSpawnOff_29;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LabelUinstr_30;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LabelInstr_31;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__LabelCode_32;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__GoalCode_33;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SpawnedOffCode0_35;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SpawnedOffCode_36;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__CopyCode_37;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_51_51;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_54_54;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_55_55;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_58_58;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_59_59;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_60_60;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_64_64;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_73_73;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Map_84;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__AllLocnsSet_85;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__AllLocns_86;
#line 357 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__RegLocns_87;
#line 365 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_74_74;
#line 498 "par_conj_gen.m"
    MR_Box ll_backend__par_conj_gen__conv0_AllLocnsSet_85;
#line 390 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen___CLDAfterGoal_34;

#line 363 "par_conj_gen.m"
    {
#line 363 "par_conj_gen.m"
      ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_49, &ll_backend__par_conj_gen__KnownVars_17);
    }
#line 3194 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 364 "par_conj_gen.m"
    {
#line 364 "par_conj_gen.m"
      ll_backend__par_conj_gen__KnownVarsSet_18 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__KnownVars_17);
    }
#line 365 "par_conj_gen.m"
    ll_backend__par_conj_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__Goal_10, (MR_Integer) 0)));
#line 365 "par_conj_gen.m"
    ll_backend__par_conj_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__Goal_10, (MR_Integer) 1)));
#line 365 "par_conj_gen.m"
    {
#line 365 "par_conj_gen.m"
      ll_backend__par_conj_gen__NonLocalsSet_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__par_conj_gen__V_51_51);
    }
#line 366 "par_conj_gen.m"
    {
#line 366 "par_conj_gen.m"
      ll_backend__par_conj_gen__InputVarsSet_20 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__NonLocalsSet_19, ll_backend__par_conj_gen__KnownVarsSet_18);
    }
#line 367 "par_conj_gen.m"
    {
#line 367 "par_conj_gen.m"
      ll_backend__par_conj_gen__InputVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__InputVarsSet_20);
    }
#line 368 "par_conj_gen.m"
    {
#line 368 "par_conj_gen.m"
      ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__par_conj_gen__InputVars_21, &ll_backend__par_conj_gen__SaveCode_22, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_47, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_49, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52);
    }
#line 497 "par_conj_gen.m"
    {
#line 497 "par_conj_gen.m"
      ll_backend__code_loc_dep__variable_locations_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__par_conj_gen__Map_84);
    }
#line 498 "par_conj_gen.m"
    {
#line 498 "par_conj_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__Map_84, ((MR_Box) (ll_backend__par_conj_gen__LCVar_11)), &ll_backend__par_conj_gen__conv0_AllLocnsSet_85);
    }
#line 498 "par_conj_gen.m"
    ll_backend__par_conj_gen__AllLocnsSet_85 = ((MR_Word) ll_backend__par_conj_gen__conv0_AllLocnsSet_85);
#line 3237 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_19_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 499 "par_conj_gen.m"
    {
#line 499 "par_conj_gen.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_96, ll_backend__par_conj_gen__AllLocnsSet_85, &ll_backend__par_conj_gen__AllLocns_86);
    }
#line 500 "par_conj_gen.m"
    {
#line 500 "par_conj_gen.m"
      mercury__list__filter_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_96, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[1], ll_backend__par_conj_gen__AllLocns_86, &ll_backend__par_conj_gen__RegLocns_87);
    }
#line 503 "par_conj_gen.m"
    if ((ll_backend__par_conj_gen__RegLocns_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "par_conj_gen.m"
      if ((ll_backend__par_conj_gen__AllLocns_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "par_conj_gen.m"
        {
#line 509 "par_conj_gen.m"
          {
#line 509 "par_conj_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
#line 509 "par_conj_gen.m"
            return;
          }
#line 508 "par_conj_gen.m"
        }
#line 507 "par_conj_gen.m"
      else
#line 506 "par_conj_gen.m"
        {
#line 506 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_89_89;

#line 506 "par_conj_gen.m"
          ll_backend__par_conj_gen__LCVarLocn_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__AllLocns_86, (MR_Integer) 0)));
#line 506 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__AllLocns_86, (MR_Integer) 1)));
#line 506 "par_conj_gen.m"
        }
#line 503 "par_conj_gen.m"
    else
#line 502 "par_conj_gen.m"
      {
#line 502 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__V_88_88;

#line 502 "par_conj_gen.m"
        ll_backend__par_conj_gen__LCVarLocn_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__RegLocns_87, (MR_Integer) 0)));
#line 502 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__RegLocns_87, (MR_Integer) 1)));
#line 502 "par_conj_gen.m"
      }
#line 371 "par_conj_gen.m"
    {
#line 371 "par_conj_gen.m"
      ll_backend__par_conj_gen__best_variable_location_det_3_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52, ll_backend__par_conj_gen__LCSVar_12, &ll_backend__par_conj_gen__LCSVarLocn_24);
    }
#line 373 "par_conj_gen.m"
    {
#line 373 "par_conj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__SpawnOffLabel_25, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_47, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53);
    }
#line 374 "par_conj_gen.m"
    {
#line 374 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 374 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_54_54, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_23));
#line 374 "par_conj_gen.m"
    }
#line 374 "par_conj_gen.m"
    {
#line 374 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 374 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_55_55, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_24));
#line 374 "par_conj_gen.m"
    }
#line 374 "par_conj_gen.m"
    {
#line 374 "par_conj_gen.m"
      ll_backend__par_conj_gen__SpawnUinstr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 374 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 374 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_26, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_54_54));
#line 374 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_26, 2) = ((MR_Box) (ll_backend__par_conj_gen__V_55_55));
#line 374 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_26, 3) = ((MR_Box) (ll_backend__par_conj_gen__SpawnOffLabel_25));
#line 374 "par_conj_gen.m"
    }
#line 376 "par_conj_gen.m"
    {
#line 376 "par_conj_gen.m"
      ll_backend__par_conj_gen__SpawnInstr_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__SpawnInstr_27, 0) = ((MR_Box) (ll_backend__par_conj_gen__SpawnUinstr_26));
#line 376 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__SpawnInstr_27, 1) = ((MR_Box) ((MR_String) ""));
#line 376 "par_conj_gen.m"
    }
#line 3340 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 377 "par_conj_gen.m"
    {
#line 377 "par_conj_gen.m"
      ll_backend__par_conj_gen__SpawnOffCode_28 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__par_conj_gen__SpawnInstr_27)));
    }
#line 378 "par_conj_gen.m"
    {
#line 378 "par_conj_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__par_conj_gen__PositionAfterSpawnOff_29);
    }
#line 381 "par_conj_gen.m"
    {
#line 381 "par_conj_gen.m"
      ll_backend__par_conj_gen__LabelUinstr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LabelUinstr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 381 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LabelUinstr_30, 1) = ((MR_Box) (ll_backend__par_conj_gen__SpawnOffLabel_25));
#line 381 "par_conj_gen.m"
    }
#line 382 "par_conj_gen.m"
    {
#line 382 "par_conj_gen.m"
      ll_backend__par_conj_gen__LabelInstr_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__LabelInstr_31, 0) = ((MR_Box) (ll_backend__par_conj_gen__LabelUinstr_30));
#line 382 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__LabelInstr_31, 1) = ((MR_Box) ((MR_String) "Label for spawned off code"));
#line 382 "par_conj_gen.m"
    }
#line 383 "par_conj_gen.m"
    {
#line 383 "par_conj_gen.m"
      ll_backend__par_conj_gen__LabelCode_32 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__par_conj_gen__LabelInstr_31)));
    }
#line 388 "par_conj_gen.m"
    {
#line 388 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_60_60, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_24));
#line 388 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "par_conj_gen.m"
    }
#line 388 "par_conj_gen.m"
    {
#line 388 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_58_58, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_23));
#line 388 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_58_58, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
#line 388 "par_conj_gen.m"
    }
#line 388 "par_conj_gen.m"
    {
#line 388 "par_conj_gen.m"
      ll_backend__code_loc_dep__clobber_regs_3_p_0(ll_backend__par_conj_gen__V_58_58, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_59_59);
    }
#line 390 "par_conj_gen.m"
    {
#line 390 "par_conj_gen.m"
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__par_conj_gen__Goal_10, &ll_backend__par_conj_gen__GoalCode_33, ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_59_59, &ll_backend__par_conj_gen___CLDAfterGoal_34);
    }
#line 392 "par_conj_gen.m"
    {
#line 392 "par_conj_gen.m"
      ll_backend__par_conj_gen__SpawnedOffCode0_35 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__LabelCode_32, ll_backend__par_conj_gen__GoalCode_33);
    }
#line 394 "par_conj_gen.m"
    {
#line 394 "par_conj_gen.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__par_conj_gen__PositionAfterSpawnOff_29, ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_64_64);
    }
#line 411 "par_conj_gen.m"
#line 411 "par_conj_gen.m"
    switch (ll_backend__par_conj_gen__UseParentStack_13) {
#line 411 "par_conj_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 411 "par_conj_gen.m"
      case (MR_Integer) 1:
#line 412 "par_conj_gen.m"
        {
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__TypeCtorInfo_80_80;
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__InputStackSlots_39;
#line 412 "par_conj_gen.m"
          MR_Integer ll_backend__par_conj_gen__FrameSize_41;
#line 412 "par_conj_gen.m"
          MR_String ll_backend__par_conj_gen__CopyStr_42;
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__LiveLvalsInfo_44;
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__CopyUinstr_45;
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__CopyInstr_46;
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_65_65;
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_66_66;
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_67_67;
#line 412 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_68_68;

#line 413 "par_conj_gen.m"
          {
#line 413 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 413 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_65_65, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[0]));
#line 413 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_65_65, 1) = ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2));
#line 413 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 413 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_65_65, 3) = ((MR_Box) (ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63));
#line 413 "par_conj_gen.m"
          }
#line 3463 "ll_backend.par_conj_gen.c"
          ll_backend__par_conj_gen__TypeCtorInfo_80_80 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 413 "par_conj_gen.m"
          {
#line 413 "par_conj_gen.m"
            mercury__list__map_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], ll_backend__par_conj_gen__TypeCtorInfo_80_80, ll_backend__par_conj_gen__V_65_65, ll_backend__par_conj_gen__InputVars_21, &ll_backend__par_conj_gen__InputStackSlots_39);
          }
#line 417 "par_conj_gen.m"
          {
#line 417 "par_conj_gen.m"
            ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(ll_backend__par_conj_gen__SpawnedOffCode0_35, &ll_backend__par_conj_gen__FrameSize_41);
          }
#line 418 "par_conj_gen.m"
          ll_backend__par_conj_gen__SpawnedOffCode_36 = ll_backend__par_conj_gen__SpawnedOffCode0_35;
#line 435 "par_conj_gen.m"
          {
#line 435 "par_conj_gen.m"
            ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(ll_backend__par_conj_gen__FrameSize_41, ll_backend__par_conj_gen__LCVarLocn_23, ll_backend__par_conj_gen__LCSVarLocn_24, ll_backend__par_conj_gen__InputStackSlots_39, &ll_backend__par_conj_gen__CopyStr_42);
          }
#line 439 "par_conj_gen.m"
          {
#line 439 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_68_68, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_24));
#line 439 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_68_68, 1) = ((MR_Box) (ll_backend__par_conj_gen__InputStackSlots_39));
#line 439 "par_conj_gen.m"
          }
#line 439 "par_conj_gen.m"
          {
#line 439 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_67_67, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_23));
#line 439 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_67_67, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_68_68));
#line 439 "par_conj_gen.m"
          }
#line 439 "par_conj_gen.m"
          {
#line 439 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_66_66 = mercury__set__list_to_set_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_80_80, ll_backend__par_conj_gen__V_67_67);
          }
#line 438 "par_conj_gen.m"
          {
#line 438 "par_conj_gen.m"
            ll_backend__par_conj_gen__LiveLvalsInfo_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 438 "par_conj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__LiveLvalsInfo_44, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_66_66));
#line 438 "par_conj_gen.m"
          }
#line 440 "par_conj_gen.m"
          {
#line 440 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyUinstr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 440 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 440 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_45, 1) = ((MR_Box) ((MR_Integer) 1));
#line 440 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_45, 2) = ((MR_Box) (ll_backend__par_conj_gen__LiveLvalsInfo_44));
#line 440 "par_conj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_45, 3) = ((MR_Box) (ll_backend__par_conj_gen__CopyStr_42));
#line 440 "par_conj_gen.m"
          }
#line 442 "par_conj_gen.m"
          {
#line 442 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__CopyInstr_46, 0) = ((MR_Box) (ll_backend__par_conj_gen__CopyUinstr_45));
#line 442 "par_conj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__CopyInstr_46, 1) = ((MR_Box) ((MR_String) ""));
#line 442 "par_conj_gen.m"
          }
#line 443 "par_conj_gen.m"
          {
#line 443 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyCode_37 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__par_conj_gen__CopyInstr_46)));
          }
#line 412 "par_conj_gen.m"
          *ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_64_64;
#line 412 "par_conj_gen.m"
        }
#line 411 "par_conj_gen.m"
        break;
#line 411 "par_conj_gen.m"
      case (MR_Integer) 0:
#line 397 "par_conj_gen.m"
        {
#line 397 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__OutputVars_38;
#line 397 "par_conj_gen.m"
          MR_Word ll_backend__par_conj_gen__V_70_70;

#line 398 "par_conj_gen.m"
          {
#line 398 "par_conj_gen.m"
            ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(ll_backend__par_conj_gen__SpawnedOffCode0_35, &ll_backend__par_conj_gen__SpawnedOffCode_36);
          }
#line 399 "par_conj_gen.m"
          {
#line 399 "par_conj_gen.m"
            ll_backend__par_conj_gen__CopyCode_37 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76);
          }
#line 409 "par_conj_gen.m"
          {
#line 409 "par_conj_gen.m"
            ll_backend__par_conj_gen__OutputVars_38 = parse_tree__set_of_var__difference_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__NonLocalsSet_19, ll_backend__par_conj_gen__KnownVarsSet_18);
          }
#line 410 "par_conj_gen.m"
          {
#line 410 "par_conj_gen.m"
            ll_backend__par_conj_gen__V_70_70 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__OutputVars_38);
          }
#line 410 "par_conj_gen.m"
          {
#line 410 "par_conj_gen.m"
            ll_backend__par_conj_gen__place_all_outputs_4_p_0(ll_backend__par_conj_gen__V_70_70, ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50);
          }
#line 397 "par_conj_gen.m"
        }
#line 411 "par_conj_gen.m"
        break;
#line 411 "par_conj_gen.m"
    }
#line 447 "par_conj_gen.m"
    {
#line 447 "par_conj_gen.m"
      ll_backend__code_info__add_out_of_line_code_3_p_0(ll_backend__par_conj_gen__SpawnedOffCode_36, ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63, ll_backend__par_conj_gen__STATE_VARIABLE_CI_48);
    }
#line 450 "par_conj_gen.m"
    {
#line 450 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_73_73 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__CopyCode_37, ll_backend__par_conj_gen__SpawnOffCode_28);
    }
#line 450 "par_conj_gen.m"
    {
#line 450 "par_conj_gen.m"
      *ll_backend__par_conj_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__SaveCode_22, ll_backend__par_conj_gen__V_73_73);
    }
#line 357 "par_conj_gen.m"
  }
#line 119 "par_conj_gen.m"
}

#line 115 "par_conj_gen.m"
void MR_CALL 
ll_backend__par_conj_gen__generate_par_conj_8_p_0(
#line 115 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__Goals_9,
#line 115 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__GoalInfo_10,
#line 115 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__CodeModel_11,
#line 115 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__Code_12,
#line 115 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_51,
#line 115 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_52,
#line 115 "par_conj_gen.m"
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53,
#line 115 "par_conj_gen.m"
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CLD_54)
#line 115 "par_conj_gen.m"
{
#line 157 "par_conj_gen.m"
  {
#line 157 "par_conj_gen.m"
    MR_bool ll_backend__par_conj_gen__succeeded;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_137_137;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Globals_15;
#line 157 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__STSize_16;
#line 157 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__Depth_17;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MaybeSetParentSpCode_19;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MaybeRestoreParentSpCode_20;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SaveCode_23;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Nonlocals_24;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Variables_25;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Initial_26;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Delta_27;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Final_28;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__ModuleInfo_29;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Outputs_30;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__Contents_31;
#line 157 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__SlotNum_38;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__SyncTermBaseSlot_39;
#line 157 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__NumGoals_41;
#line 157 "par_conj_gen.m"
    MR_Integer ll_backend__par_conj_gen__StaticConjId_42;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__MakeSyncTermCode_43;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__EndLabel_44;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__GoalCode_48;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__EndLabelCode_49;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_96_96;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_97_97;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_106_106;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_108_108;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_109_109;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_110_110;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_112_112;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_113_113;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_114_114;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_117_117;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_118_118;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_119_119;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__V_120_120;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127;
#line 157 "par_conj_gen.m"
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_129_129;

#line 161 "par_conj_gen.m"
#line 161 "par_conj_gen.m"
    switch (ll_backend__par_conj_gen__CodeModel_11) {
#line 161 "par_conj_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 161 "par_conj_gen.m"
      case (MR_Integer) 0:
#line 160 "par_conj_gen.m"
        {
#line 160 "par_conj_gen.m"
        }
#line 161 "par_conj_gen.m"
        break;
#line 161 "par_conj_gen.m"
      case (MR_Integer) 2:
#line 165 "par_conj_gen.m"
        {
#line 166 "par_conj_gen.m"
          {
#line 166 "par_conj_gen.m"
            mercury__require__sorry_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "nondet parallel conjunction not implemented");
#line 166 "par_conj_gen.m"
            return;
          }
#line 165 "par_conj_gen.m"
        }
#line 161 "par_conj_gen.m"
        break;
#line 161 "par_conj_gen.m"
      case (MR_Integer) 1:
#line 162 "par_conj_gen.m"
        {
#line 163 "par_conj_gen.m"
          {
#line 163 "par_conj_gen.m"
            mercury__require__sorry_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "semidet parallel conjunction not implemented");
#line 163 "par_conj_gen.m"
            return;
          }
#line 162 "par_conj_gen.m"
        }
#line 161 "par_conj_gen.m"
        break;
#line 161 "par_conj_gen.m"
    }
#line 169 "par_conj_gen.m"
    {
#line 169 "par_conj_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_51, &ll_backend__par_conj_gen__Globals_15);
    }
#line 170 "par_conj_gen.m"
    {
#line 170 "par_conj_gen.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__par_conj_gen__Globals_15, (MR_Integer) 245, &ll_backend__par_conj_gen__STSize_16);
    }
#line 176 "par_conj_gen.m"
    {
#line 176 "par_conj_gen.m"
      ll_backend__code_loc_dep__get_par_conj_depth_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53, &ll_backend__par_conj_gen__Depth_17);
    }
#line 200 "par_conj_gen.m"
    {
#line 200 "par_conj_gen.m"
      ll_backend__par_conj_gen__Nonlocals_24 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__par_conj_gen__GoalInfo_10);
    }
#line 201 "par_conj_gen.m"
    {
#line 201 "par_conj_gen.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__par_conj_gen__Nonlocals_24, &ll_backend__par_conj_gen__Variables_25);
    }
#line 203 "par_conj_gen.m"
    {
#line 203 "par_conj_gen.m"
      ll_backend__par_conj_gen__Delta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__par_conj_gen__GoalInfo_10);
    }
#line 209 "par_conj_gen.m"
    {
#line 209 "par_conj_gen.m"
      ll_backend__par_conj_gen__Contents_31 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__par_conj_gen__STSize_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))));
    }
#line 225 "par_conj_gen.m"
    {
#line 225 "par_conj_gen.m"
      ll_backend__par_conj_gen__NumGoals_41 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__par_conj_gen__Goals_9);
    }
#line 3799 "ll_backend.par_conj_gen.c"
    ll_backend__par_conj_gen__TypeCtorInfo_137_137 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 242 "par_conj_gen.m"
    ll_backend__par_conj_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "par_conj_gen.m"
    ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__Depth_17 == (MR_Integer) 0);
#line 3805 "ll_backend.par_conj_gen.c"
    if (ll_backend__par_conj_gen__succeeded)
#line 3807 "ll_backend.par_conj_gen.c"
      {
#line 3809 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_131_131;
#line 3811 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__Vars_22;
#line 3813 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__SyncTermSlots_32;
#line 3815 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__StackId_33;
#line 3817 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40;
#line 3819 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__BeforeConjunctionPos_45;
#line 3821 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ConjunctStartPos_47;
#line 3823 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSpSlot1_50;
#line 3825 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_65_65;
#line 3827 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_67_67;
#line 3829 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_68_68;
#line 3831 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_69_69;
#line 3833 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_81_81;
#line 3835 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_82_82;
#line 3837 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__V_84_84;
#line 3839 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_86;
#line 3841 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90;
#line 3843 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_95;
#line 3845 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_99;
#line 3847 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_100;
#line 3849 "ll_backend.par_conj_gen.c"
        MR_Integer ll_backend__par_conj_gen__V_101_101;
#line 3851 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_102;
#line 3853 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_105;
#line 3855 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_107;
#line 3857 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_121;
#line 3859 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_123_123;
#line 3861 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_124_124;
#line 210 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___N_34;
#line 210 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___M_35;
#line 221 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36;
#line 221 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__SlotNumPrime_37;
#line 214 "par_conj_gen.m"
        MR_Box ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_36;

#line 178 "par_conj_gen.m"
        {
#line 178 "par_conj_gen.m"
          ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_2[1]), (MR_Integer) 1, &ll_backend__par_conj_gen__ParentSpSlot1_50, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_51, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_65_65);
        }
#line 3879 "ll_backend.par_conj_gen.c"
        ll_backend__par_conj_gen__TypeCtorInfo_131_131 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 181 "par_conj_gen.m"
        {
#line 181 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 181 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 181 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_69_69, 1) = ((MR_Box) (ll_backend__par_conj_gen__ParentSpSlot1_50));
#line 181 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_69_69, 2) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_2[1]));
#line 181 "par_conj_gen.m"
        }
#line 181 "par_conj_gen.m"
        {
#line 181 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_68_68, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_69_69));
#line 181 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_68_68, 1) = ((MR_Box) ((MR_String) "save the old parent stack pointer"));
#line 181 "par_conj_gen.m"
        }
#line 182 "par_conj_gen.m"
        {
#line 182 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "par_conj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_67_67, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_68_68));
#line 182 "par_conj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_1[4])));
#line 182 "par_conj_gen.m"
        }
#line 180 "par_conj_gen.m"
        {
#line 180 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeSetParentSpCode_19 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_131_131, ll_backend__par_conj_gen__V_67_67);
        }
#line 187 "par_conj_gen.m"
        {
#line 187 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 187 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_84_84, 0) = ((MR_Box) (ll_backend__par_conj_gen__ParentSpSlot1_50));
#line 187 "par_conj_gen.m"
        }
#line 187 "par_conj_gen.m"
        {
#line 187 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 187 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 187 "par_conj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_82_82, 2) = ((MR_Box) (ll_backend__par_conj_gen__V_84_84));
#line 187 "par_conj_gen.m"
        }
#line 187 "par_conj_gen.m"
        {
#line 187 "par_conj_gen.m"
          ll_backend__par_conj_gen__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 187 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_81_81, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_82_82));
#line 187 "par_conj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_81_81, 1) = ((MR_Box) ((MR_String) "restore old parent stack pointer"));
#line 187 "par_conj_gen.m"
        }
#line 186 "par_conj_gen.m"
        {
#line 186 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeRestoreParentSpCode_20 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_131_131, ((MR_Box) (ll_backend__par_conj_gen__V_81_81)));
        }
#line 197 "par_conj_gen.m"
        {
#line 197 "par_conj_gen.m"
          ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_65_65, &ll_backend__par_conj_gen__Vars_22);
        }
#line 198 "par_conj_gen.m"
        {
#line 198 "par_conj_gen.m"
          ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__par_conj_gen__Vars_22, &ll_backend__par_conj_gen__SaveCode_23, ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_65_65, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_86);
        }
#line 202 "par_conj_gen.m"
        {
#line 202 "par_conj_gen.m"
          ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_86, &ll_backend__par_conj_gen__Initial_26);
        }
#line 210 "par_conj_gen.m"
        {
#line 210 "par_conj_gen.m"
          ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__par_conj_gen__Contents_31, (MR_Integer) 0, &ll_backend__par_conj_gen__SyncTermSlots_32, &ll_backend__par_conj_gen__StackId_33, &ll_backend__par_conj_gen___N_34, &ll_backend__par_conj_gen___M_35, ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_86, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_100);
        }
#line 214 "par_conj_gen.m"
        {
#line 214 "par_conj_gen.m"
          ll_backend__par_conj_gen__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__SyncTermSlots_32, &ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_36);
        }
#line 214 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 214 "par_conj_gen.m"
          {
#line 214 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36 = ((MR_Word) ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_36);
#line 214 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 214 "par_conj_gen.m"
          }
#line 214 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 214 "par_conj_gen.m"
          {
#line 216 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__StackId_33 == (MR_Integer) 0);
#line 214 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 214 "par_conj_gen.m"
              {
#line 215 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 215 "par_conj_gen.m"
                if (ll_backend__par_conj_gen__succeeded)
#line 215 "par_conj_gen.m"
                  ll_backend__par_conj_gen__SlotNumPrime_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36, (MR_Integer) 1)));
#line 214 "par_conj_gen.m"
              }
#line 214 "par_conj_gen.m"
          }
#line 221 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 218 "par_conj_gen.m"
          {
#line 218 "par_conj_gen.m"
            ll_backend__par_conj_gen__SlotNum_38 = ll_backend__par_conj_gen__SlotNumPrime_37;
#line 219 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlot_39 = ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36;
#line 220 "par_conj_gen.m"
            {
#line 220 "par_conj_gen.m"
              ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 220 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_38));
#line 220 "par_conj_gen.m"
            }
#line 218 "par_conj_gen.m"
          }
#line 221 "par_conj_gen.m"
        else
#line 222 "par_conj_gen.m"
          {
#line 222 "par_conj_gen.m"
            {
#line 222 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "cannot find stack slot");
#line 222 "par_conj_gen.m"
              return;
            }
#line 222 "par_conj_gen.m"
          }
#line 226 "par_conj_gen.m"
        {
#line 226 "par_conj_gen.m"
          ll_backend__par_conj_gen__create_static_conj_id_4_p_0(ll_backend__par_conj_gen__GoalInfo_10, &ll_backend__par_conj_gen__StaticConjId_42, ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_95);
        }
#line 232 "par_conj_gen.m"
        {
#line 232 "par_conj_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__EndLabel_44, ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_95, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_99);
        }
#line 233 "par_conj_gen.m"
        {
#line 233 "par_conj_gen.m"
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_100, &ll_backend__par_conj_gen__BeforeConjunctionPos_45);
        }
#line 237 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_101_101 = (ll_backend__par_conj_gen__Depth_17 + (MR_Integer) 1);
#line 237 "par_conj_gen.m"
        {
#line 237 "par_conj_gen.m"
          ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__V_101_101, ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_100, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_102);
        }
#line 238 "par_conj_gen.m"
        {
#line 238 "par_conj_gen.m"
          ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_102, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_105);
        }
#line 239 "par_conj_gen.m"
        {
#line 239 "par_conj_gen.m"
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_105, &ll_backend__par_conj_gen__ConjunctStartPos_47);
        }
#line 241 "par_conj_gen.m"
        {
#line 241 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(ll_backend__par_conj_gen__ConjunctStartPos_47, ll_backend__par_conj_gen__Goals_9, ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40, ll_backend__par_conj_gen__EndLabel_44, ll_backend__par_conj_gen__V_106_106, &ll_backend__par_conj_gen__GoalCode_48, ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_99, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_107);
        }
#line 275 "par_conj_gen.m"
        {
#line 275 "par_conj_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__par_conj_gen__BeforeConjunctionPos_45, ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_107, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_121);
        }
#line 277 "par_conj_gen.m"
        {
#line 277 "par_conj_gen.m"
          ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__par_conj_gen__SyncTermSlots_32, (MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_107, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_123_123, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_121, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_124_124);
        }
#line 284 "par_conj_gen.m"
        {
#line 284 "par_conj_gen.m"
          ll_backend__code_loc_dep__release_temp_slot_6_p_0(ll_backend__par_conj_gen__ParentSpSlot1_50, (MR_Integer) 1, ll_backend__par_conj_gen__STATE_VARIABLE_CI_123_123, ll_backend__par_conj_gen__STATE_VARIABLE_CI_52, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_124_124, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127);
        }
#line 4093 "ll_backend.par_conj_gen.c"
      }
#line 4095 "ll_backend.par_conj_gen.c"
    else
#line 4097 "ll_backend.par_conj_gen.c"
      {
#line 4099 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_132_132 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 4101 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__Vars_154;
#line 4103 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__SyncTermSlots_155;
#line 4105 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__StackId_156;
#line 4107 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161;
#line 4109 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__BeforeConjunctionPos_162;
#line 4111 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__ConjunctStartPos_163;
#line 4113 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_165;
#line 4115 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_166;
#line 4117 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_170;
#line 4119 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_171;
#line 4121 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_172;
#line 4123 "ll_backend.par_conj_gen.c"
        MR_Integer ll_backend__par_conj_gen__V_173_173;
#line 4125 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_174;
#line 4127 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_175;
#line 4129 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176;
#line 4131 "ll_backend.par_conj_gen.c"
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_177;
#line 210 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___N_139;
#line 210 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen___M_140;
#line 221 "par_conj_gen.m"
        MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145;
#line 221 "par_conj_gen.m"
        MR_Integer ll_backend__par_conj_gen__SlotNumPrime_146;
#line 214 "par_conj_gen.m"
        MR_Box ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_145;

#line 192 "par_conj_gen.m"
        {
#line 192 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeSetParentSpCode_19 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_132_132);
        }
#line 193 "par_conj_gen.m"
        {
#line 193 "par_conj_gen.m"
          ll_backend__par_conj_gen__MaybeRestoreParentSpCode_20 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_132_132);
        }
#line 192 "par_conj_gen.m"
        ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_51;
#line 197 "par_conj_gen.m"
        {
#line 197 "par_conj_gen.m"
          ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53, &ll_backend__par_conj_gen__Vars_154);
        }
#line 198 "par_conj_gen.m"
        {
#line 198 "par_conj_gen.m"
          ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__par_conj_gen__Vars_154, &ll_backend__par_conj_gen__SaveCode_23, ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_165);
        }
#line 202 "par_conj_gen.m"
        {
#line 202 "par_conj_gen.m"
          ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_165, &ll_backend__par_conj_gen__Initial_26);
        }
#line 210 "par_conj_gen.m"
        {
#line 210 "par_conj_gen.m"
          ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__par_conj_gen__Contents_31, (MR_Integer) 0, &ll_backend__par_conj_gen__SyncTermSlots_155, &ll_backend__par_conj_gen__StackId_156, &ll_backend__par_conj_gen___N_139, &ll_backend__par_conj_gen___M_140, ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_166, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_165, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_172);
        }
#line 214 "par_conj_gen.m"
        {
#line 214 "par_conj_gen.m"
          ll_backend__par_conj_gen__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__SyncTermSlots_155, &ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_145);
        }
#line 214 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 214 "par_conj_gen.m"
          {
#line 214 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145 = ((MR_Word) ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_145);
#line 214 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = MR_TRUE;
#line 214 "par_conj_gen.m"
          }
#line 214 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 214 "par_conj_gen.m"
          {
#line 216 "par_conj_gen.m"
            ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__StackId_156 == (MR_Integer) 0);
#line 214 "par_conj_gen.m"
            if (ll_backend__par_conj_gen__succeeded)
#line 214 "par_conj_gen.m"
              {
#line 215 "par_conj_gen.m"
                ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 215 "par_conj_gen.m"
                if (ll_backend__par_conj_gen__succeeded)
#line 215 "par_conj_gen.m"
                  ll_backend__par_conj_gen__SlotNumPrime_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145, (MR_Integer) 1)));
#line 214 "par_conj_gen.m"
              }
#line 214 "par_conj_gen.m"
          }
#line 221 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 218 "par_conj_gen.m"
          {
#line 218 "par_conj_gen.m"
            ll_backend__par_conj_gen__SlotNum_38 = ll_backend__par_conj_gen__SlotNumPrime_146;
#line 219 "par_conj_gen.m"
            ll_backend__par_conj_gen__SyncTermBaseSlot_39 = ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145;
#line 220 "par_conj_gen.m"
            {
#line 220 "par_conj_gen.m"
              ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 220 "par_conj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_38));
#line 220 "par_conj_gen.m"
            }
#line 218 "par_conj_gen.m"
          }
#line 221 "par_conj_gen.m"
        else
#line 222 "par_conj_gen.m"
          {
#line 222 "par_conj_gen.m"
            {
#line 222 "par_conj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "cannot find stack slot");
#line 222 "par_conj_gen.m"
              return;
            }
#line 222 "par_conj_gen.m"
          }
#line 226 "par_conj_gen.m"
        {
#line 226 "par_conj_gen.m"
          ll_backend__par_conj_gen__create_static_conj_id_4_p_0(ll_backend__par_conj_gen__GoalInfo_10, &ll_backend__par_conj_gen__StaticConjId_42, ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_166, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_170);
        }
#line 232 "par_conj_gen.m"
        {
#line 232 "par_conj_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__EndLabel_44, ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_170, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_171);
        }
#line 233 "par_conj_gen.m"
        {
#line 233 "par_conj_gen.m"
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_172, &ll_backend__par_conj_gen__BeforeConjunctionPos_162);
        }
#line 237 "par_conj_gen.m"
        ll_backend__par_conj_gen__V_173_173 = (ll_backend__par_conj_gen__Depth_17 + (MR_Integer) 1);
#line 237 "par_conj_gen.m"
        {
#line 237 "par_conj_gen.m"
          ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__V_173_173, ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_172, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_174);
        }
#line 238 "par_conj_gen.m"
        {
#line 238 "par_conj_gen.m"
          ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_174, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_175);
        }
#line 239 "par_conj_gen.m"
        {
#line 239 "par_conj_gen.m"
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_175, &ll_backend__par_conj_gen__ConjunctStartPos_163);
        }
#line 241 "par_conj_gen.m"
        {
#line 241 "par_conj_gen.m"
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(ll_backend__par_conj_gen__ConjunctStartPos_163, ll_backend__par_conj_gen__Goals_9, ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161, ll_backend__par_conj_gen__EndLabel_44, ll_backend__par_conj_gen__V_106_106, &ll_backend__par_conj_gen__GoalCode_48, ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_171, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176);
        }
#line 275 "par_conj_gen.m"
        {
#line 275 "par_conj_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__par_conj_gen__BeforeConjunctionPos_162, ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_177);
        }
#line 276 "par_conj_gen.m"
        ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__Depth_17 == (MR_Integer) 0);
#line 279 "par_conj_gen.m"
        if (ll_backend__par_conj_gen__succeeded)
#line 277 "par_conj_gen.m"
          {
#line 277 "par_conj_gen.m"
            {
#line 277 "par_conj_gen.m"
              ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__par_conj_gen__SyncTermSlots_155, (MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176, ll_backend__par_conj_gen__STATE_VARIABLE_CI_52, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_177, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127);
            }
#line 277 "par_conj_gen.m"
          }
#line 279 "par_conj_gen.m"
        else
#line 280 "par_conj_gen.m"
          {
#line 280 "par_conj_gen.m"
            ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_177;
#line 280 "par_conj_gen.m"
            *ll_backend__par_conj_gen__STATE_VARIABLE_CI_52 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176;
#line 280 "par_conj_gen.m"
          }
#line 4309 "ll_backend.par_conj_gen.c"
      }
#line 204 "par_conj_gen.m"
    {
#line 204 "par_conj_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__par_conj_gen__Initial_26, ll_backend__par_conj_gen__Delta_27, &ll_backend__par_conj_gen__Final_28);
    }
#line 205 "par_conj_gen.m"
    {
#line 205 "par_conj_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__par_conj_gen__ModuleInfo_29);
    }
#line 206 "par_conj_gen.m"
    {
#line 206 "par_conj_gen.m"
      ll_backend__par_conj_gen__find_outputs_6_p_0(ll_backend__par_conj_gen__Variables_25, ll_backend__par_conj_gen__Initial_26, ll_backend__par_conj_gen__Final_28, ll_backend__par_conj_gen__ModuleInfo_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__par_conj_gen__Outputs_30);
    }
#line 228 "par_conj_gen.m"
    {
#line 228 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_97_97, 1) = ((MR_Box) (ll_backend__par_conj_gen__SyncTermBaseSlot_39));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_97_97, 2) = ((MR_Box) (ll_backend__par_conj_gen__NumGoals_41));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_97_97, 3) = ((MR_Box) (ll_backend__par_conj_gen__StaticConjId_42));
#line 228 "par_conj_gen.m"
    }
#line 228 "par_conj_gen.m"
    {
#line 228 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_96_96, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_97_97));
#line 228 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_96_96, 1) = ((MR_Box) ((MR_String) "initialize sync term"));
#line 228 "par_conj_gen.m"
    }
#line 227 "par_conj_gen.m"
    {
#line 227 "par_conj_gen.m"
      ll_backend__par_conj_gen__MakeSyncTermCode_43 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ((MR_Box) (ll_backend__par_conj_gen__V_96_96)));
    }
#line 245 "par_conj_gen.m"
    {
#line 245 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 245 "par_conj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_110_110, 1) = ((MR_Box) (ll_backend__par_conj_gen__EndLabel_44));
#line 245 "par_conj_gen.m"
    }
#line 245 "par_conj_gen.m"
    {
#line 245 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_109_109, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_110_110));
#line 245 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_109_109, 1) = ((MR_Box) ((MR_String) "end of parallel conjunction"));
#line 245 "par_conj_gen.m"
    }
#line 246 "par_conj_gen.m"
    {
#line 246 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_114_114 = ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(ll_backend__par_conj_gen__SlotNum_38, ll_backend__par_conj_gen__SyncTermBaseSlot_39);
    }
#line 246 "par_conj_gen.m"
    {
#line 246 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_113_113, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_114_114));
#line 246 "par_conj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_113_113, 1) = ((MR_Box) ((MR_String) "finish parallel conjunction (ThreadScope instrumentation"));
#line 246 "par_conj_gen.m"
    }
#line 248 "par_conj_gen.m"
    {
#line 248 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_112_112, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_113_113));
#line 248 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "par_conj_gen.m"
    }
#line 245 "par_conj_gen.m"
    {
#line 245 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_108_108, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_109_109));
#line 245 "par_conj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_108_108, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_112_112));
#line 245 "par_conj_gen.m"
    }
#line 244 "par_conj_gen.m"
    {
#line 244 "par_conj_gen.m"
      ll_backend__par_conj_gen__EndLabelCode_49 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__V_108_108);
    }
#line 254 "par_conj_gen.m"
    {
#line 254 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__EndLabelCode_49, ll_backend__par_conj_gen__MaybeRestoreParentSpCode_20);
    }
#line 253 "par_conj_gen.m"
    {
#line 253 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_119_119 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__GoalCode_48, ll_backend__par_conj_gen__V_120_120);
    }
#line 252 "par_conj_gen.m"
    {
#line 252 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_118_118 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__MakeSyncTermCode_43, ll_backend__par_conj_gen__V_119_119);
    }
#line 251 "par_conj_gen.m"
    {
#line 251 "par_conj_gen.m"
      ll_backend__par_conj_gen__V_117_117 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__SaveCode_23, ll_backend__par_conj_gen__V_118_118);
    }
#line 250 "par_conj_gen.m"
    {
#line 250 "par_conj_gen.m"
      *ll_backend__par_conj_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__MaybeSetParentSpCode_19, ll_backend__par_conj_gen__V_117_117);
    }
#line 289 "par_conj_gen.m"
    {
#line 289 "par_conj_gen.m"
      ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_129_129);
    }
#line 290 "par_conj_gen.m"
    {
#line 290 "par_conj_gen.m"
      ll_backend__par_conj_gen__place_all_outputs_4_p_0(ll_backend__par_conj_gen__Outputs_30, *ll_backend__par_conj_gen__STATE_VARIABLE_CI_52, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_129_129, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_54);
#line 290 "par_conj_gen.m"
      return;
    }
#line 157 "par_conj_gen.m"
  }
#line 115 "par_conj_gen.m"
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
