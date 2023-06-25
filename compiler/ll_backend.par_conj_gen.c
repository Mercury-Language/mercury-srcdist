/*
** Automatically generated from `par_conj_gen.m'
** by the Mercury compiler,
** version rotd-2023-06-25
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module ll_backend.par_conj_gen.
// :- implementation.

/*
INIT mercury__ll_backend__par_conj_gen__init
ENDINIT
*/

#include "ll_backend.par_conj_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
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
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__616__1_1_f_0(
  MR_Word HeadVar__1_23);

static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
  MR_Word LVal_4,
  MR_Integer Max0_5,
  MR_Integer * Max_6);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
  MR_Word Lval0_5,
  MR_Word * Lval_6);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
  MR_Word STATE_VARIABLE_Instr_0_5,
  MR_Word * STATE_VARIABLE_Instr_6);

static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
  MR_String LCVarName_5,
  MR_String LCSVarName_6,
  MR_Word StackSlot_7,
  MR_String * CopyStr_8);

static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
  MR_Word Instrs_3,
  MR_Integer * MaxRef_4);

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
  MR_Integer FrameSize_6,
  MR_Word LCVarLocn_7,
  MR_Word LCSVarLocn_8,
  MR_Word StackSlots_9,
  MR_String * CodeStr_10);

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word MaybeEnd0_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9);

static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
  MR_Word GoalInfo_5,
  MR_Integer * SlotNum_6,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18);

static void MR_CALL 
ll_backend__par_conj_gen__place_all_outputs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CLD_0_3,
  MR_Word * STATE_VARIABLE_CLD_4);

static void MR_CALL 
ll_backend__par_conj_gen__find_outputs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Outputs_0_5,
  MR_Word * STATE_VARIABLE_Outputs_6);

static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
  MR_Integer SyncTermBaseSlot_4,
  MR_Word SyncTermBaseSlotLval_5);


static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_2[3][1];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_3[12][3];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_4[4][5];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_5[2][7];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_6[2][6];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_7[1][4];




static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__par_conj_gen_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) "set the parent stack pointer"))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_1[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_3[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_2[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[0])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[1])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[0])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[2])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[3])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[0])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[0])),
    ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[1])),
    ((MR_Box) (ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[1])),
    ((MR_Box) (ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_7[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__616__1_1_f_0(
  MR_Word HeadVar__1_23)
{
  MR_Word HeadVar__2_24;

  HeadVar__2_24 = mercury__set__list_to_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), HeadVar__1_23);
  return HeadVar__2_24;
}

static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
  MR_Word LVal_4,
  MR_Integer Max0_5,
  MR_Integer * Max_6)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) LVal_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, LVal_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
  MR_Integer N_7;

  if (succeeded)
  {
    N_7 = ((MR_Integer) ((MR_hl_field(3, LVal_4, (MR_Integer) 1))));
    succeeded = (N_7 > Max0_5);
  }
  if (succeeded)
    *Max_6 = N_7;
  else
    *Max_6 = Max0_5;
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Lval_6;

  ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Lval_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Lval_6));
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
  MR_Word Lval0_5,
  MR_Word * Lval_6)
{
  switch (MR_tag((MR_Word) Lval0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Lval_6 = Lval0_5;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Lval_6 = Lval0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer SlotNum_58 = ((MR_Integer) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SlotNum_58));
            }
          }
          break;
        case (MR_Integer) 1:
          *Lval_6 = Lval0_5;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
          *Lval_6 = Lval0_5;
          break;
        case (MR_Integer) 3:
          {
            MR_Word Type_10 = ((MR_Unsigned) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer SlotNum_35 = ((MR_Integer) ((MR_hl_field(3, Lval0_5, (MR_Integer) 2))));

            switch (Type_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *Lval_6 = Lval0_5;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Lval_6 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, base, 2) = ((MR_Box) (SlotNum_35));
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval0_17 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))));
            MR_Word Rval_18;
            MR_Box conv8_STATE_VARIABLE_Acc_25;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[11]), Rval0_17, &Rval_18, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_Acc_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_18));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval0_41 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))));
            MR_Word Rval_42;
            MR_Box conv7_STATE_VARIABLE_Acc_25;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[11]), Rval0_41, &Rval_42, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_Acc_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_42));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval0_37 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))));
            MR_Word Rval_38;
            MR_Box conv6_STATE_VARIABLE_Acc_25;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[11]), Rval0_37, &Rval_38, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_Acc_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_38));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval0_39 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))));
            MR_Word Rval_40;
            MR_Box conv5_STATE_VARIABLE_Acc_25;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[11]), Rval0_39, &Rval_40, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_Acc_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_40));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval0_43 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))));
            MR_Word Rval_44;
            MR_Box conv4_STATE_VARIABLE_Acc_25;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[11]), Rval0_43, &Rval_44, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_Acc_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_44));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Tag_19 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))));
            MR_Word Rval1_20 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 2))));
            MR_Word Rval2_21 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 3))));
            MR_Word Rval3_22;
            MR_Word Rval4_23;
            MR_Box conv1_STATE_VARIABLE_Acc_32_32;
            MR_Box conv2_STATE_VARIABLE_Acc_25;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[11]), Rval1_20, &Rval3_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_Acc_32_32);
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[11]), Rval2_21, &Rval4_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_Acc_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Tag_19));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval3_22));
              MR_hl_field(3, base, 3) = ((MR_Box) (Rval4_23));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval0_45 = ((MR_Word) ((MR_hl_field(3, Lval0_5, (MR_Integer) 1))));
            MR_Word Rval_46;
            MR_Box conv3_STATE_VARIABLE_Acc_25;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[11]), Rval0_45, &Rval_46, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_Acc_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_46));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Lval_6;

  ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Lval_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Lval_6));
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
  MR_Word STATE_VARIABLE_Instr_0_5,
  MR_Word * STATE_VARIABLE_Instr_6)
{
  MR_Box conv1_Var_4;

  ll_backend__exprn_aux__transform_lval_in_instr_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[10]), STATE_VARIABLE_Instr_0_5, STATE_VARIABLE_Instr_6, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_4);
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

  if (succeeded)
  {
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
  MR_String LCVarName_5,
  MR_String LCSVarName_6,
  MR_Word StackSlot_7,
  MR_String * CopyStr_8)
{
  MR_bool succeeded;
  MR_String StackSlotName_9;

  succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(StackSlot_7, &StackSlotName_9);
  if (succeeded)
  {
    MR_Integer N_10;

    succeeded = ((((MR_tag((MR_Word) StackSlot_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, StackSlot_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      N_10 = ((MR_Integer) ((MR_hl_field(3, StackSlot_7, (MR_Integer) 1))));
      {
        MR_String Var_26;
        MR_String Var_28;
        MR_String Var_29;
        MR_String Var_36;
        MR_String Var_38;
        MR_String Var_39;
        MR_String Var_41;
        MR_String Var_42;

        Var_26 = mercury__string__f_43_43_2_f_0(StackSlotName_9, (MR_String) ";\n");
        Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", Var_26);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_2[2]), N_10, &Var_29);
        Var_36 = mercury__string__f_43_43_2_f_0(Var_29, Var_28);
        Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_36);
        Var_39 = mercury__string__f_43_43_2_f_0(LCSVarName_6, Var_38);
        Var_41 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_39);
        Var_42 = mercury__string__f_43_43_2_f_0(LCVarName_5, Var_41);
        *CopyStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_worker_sv(", Var_42);
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "not stack slot");
        return;
      }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.copy_one_slot_to_child_stack\'/4", (MR_String) "cannot convert to string");
      return;
    }
}

static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Instr_6;

  ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Instr_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Instr_6));
}

