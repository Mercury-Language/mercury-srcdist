/*
** Automatically generated from `det_analysis.m'
** by the Mercury compiler,
** version rotd-2026-05-25
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


// :- module check_hlds.det_analysis.
// :- implementation.

/*
INIT mercury__check_hlds__det_analysis__init
ENDINIT
*/

#include "check_hlds.det_analysis.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.det_check_proc.mih"
#include "check_hlds.det_infer_goal.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
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
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_analysis__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__det_analysis__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static void MR_CALL 
check_hlds__det_analysis__restore_option_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8);

static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
check_hlds__det_analysis__restore_det_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_3,
  MR_Word * STATE_VARIABLE_DeclaredProcs_4,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_5,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_6,
  MR_Word STATE_VARIABLE_CompGenProcs_0_7,
  MR_Word * STATE_VARIABLE_CompGenProcs_8,
  MR_Word STATE_VARIABLE_ImportedProcs_0_9,
  MR_Word * STATE_VARIABLE_ImportedProcs_10);

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_4,
  MR_Word * STATE_VARIABLE_DeclaredProcs_5,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_6,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_7,
  MR_Word STATE_VARIABLE_CompGenProcs_0_8,
  MR_Word * STATE_VARIABLE_CompGenProcs_9,
  MR_Word STATE_VARIABLE_ImportedProcs_0_10,
  MR_Word * STATE_VARIABLE_ImportedProcs_11);

static void MR_CALL 
check_hlds__det_analysis__determinism_inference_to_fixpoint_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Debug_8,
  MR_Word PredProcIds_9,
  MR_Word * Specs_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_114_109_105_110_105_115_109_95_105_110_102_101_114_101_110_99_101_95_111_110_101_95_112_97_115_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word Debug_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_112_114_111_99_95_95_91_49_93_95_48_9_p_0(
  MR_Word Debug_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50,
  MR_Word STATE_VARIABLE_Changed_0_51,
  MR_Word * STATE_VARIABLE_Changed_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54);

static void MR_CALL 
check_hlds__det_analysis__maybe_record_change_print_inferred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Debug_9,
  MR_Word PredProcId_10,
  MR_Word OldDetism_11,
  MR_Word NewDetism_12,
  MR_Word STATE_VARIABLE_Changed_0_19,
  MR_Word * STATE_VARIABLE_Changed_20);

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____options_to_restore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_analysis____Compare____options_to_restore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[1][2];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_4[2][6];




static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[0])),
    ((MR_Box) (check_hlds__det_analysis__determinism_pass_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[0])),
    ((MR_Box) (check_hlds__det_analysis__determinism_pass_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1])),
    ((MR_Box) (check_hlds__det_analysis__restore_det_warnings_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_analysis__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_analysis__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__det_analysis__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__det_analysis__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_options_to_restore_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__det_analysis____Unify____options_to_restore_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____options_to_restore_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "options_to_restore",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__det_analysis__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
check_hlds__det_analysis____Compare____options_to_restore_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__det_analysis____Unify____options_to_restore_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_analysis__restore_option_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8)
{
  MR_Word Option_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Value_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));

  libs__globals__set_option_4_p_0(Option_4, Value_5, STATE_VARIABLE_Globals_0_7, STATE_VARIABLE_Globals_8);
}

static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  MR_Word PredId_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer ProcId_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word PredInfo0_7;
  MR_Word Procs0_8;
  MR_Word ProcInfo0_9;
  MR_Word MaybeDet_10;
  MR_Box conv0_ProcInfo0_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_15, PredId_4, &PredInfo0_7);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_7, &Procs0_8);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_8, ((MR_Box) (ProcId_5)), &conv0_ProcInfo0_9);
  ProcInfo0_9 = ((MR_Word) (conv0_ProcInfo0_9));
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_9, &MaybeDet_10);
  if ((MaybeDet_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ModuleInfo_16 = STATE_VARIABLE_ModuleInfo_0_15;
  else
  {
    MR_Word Det_11 = ((MR_Word) ((MR_hl_field(1, MaybeDet_10, 0))));
    MR_Word ProcInfo_12;
    MR_Word Procs_13;
    MR_Word PredInfo_14;

    hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(Det_11, ProcInfo0_9, &ProcInfo_12);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_5)), ((MR_Box) (ProcInfo_12)), Procs0_8, &Procs_13);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_13, PredInfo0_7, &PredInfo_14);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
  }
}

