/*
** Automatically generated from `mercury_compile_augment.m'
** by the Mercury compiler,
** version rotd-2024-12-11
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


// :- module top_level.mercury_compile_augment.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_augment__init
ENDINIT
*/

#include "top_level.mercury_compile_augment.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.export.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.xml_documentation.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "io.file.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.check_module_interface.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.check.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "recompilation.usage.mih"
#include "recompilation.used_file.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "top_level.mercury_compile_make_hlds.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
top_level__mercury_compile_augment__IntroducedFrom__pred__augment_and_process_source_file__106__1_2_p_0(
  MR_Word ModulesToRecompile_35,
  MR_Word LambdaHeadVar__1_50);

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_module_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeAugment_18,
  MR_Word InvokedByMmcMake_19,
  MR_Word MaybeTimestamp_20,
  MR_Word BurdenedModule_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_35);

static void MR_CALL 
top_level__mercury_compile_augment__process_augmented_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals0_19,
  MR_Word OpModeAugment_20,
  MR_Word InvokedByMmcMake_21,
  MR_Word Baggage_22,
  MR_Word AugCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_58,
  MR_Word * STATE_VARIABLE_DumpInfo_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_62,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_63);

static void MR_CALL 
top_level__mercury_compile_augment__after_front_end_passes_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeCodeGen_18,
  MR_Word MaybeTopModule_19,
  MR_Word MaybeTimestampMap_20,
  MR_Word STATE_VARIABLE_HLDS_0_57,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59,
  MR_Word STATE_VARIABLE_DumpInfo_0_60,
  MR_Word * STATE_VARIABLE_DumpInfo_61);

static void MR_CALL 
top_level__mercury_compile_augment__maybe_output_prof_call_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

static MR_Box MR_CALL 
top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24);

static MR_Box MR_CALL 
top_level__mercury_compile_augment__maybe_prepare_for_intermodule_analysis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_augment__maybe_prepare_for_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19);

static void MR_CALL 
top_level__mercury_compile_augment__maybe_write_dependency_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18);

static void MR_CALL 
top_level__mercury_compile_augment__disable_warning_options_2_p_0(
  MR_Word Globals0_3,
  MR_Word * Globals_4);

static void MR_CALL 
top_level__mercury_compile_augment__module_to_link_2_p_0(
  MR_Word BurdenedModule_3,
  MR_String * ModuleToLink_4);

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_1[5][2];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_2[2][1];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_3[3][5];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_4[1][17];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_5[3][3];




