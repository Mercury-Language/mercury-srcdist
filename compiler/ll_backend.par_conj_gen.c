/*
** Automatically generated from `par_conj_gen.m'
** by the Mercury compiler,
** version rotd-2018-03-13
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(
  MR_Word STATE_VARIABLE_Code_0_4,
  MR_Word * STATE_VARIABLE_Code_5);

static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
  MR_Word CLD_4,
  MR_Word Var_5,
  MR_Word * Locn_6);

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

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_6[1][4];

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_7[2][6];




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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
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
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[1])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[0])),
    ((MR_Box) (ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[0])),
    ((MR_Box) (ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[0])),
    ((MR_Box) (ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[2])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_4[3])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_6[0])),
    ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[1])),
    ((MR_Box) (ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[1])),
    ((MR_Box) (ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_4[4][5] = {
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
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__par_conj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_5[2][7] = {
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

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__par_conj_gen_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__par_conj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_Word MR_CALL 
ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__616__1_1_f_0(
  MR_Word HeadVar__1_23)
{
  {
    MR_Word HeadVar__2_24;

    HeadVar__2_24 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, HeadVar__1_23);
    return HeadVar__2_24;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(
  MR_Word LVal_4,
  MR_Integer Max0_5,
  MR_Integer * Max_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) LVal_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LVal_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Integer N_7;

    if (succeeded)
    {
      N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LVal_4, (MR_Integer) 1)));
      succeeded = (N_7 > Max0_5);
    }
    if (succeeded)
      *Max_6 = N_7;
    else
      *Max_6 = Max0_5;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Lval_6;

    ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) wrapper_arg_1), &conv0_Lval_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Lval_6));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(
  MR_Word Lval0_5,
  MR_Word * Lval_6)
{
  {
    MR_Word TransformRval_8 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[11];

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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer SlotNum_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SlotNum_58));
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
              MR_Word Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
              MR_Integer SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 2)));

              switch (Type_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *Lval_6 = Lval0_5;
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *Lval_6 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SlotNum_35));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
              MR_Word Rval_18;
              MR_Box conv8_STATE_VARIABLE_Acc_25;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, TransformRval_8, Rval0_17, &Rval_18, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_Acc_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_18));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
              MR_Word Rval_42;
              MR_Box conv7_STATE_VARIABLE_Acc_25;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, TransformRval_8, Rval0_41, &Rval_42, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_Acc_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_42));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
              MR_Word Rval_38;
              MR_Box conv6_STATE_VARIABLE_Acc_25;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, TransformRval_8, Rval0_37, &Rval_38, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_Acc_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_38));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
              MR_Word Rval_40;
              MR_Box conv5_STATE_VARIABLE_Acc_25;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, TransformRval_8, Rval0_39, &Rval_40, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_Acc_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_40));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
              MR_Word Rval_44;
              MR_Box conv4_STATE_VARIABLE_Acc_25;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, TransformRval_8, Rval0_43, &Rval_44, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_Acc_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_44));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word TypeCtorInfo_56_56 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
              MR_Word Tag_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
              MR_Word Rval1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 2)));
              MR_Word Rval2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 3)));
              MR_Word Rval3_22;
              MR_Word Rval4_23;
              MR_Box conv1_STATE_VARIABLE_Acc_27_27;
              MR_Box conv2_STATE_VARIABLE_Acc_25;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeCtorInfo_56_56, TransformRval_8, Rval1_20, &Rval3_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_Acc_27_27);
              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeCtorInfo_56_56, TransformRval_8, Rval2_21, &Rval4_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_Acc_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval3_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rval4_23));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
              MR_Word Rval_46;
              MR_Box conv3_STATE_VARIABLE_Acc_25;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, TransformRval_8, Rval0_45, &Rval_46, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_Acc_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_46));
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
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Lval_6;

    ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_lval_4_p_0(((MR_Word) wrapper_arg_1), &conv0_Lval_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Lval_6));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(
  MR_Word STATE_VARIABLE_Instr_0_5,
  MR_Word * STATE_VARIABLE_Instr_6)
{
  {
    MR_Box conv1_Var_4;

    ll_backend__exprn_aux__transform_lval_in_instr_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[10], STATE_VARIABLE_Instr_0_5, STATE_VARIABLE_Instr_6, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_4);
  }
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__lval_is_reg_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Var_2;
    MR_Integer Var_3;

    if (succeeded)
    {
      Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(
  MR_String LCVarName_5,
  MR_String LCSVarName_6,
  MR_Word StackSlot_7,
  MR_String * CopyStr_8)
{
  {
    MR_bool succeeded;
    MR_String StackSlotName_9;

    succeeded = ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(StackSlot_7, &StackSlotName_9);
    if (succeeded)
    {
      MR_Integer N_10;

      succeeded = ((((MR_tag((MR_Word) StackSlot_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StackSlot_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), StackSlot_7, (MR_Integer) 1)));
        {
          MR_String Var_28;
          MR_String Var_30;
          MR_String Var_31;
          MR_String Var_38;
          MR_String Var_40;
          MR_String Var_41;
          MR_String Var_43;
          MR_String Var_44;

          Var_28 = mercury__string__f_43_43_2_f_0(StackSlotName_9, (MR_String) ";\n");
          Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", Var_28);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_2[1], N_10, &Var_31);
          Var_38 = mercury__string__f_43_43_2_f_0(Var_31, Var_30);
          Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_38);
          Var_41 = mercury__string__f_43_43_2_f_0(LCSVarName_6, Var_40);
          Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_41);
          Var_44 = mercury__string__f_43_43_2_f_0(LCVarName_5, Var_43);
          *CopyStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_worker_sv(", Var_44);
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
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    ll_backend__code_info__get_variable_slot_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_75_75;
    MR_Word TypeCtorInfo_76_76;
    MR_Word TypeCtorInfo_19_96;
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
    MR_Word Map_84;
    MR_Word AllLocnsSet_85;
    MR_Word AllLocns_86;
    MR_Word RegLocns_87;
    MR_Word Var_74;
    MR_Box conv0_AllLocnsSet_85;
    MR_Word _CLDAfterGoal_34;

    ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_0_49, &KnownVars_17);
    TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    KnownVarsSet_18 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_75_75, KnownVars_17);
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
    NonLocalsSet_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Var_51);
    InputVarsSet_20 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_75_75, NonLocalsSet_19, KnownVarsSet_18);
    InputVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_75_75, InputVarsSet_20);
    ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(InputVars_21, &SaveCode_22, STATE_VARIABLE_CI_0_47, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_52_52);
    ll_backend__code_loc_dep__variable_locations_2_p_0(STATE_VARIABLE_CLD_52_52, &Map_84);
    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], Map_84, ((MR_Box) (LCVar_11)), &conv0_AllLocnsSet_85);
    AllLocnsSet_85 = ((MR_Word) conv0_AllLocnsSet_85);
    TypeCtorInfo_19_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_19_96, AllLocnsSet_85, &AllLocns_86);
    mercury__list__filter_3_p_0(TypeCtorInfo_19_96, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[9], AllLocns_86, &RegLocns_87);
    if ((RegLocns_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((AllLocns_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
          return;
        }
      }
      else
      {
        MR_Word Var_89;

        LCVarLocn_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), AllLocns_86, (MR_Integer) 0)));
        Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), AllLocns_86, (MR_Integer) 1)));
      }
    else
    {
      MR_Word Var_88;

      LCVarLocn_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), RegLocns_87, (MR_Integer) 0)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), RegLocns_87, (MR_Integer) 1)));
    }
    ll_backend__par_conj_gen__best_variable_location_det_3_p_0(STATE_VARIABLE_CLD_52_52, LCSVar_12, &LCSVarLocn_24);
    ll_backend__code_info__get_next_label_3_p_0(&SpawnOffLabel_25, STATE_VARIABLE_CI_0_47, &STATE_VARIABLE_CI_53_53);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (LCVarLocn_23));
    }
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (LCSVarLocn_24));
    }
    {
      SpawnUinstr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SpawnUinstr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
      MR_hl_field(MR_mktag(3), SpawnUinstr_26, 1) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(3), SpawnUinstr_26, 2) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(3), SpawnUinstr_26, 3) = ((MR_Box) (SpawnOffLabel_25));
    }
    {
      SpawnInstr_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SpawnInstr_27, 0) = ((MR_Box) (SpawnUinstr_26));
      MR_hl_field(MR_mktag(0), SpawnInstr_27, 1) = ((MR_Box) ((MR_String) ""));
    }
    TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    SpawnOffCode_28 = mercury__cord__singleton_1_f_0(TypeCtorInfo_76_76, ((MR_Box) (SpawnInstr_27)));
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_52_52, &PositionAfterSpawnOff_29);
    {
      LabelUinstr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LabelUinstr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), LabelUinstr_30, 1) = ((MR_Box) (SpawnOffLabel_25));
    }
    {
      LabelInstr_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LabelInstr_31, 0) = ((MR_Box) (LabelUinstr_30));
      MR_hl_field(MR_mktag(0), LabelInstr_31, 1) = ((MR_Box) ((MR_String) "Label for spawned off code"));
    }
    LabelCode_32 = mercury__cord__singleton_1_f_0(TypeCtorInfo_76_76, ((MR_Box) (LabelInstr_31)));
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (LCSVarLocn_24));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (LCVarLocn_23));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
    }
    ll_backend__code_loc_dep__clobber_regs_3_p_0(Var_58, STATE_VARIABLE_CLD_52_52, &STATE_VARIABLE_CLD_59_59);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Goal_10, &GoalCode_33, STATE_VARIABLE_CI_53_53, &STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CLD_59_59, &_CLDAfterGoal_34);
    SpawnedOffCode0_35 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_76_76, LabelCode_32, GoalCode_33);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(PositionAfterSpawnOff_29, STATE_VARIABLE_CI_63_63, &STATE_VARIABLE_CLD_64_64);
    switch (UseParentStack_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_80_80;
          MR_Word InputStackSlots_39;
          MR_Integer FrameSize_41;
          MR_String CopyStr_42;
          MR_Word LiveLvalsInfo_44;
          MR_Word CopyUinstr_45;
          MR_Word CopyInstr_46;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;

          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0_2));
            MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (STATE_VARIABLE_CI_63_63));
          }
          TypeCtorInfo_80_80 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          mercury__list__map_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], TypeCtorInfo_80_80, Var_65, InputVars_21, &InputStackSlots_39);
          ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(SpawnedOffCode0_35, &FrameSize_41);
          SpawnedOffCode_36 = SpawnedOffCode0_35;
          ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(FrameSize_41, LCVarLocn_23, LCSVarLocn_24, InputStackSlots_39, &CopyStr_42);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (LCSVarLocn_24));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (InputStackSlots_39));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (LCVarLocn_23));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
          }
          Var_66 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_80_80, Var_67);
          {
            LiveLvalsInfo_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LiveLvalsInfo_44, 0) = ((MR_Box) (Var_66));
          }
          {
            CopyUinstr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CopyUinstr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), CopyUinstr_45, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), CopyUinstr_45, 2) = ((MR_Box) (LiveLvalsInfo_44));
            MR_hl_field(MR_mktag(3), CopyUinstr_45, 3) = ((MR_Box) (CopyStr_42));
          }
          {
            CopyInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CopyInstr_46, 0) = ((MR_Box) (CopyUinstr_45));
            MR_hl_field(MR_mktag(0), CopyInstr_46, 1) = ((MR_Box) ((MR_String) ""));
          }
          CopyCode_37 = mercury__cord__singleton_1_f_0(TypeCtorInfo_76_76, ((MR_Box) (CopyInstr_46)));
          *STATE_VARIABLE_CLD_50 = STATE_VARIABLE_CLD_64_64;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word OutputVars_38;
          MR_Word Var_70;

          ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(SpawnedOffCode0_35, &SpawnedOffCode_36);
          CopyCode_37 = mercury__cord__empty_0_f_0(TypeCtorInfo_76_76);
          OutputVars_38 = parse_tree__set_of_var__difference_2_f_0(TypeCtorInfo_75_75, NonLocalsSet_19, KnownVarsSet_18);
          Var_70 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_75_75, OutputVars_38);
          ll_backend__par_conj_gen__place_all_outputs_4_p_0(Var_70, STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CLD_64_64, STATE_VARIABLE_CLD_50);
        }
        break;
    }
    ll_backend__code_info__add_out_of_line_code_3_p_0(SpawnedOffCode_36, STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CI_48);
    Var_73 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_76_76, CopyCode_37, SpawnOffCode_28);
    *Code_14 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_76_76, SaveCode_22, Var_73);
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_Max_6;

    ll_backend__par_conj_gen__max_stack_ref_acc_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv2_Max_6);
    *wrapper_arg_3 = ((MR_Box) (conv2_Max_6));
  }
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_24;

    conv1_HeadVar__2_24 = ll_backend__par_conj_gen__IntroducedFrom__func__instr_list_max_stack_ref__616__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_24));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__instr_list_max_stack_ref_2_p_0(
  MR_Word Instrs_3,
  MR_Integer * MaxRef_4)
{
  {
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeCtorInfo_26_26;
    MR_Word RVals_5;
    MR_Word LVals0_6;
    MR_Word LValsInRvalsLists_7;
    MR_Word LValsSets_8;
    MR_Word LVals_9;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Box conv3_MaxRef_4;

    Var_10 = mercury__cord__list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, Instrs_3);
    ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(Var_10, &RVals_5, &LVals0_6);
    TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    TypeInfo_19_19 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[2];
    Var_12 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_18_18, RVals_5);
    LValsInRvalsLists_7 = mercury__list__map_2_f_0(TypeCtorInfo_18_18, TypeInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[6], Var_12);
    LValsSets_8 = mercury__list__map_2_f_0(TypeInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[7], LValsInRvalsLists_7);
    TypeCtorInfo_26_26 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    Var_14 = mercury__set__union_list_1_f_0(TypeCtorInfo_26_26, LValsSets_8);
    LVals_9 = mercury__set__union_2_f_0(TypeCtorInfo_26_26, Var_14, LVals0_6);
    mercury__set__fold_4_p_0(TypeCtorInfo_26_26, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[8], LVals_9, ((MR_Box) ((MR_Integer) 0)), &conv3_MaxRef_4);
    *MaxRef_4 = ((MR_Integer) conv3_MaxRef_4);
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Instr_6;

    ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Instr_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Instr_6));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_2_p_0(
  MR_Word STATE_VARIABLE_Code_0_4,
  MR_Word * STATE_VARIABLE_Code_5)
{
  {
    MR_Word TypeCtorInfo_10_10 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

    mercury__cord__map_pred_3_p_0(TypeCtorInfo_10_10, TypeCtorInfo_10_10, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[5], STATE_VARIABLE_Code_0_4, STATE_VARIABLE_Code_5);
  }
}

static MR_bool MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__par_conj_gen__lval_is_reg_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__best_variable_location_det_3_p_0(
  MR_Word CLD_4,
  MR_Word Var_5,
  MR_Word * Locn_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_19_19;
    MR_Word Map_7;
    MR_Word AllLocnsSet_8;
    MR_Word AllLocns_9;
    MR_Word RegLocns_10;
    MR_Box conv0_AllLocnsSet_8;

    ll_backend__code_loc_dep__variable_locations_2_p_0(CLD_4, &Map_7);
    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], Map_7, ((MR_Box) (Var_5)), &conv0_AllLocnsSet_8);
    AllLocnsSet_8 = ((MR_Word) conv0_AllLocnsSet_8);
    TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_19_19, AllLocnsSet_8, &AllLocns_9);
    mercury__list__filter_3_p_0(TypeCtorInfo_19_19, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[4], AllLocns_9, &RegLocns_10);
    if ((RegLocns_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((AllLocns_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.best_variable_location_det\'/3", (MR_String) "Could not find location for variable");
          return;
        }
      }
      else
      {
        MR_Word Var_12;

        *Locn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), AllLocns_9, (MR_Integer) 0)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), AllLocns_9, (MR_Integer) 1)));
      }
    else
    {
      MR_Word Var_11;

      *Locn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), RegLocns_10, (MR_Integer) 0)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), RegLocns_10, (MR_Integer) 1)));
    }
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_CopyStr_8;

    ll_backend__par_conj_gen__copy_one_slot_to_child_stack_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_CopyStr_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_CopyStr_8));
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0(
  MR_Integer FrameSize_6,
  MR_Word LCVarLocn_7,
  MR_Word LCSVarLocn_8,
  MR_Word StackSlots_9,
  MR_String * CodeStr_10)
{
  {
    MR_bool succeeded;
    MR_String LCVarName_13;
    MR_String LCSVarName_14;
    MR_String IncrLine_16;
    MR_Word CopyStrs_17;
    MR_String CopyLines_18;
    MR_Word Var_31;
    MR_String Var_32;
    MR_String Var_33;
    MR_String Var_39;
    MR_String Var_46;
    MR_String Var_48;
    MR_String Var_49;
    MR_String Var_51;
    MR_String Var_52;
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
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.copy_slots_to_child_stack\'/5", (MR_String) "cannot convert to string");
        return;
      }
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_2[1], FrameSize_6, &Var_39);
    Var_46 = mercury__string__f_43_43_2_f_0(Var_39, (MR_String) ");\n");
    Var_48 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_46);
    Var_49 = mercury__string__f_43_43_2_f_0(LCSVarName_14, Var_48);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_49);
    Var_52 = mercury__string__f_43_43_2_f_0(LCVarName_13, Var_51);
    IncrLine_16 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_lc_inc_worker_sp(", Var_52);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ll_backend__par_conj_gen__copy_slots_to_child_stack_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (LCVarName_13));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (LCSVarName_14));
    }
    mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_31, StackSlots_9, &CopyStrs_17);
    mercury__string__append_list_2_p_0(CopyStrs_17, &CopyLines_18);
    Var_33 = mercury__string__f_43_43_2_f_0(CopyLines_18, (MR_String) "\t}\n");
    Var_32 = mercury__string__f_43_43_2_f_0(IncrLine_16, Var_33);
    *CodeStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", Var_32);
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_137_137;
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
    MR_Word Final_28;
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
    MR_Word STATE_VARIABLE_CI_64_64;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word STATE_VARIABLE_CLD_127_127;
    MR_Word STATE_VARIABLE_CLD_129_129;

    switch (CodeModel_11) {
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
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_51, &Globals_15);
    libs__globals__lookup_int_option_3_p_0(Globals_15, (MR_Integer) 261, &STSize_16);
    ll_backend__code_loc_dep__get_par_conj_depth_2_p_0(STATE_VARIABLE_CLD_0_53, &Depth_17);
    Nonlocals_24 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo_10);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Nonlocals_24, &Variables_25);
    InstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_10);
    Contents_31 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, STSize_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))));
    NumConjuncts_41 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Conjuncts_9);
    TypeCtorInfo_137_137 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    Var_106 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (Depth_17 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_131_131;
      MR_Word Vars_22;
      MR_Word SyncTermSlots_32;
      MR_Word StackId_33;
      MR_Word ParentSyncTermBaseSlot_40;
      MR_Word BeforeConjunctionPos_45;
      MR_Word ConjunctStartPos_47;
      MR_Word ParentSpSlot1_50;
      MR_Word STATE_VARIABLE_CLD_65_65;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_84;
      MR_Word STATE_VARIABLE_CLD_86_86;
      MR_Word STATE_VARIABLE_CI_90_90;
      MR_Word STATE_VARIABLE_CI_95_95;
      MR_Word STATE_VARIABLE_CI_99_99;
      MR_Word STATE_VARIABLE_InConjunctionCLD_100_100;
      MR_Integer Var_101;
      MR_Word STATE_VARIABLE_InConjunctionCLD_102_102;
      MR_Word STATE_VARIABLE_InConjunctionCLD_105_105;
      MR_Word STATE_VARIABLE_CI_107_107;
      MR_Word STATE_VARIABLE_CLD_121_121;
      MR_Word STATE_VARIABLE_CI_123_123;
      MR_Word STATE_VARIABLE_CLD_124_124;
      MR_Integer _N_34;
      MR_Integer _M_35;
      MR_Word SyncTermBaseSlotPrime_36;
      MR_Integer SlotNumPrime_37;
      MR_Box conv0_SyncTermBaseSlotPrime_36;

      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_2[2]), (MR_Integer) 1, &ParentSpSlot1_50, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_64_64, STATE_VARIABLE_CLD_0_53, &STATE_VARIABLE_CLD_65_65);
      TypeCtorInfo_131_131 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (ParentSpSlot1_50));
        MR_hl_field(MR_mktag(3), Var_69, 2) = ((MR_Box) (&ll_backend__par_conj_gen_scalar_common_2[2]));
      }
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) ((MR_String) "save the old parent stack pointer"));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__par_conj_gen_scalar_common_1[4])));
      }
      MaybeSetParentSpCode_19 = mercury__cord__from_list_1_f_0(TypeCtorInfo_131_131, Var_67);
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (ParentSpSlot1_50));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Var_84));
      }
      {
        Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) ((MR_String) "restore old parent stack pointer"));
      }
      MaybeRestoreParentSpCode_20 = mercury__cord__singleton_1_f_0(TypeCtorInfo_131_131, ((MR_Box) (Var_81)));
      ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_65_65, &Vars_22);
      ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(Vars_22, &SaveCode_23, STATE_VARIABLE_CI_64_64, STATE_VARIABLE_CLD_65_65, &STATE_VARIABLE_CLD_86_86);
      ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_86_86, &InitialInstMap_26);
      ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Contents_31, (MR_Integer) 0, &SyncTermSlots_32, &StackId_33, &_N_34, &_M_35, STATE_VARIABLE_CI_64_64, &STATE_VARIABLE_CI_90_90, STATE_VARIABLE_CLD_86_86, &STATE_VARIABLE_InConjunctionCLD_100_100);
      succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, SyncTermSlots_32, &conv0_SyncTermBaseSlotPrime_36);
      if (succeeded)
      {
        SyncTermBaseSlotPrime_36 = ((MR_Word) conv0_SyncTermBaseSlotPrime_36);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (StackId_33 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) SyncTermBaseSlotPrime_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SyncTermBaseSlotPrime_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
            SlotNumPrime_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), SyncTermBaseSlotPrime_36, (MR_Integer) 1)));
        }
      }
      if (succeeded)
      {
        SlotNum_38 = SlotNumPrime_37;
        SyncTermBaseSlot_39 = SyncTermBaseSlotPrime_36;
        {
          ParentSyncTermBaseSlot_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ParentSyncTermBaseSlot_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ParentSyncTermBaseSlot_40, 1) = ((MR_Box) (SlotNum_38));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "cannot find stack slot");
          return;
        }
      }
      ll_backend__par_conj_gen__create_static_conj_id_4_p_0(GoalInfo_10, &StaticConjId_42, STATE_VARIABLE_CI_90_90, &STATE_VARIABLE_CI_95_95);
      ll_backend__code_info__get_next_label_3_p_0(&EndLabel_44, STATE_VARIABLE_CI_95_95, &STATE_VARIABLE_CI_99_99);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_InConjunctionCLD_100_100, &BeforeConjunctionPos_45);
      Var_101 = (Depth_17 + (MR_Integer) 1);
      ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(Var_101, STATE_VARIABLE_InConjunctionCLD_100_100, &STATE_VARIABLE_InConjunctionCLD_102_102);
      ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, STATE_VARIABLE_InConjunctionCLD_102_102, &STATE_VARIABLE_InConjunctionCLD_105_105);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_InConjunctionCLD_105_105, &ConjunctStartPos_47);
      ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0(ConjunctStartPos_47, EndLabel_44, ParentSyncTermBaseSlot_40, Conjuncts_9, Var_106, &GoalCode_48, STATE_VARIABLE_CI_99_99, &STATE_VARIABLE_CI_107_107);
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeConjunctionPos_45, STATE_VARIABLE_CI_107_107, &STATE_VARIABLE_CLD_121_121);
      ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(SyncTermSlots_32, (MR_Integer) 0, STATE_VARIABLE_CI_107_107, &STATE_VARIABLE_CI_123_123, STATE_VARIABLE_CLD_121_121, &STATE_VARIABLE_CLD_124_124);
      ll_backend__code_loc_dep__release_temp_slot_6_p_0(ParentSpSlot1_50, (MR_Integer) 1, STATE_VARIABLE_CI_123_123, STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_124_124, &STATE_VARIABLE_CLD_127_127);
    }
    else
    {
      MR_Word TypeCtorInfo_132_132 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      MR_Word Vars_154;
      MR_Word SyncTermSlots_155;
      MR_Word StackId_156;
      MR_Word ParentSyncTermBaseSlot_161;
      MR_Word BeforeConjunctionPos_162;
      MR_Word ConjunctStartPos_163;
      MR_Word STATE_VARIABLE_CLD_86_165;
      MR_Word STATE_VARIABLE_CI_90_166;
      MR_Word STATE_VARIABLE_CI_95_170;
      MR_Word STATE_VARIABLE_CI_99_171;
      MR_Word STATE_VARIABLE_InConjunctionCLD_100_172;
      MR_Integer Var_173;
      MR_Word STATE_VARIABLE_InConjunctionCLD_102_174;
      MR_Word STATE_VARIABLE_InConjunctionCLD_105_175;
      MR_Word STATE_VARIABLE_CI_107_176;
      MR_Word STATE_VARIABLE_CLD_121_177;
      MR_Integer _N_139;
      MR_Integer _M_140;
      MR_Word SyncTermBaseSlotPrime_145;
      MR_Integer SlotNumPrime_146;
      MR_Box conv1_SyncTermBaseSlotPrime_145;

      MaybeSetParentSpCode_19 = mercury__cord__empty_0_f_0(TypeCtorInfo_132_132);
      MaybeRestoreParentSpCode_20 = mercury__cord__empty_0_f_0(TypeCtorInfo_132_132);
      STATE_VARIABLE_CI_64_64 = STATE_VARIABLE_CI_0_51;
      ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_0_53, &Vars_154);
      ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(Vars_154, &SaveCode_23, STATE_VARIABLE_CI_64_64, STATE_VARIABLE_CLD_0_53, &STATE_VARIABLE_CLD_86_165);
      ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_86_165, &InitialInstMap_26);
      ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Contents_31, (MR_Integer) 0, &SyncTermSlots_155, &StackId_156, &_N_139, &_M_140, STATE_VARIABLE_CI_64_64, &STATE_VARIABLE_CI_90_166, STATE_VARIABLE_CLD_86_165, &STATE_VARIABLE_InConjunctionCLD_100_172);
      succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, SyncTermSlots_155, &conv1_SyncTermBaseSlotPrime_145);
      if (succeeded)
      {
        SyncTermBaseSlotPrime_145 = ((MR_Word) conv1_SyncTermBaseSlotPrime_145);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (StackId_156 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) SyncTermBaseSlotPrime_145)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SyncTermBaseSlotPrime_145, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
            SlotNumPrime_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), SyncTermBaseSlotPrime_145, (MR_Integer) 1)));
        }
      }
      if (succeeded)
      {
        SlotNum_38 = SlotNumPrime_146;
        SyncTermBaseSlot_39 = SyncTermBaseSlotPrime_145;
        {
          ParentSyncTermBaseSlot_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ParentSyncTermBaseSlot_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ParentSyncTermBaseSlot_161, 1) = ((MR_Box) (SlotNum_38));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.par_conj_gen", (MR_String) "predicate \140ll_backend.par_conj_gen.generate_par_conj\'/8", (MR_String) "cannot find stack slot");
          return;
        }
      }
      ll_backend__par_conj_gen__create_static_conj_id_4_p_0(GoalInfo_10, &StaticConjId_42, STATE_VARIABLE_CI_90_166, &STATE_VARIABLE_CI_95_170);
      ll_backend__code_info__get_next_label_3_p_0(&EndLabel_44, STATE_VARIABLE_CI_95_170, &STATE_VARIABLE_CI_99_171);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_InConjunctionCLD_100_172, &BeforeConjunctionPos_162);
      Var_173 = (Depth_17 + (MR_Integer) 1);
      ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(Var_173, STATE_VARIABLE_InConjunctionCLD_100_172, &STATE_VARIABLE_InConjunctionCLD_102_174);
      ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, STATE_VARIABLE_InConjunctionCLD_102_174, &STATE_VARIABLE_InConjunctionCLD_105_175);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_InConjunctionCLD_105_175, &ConjunctStartPos_163);
      ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0(ConjunctStartPos_163, EndLabel_44, ParentSyncTermBaseSlot_161, Conjuncts_9, Var_106, &GoalCode_48, STATE_VARIABLE_CI_99_171, &STATE_VARIABLE_CI_107_176);
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeConjunctionPos_162, STATE_VARIABLE_CI_107_176, &STATE_VARIABLE_CLD_121_177);
      succeeded = (Depth_17 == (MR_Integer) 0);
      if (succeeded)
      {
        ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(SyncTermSlots_155, (MR_Integer) 0, STATE_VARIABLE_CI_107_176, STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_121_177, &STATE_VARIABLE_CLD_127_127);
      }
      else
      {
        STATE_VARIABLE_CLD_127_127 = STATE_VARIABLE_CLD_121_177;
        *STATE_VARIABLE_CI_52 = STATE_VARIABLE_CI_107_176;
      }
    }
    hlds__instmap__apply_instmap_delta_3_p_0(InitialInstMap_26, InstMapDelta_27, &Final_28);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_64_64, &ModuleInfo_29);
    ll_backend__par_conj_gen__find_outputs_6_p_0(Variables_25, InitialInstMap_26, Final_28, ModuleInfo_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Outputs_30);
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
      MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (SyncTermBaseSlot_39));
      MR_hl_field(MR_mktag(3), Var_97, 2) = ((MR_Box) (NumConjuncts_41));
      MR_hl_field(MR_mktag(3), Var_97, 3) = ((MR_Box) (StaticConjId_42));
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) ((MR_String) "initialize sync term"));
    }
    MakeSyncTermCode_43 = mercury__cord__singleton_1_f_0(TypeCtorInfo_137_137, ((MR_Box) (Var_96)));
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (EndLabel_44));
    }
    {
      Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) ((MR_String) "end of parallel conjunction"));
    }
    Var_114 = ll_backend__par_conj_gen__ts_finish_par_conj_instr_2_f_0(SlotNum_38, SyncTermBaseSlot_39);
    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) ((MR_String) "finish parallel conjunction (ThreadScope instrumentation"));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_112));
    }
    EndLabelCode_49 = mercury__cord__from_list_1_f_0(TypeCtorInfo_137_137, Var_108);
    Var_120 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_137_137, EndLabelCode_49, MaybeRestoreParentSpCode_20);
    Var_119 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_137_137, GoalCode_48, Var_120);
    Var_118 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_137_137, MakeSyncTermCode_43, Var_119);
    Var_117 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_137_137, SaveCode_23, Var_118);
    *Code_12 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_137_137, MaybeSetParentSpCode_19, Var_117);
    ll_backend__code_loc_dep__clear_all_registers_3_p_0((MR_Integer) 0, STATE_VARIABLE_CLD_127_127, &STATE_VARIABLE_CLD_129_129);
    ll_backend__par_conj_gen__place_all_outputs_4_p_0(Outputs_30, *STATE_VARIABLE_CI_52, STATE_VARIABLE_CLD_129_129, STATE_VARIABLE_CLD_54);
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Instr_6;

    ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_Instr_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Instr_6));
  }
}

static MR_Box MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Instr_6;

    ll_backend__par_conj_gen__replace_stack_vars_by_parent_sv_instr_2_p_0(((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Instr_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Instr_6));
  }
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
  if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    *STATE_VARIABLE_CI_9 = STATE_VARIABLE_CI_0_8;
  }
  else
  {
    MR_Word TypeInfo_72_72;
    MR_Word TypeCtorInfo_73_73;
    MR_Word TypeCtorInfo_79_79;
    MR_Word TypeCtorInfo_10_87;
    MR_Word TypeCtorInfo_10_95;
    MR_Word Conjunct_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
    MR_Word Conjuncts_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
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
    MR_Word STATE_VARIABLE_CI_55_55;
    MR_Word Var_68;
    MR_Word Var_69;

    ll_backend__code_loc_dep__reset_to_position_3_p_0(HeadVar__1_1, STATE_VARIABLE_CI_0_8, &STATE_VARIABLE_CLD_47_47);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Conjunct_22, &ThisConjunctCode0_28, STATE_VARIABLE_CI_0_8, &STATE_VARIABLE_CI_49_49, STATE_VARIABLE_CLD_47_47, &STATE_VARIABLE_CLD_50_50);
    TypeCtorInfo_10_87 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    mercury__cord__map_pred_3_p_0(TypeCtorInfo_10_87, TypeCtorInfo_10_87, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[1], ThisConjunctCode0_28, &ThisConjunctCode_29);
    ll_backend__code_info__get_stack_slots_2_p_0(STATE_VARIABLE_CI_49_49, &AllSlots_30);
    ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_50_50, &Variables_31);
    TypeInfo_72_72 = (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0];
    mercury__set__list_to_set_2_p_0(TypeInfo_72_72, Variables_31, &LiveVars_32);
    TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
    mercury__map__select_3_p_0(TypeInfo_72_72, TypeCtorInfo_73_73, AllSlots_30, LiveVars_32, &StoreMap0_33);
    StoreMap_34 = mercury__map__map_values_only_2_f_0(TypeCtorInfo_73_73, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, TypeInfo_72_72, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[2], StoreMap0_33);
    ll_backend__code_loc_dep__generate_branch_end_6_p_0(StoreMap_34, MaybeEnd0_6, &MaybeEnd_35, &SaveCode0_36, STATE_VARIABLE_CI_49_49, STATE_VARIABLE_CLD_50_50);
    TypeCtorInfo_10_95 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    mercury__cord__map_pred_3_p_0(TypeCtorInfo_10_95, TypeCtorInfo_10_95, (MR_Word) &ll_backend__par_conj_gen_scalar_common_3[3], SaveCode0_36, &SaveCode_37);
    if ((Conjuncts_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      MR_Word Var_52;
      MR_Word Var_53;

      ForkCode_41 = mercury__cord__empty_0_f_0(TypeCtorInfo_78_78);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (HeadVar__3_3));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) ((MR_String) "finish"));
      }
      JoinCode_42 = mercury__cord__singleton_1_f_0(TypeCtorInfo_78_78, ((MR_Box) (Var_52)));
      STATE_VARIABLE_CI_55_55 = STATE_VARIABLE_CI_49_49;
    }
    else
    {
      MR_Word TypeCtorInfo_77_77;
      MR_Word NextConjunct_40;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;

      ll_backend__code_info__get_next_label_3_p_0(&NextConjunct_40, STATE_VARIABLE_CI_49_49, &STATE_VARIABLE_CI_55_55);
      TypeCtorInfo_77_77 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (NextConjunct_40));
      }
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) ((MR_String) "fork off a child"));
      }
      ForkCode_41 = mercury__cord__singleton_1_f_0(TypeCtorInfo_77_77, ((MR_Box) (Var_56)));
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(MR_mktag(3), Var_61, 2) = ((MR_Box) (HeadVar__3_3));
      }
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) ((MR_String) "finish"));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (NextConjunct_40));
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) ((MR_String) "start of the next conjunct"));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_63));
      }
      JoinCode_42 = mercury__cord__from_list_1_f_0(TypeCtorInfo_77_77, Var_59);
    }
    TypeCtorInfo_79_79 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    Var_69 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_79_79, SaveCode_37, JoinCode_42);
    Var_68 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_79_79, ThisConjunctCode_29, Var_69);
    ConjunctCode_43 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_79_79, ForkCode_41, Var_68);
    ll_backend__par_conj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_112_97_114_95_99_111_110_106_117_110_99_116_115_95_95_91_50_93_95_48_9_p_0(HeadVar__1_1, HeadVar__3_3, HeadVar__4_4, Conjuncts_23, MaybeEnd_35, &ConjunctsCode_44, STATE_VARIABLE_CI_55_55, STATE_VARIABLE_CI_9);
    *HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_79_79, ConjunctCode_43, ConjunctsCode_44);
  }
}

static void MR_CALL 
ll_backend__par_conj_gen__create_static_conj_id_4_p_0(
  MR_Word GoalInfo_5,
  MR_Integer * SlotNum_6,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18)
{
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
    MR_String Var_27;

    ll_backend__code_info__get_pred_id_2_p_0(STATE_VARIABLE_CI_0_17, &PredId_8);
    ll_backend__code_info__get_proc_id_2_p_0(STATE_VARIABLE_CI_0_17, &ProcId_9);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_17, &ModuleInfo_10);
    ProcString_11 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(ModuleInfo_10, PredId_8, ProcId_9);
    ll_backend__code_info__get_containing_goal_map_2_p_0(STATE_VARIABLE_CI_0_17, &ContainingGoalMap_12);
    GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_5);
    GoalPath_14 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_12, GoalId_13);
    GoalPathString_15 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_14);
    Var_27 = mercury__string__f_43_43_2_f_0((MR_String) ": ", GoalPathString_15);
    String_16 = mercury__string__f_43_43_2_f_0(ProcString_11, Var_27);
    ll_backend__code_info__add_threadscope_string_4_p_0(String_16, SlotNum_6, STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CI_18);
  }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CLD_4 = STATE_VARIABLE_CLD_0_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word VarLocations_13;
      MR_Word Slot_14;
      MR_Word STATE_VARIABLE_CLD_18_18;
      MR_Word TypeCtorInfo_22_22;
      MR_Word Locations_15;
      MR_Box conv0_Locations_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CLD_0_3;

      ll_backend__code_loc_dep__variable_locations_2_p_0(STATE_VARIABLE_CLD_0_3, &VarLocations_13);
      ll_backend__code_info__get_variable_slot_3_p_0(HeadVar__2_2, Var_9, &Slot_14);
      succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_1[0], (MR_Word) &ll_backend__par_conj_gen_scalar_common_1[1], VarLocations_13, ((MR_Box) (Var_9)), &conv0_Locations_15);
      if (succeeded)
      {
        Locations_15 = ((MR_Word) conv0_Locations_15);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_22_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_22_22, ((MR_Box) (Slot_14)), Locations_15);
      }
      if (succeeded)
        STATE_VARIABLE_CLD_18_18 = STATE_VARIABLE_CLD_0_3;
      else
        ll_backend__code_loc_dep__set_var_location_4_p_0(Var_9, Slot_14, STATE_VARIABLE_CLD_0_3, &STATE_VARIABLE_CLD_18_18);
      // direct tailcall eliminated
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Outputs_6 = STATE_VARIABLE_Outputs_0_5;
    else
    {
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word InitialInst_19;
      MR_Word FinalInst_20;
      MR_Word STATE_VARIABLE_Outputs_24_24;
      MR_Word Var_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Outputs_0_5;

      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__2_2, Var_13, &InitialInst_19);
      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__3_3, Var_13, &FinalInst_20);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (InitialInst_19));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (FinalInst_20));
      }
      succeeded = check_hlds__mode_util__mode_is_output_2_p_0(HeadVar__4_4, Var_23);
      if (succeeded)
        {
          STATE_VARIABLE_Outputs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Outputs_24_24, 0) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Outputs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Outputs_0_5));
        }
      else
        STATE_VARIABLE_Outputs_24_24 = STATE_VARIABLE_Outputs_0_5;
      // direct tailcall eliminated
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
  {
    MR_Word Instr_6;
    MR_Word Components_8;
    MR_Word Var_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_String Var_16;
    MR_String Var_32;
    MR_String Var_39;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (SyncTermBaseSlotLval_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_13 = mercury__set__set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, Var_14);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__par_conj_gen_scalar_common_2[1], SyncTermBaseSlot_4, &Var_32);
    Var_39 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) "));\n#endif\n");
    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "#ifdef MR_THREADSCOPE\nMR_threadscope_post_end_par_conj(&MR_sv(", Var_39);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_9, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(3), Var_9, 4) = ((MR_Box) (Var_16));
    }
    {
      Components_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Components_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Components_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Instr_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Instr_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
      MR_hl_field(MR_mktag(3), Instr_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Instr_6, 2) = ((MR_Box) (Components_8));
      MR_hl_field(MR_mktag(3), Instr_6, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Instr_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Instr_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Instr_6, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Instr_6, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Instr_6, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Instr_6, 9) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Instr_6, 10) = ((MR_Box) ((MR_Integer) 0));
    }
    return Instr_6;
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__par_conj_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.par_conj_gen.
