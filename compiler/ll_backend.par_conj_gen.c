/*
** Automatically generated from `par_conj_gen.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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
#include "transform_hlds.mih"
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.maybe_error.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_3(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_2(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
  MR_Word ll_backend__par_conj_gen__MaybeEnd0_6,
  MR_Word * ll_backend__par_conj_gen__HeadVar__7_7,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_9);

static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__612__1_1_f_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_23);

static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
  MR_Word ll_backend__par_conj_gen__GoalInfo_5,
  MR_Integer * ll_backend__par_conj_gen__SlotNum_6,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_18);

static void MR_CALL 
ll_backend__par_conj_gen__place_all_outputs_4_p_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CLD_4);

static void MR_CALL 
ll_backend__par_conj_gen__find_outputs_6_p_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6);

static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
  MR_Word ll_backend__par_conj_gen__LVal_4,
  MR_Integer ll_backend__par_conj_gen__Max0_5,
  MR_Integer * ll_backend__par_conj_gen__Max_6);

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_2,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
  MR_Word ll_backend__par_conj_gen__Instrs_3,
  MR_Integer * ll_backend__par_conj_gen__MaxRef_4);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
  MR_Word ll_backend__par_conj_gen__Lval0_5,
  MR_Word * ll_backend__par_conj_gen__Lval_6);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Code_5);

static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1);

static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
  MR_Word ll_backend__par_conj_gen__CLD_4,
  MR_Word ll_backend__par_conj_gen__Var_5,
  MR_Word * ll_backend__par_conj_gen__Locn_6);

static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
  MR_String ll_backend__par_conj_gen__LCVarName_5,
  MR_String ll_backend__par_conj_gen__LCSVarName_6,
  MR_Word ll_backend__par_conj_gen__StackSlot_7,
  MR_String * ll_backend__par_conj_gen__CopyStr_8);

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
  MR_Integer ll_backend__par_conj_gen__FrameSize_6,
  MR_Word ll_backend__par_conj_gen__LCVarLocn_7,
  MR_Word ll_backend__par_conj_gen__LCSVarLocn_8,
  MR_Word ll_backend__par_conj_gen__StackSlots_9,
  MR_String * ll_backend__par_conj_gen__CodeStr_10);

static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
  MR_Integer ll_backend__par_conj_gen__SyncTermBaseSlot_4,
  MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotLval_5);

static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
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



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_3(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6;

    {
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6);
    }
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Instr_6));
  }
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_2(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__2_2;

    {
      ll_backend__par_conj_gen__conv1_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__2_2));
    return ll_backend__par_conj_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6;

    {
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6);
    }
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
  MR_Word ll_backend__par_conj_gen__MaybeEnd0_6,
  MR_Word * ll_backend__par_conj_gen__HeadVar__7_7,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_9)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;

    if ((ll_backend__par_conj_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__par_conj_gen__HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__par_conj_gen__STATE_VARIABLE_CI_9 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8;
      }
    else
      {
        MR_Word ll_backend__par_conj_gen__TypeInfo_72_72;
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_73_73;
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_79_79;
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_87;
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_95;
        MR_Word ll_backend__par_conj_gen__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__par_conj_gen__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__par_conj_gen__ThisGoalCode0_28;
        MR_Word ll_backend__par_conj_gen__ThisGoalCode_29;
        MR_Word ll_backend__par_conj_gen__AllSlots_30;
        MR_Word ll_backend__par_conj_gen__Variables_31;
        MR_Word ll_backend__par_conj_gen__LiveVars_32;
        MR_Word ll_backend__par_conj_gen__StoreMap0_33;
        MR_Word ll_backend__par_conj_gen__StoreMap_34;
        MR_Word ll_backend__par_conj_gen__MaybeEnd_35;
        MR_Word ll_backend__par_conj_gen__SaveCode0_36;
        MR_Word ll_backend__par_conj_gen__SaveCode_37;
        MR_Word ll_backend__par_conj_gen__ForkCode_41;
        MR_Word ll_backend__par_conj_gen__JoinCode_42;
        MR_Word ll_backend__par_conj_gen__GoalCode_43;
        MR_Word ll_backend__par_conj_gen__GoalsCode_44;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_47_47;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50_50;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_55_55;
        MR_Word ll_backend__par_conj_gen__V_68_68;
        MR_Word ll_backend__par_conj_gen__V_69_69;

        {
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__par_conj_gen__HeadVar__1_1, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_47_47);
        }
        {
          ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__par_conj_gen__Goal_19, &ll_backend__par_conj_gen__ThisGoalCode0_28, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_8, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_47_47, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50_50);
        }
        ll_backend__par_conj_gen__TypeCtorInfo_10_87 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_87, ll_backend__par_conj_gen__TypeCtorInfo_10_87, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[9], ll_backend__par_conj_gen__ThisGoalCode0_28, &ll_backend__par_conj_gen__ThisGoalCode_29);
        }
        {
          ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49, &ll_backend__par_conj_gen__AllSlots_30);
        }
        {
          ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50_50, &ll_backend__par_conj_gen__Variables_31);
        }
        ll_backend__par_conj_gen__TypeInfo_72_72 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0];
        {
          mercury__set__list_to_set_2_p_0(ll_backend__par_conj_gen__TypeInfo_72_72, ll_backend__par_conj_gen__Variables_31, &ll_backend__par_conj_gen__LiveVars_32);
        }
        ll_backend__par_conj_gen__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
        {
          mercury__map__select_3_p_0(ll_backend__par_conj_gen__TypeInfo_72_72, ll_backend__par_conj_gen__TypeCtorInfo_73_73, ll_backend__par_conj_gen__AllSlots_30, ll_backend__par_conj_gen__LiveVars_32, &ll_backend__par_conj_gen__StoreMap0_33);
        }
        {
          ll_backend__par_conj_gen__StoreMap_34 = mercury__map__map_values_only_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_73_73, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__par_conj_gen__TypeInfo_72_72, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[10], ll_backend__par_conj_gen__StoreMap0_33);
        }
        {
          ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__par_conj_gen__StoreMap_34, ll_backend__par_conj_gen__MaybeEnd0_6, &ll_backend__par_conj_gen__MaybeEnd_35, &ll_backend__par_conj_gen__SaveCode0_36, ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50_50);
        }
        ll_backend__par_conj_gen__TypeCtorInfo_10_95 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_95, ll_backend__par_conj_gen__TypeCtorInfo_10_95, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[11], ll_backend__par_conj_gen__SaveCode0_36, &ll_backend__par_conj_gen__SaveCode_37);
        }
        if ((ll_backend__par_conj_gen__Goals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
            MR_Word ll_backend__par_conj_gen__V_52_52;
            MR_Word ll_backend__par_conj_gen__V_53_53;

            {
              ll_backend__par_conj_gen__ForkCode_41 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_78_78);
            }
            {
              ll_backend__par_conj_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_53_53, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_53_53, 2) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__4_4));
            }
            {
              ll_backend__par_conj_gen__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_52_52, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_53_53));
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_52_52, 1) = ((MR_Box) ((MR_String) "finish"));
            }
            {
              ll_backend__par_conj_gen__JoinCode_42 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_78_78, ((MR_Box) (ll_backend__par_conj_gen__V_52_52)));
            }
            ll_backend__par_conj_gen__STATE_VARIABLE_CI_55_55 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49;
          }
        else
          {
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_77_77;
            MR_Word ll_backend__par_conj_gen__NextConjunct_40;
            MR_Word ll_backend__par_conj_gen__V_56_56;
            MR_Word ll_backend__par_conj_gen__V_57_57;
            MR_Word ll_backend__par_conj_gen__V_59_59;
            MR_Word ll_backend__par_conj_gen__V_60_60;
            MR_Word ll_backend__par_conj_gen__V_61_61;
            MR_Word ll_backend__par_conj_gen__V_63_63;
            MR_Word ll_backend__par_conj_gen__V_64_64;
            MR_Word ll_backend__par_conj_gen__V_65_65;

            {
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__NextConjunct_40, ll_backend__par_conj_gen__STATE_VARIABLE_CI_49_49, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_55_55);
            }
            ll_backend__par_conj_gen__TypeCtorInfo_77_77 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
            {
              ll_backend__par_conj_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_57_57, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_57_57, 2) = ((MR_Box) (ll_backend__par_conj_gen__NextConjunct_40));
            }
            {
              ll_backend__par_conj_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_56_56, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_57_57));
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_56_56, 1) = ((MR_Box) ((MR_String) "fork off a child"));
            }
            {
              ll_backend__par_conj_gen__ForkCode_41 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__par_conj_gen__V_56_56)));
            }
            {
              ll_backend__par_conj_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_61_61, 1) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__3_3));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_61_61, 2) = ((MR_Box) (ll_backend__par_conj_gen__HeadVar__4_4));
            }
            {
              ll_backend__par_conj_gen__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_60_60, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_61_61));
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_60_60, 1) = ((MR_Box) ((MR_String) "finish"));
            }
            {
              ll_backend__par_conj_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_65_65, 1) = ((MR_Box) (ll_backend__par_conj_gen__NextConjunct_40));
            }
            {
              ll_backend__par_conj_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_64_64, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_65_65));
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_64_64, 1) = ((MR_Box) ((MR_String) "start of the next conjunct"));
            }
            {
              ll_backend__par_conj_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_63_63, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_64_64));
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__par_conj_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_59_59, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
              MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_59_59, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_63_63));
            }
            {
              ll_backend__par_conj_gen__JoinCode_42 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_77_77, ll_backend__par_conj_gen__V_59_59);
            }
          }
        ll_backend__par_conj_gen__TypeCtorInfo_79_79 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__par_conj_gen__V_69_69 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_79_79, ll_backend__par_conj_gen__SaveCode_37, ll_backend__par_conj_gen__JoinCode_42);
        }
        {
          ll_backend__par_conj_gen__V_68_68 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_79_79, ll_backend__par_conj_gen__ThisGoalCode_29, ll_backend__par_conj_gen__V_69_69);
        }
        {
          ll_backend__par_conj_gen__GoalCode_43 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_79_79, ll_backend__par_conj_gen__ForkCode_41, ll_backend__par_conj_gen__V_68_68);
        }
        {
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(ll_backend__par_conj_gen__HeadVar__1_1, ll_backend__par_conj_gen__Goals_20, ll_backend__par_conj_gen__HeadVar__3_3, ll_backend__par_conj_gen__HeadVar__4_4, ll_backend__par_conj_gen__MaybeEnd_35, &ll_backend__par_conj_gen__GoalsCode_44, ll_backend__par_conj_gen__STATE_VARIABLE_CI_55_55, ll_backend__par_conj_gen__STATE_VARIABLE_CI_9);
        }
        {
          *ll_backend__par_conj_gen__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_79_79, ll_backend__par_conj_gen__GoalCode_43, ll_backend__par_conj_gen__GoalsCode_44);
        }
      }
  }
}

static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__612__1_1_f_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_23)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__HeadVar__2_24;

    {
      ll_backend__par_conj_gen__HeadVar__2_24 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__HeadVar__1_23);
    }
    return ll_backend__par_conj_gen__HeadVar__2_24;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
  MR_Word ll_backend__par_conj_gen__GoalInfo_5,
  MR_Integer * ll_backend__par_conj_gen__SlotNum_6,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_18)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__PredId_8;
    MR_Integer ll_backend__par_conj_gen__ProcId_9;
    MR_Word ll_backend__par_conj_gen__ModuleInfo_10;
    MR_String ll_backend__par_conj_gen__ProcString_11;
    MR_Word ll_backend__par_conj_gen__ContainingGoalMap_12;
    MR_Word ll_backend__par_conj_gen__GoalId_13;
    MR_Word ll_backend__par_conj_gen__GoalPath_14;
    MR_String ll_backend__par_conj_gen__GoalPathString_15;
    MR_String ll_backend__par_conj_gen__String_16;
    MR_String ll_backend__par_conj_gen__V_26_26;
    MR_Word ll_backend__par_conj_gen__V_32_32;
    MR_String ll_backend__par_conj_gen__V_34_34;
    MR_String ll_backend__par_conj_gen__V_35_35;

    {
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__PredId_8);
    }
    {
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ProcId_9);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ModuleInfo_10);
    }
    {
      ll_backend__par_conj_gen__ProcString_11 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(ll_backend__par_conj_gen__ModuleInfo_10, ll_backend__par_conj_gen__PredId_8, ll_backend__par_conj_gen__ProcId_9);
    }
    {
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, &ll_backend__par_conj_gen__ContainingGoalMap_12);
    }
    {
      ll_backend__par_conj_gen__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__par_conj_gen__GoalInfo_5);
    }
    {
      ll_backend__par_conj_gen__GoalPath_14 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__par_conj_gen__ContainingGoalMap_12, ll_backend__par_conj_gen__GoalId_13);
    }
    {
      ll_backend__par_conj_gen__GoalPathString_15 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__par_conj_gen__GoalPath_14);
    }
    ll_backend__par_conj_gen__V_32_32 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_2[2];
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_32_32, ll_backend__par_conj_gen__GoalPathString_15, &ll_backend__par_conj_gen__V_26_26);
    }
    {
      ll_backend__par_conj_gen__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ": ", ll_backend__par_conj_gen__V_26_26);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_32_32, ll_backend__par_conj_gen__ProcString_11, &ll_backend__par_conj_gen__V_35_35);
    }
    {
      ll_backend__par_conj_gen__String_16 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_35_35, ll_backend__par_conj_gen__V_34_34);
    }
    {
      ll_backend__code_info__add_threadscope_string_4_p_0(ll_backend__par_conj_gen__String_16, ll_backend__par_conj_gen__SlotNum_6, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_17, ll_backend__par_conj_gen__STATE_VARIABLE_CI_18);
    }
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__place_all_outputs_4_p_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CLD_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__par_conj_gen__succeeded;

        if ((ll_backend__par_conj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__par_conj_gen__STATE_VARIABLE_CLD_4 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3;
        else
          {
            MR_Word ll_backend__par_conj_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__par_conj_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__par_conj_gen__VarLocations_13;
            MR_Word ll_backend__par_conj_gen__Slot_14;
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_18_18;
            MR_Word ll_backend__par_conj_gen__TypeCtorInfo_22_22;
            MR_Word ll_backend__par_conj_gen__Locations_15;
            MR_Box ll_backend__par_conj_gen__conv0_Locations_15;

            {
              ll_backend__code_loc_dep__variable_locations_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3, &ll_backend__par_conj_gen__VarLocations_13);
            }
            {
              ll_backend__code_info__get_variable_slot_3_p_0(ll_backend__par_conj_gen__HeadVar__2_2, ll_backend__par_conj_gen__Var_9, &ll_backend__par_conj_gen__Slot_14);
            }
            {
              ll_backend__par_conj_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__VarLocations_13, ((MR_Box) (ll_backend__par_conj_gen__Var_9)), &ll_backend__par_conj_gen__conv0_Locations_15);
            }
            if (ll_backend__par_conj_gen__succeeded)
              {
                ll_backend__par_conj_gen__Locations_15 = ((MR_Word) ll_backend__par_conj_gen__conv0_Locations_15);
                ll_backend__par_conj_gen__succeeded = MR_TRUE;
              }
            if (ll_backend__par_conj_gen__succeeded)
              {
                ll_backend__par_conj_gen__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                {
                  ll_backend__par_conj_gen__succeeded = mercury__set__member_2_p_0(ll_backend__par_conj_gen__TypeCtorInfo_22_22, ((MR_Box) (ll_backend__par_conj_gen__Slot_14)), ll_backend__par_conj_gen__Locations_15);
                }
              }
            if (ll_backend__par_conj_gen__succeeded)
              ll_backend__par_conj_gen__STATE_VARIABLE_CLD_18_18 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3;
            else
              {
                ll_backend__code_loc_dep__set_var_location_4_p_0(ll_backend__par_conj_gen__Var_9, ll_backend__par_conj_gen__Slot_14, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_18_18);
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1 = ll_backend__par_conj_gen__Vars_10;
              MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0__tmp_copy_3 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_18_18;

              ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_3 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0__tmp_copy_3;
              ll_backend__par_conj_gen__HeadVar__1_1 = ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__par_conj_gen__find_outputs_6_p_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1,
  MR_Word ll_backend__par_conj_gen__HeadVar__2_2,
  MR_Word ll_backend__par_conj_gen__HeadVar__3_3,
  MR_Word ll_backend__par_conj_gen__HeadVar__4_4,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__par_conj_gen__succeeded;

        if ((ll_backend__par_conj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_6 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5;
        else
          {
            MR_Word ll_backend__par_conj_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__par_conj_gen__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__par_conj_gen__InitialInst_19;
            MR_Word ll_backend__par_conj_gen__FinalInst_20;
            MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24;
            MR_Word ll_backend__par_conj_gen__V_23_23;

            {
              hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__par_conj_gen__HeadVar__2_2, ll_backend__par_conj_gen__Var_13, &ll_backend__par_conj_gen__InitialInst_19);
            }
            {
              hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__par_conj_gen__HeadVar__3_3, ll_backend__par_conj_gen__Var_13, &ll_backend__par_conj_gen__FinalInst_20);
            }
            {
              ll_backend__par_conj_gen__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_23_23, 0) = ((MR_Box) (ll_backend__par_conj_gen__InitialInst_19));
              MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_23_23, 1) = ((MR_Box) (ll_backend__par_conj_gen__FinalInst_20));
            }
            {
              ll_backend__par_conj_gen__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ll_backend__par_conj_gen__HeadVar__4_4, ll_backend__par_conj_gen__V_23_23);
            }
            if (ll_backend__par_conj_gen__succeeded)
              {
                ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24, 0) = ((MR_Box) (ll_backend__par_conj_gen__Var_13));
                MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24, 1) = ((MR_Box) (ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5));
              }
            else
              ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1 = ll_backend__par_conj_gen__Vars_14;
              MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0__tmp_copy_5 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_24_24;

              ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0_5 = ll_backend__par_conj_gen__STATE_VARIABLE_Outputs_0__tmp_copy_5;
              ll_backend__par_conj_gen__HeadVar__1_1 = ll_backend__par_conj_gen__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
  MR_Word ll_backend__par_conj_gen__LVal_4,
  MR_Integer ll_backend__par_conj_gen__Max0_5,
  MR_Integer * ll_backend__par_conj_gen__Max_6)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__LVal_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LVal_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Integer ll_backend__par_conj_gen__N_7;

    if (ll_backend__par_conj_gen__succeeded)
      {
        ll_backend__par_conj_gen__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LVal_4, (MR_Integer) 1)));
        ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__N_7 > ll_backend__par_conj_gen__Max0_5);
      }
    if (ll_backend__par_conj_gen__succeeded)
      *ll_backend__par_conj_gen__Max_6 = ll_backend__par_conj_gen__N_7;
    else
      *ll_backend__par_conj_gen__Max_6 = ll_backend__par_conj_gen__Max0_5;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_2,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_3)
{
  {
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Integer ll_backend__par_conj_gen__conv2_Max_6;

    {
      ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), ((MR_Integer) ll_backend__par_conj_gen__wrapper_arg_2), &ll_backend__par_conj_gen__conv2_Max_6);
    }
    *ll_backend__par_conj_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__par_conj_gen__conv2_Max_6));
  }
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__2_24;

    {
      ll_backend__par_conj_gen__conv1_HeadVar__2_24 = ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__612__1_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__2_24));
    return ll_backend__par_conj_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__par_conj_gen__wrapper_arg_2;
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv0_HeadVar__2_2;

    {
      ll_backend__par_conj_gen__conv0_HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
    ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_HeadVar__2_2));
    return ll_backend__par_conj_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
  MR_Word ll_backend__par_conj_gen__Instrs_3,
  MR_Integer * ll_backend__par_conj_gen__MaxRef_4)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_18_18;
    MR_Word ll_backend__par_conj_gen__TypeInfo_19_19;
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_26_26;
    MR_Word ll_backend__par_conj_gen__RVals_5;
    MR_Word ll_backend__par_conj_gen__LVals0_6;
    MR_Word ll_backend__par_conj_gen__LValsInRvalsLists_7;
    MR_Word ll_backend__par_conj_gen__LValsSets_8;
    MR_Word ll_backend__par_conj_gen__LVals_9;
    MR_Word ll_backend__par_conj_gen__V_10_10;
    MR_Word ll_backend__par_conj_gen__V_12_12;
    MR_Word ll_backend__par_conj_gen__V_14_14;
    MR_Box ll_backend__par_conj_gen__conv3_MaxRef_4;

    {
      ll_backend__par_conj_gen__V_10_10 = mercury__cord__list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__par_conj_gen__Instrs_3);
    }
    {
      ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(ll_backend__par_conj_gen__V_10_10, &ll_backend__par_conj_gen__RVals_5, &ll_backend__par_conj_gen__LVals0_6);
    }
    ll_backend__par_conj_gen__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    ll_backend__par_conj_gen__TypeInfo_19_19 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[2];
    {
      ll_backend__par_conj_gen__V_12_12 = mercury__set__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_18_18, ll_backend__par_conj_gen__RVals_5);
    }
    {
      ll_backend__par_conj_gen__LValsInRvalsLists_7 = mercury__list__map_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_18_18, ll_backend__par_conj_gen__TypeInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[6], ll_backend__par_conj_gen__V_12_12);
    }
    {
      ll_backend__par_conj_gen__LValsSets_8 = mercury__list__map_2_f_0(ll_backend__par_conj_gen__TypeInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[7], ll_backend__par_conj_gen__LValsInRvalsLists_7);
    }
    ll_backend__par_conj_gen__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      ll_backend__par_conj_gen__V_14_14 = mercury__set__union_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, ll_backend__par_conj_gen__LValsSets_8);
    }
    {
      ll_backend__par_conj_gen__LVals_9 = mercury__set__union_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, ll_backend__par_conj_gen__V_14_14, ll_backend__par_conj_gen__LVals0_6);
    }
    {
      mercury__set__fold_4_p_0(ll_backend__par_conj_gen__TypeCtorInfo_26_26, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[8], ll_backend__par_conj_gen__LVals_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv3_MaxRef_4);
    }
    *ll_backend__par_conj_gen__MaxRef_4 = ((MR_Integer) ll_backend__par_conj_gen__conv3_MaxRef_4);
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4)
{
  {
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv0_Lval_6;

    {
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_Lval_6);
    }
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_Lval_6));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
  MR_Word ll_backend__par_conj_gen__Lval0_5,
  MR_Word * ll_backend__par_conj_gen__Lval_6)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__TransformRval_8 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[5];

    switch (MR_tag((MR_Word) ll_backend__par_conj_gen__Lval0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__par_conj_gen__SlotNum_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__par_conj_gen__Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_58));
              }
            }
            break;
          case (MR_Integer) 1:
            *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__par_conj_gen__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
              MR_Integer ll_backend__par_conj_gen__SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 2)));

              switch (ll_backend__par_conj_gen__Type_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *ll_backend__par_conj_gen__Lval_6 = ll_backend__par_conj_gen__Lval0_5;
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__par_conj_gen__Lval_6 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_35));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__par_conj_gen__Rval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__par_conj_gen__Rval_18;
              MR_Box ll_backend__par_conj_gen__conv8_STATE_VARIABLE_Acc_25;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_17, &ll_backend__par_conj_gen__Rval_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv8_STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__par_conj_gen__Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_18));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__par_conj_gen__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__par_conj_gen__Rval_42;
              MR_Box ll_backend__par_conj_gen__conv7_STATE_VARIABLE_Acc_25;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_41, &ll_backend__par_conj_gen__Rval_42, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv7_STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__par_conj_gen__Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_42));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__par_conj_gen__Rval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__par_conj_gen__Rval_38;
              MR_Box ll_backend__par_conj_gen__conv6_STATE_VARIABLE_Acc_25;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_37, &ll_backend__par_conj_gen__Rval_38, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv6_STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__par_conj_gen__Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_38));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__par_conj_gen__Rval0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__par_conj_gen__Rval_40;
              MR_Box ll_backend__par_conj_gen__conv5_STATE_VARIABLE_Acc_25;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_39, &ll_backend__par_conj_gen__Rval_40, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv5_STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__par_conj_gen__Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_40));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__par_conj_gen__Rval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__par_conj_gen__Rval_44;
              MR_Box ll_backend__par_conj_gen__conv4_STATE_VARIABLE_Acc_25;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_43, &ll_backend__par_conj_gen__Rval_44, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv4_STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__par_conj_gen__Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_44));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__par_conj_gen__TypeCtorInfo_56_56 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
              MR_Word ll_backend__par_conj_gen__Tag_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__par_conj_gen__Rval1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 2)));
              MR_Word ll_backend__par_conj_gen__Rval2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 3)));
              MR_Word ll_backend__par_conj_gen__Rval3_22;
              MR_Word ll_backend__par_conj_gen__Rval4_23;
              MR_Box ll_backend__par_conj_gen__conv1_STATE_VARIABLE_Acc_27_27;
              MR_Box ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Acc_25;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__par_conj_gen__TypeCtorInfo_56_56, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval1_20, &ll_backend__par_conj_gen__Rval3_22, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv1_STATE_VARIABLE_Acc_27_27);
              }
              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__par_conj_gen__TypeCtorInfo_56_56, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval2_21, &ll_backend__par_conj_gen__Rval4_23, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv2_STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__par_conj_gen__Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Tag_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__par_conj_gen__Rval3_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__par_conj_gen__Rval4_23));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__par_conj_gen__Rval0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__Lval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__par_conj_gen__Rval_46;
              MR_Box ll_backend__par_conj_gen__conv3_STATE_VARIABLE_Acc_25;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ll_backend__par_conj_gen__TransformRval_8, ll_backend__par_conj_gen__Rval0_45, &ll_backend__par_conj_gen__Rval_46, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv3_STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__par_conj_gen__Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__par_conj_gen__Rval_46));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_3,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_4)
{
  {
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv0_Lval_6;

    {
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_Lval_6);
    }
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_Lval_6));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Box ll_backend__par_conj_gen__conv1_V_4_4;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      ll_backend__exprn_aux__transform_lval_in_instr_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[4], ll_backend__par_conj_gen__STATE_VARIABLE_Instr_0_5, ll_backend__par_conj_gen__STATE_VARIABLE_Instr_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__par_conj_gen__conv1_V_4_4);
    }
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6;

    {
      ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6);
    }
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_STATE_VARIABLE_Instr_6));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_Code_5)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_10_10 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

    {
      mercury__cord__map_pred_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_10_10, ll_backend__par_conj_gen__TypeCtorInfo_10_10, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[3], ll_backend__par_conj_gen__STATE_VARIABLE_Code_0_4, ll_backend__par_conj_gen__STATE_VARIABLE_Code_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
  MR_Word ll_backend__par_conj_gen__HeadVar__1_1)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__par_conj_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ll_backend__par_conj_gen__V_2_2;
    MR_Integer ll_backend__par_conj_gen__V_3_3;

    if (ll_backend__par_conj_gen__succeeded)
      {
        ll_backend__par_conj_gen__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 0)));
        ll_backend__par_conj_gen__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__HeadVar__1_1, (MR_Integer) 1)));
      }
    return ll_backend__par_conj_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;

    {
      ll_backend__par_conj_gen__succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
    return ll_backend__par_conj_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
  MR_Word ll_backend__par_conj_gen__CLD_4,
  MR_Word ll_backend__par_conj_gen__Var_5,
  MR_Word * ll_backend__par_conj_gen__Locn_6)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_19_19;
    MR_Word ll_backend__par_conj_gen__Map_7;
    MR_Word ll_backend__par_conj_gen__AllLocnsSet_8;
    MR_Word ll_backend__par_conj_gen__AllLocns_9;
    MR_Word ll_backend__par_conj_gen__RegLocns_10;
    MR_Box ll_backend__par_conj_gen__conv0_AllLocnsSet_8;

    {
      ll_backend__code_loc_dep__variable_locations_2_p_0(ll_backend__par_conj_gen__CLD_4, &ll_backend__par_conj_gen__Map_7);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__Map_7, ((MR_Box) (ll_backend__par_conj_gen__Var_5)), &ll_backend__par_conj_gen__conv0_AllLocnsSet_8);
    }
    ll_backend__par_conj_gen__AllLocnsSet_8 = ((MR_Word) ll_backend__par_conj_gen__conv0_AllLocnsSet_8);
    ll_backend__par_conj_gen__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_19, ll_backend__par_conj_gen__AllLocnsSet_8, &ll_backend__par_conj_gen__AllLocns_9);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[2], ll_backend__par_conj_gen__AllLocns_9, &ll_backend__par_conj_gen__RegLocns_10);
    }
    if ((ll_backend__par_conj_gen__RegLocns_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__par_conj_gen__AllLocns_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
            return;
          }
        }
      else
        {
          MR_Word ll_backend__par_conj_gen__V_12_12;

          *ll_backend__par_conj_gen__Locn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__AllLocns_9, (MR_Integer) 0)));
          ll_backend__par_conj_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__AllLocns_9, (MR_Integer) 1)));
        }
    else
      {
        MR_Word ll_backend__par_conj_gen__V_11_11;

        *ll_backend__par_conj_gen__Locn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__RegLocns_10, (MR_Integer) 0)));
        ll_backend__par_conj_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__RegLocns_10, (MR_Integer) 1)));
      }
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
  MR_String ll_backend__par_conj_gen__LCVarName_5,
  MR_String ll_backend__par_conj_gen__LCSVarName_6,
  MR_Word ll_backend__par_conj_gen__StackSlot_7,
  MR_String * ll_backend__par_conj_gen__CopyStr_8)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_String ll_backend__par_conj_gen__StackSlotName_9;

    {
      ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__StackSlot_7, &ll_backend__par_conj_gen__StackSlotName_9);
    }
    if (ll_backend__par_conj_gen__succeeded)
      {
        MR_Integer ll_backend__par_conj_gen__N_10;

        ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__StackSlot_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__StackSlot_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ll_backend__par_conj_gen__succeeded)
          {
            ll_backend__par_conj_gen__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__StackSlot_7, (MR_Integer) 1)));
            {
              MR_String ll_backend__par_conj_gen__V_28_28;
              MR_Word ll_backend__par_conj_gen__V_34_34 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_2[2];
              MR_String ll_backend__par_conj_gen__V_35_35;
              MR_String ll_backend__par_conj_gen__V_37_37;
              MR_String ll_backend__par_conj_gen__V_38_38;
              MR_String ll_backend__par_conj_gen__V_45_45;
              MR_String ll_backend__par_conj_gen__V_47_47;
              MR_String ll_backend__par_conj_gen__V_48_48;
              MR_String ll_backend__par_conj_gen__V_55_55;
              MR_String ll_backend__par_conj_gen__V_57_57;
              MR_String ll_backend__par_conj_gen__V_58_58;
              MR_String ll_backend__par_conj_gen__V_65_65;

              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_34_34, ll_backend__par_conj_gen__StackSlotName_9, &ll_backend__par_conj_gen__V_28_28);
              }
              {
                ll_backend__par_conj_gen__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_28_28, (MR_String) ";\n");
              }
              {
                ll_backend__par_conj_gen__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", ll_backend__par_conj_gen__V_35_35);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_34_34, ll_backend__par_conj_gen__N_10, &ll_backend__par_conj_gen__V_38_38);
              }
              {
                ll_backend__par_conj_gen__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_38_38, ll_backend__par_conj_gen__V_37_37);
              }
              {
                ll_backend__par_conj_gen__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_45_45);
              }
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_34_34, ll_backend__par_conj_gen__LCSVarName_6, &ll_backend__par_conj_gen__V_48_48);
              }
              {
                ll_backend__par_conj_gen__V_55_55 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_48_48, ll_backend__par_conj_gen__V_47_47);
              }
              {
                ll_backend__par_conj_gen__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_55_55);
              }
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_34_34, ll_backend__par_conj_gen__LCVarName_5, &ll_backend__par_conj_gen__V_58_58);
              }
              {
                ll_backend__par_conj_gen__V_65_65 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_58_58, ll_backend__par_conj_gen__V_57_57);
              }
              {
                *ll_backend__par_conj_gen__CopyStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_worker_sv(", ll_backend__par_conj_gen__V_65_65);
              }
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "not stack slot");
              return;
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "cannot convert to string");
          return;
        }
      }
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_String ll_backend__par_conj_gen__conv0_CopyStr_8;

    {
      ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv0_CopyStr_8);
    }
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv0_CopyStr_8));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
  MR_Integer ll_backend__par_conj_gen__FrameSize_6,
  MR_Word ll_backend__par_conj_gen__LCVarLocn_7,
  MR_Word ll_backend__par_conj_gen__LCSVarLocn_8,
  MR_Word ll_backend__par_conj_gen__StackSlots_9,
  MR_String * ll_backend__par_conj_gen__CodeStr_10)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_String ll_backend__par_conj_gen__LCVarName_13;
    MR_String ll_backend__par_conj_gen__LCSVarName_14;
    MR_String ll_backend__par_conj_gen__IncrLine_16;
    MR_Word ll_backend__par_conj_gen__CopyStrs_17;
    MR_String ll_backend__par_conj_gen__CopyLines_18;
    MR_Word ll_backend__par_conj_gen__V_31_31;
    MR_String ll_backend__par_conj_gen__V_32_32;
    MR_String ll_backend__par_conj_gen__V_33_33;
    MR_String ll_backend__par_conj_gen__V_39_39;
    MR_Word ll_backend__par_conj_gen__V_45_45;
    MR_String ll_backend__par_conj_gen__V_46_46;
    MR_String ll_backend__par_conj_gen__V_48_48;
    MR_String ll_backend__par_conj_gen__V_49_49;
    MR_String ll_backend__par_conj_gen__V_56_56;
    MR_String ll_backend__par_conj_gen__V_58_58;
    MR_String ll_backend__par_conj_gen__V_59_59;
    MR_String ll_backend__par_conj_gen__V_66_66;
    MR_String ll_backend__par_conj_gen__LCVarNamePrime_11;
    MR_String ll_backend__par_conj_gen__LCSVarNamePrime_12;

    {
      ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__LCVarLocn_7, &ll_backend__par_conj_gen__LCVarNamePrime_11);
    }
    if (ll_backend__par_conj_gen__succeeded)
      {
        ll_backend__par_conj_gen__succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(ll_backend__par_conj_gen__LCSVarLocn_8, &ll_backend__par_conj_gen__LCSVarNamePrime_12);
      }
    if (ll_backend__par_conj_gen__succeeded)
      {
        ll_backend__par_conj_gen__LCVarName_13 = ll_backend__par_conj_gen__LCVarNamePrime_11;
        ll_backend__par_conj_gen__LCSVarName_14 = ll_backend__par_conj_gen__LCSVarNamePrime_12;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_slots_to_child_stack\'/5", (MR_String) "cannot convert to string");
          return;
        }
      }
    ll_backend__par_conj_gen__V_45_45 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_2[2];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_45_45, ll_backend__par_conj_gen__FrameSize_6, &ll_backend__par_conj_gen__V_39_39);
    }
    {
      ll_backend__par_conj_gen__V_46_46 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_39_39, (MR_String) ");\n");
    }
    {
      ll_backend__par_conj_gen__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_46_46);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_45_45, ll_backend__par_conj_gen__LCSVarName_14, &ll_backend__par_conj_gen__V_49_49);
    }
    {
      ll_backend__par_conj_gen__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_49_49, ll_backend__par_conj_gen__V_48_48);
    }
    {
      ll_backend__par_conj_gen__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__par_conj_gen__V_56_56);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__par_conj_gen__V_45_45, ll_backend__par_conj_gen__LCVarName_13, &ll_backend__par_conj_gen__V_59_59);
    }
    {
      ll_backend__par_conj_gen__V_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_59_59, ll_backend__par_conj_gen__V_58_58);
    }
    {
      ll_backend__par_conj_gen__IncrLine_16 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_inc_worker_sp(", ll_backend__par_conj_gen__V_66_66);
    }
    {
      ll_backend__par_conj_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 1) = ((MR_Box) (ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 3) = ((MR_Box) (ll_backend__par_conj_gen__LCVarName_13));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_31_31, 4) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarName_14));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__par_conj_gen__V_31_31, ll_backend__par_conj_gen__StackSlots_9, &ll_backend__par_conj_gen__CopyStrs_17);
    }
    {
      mercury__string__append_list_2_p_0(ll_backend__par_conj_gen__CopyStrs_17, &ll_backend__par_conj_gen__CopyLines_18);
    }
    {
      ll_backend__par_conj_gen__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__CopyLines_18, (MR_String) "\t}\n");
    }
    {
      ll_backend__par_conj_gen__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__IncrLine_16, ll_backend__par_conj_gen__V_33_33);
    }
    {
      *ll_backend__par_conj_gen__CodeStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", ll_backend__par_conj_gen__V_32_32);
    }
  }
}

static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
  MR_Integer ll_backend__par_conj_gen__SyncTermBaseSlot_4,
  MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotLval_5)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__HeadVar__3_3;
    MR_Word ll_backend__par_conj_gen__Components_6;
    MR_Word ll_backend__par_conj_gen__V_17_17;
    MR_Word ll_backend__par_conj_gen__V_20_20;
    MR_Word ll_backend__par_conj_gen__V_21_21;
    MR_Word ll_backend__par_conj_gen__V_22_22;
    MR_String ll_backend__par_conj_gen__V_24_24;
    MR_String ll_backend__par_conj_gen__V_31_31;
    MR_String ll_backend__par_conj_gen__V_38_38;

    {
      ll_backend__par_conj_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_22_22, 0) = ((MR_Box) (ll_backend__par_conj_gen__SyncTermBaseSlotLval_5));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__par_conj_gen__V_21_21 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__V_22_22);
    }
    {
      ll_backend__par_conj_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_20_20, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_21_21));
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_2[2], ll_backend__par_conj_gen__SyncTermBaseSlot_4, &ll_backend__par_conj_gen__V_31_31);
    }
    {
      ll_backend__par_conj_gen__V_38_38 = mercury__string__f_43_43_2_f_0(ll_backend__par_conj_gen__V_31_31, (MR_String) "));\n#endif\n");
    }
    {
      ll_backend__par_conj_gen__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "#ifdef MR_THREADSCOPE\nMR_threadscope_post_end_par_conj(&MR_sv(", ll_backend__par_conj_gen__V_38_38);
    }
    {
      ll_backend__par_conj_gen__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 3) = ((MR_Box) (ll_backend__par_conj_gen__V_20_20));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_17_17, 4) = ((MR_Box) (ll_backend__par_conj_gen__V_24_24));
    }
    {
      ll_backend__par_conj_gen__Components_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__Components_6, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_17_17));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__Components_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__par_conj_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__par_conj_gen__Components_6));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 9) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__HeadVar__3_3, 10) = ((MR_Box) ((MR_Integer) 0));
    }
    return ll_backend__par_conj_gen__HeadVar__3_3;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1,
  MR_Box * ll_backend__par_conj_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;
    MR_Word ll_backend__par_conj_gen__conv1_HeadVar__3_3;

    {
      ll_backend__code_info__get_variable_slot_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1), &ll_backend__par_conj_gen__conv1_HeadVar__3_3);
    }
    *ll_backend__par_conj_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__par_conj_gen__conv1_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1(
  MR_Box ll_backend__par_conj_gen__closure_arg,
  MR_Box ll_backend__par_conj_gen__wrapper_arg_1)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Box ll_backend__par_conj_gen__closure = ll_backend__par_conj_gen__closure_arg;

    {
      ll_backend__par_conj_gen__succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) ll_backend__par_conj_gen__wrapper_arg_1));
    }
    return ll_backend__par_conj_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0(
  MR_Word ll_backend__par_conj_gen__Goal_10,
  MR_Word ll_backend__par_conj_gen__LCVar_11,
  MR_Word ll_backend__par_conj_gen__LCSVar_12,
  MR_Word ll_backend__par_conj_gen__UseParentStack_13,
  MR_Word * ll_backend__par_conj_gen__Code_14,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_47,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_48,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_49,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_75_75;
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_76_76;
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_19_96;
    MR_Word ll_backend__par_conj_gen__KnownVars_17;
    MR_Word ll_backend__par_conj_gen__KnownVarsSet_18;
    MR_Word ll_backend__par_conj_gen__NonLocalsSet_19;
    MR_Word ll_backend__par_conj_gen__InputVarsSet_20;
    MR_Word ll_backend__par_conj_gen__InputVars_21;
    MR_Word ll_backend__par_conj_gen__SaveCode_22;
    MR_Word ll_backend__par_conj_gen__LCVarLocn_23;
    MR_Word ll_backend__par_conj_gen__LCSVarLocn_24;
    MR_Word ll_backend__par_conj_gen__SpawnOffLabel_25;
    MR_Word ll_backend__par_conj_gen__SpawnUinstr_26;
    MR_Word ll_backend__par_conj_gen__SpawnInstr_27;
    MR_Word ll_backend__par_conj_gen__SpawnOffCode_28;
    MR_Word ll_backend__par_conj_gen__PositionAfterSpawnOff_29;
    MR_Word ll_backend__par_conj_gen__LabelUinstr_30;
    MR_Word ll_backend__par_conj_gen__LabelInstr_31;
    MR_Word ll_backend__par_conj_gen__LabelCode_32;
    MR_Word ll_backend__par_conj_gen__GoalCode_33;
    MR_Word ll_backend__par_conj_gen__SpawnedOffCode0_35;
    MR_Word ll_backend__par_conj_gen__SpawnedOffCode_36;
    MR_Word ll_backend__par_conj_gen__CopyCode_37;
    MR_Word ll_backend__par_conj_gen__V_51_51;
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52;
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53;
    MR_Word ll_backend__par_conj_gen__V_54_54;
    MR_Word ll_backend__par_conj_gen__V_55_55;
    MR_Word ll_backend__par_conj_gen__V_58_58;
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_59_59;
    MR_Word ll_backend__par_conj_gen__V_60_60;
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63;
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_64_64;
    MR_Word ll_backend__par_conj_gen__V_73_73;
    MR_Word ll_backend__par_conj_gen__Map_84;
    MR_Word ll_backend__par_conj_gen__AllLocnsSet_85;
    MR_Word ll_backend__par_conj_gen__AllLocns_86;
    MR_Word ll_backend__par_conj_gen__RegLocns_87;
    MR_Word ll_backend__par_conj_gen__V_74_74;
    MR_Box ll_backend__par_conj_gen__conv0_AllLocnsSet_85;
    MR_Word ll_backend__par_conj_gen___CLDAfterGoal_34;

    {
      ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_49, &ll_backend__par_conj_gen__KnownVars_17);
    }
    ll_backend__par_conj_gen__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      ll_backend__par_conj_gen__KnownVarsSet_18 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__KnownVars_17);
    }
    ll_backend__par_conj_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__Goal_10, (MR_Integer) 0)));
    ll_backend__par_conj_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__Goal_10, (MR_Integer) 1)));
    {
      ll_backend__par_conj_gen__NonLocalsSet_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__par_conj_gen__V_51_51);
    }
    {
      ll_backend__par_conj_gen__InputVarsSet_20 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__NonLocalsSet_19, ll_backend__par_conj_gen__KnownVarsSet_18);
    }
    {
      ll_backend__par_conj_gen__InputVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__InputVarsSet_20);
    }
    {
      ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__par_conj_gen__InputVars_21, &ll_backend__par_conj_gen__SaveCode_22, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_47, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_49, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52);
    }
    {
      ll_backend__code_loc_dep__variable_locations_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__par_conj_gen__Map_84);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], ll_backend__par_conj_gen__Map_84, ((MR_Box) (ll_backend__par_conj_gen__LCVar_11)), &ll_backend__par_conj_gen__conv0_AllLocnsSet_85);
    }
    ll_backend__par_conj_gen__AllLocnsSet_85 = ((MR_Word) ll_backend__par_conj_gen__conv0_AllLocnsSet_85);
    ll_backend__par_conj_gen__TypeCtorInfo_19_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_96, ll_backend__par_conj_gen__AllLocnsSet_85, &ll_backend__par_conj_gen__AllLocns_86);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__par_conj_gen__TypeCtorInfo_19_96, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[1], ll_backend__par_conj_gen__AllLocns_86, &ll_backend__par_conj_gen__RegLocns_87);
    }
    if ((ll_backend__par_conj_gen__RegLocns_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__par_conj_gen__AllLocns_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
            return;
          }
        }
      else
        {
          MR_Word ll_backend__par_conj_gen__V_89_89;

          ll_backend__par_conj_gen__LCVarLocn_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__AllLocns_86, (MR_Integer) 0)));
          ll_backend__par_conj_gen__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__AllLocns_86, (MR_Integer) 1)));
        }
    else
      {
        MR_Word ll_backend__par_conj_gen__V_88_88;

        ll_backend__par_conj_gen__LCVarLocn_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__RegLocns_87, (MR_Integer) 0)));
        ll_backend__par_conj_gen__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__RegLocns_87, (MR_Integer) 1)));
      }
    {
      ll_backend__par_conj_gen__best_variable_location_det_3_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52, ll_backend__par_conj_gen__LCSVar_12, &ll_backend__par_conj_gen__LCSVarLocn_24);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__SpawnOffLabel_25, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_47, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53);
    }
    {
      ll_backend__par_conj_gen__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_54_54, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_23));
    }
    {
      ll_backend__par_conj_gen__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_55_55, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_24));
    }
    {
      ll_backend__par_conj_gen__SpawnUinstr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_26, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_54_54));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_26, 2) = ((MR_Box) (ll_backend__par_conj_gen__V_55_55));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SpawnUinstr_26, 3) = ((MR_Box) (ll_backend__par_conj_gen__SpawnOffLabel_25));
    }
    {
      ll_backend__par_conj_gen__SpawnInstr_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__SpawnInstr_27, 0) = ((MR_Box) (ll_backend__par_conj_gen__SpawnUinstr_26));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__SpawnInstr_27, 1) = ((MR_Box) ((MR_String) ""));
    }
    ll_backend__par_conj_gen__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__par_conj_gen__SpawnOffCode_28 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__par_conj_gen__SpawnInstr_27)));
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__par_conj_gen__PositionAfterSpawnOff_29);
    }
    {
      ll_backend__par_conj_gen__LabelUinstr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LabelUinstr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__LabelUinstr_30, 1) = ((MR_Box) (ll_backend__par_conj_gen__SpawnOffLabel_25));
    }
    {
      ll_backend__par_conj_gen__LabelInstr_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__LabelInstr_31, 0) = ((MR_Box) (ll_backend__par_conj_gen__LabelUinstr_30));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__LabelInstr_31, 1) = ((MR_Box) ((MR_String) "Label for spawned off code"));
    }
    {
      ll_backend__par_conj_gen__LabelCode_32 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__par_conj_gen__LabelInstr_31)));
    }
    {
      ll_backend__par_conj_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_60_60, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_24));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__par_conj_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_58_58, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_23));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_58_58, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_60_60));
    }
    {
      ll_backend__code_loc_dep__clobber_regs_3_p_0(ll_backend__par_conj_gen__V_58_58, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_59_59);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__par_conj_gen__Goal_10, &ll_backend__par_conj_gen__GoalCode_33, ll_backend__par_conj_gen__STATE_VARIABLE_CI_53_53, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_59_59, &ll_backend__par_conj_gen___CLDAfterGoal_34);
    }
    {
      ll_backend__par_conj_gen__SpawnedOffCode0_35 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__LabelCode_32, ll_backend__par_conj_gen__GoalCode_33);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__par_conj_gen__PositionAfterSpawnOff_29, ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_64_64);
    }
    switch (ll_backend__par_conj_gen__UseParentStack_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__par_conj_gen__TypeCtorInfo_80_80;
          MR_Word ll_backend__par_conj_gen__InputStackSlots_39;
          MR_Integer ll_backend__par_conj_gen__FrameSize_41;
          MR_String ll_backend__par_conj_gen__CopyStr_42;
          MR_Word ll_backend__par_conj_gen__LiveLvalsInfo_44;
          MR_Word ll_backend__par_conj_gen__CopyUinstr_45;
          MR_Word ll_backend__par_conj_gen__CopyInstr_46;
          MR_Word ll_backend__par_conj_gen__V_65_65;
          MR_Word ll_backend__par_conj_gen__V_66_66;
          MR_Word ll_backend__par_conj_gen__V_67_67;
          MR_Word ll_backend__par_conj_gen__V_68_68;

          {
            ll_backend__par_conj_gen__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_65_65, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_65_65, 1) = ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2));
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_65_65, 3) = ((MR_Box) (ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63));
          }
          ll_backend__par_conj_gen__TypeCtorInfo_80_80 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          {
            mercury__list__map_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], ll_backend__par_conj_gen__TypeCtorInfo_80_80, ll_backend__par_conj_gen__V_65_65, ll_backend__par_conj_gen__InputVars_21, &ll_backend__par_conj_gen__InputStackSlots_39);
          }
          {
            ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(ll_backend__par_conj_gen__SpawnedOffCode0_35, &ll_backend__par_conj_gen__FrameSize_41);
          }
          ll_backend__par_conj_gen__SpawnedOffCode_36 = ll_backend__par_conj_gen__SpawnedOffCode0_35;
          {
            ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(ll_backend__par_conj_gen__FrameSize_41, ll_backend__par_conj_gen__LCVarLocn_23, ll_backend__par_conj_gen__LCSVarLocn_24, ll_backend__par_conj_gen__InputStackSlots_39, &ll_backend__par_conj_gen__CopyStr_42);
          }
          {
            ll_backend__par_conj_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_68_68, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCSVarLocn_24));
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_68_68, 1) = ((MR_Box) (ll_backend__par_conj_gen__InputStackSlots_39));
          }
          {
            ll_backend__par_conj_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_67_67, 0) = ((MR_Box) (ll_backend__par_conj_gen__LCVarLocn_23));
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_67_67, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_68_68));
          }
          {
            ll_backend__par_conj_gen__V_66_66 = mercury__set__list_to_set_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_80_80, ll_backend__par_conj_gen__V_67_67);
          }
          {
            ll_backend__par_conj_gen__LiveLvalsInfo_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__LiveLvalsInfo_44, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_66_66));
          }
          {
            ll_backend__par_conj_gen__CopyUinstr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_45, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_45, 2) = ((MR_Box) (ll_backend__par_conj_gen__LiveLvalsInfo_44));
            MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__CopyUinstr_45, 3) = ((MR_Box) (ll_backend__par_conj_gen__CopyStr_42));
          }
          {
            ll_backend__par_conj_gen__CopyInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__CopyInstr_46, 0) = ((MR_Box) (ll_backend__par_conj_gen__CopyUinstr_45));
            MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__CopyInstr_46, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__par_conj_gen__CopyCode_37 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__par_conj_gen__CopyInstr_46)));
          }
          *ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_64_64;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__par_conj_gen__OutputVars_38;
          MR_Word ll_backend__par_conj_gen__V_70_70;

          {
            ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(ll_backend__par_conj_gen__SpawnedOffCode0_35, &ll_backend__par_conj_gen__SpawnedOffCode_36);
          }
          {
            ll_backend__par_conj_gen__CopyCode_37 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76);
          }
          {
            ll_backend__par_conj_gen__OutputVars_38 = parse_tree__set_of_var__difference_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__NonLocalsSet_19, ll_backend__par_conj_gen__KnownVarsSet_18);
          }
          {
            ll_backend__par_conj_gen__V_70_70 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_75_75, ll_backend__par_conj_gen__OutputVars_38);
          }
          {
            ll_backend__par_conj_gen__place_all_outputs_4_p_0(ll_backend__par_conj_gen__V_70_70, ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_50);
          }
        }
        break;
    }
    {
      ll_backend__code_info__add_out_of_line_code_3_p_0(ll_backend__par_conj_gen__SpawnedOffCode_36, ll_backend__par_conj_gen__STATE_VARIABLE_CI_63_63, ll_backend__par_conj_gen__STATE_VARIABLE_CI_48);
    }
    {
      ll_backend__par_conj_gen__V_73_73 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__CopyCode_37, ll_backend__par_conj_gen__SpawnOffCode_28);
    }
    {
      *ll_backend__par_conj_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_76_76, ll_backend__par_conj_gen__SaveCode_22, ll_backend__par_conj_gen__V_73_73);
    }
  }
}

void MR_CALL 
ll_backend__par_conj_gen__generate_par_conj_8_p_0(
  MR_Word ll_backend__par_conj_gen__Goals_9,
  MR_Word ll_backend__par_conj_gen__GoalInfo_10,
  MR_Word ll_backend__par_conj_gen__CodeModel_11,
  MR_Word * ll_backend__par_conj_gen__Code_12,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_51,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CI_52,
  MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53,
  MR_Word * ll_backend__par_conj_gen__STATE_VARIABLE_CLD_54)
{
  {
    MR_bool ll_backend__par_conj_gen__succeeded;
    MR_Word ll_backend__par_conj_gen__TypeCtorInfo_137_137;
    MR_Word ll_backend__par_conj_gen__Globals_15;
    MR_Integer ll_backend__par_conj_gen__STSize_16;
    MR_Integer ll_backend__par_conj_gen__Depth_17;
    MR_Word ll_backend__par_conj_gen__MaybeSetParentSpCode_19;
    MR_Word ll_backend__par_conj_gen__MaybeRestoreParentSpCode_20;
    MR_Word ll_backend__par_conj_gen__SaveCode_23;
    MR_Word ll_backend__par_conj_gen__Nonlocals_24;
    MR_Word ll_backend__par_conj_gen__Variables_25;
    MR_Word ll_backend__par_conj_gen__Initial_26;
    MR_Word ll_backend__par_conj_gen__Delta_27;
    MR_Word ll_backend__par_conj_gen__Final_28;
    MR_Word ll_backend__par_conj_gen__ModuleInfo_29;
    MR_Word ll_backend__par_conj_gen__Outputs_30;
    MR_Word ll_backend__par_conj_gen__Contents_31;
    MR_Integer ll_backend__par_conj_gen__SlotNum_38;
    MR_Word ll_backend__par_conj_gen__SyncTermBaseSlot_39;
    MR_Integer ll_backend__par_conj_gen__NumGoals_41;
    MR_Integer ll_backend__par_conj_gen__StaticConjId_42;
    MR_Word ll_backend__par_conj_gen__MakeSyncTermCode_43;
    MR_Word ll_backend__par_conj_gen__EndLabel_44;
    MR_Word ll_backend__par_conj_gen__GoalCode_48;
    MR_Word ll_backend__par_conj_gen__EndLabelCode_49;
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64;
    MR_Word ll_backend__par_conj_gen__V_96_96;
    MR_Word ll_backend__par_conj_gen__V_97_97;
    MR_Word ll_backend__par_conj_gen__V_106_106;
    MR_Word ll_backend__par_conj_gen__V_108_108;
    MR_Word ll_backend__par_conj_gen__V_109_109;
    MR_Word ll_backend__par_conj_gen__V_110_110;
    MR_Word ll_backend__par_conj_gen__V_112_112;
    MR_Word ll_backend__par_conj_gen__V_113_113;
    MR_Word ll_backend__par_conj_gen__V_114_114;
    MR_Word ll_backend__par_conj_gen__V_117_117;
    MR_Word ll_backend__par_conj_gen__V_118_118;
    MR_Word ll_backend__par_conj_gen__V_119_119;
    MR_Word ll_backend__par_conj_gen__V_120_120;
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127;
    MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_129_129;

    switch (ll_backend__par_conj_gen__CodeModel_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "nondet parallel conjunction not implemented");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "semidet parallel conjunction not implemented");
            return;
          }
        }
        break;
    }
    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_51, &ll_backend__par_conj_gen__Globals_15);
    }
    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__par_conj_gen__Globals_15, (MR_Integer) 248, &ll_backend__par_conj_gen__STSize_16);
    }
    {
      ll_backend__code_loc_dep__get_par_conj_depth_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53, &ll_backend__par_conj_gen__Depth_17);
    }
    {
      ll_backend__par_conj_gen__Nonlocals_24 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__par_conj_gen__GoalInfo_10);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__par_conj_gen__Nonlocals_24, &ll_backend__par_conj_gen__Variables_25);
    }
    {
      ll_backend__par_conj_gen__Delta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__par_conj_gen__GoalInfo_10);
    }
    {
      ll_backend__par_conj_gen__Contents_31 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__par_conj_gen__STSize_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))));
    }
    {
      ll_backend__par_conj_gen__NumGoals_41 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__par_conj_gen__Goals_9);
    }
    ll_backend__par_conj_gen__TypeCtorInfo_137_137 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    ll_backend__par_conj_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__Depth_17 == (MR_Integer) 0);
    if (ll_backend__par_conj_gen__succeeded)
      {
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_131_131;
        MR_Word ll_backend__par_conj_gen__Vars_22;
        MR_Word ll_backend__par_conj_gen__SyncTermSlots_32;
        MR_Word ll_backend__par_conj_gen__StackId_33;
        MR_Word ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40;
        MR_Word ll_backend__par_conj_gen__BeforeConjunctionPos_45;
        MR_Word ll_backend__par_conj_gen__ConjunctStartPos_47;
        MR_Word ll_backend__par_conj_gen__ParentSpSlot1_50;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_65_65;
        MR_Word ll_backend__par_conj_gen__V_67_67;
        MR_Word ll_backend__par_conj_gen__V_68_68;
        MR_Word ll_backend__par_conj_gen__V_69_69;
        MR_Word ll_backend__par_conj_gen__V_81_81;
        MR_Word ll_backend__par_conj_gen__V_82_82;
        MR_Word ll_backend__par_conj_gen__V_84_84;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_86;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_95;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_99;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_100;
        MR_Integer ll_backend__par_conj_gen__V_101_101;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_102;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_105;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_107;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_121;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_123_123;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_124_124;
        MR_Integer ll_backend__par_conj_gen___N_34;
        MR_Integer ll_backend__par_conj_gen___M_35;
        MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36;
        MR_Integer ll_backend__par_conj_gen__SlotNumPrime_37;
        MR_Box ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_36;

        {
          ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_2[1]), (MR_Integer) 1, &ll_backend__par_conj_gen__ParentSpSlot1_50, ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_51, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_65_65);
        }
        ll_backend__par_conj_gen__TypeCtorInfo_131_131 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__par_conj_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_69_69, 1) = ((MR_Box) (ll_backend__par_conj_gen__ParentSpSlot1_50));
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_69_69, 2) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_2[1]));
        }
        {
          ll_backend__par_conj_gen__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_68_68, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_69_69));
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_68_68, 1) = ((MR_Box) ((MR_String) "save the old parent stack pointer"));
        }
        {
          ll_backend__par_conj_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_67_67, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_68_68));
          MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_1[4])));
        }
        {
          ll_backend__par_conj_gen__MaybeSetParentSpCode_19 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_131_131, ll_backend__par_conj_gen__V_67_67);
        }
        {
          ll_backend__par_conj_gen__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_84_84, 0) = ((MR_Box) (ll_backend__par_conj_gen__ParentSpSlot1_50));
        }
        {
          ll_backend__par_conj_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_82_82, 2) = ((MR_Box) (ll_backend__par_conj_gen__V_84_84));
        }
        {
          ll_backend__par_conj_gen__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_81_81, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_82_82));
          MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_81_81, 1) = ((MR_Box) ((MR_String) "restore old parent stack pointer"));
        }
        {
          ll_backend__par_conj_gen__MaybeRestoreParentSpCode_20 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_131_131, ((MR_Box) (ll_backend__par_conj_gen__V_81_81)));
        }
        {
          ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_65_65, &ll_backend__par_conj_gen__Vars_22);
        }
        {
          ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__par_conj_gen__Vars_22, &ll_backend__par_conj_gen__SaveCode_23, ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_65_65, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_86);
        }
        {
          ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_86, &ll_backend__par_conj_gen__Initial_26);
        }
        {
          ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__par_conj_gen__Contents_31, (MR_Integer) 0, &ll_backend__par_conj_gen__SyncTermSlots_32, &ll_backend__par_conj_gen__StackId_33, &ll_backend__par_conj_gen___N_34, &ll_backend__par_conj_gen___M_35, ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_86, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_100);
        }
        {
          ll_backend__par_conj_gen__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__SyncTermSlots_32, &ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_36);
        }
        if (ll_backend__par_conj_gen__succeeded)
          {
            ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36 = ((MR_Word) ll_backend__par_conj_gen__conv0_SyncTermBaseSlotPrime_36);
            ll_backend__par_conj_gen__succeeded = MR_TRUE;
          }
        if (ll_backend__par_conj_gen__succeeded)
          {
            ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__StackId_33 == (MR_Integer) 0);
            if (ll_backend__par_conj_gen__succeeded)
              {
                ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ll_backend__par_conj_gen__succeeded)
                  ll_backend__par_conj_gen__SlotNumPrime_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36, (MR_Integer) 1)));
              }
          }
        if (ll_backend__par_conj_gen__succeeded)
          {
            ll_backend__par_conj_gen__SlotNum_38 = ll_backend__par_conj_gen__SlotNumPrime_37;
            ll_backend__par_conj_gen__SyncTermBaseSlot_39 = ll_backend__par_conj_gen__SyncTermBaseSlotPrime_36;
            {
              ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_38));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "cannot find stack slot");
              return;
            }
          }
        {
          ll_backend__par_conj_gen__create_static_conj_id_4_p_0(ll_backend__par_conj_gen__GoalInfo_10, &ll_backend__par_conj_gen__StaticConjId_42, ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_90, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_95);
        }
        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__EndLabel_44, ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_95, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_99);
        }
        {
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_100, &ll_backend__par_conj_gen__BeforeConjunctionPos_45);
        }
        ll_backend__par_conj_gen__V_101_101 = (ll_backend__par_conj_gen__Depth_17 + (MR_Integer) 1);
        {
          ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__V_101_101, ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_100, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_102);
        }
        {
          ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_102, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_105);
        }
        {
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_105, &ll_backend__par_conj_gen__ConjunctStartPos_47);
        }
        {
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(ll_backend__par_conj_gen__ConjunctStartPos_47, ll_backend__par_conj_gen__Goals_9, ll_backend__par_conj_gen__ParentSyncTermBaseSlot_40, ll_backend__par_conj_gen__EndLabel_44, ll_backend__par_conj_gen__V_106_106, &ll_backend__par_conj_gen__GoalCode_48, ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_99, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_107);
        }
        {
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__par_conj_gen__BeforeConjunctionPos_45, ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_107, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_121);
        }
        {
          ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__par_conj_gen__SyncTermSlots_32, (MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_107, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_123_123, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_121, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_124_124);
        }
        {
          ll_backend__code_loc_dep__release_temp_slot_6_p_0(ll_backend__par_conj_gen__ParentSpSlot1_50, (MR_Integer) 1, ll_backend__par_conj_gen__STATE_VARIABLE_CI_123_123, ll_backend__par_conj_gen__STATE_VARIABLE_CI_52, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_124_124, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127);
        }
      }
    else
      {
        MR_Word ll_backend__par_conj_gen__TypeCtorInfo_132_132 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        MR_Word ll_backend__par_conj_gen__Vars_154;
        MR_Word ll_backend__par_conj_gen__SyncTermSlots_155;
        MR_Word ll_backend__par_conj_gen__StackId_156;
        MR_Word ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161;
        MR_Word ll_backend__par_conj_gen__BeforeConjunctionPos_162;
        MR_Word ll_backend__par_conj_gen__ConjunctStartPos_163;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_165;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_166;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_170;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_171;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_172;
        MR_Integer ll_backend__par_conj_gen__V_173_173;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_174;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_175;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176;
        MR_Word ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_177;
        MR_Integer ll_backend__par_conj_gen___N_139;
        MR_Integer ll_backend__par_conj_gen___M_140;
        MR_Word ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145;
        MR_Integer ll_backend__par_conj_gen__SlotNumPrime_146;
        MR_Box ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_145;

        {
          ll_backend__par_conj_gen__MaybeSetParentSpCode_19 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_132_132);
        }
        {
          ll_backend__par_conj_gen__MaybeRestoreParentSpCode_20 = mercury__cord__empty_0_f_0(ll_backend__par_conj_gen__TypeCtorInfo_132_132);
        }
        ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_0_51;
        {
          ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53, &ll_backend__par_conj_gen__Vars_154);
        }
        {
          ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__par_conj_gen__Vars_154, &ll_backend__par_conj_gen__SaveCode_23, ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_0_53, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_165);
        }
        {
          ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_165, &ll_backend__par_conj_gen__Initial_26);
        }
        {
          ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__par_conj_gen__Contents_31, (MR_Integer) 0, &ll_backend__par_conj_gen__SyncTermSlots_155, &ll_backend__par_conj_gen__StackId_156, &ll_backend__par_conj_gen___N_139, &ll_backend__par_conj_gen___M_140, ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_166, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_86_165, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_172);
        }
        {
          ll_backend__par_conj_gen__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__par_conj_gen__SyncTermSlots_155, &ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_145);
        }
        if (ll_backend__par_conj_gen__succeeded)
          {
            ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145 = ((MR_Word) ll_backend__par_conj_gen__conv1_SyncTermBaseSlotPrime_145);
            ll_backend__par_conj_gen__succeeded = MR_TRUE;
          }
        if (ll_backend__par_conj_gen__succeeded)
          {
            ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__StackId_156 == (MR_Integer) 0);
            if (ll_backend__par_conj_gen__succeeded)
              {
                ll_backend__par_conj_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ll_backend__par_conj_gen__succeeded)
                  ll_backend__par_conj_gen__SlotNumPrime_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145, (MR_Integer) 1)));
              }
          }
        if (ll_backend__par_conj_gen__succeeded)
          {
            ll_backend__par_conj_gen__SlotNum_38 = ll_backend__par_conj_gen__SlotNumPrime_146;
            ll_backend__par_conj_gen__SyncTermBaseSlot_39 = ll_backend__par_conj_gen__SyncTermBaseSlotPrime_145;
            {
              ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161, 1) = ((MR_Box) (ll_backend__par_conj_gen__SlotNum_38));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "cannot find stack slot");
              return;
            }
          }
        {
          ll_backend__par_conj_gen__create_static_conj_id_4_p_0(ll_backend__par_conj_gen__GoalInfo_10, &ll_backend__par_conj_gen__StaticConjId_42, ll_backend__par_conj_gen__STATE_VARIABLE_CI_90_166, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_170);
        }
        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__par_conj_gen__EndLabel_44, ll_backend__par_conj_gen__STATE_VARIABLE_CI_95_170, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_171);
        }
        {
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_172, &ll_backend__par_conj_gen__BeforeConjunctionPos_162);
        }
        ll_backend__par_conj_gen__V_173_173 = (ll_backend__par_conj_gen__Depth_17 + (MR_Integer) 1);
        {
          ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(ll_backend__par_conj_gen__V_173_173, ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_100_172, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_174);
        }
        {
          ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_102_174, &ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_175);
        }
        {
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_InConjunctionCLD_105_175, &ll_backend__par_conj_gen__ConjunctStartPos_163);
        }
        {
          ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_53_93_95_48_9_p_0(ll_backend__par_conj_gen__ConjunctStartPos_163, ll_backend__par_conj_gen__Goals_9, ll_backend__par_conj_gen__ParentSyncTermBaseSlot_161, ll_backend__par_conj_gen__EndLabel_44, ll_backend__par_conj_gen__V_106_106, &ll_backend__par_conj_gen__GoalCode_48, ll_backend__par_conj_gen__STATE_VARIABLE_CI_99_171, &ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176);
        }
        {
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__par_conj_gen__BeforeConjunctionPos_162, ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_177);
        }
        ll_backend__par_conj_gen__succeeded = (ll_backend__par_conj_gen__Depth_17 == (MR_Integer) 0);
        if (ll_backend__par_conj_gen__succeeded)
          {
            {
              ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__par_conj_gen__SyncTermSlots_155, (MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176, ll_backend__par_conj_gen__STATE_VARIABLE_CI_52, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_177, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127);
            }
          }
        else
          {
            ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127 = ll_backend__par_conj_gen__STATE_VARIABLE_CLD_121_177;
            *ll_backend__par_conj_gen__STATE_VARIABLE_CI_52 = ll_backend__par_conj_gen__STATE_VARIABLE_CI_107_176;
          }
      }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__par_conj_gen__Initial_26, ll_backend__par_conj_gen__Delta_27, &ll_backend__par_conj_gen__Final_28);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__par_conj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__par_conj_gen__ModuleInfo_29);
    }
    {
      ll_backend__par_conj_gen__find_outputs_6_p_0(ll_backend__par_conj_gen__Variables_25, ll_backend__par_conj_gen__Initial_26, ll_backend__par_conj_gen__Final_28, ll_backend__par_conj_gen__ModuleInfo_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__par_conj_gen__Outputs_30);
    }
    {
      ll_backend__par_conj_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_97_97, 1) = ((MR_Box) (ll_backend__par_conj_gen__SyncTermBaseSlot_39));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_97_97, 2) = ((MR_Box) (ll_backend__par_conj_gen__NumGoals_41));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_97_97, 3) = ((MR_Box) (ll_backend__par_conj_gen__StaticConjId_42));
    }
    {
      ll_backend__par_conj_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_96_96, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_97_97));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_96_96, 1) = ((MR_Box) ((MR_String) "initialize sync term"));
    }
    {
      ll_backend__par_conj_gen__MakeSyncTermCode_43 = mercury__cord__singleton_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ((MR_Box) (ll_backend__par_conj_gen__V_96_96)));
    }
    {
      ll_backend__par_conj_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__par_conj_gen__V_110_110, 1) = ((MR_Box) (ll_backend__par_conj_gen__EndLabel_44));
    }
    {
      ll_backend__par_conj_gen__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_109_109, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_110_110));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_109_109, 1) = ((MR_Box) ((MR_String) "end of parallel conjunction"));
    }
    {
      ll_backend__par_conj_gen__V_114_114 = ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(ll_backend__par_conj_gen__SlotNum_38, ll_backend__par_conj_gen__SyncTermBaseSlot_39);
    }
    {
      ll_backend__par_conj_gen__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_113_113, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_114_114));
      MR_hl_field(MR_mktag(0), ll_backend__par_conj_gen__V_113_113, 1) = ((MR_Box) ((MR_String) "finish parallel conjunction (ThreadScope instrumentation"));
    }
    {
      ll_backend__par_conj_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_112_112, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_113_113));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__par_conj_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_108_108, 0) = ((MR_Box) (ll_backend__par_conj_gen__V_109_109));
      MR_hl_field(MR_mktag(1), ll_backend__par_conj_gen__V_108_108, 1) = ((MR_Box) (ll_backend__par_conj_gen__V_112_112));
    }
    {
      ll_backend__par_conj_gen__EndLabelCode_49 = mercury__cord__from_list_1_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__V_108_108);
    }
    {
      ll_backend__par_conj_gen__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__EndLabelCode_49, ll_backend__par_conj_gen__MaybeRestoreParentSpCode_20);
    }
    {
      ll_backend__par_conj_gen__V_119_119 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__GoalCode_48, ll_backend__par_conj_gen__V_120_120);
    }
    {
      ll_backend__par_conj_gen__V_118_118 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__MakeSyncTermCode_43, ll_backend__par_conj_gen__V_119_119);
    }
    {
      ll_backend__par_conj_gen__V_117_117 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__SaveCode_23, ll_backend__par_conj_gen__V_118_118);
    }
    {
      *ll_backend__par_conj_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__par_conj_gen__TypeCtorInfo_137_137, ll_backend__par_conj_gen__MaybeSetParentSpCode_19, ll_backend__par_conj_gen__V_117_117);
    }
    {
      ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_127_127, &ll_backend__par_conj_gen__STATE_VARIABLE_CLD_129_129);
    }
    {
      ll_backend__par_conj_gen__place_all_outputs_4_p_0(ll_backend__par_conj_gen__Outputs_30, *ll_backend__par_conj_gen__STATE_VARIABLE_CI_52, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_129_129, ll_backend__par_conj_gen__STATE_VARIABLE_CLD_54);
    }
  }
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