static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 13U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 11U) },
};

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_3[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_augment__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_4[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)),
    ((MR_Box) (&top_level__mercury_compile_augment__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&top_level__mercury_compile_augment__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_augment__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_augment__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_5[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[2])),
    ((MR_Box) (top_level__mercury_compile_augment__maybe_prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[2])),
    ((MR_Box) (top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static MR_bool MR_CALL 
top_level__mercury_compile_augment__IntroducedFrom__pred__augment_and_process_source_file__106__1_2_p_0(
  MR_Word ModulesToRecompile_35,
  MR_Word LambdaHeadVar__1_50)
{
  MR_bool succeeded;
  MR_Word PTMS_39 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_50, (MR_Integer) 1))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, PTMS_39, (MR_Integer) 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_51)), ModulesToRecompile_35);
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_module_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeAugment_18,
  MR_Word InvokedByMmcMake_19,
  MR_Word MaybeTimestamp_20,
  MR_Word BurdenedModule_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_35)
{
  MR_bool succeeded;
  MR_Word Baggage0_26 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_21, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_27 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_21, (MR_Integer) 1))));
  MR_Word AugCompUnit_28;
  MR_Word Baggage_29;
  MR_Word Errors_30;
  MR_Word STATE_VARIABLE_Specs_38_38;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_39_39;
  MR_Word STATE_VARIABLE_Specs_41_41;
  MR_Word Var_42;
  MR_Word Var_43;

  parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(Globals_17, ParseTreeModuleSrc_27, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_38_38);
  parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0(ProgressStream_15, Globals_17, MaybeTimestamp_20, ParseTreeModuleSrc_27, &AugCompUnit_28, Baggage0_26, &Baggage_29, STATE_VARIABLE_HaveParseTreeMaps_0_34, &STATE_VARIABLE_HaveParseTreeMaps_39_39);
  Errors_30 = ((MR_Word) ((MR_hl_field(0, Baggage_29, (MR_Integer) 7))));
  Var_42 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_30);
  STATE_VARIABLE_Specs_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_42, STATE_VARIABLE_Specs_38_38);
  Var_43 = ((MR_Word) ((MR_hl_field(0, Errors_30, (MR_Integer) 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_43);
  if (succeeded)
  {
    MR_Word Var_31;

    top_level__mercury_compile_augment__process_augmented_module_16_p_0(ProgressStream_15, ErrorStream_16, Globals_17, OpModeAugment_18, InvokedByMmcMake_19, Baggage_29, AugCompUnit_28, ExtraObjFiles_22, (MR_Word) ((MR_Unsigned) 0U), &Var_31, STATE_VARIABLE_Specs_41_41, STATE_VARIABLE_Specs_33, STATE_VARIABLE_HaveParseTreeMaps_39_39, STATE_VARIABLE_HaveParseTreeMaps_35);
  }
  else
  {
    *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveParseTreeMaps_35 = STATE_VARIABLE_HaveParseTreeMaps_39_39;
    *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_41_41;
  }
}

static void MR_CALL 
top_level__mercury_compile_augment__process_augmented_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals0_19,
  MR_Word OpModeAugment_20,
  MR_Word InvokedByMmcMake_21,
  MR_Word Baggage_22,
  MR_Word AugCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_58,
  MR_Word * STATE_VARIABLE_DumpInfo_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_62,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_63)
{
  MR_bool succeeded;
  MR_Word Globals_30;
  MR_Word HLDS1_31;
  MR_Word QualInfo_32;
  MR_Word MaybeTimestampMap_33;
  MR_Word UndefTypes_34;
  MR_Word UndefModes_35;
  MR_Word PreHLDSErrors_36;
  MR_Word FrontEndErrors_37;
  MR_Word HLDS20_38;
  MR_Integer ExitStatus_39;
  MR_Word STATE_VARIABLE_DumpInfo_66_66;
  MR_Word STATE_VARIABLE_Specs_67_67;
  MR_Word STATE_VARIABLE_DumpInfo_70_70;
  MR_Word STATE_VARIABLE_Specs_71_71;
  MR_Word Var_74;

  switch (MR_tag((MR_Word) OpModeAugment_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          top_level__mercury_compile_augment__disable_warning_options_2_p_0(Globals0_19, &Globals_30);
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          Globals_30 = Globals0_19;
          break;
      }
      break;
    case (MR_Integer) 1:
      Globals_30 = Globals0_19;
      break;
  }
  top_level__mercury_compile_make_hlds__make_hlds_pass_21_p_0(ProgressStream_17, ErrorStream_18, Globals_30, OpModeAugment_20, InvokedByMmcMake_21, Baggage_22, AugCompUnit_23, &HLDS1_31, &QualInfo_32, &MaybeTimestampMap_33, &UndefTypes_34, &UndefModes_35, &PreHLDSErrors_36, STATE_VARIABLE_DumpInfo_0_58, &STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_67_67, STATE_VARIABLE_HaveParseTreeMaps_0_62, STATE_VARIABLE_HaveParseTreeMaps_63);
  top_level__mercury_compile_front_end__frontend_pass_16_p_0(ProgressStream_17, ErrorStream_18, OpModeAugment_20, QualInfo_32, UndefTypes_34, UndefModes_35, PreHLDSErrors_36, &FrontEndErrors_37, HLDS1_31, &HLDS20_38, STATE_VARIABLE_DumpInfo_66_66, &STATE_VARIABLE_DumpInfo_70_70, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_71_71);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_39);
  succeeded = (PreHLDSErrors_36 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (FrontEndErrors_37 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_74 = parse_tree__error_util__contains_errors_2_f_0(Globals_30, STATE_VARIABLE_Specs_71_71);
      succeeded = (Var_74 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ExitStatus_39 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word Verbose_40;
    MR_Word Stats_41;
    MR_Word HLDS21_42;

    libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 77, &Verbose_40);
    libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 87, &Stats_41);
    top_level__mercury_compile_augment__maybe_write_dependency_graph_6_p_0(ProgressStream_17, Stats_41, HLDS20_38, &HLDS21_42);
    switch (MR_tag((MR_Word) OpModeAugment_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
              *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_middle_passes__output_trans_opt_file_8_p_0(ProgressStream_17, HLDS21_42, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_61, STATE_VARIABLE_DumpInfo_70_70, STATE_VARIABLE_DumpInfo_59);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word AnalysisSpecs_50;
              MR_Word HLDS22_51;

              top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0(ProgressStream_17, Globals_30, Verbose_40, Stats_41, &AnalysisSpecs_50, HLDS21_42, &HLDS22_51);
              if ((AnalysisSpecs_50 == (MR_Word) ((MR_Unsigned) 0U)))
                top_level__mercury_compile_middle_passes__output_analysis_file_8_p_0(ProgressStream_17, HLDS22_51, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_61, STATE_VARIABLE_DumpInfo_70_70, STATE_VARIABLE_DumpInfo_59);
              else
              {
                *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_50, STATE_VARIABLE_Specs_71_71);
                *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
              }
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__xml_documentation__xml_documentation_4_p_0(ProgressStream_17, HLDS21_42);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
              *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
            }
            break;
          case (MR_Integer) 4:
            {
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
              *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word UnusedArgs_43;

              libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 15, &UnusedArgs_43);
              switch (UnusedArgs_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OptTuple_44;
                    MR_Word NoOptUnusedArgsOptTuple_45;
                    MR_Word NoOptUnusedArgsGlobals_46;
                    MR_Word HLDS21a_47;
                    MR_Integer Var_187;
                    MR_Integer Var_188;
                    MR_Integer Var_189;
                    MR_Integer Var_190;
                    MR_Integer Var_191;
                    MR_Integer Var_192;
                    MR_Integer Var_193;
                    MR_Integer Var_194;
                    MR_Integer Var_195;
                    MR_Integer Var_196;
                    MR_Integer Var_197;
                    MR_Integer Var_198;
                    MR_Integer Var_199;
                    MR_Integer Var_200;
                    MR_Integer Var_201;
                    MR_Integer Var_202;
                    MR_Integer Var_203;
                    MR_Integer Var_204;
                    MR_Integer Var_205;
                    MR_Integer Var_206;
                    MR_Integer Var_207;
                    MR_Integer Var_208;
                    MR_Integer Var_209;
                    MR_Integer Var_210;
                    MR_Integer Var_211;
                    MR_Integer Var_212;
                    MR_Integer Var_213;
                    MR_Integer Var_214;
                    MR_Integer Var_215;
                    MR_Integer Var_216;
                    MR_Integer Var_217;
                    MR_Integer Var_218;
                    MR_Integer Var_219;
                    MR_Integer Var_220;
                    MR_Integer Var_221;
                    MR_Integer Var_222;
                    MR_Integer Var_223;
                    MR_String Var_224;
                    MR_Unsigned packed_word_0;
                    MR_Unsigned packed_word_1;
                    MR_Unsigned packed_word_2;
                    MR_Word _UnusedArgsInfos_48;
                    MR_Word _HLDS22_49;

                    libs__globals__get_opt_tuple_2_p_0(Globals_30, &OptTuple_44);
                    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 0)));
                    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 1)));
                    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 2)));
                    Var_187 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 3))));
                    Var_188 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 4))));
                    Var_189 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 5))));
                    Var_190 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 6))));
                    Var_191 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 7))));
                    Var_192 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 8))));
                    Var_193 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 9))));
                    Var_194 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 10))));
                    Var_195 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 11))));
                    Var_196 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 12))));
                    Var_197 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 13))));
                    Var_198 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 14))));
                    Var_199 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 15))));
                    Var_200 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 16))));
                    Var_201 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 17))));
                    Var_202 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 18))));
                    Var_203 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 19))));
                    Var_204 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 20))));
                    Var_205 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 21))));
                    Var_206 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 22))));
                    Var_207 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 23))));
                    Var_208 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 24))));
                    Var_209 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 25))));
                    Var_210 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 26))));
                    Var_211 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 27))));
                    Var_212 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 28))));
                    Var_213 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 29))));
                    Var_214 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 30))));
                    Var_215 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 31))));
                    Var_216 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 32))));
                    Var_217 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 33))));
                    Var_218 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 34))));
                    Var_219 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 35))));
                    Var_220 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 36))));
                    Var_221 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 37))));
                    Var_222 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 38))));
                    Var_223 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 39))));
                    Var_224 = ((MR_String) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 40))));
                    {
                      NoOptUnusedArgsOptTuple_45 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 32U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 5))));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 1) = (MR_Box) (packed_word_1);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 2) = (MR_Box) (packed_word_2);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 3) = ((MR_Box) (Var_187));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 4) = ((MR_Box) (Var_188));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 5) = ((MR_Box) (Var_189));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 6) = ((MR_Box) (Var_190));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 7) = ((MR_Box) (Var_191));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 8) = ((MR_Box) (Var_192));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 9) = ((MR_Box) (Var_193));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 10) = ((MR_Box) (Var_194));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 11) = ((MR_Box) (Var_195));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 12) = ((MR_Box) (Var_196));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 13) = ((MR_Box) (Var_197));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 14) = ((MR_Box) (Var_198));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 15) = ((MR_Box) (Var_199));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 16) = ((MR_Box) (Var_200));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 17) = ((MR_Box) (Var_201));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 18) = ((MR_Box) (Var_202));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 19) = ((MR_Box) (Var_203));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 20) = ((MR_Box) (Var_204));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 21) = ((MR_Box) (Var_205));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 22) = ((MR_Box) (Var_206));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 23) = ((MR_Box) (Var_207));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 24) = ((MR_Box) (Var_208));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 25) = ((MR_Box) (Var_209));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 26) = ((MR_Box) (Var_210));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 27) = ((MR_Box) (Var_211));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 28) = ((MR_Box) (Var_212));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 29) = ((MR_Box) (Var_213));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 30) = ((MR_Box) (Var_214));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 31) = ((MR_Box) (Var_215));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 32) = ((MR_Box) (Var_216));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 33) = ((MR_Box) (Var_217));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 34) = ((MR_Box) (Var_218));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 35) = ((MR_Box) (Var_219));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 36) = ((MR_Box) (Var_220));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 37) = ((MR_Box) (Var_221));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 38) = ((MR_Box) (Var_222));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 39) = ((MR_Box) (Var_223));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 40) = ((MR_Box) (Var_224));
                    }
                    libs__globals__set_opt_tuple_3_p_0(NoOptUnusedArgsOptTuple_45, Globals_30, &NoOptUnusedArgsGlobals_46);
                    hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_46, HLDS21_42, &HLDS21a_47);
                    top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_17, Verbose_40, Stats_41, &_UnusedArgsInfos_48, HLDS21a_47, &_HLDS22_49, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_61);
                  }
                  break;
              }
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpModeCodeGen_54 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_20, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word AnalysisSpecs_98;
          MR_Word HLDS22_99;

          top_level__mercury_compile_augment__maybe_prepare_for_intermodule_analysis_9_p_0(ProgressStream_17, Globals_30, Verbose_40, Stats_41, &AnalysisSpecs_98, HLDS21_42, &HLDS22_99);
          if ((AnalysisSpecs_98 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeTopModule_55 = ((MR_Word) ((MR_hl_field(0, Baggage_22, (MR_Integer) 3))));

            top_level__mercury_compile_augment__after_front_end_passes_14_p_0(ProgressStream_17, ErrorStream_18, Globals_30, OpModeCodeGen_54, MaybeTopModule_55, MaybeTimestampMap_33, HLDS22_99, ExtraObjFiles_24, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_61, STATE_VARIABLE_DumpInfo_70_70, STATE_VARIABLE_DumpInfo_59);
          }
          else
          {
            *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_98, STATE_VARIABLE_Specs_71_71);
            *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
          }
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_39 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
    *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
  }
}