static void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  ll_backend__code_info__get_variable_slot_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0(
  MR_Word Goal_10,
  MR_Word LCVar_11,
  MR_Word LCSVar_12,
  MR_Word UseParentStack_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_47,
  MR_Word * STATE_VARIABLE_CI_48,
  MR_Word STATE_VARIABLE_CLD_0_49,
  MR_Word * STATE_VARIABLE_CLD_50)
{
  MR_bool succeeded;
  MR_Word KnownVars_17;
  MR_Word KnownVarsSet_18;
  MR_Word NonLocalsSet_19;
  MR_Word InputVarsSet_20;
  MR_Word InputVars_21;
  MR_Word SaveCode_22;
  MR_Word LCVarLocn_23;
  MR_Word LCSVarLocn_24;
  MR_Word SpawnOffLabel_25;
  MR_Word SpawnUinstr_26;
  MR_Word SpawnInstr_27;
  MR_Word SpawnOffCode_28;
  MR_Word PositionAfterSpawnOff_29;
  MR_Word LabelUinstr_30;
  MR_Word LabelInstr_31;
  MR_Word LabelCode_32;
  MR_Word GoalCode_33;
  MR_Word SpawnedOffCode0_35;
  MR_Word SpawnedOffCode_36;
  MR_Word CopyCode_37;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_CLD_52_52;
  MR_Word STATE_VARIABLE_CI_53_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_CLD_59_59;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_CI_63_63;
  MR_Word STATE_VARIABLE_CLD_64_64;
  MR_Word Var_73;
  MR_Word Map_81;
  MR_Word AllLocnsSet_82;
  MR_Word AllLocns_83;
  MR_Word RegLocns_84;
  MR_Word Map_93;
  MR_Word AllLocnsSet_94;
  MR_Word AllLocns_95;
  MR_Word RegLocns_96;
  MR_Box conv0_AllLocnsSet_82;
  MR_Box conv1_AllLocnsSet_94;
  MR_Word _CLDAfterGoal_34;

  ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_0_49, &KnownVars_17);
  KnownVarsSet_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), KnownVars_17);
  Var_51 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
  NonLocalsSet_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Var_51);
  InputVarsSet_20 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsSet_19, KnownVarsSet_18);
  InputVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarsSet_20);
  ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(InputVars_21, &SaveCode_22, STATE_VARIABLE_CI_0_47, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_52_52);
  ll_backend__code_loc_dep__variable_locations_2_p_0(STATE_VARIABLE_CLD_52_52, &Map_81);
  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[1]), Map_81, ((MR_Box) (LCVar_11)), &conv0_AllLocnsSet_82);
  AllLocnsSet_82 = ((MR_Word) (conv0_AllLocnsSet_82));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), AllLocnsSet_82, &AllLocns_83);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[7]), AllLocns_83, &RegLocns_84);
  if ((RegLocns_84 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((AllLocns_83 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
        return;
      }
    else
      LCVarLocn_23 = ((MR_Word) ((MR_hl_field(1, AllLocns_83, (MR_Integer) 0))));
  else
    LCVarLocn_23 = ((MR_Word) ((MR_hl_field(1, RegLocns_84, (MR_Integer) 0))));
  ll_backend__code_loc_dep__variable_locations_2_p_0(STATE_VARIABLE_CLD_52_52, &Map_93);
  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[1]), Map_93, ((MR_Box) (LCSVar_12)), &conv1_AllLocnsSet_94);
  AllLocnsSet_94 = ((MR_Word) (conv1_AllLocnsSet_94));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), AllLocnsSet_94, &AllLocns_95);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[8]), AllLocns_95, &RegLocns_96);
  if ((RegLocns_96 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((AllLocns_95 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
        return;
      }
    else
      LCSVarLocn_24 = ((MR_Word) ((MR_hl_field(1, AllLocns_95, (MR_Integer) 0))));
  else
    LCSVarLocn_24 = ((MR_Word) ((MR_hl_field(1, RegLocns_96, (MR_Integer) 0))));
  ll_backend__code_info__get_next_label_3_p_0(&SpawnOffLabel_25, STATE_VARIABLE_CI_0_47, &STATE_VARIABLE_CI_53_53);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (LCVarLocn_23));
  }
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (LCSVarLocn_24));
  }
  {
    SpawnUinstr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SpawnUinstr_26, 0) = ((MR_Box) ((MR_Unsigned) 33U));
    MR_hl_field(3, SpawnUinstr_26, 1) = ((MR_Box) (Var_54));
    MR_hl_field(3, SpawnUinstr_26, 2) = ((MR_Box) (Var_55));
    MR_hl_field(3, SpawnUinstr_26, 3) = ((MR_Box) (SpawnOffLabel_25));
  }
  {
    SpawnInstr_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SpawnInstr_27, 0) = ((MR_Box) (SpawnUinstr_26));
    MR_hl_field(0, SpawnInstr_27, 1) = ((MR_Box) ((MR_String) ""));
  }
  SpawnOffCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (SpawnInstr_27)));
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_52_52, &PositionAfterSpawnOff_29);
  {
    LabelUinstr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LabelUinstr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, LabelUinstr_30, 1) = ((MR_Box) (SpawnOffLabel_25));
  }
  {
    LabelInstr_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LabelInstr_31, 0) = ((MR_Box) (LabelUinstr_30));
    MR_hl_field(0, LabelInstr_31, 1) = ((MR_Box) ((MR_String) "Label for spawned off code"));
  }
  LabelCode_32 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (LabelInstr_31)));
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (LCSVarLocn_24));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (LCVarLocn_23));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
  }
  ll_backend__code_loc_dep__clobber_regs_3_p_0(Var_58, STATE_VARIABLE_CLD_52_52, &STATE_VARIABLE_CLD_59_59);
  ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Goal_10, &GoalCode_33, STATE_VARIABLE_CI_53_53, &STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CLD_59_59, &_CLDAfterGoal_34);
  SpawnedOffCode0_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_32, GoalCode_33);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(PositionAfterSpawnOff_29, STATE_VARIABLE_CI_63_63, &STATE_VARIABLE_CLD_64_64);
  switch (UseParentStack_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word InputStackSlots_39;
        MR_Integer FrameSize_41;
        MR_String CopyStr_42;
        MR_Word LiveLvalsInfo_44;
        MR_Word CopyUinstr_45;
        MR_Word CopyInstr_46;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;

        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[1]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_3));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (STATE_VARIABLE_CI_63_63));
        }
        mercury__list__map_3_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_67, InputVars_21, &InputStackSlots_39);
        ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(SpawnedOffCode0_35, &FrameSize_41);
        SpawnedOffCode_36 = SpawnedOffCode0_35;
        ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(FrameSize_41, LCVarLocn_23, LCSVarLocn_24, InputStackSlots_39, &CopyStr_42);
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (LCSVarLocn_24));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (InputStackSlots_39));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (LCVarLocn_23));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
        }
        Var_68 = mercury__set__list_to_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_69);
        {
          LiveLvalsInfo_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LiveLvalsInfo_44, 0) = ((MR_Box) (Var_68));
        }
        {
          CopyUinstr_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CopyUinstr_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, CopyUinstr_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, CopyUinstr_45, 2) = ((MR_Box) (LiveLvalsInfo_44));
          MR_hl_field(3, CopyUinstr_45, 3) = ((MR_Box) (CopyStr_42));
        }
        {
          CopyInstr_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CopyInstr_46, 0) = ((MR_Box) (CopyUinstr_45));
          MR_hl_field(0, CopyInstr_46, 1) = ((MR_Box) ((MR_String) ""));
        }
        CopyCode_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (CopyInstr_46)));
        *STATE_VARIABLE_CLD_50 = STATE_VARIABLE_CLD_64_64;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word OutputVars_38;
        MR_Word Var_65;

        mercury__cord__map_pred_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[9]), SpawnedOffCode0_35, &SpawnedOffCode_36);
        CopyCode_37 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        OutputVars_38 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsSet_19, KnownVarsSet_18);
        Var_65 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_38);
        ll_backend__par_conj_gen__place_all_outputs_4_p_0(Var_65, STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CLD_64_64, STATE_VARIABLE_CLD_50);
      }
      break;
  }
  ll_backend__code_info__add_out_of_line_code_3_p_0(SpawnedOffCode_36, STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CI_48);
  Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CopyCode_37, SpawnOffCode_28);
  *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_22, Var_73);
}

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_Max_6;

  ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_Max_6);
  *wrapper_arg_3 = ((MR_Box) (conv2_Max_6));
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_24;

  conv1_HeadVar__2_24 = ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__616__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_24));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
  MR_Word Instrs_3,
  MR_Integer * MaxRef_4)
{
  MR_Word RVals_5;
  MR_Word LVals0_6;
  MR_Word LValsInRvalsLists_7;
  MR_Word LValsSets_8;
  MR_Word LVals_9;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Box conv3_MaxRef_4;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Instrs_3);
  ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(Var_10, &RVals_5, &LVals0_6);
  Var_12 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RVals_5);
  LValsInRvalsLists_7 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[2]), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[4]), Var_12);
  LValsSets_8 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[2]), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[1]), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[5]), LValsInRvalsLists_7);
  Var_14 = mercury__set__union_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LValsSets_8);
  LVals_9 = mercury__set__union_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_14, LVals0_6);
  mercury__set__fold_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[6]), LVals_9, ((MR_Box) ((MR_Integer) 0)), &conv3_MaxRef_4);
  *MaxRef_4 = ((MR_Integer) (conv3_MaxRef_4));
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_CopyStr_8;

  ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_CopyStr_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_CopyStr_8));
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
  MR_Integer FrameSize_6,
  MR_Word LCVarLocn_7,
  MR_Word LCSVarLocn_8,
  MR_Word StackSlots_9,
  MR_String * CodeStr_10)
{
  MR_bool succeeded;
  MR_String LCVarName_13;
  MR_String LCSVarName_14;
  MR_String IncrLine_16;
  MR_Word CopyStrs_17;
  MR_String CopyLines_18;
  MR_Word Var_30;
  MR_String Var_31;
  MR_String Var_32;
  MR_String Var_38;
  MR_String Var_45;
  MR_String Var_47;
  MR_String Var_48;
  MR_String Var_50;
  MR_String Var_51;
  MR_String LCVarNamePrime_11;
  MR_String LCSVarNamePrime_12;

  succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(LCVarLocn_7, &LCVarNamePrime_11);
  if (succeeded)
    succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(LCSVarLocn_8, &LCSVarNamePrime_12);
  if (succeeded)
  {
    LCVarName_13 = LCVarNamePrime_11;
    LCSVarName_14 = LCSVarNamePrime_12;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.copy_slots_to_child_stack\'/5", (MR_String) "cannot convert to string");
      return;
    }
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_2[2]), FrameSize_6, &Var_38);
  Var_45 = mercury__string__f_43_43_2_f_0(Var_38, (MR_String) ");\n");
  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_45);
  Var_48 = mercury__string__f_43_43_2_f_0(LCSVarName_14, Var_47);
  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_48);
  Var_51 = mercury__string__f_43_43_2_f_0(LCVarName_13, Var_50);
  IncrLine_16 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_inc_worker_sp(", Var_51);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (LCVarName_13));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (LCSVarName_14));
  }
  mercury__list__map_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, StackSlots_9, &CopyStrs_17);
  mercury__string__append_list_2_p_0(CopyStrs_17, &CopyLines_18);
  Var_32 = mercury__string__f_43_43_2_f_0(CopyLines_18, (MR_String) "\t}\n");
  Var_31 = mercury__string__f_43_43_2_f_0(IncrLine_16, Var_32);
  *CodeStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", Var_31);
}

