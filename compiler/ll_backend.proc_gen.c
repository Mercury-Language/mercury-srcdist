/*
** Automatically generated from `proc_gen.m'
** by the Mercury compiler,
** version rotd-2023-10-02
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


// :- module ll_backend.proc_gen.
// :- implementation.

/*
INIT mercury__ll_backend__proc_gen__init
ENDINIT
*/

#include "ll_backend.proc_gen.mih"


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
#include "robdd.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.middle_rec.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.stack_layout.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_construct.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0[2];

static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0;

static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0[1];

static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_proc_frame_slots_0[1];

static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_proc_frame_slots_0[1];

static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_proc_frame_slots_0[1];

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1433__1_2_p_0(
  MR_Integer NumPTIs_19,
  MR_Integer NumArgs_23);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1246__1_2_p_0(
  MR_Word MaybeSpecialReturn_51,
  MR_Word HeadVar__2_147);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1238__1_2_p_0(
  MR_Word MaybeSpecialReturn_51,
  MR_Word HeadVar__2_132);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_non_code__872__1_2_p_0(
  MR_Word MaybeTailRecInfo_23,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__466__1_2_p_0(
  MR_Word NeedsMaxfrSlot_63,
  MR_Word HeadVar__2_125);

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__382__1_2_p_0(
  MR_Word Parallel_23,
  MR_Word HeadVar__2_116);

static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GlobalData_0_28,
  MR_Word * STATE_VARIABLE_GlobalData_29);

static MR_Word MR_CALL 
ll_backend__proc_gen__project_layout_locn_lval_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__proc_gen__add_type_info_lvals_4_p_0(
  MR_Word _TVar_5,
  MR_Word TypeInfoLocnSets_6,
  MR_Word STATE_VARIABLE_LiveLvals_0_9,
  MR_Word * STATE_VARIABLE_LiveLvals_10);

static MR_Box MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word TypeInfoLocnSets_6,
  MR_Word STATE_VARIABLE_LiveLvals_0_9,
  MR_Word * STATE_VARIABLE_LiveLvals_10);

static void MR_CALL 
ll_backend__proc_gen__generate_code_for_pred_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ConstStructMap_11,
  MR_Word VeryVerbose_12,
  MR_Word Statistics_13,
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_CProcsCord_0_27,
  MR_Word * STATE_VARIABLE_CProcsCord_28,
  MR_Word STATE_VARIABLE_GlobalData_0_29,
  MR_Word * STATE_VARIABLE_GlobalData_30);

static void MR_CALL 
ll_backend__proc_gen__generate_code_for_procs_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ConstStructMap_2,
  MR_Word PredId_3,
  MR_Word PredInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word PrintProcProgress_6,
  MR_Word STATE_VARIABLE_CProcsCord_0_7,
  MR_Word * STATE_VARIABLE_CProcsCord_8,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10);

static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7,
  MR_Word * BytecodeInstructions_8);

static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0(
  MR_Word CodeModel_12,
  MR_Word ProcContext_13,
  MR_Word Goal_14,
  MR_Word ResumePoint_15,
  MR_Word TraceSlotInfo_16,
  MR_Word * Code_17,
  MR_Word * MaybeTraceCallLabel_18,
  MR_Word * ProcFrameSlots_19,
  MR_Word STATE_VARIABLE_CI_0_22,
  MR_Word * STATE_VARIABLE_CI_23,
  MR_Word STATE_VARIABLE_CLD_0_24);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_non_code_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__proc_gen__generate_non_code_10_p_0(
  MR_Word ProcContext_11,
  MR_Word Goal_12,
  MR_Word ResumePoint_13,
  MR_Word TraceSlotInfo_14,
  MR_Word * Code_15,
  MR_Word * MaybeTraceCallLabel_16,
  MR_Word * ProcFrameSlots_17,
  MR_Word STATE_VARIABLE_CI_0_47,
  MR_Word * STATE_VARIABLE_CI_48,
  MR_Word STATE_VARIABLE_CLD_0_49);

static void MR_CALL 
ll_backend__proc_gen__generate_det_code_10_p_0(
  MR_Word ProcContext_11,
  MR_Word Goal_12,
  MR_Word ResumePoint_13,
  MR_Word TraceSlotInfo_14,
  MR_Word * Code_15,
  MR_Word * MaybeTraceCallLabel_16,
  MR_Word * ProcFrameSlots_17,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37,
  MR_Word STATE_VARIABLE_CLD_0_38);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0(
  MR_Word CodeModel_10,
  MR_Word ProcFrameSlots_11,
  MR_Word TraceSlotInfo_12,
  MR_Word ProcContext_13,
  MR_Word * RestoreDeallocCode_14,
  MR_Word * ExitCode_15,
  MR_Word STATE_VARIABLE_CI_0_63,
  MR_Word * STATE_VARIABLE_CI_64,
  MR_Word STATE_VARIABLE_CLD_0_65);

static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
  MR_Word CI_7,
  MR_Word CodeModel_8,
  MR_Word Goal_9,
  MR_Word OutsideResumePoint_10,
  MR_Word * ProcFrameSlots_11,
  MR_Word * EntryCode_12);

static void MR_CALL 
ll_backend__proc_gen__generate_call_event_8_p_0(
  MR_Word TraceInfo_9,
  MR_Word ProcContext_10,
  MR_Word * MaybeTraceCallLabel_11,
  MR_Word * TraceCallCode_12,
  MR_Word STATE_VARIABLE_CI_0_19,
  MR_Word * STATE_VARIABLE_CI_20,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22);

static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
  MR_Word ProcInfo_4,
  MR_Word HLDSDeepInfo_5);

static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[40][2];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[1][12];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[2][6];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[1][7];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[6][5];