static void MR_CALL 
top_level__mercury_compile_augment__after_front_end_passes_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeCodeGen_18,
  MR_Word MaybeTopModule_19,
  MR_Word MaybeTimestampMap_20,
  MR_Word STATE_VARIABLE_HLDS_0_57,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59,
  MR_Word STATE_VARIABLE_DumpInfo_0_60,
  MR_Word * STATE_VARIABLE_DumpInfo_61)
{
  MR_bool succeeded;
  MR_Word Stats_26;
  MR_Word HighLevelCode_27;
  MR_Word Target_28;
  MR_Word ModuleName_29;
  MR_String UsageFileName_30;
  MR_Word FrontEndErrors_33;
  MR_Integer ExitStatus_34;
  MR_Word STATE_VARIABLE_HLDS_65_65;
  MR_Word STATE_VARIABLE_HLDS_67_67;
  MR_Word STATE_VARIABLE_DumpInfo_68_68;
  MR_Word STATE_VARIABLE_Specs_69_69;
  MR_String _UsageFileNameProposed_31;
  MR_Word Var_32;

  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 87, &Stats_26);
  top_level__mercury_compile_augment__maybe_output_prof_call_graph_6_p_0(ProgressStream_15, Stats_26, STATE_VARIABLE_HLDS_0_57, &STATE_VARIABLE_HLDS_65_65);
  top_level__mercury_compile_middle_passes__middle_pass_10_p_0(ProgressStream_15, ErrorStream_16, STATE_VARIABLE_HLDS_65_65, &STATE_VARIABLE_HLDS_67_67, STATE_VARIABLE_DumpInfo_0_60, &STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_69_69);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 331, &HighLevelCode_27);
  libs__globals__get_target_2_p_0(Globals_17, &Target_28);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_67_67, &ModuleName_29);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_augment.after_front_end_passes\'/14", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[2])), ModuleName_29, &UsageFileName_30, &_UsageFileNameProposed_31);
  mercury__io__file__remove_file_4_p_0(UsageFileName_30, &Var_32);
  FrontEndErrors_33 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_17, STATE_VARIABLE_Specs_69_69);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_34);
  succeeded = (FrontEndErrors_33 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ExitStatus_34 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Succeeded_36;
    MR_Word STATE_VARIABLE_HLDS_104_104;

    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ExportDecls_40;

          backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_67_67, &ExportDecls_40);
          backend_libs__export__produce_header_file_6_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, ExportDecls_40, ModuleName_29);
          switch (HighLevelCode_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GlobalData_49;
                MR_Word LLDS_50;

                top_level__mercury_compile_llds_back_end__llds_backend_pass_10_p_0(ProgressStream_15, ErrorStream_16, STATE_VARIABLE_HLDS_67_67, &STATE_VARIABLE_HLDS_104_104, &GlobalData_49, &LLDS_50, STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_DumpInfo_61);
                top_level__mercury_compile_llds_back_end__llds_output_pass_10_p_0(ProgressStream_15, OpModeCodeGen_18, STATE_VARIABLE_HLDS_104_104, GlobalData_49, LLDS_50, ModuleName_29, &Succeeded_36, ExtraObjFiles_22);
                *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_69_69;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MLDS_114;
                MR_Word TargetCodeSucceeded_115;

                top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, &MLDS_114, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_59, STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_DumpInfo_61);
                top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_6_p_0(ProgressStream_15, Globals_17, MLDS_114, &TargetCodeSucceeded_115);
                switch (OpModeCodeGen_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    switch (TargetCodeSucceeded_115) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Succeeded_36 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String C_File_41;
                          MR_Word TargetType_43;
                          MR_Word PIC_44;
                          MR_Word ObjExt_45;
                          MR_String O_File_47;
                          MR_Word Var_100;
                          MR_String _C_FileProposed_42;
                          MR_Word Var_46;
                          MR_String _O_FileProposed_48;

                          parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_augment.after_front_end_passes\'/14", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[3])), ModuleName_29, &C_File_41, &_C_FileProposed_42);
                          backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_17, &TargetType_43);
                          backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_17, TargetType_43, &PIC_44);
                          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_44, &ObjExt_45, &Var_46);
                          {
                            Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, Var_100, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_45));
                          }
                          parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_augment.after_front_end_passes\'/14", Var_100, ModuleName_29, &O_File_47, &_O_FileProposed_48);
                          backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_17, ProgressStream_15, PIC_44, C_File_41, O_File_47, &Succeeded_36);
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_36);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    Succeeded_36 = TargetCodeSucceeded_115;
                    break;
                }
                *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_HLDS_104_104 = STATE_VARIABLE_HLDS_67_67;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MLDS_35;

          top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, &MLDS_35, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_59, STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_DumpInfo_61);
          top_level__mercury_compile_mlds_back_end__mlds_to_csharp_6_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, MLDS_35, &Succeeded_36);
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_104_104 = STATE_VARIABLE_HLDS_67_67;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetCodeSucceeded_37;
          MR_Word MLDS_113;

          top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, &MLDS_113, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_59, STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_DumpInfo_61);
          top_level__mercury_compile_mlds_back_end__mlds_to_java_6_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, MLDS_113, &TargetCodeSucceeded_37);
          switch (OpModeCodeGen_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              switch (TargetCodeSucceeded_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Succeeded_36 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String JavaFile_38;
                    MR_String _JavaFileProposed_39;

                    parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_augment.after_front_end_passes\'/14", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[4])), ModuleName_29, &JavaFile_38, &_JavaFileProposed_39);
                    backend_libs__compile_target_code__compile_java_files_7_p_0(Globals_17, ProgressStream_15, JavaFile_38, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_36);
                    parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_36);
                  }
                  break;
              }
              break;
            case (MR_Integer) 0:
              Succeeded_36 = TargetCodeSucceeded_37;
              break;
          }
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_104_104 = STATE_VARIABLE_HLDS_67_67;
        }
        break;
    }
    switch (Succeeded_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeRecompInfo_51;
          MR_String TimestampFile_55;
          MR_Word RecompInfo_52;
          MR_Word TimestampMap_53;
          MR_Word _Succeededs_56;

          hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_104_104, &MaybeRecompInfo_51);
          succeeded = (MaybeRecompInfo_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RecompInfo_52 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo_51, (MR_Integer) 0))));
            succeeded = (MaybeTimestampMap_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TimestampMap_53 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_20, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word UsedFileContents_54;

            recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_104_104, RecompInfo_52, MaybeTopModule_19, TimestampMap_53, &UsedFileContents_54);
            recompilation__used_file__write_usage_file_5_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_104_104, UsedFileContents_54);
          }
          parse_tree__file_names__module_name_to_target_timestamp_file_name_create_dirs_5_p_0(Globals_17, ModuleName_29, &TimestampFile_55);
          parse_tree__module_cmds__touch_file_datestamp_6_p_0(Globals_17, ProgressStream_15, TimestampFile_55, &_Succeededs_56);
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_34 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DumpInfo_61 = STATE_VARIABLE_DumpInfo_68_68;
    *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_69_69;
  }
}