void MR_CALL 
ll_backend__par_conj_gen__generate_par_conj_8_p_0(
  MR_Word Conjuncts_9,
  MR_Word GoalInfo_10,
  MR_Word CodeModel_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52,
  MR_Word STATE_VARIABLE_CLD_0_53,
  MR_Word * STATE_VARIABLE_CLD_54)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Integer STSize_16;
  MR_Integer Depth_17;
  MR_Word MaybeSetParentSpCode_19;
  MR_Word MaybeRestoreParentSpCode_20;
  MR_Word SaveCode_23;
  MR_Word Nonlocals_24;
  MR_Word Variables_25;
  MR_Word InitialInstMap_26;
  MR_Word InstMapDelta_27;
  MR_Word FinalInstMap_28;
  MR_Word ModuleInfo_29;
  MR_Word Outputs_30;
  MR_Word Contents_31;
  MR_Integer SlotNum_38;
  MR_Word SyncTermBaseSlot_39;
  MR_Integer NumConjuncts_41;
  MR_Integer StaticConjId_42;
  MR_Word MakeSyncTermCode_43;
  MR_Word EndLabel_44;
  MR_Word GoalCode_48;
  MR_Word EndLabelCode_49;
  MR_Word STATE_VARIABLE_CI_62_62;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word STATE_VARIABLE_CLD_124_124;
  MR_Word STATE_VARIABLE_CLD_126_126;

  switch (CodeModel_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "nondet parallel conjunction not implemented");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "semidet parallel conjunction not implemented");
        return;
      }
      break;
  }
  ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_51, &Globals_15);
  libs__globals__lookup_int_option_3_p_0(Globals_15, (MR_Integer) 304, &STSize_16);
  ll_backend__code_loc_dep__get_par_conj_depth_2_p_0(STATE_VARIABLE_CLD_0_53, &Depth_17);
  Nonlocals_24 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo_10);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Nonlocals_24, &Variables_25);
  InstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_10);
  Contents_31 = mercury__list__duplicate_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), STSize_16, ((MR_Box) ((MR_Unsigned) 24U)));
  NumConjuncts_41 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts_9);
  succeeded = (Depth_17 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Vars_22;
    MR_Word SyncTermSlots_32;
    MR_Word StackId_33;
    MR_Word ParentSyncTermBaseSlot_40;
    MR_Word BeforeConjunctionPos_45;
    MR_Word ConjunctStartPos_47;
    MR_Word ParentSpSlot1_50;
    MR_Word STATE_VARIABLE_CLD_63_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word STATE_VARIABLE_CLD_84_84;
    MR_Word STATE_VARIABLE_CI_88_88;
    MR_Word STATE_VARIABLE_CI_92_92;
    MR_Word STATE_VARIABLE_CI_96_96;
    MR_Word STATE_VARIABLE_InConjunctionCLD_97_97;
    MR_Integer Var_98;
    MR_Word STATE_VARIABLE_InConjunctionCLD_99_99;
    MR_Word STATE_VARIABLE_InConjunctionCLD_102_102;
    MR_Word STATE_VARIABLE_CI_104_104;
    MR_Word STATE_VARIABLE_CLD_118_118;
    MR_Word STATE_VARIABLE_CI_120_120;
    MR_Word STATE_VARIABLE_CLD_121_121;
    MR_Integer _N_34;
    MR_Integer _M_35;
    MR_Word SyncTermBaseSlotPrime_36;
    MR_Integer SlotNumPrime_37;
    MR_Box conv0_SyncTermBaseSlotPrime_36;

    ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(1, &ll_backend__par_conj_gen_scalar_common_2[0])), (MR_Integer) 1, &ParentSpSlot1_50, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_62_62, STATE_VARIABLE_CLD_0_53, &STATE_VARIABLE_CLD_63_63);
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (ParentSpSlot1_50));
      MR_hl_field(3, Var_67, 2) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_2[0]));
    }
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) ((MR_String) "save the old parent stack pointer"));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__par_conj_gen_scalar_common_1[4])));
    }
    MaybeSetParentSpCode_19 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_65);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_82, 0) = ((MR_Box) (ParentSpSlot1_50));
    }
    {
      Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_80, 2) = ((MR_Box) (Var_82));
    }
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) ((MR_String) "restore old parent stack pointer"));
    }
    MaybeRestoreParentSpCode_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_79)));
    ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_63_63, &Vars_22);
    ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(Vars_22, &SaveCode_23, STATE_VARIABLE_CI_62_62, STATE_VARIABLE_CLD_63_63, &STATE_VARIABLE_CLD_84_84);
    ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_84_84, &InitialInstMap_26);
    ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Contents_31, (MR_Integer) 0, &SyncTermSlots_32, &StackId_33, &_N_34, &_M_35, STATE_VARIABLE_CI_62_62, &STATE_VARIABLE_CI_88_88, STATE_VARIABLE_CLD_84_84, &STATE_VARIABLE_InConjunctionCLD_97_97);
    succeeded = mercury__list__last_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), SyncTermSlots_32, &conv0_SyncTermBaseSlotPrime_36);
    if (succeeded)
    {
      SyncTermBaseSlotPrime_36 = ((MR_Word) (conv0_SyncTermBaseSlotPrime_36));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (StackId_33 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) SyncTermBaseSlotPrime_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SyncTermBaseSlotPrime_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          SlotNumPrime_37 = ((MR_Integer) ((MR_hl_field(3, SyncTermBaseSlotPrime_36, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      SlotNum_38 = SlotNumPrime_37;
      SyncTermBaseSlot_39 = SyncTermBaseSlotPrime_36;
      {
        ParentSyncTermBaseSlot_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ParentSyncTermBaseSlot_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, ParentSyncTermBaseSlot_40, 1) = ((MR_Box) (SlotNumPrime_37));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "cannot find stack slot");
        return;
      }
    ll_backend__par_conj_gen__create_static_conj_id_4_p_0(GoalInfo_10, &StaticConjId_42, STATE_VARIABLE_CI_88_88, &STATE_VARIABLE_CI_92_92);
    ll_backend__code_info__get_next_label_3_p_0(&EndLabel_44, STATE_VARIABLE_CI_92_92, &STATE_VARIABLE_CI_96_96);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_InConjunctionCLD_97_97, &BeforeConjunctionPos_45);
    Var_98 = (MR_Integer) ((MR_Unsigned) Depth_17 + (MR_Unsigned) 1);
    ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(Var_98, STATE_VARIABLE_InConjunctionCLD_97_97, &STATE_VARIABLE_InConjunctionCLD_99_99);
    ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, STATE_VARIABLE_InConjunctionCLD_99_99, &STATE_VARIABLE_InConjunctionCLD_102_102);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_InConjunctionCLD_102_102, &ConjunctStartPos_47);
    ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0(ConjunctStartPos_47, EndLabel_44, ParentSyncTermBaseSlot_40, Conjuncts_9, (MR_Word) ((MR_Unsigned) 0U), &GoalCode_48, STATE_VARIABLE_CI_96_96, &STATE_VARIABLE_CI_104_104);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeConjunctionPos_45, STATE_VARIABLE_CI_104_104, &STATE_VARIABLE_CLD_118_118);
    ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(SyncTermSlots_32, (MR_Integer) 0, STATE_VARIABLE_CI_104_104, &STATE_VARIABLE_CI_120_120, STATE_VARIABLE_CLD_118_118, &STATE_VARIABLE_CLD_121_121);
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(ParentSpSlot1_50, (MR_Integer) 1, STATE_VARIABLE_CI_120_120, STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_121_121, &STATE_VARIABLE_CLD_124_124);
  }
  else
  {
    MR_Word Vars_148;
    MR_Word SyncTermSlots_149;
    MR_Word StackId_150;
    MR_Word ParentSyncTermBaseSlot_155;
    MR_Word BeforeConjunctionPos_156;
    MR_Word ConjunctStartPos_157;
    MR_Word STATE_VARIABLE_CLD_84_159;
    MR_Word STATE_VARIABLE_CI_88_160;
    MR_Word STATE_VARIABLE_CI_92_163;
    MR_Word STATE_VARIABLE_CI_96_164;
    MR_Word STATE_VARIABLE_InConjunctionCLD_97_165;
    MR_Integer Var_166;
    MR_Word STATE_VARIABLE_InConjunctionCLD_99_167;
    MR_Word STATE_VARIABLE_InConjunctionCLD_102_168;
    MR_Word STATE_VARIABLE_CI_104_169;
    MR_Word STATE_VARIABLE_CLD_118_170;
    MR_Integer _N_135;
    MR_Integer _M_136;
    MR_Word SyncTermBaseSlotPrime_140;
    MR_Integer SlotNumPrime_141;
    MR_Box conv1_SyncTermBaseSlotPrime_140;

    MaybeSetParentSpCode_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    MaybeRestoreParentSpCode_20 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_CI_62_62 = STATE_VARIABLE_CI_0_51;
    ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_0_53, &Vars_148);
    ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(Vars_148, &SaveCode_23, STATE_VARIABLE_CI_62_62, STATE_VARIABLE_CLD_0_53, &STATE_VARIABLE_CLD_84_159);
    ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_84_159, &InitialInstMap_26);
    ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Contents_31, (MR_Integer) 0, &SyncTermSlots_149, &StackId_150, &_N_135, &_M_136, STATE_VARIABLE_CI_62_62, &STATE_VARIABLE_CI_88_160, STATE_VARIABLE_CLD_84_159, &STATE_VARIABLE_InConjunctionCLD_97_165);
    succeeded = mercury__list__last_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), SyncTermSlots_149, &conv1_SyncTermBaseSlotPrime_140);
    if (succeeded)
    {
      SyncTermBaseSlotPrime_140 = ((MR_Word) (conv1_SyncTermBaseSlotPrime_140));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (StackId_150 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) SyncTermBaseSlotPrime_140)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SyncTermBaseSlotPrime_140, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          SlotNumPrime_141 = ((MR_Integer) ((MR_hl_field(3, SyncTermBaseSlotPrime_140, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      SlotNum_38 = SlotNumPrime_141;
      SyncTermBaseSlot_39 = SyncTermBaseSlotPrime_140;
      {
        ParentSyncTermBaseSlot_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ParentSyncTermBaseSlot_155, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, ParentSyncTermBaseSlot_155, 1) = ((MR_Box) (SlotNum_38));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "cannot find stack slot");
        return;
      }
    ll_backend__par_conj_gen__create_static_conj_id_4_p_0(GoalInfo_10, &StaticConjId_42, STATE_VARIABLE_CI_88_160, &STATE_VARIABLE_CI_92_163);
    ll_backend__code_info__get_next_label_3_p_0(&EndLabel_44, STATE_VARIABLE_CI_92_163, &STATE_VARIABLE_CI_96_164);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_InConjunctionCLD_97_165, &BeforeConjunctionPos_156);
    Var_166 = (MR_Integer) ((MR_Unsigned) Depth_17 + (MR_Unsigned) 1);
    ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(Var_166, STATE_VARIABLE_InConjunctionCLD_97_165, &STATE_VARIABLE_InConjunctionCLD_99_167);
    ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, STATE_VARIABLE_InConjunctionCLD_99_167, &STATE_VARIABLE_InConjunctionCLD_102_168);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_InConjunctionCLD_102_168, &ConjunctStartPos_157);
    ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0(ConjunctStartPos_157, EndLabel_44, ParentSyncTermBaseSlot_155, Conjuncts_9, (MR_Word) ((MR_Unsigned) 0U), &GoalCode_48, STATE_VARIABLE_CI_96_164, &STATE_VARIABLE_CI_104_169);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeConjunctionPos_156, STATE_VARIABLE_CI_104_169, &STATE_VARIABLE_CLD_118_170);
    succeeded = (Depth_17 == (MR_Integer) 0);
    if (succeeded)
      ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(SyncTermSlots_149, (MR_Integer) 0, STATE_VARIABLE_CI_104_169, STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_118_170, &STATE_VARIABLE_CLD_124_124);
    else
    {
      STATE_VARIABLE_CLD_124_124 = STATE_VARIABLE_CLD_118_170;
      *STATE_VARIABLE_CI_52 = STATE_VARIABLE_CI_104_169;
    }
  }
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_27, InitialInstMap_26, &FinalInstMap_28);
  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_62_62, &ModuleInfo_29);
  ll_backend__par_conj_gen__find_outputs_6_p_0(Variables_25, InitialInstMap_26, FinalInstMap_28, ModuleInfo_29, (MR_Word) ((MR_Unsigned) 0U), &Outputs_30);
  {
    Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(3, Var_94, 1) = ((MR_Box) (SyncTermBaseSlot_39));
    MR_hl_field(3, Var_94, 2) = ((MR_Box) (NumConjuncts_41));
    MR_hl_field(3, Var_94, 3) = ((MR_Box) (StaticConjId_42));
  }
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_String) "initialize sync term"));
  }
  MakeSyncTermCode_43 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_93)));
  {
    Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_107, 1) = ((MR_Box) (EndLabel_44));
  }
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (Var_107));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) ((MR_String) "end of parallel conjunction"));
  }
  Var_111 = ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(SlotNum_38, SyncTermBaseSlot_39);
  {
    Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_110, 0) = ((MR_Box) (Var_111));
    MR_hl_field(0, Var_110, 1) = ((MR_Box) ((MR_String) "finish parallel conjunction (ThreadScope instrumentation"));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_109));
  }
  EndLabelCode_49 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_105);
  Var_117 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EndLabelCode_49, MaybeRestoreParentSpCode_20);
  Var_116 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_48, Var_117);
  Var_115 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MakeSyncTermCode_43, Var_116);
  Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_23, Var_115);
  *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaybeSetParentSpCode_19, Var_114);
  ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, STATE_VARIABLE_CLD_124_124, &STATE_VARIABLE_CLD_126_126);
  ll_backend__par_conj_gen__place_all_outputs_4_p_0(Outputs_30, *STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_126_126, STATE_VARIABLE_CLD_54);
}

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Instr_6;

  ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Instr_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Instr_6));
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Instr_6;

  ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Instr_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Instr_6));
}

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word MaybeEnd0_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_9 = STATE_VARIABLE_CI_0_8;
  }
  else
  {
    MR_Word Conjunct_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Conjuncts_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word ThisConjunctCode0_28;
    MR_Word ThisConjunctCode_29;
    MR_Word AllSlots_30;
    MR_Word Variables_31;
    MR_Word LiveVars_32;
    MR_Word StoreMap0_33;
    MR_Word StoreMap_34;
    MR_Word MaybeEnd_35;
    MR_Word SaveCode0_36;
    MR_Word SaveCode_37;
    MR_Word ForkCode_41;
    MR_Word JoinCode_42;
    MR_Word ConjunctCode_43;
    MR_Word ConjunctsCode_44;
    MR_Word STATE_VARIABLE_CLD_47_47;
    MR_Word STATE_VARIABLE_CI_49_49;
    MR_Word STATE_VARIABLE_CLD_50_50;
    MR_Word STATE_VARIABLE_CI_52_52;
    MR_Word Var_68;
    MR_Word Var_69;

    ll_backend__code_loc_dep__reset_to_position_3_p_0(HeadVar__1_1, STATE_VARIABLE_CI_0_8, &STATE_VARIABLE_CLD_47_47);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Conjunct_22, &ThisConjunctCode0_28, STATE_VARIABLE_CI_0_8, &STATE_VARIABLE_CI_49_49, STATE_VARIABLE_CLD_47_47, &STATE_VARIABLE_CLD_50_50);
    mercury__cord__map_pred_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[1]), ThisConjunctCode0_28, &ThisConjunctCode_29);
    ll_backend__code_info__get_stack_slots_2_p_0(STATE_VARIABLE_CI_49_49, &AllSlots_30);
    ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_50_50, &Variables_31);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[0]), Variables_31, &LiveVars_32);
    mercury__map__select_3_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), AllSlots_30, LiveVars_32, &StoreMap0_33);
    StoreMap_34 = mercury__map__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[2]), StoreMap0_33);
    ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_34, MaybeEnd0_6, &MaybeEnd_35, &SaveCode0_36, STATE_VARIABLE_CLD_50_50);
    mercury__cord__map_pred_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_3[3]), SaveCode0_36, &SaveCode_37);
    if ((Conjuncts_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_65;
      MR_Word Var_66;

      ForkCode_41 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      {
        Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 30U));
        MR_hl_field(3, Var_66, 1) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(3, Var_66, 2) = ((MR_Box) (HeadVar__3_3));
      }
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_String) "finish"));
      }
      JoinCode_42 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_65)));
      STATE_VARIABLE_CI_52_52 = STATE_VARIABLE_CI_49_49;
    }
    else
    {
      MR_Word NextConjunct_40;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;

      ll_backend__code_info__get_next_label_3_p_0(&NextConjunct_40, STATE_VARIABLE_CI_49_49, &STATE_VARIABLE_CI_52_52);
      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 29U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(3, Var_54, 2) = ((MR_Box) (NextConjunct_40));
      }
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) ((MR_String) "fork off a child"));
      }
      ForkCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_53)));
      {
        Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 30U));
        MR_hl_field(3, Var_58, 1) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(3, Var_58, 2) = ((MR_Box) (HeadVar__3_3));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_String) "finish"));
      }
      {
        Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_62, 1) = ((MR_Box) (NextConjunct_40));
      }
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_String) "start of the next conjunct"));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_60));
      }
      JoinCode_42 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_56);
    }
    Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_37, JoinCode_42);
    Var_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisConjunctCode_29, Var_69);
    ConjunctCode_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ForkCode_41, Var_68);
    ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0(HeadVar__1_1, HeadVar__3_3, HeadVar__4_4, Conjuncts_23, MaybeEnd_35, &ConjunctsCode_44, STATE_VARIABLE_CI_52_52, STATE_VARIABLE_CI_9);
    *HeadVar__7_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ConjunctCode_43, ConjunctsCode_44);
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
  MR_Word GoalInfo_5,
  MR_Integer * SlotNum_6,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18)
{
  MR_Word PredId_8;
  MR_Integer ProcId_9;
  MR_Word ModuleInfo_10;
  MR_String ProcString_11;
  MR_Word ContainingGoalMap_12;
  MR_Word GoalId_13;
  MR_Word GoalPath_14;
  MR_String GoalPathString_15;
  MR_String String_16;
  MR_String Var_26;

  ll_backend__code_info__get_pred_id_2_p_0(STATE_VARIABLE_CI_0_17, &PredId_8);
  ll_backend__code_info__get_proc_id_2_p_0(STATE_VARIABLE_CI_0_17, &ProcId_9);
  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_17, &ModuleInfo_10);
  ProcString_11 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_dev_string_3_f_0(ModuleInfo_10, PredId_8, ProcId_9);
  ll_backend__code_info__get_containing_goal_map_2_p_0(STATE_VARIABLE_CI_0_17, &ContainingGoalMap_12);
  GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_5);
  GoalPath_14 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_12, GoalId_13);
  GoalPathString_15 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_14);
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ": ", GoalPathString_15);
  String_16 = mercury__string__f_43_43_2_f_0(ProcString_11, Var_26);
  ll_backend__code_info__add_threadscope_string_4_p_0(String_16, SlotNum_6, STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CI_18);
}