static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[40][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_2[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_special_proc_return_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__proc_gen_scalar_common_2[2]))),
    ((MR_Box) ((MR_String) "Fail"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__proc_gen_scalar_common_1[13]))),
    ((MR_Box) ((MR_String) "Return from procedure call"))
  },
  /* row  15 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[14])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "discard retry ticket"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__proc_gen_scalar_common_1[17]))),
    ((MR_Box) ((MR_String) "fail after fail trace port"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_3[3]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_3[4]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_3[5]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "prune retry ticket"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__proc_gen_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__proc_gen_scalar_common_1[25]))),
    ((MR_Box) ((MR_String) "Return from procedure call"))
  },
  /* row  27 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[26])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__proc_gen_scalar_common_2[3]))),
    ((MR_Box) ((MR_String) "Succeed"))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "\t\t};\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_GOTO(return_addr);\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_restore_registers();\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) ");\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "bytecode_call_info")),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "&")),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "\t\treturn_addr = MB_bytecode_call_entry(")),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_save_registers();\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "\t\tMB_Native_Addr return_addr;\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[38])))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(3, &ll_backend__proc_gen_scalar_common_1[11])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(3, &ll_backend__proc_gen_scalar_common_1[28])))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_6[0])),
    ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[1])),
    ((MR_Box) (ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[4])),
    ((MR_Box) (ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[6][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "Start of procedure prologue")) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "End of procedure prologue")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "Start of procedure epilogue")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "End of procedure epilogue")) },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_needs_maxfr_slot_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_needs_maxfr_slot_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_special_proc_return_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0 = {
  (MR_String) "proc_frame_slots",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__proc_gen__ll_backend__proc_gen__field_types_proc_frame_slots_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0[1] = { &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0 };

static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_proc_frame_slots_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_proc_frame_slots_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_proc_frame_slots_0[1] = { &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_proc_frame_slots_0_0 };

static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_proc_frame_slots_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_proc_frame_slots_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__proc_gen____Unify____proc_frame_slots_0_0_10001)),
  ((MR_Box) (ll_backend__proc_gen____Compare____proc_frame_slots_0_0_10001)),
  (MR_String) "ll_backend.proc_gen",
  (MR_String) "proc_frame_slots",
  { ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_proc_frame_slots_0 },
  { ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_proc_frame_slots_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_proc_frame_slots_0,

};

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1433__1_2_p_0(
  MR_Integer NumPTIs_19,
  MR_Integer NumArgs_23)
{
  MR_bool succeeded = (NumArgs_23 == NumPTIs_19);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1246__1_2_p_0(
  MR_Word MaybeSpecialReturn_51,
  MR_Word HeadVar__2_147)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[7]), ((MR_Box) (MaybeSpecialReturn_51)), ((MR_Box) (HeadVar__2_147)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1238__1_2_p_0(
  MR_Word MaybeSpecialReturn_51,
  MR_Word HeadVar__2_132)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[7]), ((MR_Box) (MaybeSpecialReturn_51)), ((MR_Box) (HeadVar__2_132)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_non_code__872__1_2_p_0(
  MR_Word MaybeTailRecInfo_23,
  MR_Word HeadVar__2_55)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[3]), ((MR_Box) (MaybeTailRecInfo_23)), ((MR_Box) (HeadVar__2_55)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__466__1_2_p_0(
  MR_Word NeedsMaxfrSlot_63,
  MR_Word HeadVar__2_125)
{
  MR_bool succeeded = (NeedsMaxfrSlot_63 == HeadVar__2_125);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__382__1_2_p_0(
  MR_Word Parallel_23,
  MR_Word HeadVar__2_116)
{
  MR_bool succeeded = (Parallel_23 == HeadVar__2_116);

  return succeeded;
}

static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&ll_backend__proc_gen_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1433__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GlobalData_0_28,
  MR_Word * STATE_VARIABLE_GlobalData_29)
{
  MR_bool succeeded;
  MR_Word PredProcId_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word TableStructInfo_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word ProcTableStructInfo_7 = ((MR_Word) ((MR_hl_field(0, TableStructInfo_5, (MR_Integer) 0))));
  MR_Word TableAttributes_8 = ((MR_Word) ((MR_hl_field(0, TableStructInfo_5, (MR_Integer) 1))));
  MR_Word RttiProcLabel_9 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_7, (MR_Integer) 0))));
  MR_Integer NumInputs_12 = ((MR_Integer) ((MR_hl_field(0, ProcTableStructInfo_7, (MR_Integer) 3))));
  MR_Integer NumOutputs_13 = ((MR_Integer) ((MR_hl_field(0, ProcTableStructInfo_7, (MR_Integer) 4))));
  MR_Word InputSteps_14 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_7, (MR_Integer) 5))));
  MR_Word MaybeOutputSteps_15 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_7, (MR_Integer) 6))));
  MR_Word ArgInfos_16 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_7, (MR_Integer) 7))));
  MR_Word EvalMethod_17 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_7, (MR_Integer) 8))));
  MR_Word StaticCellInfo0_18;
  MR_Integer NumPTIs_19;
  MR_Word PTIVectorRval_20;
  MR_Word TVarVectorRval_21;
  MR_Word StaticCellInfo_22;
  MR_Integer NumArgs_23;
  MR_Word MaybeSizeLimit_24;
  MR_Word Statistics_25;
  MR_Word ProcLabel_26;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_GlobalData_30_30;
  MR_Word Var_31;

  ll_backend__global_data__global_data_get_static_cell_info_2_p_0(STATE_VARIABLE_GlobalData_0_28, &StaticCellInfo0_18);
  ll_backend__stack_layout__convert_table_arg_info_6_p_0(ArgInfos_16, &NumPTIs_19, &PTIVectorRval_20, &TVarVectorRval_21, StaticCellInfo0_18, &StaticCellInfo_22);
  ll_backend__global_data__global_data_set_static_cell_info_3_p_0(StaticCellInfo_22, STATE_VARIABLE_GlobalData_0_28, &STATE_VARIABLE_GlobalData_30_30);
  NumArgs_23 = (MR_Integer) ((MR_Unsigned) NumInputs_12 + (MR_Unsigned) NumOutputs_13);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[5]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (NumPTIs_19));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (NumArgs_23));
  }
  mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140ll_backend.proc_gen.add_tabling_info_struct\'/3", (MR_String) "args mismatch");
  MaybeSizeLimit_24 = ((MR_Word) ((MR_hl_field(0, TableAttributes_8, (MR_Integer) 1))));
  Statistics_25 = ((((MR_Unsigned) ((MR_hl_field(0, TableAttributes_8, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
  ProcLabel_26 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_9);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (ProcLabel_26));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (EvalMethod_17));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) (NumInputs_12));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (NumOutputs_13));
    MR_hl_field(0, Var_27, 4) = ((MR_Box) (InputSteps_14));
    MR_hl_field(0, Var_27, 5) = ((MR_Box) (MaybeOutputSteps_15));
    MR_hl_field(0, Var_27, 6) = ((MR_Box) (PTIVectorRval_20));
    MR_hl_field(0, Var_27, 7) = ((MR_Box) (TVarVectorRval_21));
    MR_hl_field(0, Var_27, 8) = ((MR_Box) (MaybeSizeLimit_24));
    MR_hl_field(0, Var_27, 9) = (MR_Box) ((MR_Unsigned) (Statistics_25));
  }
  ll_backend__global_data__global_data_add_new_proc_var_4_p_0(PredProcId_4, Var_27, STATE_VARIABLE_GlobalData_30_30, STATE_VARIABLE_GlobalData_29);
}

static MR_Word MR_CALL 
ll_backend__proc_gen__project_layout_locn_lval_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Lval_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    Lval_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    Lval_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
  return Lval_2;
}

static void MR_CALL 
ll_backend__proc_gen__add_type_info_lvals_4_p_0(
  MR_Word _TVar_5,
  MR_Word TypeInfoLocnSets_6,
  MR_Word STATE_VARIABLE_LiveLvals_0_9,
  MR_Word * STATE_VARIABLE_LiveLvals_10)
{
  ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(TypeInfoLocnSets_6, STATE_VARIABLE_LiveLvals_0_9, STATE_VARIABLE_LiveLvals_10);
}

static MR_Box MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Lval_2;

  conv0_Lval_2 = ll_backend__proc_gen__project_layout_locn_lval_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Lval_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_105_110_102_111_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word TypeInfoLocnSets_6,
  MR_Word STATE_VARIABLE_LiveLvals_0_9,
  MR_Word * STATE_VARIABLE_LiveLvals_10)
{
  MR_Word TypeInfoLvals_8;

  TypeInfoLvals_8 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__proc_gen_scalar_common_2[6]), TypeInfoLocnSets_6);
  mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TypeInfoLvals_8, STATE_VARIABLE_LiveLvals_0_9, STATE_VARIABLE_LiveLvals_10);
}

static void MR_CALL 
ll_backend__proc_gen__generate_code_for_pred_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ConstStructMap_11,
  MR_Word VeryVerbose_12,
  MR_Word Statistics_13,
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_CProcsCord_0_27,
  MR_Word * STATE_VARIABLE_CProcsCord_28,
  MR_Word STATE_VARIABLE_GlobalData_0_29,
  MR_Word * STATE_VARIABLE_GlobalData_30)
{
  MR_Word PredInfo_17;
  MR_Word ProcIds_18;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_14, &PredInfo_17);
  ProcIds_18 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_17);
  if ((ProcIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_CProcsCord_28 = STATE_VARIABLE_CProcsCord_0_27;
    *STATE_VARIABLE_GlobalData_30 = STATE_VARIABLE_GlobalData_0_29;
  }
  else
  {
    MR_Word TailProcIds_20 = ((MR_Word) ((MR_hl_field(1, ProcIds_18, (MR_Integer) 1))));

    switch (VeryVerbose_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__proc_gen__generate_code_for_procs_10_p_0(ModuleInfo_10, ConstStructMap_11, PredId_14, PredInfo_17, ProcIds_18, (MR_Integer) 0, STATE_VARIABLE_CProcsCord_0_27, STATE_VARIABLE_CProcsCord_28, STATE_VARIABLE_GlobalData_0_29, STATE_VARIABLE_GlobalData_30);
        break;
      case (MR_Integer) 1:
        {
          MR_Word PrintProcProgress_23;
          MR_String Var_37;
          MR_Word ProgressStream_46;
          MR_Word ProgressStream_47;

          hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_10, &ProgressStream_46);
          Var_37 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_10, PredId_14);
          mercury__io__write_string_4_p_0(ProgressStream_46, (MR_String) "% Generating code for ");
          mercury__io__write_string_4_p_0(ProgressStream_46, Var_37);
          mercury__io__write_string_4_p_0(ProgressStream_46, (MR_String) "\n");
          if ((TailProcIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
            PrintProcProgress_23 = (MR_Integer) 0;
          else
            PrintProcProgress_23 = (MR_Integer) 1;
          ll_backend__proc_gen__generate_code_for_procs_10_p_0(ModuleInfo_10, ConstStructMap_11, PredId_14, PredInfo_17, ProcIds_18, PrintProcProgress_23, STATE_VARIABLE_CProcsCord_0_27, STATE_VARIABLE_CProcsCord_28, STATE_VARIABLE_GlobalData_0_29, STATE_VARIABLE_GlobalData_30);
          hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_10, &ProgressStream_47);
          libs__file_util__maybe_report_stats_4_p_0(ProgressStream_47, Statistics_13);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_code_for_procs_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ConstStructMap_2,
  MR_Word PredId_3,
  MR_Word PredInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word PrintProcProgress_6,
  MR_Word STATE_VARIABLE_CProcsCord_0_7,
  MR_Word * STATE_VARIABLE_CProcsCord_8,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GlobalData_10 = STATE_VARIABLE_GlobalData_0_9;
      *STATE_VARIABLE_CProcsCord_8 = STATE_VARIABLE_CProcsCord_0_7;
    }
    else
    {
      MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ProcIds_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ProcInfos_34;
      MR_Word ProcInfo_35;
      MR_Word CProc_36;
      MR_Word STATE_VARIABLE_GlobalData_51_51;
      MR_Word STATE_VARIABLE_CProcsCord_52_52;
      MR_Box conv0_ProcInfo_35;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_CProcsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_9;

      switch (PrintProcProgress_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgressStream_32;
            MR_Integer ProcIdInt_33;
            MR_String Var_47;
            MR_String Var_62;

            hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_1, &ProgressStream_32);
            ProcIdInt_33 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_26);
            Var_47 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_1, PredId_3);
            mercury__io__write_string_4_p_0(ProgressStream_32, (MR_String) "% Generating code for ");
            mercury__io__write_string_4_p_0(ProgressStream_32, Var_47);
            mercury__io__write_string_4_p_0(ProgressStream_32, (MR_String) " proc ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_3[0]), ProcIdInt_33, &Var_62);
            mercury__io__write_string_4_p_0(ProgressStream_32, Var_62);
            mercury__io__write_string_4_p_0(ProgressStream_32, (MR_String) "\n");
          }
          break;
      }
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_4, &ProcInfos_34);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcInfos_34, ((MR_Box) (ProcId_26)), &conv0_ProcInfo_35);
      ProcInfo_35 = ((MR_Word) (conv0_ProcInfo_35));
      ll_backend__proc_gen__generate_proc_code_9_p_0(ModuleInfo_1, ConstStructMap_2, PredId_3, PredInfo_4, ProcId_26, ProcInfo_35, &CProc_36, STATE_VARIABLE_GlobalData_0_9, &STATE_VARIABLE_GlobalData_51_51);
      STATE_VARIABLE_CProcsCord_52_52 = mercury__cord__snoc_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), STATE_VARIABLE_CProcsCord_0_7, ((MR_Box) (CProc_36)));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_27;
      next_value_of_STATE_VARIABLE_CProcsCord_0_7 = STATE_VARIABLE_CProcsCord_52_52;
      next_value_of_STATE_VARIABLE_GlobalData_0_9 = STATE_VARIABLE_GlobalData_51_51;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_CProcsCord_0_7 = next_value_of_STATE_VARIABLE_CProcsCord_0_7;
      STATE_VARIABLE_GlobalData_0_9 = next_value_of_STATE_VARIABLE_GlobalData_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_GlobalData_29;

  ll_backend__proc_gen__add_tabling_info_struct_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GlobalData_29);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_29));
}

void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9)
{
  MR_Word TableStructMap_6;
  MR_Word TableStructs_7;
  MR_Box conv1_STATE_VARIABLE_GlobalData_9;

  hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ModuleInfo_4, &TableStructMap_6);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), TableStructMap_6, &TableStructs_7);
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_2[0]), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0), (MR_Word) (&ll_backend__proc_gen_scalar_common_2[5]), TableStructs_7, ((MR_Box) (STATE_VARIABLE_GlobalData_0_8)), &conv1_STATE_VARIABLE_GlobalData_9);
  *STATE_VARIABLE_GlobalData_9 = ((MR_Word) (conv1_STATE_VARIABLE_GlobalData_9));
}

MR_String MR_CALL 
ll_backend__proc_gen__push_msg_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  MR_String PushMsg_8;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_9);
  PushMsg_8 = hlds__hlds_desc__describe_proc_3_f_0((MR_Integer) 1, PredInfo_9, ProcId_7);
  return PushMsg_8;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__466__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__382__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0(
  MR_Word ModuleInfo0_10,
  MR_Word ConstStructMap_11,
  MR_Word PredId_12,
  MR_Word PredInfo_13,
  MR_Integer ProcId_14,
  MR_Word ProcInfo0_15,
  MR_Word * CProc_16,
  MR_Word STATE_VARIABLE_GlobalData_0_109,
  MR_Word * STATE_VARIABLE_GlobalData_110)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_18;
  MR_Word ProcInfo1_19;
  MR_Word Globals_20;
  MR_Word TraceLevel_21;
  MR_Word HasParConj_22;
  MR_Word Parallel_23;
  MR_Word ProcInfo_25;
  MR_Word MaybeContainingGoalMap_26;
  MR_Word ClausesInfo_27;
  MR_Word ProcContext_29;
  MR_Word GoalInfo_30;
  MR_Word Detism_31;
  MR_Word CodeModel_32;
  MR_Word Goal_33;
  MR_Word MaybeFollowVars_35;
  MR_Word FollowVars_36;
  MR_Word ForceProcId_39;
  MR_Word SaveSuccip_40;
  MR_Word StaticCellInfo0_41;
  MR_Word TSRevStringTable0_42;
  MR_Integer TSStringTableSize0_43;
  MR_Word VarTable_44;
  MR_Word TraceSlotInfo_45;
  MR_Word CodeInfo0_46;
  MR_Word OutsideResumePoint_47;
  MR_Word CodeInfo1_48;
  MR_Word CodeLocDep0_49;
  MR_Word CodeTree0_50;
  MR_Word MaybeTraceCallLabel_51;
  MR_Word ProcFrameSlots_52;
  MR_Word CodeInfo_53;
  MR_Word OutOfLineCode_54;
  MR_Word CodeTree_55;
  MR_Integer MaxTraceRegR_56;
  MR_Integer MaxTraceRegF_57;
  MR_Word StaticCellInfo_58;
  MR_Word TSRevStringTable_59;
  MR_Integer TSStringTableSize_60;
  MR_Word CreatedTempFrame_61;
  MR_Word ProcTraceEvents_62;
  MR_Word Instructions0_64;
  MR_Integer TotalSlots_65;
  MR_Word MaybeSuccipSlot_66;
  MR_Word Instructions_68;
  MR_Word EffTraceLevel_69;
  MR_Word MaybeTableIOInfo_70;
  MR_Word ClosureLayouts_96;
  MR_Word ProcLabel_97;
  MR_Word AllocSites_98;
  MR_String Name_99;
  MR_Word PredFormArity_100;
  MR_Word LabelCounter_101;
  MR_Word MayAlterRtti_102;
  MR_Word GenBytecode_103;
  MR_Word ProcInstructions_104;
  MR_Word ProcLabelCounter_105;
  MR_Word PredOrFunc_106;
  MR_Word UserArity_107;
  MR_Word UsedEnvVars_108;
  MR_Word STATE_VARIABLE_GlobalData_120_120;
  MR_Word STATE_VARIABLE_GlobalData_121_121;
  MR_Word STATE_VARIABLE_GlobalData_132_132;
  MR_Word STATE_VARIABLE_GlobalData_133_133;
  MR_Word Var_138;
  MR_Word FirstClause_28;
  MR_Word Var_117;
  MR_Word Var_136;

  ll_backend__proc_gen__maybe_set_trace_level_3_p_0(PredInfo_13, ModuleInfo0_10, &ModuleInfo_18);
  hlds__hlds_proc_util__ensure_all_headvars_are_named_2_p_0(ProcInfo0_15, &ProcInfo1_19);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_18, &Globals_20);
  libs__globals__get_trace_level_2_p_0(Globals_20, &TraceLevel_21);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo1_19, &HasParConj_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 268, &Parallel_23);
  {
    MR_Word Var_112;

    Var_112 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_21);
    succeeded = (Var_112 == (MR_Integer) 1);
  }
  if (!(succeeded))
    succeeded = (HasParConj_22 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ContainingGoalMap_24;

    switch (HasParConj_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_113;

          {
            Var_113 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_113, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[2]));
            MR_hl_field(0, Var_113, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_1));
            MR_hl_field(0, Var_113, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_113, 3) = ((MR_Box) (Parallel_23));
            MR_hl_field(0, Var_113, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_113, (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "found parallel conjunction in non-parallel grade");
        }
        break;
    }
    hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ModuleInfo_18, &ContainingGoalMap_24, ProcInfo1_19, &ProcInfo_25);
    {
      MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeContainingGoalMap_26, 0) = ((MR_Box) (ContainingGoalMap_24));
    }
  }
  else
  {
    MaybeContainingGoalMap_26 = (MR_Word) ((MR_Unsigned) 0U);
    ProcInfo_25 = ProcInfo1_19;
  }
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_13, &ClausesInfo_27);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_25, &Detism_31);
  CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_25);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_25, &Goal_33);
  GoalInfo_30 = ((MR_Word) ((MR_hl_field(0, Goal_33, (MR_Integer) 1))));
  Var_117 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_27, (MR_Integer) 6))));
  succeeded = hlds__hlds_clauses__get_first_clause_2_p_0(Var_117, &FirstClause_28);
  if (succeeded)
    ProcContext_29 = ((MR_Word) ((MR_hl_field(0, FirstClause_28, (MR_Integer) 3))));
  else
    ProcContext_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_30);
  hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(GoalInfo_30, &MaybeFollowVars_35);
  if ((MaybeFollowVars_35 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word FollowVarsMap_37;

    mercury__map__init_1_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), &FollowVarsMap_37);
    {
      FollowVars_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FollowVars_36, 0) = ((MR_Box) (FollowVarsMap_37));
      MR_hl_field(0, FollowVars_36, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, FollowVars_36, 2) = ((MR_Box) ((MR_Integer) 1));
    }
  }
  else
    FollowVars_36 = ((MR_Word) ((MR_hl_field(1, MaybeFollowVars_35, (MR_Integer) 0))));
  ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(Globals_20, PredInfo_13, &SaveSuccip_40, &ForceProcId_39);
  ll_backend__global_data__global_data_get_static_cell_info_2_p_0(STATE_VARIABLE_GlobalData_0_109, &StaticCellInfo0_41);
  ll_backend__global_data__global_data_get_threadscope_rev_string_table_3_p_0(STATE_VARIABLE_GlobalData_0_109, &TSRevStringTable0_42, &TSStringTableSize0_43);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_25, &VarTable_44);
  ll_backend__code_info__code_info_init_14_p_0(ModuleInfo_18, PredId_12, ProcId_14, PredInfo_13, ProcInfo_25, VarTable_44, SaveSuccip_40, StaticCellInfo0_41, ConstStructMap_11, MaybeContainingGoalMap_26, TSRevStringTable0_42, TSStringTableSize0_43, &TraceSlotInfo_45, &CodeInfo0_46);
  ll_backend__code_loc_dep__code_loc_dep_init_5_p_0(FollowVars_36, &OutsideResumePoint_47, CodeInfo0_46, &CodeInfo1_48, &CodeLocDep0_49);
  ll_backend__proc_gen__generate_category_code_11_p_0(CodeModel_32, ProcContext_29, Goal_33, OutsideResumePoint_47, TraceSlotInfo_45, &CodeTree0_50, &MaybeTraceCallLabel_51, &ProcFrameSlots_52, CodeInfo1_48, &CodeInfo_53, CodeLocDep0_49);
  ll_backend__code_info__get_out_of_line_code_2_p_0(CodeInfo_53, &OutOfLineCode_54);
  CodeTree_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeTree0_50, OutOfLineCode_54);
  ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(CodeInfo_53, &MaxTraceRegR_56, &MaxTraceRegF_57);
  ll_backend__code_info__get_static_cell_info_2_p_0(CodeInfo_53, &StaticCellInfo_58);
  ll_backend__global_data__global_data_set_static_cell_info_3_p_0(StaticCellInfo_58, STATE_VARIABLE_GlobalData_0_109, &STATE_VARIABLE_GlobalData_120_120);
  ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(CodeInfo_53, &TSRevStringTable_59, &TSStringTableSize_60);
  ll_backend__global_data__global_data_set_threadscope_rev_string_table_4_p_0(TSRevStringTable_59, TSStringTableSize_60, STATE_VARIABLE_GlobalData_120_120, &STATE_VARIABLE_GlobalData_121_121);
  ll_backend__code_info__get_created_temp_frame_2_p_0(CodeInfo_53, &CreatedTempFrame_61);
  ll_backend__code_info__get_proc_trace_events_2_p_0(CodeInfo_53, &ProcTraceEvents_62);
  Instructions0_64 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeTree_55);
  TotalSlots_65 = ((MR_Integer) ((MR_hl_field(0, ProcFrameSlots_52, (MR_Integer) 0))));
  MaybeSuccipSlot_66 = ((MR_Word) ((MR_hl_field(0, ProcFrameSlots_52, (MR_Integer) 1))));
  if ((MaybeSuccipSlot_66 == (MR_Word) ((MR_Unsigned) 0U)))
    Instructions_68 = Instructions0_64;
  else
  {
    MR_Integer SuccipSlot_67 = ((MR_Integer) ((MR_hl_field(1, MaybeSuccipSlot_66, (MR_Integer) 0))));

    ll_backend__proc_gen__add_saved_succip_3_p_0(Instructions0_64, SuccipSlot_67, &Instructions_68);
  }
  EffTraceLevel_69 = libs__trace_params__eff_trace_level_for_proc_4_f_0(ModuleInfo_18, PredInfo_13, ProcInfo_25, TraceLevel_21);
  hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(ProcInfo_25, &MaybeTableIOInfo_70);
  succeeded = (SaveSuccip_40 == (MR_Integer) 1);
  if (!(succeeded))
  {
    succeeded = (MaybeTableIOInfo_70 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word RttiProcLabel_72;
    MR_Word InternalMap_73;
    MR_Word EntryLabel_74;
    MR_Word EvalMethod_75;
    MR_Word InstMap0_76;
    MR_Word HeadVars_77;
    MR_Word ArgModes_78;
    MR_Word TraceSuppress_79;
    MR_Word NeedBodyReps_80;
    MR_Word NeedGoalRep_81;
    MR_Word NeedsAllNames_82;
    MR_Word MaybeHLDSDeepInfo_83;
    MR_Word MaybeDeepProfInfo_85;
    MR_Word TableStructMap_86;
    MR_Word PredProcId_87;
    MR_Word MaybeTableInfo_91;
    MR_Word OISUKindFors_94;
    MR_Word ProcLayout_95;

    RttiProcLabel_72 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_18, PredId_12, ProcId_14);
    ll_backend__code_info__get_layout_info_2_p_0(CodeInfo_53, &InternalMap_73);
    EntryLabel_74 = ll_backend__code_util__make_local_entry_label_4_f_0(ModuleInfo_18, PredId_12, ProcId_14, (MR_Word) ((MR_Unsigned) 0U));
    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_25, &EvalMethod_75);
    hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_18, ProcInfo_25, &InstMap0_76);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_25, &HeadVars_77);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_25, &ArgModes_78);
    libs__globals__get_trace_suppress_2_p_0(Globals_20, &TraceSuppress_79);
    NeedBodyReps_80 = libs__trace_params__eff_trace_needs_proc_body_reps_2_f_0(EffTraceLevel_69, TraceSuppress_79);
    switch (NeedBodyReps_80) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NeedGoalRep_81 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        NeedGoalRep_81 = (MR_Integer) 0;
        break;
    }
    NeedsAllNames_82 = libs__trace_params__eff_trace_needs_all_var_names_2_f_0(EffTraceLevel_69, TraceSuppress_79);
    hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ProcInfo_25, &MaybeHLDSDeepInfo_83);
    if ((MaybeHLDSDeepInfo_83 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDeepProfInfo_85 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HLDSDeepInfo_84 = ((MR_Word) ((MR_hl_field(1, MaybeHLDSDeepInfo_83, (MR_Integer) 0))));

      MaybeDeepProfInfo_85 = ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(ProcInfo_25, HLDSDeepInfo_84);
    }
    hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ModuleInfo_18, &TableStructMap_86);
    {
      PredProcId_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredProcId_87, 0) = ((MR_Box) (PredId_12));
      MR_hl_field(0, PredProcId_87, 1) = ((MR_Box) (ProcId_14));
    }
    if ((MaybeTableIOInfo_70 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TableStructInfo_88;
      MR_Box conv0_TableStructInfo_88;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), TableStructMap_86, ((MR_Box) (PredProcId_87)), &conv0_TableStructInfo_88);
      if (succeeded)
      {
        TableStructInfo_88 = ((MR_Word) (conv0_TableStructInfo_88));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ProcTableStructInfo_89 = ((MR_Word) ((MR_hl_field(0, TableStructInfo_88, (MR_Integer) 0))));
        MR_Word Var_127;

        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (ProcTableStructInfo_89));
        }
        {
          MaybeTableInfo_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeTableInfo_91, 0) = ((MR_Box) (Var_127));
        }
      }
      else
        MaybeTableInfo_91 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TableIOInfo_92 = ((MR_Word) ((MR_hl_field(1, MaybeTableIOInfo_70, (MR_Integer) 0))));
      MR_Box conv1__TableStructInfo_93;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), TableStructMap_86, ((MR_Box) (PredProcId_87)), &conv1__TableStructInfo_93);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "conflicting kinds of tabling");
          return;
        }
      else
      {
        MR_Word Var_130;

        {
          Var_130 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_130, 0) = ((MR_Box) (TableIOInfo_92));
        }
        {
          MaybeTableInfo_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeTableInfo_91, 0) = ((MR_Box) (Var_130));
        }
      }
    }
    hlds__hlds_pred__proc_info_get_oisu_kind_fors_2_p_0(ProcInfo_25, &OISUKindFors_94);
    {
      ProcLayout_95 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcLayout_95, 0) = (MR_Box) (((((MR_Unsigned) (Detism_31) << 3)) | (MR_Unsigned) (EffTraceLevel_69)));
      MR_hl_field(0, ProcLayout_95, 1) = ((MR_Box) (EvalMethod_75));
      MR_hl_field(0, ProcLayout_95, 2) = (MR_Box) (((((MR_Unsigned) (NeedGoalRep_81) << 2)) | (((((MR_Unsigned) (ForceProcId_39) << 1)) | (MR_Unsigned) (NeedsAllNames_82)))));
      MR_hl_field(0, ProcLayout_95, 3) = ((MR_Box) (RttiProcLabel_72));
      MR_hl_field(0, ProcLayout_95, 4) = ((MR_Box) (EntryLabel_74));
      MR_hl_field(0, ProcLayout_95, 5) = ((MR_Box) (TotalSlots_65));
      MR_hl_field(0, ProcLayout_95, 6) = ((MR_Box) (MaybeSuccipSlot_66));
      MR_hl_field(0, ProcLayout_95, 7) = ((MR_Box) (MaybeTraceCallLabel_51));
      MR_hl_field(0, ProcLayout_95, 8) = ((MR_Box) (MaxTraceRegR_56));
      MR_hl_field(0, ProcLayout_95, 9) = ((MR_Box) (MaxTraceRegF_57));
      MR_hl_field(0, ProcLayout_95, 10) = ((MR_Box) (HeadVars_77));
      MR_hl_field(0, ProcLayout_95, 11) = ((MR_Box) (ArgModes_78));
      MR_hl_field(0, ProcLayout_95, 12) = ((MR_Box) (Goal_33));
      MR_hl_field(0, ProcLayout_95, 13) = ((MR_Box) (InstMap0_76));
      MR_hl_field(0, ProcLayout_95, 14) = ((MR_Box) (TraceSlotInfo_45));
      MR_hl_field(0, ProcLayout_95, 15) = ((MR_Box) (VarTable_44));
      MR_hl_field(0, ProcLayout_95, 16) = ((MR_Box) (InternalMap_73));
      MR_hl_field(0, ProcLayout_95, 17) = ((MR_Box) (MaybeTableInfo_91));
      MR_hl_field(0, ProcLayout_95, 18) = ((MR_Box) (OISUKindFors_94));
      MR_hl_field(0, ProcLayout_95, 19) = ((MR_Box) (MaybeDeepProfInfo_85));
    }
    ll_backend__global_data__global_data_add_new_proc_layout_4_p_0(PredProcId_87, ProcLayout_95, STATE_VARIABLE_GlobalData_121_121, &STATE_VARIABLE_GlobalData_132_132);
  }
  else
    STATE_VARIABLE_GlobalData_132_132 = STATE_VARIABLE_GlobalData_121_121;
  ll_backend__code_info__get_closure_layouts_2_p_0(CodeInfo_53, &ClosureLayouts_96);
  ll_backend__global_data__global_data_add_new_closure_layouts_3_p_0(ClosureLayouts_96, STATE_VARIABLE_GlobalData_132_132, &STATE_VARIABLE_GlobalData_133_133);
  ProcLabel_97 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_18, PredId_12, ProcId_14);
  ll_backend__code_info__get_alloc_sites_2_p_0(CodeInfo_53, &AllocSites_98);
  ll_backend__global_data__global_data_add_new_alloc_sites_3_p_0(AllocSites_98, STATE_VARIABLE_GlobalData_133_133, STATE_VARIABLE_GlobalData_110);
  Name_99 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_13, &PredFormArity_100);
  ll_backend__code_info__get_label_counter_2_p_0(CodeInfo_53, &LabelCounter_101);
  succeeded = (ProcTraceEvents_62 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (CreatedTempFrame_61 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (CodeModel_32 != (MR_Integer) 2);
  }
  if (succeeded)
  {
    MR_Word NeedsMaxfrSlot_63;
    MR_Word Var_122;

    hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ProcInfo_25, &NeedsMaxfrSlot_63);
    {
      Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_122, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[3]));
      MR_hl_field(0, Var_122, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_2));
      MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_122, 3) = ((MR_Box) (NeedsMaxfrSlot_63));
      MR_hl_field(0, Var_122, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_122, (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "should have reserved a slot for maxfr, but didn\'t");
    MayAlterRtti_102 = (MR_Integer) 1;
  }
  else
    switch (ProcTraceEvents_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayAlterRtti_102 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        MayAlterRtti_102 = (MR_Integer) 1;
        break;
    }
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 173, &GenBytecode_103);
  succeeded = (GenBytecode_103 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_136 = hlds__goal_form__goal_has_foreign_1_f_0(Goal_33);
      succeeded = (Var_136 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    ll_backend__proc_gen__bytecode_stub_4_p_0(ModuleInfo_18, PredId_12, ProcId_14, &ProcInstructions_104);
    ProcLabelCounter_105 = mercury__counter__init_1_f_0((MR_Integer) 0);
  }
  else
  {
    ProcInstructions_104 = Instructions_68;
    ProcLabelCounter_105 = LabelCounter_101;
  }
  hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_13, &PredOrFunc_106);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_106, &UserArity_107, PredFormArity_100);
  ll_backend__code_info__get_used_env_vars_2_p_0(CodeInfo_53, &UsedEnvVars_108);
  {
    Var_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_138, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(0, Var_138, 1) = ((MR_Box) (ProcId_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *CProc_16 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_106));
    MR_hl_field(0, base, 1) = ((MR_Box) (Name_99));
    MR_hl_field(0, base, 2) = ((MR_Box) (UserArity_107));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_138));
    MR_hl_field(0, base, 4) = ((MR_Box) (ProcLabel_97));
    MR_hl_field(0, base, 5) = (MR_Box) (((((MR_Unsigned) (CodeModel_32) << 3)) | (MR_Unsigned) (EffTraceLevel_69)));
    MR_hl_field(0, base, 6) = ((MR_Box) (ProcInstructions_104));
    MR_hl_field(0, base, 7) = ((MR_Box) (ProcLabelCounter_105));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (MayAlterRtti_102));
    MR_hl_field(0, base, 9) = ((MR_Box) (UsedEnvVars_108));
  }
}

static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7,
  MR_Word * BytecodeInstructions_8)
{
  MR_Word PredInfo_9;
  MR_Word ModuleSymName_10;
  MR_String ModuleName_11;
  MR_Word EntryLabel_12;
  MR_String PredName_13;
  MR_Integer ProcNum_14;
  MR_String ProcStr_15;
  MR_Integer UserArityInt_16;
  MR_String ArityStr_17;
  MR_Word PredOrFunc_18;
  MR_String IsFuncStr_20;
  MR_String CallStruct_21;
  MR_String BytecodeCall_22;
  MR_Word BytecodeInstructionsComponents_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_78;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_9);
  ModuleSymName_10 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_9);
  ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleSymName_10, (MR_String) "__");
  EntryLabel_12 = ll_backend__code_util__make_local_entry_label_4_f_0(ModuleInfo_5, PredId_6, ProcId_7, (MR_Word) ((MR_Unsigned) 0U));
  PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_9);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcNum_14);
  mercury__string__int_to_string_2_p_0(ProcNum_14, &ProcStr_15);
  Var_26 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_9);
  UserArityInt_16 = (MR_Integer) (Var_26);
  mercury__string__int_to_string_2_p_0(UserArityInt_16, &ArityStr_17);
  PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
  switch (PredOrFunc_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      IsFuncStr_20 = (MR_String) "MR_TRUE";
      break;
    case (MR_Integer) 0:
      IsFuncStr_20 = (MR_String) "MR_FALSE";
      break;
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (IsFuncStr_20));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[31])));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_String) ",\n"));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (ArityStr_17));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_String) ",\n"));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (ProcStr_15));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_String) "\",\n"));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (PredName_13));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_String) "\",\n"));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) ((MR_String) "\t\t\t(MB_Word)NULL,\n"));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) ((MR_String) " = {\n"));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_String) "bytecode_call_info"));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_String) "\t\tstatic MB_Call "));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  mercury__string__append_list_2_p_0(Var_27, &CallStruct_21);
  mercury__string__append_list_2_p_0((MR_Word) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[39])), &BytecodeCall_22);
  Var_82 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
  }
  {
    Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_78, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Var_78, 2) = ((MR_Box) (Var_81));
    MR_hl_field(3, Var_78, 3) = ((MR_Box) ((MR_String) "\t{\n"));
  }
  Var_89 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
  }
  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_85, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Var_85, 2) = ((MR_Box) (Var_88));
    MR_hl_field(3, Var_85, 3) = ((MR_Box) (CallStruct_21));
  }
  {
    Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_91, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Var_91, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_91, 3) = ((MR_Box) (BytecodeCall_22));
  }
  Var_100 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
  }
  {
    Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_96, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Var_96, 2) = ((MR_Box) (Var_99));
    MR_hl_field(3, Var_96, 3) = ((MR_Box) ((MR_String) "\t}\n"));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_90));
  }
  {
    BytecodeInstructionsComponents_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, BytecodeInstructionsComponents_23, 0) = ((MR_Box) (Var_78));
    MR_hl_field(1, BytecodeInstructionsComponents_23, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_104, 1) = ((MR_Box) (EntryLabel_12));
  }
  {
    Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_103, 0) = ((MR_Box) (Var_104));
    MR_hl_field(0, Var_103, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
  }
  {
    Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 27U));
    MR_hl_field(3, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_108, 2) = ((MR_Box) (BytecodeInstructionsComponents_23));
    MR_hl_field(3, Var_108, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_108, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_108, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_108, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_108, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_108, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_108, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_107, 0) = ((MR_Box) (Var_108));
    MR_hl_field(0, Var_107, 1) = ((MR_Box) ((MR_String) "Entry stub"));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *BytecodeInstructions_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_103));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_106));
  }
}

static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Instrs0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Instr_8;
    MR_Word Instrs_9;
    MR_Word Uinstr0_10 = ((MR_Word) ((MR_hl_field(0, Instr0_5, (MR_Integer) 0))));
    MR_String Comment_11 = ((MR_String) ((MR_hl_field(0, Instr0_5, (MR_Integer) 1))));
    MR_Word LiveVals0_12;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

    succeeded = (Instrs0_6 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(1, Instrs0_6, (MR_Integer) 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        Var_26 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 1))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Uinstr0_10)) == (MR_Integer) 2);
      if (succeeded)
        LiveVals0_12 = ((MR_Word) ((MR_hl_field(2, Uinstr0_10, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word LiveVals1_15;
      MR_Word Uinstr_16;
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_27, 1) = ((MR_Box) (HeadVar__2_2));
      }
      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Var_27)), LiveVals0_12, &LiveVals1_15);
      {
        Uinstr_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Uinstr_16, 0) = ((MR_Box) (LiveVals1_15));
      }
      {
        Instr_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Instr_8, 0) = ((MR_Box) (Uinstr_16));
        MR_hl_field(0, Instr_8, 1) = ((MR_Box) (Comment_11));
      }
    }
    else
    {
      MR_Word Target_17;
      MR_Word ReturnLabel_18;
      MR_Word Context_19;
      MR_Word GP_20;
      MR_Word CM_21;
      MR_Word LiveVals0_33;

      succeeded = ((((MR_tag((MR_Word) Uinstr0_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Target_17 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, (MR_Integer) 1))));
        ReturnLabel_18 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, (MR_Integer) 2))));
        LiveVals0_33 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, (MR_Integer) 3))));
        Context_19 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, (MR_Integer) 4))));
        GP_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, (MR_Integer) 5))));
        CM_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_10, (MR_Integer) 6))));
        {
          MR_Word Empty_22;
          MR_Word LiveVals_23;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Uinstr_32;

          mercury__map__init_1_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[4]), (MR_Word) (&ll_backend__proc_gen_scalar_common_1[5]), &Empty_22);
          {
            Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_30, 1) = ((MR_Box) (HeadVar__2_2));
          }
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_29, 0) = ((MR_Box) (Var_30));
          }
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_28, 2) = ((MR_Box) (Empty_22));
          }
          {
            LiveVals_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LiveVals_23, 0) = ((MR_Box) (Var_28));
            MR_hl_field(1, LiveVals_23, 1) = ((MR_Box) (LiveVals0_33));
          }
          {
            Uinstr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Uinstr_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Uinstr_32, 1) = ((MR_Box) (Target_17));
            MR_hl_field(3, Uinstr_32, 2) = ((MR_Box) (ReturnLabel_18));
            MR_hl_field(3, Uinstr_32, 3) = ((MR_Box) (LiveVals_23));
            MR_hl_field(3, Uinstr_32, 4) = ((MR_Box) (Context_19));
            MR_hl_field(3, Uinstr_32, 5) = ((MR_Box) (GP_20));
            MR_hl_field(3, Uinstr_32, 6) = ((MR_Box) (CM_21));
          }
          {
            Instr_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Instr_8, 0) = ((MR_Box) (Uinstr_32));
            MR_hl_field(0, Instr_8, 1) = ((MR_Box) (Comment_11));
          }
        }
      }
      else
        Instr_8 = Instr0_5;
    }
    ll_backend__proc_gen__add_saved_succip_3_p_0(Instrs0_6, HeadVar__2_2, &Instrs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Instr_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs_9));
    }
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_category_code_11_p_0(
  MR_Word CodeModel_12,
  MR_Word ProcContext_13,
  MR_Word Goal_14,
  MR_Word ResumePoint_15,
  MR_Word TraceSlotInfo_16,
  MR_Word * Code_17,
  MR_Word * MaybeTraceCallLabel_18,
  MR_Word * ProcFrameSlots_19,
  MR_Word STATE_VARIABLE_CI_0_22,
  MR_Word * STATE_VARIABLE_CI_23,
  MR_Word STATE_VARIABLE_CLD_0_24)
{
  switch (CodeModel_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__proc_gen__generate_det_code_10_p_0(ProcContext_13, Goal_14, ResumePoint_15, TraceSlotInfo_16, Code_17, MaybeTraceCallLabel_18, ProcFrameSlots_19, STATE_VARIABLE_CI_0_22, STATE_VARIABLE_CI_23, STATE_VARIABLE_CLD_0_24);
      break;
    case (MR_Integer) 2:
      ll_backend__proc_gen__generate_non_code_10_p_0(ProcContext_13, Goal_14, ResumePoint_15, TraceSlotInfo_16, Code_17, MaybeTraceCallLabel_18, ProcFrameSlots_19, STATE_VARIABLE_CI_0_22, STATE_VARIABLE_CI_23, STATE_VARIABLE_CLD_0_24);
      break;
    case (MR_Integer) 1:
      {
        MR_Word FailureLiveRegs_25;
        MR_Word FailCode_26;
        MR_Word MaybeTraceInfo_27;
        MR_Word Var_52;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;

        FailureLiveRegs_25 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[10]))));
        {
          Var_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_56, 0) = ((MR_Box) (FailureLiveRegs_25));
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[15])));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[12]));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
        }
        FailCode_26 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_52);
        ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_0_22, &MaybeTraceInfo_27);
        if ((MaybeTraceInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word STATE_VARIABLE_CI_95_84;
          MR_Word STATE_VARIABLE_CLD_96_85;
          MR_Word STATE_VARIABLE_CI_99_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word BeforeBody_93;
          MR_Word BodyCode_94;
          MR_Word EntryCode_95;
          MR_Word RestoreDeallocCode_96;
          MR_Word ExitCode_97;
          MR_Word ResumeCode_98;
          MR_Word STATE_VARIABLE_CLD_84_99;
          MR_Word _CLDAfterResume_48;

          *MaybeTraceCallLabel_18 = (MR_Word) ((MR_Unsigned) 0U);
          ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_24, &BeforeBody_93);
          ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, Goal_14, &BodyCode_94, STATE_VARIABLE_CI_0_22, &STATE_VARIABLE_CI_95_84, STATE_VARIABLE_CLD_0_24, &STATE_VARIABLE_CLD_96_85);
          ll_backend__proc_gen__generate_entry_6_p_0(STATE_VARIABLE_CI_95_84, (MR_Integer) 1, Goal_14, ResumePoint_15, ProcFrameSlots_19, &EntryCode_95);
          ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 1, *ProcFrameSlots_19, TraceSlotInfo_16, ProcContext_13, &RestoreDeallocCode_96, &ExitCode_97, STATE_VARIABLE_CI_95_84, &STATE_VARIABLE_CI_99_88, STATE_VARIABLE_CLD_96_85);
          ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeBody_93, STATE_VARIABLE_CI_99_88, &STATE_VARIABLE_CLD_84_99);
          ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_15, &ResumeCode_98, STATE_VARIABLE_CI_99_88, STATE_VARIABLE_CI_23, STATE_VARIABLE_CLD_84_99, &_CLDAfterResume_48);
          Var_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreDeallocCode_96, FailCode_26);
          Var_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumeCode_98, Var_92);
          Var_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ExitCode_97, Var_91);
          Var_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BodyCode_94, Var_90);
          *Code_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryCode_95, Var_89);
        }
        else
        {
          MR_Word TraceInfo_28 = ((MR_Word) ((MR_hl_field(1, MaybeTraceInfo_27, (MR_Integer) 0))));
          MR_Word BeforeBody_29;
          MR_Word TraceCallCode_30;
          MR_Word MaybeTailRecInfo_31;
          MR_Word TailRecLabelCode_34;
          MR_Word BodyCode_35;
          MR_Word EntryCode_36;
          MR_Word RestoreDeallocCode_37;
          MR_Word ExitCode_38;
          MR_Word ResumeCode_39;
          MR_Word ResumeVarList_40;
          MR_Word ResumeVars_41;
          MR_Word MaybeFailExternalInfo_42;
          MR_Word TraceFailCode_47;
          MR_Word STATE_VARIABLE_CI_69_59;
          MR_Word STATE_VARIABLE_CLD_70_60;
          MR_Word STATE_VARIABLE_CI_76_66;
          MR_Word STATE_VARIABLE_CLD_77_67;
          MR_Word STATE_VARIABLE_CI_80_70;
          MR_Word STATE_VARIABLE_CLD_81_71;
          MR_Word STATE_VARIABLE_CI_82_72;
          MR_Word STATE_VARIABLE_CLD_83_73;
          MR_Word STATE_VARIABLE_CLD_84_74;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word _CLDAfterEvent_43;

          ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_24, &BeforeBody_29);
          ll_backend__proc_gen__generate_call_event_8_p_0(TraceInfo_28, ProcContext_13, MaybeTraceCallLabel_18, &TraceCallCode_30, STATE_VARIABLE_CI_0_22, &STATE_VARIABLE_CI_69_59, STATE_VARIABLE_CLD_0_24, &STATE_VARIABLE_CLD_70_60);
          ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(TraceInfo_28, &MaybeTailRecInfo_31);
          if ((MaybeTailRecInfo_31 == (MR_Word) ((MR_Unsigned) 0U)))
            TailRecLabelCode_34 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          else
          {
            MR_Word TailRecLabel_33;
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, MaybeTailRecInfo_31, (MR_Integer) 0))));
            MR_Word Var_62;
            MR_Word Var_63;

            TailRecLabel_33 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 1))));
            {
              Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_63, 1) = ((MR_Box) (TailRecLabel_33));
            }
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_62, 0) = ((MR_Box) (Var_63));
              MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_String) "tail recursion label"));
            }
            TailRecLabelCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_62)));
          }
          ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, Goal_14, &BodyCode_35, STATE_VARIABLE_CI_69_59, &STATE_VARIABLE_CI_76_66, STATE_VARIABLE_CLD_70_60, &STATE_VARIABLE_CLD_77_67);
          ll_backend__proc_gen__generate_entry_6_p_0(STATE_VARIABLE_CI_76_66, (MR_Integer) 1, Goal_14, ResumePoint_15, ProcFrameSlots_19, &EntryCode_36);
          ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 1, *ProcFrameSlots_19, TraceSlotInfo_16, ProcContext_13, &RestoreDeallocCode_37, &ExitCode_38, STATE_VARIABLE_CI_76_66, &STATE_VARIABLE_CI_80_70, STATE_VARIABLE_CLD_77_67);
          ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeBody_29, STATE_VARIABLE_CI_80_70, &STATE_VARIABLE_CLD_81_71);
          ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_15, &ResumeCode_39, STATE_VARIABLE_CI_80_70, &STATE_VARIABLE_CI_82_72, STATE_VARIABLE_CLD_81_71, &STATE_VARIABLE_CLD_83_73);
          ll_backend__code_loc_dep__resume_point_vars_2_p_0(ResumePoint_15, &ResumeVarList_40);
          ResumeVars_41 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVarList_40);
          ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ResumeVars_41, STATE_VARIABLE_CLD_83_73, &STATE_VARIABLE_CLD_84_74);
          ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 2, TraceInfo_28, ProcContext_13, &MaybeFailExternalInfo_42, STATE_VARIABLE_CI_82_72, STATE_VARIABLE_CI_23, STATE_VARIABLE_CLD_84_74, &_CLDAfterEvent_43);
          if ((MaybeFailExternalInfo_42 == (MR_Word) ((MR_Unsigned) 0U)))
            TraceFailCode_47 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          else
          {
            MR_Word FailExternalInfo_44 = ((MR_Word) ((MR_hl_field(1, MaybeFailExternalInfo_42, (MR_Integer) 0))));

            TraceFailCode_47 = ((MR_Word) ((MR_hl_field(0, FailExternalInfo_44, (MR_Integer) 2))));
          }
          Var_82 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreDeallocCode_37, FailCode_26);
          Var_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceFailCode_47, Var_82);
          Var_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumeCode_39, Var_81);
          Var_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ExitCode_38, Var_80);
          Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BodyCode_35, Var_79);
          Var_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TailRecLabelCode_34, Var_78);
          Var_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCallCode_30, Var_77);
          *Code_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryCode_36, Var_76);
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_non_code_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_non_code__872__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__proc_gen__generate_non_code_10_p_0(
  MR_Word ProcContext_11,
  MR_Word Goal_12,
  MR_Word ResumePoint_13,
  MR_Word TraceSlotInfo_14,
  MR_Word * Code_15,
  MR_Word * MaybeTraceCallLabel_16,
  MR_Word * ProcFrameSlots_17,
  MR_Word STATE_VARIABLE_CI_0_47,
  MR_Word * STATE_VARIABLE_CI_48,
  MR_Word STATE_VARIABLE_CLD_0_49)
{
  MR_bool succeeded;
  MR_Word MaybeTraceInfo_20;

  ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_0_47, &MaybeTraceInfo_20);
  if ((MaybeTraceInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word STATE_VARIABLE_CI_101_101;
    MR_Word Var_106;
    MR_Word BodyCode_107;
    MR_Word EntryCode_108;
    MR_Word ExitCode_109;
    MR_Word STATE_VARIABLE_CLD_65_110;
    MR_Word Var_46;

    *MaybeTraceCallLabel_16 = (MR_Word) ((MR_Unsigned) 0U);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 2, Goal_12, &BodyCode_107, STATE_VARIABLE_CI_0_47, &STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_65_110);
    ll_backend__proc_gen__generate_entry_6_p_0(STATE_VARIABLE_CI_101_101, (MR_Integer) 2, Goal_12, ResumePoint_13, ProcFrameSlots_17, &EntryCode_108);
    ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 2, *ProcFrameSlots_17, TraceSlotInfo_14, ProcContext_11, &Var_46, &ExitCode_109, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_48, STATE_VARIABLE_CLD_65_110);
    Var_106 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BodyCode_107, ExitCode_109);
    *Code_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryCode_108, Var_106);
  }
  else
  {
    MR_Word TraceInfo_21 = ((MR_Word) ((MR_hl_field(1, MaybeTraceInfo_20, (MR_Integer) 0))));
    MR_Word TraceCallCode_22;
    MR_Word MaybeTailRecInfo_23;
    MR_Word BeforeBody_24;
    MR_Word BodyCode_25;
    MR_Word EntryCode_26;
    MR_Word ExitCode_28;
    MR_Word ResumeCode_29;
    MR_Word ResumeVarList_30;
    MR_Word ResumeVars_31;
    MR_Word MaybeFailExternalInfo_32;
    MR_Word TraceFailCode_37;
    MR_Word MaybeTrailSlot_38;
    MR_Word DiscardTraceTicketCode_44;
    MR_Word FailCode_45;
    MR_Word STATE_VARIABLE_CI_50_50;
    MR_Word STATE_VARIABLE_CLD_51_51;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_CI_57_57;
    MR_Word STATE_VARIABLE_CLD_58_58;
    MR_Word STATE_VARIABLE_CI_61_61;
    MR_Word STATE_VARIABLE_CLD_62_62;
    MR_Word STATE_VARIABLE_CI_63_63;
    MR_Word STATE_VARIABLE_CLD_64_64;
    MR_Word STATE_VARIABLE_CLD_65_65;
    MR_Word STATE_VARIABLE_CI_67_67;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_111;
    MR_Word Var_27;
    MR_Word _CLDAfterEvent_33;

    ll_backend__proc_gen__generate_call_event_8_p_0(TraceInfo_21, ProcContext_11, MaybeTraceCallLabel_16, &TraceCallCode_22, STATE_VARIABLE_CI_0_47, &STATE_VARIABLE_CI_50_50, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_51_51);
    ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(TraceInfo_21, &MaybeTailRecInfo_23);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[1]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (ll_backend__proc_gen__generate_non_code_10_p_0_1));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (MaybeTailRecInfo_23));
      MR_hl_field(0, Var_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140ll_backend.proc_gen.generate_non_code\'/10", (MR_String) "tail recursive call in model_non code");
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_51_51, &BeforeBody_24);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 2, Goal_12, &BodyCode_25, STATE_VARIABLE_CI_50_50, &STATE_VARIABLE_CI_57_57, STATE_VARIABLE_CLD_51_51, &STATE_VARIABLE_CLD_58_58);
    ll_backend__proc_gen__generate_entry_6_p_0(STATE_VARIABLE_CI_57_57, (MR_Integer) 2, Goal_12, ResumePoint_13, ProcFrameSlots_17, &EntryCode_26);
    ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 2, *ProcFrameSlots_17, TraceSlotInfo_14, ProcContext_11, &Var_27, &ExitCode_28, STATE_VARIABLE_CI_57_57, &STATE_VARIABLE_CI_61_61, STATE_VARIABLE_CLD_58_58);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeBody_24, STATE_VARIABLE_CI_61_61, &STATE_VARIABLE_CLD_62_62);
    ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_13, &ResumeCode_29, STATE_VARIABLE_CI_61_61, &STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CLD_62_62, &STATE_VARIABLE_CLD_64_64);
    ll_backend__code_loc_dep__resume_point_vars_2_p_0(ResumePoint_13, &ResumeVarList_30);
    ResumeVars_31 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVarList_30);
    ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ResumeVars_31, STATE_VARIABLE_CLD_64_64, &STATE_VARIABLE_CLD_65_65);
    ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 2, TraceInfo_21, ProcContext_11, &MaybeFailExternalInfo_32, STATE_VARIABLE_CI_63_63, &STATE_VARIABLE_CI_67_67, STATE_VARIABLE_CLD_65_65, &_CLDAfterEvent_33);
    if ((MaybeFailExternalInfo_32 == (MR_Word) ((MR_Unsigned) 0U)))
      TraceFailCode_37 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    else
    {
      MR_Word FailExternalInfo_34 = ((MR_Word) ((MR_hl_field(1, MaybeFailExternalInfo_32, (MR_Integer) 0))));

      TraceFailCode_37 = ((MR_Word) ((MR_hl_field(0, FailExternalInfo_34, (MR_Integer) 2))));
    }
    Var_111 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_14, (MR_Integer) 0))));
    MaybeTrailSlot_38 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_14, (MR_Integer) 2))));
    if ((MaybeTrailSlot_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      DiscardTraceTicketCode_44 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CI_48 = STATE_VARIABLE_CI_67_67;
    }
    else
    if ((Var_111 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      DiscardTraceTicketCode_44 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[16])));
      *STATE_VARIABLE_CI_48 = STATE_VARIABLE_CI_67_67;
    }
    else
    {
      MR_Integer FromFullSlot_41 = ((MR_Integer) ((MR_hl_field(1, Var_111, (MR_Integer) 0))));
      MR_Word FromFullSlotLval_42;
      MR_Word SkipLabel_43;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_78;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;

      FromFullSlotLval_42 = ll_backend__llds__stack_slot_num_to_lval_2_f_0((MR_Integer) 1, FromFullSlot_41);
      ll_backend__code_info__get_next_label_3_p_0(&SkipLabel_43, STATE_VARIABLE_CI_67_67, STATE_VARIABLE_CI_48);
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_75, 0) = ((MR_Box) (FromFullSlotLval_42));
      }
      {
        Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(3, Var_73, 2) = ((MR_Box) (Var_75));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (SkipLabel_43));
      }
      {
        Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_72, 1) = ((MR_Box) (Var_73));
        MR_hl_field(3, Var_72, 2) = ((MR_Box) (Var_76));
      }
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_84, 1) = ((MR_Box) (SkipLabel_43));
      }
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(0, Var_83, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[16]));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_82));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_78));
      }
      DiscardTraceTicketCode_44 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_70);
    }
    FailCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[18])));
    Var_99 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DiscardTraceTicketCode_44, FailCode_45);
    Var_98 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceFailCode_37, Var_99);
    Var_97 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumeCode_29, Var_98);
    Var_96 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ExitCode_28, Var_97);
    Var_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BodyCode_25, Var_96);
    Var_94 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCallCode_22, Var_95);
    *Code_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryCode_26, Var_94);
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_det_code_10_p_0(
  MR_Word ProcContext_11,
  MR_Word Goal_12,
  MR_Word ResumePoint_13,
  MR_Word TraceSlotInfo_14,
  MR_Word * Code_15,
  MR_Word * MaybeTraceCallLabel_16,
  MR_Word * ProcFrameSlots_17,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37,
  MR_Word STATE_VARIABLE_CLD_0_38)
{
  MR_bool succeeded;
  MR_Word Globals_20;
  MR_Word OptTuple_21;
  MR_Word MiddleRec_22;
  MR_Word MiddleRecCode_23;
  MR_Word STATE_VARIABLE_CI_39_39;
  MR_Word _CLD_24;

  ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_36, &Globals_20);
  libs__globals__get_opt_tuple_2_p_0(Globals_20, &OptTuple_21);
  MiddleRec_22 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_21, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
  succeeded = (MiddleRec_22 == (MR_Integer) 0);
  if (succeeded)
    succeeded = ll_backend__middle_rec__match_and_generate_6_p_0(Goal_12, &MiddleRecCode_23, STATE_VARIABLE_CI_0_36, &STATE_VARIABLE_CI_39_39, STATE_VARIABLE_CLD_0_38, &_CLD_24);
  if (succeeded)
  {
    *STATE_VARIABLE_CI_37 = STATE_VARIABLE_CI_39_39;
    *Code_15 = MiddleRecCode_23;
    *MaybeTraceCallLabel_16 = (MR_Word) ((MR_Unsigned) 0U);
    *ProcFrameSlots_17 = (MR_Word) (&ll_backend__proc_gen_scalar_common_1[9]);
  }
  else
  {
    MR_Word MaybeTraceInfo_25;
    MR_Word TraceCallCode_27;
    MR_Word TailRecLabelCode_31;
    MR_Word BodyCode_32;
    MR_Word EntryCode_33;
    MR_Word ExitCode_35;
    MR_Word STATE_VARIABLE_CI_42_42;
    MR_Word STATE_VARIABLE_CLD_43_43;
    MR_Word STATE_VARIABLE_CI_49_49;
    MR_Word STATE_VARIABLE_CLD_50_50;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_34;

    ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_0_36, &MaybeTraceInfo_25);
    if ((MaybeTraceInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTraceCallLabel_16 = (MR_Word) ((MR_Unsigned) 0U);
      TraceCallCode_27 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      TailRecLabelCode_31 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      STATE_VARIABLE_CI_42_42 = STATE_VARIABLE_CI_0_36;
      STATE_VARIABLE_CLD_43_43 = STATE_VARIABLE_CLD_0_38;
    }
    else
    {
      MR_Word TraceInfo_26 = ((MR_Word) ((MR_hl_field(1, MaybeTraceInfo_25, (MR_Integer) 0))));
      MR_Word MaybeTailRecInfo_28;

      ll_backend__proc_gen__generate_call_event_8_p_0(TraceInfo_26, ProcContext_11, MaybeTraceCallLabel_16, &TraceCallCode_27, STATE_VARIABLE_CI_0_36, &STATE_VARIABLE_CI_42_42, STATE_VARIABLE_CLD_0_38, &STATE_VARIABLE_CLD_43_43);
      ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(TraceInfo_26, &MaybeTailRecInfo_28);
      if ((MaybeTailRecInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
        TailRecLabelCode_31 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      else
      {
        MR_Word TailRecLabel_30;
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, MaybeTailRecInfo_28, (MR_Integer) 0))));
        MR_Word Var_45;
        MR_Word Var_46;

        TailRecLabel_30 = ((MR_Word) ((MR_hl_field(0, Var_44, (MR_Integer) 1))));
        {
          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_46, 1) = ((MR_Box) (TailRecLabel_30));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) ((MR_String) "tail recursion label, nofulljump"));
        }
        TailRecLabelCode_31 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_45)));
      }
    }
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Goal_12, &BodyCode_32, STATE_VARIABLE_CI_42_42, &STATE_VARIABLE_CI_49_49, STATE_VARIABLE_CLD_43_43, &STATE_VARIABLE_CLD_50_50);
    ll_backend__proc_gen__generate_entry_6_p_0(STATE_VARIABLE_CI_49_49, (MR_Integer) 0, Goal_12, ResumePoint_13, ProcFrameSlots_17, &EntryCode_33);
    ll_backend__proc_gen__generate_exit_9_p_0((MR_Integer) 0, *ProcFrameSlots_17, TraceSlotInfo_14, ProcContext_11, &Var_34, &ExitCode_35, STATE_VARIABLE_CI_49_49, STATE_VARIABLE_CI_37, STATE_VARIABLE_CLD_50_50);
    Var_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BodyCode_32, ExitCode_35);
    Var_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TailRecLabelCode_31, Var_56);
    Var_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCallCode_27, Var_55);
    *Code_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryCode_33, Var_54);
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1246__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1238__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LiveLvals_10;

  ll_backend__proc_gen__add_type_info_lvals_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_LiveLvals_10);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LiveLvals_10));
}

static void MR_CALL 
ll_backend__proc_gen__generate_exit_9_p_0(
  MR_Word CodeModel_10,
  MR_Word ProcFrameSlots_11,
  MR_Word TraceSlotInfo_12,
  MR_Word ProcContext_13,
  MR_Word * RestoreDeallocCode_14,
  MR_Word * ExitCode_15,
  MR_Word STATE_VARIABLE_CI_0_63,
  MR_Word * STATE_VARIABLE_CI_64,
  MR_Word STATE_VARIABLE_CLD_0_65)
{
  MR_bool succeeded;
  MR_Word StartComment_18;
  MR_Word EndComment_19;
  MR_Integer TotalSlots_20;
  MR_Word MaybeSuccipSlot_21;
  MR_Word InstMap_22;
  MR_Word ArgModes_23;
  MR_Word HeadVars_24;
  MR_Word Args_25;
  MR_Word OutLvals_26;
  MR_Word FlushCode_27;
  MR_Word RestoreSuccipCode_29;
  MR_Word DeallocCode_30;
  MR_Word PruneTraceTicketCode_38;
  MR_Word PruneTraceTicketCodeCopy_39;
  MR_Word RestoreDeallocCodeCopy_40;
  MR_Word MaybeTraceInfo_41;
  MR_Word TraceExitCode_48;
  MR_Word LiveLvals_49;
  MR_Word ProcInfo_50;
  MR_Word MaybeSpecialReturn_51;
  MR_Word AllSuccessCode_53;
  MR_Word STATE_VARIABLE_CLD_74_74;
  MR_Word STATE_VARIABLE_CI_86_86;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_214;
  MR_Word Var_215;
  MR_Word Var_218;
  MR_Word Var_84;

  StartComment_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[21])));
  EndComment_19 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[22])));
  TotalSlots_20 = ((MR_Integer) ((MR_hl_field(0, ProcFrameSlots_11, (MR_Integer) 0))));
  MaybeSuccipSlot_21 = ((MR_Word) ((MR_hl_field(0, ProcFrameSlots_11, (MR_Integer) 1))));
  ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_0_65, &InstMap_22);
  ArgModes_23 = ll_backend__code_info__get_arginfo_1_f_0(STATE_VARIABLE_CI_0_63);
  HeadVars_24 = ll_backend__code_info__get_headvars_1_f_0(STATE_VARIABLE_CI_0_63);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), HeadVars_24, ArgModes_23, &Args_25);
  succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_22);
  if (succeeded)
  {
    OutLvals_26 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    FlushCode_27 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_CLD_74_74 = STATE_VARIABLE_CLD_0_65;
  }
  else
    ll_backend__code_loc_dep__setup_return_5_p_0(Args_25, &OutLvals_26, &FlushCode_27, STATE_VARIABLE_CLD_0_65, &STATE_VARIABLE_CLD_74_74);
  if ((MaybeSuccipSlot_21 == (MR_Word) ((MR_Unsigned) 0U)))
    RestoreSuccipCode_29 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  else
  {
    MR_Integer SuccipSlot_28 = ((MR_Integer) ((MR_hl_field(1, MaybeSuccipSlot_21, (MR_Integer) 0))));
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_79;

    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_79, 1) = ((MR_Box) (SuccipSlot_28));
    }
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (Var_79));
    }
    {
      Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_76, 2) = ((MR_Box) (Var_78));
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_String) "restore the success ip"));
    }
    RestoreSuccipCode_29 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_75)));
  }
  succeeded = (TotalSlots_20 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (CodeModel_10 == (MR_Integer) 2);
  if (succeeded)
    DeallocCode_30 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  else
  {
    MR_Word Var_81;
    MR_Word Var_82;

    {
      Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 25U));
      MR_hl_field(3, Var_82, 1) = ((MR_Box) (TotalSlots_20));
    }
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(0, Var_81, 1) = ((MR_Box) ((MR_String) "Deallocate stack frame"));
    }
    DeallocCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_81)));
  }
  succeeded = (CodeModel_10 != (MR_Integer) 2);
  if (succeeded)
  {
    Var_218 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_12, (MR_Integer) 0))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_12, (MR_Integer) 2))));
    succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    if ((Var_218 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PruneTraceTicketCode_38 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[23])));
      PruneTraceTicketCodeCopy_39 = PruneTraceTicketCode_38;
      STATE_VARIABLE_CI_86_86 = STATE_VARIABLE_CI_0_63;
    }
    else
    {
      MR_Integer FromFullSlot_33 = ((MR_Integer) ((MR_hl_field(1, Var_218, (MR_Integer) 0))));
      MR_Word StackId_34;
      MR_Word FromFullSlotLval_35;
      MR_Word SkipLabel_36;
      MR_Word SkipLabelCopy_37;
      MR_Word STATE_VARIABLE_CI_85_85;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_95;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_110;
      MR_Word Var_112;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;

      StackId_34 = ll_backend__llds__code_model_to_main_stack_1_f_0(CodeModel_10);
      FromFullSlotLval_35 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_34, FromFullSlot_33);
      ll_backend__code_info__get_next_label_3_p_0(&SkipLabel_36, STATE_VARIABLE_CI_0_63, &STATE_VARIABLE_CI_85_85);
      ll_backend__code_info__get_next_label_3_p_0(&SkipLabelCopy_37, STATE_VARIABLE_CI_85_85, &STATE_VARIABLE_CI_86_86);
      {
        Var_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_92, 0) = ((MR_Box) (FromFullSlotLval_35));
      }
      {
        Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(3, Var_90, 2) = ((MR_Box) (Var_92));
      }
      {
        Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_93, 0) = ((MR_Box) (SkipLabel_36));
      }
      {
        Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_89, 1) = ((MR_Box) (Var_90));
        MR_hl_field(3, Var_89, 2) = ((MR_Box) (Var_93));
      }
      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_89));
        MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_101, 1) = ((MR_Box) (SkipLabel_36));
      }
      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(0, Var_100, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_95, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[23]));
        MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_99));
      }
      {
        Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
        MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_95));
      }
      PruneTraceTicketCode_38 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_87);
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (SkipLabelCopy_37));
      }
      {
        Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_106, 1) = ((MR_Box) (Var_90));
        MR_hl_field(3, Var_106, 2) = ((MR_Box) (Var_110));
      }
      {
        Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_105, 0) = ((MR_Box) (Var_106));
        MR_hl_field(0, Var_105, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_118, 1) = ((MR_Box) (SkipLabelCopy_37));
      }
      {
        Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_117, 0) = ((MR_Box) (Var_118));
        MR_hl_field(0, Var_117, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
        MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_112, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[23]));
        MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_116));
      }
      {
        Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
        MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_112));
      }
      PruneTraceTicketCodeCopy_39 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_104);
    }
  else
  {
    PruneTraceTicketCode_38 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    PruneTraceTicketCodeCopy_39 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_CI_86_86 = STATE_VARIABLE_CI_0_63;
  }
  Var_124 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PruneTraceTicketCode_38, DeallocCode_30);
  *RestoreDeallocCode_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreSuccipCode_29, Var_124);
  Var_125 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PruneTraceTicketCodeCopy_39, DeallocCode_30);
  RestoreDeallocCodeCopy_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreSuccipCode_29, Var_125);
  ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_86_86, &MaybeTraceInfo_41);
  if ((MaybeTraceInfo_41 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    TraceExitCode_48 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    LiveLvals_49 = OutLvals_26;
    *STATE_VARIABLE_CI_64 = STATE_VARIABLE_CI_86_86;
  }
  else
  {
    MR_Word TraceInfo_42 = ((MR_Word) ((MR_hl_field(1, MaybeTraceInfo_41, (MR_Integer) 0))));
    MR_Word MaybeExitExternalInfo_43;
    MR_Word _CLDAfterExit_44;

    ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 1, TraceInfo_42, ProcContext_13, &MaybeExitExternalInfo_43, STATE_VARIABLE_CI_86_86, STATE_VARIABLE_CI_64, STATE_VARIABLE_CLD_74_74, &_CLDAfterExit_44);
    if ((MaybeExitExternalInfo_43 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      LiveLvals_49 = OutLvals_26;
      TraceExitCode_48 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    }
    else
    {
      MR_Word ExitExternalInfo_45 = ((MR_Word) ((MR_hl_field(1, MaybeExitExternalInfo_43, (MR_Integer) 0))));
      MR_Word TypeInfoDatas_47 = ((MR_Word) ((MR_hl_field(0, ExitExternalInfo_45, (MR_Integer) 1))));
      MR_Box conv1_LiveLvals_49;

      TraceExitCode_48 = ((MR_Word) ((MR_hl_field(0, ExitExternalInfo_45, (MR_Integer) 2))));
      mercury__map__foldl_4_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[4]), (MR_Word) (&ll_backend__proc_gen_scalar_common_1[5]), (MR_Word) (&ll_backend__proc_gen_scalar_common_1[6]), (MR_Word) (&ll_backend__proc_gen_scalar_common_2[4]), TypeInfoDatas_47, ((MR_Box) (OutLvals_26)), &conv1_LiveLvals_49);
      LiveLvals_49 = ((MR_Word) (conv1_LiveLvals_49));
    }
  }
  ll_backend__code_info__get_proc_info_2_p_0(*STATE_VARIABLE_CI_64, &ProcInfo_50);
  hlds__hlds_pred__proc_info_get_maybe_special_return_2_p_0(ProcInfo_50, &MaybeSpecialReturn_51);
  switch (CodeModel_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SuccessCode_52;
        MR_Word Var_129;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_143;

        {
          Var_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_129, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[0]));
          MR_hl_field(0, Var_129, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_2));
          MR_hl_field(0, Var_129, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_129, 3) = ((MR_Box) (MaybeSpecialReturn_51));
          MR_hl_field(0, Var_129, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_129, (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/9", (MR_String) "det special_return");
        {
          Var_135 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_135, 0) = ((MR_Box) (LiveLvals_49));
        }
        {
          Var_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_134, 0) = ((MR_Box) (Var_135));
          MR_hl_field(0, Var_134, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
          MR_hl_field(1, Var_133, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[15])));
        }
        SuccessCode_52 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_133);
        Var_143 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreDeallocCodeCopy_40, SuccessCode_52);
        AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceExitCode_48, Var_143);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SetupRedoCode_56;
        MR_Word Var_213;
        MR_Word SuccessCode_217;

        if ((MaybeTraceInfo_41 == (MR_Word) ((MR_Unsigned) 0U)))
          SetupRedoCode_56 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        else
        {
          MR_Word TraceInfo2_55 = ((MR_Word) ((MR_hl_field(1, MaybeTraceInfo_41, (MR_Integer) 0))));

          ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(TraceInfo2_55, &SetupRedoCode_56);
        }
        if ((MaybeSpecialReturn_51 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_202;
          MR_Word Var_203;
          MR_Word Var_204;

          {
            Var_204 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_204, 0) = ((MR_Box) (LiveLvals_49));
          }
          {
            Var_203 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_203, 0) = ((MR_Box) (Var_204));
            MR_hl_field(0, Var_203, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_202, 0) = ((MR_Box) (Var_203));
            MR_hl_field(1, Var_202, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[27])));
          }
          SuccessCode_217 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_202);
        }
        else
        {
          MR_Word SpecialReturn_57 = ((MR_Word) ((MR_hl_field(1, MaybeSpecialReturn_51, (MR_Integer) 0))));
          MR_String GeneratorLocnStr_58 = ((MR_String) ((MR_hl_field(0, SpecialReturn_57, (MR_Integer) 0))));
          MR_String DebugStr_59 = ((MR_String) ((MR_hl_field(0, SpecialReturn_57, (MR_Integer) 1))));
          MR_String ReturnCodeStr_61;
          MR_Word Component_62;
          MR_String Var_172;
          MR_String Var_173;
          MR_String Var_175;
          MR_String Var_176;
          MR_String Var_178;
          MR_Word Var_182;
          MR_Word Var_183;
          MR_Word Var_184;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Var_188;
          MR_Word Var_190;

          Var_178 = mercury__string__f_43_43_2_f_0(GeneratorLocnStr_58, (MR_String) ");\n");
          Var_176 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_178);
          Var_175 = mercury__string__f_43_43_2_f_0(DebugStr_59, Var_176);
          Var_173 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_175);
          Var_172 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_return_answer", Var_173);
          ReturnCodeStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_172);
          {
            Component_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Component_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Component_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Component_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(3, Component_62, 3) = ((MR_Box) (ReturnCodeStr_61));
          }
          {
            Var_184 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_184, 0) = ((MR_Box) (LiveLvals_49));
          }
          {
            Var_183 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_183, 0) = ((MR_Box) (Var_184));
            MR_hl_field(0, Var_183, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_190, 0) = ((MR_Box) (Component_62));
            MR_hl_field(1, Var_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_188 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_188, 0) = ((MR_Box) ((MR_Unsigned) 27U));
            MR_hl_field(3, Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_188, 2) = ((MR_Box) (Var_190));
            MR_hl_field(3, Var_188, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, Var_188, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_188, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_188, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_188, 7) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_188, 8) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_188, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          }
          {
            Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_187, 0) = ((MR_Box) (Var_188));
            MR_hl_field(0, Var_187, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
            MR_hl_field(1, Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_182, 0) = ((MR_Box) (Var_183));
            MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_186));
          }
          SuccessCode_217 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_182);
        }
        Var_213 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceExitCode_48, SuccessCode_217);
        AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetupRedoCode_56, Var_213);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SuccessLiveRegs_54;
        MR_Word Var_144;
        MR_Word Var_151;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_170;
        MR_Word SuccessCode_216;

        {
          Var_144 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_144, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[0]));
          MR_hl_field(0, Var_144, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_9_p_0_3));
          MR_hl_field(0, Var_144, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_144, 3) = ((MR_Box) (MaybeSpecialReturn_51));
          MR_hl_field(0, Var_144, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_144, (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/9", (MR_String) "semi special_return");
        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[10]))), LiveLvals_49, &SuccessLiveRegs_54);
        {
          Var_162 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_162, 0) = ((MR_Box) (SuccessLiveRegs_54));
        }
        {
          Var_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_161, 0) = ((MR_Box) (Var_162));
          MR_hl_field(0, Var_161, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_160, 0) = ((MR_Box) (Var_161));
          MR_hl_field(1, Var_160, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__proc_gen_scalar_common_1[15])));
        }
        {
          Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_151, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[29]));
          MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_160));
        }
        SuccessCode_216 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_151);
        Var_170 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreDeallocCodeCopy_40, SuccessCode_216);
        AllSuccessCode_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceExitCode_48, Var_170);
      }
      break;
  }
  Var_215 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AllSuccessCode_53, EndComment_19);
  Var_214 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_27, Var_215);
  *ExitCode_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StartComment_18, Var_214);
}

static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
  MR_Word CI_7,
  MR_Word CodeModel_8,
  MR_Word Goal_9,
  MR_Word OutsideResumePoint_10,
  MR_Word * ProcFrameSlots_11,
  MR_Word * EntryCode_12)
{
  MR_bool succeeded;
  MR_Word StackSlots_13;
  MR_Word VarTable_14;
  MR_String SlotsComment_15;
  MR_Word StartComment_16;
  MR_Integer MainSlots_17;
  MR_Word PredId_18;
  MR_Integer ProcId_19;
  MR_Word ModuleInfo_20;
  MR_Word EntryLabel_21;
  MR_Word LabelCode_22;
  MR_Word Used_23;
  MR_Word SaveSuccipCode_25;
  MR_Integer TotalSlots_26;
  MR_Word MaybeSuccipSlot_27;
  MR_Word MaybeTraceInfo_28;
  MR_Word TraceFillCode_30;
  MR_String PushMsg_31;
  MR_Word AllocCode_34;
  MR_Word EndComment_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word PredInfo_77;

  ll_backend__code_info__get_stack_slots_2_p_0(CI_7, &StackSlots_13);
  ll_backend__code_info__get_var_table_2_p_0(CI_7, &VarTable_14);
  SlotsComment_15 = hlds__hlds_llds__explain_stack_slots_2_f_0(VarTable_14, StackSlots_13);
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (SlotsComment_15));
  }
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[19]));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_43));
  }
  StartComment_16 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_38);
  ll_backend__code_info__get_total_stackslot_count_2_p_0(CI_7, &MainSlots_17);
  ll_backend__code_info__get_pred_id_2_p_0(CI_7, &PredId_18);
  ll_backend__code_info__get_proc_id_2_p_0(CI_7, &ProcId_19);
  ll_backend__code_info__get_module_info_2_p_0(CI_7, &ModuleInfo_20);
  EntryLabel_21 = ll_backend__code_util__make_local_entry_label_4_f_0(ModuleInfo_20, PredId_18, ProcId_19, (MR_Word) ((MR_Unsigned) 0U));
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (EntryLabel_21));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
  }
  LabelCode_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_49)));
  ll_backend__code_info__get_succip_used_2_p_0(CI_7, &Used_23);
  succeeded = (Used_23 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (CodeModel_8 != (MR_Integer) 2);
  if (succeeded)
  {
    MR_Integer Var_52 = (MR_Integer) ((MR_Unsigned) MainSlots_17 + (MR_Unsigned) 1);
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    switch (CodeModel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(CI_7, Var_52);
        break;
      case (MR_Integer) 2:
        TotalSlots_26 = Var_52;
        break;
    }
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (TotalSlots_26));
    }
    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
      MR_hl_field(3, Var_55, 2) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_3[2]));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_String) "Save the success ip"));
    }
    SaveSuccipCode_25 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_54)));
    {
      MaybeSuccipSlot_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeSuccipSlot_27, 0) = ((MR_Box) (TotalSlots_26));
    }
  }
  else
  {
    SaveSuccipCode_25 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    switch (CodeModel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(CI_7, MainSlots_17);
        break;
      case (MR_Integer) 2:
        TotalSlots_26 = MainSlots_17;
        break;
    }
    MaybeSuccipSlot_27 = (MR_Word) ((MR_Unsigned) 0U);
  }
  ll_backend__code_info__get_maybe_trace_info_2_p_0(CI_7, &MaybeTraceInfo_28);
  if ((MaybeTraceInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
    TraceFillCode_30 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  else
  {
    MR_Word TraceInfo_29 = ((MR_Word) ((MR_hl_field(1, MaybeTraceInfo_28, (MR_Integer) 0))));

    ll_backend__trace_gen__generate_slot_fill_code_3_p_0(CI_7, TraceInfo_29, &TraceFillCode_30);
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_20, PredId_18, &PredInfo_77);
  PushMsg_31 = hlds__hlds_desc__describe_proc_3_f_0((MR_Integer) 1, PredInfo_77, ProcId_19);
  switch (CodeModel_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word IsLeaf_35;
        MR_Word StackIncrKind_36;

        IsLeaf_35 = hlds__goal_util__proc_body_is_leaf_1_f_0(Goal_9);
        switch (IsLeaf_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            StackIncrKind_36 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            StackIncrKind_36 = (MR_Integer) 1;
            break;
        }
        succeeded = (TotalSlots_26 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_65;
          MR_Word Var_66;

          {
            Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(3, Var_66, 1) = ((MR_Box) (TotalSlots_26));
            MR_hl_field(3, Var_66, 2) = ((MR_Box) (PushMsg_31));
            MR_hl_field(3, Var_66, 3) = (MR_Box) ((MR_Unsigned) (StackIncrKind_36));
          }
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
          }
          AllocCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_65)));
        }
        else
          AllocCode_34 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OutsideResumeAddress_32;
        MR_Word NondetFrameInfo_33;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;

        ll_backend__code_loc_dep__resume_point_stack_addr_2_p_0(OutsideResumePoint_10, &OutsideResumeAddress_32);
        {
          NondetFrameInfo_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NondetFrameInfo_33, 0) = ((MR_Box) (PushMsg_31));
          MR_hl_field(1, NondetFrameInfo_33, 1) = ((MR_Box) (TotalSlots_26));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (OutsideResumeAddress_32));
        }
        {
          Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_61, 1) = ((MR_Box) (NondetFrameInfo_33));
          MR_hl_field(3, Var_61, 2) = ((MR_Box) (Var_62));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
        }
        AllocCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_60)));
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ProcFrameSlots_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TotalSlots_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeSuccipSlot_27));
  }
  EndComment_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[20])));
  Var_75 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceFillCode_30, EndComment_37);
  Var_74 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveSuccipCode_25, Var_75);
  Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AllocCode_34, Var_74);
  Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_22, Var_73);
  *EntryCode_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StartComment_16, Var_72);
}

static void MR_CALL 
ll_backend__proc_gen__generate_call_event_8_p_0(
  MR_Word TraceInfo_9,
  MR_Word ProcContext_10,
  MR_Word * MaybeTraceCallLabel_11,
  MR_Word * TraceCallCode_12,
  MR_Word STATE_VARIABLE_CI_0_19,
  MR_Word * STATE_VARIABLE_CI_20,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22)
{
  MR_Word MaybeCallExternalInfo_15;

  ll_backend__trace_gen__generate_external_event_code_8_p_0((MR_Integer) 0, TraceInfo_9, ProcContext_10, &MaybeCallExternalInfo_15, STATE_VARIABLE_CI_0_19, STATE_VARIABLE_CI_20, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
  if ((MaybeCallExternalInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TraceCallCode_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *MaybeTraceCallLabel_11 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word CallExternalInfo_16 = ((MR_Word) ((MR_hl_field(1, MaybeCallExternalInfo_15, (MR_Integer) 0))));
    MR_Word TraceCallLabel_17 = ((MR_Word) ((MR_hl_field(0, CallExternalInfo_16, (MR_Integer) 0))));

    *TraceCallCode_12 = ((MR_Word) ((MR_hl_field(0, CallExternalInfo_16, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeTraceCallLabel_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TraceCallLabel_17));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
  MR_Word ProcInfo_4,
  MR_Word HLDSDeepInfo_5)
{
  MR_bool succeeded;
  MR_Word MaybeDeepProfInfo_6;
  MR_Word MaybeHLDSDeepLayout_7 = ((MR_Word) ((MR_hl_field(0, HLDSDeepInfo_5, (MR_Integer) 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, HLDSDeepInfo_5, (MR_Integer) 2))));

  if ((MaybeHLDSDeepLayout_7 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDeepProfInfo_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HLDSDeepLayout_8 = ((MR_Word) ((MR_hl_field(1, MaybeHLDSDeepLayout_7, (MR_Integer) 0))));
    MR_Word HLDSProcStatic_9 = ((MR_Word) ((MR_hl_field(0, HLDSDeepLayout_8, (MR_Integer) 0))));
    MR_Word HLDSExcpVars_10 = ((MR_Word) ((MR_hl_field(0, HLDSDeepLayout_8, (MR_Integer) 1))));
    MR_Word TopCSDVar_12 = ((MR_Word) ((MR_hl_field(0, HLDSExcpVars_10, (MR_Integer) 0))));
    MR_Word MiddleCSDVar_13 = ((MR_Word) ((MR_hl_field(0, HLDSExcpVars_10, (MR_Integer) 1))));
    MR_Word MaybeOldOutermostVar_14 = ((MR_Word) ((MR_hl_field(0, HLDSExcpVars_10, (MR_Integer) 2))));
    MR_Word StackSlots_15;
    MR_Integer TopCSDSlotNum_17;
    MR_Integer MiddleCSDSlotNum_19;
    MR_Integer OldOutermostSlotNum_22;
    MR_Word DeepExcpSlots_23;
    MR_Word DeepProfInfo_24;
    MR_Word TopCSDSlot_16;
    MR_Box conv0_TopCSDSlot_16;

    hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_4, &StackSlots_15);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_15, ((MR_Box) (TopCSDVar_12)), &conv0_TopCSDSlot_16);
    if (succeeded)
    {
      TopCSDSlot_16 = ((MR_Word) (conv0_TopCSDSlot_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word MiddleCSDSlot_18;
      MR_Box conv1_MiddleCSDSlot_18;

      TopCSDSlotNum_17 = hlds__hlds_llds__stack_slot_num_1_f_0(TopCSDSlot_16);
      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_15, ((MR_Box) (MiddleCSDVar_13)), &conv1_MiddleCSDSlot_18);
      MiddleCSDSlot_18 = ((MR_Word) (conv1_MiddleCSDSlot_18));
      MiddleCSDSlotNum_19 = hlds__hlds_llds__stack_slot_num_1_f_0(MiddleCSDSlot_18);
      if ((MaybeOldOutermostVar_14 == (MR_Word) ((MR_Unsigned) 0U)))
        OldOutermostSlotNum_22 = (MR_Integer) -1;
      else
      {
        MR_Word OldOutermostVar_20 = ((MR_Word) ((MR_hl_field(1, MaybeOldOutermostVar_14, (MR_Integer) 0))));
        MR_Word OldOutermostSlot_21;
        MR_Box conv2_OldOutermostSlot_21;

        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_15, ((MR_Box) (OldOutermostVar_20)), &conv2_OldOutermostSlot_21);
        OldOutermostSlot_21 = ((MR_Word) (conv2_OldOutermostSlot_21));
        OldOutermostSlotNum_22 = hlds__hlds_llds__stack_slot_num_1_f_0(OldOutermostSlot_21);
      }
    }
    else
    {
      TopCSDSlotNum_17 = (MR_Integer) -1;
      MiddleCSDSlotNum_19 = (MR_Integer) -1;
      OldOutermostSlotNum_22 = (MR_Integer) -1;
    }
    {
      DeepExcpSlots_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DeepExcpSlots_23, 0) = ((MR_Box) (TopCSDSlotNum_17));
      MR_hl_field(0, DeepExcpSlots_23, 1) = ((MR_Box) (MiddleCSDSlotNum_19));
      MR_hl_field(0, DeepExcpSlots_23, 2) = ((MR_Box) (OldOutermostSlotNum_22));
    }
    {
      DeepProfInfo_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DeepProfInfo_24, 0) = ((MR_Box) (HLDSProcStatic_9));
      MR_hl_field(0, DeepProfInfo_24, 1) = ((MR_Box) (DeepExcpSlots_23));
      MR_hl_field(0, DeepProfInfo_24, 2) = ((MR_Box) (Var_26));
    }
    {
      MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDeepProfInfo_6, 0) = ((MR_Box) (DeepProfInfo_24));
    }
  }
  return MaybeDeepProfInfo_6;
}

static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_bool succeeded;
  MR_Word Globals0_6;
  MR_Word PredModule_7;
  MR_String PredName_8;
  MR_Integer PredFormArityInt_9;
  MR_Word Var_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &Globals0_6);
  PredModule_7 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_4);
  PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_4, &Var_18);
  PredFormArityInt_9 = (MR_Integer) (Var_18);
  succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_7, PredName_8, PredFormArityInt_9);
  if (succeeded)
  {
    MR_Word Globals1_10;

    libs__globals__set_trace_level_none_2_p_0(Globals0_6, &Globals1_10);
    hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_10, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
  }
  else
  {
    MR_Word Origin_11;
    MR_Word Var_20;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_4, &Origin_11);
    succeeded = ((MR_tag((MR_Word) Origin_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(1, Origin_11, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word TraceLevel_14;
      MR_Word UC_TraceLevel_15;
      MR_Word Globals1_22;

      libs__globals__get_trace_level_2_p_0(Globals0_6, &TraceLevel_14);
      UC_TraceLevel_15 = libs__trace_params__trace_level_for_unify_compare_1_f_0(TraceLevel_14);
      libs__globals__set_trace_level_3_p_0(UC_TraceLevel_15, Globals0_6, &Globals1_22);
      hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_22, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
    }
    else
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
  }
}

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_CProcsCord_28;
  MR_Word conv7_STATE_VARIABLE_GlobalData_30;

  ll_backend__proc_gen__generate_code_for_pred_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_CProcsCord_28, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_GlobalData_30);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_CProcsCord_28));
  *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_GlobalData_30));
}

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_3;

  ll_backend__global_data__remap_references_to_global_data_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_3));
}

static void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_CProcsCord_28;
  MR_Word conv0_STATE_VARIABLE_GlobalData_30;

  ll_backend__proc_gen__generate_code_for_pred_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CProcsCord_28, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_GlobalData_30);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CProcsCord_28));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_30));
}

void MR_CALL 
ll_backend__proc_gen__generate_module_code_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * CProcs_6,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18)
{
  MR_bool succeeded;
  MR_Word PredIds_8;
  MR_Word Globals_9;
  MR_Word ParallelCodeGen_10;
  MR_Word VeryVerbose_11;
  MR_Word Statistics_12;
  MR_Word ConstStructMap_15;
  MR_Word CProcsCord_16;
  MR_Word STATE_VARIABLE_GlobalData_26_26;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_5, &PredIds_8);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 350, &ParallelCodeGen_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 73, &VeryVerbose_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 83, &Statistics_12);
  switch (VeryVerbose_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__unify_gen_construct__generate_const_structs_4_p_0(ModuleInfo_5, &ConstStructMap_15, STATE_VARIABLE_GlobalData_0_17, &STATE_VARIABLE_GlobalData_26_26);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProgressStream_33;
        MR_Word ProgressStream_34;

        hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_5, &ProgressStream_33);
        mercury__io__write_string_4_p_0(ProgressStream_33, (MR_String) "% Generating constant structures\n");
        ll_backend__unify_gen_construct__generate_const_structs_4_p_0(ModuleInfo_5, &ConstStructMap_15, STATE_VARIABLE_GlobalData_0_17, &STATE_VARIABLE_GlobalData_26_26);
        hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_5, &ProgressStream_34);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_34, Statistics_12);
      }
      break;
  }
  succeeded = (ParallelCodeGen_10 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (VeryVerbose_11 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Statistics_12 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word ListsOfPredIds_36;
    MR_Word ListsOfPredIdsA_37;
    MR_Word ListsOfPredIdsB_38;
    MR_Word PredIdsA_39;
    MR_Word CProcsCordA_40;
    MR_Word GlobalDataA_41;
    MR_Word PredIdsB_42;
    MR_Word GlobalData1_43;
    MR_Word CProcsCordB0_44;
    MR_Word GlobalDataB_45;
    MR_Word Remap_46;
    MR_Word CProcsCordB_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word RevAs_64;
    MR_Word RevBs_65;
    MR_Box conv3_CProcsCordA_40;
    MR_Box conv2_GlobalDataA_41;
    MR_Box conv5_CProcsCordB0_44;
    MR_Box conv4_GlobalDataB_45;

    mercury__list__chunk_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_8, (MR_Integer) 50, &ListsOfPredIds_36);
    ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(ListsOfPredIds_36, (MR_Word) ((MR_Unsigned) 0U), &RevAs_64, (MR_Word) ((MR_Unsigned) 0U), &RevBs_65);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[2]), RevAs_64, &ListsOfPredIdsA_37);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__proc_gen_scalar_common_1[2]), RevBs_65, &ListsOfPredIdsB_38);
    mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ListsOfPredIdsA_37, &PredIdsA_39);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_4[0]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_4_p_0_1));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (ConstStructMap_15));
      MR_hl_field(0, Var_49, 5) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, Var_49, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_50 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__proc_gen_scalar_common_1[1]), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0), Var_49, PredIdsA_39, ((MR_Box) (Var_50)), &conv3_CProcsCordA_40, ((MR_Box) (STATE_VARIABLE_GlobalData_26_26)), &conv2_GlobalDataA_41);
    CProcsCordA_40 = ((MR_Word) (conv3_CProcsCordA_40));
    GlobalDataA_41 = ((MR_Word) (conv2_GlobalDataA_41));
    mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ListsOfPredIdsB_38, &PredIdsB_42);
    ll_backend__global_data__bump_type_num_counter_3_p_0((MR_Integer) 10000, STATE_VARIABLE_GlobalData_26_26, &GlobalData1_43);
    Var_55 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__proc_gen_scalar_common_1[1]), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0), Var_49, PredIdsB_42, ((MR_Box) (Var_55)), &conv5_CProcsCordB0_44, ((MR_Box) (GlobalData1_43)), &conv4_GlobalDataB_45);
    CProcsCordB0_44 = ((MR_Word) (conv5_CProcsCordB0_44));
    GlobalDataB_45 = ((MR_Word) (conv4_GlobalDataB_45));
    ll_backend__global_data__merge_global_datas_4_p_0(GlobalDataA_41, GlobalDataB_45, STATE_VARIABLE_GlobalData_18, &Remap_46);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[0]));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_4_p_0_2));
      MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_58, 3) = ((MR_Box) (Remap_46));
    }
    mercury__cord__map_pred_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), Var_58, CProcsCordB0_44, &CProcsCordB_47);
    CProcsCord_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), CProcsCordA_40, CProcsCordB_47);
  }
  else
  {
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Box conv10_CProcsCord_16;
    MR_Box conv9_STATE_VARIABLE_GlobalData_18;

    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_4[0]));
      MR_hl_field(0, Var_68, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_4_p_0_3));
      MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_68, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(0, Var_68, 4) = ((MR_Box) (ConstStructMap_15));
      MR_hl_field(0, Var_68, 5) = ((MR_Box) (VeryVerbose_11));
      MR_hl_field(0, Var_68, 6) = ((MR_Box) (Statistics_12));
    }
    Var_69 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__proc_gen_scalar_common_1[1]), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0), Var_68, PredIds_8, ((MR_Box) (Var_69)), &conv10_CProcsCord_16, ((MR_Box) (STATE_VARIABLE_GlobalData_26_26)), &conv9_STATE_VARIABLE_GlobalData_18);
    CProcsCord_16 = ((MR_Word) (conv10_CProcsCord_16));
    *STATE_VARIABLE_GlobalData_18 = ((MR_Word) (conv9_STATE_VARIABLE_GlobalData_18));
  }
  *CProcs_6 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), CProcsCord_16);
}

static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = HeadVar__4_4;
    *HeadVar__3_3 = HeadVar__2_2;
  }
  else
  {
    MR_Box H_12 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word T_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = H_12;
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (HeadVar__2_2));
    }
    ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(T_13, HeadVar__4_4, HeadVar__5_5, Var_18, HeadVar__3_3);
  }
}

static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____proc_frame_slots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__proc_gen____Unify____proc_frame_slots_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__proc_gen____Compare____proc_frame_slots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__proc_gen____Compare____proc_frame_slots_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__proc_gen__init(void)
{
}

void mercury__ll_backend__proc_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_proc_frame_slots_0);
}

void mercury__ll_backend__proc_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__proc_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.proc_gen.