static void MR_CALL 
top_level__mercury_compile_augment__maybe_output_prof_call_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  MR_bool succeeded;
  MR_Word Globals_11;
  MR_Word ProfileCalls_12;
  MR_Word ProfileTime_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 264, &ProfileCalls_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 265, &ProfileTime_13);
  succeeded = (ProfileCalls_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (ProfileTime_13 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word ModuleName_14;
    MR_String ProfFileName_15;
    MR_String DepGraphStr_17;
    MR_String _ProfFileNameProposed_16;
    MR_Word _Succeeded_18;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_19, &ModuleName_14);
    parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_11, (MR_String) "predicate \140top_level.mercury_compile_augment.maybe_output_prof_call_graph\'/6", (MR_Word) (MR_mkword(1, &top_level__mercury_compile_augment_scalar_common_2[1])), ModuleName_14, &ProfFileName_15, &_ProfFileNameProposed_16);
    hlds__hlds_dependency_graph__prof_dependency_graph_to_string_3_p_0(&DepGraphStr_17, STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
    libs__file_util__write_string_to_file_8_p_0(ProgressStream_7, Globals_11, (MR_String) "Writing profiling call graph", ProfFileName_15, DepGraphStr_17, &_Succeeded_18);
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_8);
  }
  else
    *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
}