static void MR_CALL 
ll_backend__par_conj_gen__place_all_outputs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CLD_0_3,
  MR_Word * STATE_VARIABLE_CLD_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CLD_4 = STATE_VARIABLE_CLD_0_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarLocations_13;
      MR_Word Slot_14;
      MR_Word STATE_VARIABLE_CLD_18_18;
      MR_Word TypeCtorInfo_21_21;
      MR_Word Locations_15;
      MR_Box conv0_Locations_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CLD_0_3;

      ll_backend__code_loc_dep__variable_locations_2_p_0(STATE_VARIABLE_CLD_0_3, &VarLocations_13);
      ll_backend__code_info__get_variable_slot_3_p_0(HeadVar__2_2, Var_9, &Slot_14);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__par_conj_gen_scalar_common_1[1]), VarLocations_13, ((MR_Box) (Var_9)), &conv0_Locations_15);
      if (succeeded)
      {
        Locations_15 = ((MR_Word) (conv0_Locations_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_21_21, ((MR_Box) (Slot_14)), Locations_15);
      }
      if (succeeded)
        STATE_VARIABLE_CLD_18_18 = STATE_VARIABLE_CLD_0_3;
      else
        ll_backend__code_loc_dep__set_var_location_4_p_0(Var_9, Slot_14, STATE_VARIABLE_CLD_0_3, &STATE_VARIABLE_CLD_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_10;
      next_value_of_STATE_VARIABLE_CLD_0_3 = STATE_VARIABLE_CLD_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CLD_0_3 = next_value_of_STATE_VARIABLE_CLD_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__find_outputs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Outputs_0_5,
  MR_Word * STATE_VARIABLE_Outputs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Outputs_6 = STATE_VARIABLE_Outputs_0_5;
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InitialInst_19;
      MR_Word FinalInst_20;
      MR_Word STATE_VARIABLE_Outputs_24_24;
      MR_Word Var_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Outputs_0_5;

      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__2_2, Var_13, &InitialInst_19);
      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__3_3, Var_13, &FinalInst_20);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (InitialInst_19));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (FinalInst_20));
      }
      succeeded = check_hlds__mode_test__mode_is_output_2_p_0(HeadVar__4_4, Var_23);
      if (succeeded)
        {
          STATE_VARIABLE_Outputs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Outputs_24_24, 0) = ((MR_Box) (Var_13));
          MR_hl_field(1, STATE_VARIABLE_Outputs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Outputs_0_5));
        }
      else
        STATE_VARIABLE_Outputs_24_24 = STATE_VARIABLE_Outputs_0_5;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_14;
      next_value_of_STATE_VARIABLE_Outputs_0_5 = STATE_VARIABLE_Outputs_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Outputs_0_5 = next_value_of_STATE_VARIABLE_Outputs_0_5;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(
  MR_Integer SyncTermBaseSlot_4,
  MR_Word SyncTermBaseSlotLval_5)
{
  MR_Word Instr_6;
  MR_Word Components_8;
  MR_Word Var_9;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_String Var_14;
  MR_String Var_30;
  MR_String Var_37;

  Var_13 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (SyncTermBaseSlotLval_5)));
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
  }
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__par_conj_gen_scalar_common_2[2]), SyncTermBaseSlot_4, &Var_30);
  Var_37 = mercury__string__f_43_43_2_f_0(Var_30, (MR_String) "));\n#endif\n");
  Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "#ifdef MR_THREADSCOPE\nMR_threadscope_post_end_par_conj(&MR_sv(", Var_37);
  {
    Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_9, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Var_9, 2) = ((MR_Box) (Var_12));
    MR_hl_field(3, Var_9, 3) = ((MR_Box) (Var_14));
  }
  {
    Components_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Components_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, Components_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Instr_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Instr_6, 0) = ((MR_Box) ((MR_Unsigned) 27U));
    MR_hl_field(3, Instr_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Instr_6, 2) = ((MR_Box) (Components_8));
    MR_hl_field(3, Instr_6, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Instr_6, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Instr_6, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Instr_6, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Instr_6, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Instr_6, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Instr_6, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  return Instr_6;
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__par_conj_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.par_conj_gen.