static void MR_CALL 
check_hlds__det_analysis__restore_det_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Globals_8;

  check_hlds__det_analysis__restore_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Globals_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Globals_8));
}

void MR_CALL 
check_hlds__det_analysis__restore_det_warnings_3_p_0(
  MR_Word OptionsToRestore_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Box conv1_STATE_VARIABLE_Globals_7;

  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_globals_0), (MR_Word) (&check_hlds__det_analysis_scalar_common_1[3]), OptionsToRestore_4, ((MR_Box) (STATE_VARIABLE_Globals_0_6)), &conv1_STATE_VARIABLE_Globals_7);
  *STATE_VARIABLE_Globals_7 = ((MR_Word) (conv1_STATE_VARIABLE_Globals_7));
}

void MR_CALL 
check_hlds__det_analysis__disable_det_warnings_3_p_0(
  MR_Word * OptionsToRestore_4,
  MR_Word STATE_VARIABLE_Globals_0_8,
  MR_Word * STATE_VARIABLE_Globals_9)
{
  MR_Word WarnSimple_6;
  MR_Word WarnDeclsTooLax_7;
  MR_Word STATE_VARIABLE_Globals_1_14;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;

  libs__globals__lookup_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 186, &WarnSimple_6);
  libs__globals__lookup_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 172, &WarnDeclsTooLax_7);
  libs__globals__set_option_4_p_0((MR_Integer) 186, (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_3[0])), STATE_VARIABLE_Globals_0_8, &STATE_VARIABLE_Globals_1_14);
  libs__globals__set_option_4_p_0((MR_Integer) 172, (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_3[0])), STATE_VARIABLE_Globals_1_14, STATE_VARIABLE_Globals_9);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) ((MR_Integer) 186));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (WarnSimple_6));
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) ((MR_Integer) 172));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (WarnDeclsTooLax_7));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *OptionsToRestore_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
check_hlds__det_analysis__det_infer_proc_ignore_msgs_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_112_114_111_99_95_105_103_110_111_114_101_95_109_115_103_115_95_95_91_49_93_95_48_5_p_0(PredId_7, ProcId_8, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
}

void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_112_114_111_99_95_105_103_110_111_114_101_95_109_115_103_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word Var_15;
  MR_Word _Specs_10;
  MR_Word Var_11;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (PredId_7));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (ProcId_8));
  }
  check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_112_114_111_99_95_95_91_49_93_95_48_9_p_0((MR_Integer) 0, Var_15, (MR_Word) ((MR_Unsigned) 0U), &_Specs_10, (MR_Integer) 0, &Var_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
}

void MR_CALL 
check_hlds__det_analysis__determinism_check_proc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word * STATE_VARIABLE_Specs_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_Word PredProcId_12;
  MR_Word Globals_13;
  MR_Word Debug_14;
  MR_Word STATE_VARIABLE_Specs_1_22;
  MR_Word STATE_VARIABLE_ModuleInfo_1_24;
  MR_Word Var_15;

  {
    PredProcId_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_12, 0) = ((MR_Box) (PredId_8));
    MR_hl_field(0, PredProcId_12, 1) = ((MR_Box) (ProcId_9));
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 708, &Debug_14);
  check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_112_114_111_99_95_95_91_49_93_95_48_9_p_0(Debug_14, PredProcId_12, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_1_22, (MR_Integer) 0, &Var_15, STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_1_24);
  check_hlds__det_check_proc__check_determinism_of_proc_6_p_0(ProgressStream_7, PredProcId_12, STATE_VARIABLE_ModuleInfo_1_24, STATE_VARIABLE_ModuleInfo_18, STATE_VARIABLE_Specs_1_22, STATE_VARIABLE_Specs_16);
}

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_16;

  check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_16));
}

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_16;

  check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_16));
}