static MR_Box MR_CALL 
top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24)
{
  MR_Word ModuleNames_17;
  MR_Word LocalModulesList_18;
  MR_Word SymNames_19;
  MR_Word LocalModuleNames_20;
  MR_Word AnalysisInfo0_21;
  MR_Word AnalysisInfo_22;

  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Preparing for intermodule analysis...\n");
  hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_23, &ModuleNames_17);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 743, &LocalModulesList_18);
  SymNames_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_5[2]), LocalModulesList_18);
  LocalModuleNames_20 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_19);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_23, &AnalysisInfo0_21);
  analysis__operations__prepare_intermodule_analysis_9_p_0(ProgressStream_10, Globals_11, ModuleNames_17, LocalModuleNames_20, Specs_14, AnalysisInfo0_21, &AnalysisInfo_22);
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_22, STATE_VARIABLE_HLDS_0_23, STATE_VARIABLE_HLDS_24);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
}

static MR_Box MR_CALL 
top_level__mercury_compile_augment__maybe_prepare_for_intermodule_analysis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
top_level__mercury_compile_augment__maybe_prepare_for_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19)
{
  MR_Word IntermodAnalysis_17;

  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 526, &IntermodAnalysis_17);
  switch (IntermodAnalysis_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleNames_23;
        MR_Word LocalModulesList_24;
        MR_Word SymNames_25;
        MR_Word LocalModuleNames_26;
        MR_Word AnalysisInfo0_27;
        MR_Word AnalysisInfo_28;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Preparing for intermodule analysis...\n");
        hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_18, &ModuleNames_23);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 743, &LocalModulesList_24);
        SymNames_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_5[1]), LocalModulesList_24);
        LocalModuleNames_26 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_25);
        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_18, &AnalysisInfo0_27);
        analysis__operations__prepare_intermodule_analysis_9_p_0(ProgressStream_10, Globals_11, ModuleNames_23, LocalModuleNames_26, Specs_14, AnalysisInfo0_27, &AnalysisInfo_28);
        hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_28, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_augment__maybe_write_dependency_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18)
{
  MR_Word Globals_11;
  MR_Word ShowDepGraph_12;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 209, &ShowDepGraph_12);
  switch (ShowDepGraph_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
      break;
    case (MR_Integer) 1:
      {
        MR_String DepGraphStr_13;
        MR_Word ModuleName_14;
        MR_String DepGraphFileName_15;
        MR_Word _Succeeded_16;

        hlds__hlds_dependency_graph__dependency_graph_to_string_3_p_0(&DepGraphStr_13, STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18);
        hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_HLDS_18, &ModuleName_14);
        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 3, ModuleName_14, &DepGraphFileName_15);
        libs__file_util__write_string_to_file_8_p_0(ProgressStream_7, Globals_11, (MR_String) "Writing dependency graph", DepGraphFileName_15, DepGraphStr_13, &_Succeeded_16);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_8);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_augment__disable_warning_options_2_p_0(
  MR_Word Globals0_3,
  MR_Word * Globals_4)
{
  MR_Word OptionTable0_5;
  MR_Word OptionTable1_6;
  MR_Word OptionTable_7;
  MR_Word Var_8;
  MR_Word Var_11;

  libs__globals__get_options_2_p_0(Globals0_3, &OptionTable0_5);
  Var_8 = libs__options__style_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_8, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_augment_scalar_common_2[0])), OptionTable0_5, &OptionTable1_6);
  Var_11 = libs__options__non_style_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_11, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_augment_scalar_common_2[0])), OptionTable1_6, &OptionTable_7);
  libs__globals__set_options_3_p_0(OptionTable_7, Globals0_3, Globals_4);
}

