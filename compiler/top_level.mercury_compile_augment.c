/*
** Automatically generated from `mercury_compile_augment.m'
** by the Mercury compiler,
** version rotd-2026-07-26
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
#include "integer.mih"
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
#include "backend_libs.link_target_code_c.mih"
#include "backend_libs.link_target_util.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
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
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.check_module_interface.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_augment__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
top_level__mercury_compile_augment__IntroducedFrom__pred__augment_and_process_source_file__110__1_2_p_0(
  MR_Word ModulesToRecompile_38,
  MR_Word LambdaHeadVar__1_55);

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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_37,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_38);

static MR_Box MR_CALL 
top_level__mercury_compile_augment__process_augmented_module_after_front_end_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_augment__process_augmented_module_after_front_end_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeAugment_18,
  MR_Word Baggage_19,
  MR_Word MaybeTimestampMap_20,
  MR_Word HLDS20_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_DumpInfo_0_37,
  MR_Word * STATE_VARIABLE_DumpInfo_38,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_39,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_40);

static void MR_CALL 
top_level__mercury_compile_augment__choose_and_execute_backend_passes_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_augment__choose_and_execute_backend_passes_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeCodeGen_19,
  MR_Word ModuleName_20,
  MR_Word MaybeTopModule_21,
  MR_Word MaybeTimestampMap_22,
  MR_Word STATE_VARIABLE_HLDS_0_32,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_33,
  MR_Word * STATE_VARIABLE_DumpInfo_34,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_35,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_36);

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

static void MR_CALL 
top_level__mercury_compile_augment__burdened_module_to_module_name_2_p_0(
  MR_Word BurdenedModule_3,
  MR_Word * ModuleName_4);

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_2(
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
top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_1[4][2];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_2[1][1];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_3[3][5];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_4[1][17];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_5[3][3];

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_6[1][10];




static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 13U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
};

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_written_specs_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_written_specs_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_5[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[2])),
    ((MR_Box) (top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[2])),
    ((MR_Box) (top_level__mercury_compile_augment__process_augmented_module_after_front_end_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_augment_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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

static MR_bool MR_CALL 
top_level__mercury_compile_augment__IntroducedFrom__pred__augment_and_process_source_file__110__1_2_p_0(
  MR_Word ModulesToRecompile_38,
  MR_Word LambdaHeadVar__1_55)
{
  MR_bool succeeded;
  MR_Word PTMS_42 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_55, 1))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, PTMS_42, 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_56)), ModulesToRecompile_38);
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_37,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_38)
{
  MR_bool succeeded;
  MR_Word Baggage0_26 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_21, 0))));
  MR_Word ParseTreeModuleSrc_27 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_21, 1))));
  MR_Word NoExportWarnSpecs_28;
  MR_Word AugCompUnit_29;
  MR_Word Baggage_30;
  MR_Word BaggageErrors_31;
  MR_Word BaggageErrSpecs_32;
  MR_Word BaggageWarnSpecs_33;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_1_41;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_42;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_2_44;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_3_45;
  MR_Word Var_46;

  parse_tree__check_module_interface__check_module_interface_for_no_exports_3_p_0(Globals_17, ParseTreeModuleSrc_27, &NoExportWarnSpecs_28);
  parse_tree__error_util__add_to_be_written_warn_specs_3_p_0(NoExportWarnSpecs_28, STATE_VARIABLE_MaybeWrittenSpecs_0_37, &STATE_VARIABLE_MaybeWrittenSpecs_1_41);
  parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0(ProgressStream_15, Globals_17, MaybeTimestamp_20, ParseTreeModuleSrc_27, &AugCompUnit_29, Baggage0_26, &Baggage_30, STATE_VARIABLE_HaveParseTreeMaps_0_35, &STATE_VARIABLE_HaveParseTreeMaps_1_42);
  BaggageErrors_31 = ((MR_Word) ((MR_hl_field(0, Baggage_30, 7))));
  parse_tree__parse_error__get_read_module_specs_3_p_0(BaggageErrors_31, &BaggageErrSpecs_32, &BaggageWarnSpecs_33);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(BaggageErrSpecs_32, STATE_VARIABLE_MaybeWrittenSpecs_1_41, &STATE_VARIABLE_MaybeWrittenSpecs_2_44);
  parse_tree__error_util__add_to_be_written_warn_specs_3_p_0(BaggageWarnSpecs_33, STATE_VARIABLE_MaybeWrittenSpecs_2_44, &STATE_VARIABLE_MaybeWrittenSpecs_3_45);
  Var_46 = ((MR_Word) ((MR_hl_field(0, BaggageErrors_31, 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_46);
  if (succeeded)
  {
    MR_Word HLDS1_60;
    MR_Word QualInfo_61;
    MR_Word MaybeTimestampMap_62;
    MR_Word MakeHldsResult_63;
    MR_Word Verbose_64;
    MR_Word InvalidTypeSpecs_65;
    MR_Word InvalidInstModeSpecs_66;
    MR_Word OptBlockingSpecs_67;
    MR_Word ExpandSpecs_68;
    MR_Word EventSetSpecs_69;
    MR_Word BlockingTypeSpecs_70;
    MR_Word STATE_VARIABLE_DumpInfo_1_81;
    MR_Word STATE_VARIABLE_MaybeWrittenSpecs_1_82;
    MR_Word STATE_VARIABLE_MaybeWrittenSpecs_2_85;
    MR_Word Var_87;

    top_level__mercury_compile_make_hlds__make_hlds_pass_19_p_0(ProgressStream_15, ErrorStream_16, Globals_17, OpModeAugment_18, InvokedByMmcMake_19, Baggage_30, AugCompUnit_29, &HLDS1_60, &QualInfo_61, &MaybeTimestampMap_62, &MakeHldsResult_63, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_DumpInfo_1_81, STATE_VARIABLE_HaveParseTreeMaps_1_42, STATE_VARIABLE_HaveParseTreeMaps_36, STATE_VARIABLE_MaybeWrittenSpecs_3_45, &STATE_VARIABLE_MaybeWrittenSpecs_1_82);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 131, &Verbose_64);
    parse_tree__write_error_spec__maybe_write_not_yet_written_specs_7_p_0(ErrorStream_16, Globals_17, Verbose_64, STATE_VARIABLE_MaybeWrittenSpecs_1_82, &STATE_VARIABLE_MaybeWrittenSpecs_2_85);
    InvalidTypeSpecs_65 = ((MR_Word) ((MR_hl_field(0, MakeHldsResult_63, 0))));
    InvalidInstModeSpecs_66 = ((MR_Word) ((MR_hl_field(0, MakeHldsResult_63, 1))));
    OptBlockingSpecs_67 = ((MR_Word) ((MR_hl_field(0, MakeHldsResult_63, 2))));
    ExpandSpecs_68 = ((MR_Word) ((MR_hl_field(0, MakeHldsResult_63, 3))));
    EventSetSpecs_69 = ((MR_Word) ((MR_hl_field(0, MakeHldsResult_63, 4))));
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ExpandSpecs_68, EventSetSpecs_69);
    BlockingTypeSpecs_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InvalidTypeSpecs_65, Var_87);
    if ((BlockingTypeSpecs_70 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SpecsSoFar_73;
      MR_Word SemanticErrors_74;
      MR_Word OptBlockingErrors_75;
      MR_Word PreHLDSErrors_76;
      MR_Word FrontEndErrors_77;
      MR_Word HLDS20_78;
      MR_Integer ExitStatus_79;
      MR_Word Var_91;
      MR_Word STATE_VARIABLE_DumpInfo_2_92;
      MR_Word STATE_VARIABLE_MaybeWrittenSpecs_3_93;
      MR_Word SpecsSofar_80;
      MR_Word Var_96;

      SpecsSoFar_73 = parse_tree__error_util__maybe_written_specs_to_specs_1_f_0(STATE_VARIABLE_MaybeWrittenSpecs_2_85);
      SemanticErrors_74 = parse_tree__error_util__contains_errors_2_f_0(Globals_17, SpecsSoFar_73);
      Var_91 = (MR_Word) (OptBlockingSpecs_67);
      OptBlockingErrors_75 = parse_tree__error_util__contains_errors_2_f_0(Globals_17, Var_91);
      mercury__bool__or_3_p_0(SemanticErrors_74, OptBlockingErrors_75, &PreHLDSErrors_76);
      top_level__mercury_compile_front_end__frontend_pass_15_p_0(ProgressStream_15, ErrorStream_16, OpModeAugment_18, QualInfo_61, InvalidInstModeSpecs_66, PreHLDSErrors_76, &FrontEndErrors_77, HLDS1_60, &HLDS20_78, STATE_VARIABLE_DumpInfo_1_81, &STATE_VARIABLE_DumpInfo_2_92, STATE_VARIABLE_MaybeWrittenSpecs_2_85, &STATE_VARIABLE_MaybeWrittenSpecs_3_93);
      mercury__io__get_exit_status_3_p_0(&ExitStatus_79);
      succeeded = (PreHLDSErrors_76 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (FrontEndErrors_77 == (MR_Integer) 0);
        if (succeeded)
        {
          SpecsSofar_80 = parse_tree__error_util__maybe_written_specs_to_specs_1_f_0(STATE_VARIABLE_MaybeWrittenSpecs_3_93);
          Var_96 = parse_tree__error_util__contains_errors_2_f_0(Globals_17, SpecsSofar_80);
          succeeded = (Var_96 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (ExitStatus_79 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_Word Var_34;

        top_level__mercury_compile_augment__process_augmented_module_after_front_end_14_p_0(ProgressStream_15, ErrorStream_16, Globals_17, OpModeAugment_18, Baggage_30, MaybeTimestampMap_62, HLDS20_78, ExtraObjFiles_22, STATE_VARIABLE_DumpInfo_2_92, &Var_34, STATE_VARIABLE_MaybeWrittenSpecs_3_93, STATE_VARIABLE_MaybeWrittenSpecs_38);
      }
      else
      {
        succeeded = (ExitStatus_79 == (MR_Integer) 0);
        if (succeeded)
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_MaybeWrittenSpecs_38 = STATE_VARIABLE_MaybeWrittenSpecs_3_93;
      }
    }
    else
    {
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_64, (MR_String) "% Program contains undefined type error(s).\n");
      *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *STATE_VARIABLE_MaybeWrittenSpecs_38 = STATE_VARIABLE_MaybeWrittenSpecs_2_85;
    }
  }
  else
  {
    *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeWrittenSpecs_38 = STATE_VARIABLE_MaybeWrittenSpecs_3_45;
    *STATE_VARIABLE_HaveParseTreeMaps_36 = STATE_VARIABLE_HaveParseTreeMaps_1_42;
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_augment__process_augmented_module_after_front_end_14_p_0_1(
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
top_level__mercury_compile_augment__process_augmented_module_after_front_end_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeAugment_18,
  MR_Word Baggage_19,
  MR_Word MaybeTimestampMap_20,
  MR_Word HLDS20_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_DumpInfo_0_37,
  MR_Word * STATE_VARIABLE_DumpInfo_38,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_39,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_40)
{
  MR_bool succeeded;
  MR_Word Verbose_26;
  MR_Word Stats_27;
  MR_Word HLDS21_28;
  MR_Word Globals_69;
  MR_Word ShowDepGraph_70;

  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 131, &Verbose_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 134, &Stats_27);
  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS20_21, &Globals_69);
  libs__globals__lookup_bool_option_3_p_0(Globals_69, (MR_Integer) 270, &ShowDepGraph_70);
  switch (ShowDepGraph_70) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HLDS21_28 = HLDS20_21;
      break;
    case (MR_Integer) 1:
      {
        MR_String DepGraphStr_71;
        MR_Word ModuleName_72;
        MR_String DepGraphFileName_73;
        MR_Word _Succeeded_74;

        hlds__hlds_dependency_graph__dependency_graph_to_string_3_p_0(&DepGraphStr_71, HLDS20_21, &HLDS21_28);
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS21_28, &ModuleName_72);
        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 3, ModuleName_72, &DepGraphFileName_73);
        libs__file_util__write_string_to_file_8_p_0(ProgressStream_15, Globals_69, (MR_String) "Writing dependency graph", DepGraphFileName_73, DepGraphStr_71, &_Succeeded_74);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_15, Stats_27);
      }
      break;
  }
  switch (MR_tag((MR_Word) OpModeAugment_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_0_37;
            *STATE_VARIABLE_MaybeWrittenSpecs_40 = STATE_VARIABLE_MaybeWrittenSpecs_0_39;
          }
          break;
        case (MR_Integer) 1:
          {
            top_level__mercury_compile_middle_passes__output_trans_opt_file_8_p_0(ProgressStream_15, HLDS21_28, STATE_VARIABLE_DumpInfo_0_37, STATE_VARIABLE_DumpInfo_38, STATE_VARIABLE_MaybeWrittenSpecs_0_39, STATE_VARIABLE_MaybeWrittenSpecs_40);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word AnalysisSpecs_29;
            MR_Word HLDS22_30;

            top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0(ProgressStream_15, Globals_17, Verbose_26, Stats_27, &AnalysisSpecs_29, HLDS21_28, &HLDS22_30);
            if ((AnalysisSpecs_29 == (MR_Word) ((MR_Unsigned) 0U)))
              top_level__mercury_compile_middle_passes__output_analysis_file_8_p_0(ProgressStream_15, HLDS22_30, STATE_VARIABLE_DumpInfo_0_37, STATE_VARIABLE_DumpInfo_38, STATE_VARIABLE_MaybeWrittenSpecs_0_39, STATE_VARIABLE_MaybeWrittenSpecs_40);
            else
            {
              parse_tree__error_util__add_to_be_written_specs_3_p_0(AnalysisSpecs_29, STATE_VARIABLE_MaybeWrittenSpecs_0_39, STATE_VARIABLE_MaybeWrittenSpecs_40);
              *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_0_37;
            }
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            check_hlds__xml_documentation__xml_documentation_4_p_0(ProgressStream_15, HLDS21_28);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_0_37;
            *STATE_VARIABLE_MaybeWrittenSpecs_40 = STATE_VARIABLE_MaybeWrittenSpecs_0_39;
          }
          break;
        case (MR_Integer) 4:
          {
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_0_37;
            *STATE_VARIABLE_MaybeWrittenSpecs_40 = STATE_VARIABLE_MaybeWrittenSpecs_0_39;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OpModeFrontAndMiddle_33 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_18, 0))) & (MR_Integer) 3);
        MR_Word AnalysisSpecs_60;
        MR_Word HLDS22_61;
        MR_Word IntermodAnalysis_79;

        libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 436, &IntermodAnalysis_79);
        switch (IntermodAnalysis_79) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              AnalysisSpecs_60 = (MR_Word) ((MR_Unsigned) 0U);
              HLDS22_61 = HLDS21_28;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AllAvailModules_81;
              MR_Word LocalModulesList_82;
              MR_Word SymNames_83;
              MR_Word LocalModuleNames_84;
              MR_Word AnalysisInfo0_85;
              MR_Word AnalysisInfo_86;

              libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_26, (MR_String) "% Preparing for intermodule analysis...\n");
              hlds__hlds_module__module_info_get_all_avail_modules_2_p_0(HLDS21_28, &AllAvailModules_81);
              libs__globals__lookup_accumulating_option_3_p_0(Globals_17, (MR_Integer) 790, &LocalModulesList_82);
              SymNames_83 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_5[2]), LocalModulesList_82);
              LocalModuleNames_84 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_83);
              hlds__hlds_module__module_info_get_analysis_info_2_p_0(HLDS21_28, &AnalysisInfo0_85);
              analysis__operations__prepare_intermodule_analysis_9_p_0(ProgressStream_15, Globals_17, AllAvailModules_81, LocalModuleNames_84, &AnalysisSpecs_60, AnalysisInfo0_85, &AnalysisInfo_86);
              hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_86, HLDS21_28, &HLDS22_61);
              libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_26, (MR_String) "% done.\n");
              libs__file_util__maybe_report_stats_4_p_0(ProgressStream_15, Stats_27);
            }
            break;
        }
        if ((AnalysisSpecs_60 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeTopModule_34 = ((MR_Word) ((MR_hl_field(0, Baggage_19, 3))));
          MR_Word ModuleName_96;
          MR_String UsageFileName_97;
          MR_Word FrontEndSpecs_100;
          MR_Word FrontEndErrors_101;
          MR_Integer ExitStatus_102;
          MR_Word STATE_VARIABLE_HLDS_1_104;
          MR_Word STATE_VARIABLE_DumpInfo_1_105;
          MR_Word STATE_VARIABLE_MaybeWrittenSpecs_1_106;
          MR_String _UsageFileNameProposed_98;
          MR_Word Var_99;

          top_level__mercury_compile_middle_passes__middle_pass_11_p_0(ProgressStream_15, ErrorStream_16, OpModeFrontAndMiddle_33, HLDS22_61, &STATE_VARIABLE_HLDS_1_104, STATE_VARIABLE_DumpInfo_0_37, &STATE_VARIABLE_DumpInfo_1_105, STATE_VARIABLE_MaybeWrittenSpecs_0_39, &STATE_VARIABLE_MaybeWrittenSpecs_1_106);
          hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_1_104, &ModuleName_96);
          parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_augment.after_front_end_passes\'/14", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[1])), ModuleName_96, &UsageFileName_97, &_UsageFileNameProposed_98);
          mercury__io__file__remove_file_4_p_0(UsageFileName_97, &Var_99);
          FrontEndSpecs_100 = parse_tree__error_util__maybe_written_specs_to_specs_1_f_0(STATE_VARIABLE_MaybeWrittenSpecs_1_106);
          FrontEndErrors_101 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_17, FrontEndSpecs_100);
          mercury__io__get_exit_status_3_p_0(&ExitStatus_102);
          succeeded = (FrontEndErrors_101 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (ExitStatus_102 == (MR_Integer) 0);
          if (succeeded)
            switch (OpModeFrontAndMiddle_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_1_105;
                  *STATE_VARIABLE_MaybeWrittenSpecs_40 = STATE_VARIABLE_MaybeWrittenSpecs_1_106;
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 1:
              case (MR_Integer) 3:
                {
                  MR_Word OpModeCodeGen_103 = (MR_Word) (OpModeFrontAndMiddle_33);

                  top_level__mercury_compile_augment__choose_and_execute_backend_passes_15_p_0(ProgressStream_15, ErrorStream_16, Globals_17, OpModeCodeGen_103, ModuleName_96, MaybeTopModule_34, MaybeTimestampMap_20, STATE_VARIABLE_HLDS_1_104, ExtraObjFiles_22, STATE_VARIABLE_DumpInfo_1_105, STATE_VARIABLE_DumpInfo_38, STATE_VARIABLE_MaybeWrittenSpecs_1_106, STATE_VARIABLE_MaybeWrittenSpecs_40);
                }
                break;
            }
          else
          {
            succeeded = (ExitStatus_102 == (MR_Integer) 0);
            if (succeeded)
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_MaybeWrittenSpecs_40 = STATE_VARIABLE_MaybeWrittenSpecs_1_106;
            *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_1_105;
          }
        }
        else
        {
          parse_tree__error_util__add_to_be_written_specs_3_p_0(AnalysisSpecs_60, STATE_VARIABLE_MaybeWrittenSpecs_0_39, STATE_VARIABLE_MaybeWrittenSpecs_40);
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_0_37;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_augment__choose_and_execute_backend_passes_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__5_5;

  top_level__mercury_compile_llds_back_end__fact_table_file_to_obj_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), &conv1_HeadVar__4_4, &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_augment__choose_and_execute_backend_passes_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeCodeGen_19,
  MR_Word ModuleName_20,
  MR_Word MaybeTopModule_21,
  MR_Word MaybeTimestampMap_22,
  MR_Word STATE_VARIABLE_HLDS_0_32,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_33,
  MR_Word * STATE_VARIABLE_DumpInfo_34,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_35,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_36)
{
  MR_bool succeeded;
  MR_Word Target_28;
  MR_Word Succeeded_30;
  MR_Word STATE_VARIABLE_HLDS_1_51;

  libs__globals__get_target_2_p_0(Globals_18, &Target_28);
  switch (Target_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word HighLevelCode_31;

        backend_libs__export__output_mh_header_file_4_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_32);
        libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 55, &HighLevelCode_31);
        switch (HighLevelCode_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GlobalData_52;
              MR_Word LLDS_53;
              MR_Word TargetCodeSucceeded_54;

              top_level__mercury_compile_llds_back_end__hlds_to_llds_12_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_0_32, &STATE_VARIABLE_HLDS_1_51, &GlobalData_52, &LLDS_53, STATE_VARIABLE_DumpInfo_0_33, STATE_VARIABLE_DumpInfo_34, STATE_VARIABLE_MaybeWrittenSpecs_0_35, STATE_VARIABLE_MaybeWrittenSpecs_36);
              top_level__mercury_compile_llds_back_end__llds_to_c_7_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_1_51, GlobalData_52, LLDS_53, &TargetCodeSucceeded_54);
              switch (TargetCodeSucceeded_54) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Succeeded_30 = (MR_Integer) 0;
                    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  switch (OpModeCodeGen_19) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        MR_Word CompileSucceeded_55;
                        MR_Word FactTableBaseFiles_56;
                        MR_Word FactTableCompileSucceededs_57;
                        MR_Word Var_61;
                        MR_Word Var_63;
                        MR_Box conv2_STATE_VARIABLE_IO_4_62;

                        top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(ProgressStream_16, Globals_18, ModuleName_20, &CompileSucceeded_55);
                        hlds__hlds_module__module_info_get_fact_table_file_names_2_p_0(STATE_VARIABLE_HLDS_1_51, &FactTableBaseFiles_56);
                        {
                          Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_61, 0) = ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_6[0]));
                          MR_hl_field(0, Var_61, 1) = ((MR_Box) (top_level__mercury_compile_augment__choose_and_execute_backend_passes_15_p_0_1));
                          MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(0, Var_61, 3) = ((MR_Box) (ProgressStream_16));
                          MR_hl_field(0, Var_61, 4) = ((MR_Box) (Globals_18));
                        }
                        mercury__list__map2_foldl_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, FactTableBaseFiles_56, ExtraObjFiles_24, &FactTableCompileSucceededs_57, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_4_62);
                        {
                          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_63, 0) = ((MR_Box) (CompileSucceeded_55));
                          MR_hl_field(1, Var_63, 1) = ((MR_Box) (FactTableCompileSucceededs_57));
                        }
                        Succeeded_30 = libs__maybe_util__and_list_1_f_0(Var_63);
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_30);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Succeeded_30 = (MR_Integer) 1;
                        *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MLDS_67;
              MR_Word TargetCodeSucceeded_68;

              backend_libs__export__output_mh_header_file_4_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_32);
              top_level__mercury_compile_mlds_back_end__hlds_to_mlds_9_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_32, &MLDS_67, STATE_VARIABLE_DumpInfo_0_33, STATE_VARIABLE_DumpInfo_34, STATE_VARIABLE_MaybeWrittenSpecs_0_35, STATE_VARIABLE_MaybeWrittenSpecs_36);
              top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_6_p_0(ProgressStream_16, Globals_18, MLDS_67, &TargetCodeSucceeded_68);
              switch (OpModeCodeGen_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  switch (TargetCodeSucceeded_68) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Succeeded_30 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word TargetType_69;
                        MR_Word PIC_70;
                        MR_Word ObjExt_71;
                        MR_Word ExtObj_74;
                        MR_String C_File_75;
                        MR_String O_File_77;
                        MR_Word Var_72;
                        MR_String _C_FileProposed_76;
                        MR_String _O_FileProposed_78;

                        backend_libs__link_target_code_c__get_linked_target_type_for_c_2_p_0(Globals_18, &TargetType_69);
                        backend_libs__link_target_code_c__get_object_code_type_3_p_0(Globals_18, TargetType_69, &PIC_70);
                        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_70, &ObjExt_71, &Var_72);
                        {
                          ExtObj_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, ExtObj_74, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(3, ExtObj_74, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_71));
                        }
                        parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_augment.execute_mlds_c_backend\'/12", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[3])), ModuleName_20, &C_File_75, &_C_FileProposed_76);
                        parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_augment.execute_mlds_c_backend\'/12", ExtObj_74, ModuleName_20, &O_File_77, &_O_FileProposed_78);
                        backend_libs__compile_target_code__do_compile_c_file_8_p_0(ProgressStream_16, Globals_18, PIC_70, C_File_75, O_File_77, &Succeeded_30);
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_30);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  Succeeded_30 = TargetCodeSucceeded_68;
                  break;
              }
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HLDS_1_51 = STATE_VARIABLE_HLDS_0_32;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MLDS_29;

        top_level__mercury_compile_mlds_back_end__hlds_to_mlds_9_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_32, &MLDS_29, STATE_VARIABLE_DumpInfo_0_33, STATE_VARIABLE_DumpInfo_34, STATE_VARIABLE_MaybeWrittenSpecs_0_35, STATE_VARIABLE_MaybeWrittenSpecs_36);
        top_level__mercury_compile_mlds_back_end__mlds_to_csharp_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_32, MLDS_29, &Succeeded_30);
        *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_HLDS_1_51 = STATE_VARIABLE_HLDS_0_32;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MLDS_87;
        MR_Word TargetCodeSucceeded_88;

        top_level__mercury_compile_mlds_back_end__hlds_to_mlds_9_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_32, &MLDS_87, STATE_VARIABLE_DumpInfo_0_33, STATE_VARIABLE_DumpInfo_34, STATE_VARIABLE_MaybeWrittenSpecs_0_35, STATE_VARIABLE_MaybeWrittenSpecs_36);
        top_level__mercury_compile_mlds_back_end__mlds_to_java_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_32, MLDS_87, &TargetCodeSucceeded_88);
        switch (OpModeCodeGen_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            switch (TargetCodeSucceeded_88) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Succeeded_30 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_String JavaFile_90;
                  MR_String _JavaFileProposed_91;

                  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_augment.execute_mlds_java_backend\'/12", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[2])), ModuleName_20, &JavaFile_90, &_JavaFileProposed_91);
                  backend_libs__compile_target_code__compile_java_files_7_p_0(ProgressStream_16, Globals_18, JavaFile_90, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_30);
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_30);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            Succeeded_30 = TargetCodeSucceeded_88;
            break;
        }
        *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_HLDS_1_51 = STATE_VARIABLE_HLDS_0_32;
      }
      break;
  }
  switch (Succeeded_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeRecompInfo_98;
        MR_String TimestampFile_102;
        MR_Word RecompInfo_99;
        MR_Word TimestampMap_100;
        MR_Word _Succeeded_103;

        hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_1_51, &MaybeRecompInfo_98);
        succeeded = (MaybeRecompInfo_98 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RecompInfo_99 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo_98, 0))));
          succeeded = (MaybeTimestampMap_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TimestampMap_100 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_22, 0))));
        }
        if (succeeded)
        {
          MR_Word UsedFileContents_101;

          recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_1_51, RecompInfo_99, MaybeTopModule_21, TimestampMap_100, &UsedFileContents_101);
          recompilation__used_file__write_usage_file_5_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_1_51, UsedFileContents_101);
        }
        parse_tree__file_names__module_name_to_target_timestamp_file_name_create_dirs_5_p_0(Globals_18, ModuleName_20, &TimestampFile_102);
        parse_tree__module_cmds__touch_file_datestamp_6_p_0(ProgressStream_16, Globals_18, TimestampFile_102, &_Succeeded_103);
      }
      break;
  }
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
  MR_Word AllAvailModules_17;
  MR_Word LocalModulesList_18;
  MR_Word SymNames_19;
  MR_Word LocalModuleNames_20;
  MR_Word AnalysisInfo0_21;
  MR_Word AnalysisInfo_22;

  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Preparing for intermodule analysis...\n");
  hlds__hlds_module__module_info_get_all_avail_modules_2_p_0(STATE_VARIABLE_HLDS_0_23, &AllAvailModules_17);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 790, &LocalModulesList_18);
  SymNames_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_5[1]), LocalModulesList_18);
  LocalModuleNames_20 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_19);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_23, &AnalysisInfo0_21);
  analysis__operations__prepare_intermodule_analysis_9_p_0(ProgressStream_10, Globals_11, AllAvailModules_17, LocalModuleNames_20, Specs_14, AnalysisInfo0_21, &AnalysisInfo_22);
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_22, STATE_VARIABLE_HLDS_0_23, STATE_VARIABLE_HLDS_24);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
}

static void MR_CALL 
top_level__mercury_compile_augment__burdened_module_to_module_name_2_p_0(
  MR_Word BurdenedModule_3,
  MR_Word * ModuleName_4)
{
  MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_3, 1))));

  *ModuleName_4 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 0))));
}

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_ModuleName_4;

  top_level__mercury_compile_augment__burdened_module_to_module_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_ModuleName_4);
  *wrapper_arg_2 = ((MR_Box) (conv6_ModuleName_4));
}

static void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_2(
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
  MR_Word conv1_STATE_VARIABLE_HaveParseTreeMaps_36;
  MR_Word conv0_STATE_VARIABLE_MaybeWrittenSpecs_38;

  top_level__mercury_compile_augment__augment_and_process_module_14_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), &conv2_ExtraObjFiles_22, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_HaveParseTreeMaps_36, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_MaybeWrittenSpecs_38);
  *wrapper_arg_2 = ((MR_Box) (conv2_ExtraObjFiles_22));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_HaveParseTreeMaps_36));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_MaybeWrittenSpecs_38));
}

static MR_bool MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_augment__IntroducedFrom__pred__augment_and_process_source_file__110__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ErrorStream_20,
  MR_Word Globals_21,
  MR_Word OpModeAugment_22,
  MR_Word InvokedByMmcMake_23,
  MR_String SourceFileName_24,
  MR_Word MaybeTimestamp_25,
  MR_Word ReadModuleErrors_26,
  MR_Word ParseTreeSrc_27,
  MR_Word MaybeModulesToRecompile_28,
  MR_Word * ModulesToLink_29,
  MR_Word * ExtraObjFiles_30,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_47,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_48,
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_0_49,
  MR_Word * STATE_VARIABLE_MaybeWrittenSpecs_50)
{
  MR_bool succeeded;
  MR_Word ModuleName_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_27, 0))));
  MR_Word SplitErrSpecs_35;
  MR_Word SplitWarnSpecs_36;
  MR_Word BurdenedModules0_37;
  MR_Word BurdenedModulesToRecompile_43;
  MR_Word TraceProf_44;
  MR_Word GlobalsToUse_46;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_1_53;
  MR_Word STATE_VARIABLE_MaybeWrittenSpecs_2_54;
  MR_Word ExtraObjFileLists_108;
  MR_Word Var_109;
  MR_Word Var_106;
  MR_Box conv5_STATE_VARIABLE_HaveParseTreeMaps_48;
  MR_Box conv4_STATE_VARIABLE_MaybeWrittenSpecs_50;
  MR_Box conv3_STATE_VARIABLE_IO_52;

  parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_8_p_0(Globals_21, SourceFileName_24, ReadModuleErrors_26, MaybeTimestamp_25, ParseTreeSrc_27, &SplitErrSpecs_35, &SplitWarnSpecs_36, &BurdenedModules0_37);
  parse_tree__error_util__add_to_be_written_err_specs_3_p_0(SplitErrSpecs_35, STATE_VARIABLE_MaybeWrittenSpecs_0_49, &STATE_VARIABLE_MaybeWrittenSpecs_1_53);
  parse_tree__error_util__add_to_be_written_warn_specs_3_p_0(SplitWarnSpecs_36, STATE_VARIABLE_MaybeWrittenSpecs_1_53, &STATE_VARIABLE_MaybeWrittenSpecs_2_54);
  if ((MaybeModulesToRecompile_28 == (MR_Word) ((MR_Unsigned) 0U)))
    BurdenedModulesToRecompile_43 = BurdenedModules0_37;
  else
  {
    MR_Word ModulesToRecompile_38 = ((MR_Word) ((MR_hl_field(1, MaybeModulesToRecompile_28, 0))));
    MR_Word ToRecompile_39;

    {
      ToRecompile_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ToRecompile_39, 0) = ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[0]));
      MR_hl_field(0, ToRecompile_39, 1) = ((MR_Box) (top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_1));
      MR_hl_field(0, ToRecompile_39, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ToRecompile_39, 3) = ((MR_Box) (ModulesToRecompile_38));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), ToRecompile_39, BurdenedModules0_37, &BurdenedModulesToRecompile_43);
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 280, &TraceProf_44);
  succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_34);
  if (succeeded)
  {
    Var_106 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_34, Var_106);
    if (succeeded)
      succeeded = (TraceProf_44 == (MR_Integer) 1);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word Globals1_45;

    libs__globals__set_option_4_p_0((MR_Integer) 761, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_augment_scalar_common_2[0])), Globals_21, &Globals1_45);
    libs__globals__set_trace_level_none_2_p_0(Globals1_45, &GlobalsToUse_46);
  }
  else
    GlobalsToUse_46 = Globals_21;
  {
    Var_109 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_109, 0) = ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_4[0]));
    MR_hl_field(0, Var_109, 1) = ((MR_Box) (top_level__mercury_compile_augment__augment_and_process_source_file_18_p_0_2));
    MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_109, 3) = ((MR_Box) (ProgressStream_19));
    MR_hl_field(0, Var_109, 4) = ((MR_Box) (ErrorStream_20));
    MR_hl_field(0, Var_109, 5) = ((MR_Box) (GlobalsToUse_46));
    MR_hl_field(0, Var_109, 6) = ((MR_Box) (OpModeAugment_22));
    MR_hl_field(0, Var_109, 7) = ((MR_Box) (InvokedByMmcMake_23));
    MR_hl_field(0, Var_109, 8) = ((MR_Box) (MaybeTimestamp_25));
  }
  mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_written_specs_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_109, BurdenedModulesToRecompile_43, &ExtraObjFileLists_108, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_0_47)), &conv5_STATE_VARIABLE_HaveParseTreeMaps_48, ((MR_Box) (STATE_VARIABLE_MaybeWrittenSpecs_2_54)), &conv4_STATE_VARIABLE_MaybeWrittenSpecs_50, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_52);
  *STATE_VARIABLE_HaveParseTreeMaps_48 = ((MR_Word) (conv5_STATE_VARIABLE_HaveParseTreeMaps_48));
  *STATE_VARIABLE_MaybeWrittenSpecs_50 = ((MR_Word) (conv4_STATE_VARIABLE_MaybeWrittenSpecs_50));
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_5[0]), BurdenedModulesToRecompile_43, ModulesToLink_29);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_108, ExtraObjFiles_30);
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