void MR_CALL 
check_hlds__det_analysis__determinism_pass_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word * Specs_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_Word PredIdTable0_8;
  MR_Word ValidPredIds0_9;
  MR_Word DeclaredProcs_10;
  MR_Word UndeclaredProcs_11;
  MR_Word CompGenProcs_12;
  MR_Word ImportedProcs_13;
  MR_Word Globals_14;
  MR_Word Verbose_15;
  MR_Word Debug_16;
  MR_Word InferenceSpecs_17;
  MR_Word FinalSpecs_21;
  MR_Word STATE_VARIABLE_ModuleInfo_1_25;
  MR_Word STATE_VARIABLE_ModuleInfo_2_27;
  MR_Word STATE_VARIABLE_ModuleInfo_3_33;
  MR_Word STATE_VARIABLE_Specs_1_59;
  MR_Word STATE_VARIABLE_ModuleInfo_1_61;
  MR_Word STATE_VARIABLE_ModuleInfo_2_62;
  MR_Word STATE_VARIABLE_Specs_2_63;
  MR_Word STATE_VARIABLE_Specs_3_64;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_1_25;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_2_27;
  MR_Word Var_57;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &PredIdTable0_8);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &ValidPredIds0_9);
  check_hlds__det_analysis__determinism_declarations_preds_10_p_0(PredIdTable0_8, ValidPredIds0_9, (MR_Word) ((MR_Unsigned) 0U), &DeclaredProcs_10, (MR_Word) ((MR_Unsigned) 0U), &UndeclaredProcs_11, (MR_Word) ((MR_Unsigned) 0U), &CompGenProcs_12, (MR_Word) ((MR_Unsigned) 0U), &ImportedProcs_13);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__det_analysis_scalar_common_1[1]), CompGenProcs_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22)), &conv1_STATE_VARIABLE_ModuleInfo_1_25);
  STATE_VARIABLE_ModuleInfo_1_25 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_1_25));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__det_analysis_scalar_common_1[2]), ImportedProcs_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_25)), &conv3_STATE_VARIABLE_ModuleInfo_2_27);
  STATE_VARIABLE_ModuleInfo_2_27 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_2_27));
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_2_27, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 131, &Verbose_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 708, &Debug_16);
  if ((UndeclaredProcs_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    InferenceSpecs_17 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ModuleInfo_3_33 = STATE_VARIABLE_ModuleInfo_2_27;
  }
  else
  {
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_5, Verbose_15, (MR_String) "% Doing determinism inference...\n");
    check_hlds__det_analysis__determinism_inference_to_fixpoint_6_p_0(ProgressStream_5, Debug_16, UndeclaredProcs_11, &InferenceSpecs_17, STATE_VARIABLE_ModuleInfo_2_27, &STATE_VARIABLE_ModuleInfo_3_33);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_5, Verbose_15, (MR_String) "% done.\n");
  }
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_5, Verbose_15, (MR_String) "% Doing determinism checking...\n");
  check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_114_109_105_110_105_115_109_95_105_110_102_101_114_101_110_99_101_95_111_110_101_95_112_97_115_115_95_95_91_49_93_95_48_9_p_0(Debug_16, DeclaredProcs_10, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_1_59, (MR_Integer) 0, &Var_57, STATE_VARIABLE_ModuleInfo_3_33, &STATE_VARIABLE_ModuleInfo_1_61);
  check_hlds__det_check_proc__check_determinism_of_procs_6_p_0(ProgressStream_5, DeclaredProcs_10, STATE_VARIABLE_ModuleInfo_1_61, &STATE_VARIABLE_ModuleInfo_2_62, STATE_VARIABLE_Specs_1_59, &STATE_VARIABLE_Specs_2_63);
  check_hlds__det_check_proc__check_determinism_of_procs_6_p_0(ProgressStream_5, UndeclaredProcs_11, STATE_VARIABLE_ModuleInfo_2_62, STATE_VARIABLE_ModuleInfo_23, STATE_VARIABLE_Specs_2_63, &STATE_VARIABLE_Specs_3_64);
  check_hlds__det_check_proc__check_determinism_of_imported_procs_5_p_0(ProgressStream_5, *STATE_VARIABLE_ModuleInfo_23, ImportedProcs_13, STATE_VARIABLE_Specs_3_64, &FinalSpecs_21);
  *Specs_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), InferenceSpecs_17, FinalSpecs_21);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_5, Verbose_15, (MR_String) "% done.\n");
}

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_3,
  MR_Word * STATE_VARIABLE_DeclaredProcs_4,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_5,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_6,
  MR_Word STATE_VARIABLE_CompGenProcs_0_7,
  MR_Word * STATE_VARIABLE_CompGenProcs_8,
  MR_Word STATE_VARIABLE_ImportedProcs_0_9,
  MR_Word * STATE_VARIABLE_ImportedProcs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImportedProcs_10 = STATE_VARIABLE_ImportedProcs_0_9;
      *STATE_VARIABLE_CompGenProcs_8 = STATE_VARIABLE_CompGenProcs_0_7;
      *STATE_VARIABLE_UndeclaredProcs_6 = STATE_VARIABLE_UndeclaredProcs_0_5;
      *STATE_VARIABLE_DeclaredProcs_4 = STATE_VARIABLE_DeclaredProcs_0_3;
    }
    else
    {
      MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word PredIds_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredInfo_31;
      MR_Word ProcIds_32;
      MR_Word STATE_VARIABLE_DeclaredProcs_1_41;
      MR_Word STATE_VARIABLE_UndeclaredProcs_1_42;
      MR_Word STATE_VARIABLE_CompGenProcs_1_43;
      MR_Word STATE_VARIABLE_ImportedProcs_1_44;
      MR_Box conv0_PredInfo_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_DeclaredProcs_0_3;
      MR_Word next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_CompGenProcs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ImportedProcs_0_9;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (PredId_25)), &conv0_PredInfo_31);
      PredInfo_31 = ((MR_Word) (conv0_PredInfo_31));
      ProcIds_32 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_31);
      check_hlds__det_analysis__determinism_declarations_procs_11_p_0(PredId_25, PredInfo_31, ProcIds_32, STATE_VARIABLE_DeclaredProcs_0_3, &STATE_VARIABLE_DeclaredProcs_1_41, STATE_VARIABLE_UndeclaredProcs_0_5, &STATE_VARIABLE_UndeclaredProcs_1_42, STATE_VARIABLE_CompGenProcs_0_7, &STATE_VARIABLE_CompGenProcs_1_43, STATE_VARIABLE_ImportedProcs_0_9, &STATE_VARIABLE_ImportedProcs_1_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_26;
      next_value_of_STATE_VARIABLE_DeclaredProcs_0_3 = STATE_VARIABLE_DeclaredProcs_1_41;
      next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5 = STATE_VARIABLE_UndeclaredProcs_1_42;
      next_value_of_STATE_VARIABLE_CompGenProcs_0_7 = STATE_VARIABLE_CompGenProcs_1_43;
      next_value_of_STATE_VARIABLE_ImportedProcs_0_9 = STATE_VARIABLE_ImportedProcs_1_44;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DeclaredProcs_0_3 = next_value_of_STATE_VARIABLE_DeclaredProcs_0_3;
      STATE_VARIABLE_UndeclaredProcs_0_5 = next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5;
      STATE_VARIABLE_CompGenProcs_0_7 = next_value_of_STATE_VARIABLE_CompGenProcs_0_7;
      STATE_VARIABLE_ImportedProcs_0_9 = next_value_of_STATE_VARIABLE_ImportedProcs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_4,
  MR_Word * STATE_VARIABLE_DeclaredProcs_5,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_6,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_7,
  MR_Word STATE_VARIABLE_CompGenProcs_0_8,
  MR_Word * STATE_VARIABLE_CompGenProcs_9,
  MR_Word STATE_VARIABLE_ImportedProcs_0_10,
  MR_Word * STATE_VARIABLE_ImportedProcs_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImportedProcs_11 = STATE_VARIABLE_ImportedProcs_0_10;
      *STATE_VARIABLE_CompGenProcs_9 = STATE_VARIABLE_CompGenProcs_0_8;
      *STATE_VARIABLE_UndeclaredProcs_7 = STATE_VARIABLE_UndeclaredProcs_0_6;
      *STATE_VARIABLE_DeclaredProcs_5 = STATE_VARIABLE_DeclaredProcs_0_4;
    }
    else
    {
      MR_Integer ProcId_28 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ProcIds_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word PredProcId_34;
      MR_Word STATE_VARIABLE_ImportedProcs_1_48;
      MR_Word STATE_VARIABLE_CompGenProcs_1_50;
      MR_Word STATE_VARIABLE_UndeclaredProcs_1_51;
      MR_Word STATE_VARIABLE_DeclaredProcs_1_52;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_DeclaredProcs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_CompGenProcs_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImportedProcs_0_10;

      {
        PredProcId_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_34, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, PredProcId_34, 1) = ((MR_Box) (ProcId_28));
      }
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(HeadVar__2_2);
      if (succeeded)
      {
        {
          STATE_VARIABLE_ImportedProcs_1_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ImportedProcs_1_48, 0) = ((MR_Box) (PredProcId_34));
          MR_hl_field(1, STATE_VARIABLE_ImportedProcs_1_48, 1) = ((MR_Box) (STATE_VARIABLE_ImportedProcs_0_10));
        }
        STATE_VARIABLE_CompGenProcs_1_50 = STATE_VARIABLE_CompGenProcs_0_8;
        STATE_VARIABLE_UndeclaredProcs_1_51 = STATE_VARIABLE_UndeclaredProcs_0_6;
        STATE_VARIABLE_DeclaredProcs_1_52 = STATE_VARIABLE_DeclaredProcs_0_4;
      }
      else
      {
        {
          MR_Integer Var_55;

          succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(HeadVar__2_2);
          if (succeeded)
          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_55);
            succeeded = (ProcId_28 == Var_55);
          }
        }
        if (!(succeeded))
        {
          MR_Word Markers_35;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(HeadVar__2_2, &Markers_35);
          succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_35, (MR_Integer) 12);
        }
        if (succeeded)
        {
          {
            STATE_VARIABLE_CompGenProcs_1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_CompGenProcs_1_50, 0) = ((MR_Box) (PredProcId_34));
            MR_hl_field(1, STATE_VARIABLE_CompGenProcs_1_50, 1) = ((MR_Box) (STATE_VARIABLE_CompGenProcs_0_8));
          }
          STATE_VARIABLE_UndeclaredProcs_1_51 = STATE_VARIABLE_UndeclaredProcs_0_6;
          STATE_VARIABLE_DeclaredProcs_1_52 = STATE_VARIABLE_DeclaredProcs_0_4;
        }
        else
        {
          MR_Word ProcTable_36;
          MR_Word ProcInfo_37;
          MR_Word MaybeDetism_38;
          MR_Box conv0_ProcInfo_37;

          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(HeadVar__2_2, &ProcTable_36);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_36, ((MR_Box) (ProcId_28)), &conv0_ProcInfo_37);
          ProcInfo_37 = ((MR_Word) (conv0_ProcInfo_37));
          hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_37, &MaybeDetism_38);
          if ((MaybeDetism_38 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              STATE_VARIABLE_UndeclaredProcs_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_UndeclaredProcs_1_51, 0) = ((MR_Box) (PredProcId_34));
              MR_hl_field(1, STATE_VARIABLE_UndeclaredProcs_1_51, 1) = ((MR_Box) (STATE_VARIABLE_UndeclaredProcs_0_6));
            }
            STATE_VARIABLE_DeclaredProcs_1_52 = STATE_VARIABLE_DeclaredProcs_0_4;
          }
          else
          {
            {
              STATE_VARIABLE_DeclaredProcs_1_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_DeclaredProcs_1_52, 0) = ((MR_Box) (PredProcId_34));
              MR_hl_field(1, STATE_VARIABLE_DeclaredProcs_1_52, 1) = ((MR_Box) (STATE_VARIABLE_DeclaredProcs_0_4));
            }
            STATE_VARIABLE_UndeclaredProcs_1_51 = STATE_VARIABLE_UndeclaredProcs_0_6;
          }
          STATE_VARIABLE_CompGenProcs_1_50 = STATE_VARIABLE_CompGenProcs_0_8;
        }
        STATE_VARIABLE_ImportedProcs_1_48 = STATE_VARIABLE_ImportedProcs_0_10;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_29;
      next_value_of_STATE_VARIABLE_DeclaredProcs_0_4 = STATE_VARIABLE_DeclaredProcs_1_52;
      next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6 = STATE_VARIABLE_UndeclaredProcs_1_51;
      next_value_of_STATE_VARIABLE_CompGenProcs_0_8 = STATE_VARIABLE_CompGenProcs_1_50;
      next_value_of_STATE_VARIABLE_ImportedProcs_0_10 = STATE_VARIABLE_ImportedProcs_1_48;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_DeclaredProcs_0_4 = next_value_of_STATE_VARIABLE_DeclaredProcs_0_4;
      STATE_VARIABLE_UndeclaredProcs_0_6 = next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6;
      STATE_VARIABLE_CompGenProcs_0_8 = next_value_of_STATE_VARIABLE_CompGenProcs_0_8;
      STATE_VARIABLE_ImportedProcs_0_10 = next_value_of_STATE_VARIABLE_ImportedProcs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_inference_to_fixpoint_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Debug_8,
  MR_Word PredProcIds_9,
  MR_Word * Specs_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  while (MR_TRUE)
  {
    MR_Word Specs1_12;
    MR_Word Changed_13;
    MR_Word STATE_VARIABLE_ModuleInfo_1_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_114_109_105_110_105_115_109_95_105_110_102_101_114_101_110_99_101_95_111_110_101_95_112_97_115_115_95_95_91_49_93_95_48_9_p_0(Debug_8, PredProcIds_9, (MR_Word) ((MR_Unsigned) 0U), &Specs1_12, (MR_Integer) 0, &Changed_13, STATE_VARIABLE_ModuleInfo_0_15, &STATE_VARIABLE_ModuleInfo_1_19);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Debug_8, (MR_String) "% Inference pass complete\n");
    switch (Changed_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_15 = STATE_VARIABLE_ModuleInfo_1_19;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_ModuleInfo_0_15 = next_value_of_STATE_VARIABLE_ModuleInfo_0_15;
          continue;
        }
        break;
      case (MR_Integer) 0:
        {
          *Specs_10 = Specs1_12;
          *STATE_VARIABLE_ModuleInfo_16 = STATE_VARIABLE_ModuleInfo_1_19;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_114_109_105_110_105_115_109_95_105_110_102_101_114_101_110_99_101_95_111_110_101_95_112_97_115_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word Debug_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      *STATE_VARIABLE_Changed_7 = STATE_VARIABLE_Changed_0_6;
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    }
    else
    {
      MR_Word PredProcId_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PredProcIds_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Specs_1_34;
      MR_Word STATE_VARIABLE_Changed_1_35;
      MR_Word STATE_VARIABLE_ModuleInfo_1_36;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_8;

      check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_112_114_111_99_95_95_91_49_93_95_48_9_p_0(Debug_2, PredProcId_23, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_34, STATE_VARIABLE_Changed_0_6, &STATE_VARIABLE_Changed_1_35, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_1_36);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredProcIds_24;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_34;
      next_value_of_STATE_VARIABLE_Changed_0_6 = STATE_VARIABLE_Changed_1_35;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = STATE_VARIABLE_ModuleInfo_1_36;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      STATE_VARIABLE_Changed_0_6 = next_value_of_STATE_VARIABLE_Changed_0_6;
      STATE_VARIABLE_ModuleInfo_0_8 = next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_112_114_111_99_95_95_91_49_93_95_48_9_p_0(
  MR_Word Debug_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50,
  MR_Word STATE_VARIABLE_Changed_0_51,
  MR_Word * STATE_VARIABLE_Changed_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54)
{
  MR_bool succeeded;
  MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, PredProcId_12, 0))));
  MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(0, PredProcId_12, 1))));
  MR_Word PredInfo0_18;
  MR_Word ProcInfo0_19;
  MR_Word OldDetism_20;
  MR_Word OldInferredSolnContext_21;
  MR_Word MaybeDeclaredDetism_22;
  MR_Word DeclaredSolnContext_24;
  MR_Word SolnContext_25;
  MR_Word Goal0_29;
  MR_Word InstMap0_30;
  MR_Word VarTable_31;
  MR_Word DetInfo0_32;
  MR_Word InferDetism_33;
  MR_Word Goal_34;
  MR_Word DetInfo_35;
  MR_Word OldCanFail_36;
  MR_Word OldMaxSoln_37;
  MR_Word InferCanFail_38;
  MR_Word InferMaxSoln_39;
  MR_Word CanFail_40;
  MR_Word MaxSoln_41;
  MR_Word TentativeDetism_42;
  MR_Word EvalMethod_43;
  MR_Word NewDetism_44;
  MR_Word ProcInfo1_45;
  MR_Word ProcInfo_46;
  MR_Word PredInfo1_47;
  MR_Word PredInfo_48;
  MR_Word STATE_VARIABLE_ModuleInfo_1_64;
  MR_Word HasFormatCalls_99;
  MR_Word HasRequireScope_100;
  MR_Word HasIncompleteSwitch_101;
  MR_Word STATE_VARIABLE_Markers_1_102;
  MR_Word STATE_VARIABLE_Markers_2_104;
  MR_Word STATE_VARIABLE_Markers_3_106;
  MR_Word STATE_VARIABLE_Markers_4_108;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_53, PredId_16, &PredInfo0_18);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_18, ProcId_17, &ProcInfo0_19);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_19, &OldDetism_20);
  check_hlds__det_infer_goal__det_get_soln_context_2_p_0(OldDetism_20, &OldInferredSolnContext_21);
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_19, &MaybeDeclaredDetism_22);
  if ((MaybeDeclaredDetism_22 == (MR_Word) ((MR_Unsigned) 0U)))
    DeclaredSolnContext_24 = (MR_Integer) 0;
  else
  {
    MR_Word DeclaredDetism_23 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredDetism_22, 0))));

    check_hlds__det_infer_goal__det_get_soln_context_2_p_0(DeclaredDetism_23, &DeclaredSolnContext_24);
  }
  succeeded = (DeclaredSolnContext_24 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (OldInferredSolnContext_21 == (MR_Integer) 1);
  if (succeeded)
    SolnContext_25 = (MR_Integer) 1;
  else
    SolnContext_25 = (MR_Integer) 0;
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_19, &Goal0_29);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_53, ProcInfo0_19, &InstMap0_30);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_19, &VarTable_31);
  check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_0_53, PredProcId_12, VarTable_31, (MR_Integer) 0, STATE_VARIABLE_Specs_0_49, &DetInfo0_32);
  check_hlds__det_infer_goal__det_infer_proc_goal_7_p_0(InstMap0_30, SolnContext_25, &InferDetism_33, Goal0_29, &Goal_34, DetInfo0_32, &DetInfo_35);
  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_35, &STATE_VARIABLE_ModuleInfo_1_64);
  check_hlds__det_util__det_info_get_error_specs_2_p_0(DetInfo_35, STATE_VARIABLE_Specs_50);
  parse_tree__prog_data__determinism_components_3_p_0(OldDetism_20, &OldCanFail_36, &OldMaxSoln_37);
  parse_tree__prog_data__determinism_components_3_p_0(InferDetism_33, &InferCanFail_38, &InferMaxSoln_39);
  parse_tree__prog_detism__det_switch_canfail_3_p_0(OldCanFail_36, InferCanFail_38, &CanFail_40);
  parse_tree__prog_detism__det_switch_maxsoln_3_p_0(OldMaxSoln_37, InferMaxSoln_39, &MaxSoln_41);
  parse_tree__prog_data__determinism_components_3_p_1(&TentativeDetism_42, CanFail_40, MaxSoln_41);
  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_19, &EvalMethod_43);
  if ((EvalMethod_43 == (MR_Word) ((MR_Unsigned) 0U)))
    NewDetism_44 = TentativeDetism_42;
  else
  {
    MR_Word TabledMethoed_87 = ((MR_Word) ((MR_hl_field(1, EvalMethod_43, 0))));

    switch (MR_tag((MR_Word) TabledMethoed_87)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NewDetism_44 = TentativeDetism_42;
        break;
      case (MR_Integer) 1:
        NewDetism_44 = TentativeDetism_42;
        break;
      case (MR_Integer) 2:
        NewDetism_44 = TentativeDetism_42;
        break;
      case (MR_Integer) 3:
        parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, TentativeDetism_42, &NewDetism_44);
        break;
    }
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_34, ProcInfo0_19, &ProcInfo1_45);
  hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(NewDetism_44, ProcInfo1_45, &ProcInfo_46);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_17, ProcInfo_46, PredInfo0_18, &PredInfo1_47);
  check_hlds__det_util__det_info_get_has_format_call_2_p_0(DetInfo_35, &HasFormatCalls_99);
  check_hlds__det_util__det_info_get_has_req_scope_2_p_0(DetInfo_35, &HasRequireScope_100);
  check_hlds__det_util__det_info_get_has_incomplete_switch_2_p_0(DetInfo_35, &HasIncompleteSwitch_101);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo1_47, &STATE_VARIABLE_Markers_1_102);
  switch (HasFormatCalls_99) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 28, STATE_VARIABLE_Markers_1_102, &STATE_VARIABLE_Markers_2_104);
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_Markers_2_104 = STATE_VARIABLE_Markers_1_102;
      break;
  }
  switch (HasRequireScope_100) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 26, STATE_VARIABLE_Markers_2_104, &STATE_VARIABLE_Markers_3_106);
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_Markers_3_106 = STATE_VARIABLE_Markers_2_104;
      break;
  }
  switch (HasIncompleteSwitch_101) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 27, STATE_VARIABLE_Markers_3_106, &STATE_VARIABLE_Markers_4_108);
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_Markers_4_108 = STATE_VARIABLE_Markers_3_106;
      break;
  }
  hlds__hlds_pred__pred_info_set_markers_3_p_0(STATE_VARIABLE_Markers_4_108, PredInfo1_47, &PredInfo_48);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_16, PredInfo_48, STATE_VARIABLE_ModuleInfo_1_64, STATE_VARIABLE_ModuleInfo_54);
  check_hlds__det_analysis__maybe_record_change_print_inferred_7_p_0(*STATE_VARIABLE_ModuleInfo_54, Debug_11, PredProcId_12, OldDetism_20, NewDetism_44, STATE_VARIABLE_Changed_0_51, STATE_VARIABLE_Changed_52);
}