static void MR_CALL 
top_level__mercury_compile_augment__module_to_link_2_p_0(
  MR_Word BurdenedModule_3,
  MR_String * ModuleToLink_4)
{
  MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_3, (MR_Integer) 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 0))));

  parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_7, ModuleToLink_4);
}

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv6_ModuleToLink_4;

  top_level__mercury_compile_augment__module_to_link_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_ModuleToLink_4);
  *wrapper_arg_2 = ((MR_Box) (conv6_ModuleToLink_4));
}

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_ExtraObjFiles_22;
  MR_Word conv1_STATE_VARIABLE_Specs_33;
  MR_Word conv0_STATE_VARIABLE_HaveParseTreeMaps_35;

  top_level__mercury_compile_augment__augment_and_process_module_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv2_ExtraObjFiles_22, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Specs_33, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_HaveParseTreeMaps_35);
  *wrapper_arg_2 = ((MR_Box) (conv2_ExtraObjFiles_22));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_33));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_HaveParseTreeMaps_35));
}

static MR_bool MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_augment__IntroducedFrom__pred__augment_and_process_source_file__106__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals_20,
  MR_Word OpModeAugment_21,
  MR_Word InvokedByMmcMake_22,
  MR_String SourceFileName_23,
  MR_Word MaybeTimestamp_24,
  MR_Word ReadModuleErrors_25,
  MR_Word ParseTreeSrc_26,
  MR_Word MaybeModulesToRecompile_27,
  MR_Word * ModulesToLink_28,
  MR_Word * ExtraObjFiles_29,
  MR_Word * STATE_VARIABLE_Specs_44,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_46)
{
  MR_bool succeeded;
  MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_26, (MR_Integer) 0))));
  MR_Word BurdenedModules0_34;
  MR_Word BurdenedModulesToRecompile_40;
  MR_Word TraceProf_41;
  MR_Word GlobalsToUse_43;
  MR_Word STATE_VARIABLE_Specs_49_49;
  MR_Word ExtraObjFileLists_101;
  MR_Word Var_102;
  MR_Word Var_99;
  MR_Box conv5_STATE_VARIABLE_Specs_44;
  MR_Box conv4_STATE_VARIABLE_HaveParseTreeMaps_46;
  MR_Box conv3_STATE_VARIABLE_IO_48;

  parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_20, SourceFileName_23, ReadModuleErrors_25, MaybeTimestamp_24, ParseTreeSrc_26, &STATE_VARIABLE_Specs_49_49, &BurdenedModules0_34);
  if ((MaybeModulesToRecompile_27 == (MR_Word) ((MR_Unsigned) 0U)))
    BurdenedModulesToRecompile_40 = BurdenedModules0_34;
  else
  {
    MR_Word ModulesToRecompile_35 = ((MR_Word) ((MR_hl_field(1, MaybeModulesToRecompile_27, (MR_Integer) 0))));
    MR_Word ToRecompile_36;

    {
      ToRecompile_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ToRecompile_36, 0) = ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[0]));
      MR_hl_field(0, ToRecompile_36, 1) = ((MR_Box) (top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_1));
      MR_hl_field(0, ToRecompile_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ToRecompile_36, 3) = ((MR_Box) (ModulesToRecompile_35));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), ToRecompile_36, BurdenedModules0_34, &BurdenedModulesToRecompile_40);
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 179, &TraceProf_41);
  succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_33);
  if (succeeded)
  {
    Var_99 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_33, Var_99);
    if (succeeded)
      succeeded = (TraceProf_41 == (MR_Integer) 1);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word Globals1_42;

    libs__globals__set_option_4_p_0((MR_Integer) 341, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_augment_scalar_common_2[0])), Globals_20, &Globals1_42);
    libs__globals__set_trace_level_none_2_p_0(Globals1_42, &GlobalsToUse_43);
  }
  else
    GlobalsToUse_43 = Globals_20;
  {
    Var_102 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_102, 0) = ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_4[0]));
    MR_hl_field(0, Var_102, 1) = ((MR_Box) (top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_2));
    MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_102, 3) = ((MR_Box) (ProgressStream_18));
    MR_hl_field(0, Var_102, 4) = ((MR_Box) (ErrorStream_19));
    MR_hl_field(0, Var_102, 5) = ((MR_Box) (GlobalsToUse_43));
    MR_hl_field(0, Var_102, 6) = ((MR_Box) (OpModeAugment_21));
    MR_hl_field(0, Var_102, 7) = ((MR_Box) (InvokedByMmcMake_22));
    MR_hl_field(0, Var_102, 8) = ((MR_Box) (MaybeTimestamp_24));
  }
  mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_1[1]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, BurdenedModulesToRecompile_40, &ExtraObjFileLists_101, ((MR_Box) (STATE_VARIABLE_Specs_49_49)), &conv5_STATE_VARIABLE_Specs_44, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_0_45)), &conv4_STATE_VARIABLE_HaveParseTreeMaps_46, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_48);
  *STATE_VARIABLE_Specs_44 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_44));
  *STATE_VARIABLE_HaveParseTreeMaps_46 = ((MR_Word) (conv4_STATE_VARIABLE_HaveParseTreeMaps_46));
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_5[0]), BurdenedModulesToRecompile_40, ModulesToLink_28);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_101, ExtraObjFiles_29);
}

void mercury__top_level__mercury_compile_augment__init(void)
{
}

void mercury__top_level__mercury_compile_augment__init_type_tables(void)
{
}

void mercury__top_level__mercury_compile_augment__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_augment__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_augment.