static void MR_CALL 
check_hlds__det_analysis__maybe_record_change_print_inferred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Debug_9,
  MR_Word PredProcId_10,
  MR_Word OldDetism_11,
  MR_Word NewDetism_12,
  MR_Word STATE_VARIABLE_Changed_0_19,
  MR_Word * STATE_VARIABLE_Changed_20)
{
  MR_bool succeeded = (NewDetism_12 == OldDetism_11);
  MR_String ChangeStr_14;

  if (succeeded)
  {
    ChangeStr_14 = (MR_String) "old";
    *STATE_VARIABLE_Changed_20 = STATE_VARIABLE_Changed_0_19;
  }
  else
  {
    ChangeStr_14 = (MR_String) "new";
    *STATE_VARIABLE_Changed_20 = (MR_Integer) 1;
  }
  switch (Debug_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DebugStream_16;
        MR_String NewDetismStr_17;
        MR_String ProcStr_18;

        hlds__passes_aux__get_debug_output_stream_4_p_0(ModuleInfo_8, &DebugStream_16);
        NewDetismStr_17 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(NewDetism_12);
        ProcStr_18 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_user_string_2_f_0(ModuleInfo_8, PredProcId_10);
        mercury__io__write_string_4_p_0(DebugStream_16, (MR_String) "% Inferred ");
        mercury__io__write_string_4_p_0(DebugStream_16, ChangeStr_14);
        mercury__io__write_string_4_p_0(DebugStream_16, (MR_String) " detism ");
        mercury__io__write_string_4_p_0(DebugStream_16, NewDetismStr_17);
        mercury__io__write_string_4_p_0(DebugStream_16, (MR_String) " for ");
        mercury__io__write_string_4_p_0(DebugStream_16, ProcStr_18);
        mercury__io__write_string_4_p_0(DebugStream_16, (MR_String) "\n");
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____options_to_restore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_analysis____Unify____options_to_restore_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_analysis____Compare____options_to_restore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_analysis____Compare____options_to_restore_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__det_analysis__init(void)
{
}

void mercury__check_hlds__det_analysis__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_options_to_restore_0);
}

void mercury__check_hlds__det_analysis__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__det_analysis__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.det_analysis.
