/*
** Automatically generated from `mercury_compile_augment.m'
** by the Mercury compiler,
** version rotd-2025-08-07
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
#include "backend_libs.link_target_code.mih"
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
#include "parse_tree.check_module_interface.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.grab_modules.mih"
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
#include "parse_tree.prog_parse_tree.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"
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

static MR_Box MR_CALL 
top_level__mercury_compile_augment__process_augmented_module_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_augment__process_augmented_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals_19,
  MR_Word OpModeAugment_20,
  MR_Word InvokedByMmcMake_21,
  MR_Word Baggage_22,
  MR_Word AugCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_49,
  MR_Word * STATE_VARIABLE_DumpInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_53,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_54);

static void MR_CALL 
top_level__mercury_compile_augment__after_front_end_passes_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeFrontAndMiddle_18,
  MR_Word MaybeTopModule_19,
  MR_Word MaybeTimestampMap_20,
  MR_Word STATE_VARIABLE_HLDS_0_34,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36,
  MR_Word STATE_VARIABLE_DumpInfo_0_37,
  MR_Word * STATE_VARIABLE_DumpInfo_38);

static void MR_CALL 
top_level__mercury_compile_augment__choose_and_execute_backend_passes_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeCodeGen_19,
  MR_Word ModuleName_20,
  MR_Word MaybeTopModule_21,
  MR_Word MaybeTimestampMap_22,
  MR_Word STATE_VARIABLE_HLDS_0_52,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54,
  MR_Word STATE_VARIABLE_DumpInfo_0_55,
  MR_Word * STATE_VARIABLE_DumpInfo_56);

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
    ((MR_Box) (top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_augment_scalar_common_3[2])),
    ((MR_Box) (top_level__mercury_compile_augment__process_augmented_module_16_p_0_1)),
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
  MR_Word PTMS_39 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_50, 1))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, PTMS_39, 0))));

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
  MR_Word Baggage0_26 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_21, 0))));
  MR_Word ParseTreeModuleSrc_27 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_21, 1))));
  MR_Word AugCompUnit_28;
  MR_Word Baggage_29;
  MR_Word Errors_30;
  MR_Word STATE_VARIABLE_Specs_1_38;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_39;
  MR_Word STATE_VARIABLE_Specs_2_41;
  MR_Word Var_42;
  MR_Word Var_43;

  parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(Globals_17, ParseTreeModuleSrc_27, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_1_38);
  parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0(ProgressStream_15, Globals_17, MaybeTimestamp_20, ParseTreeModuleSrc_27, &AugCompUnit_28, Baggage0_26, &Baggage_29, STATE_VARIABLE_HaveParseTreeMaps_0_34, &STATE_VARIABLE_HaveParseTreeMaps_1_39);
  Errors_30 = ((MR_Word) ((MR_hl_field(0, Baggage_29, 7))));
  Var_42 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_30);
  STATE_VARIABLE_Specs_2_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_42, STATE_VARIABLE_Specs_1_38);
  Var_43 = ((MR_Word) ((MR_hl_field(0, Errors_30, 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_43);
  if (succeeded)
  {
    MR_Word Var_31;

    top_level__mercury_compile_augment__process_augmented_module_16_p_0(ProgressStream_15, ErrorStream_16, Globals_17, OpModeAugment_18, InvokedByMmcMake_19, Baggage_29, AugCompUnit_28, ExtraObjFiles_22, (MR_Word) ((MR_Unsigned) 0U), &Var_31, STATE_VARIABLE_Specs_2_41, STATE_VARIABLE_Specs_33, STATE_VARIABLE_HaveParseTreeMaps_1_39, STATE_VARIABLE_HaveParseTreeMaps_35);
  }
  else
  {
    *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveParseTreeMaps_35 = STATE_VARIABLE_HaveParseTreeMaps_1_39;
    *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_2_41;
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_augment__process_augmented_module_16_p_0_1(
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
top_level__mercury_compile_augment__process_augmented_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals_19,
  MR_Word OpModeAugment_20,
  MR_Word InvokedByMmcMake_21,
  MR_Word Baggage_22,
  MR_Word AugCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_49,
  MR_Word * STATE_VARIABLE_DumpInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_53,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_54)
{
  MR_bool succeeded;
  MR_Word HLDS1_29;
  MR_Word QualInfo_30;
  MR_Word MaybeTimestampMap_31;
  MR_Word UndefTypes_32;
  MR_Word UndefModes_33;
  MR_Word PreHLDSErrors_34;
  MR_Word FrontEndErrors_35;
  MR_Word HLDS20_36;
  MR_Integer ExitStatus_37;
  MR_Word STATE_VARIABLE_DumpInfo_1_57;
  MR_Word STATE_VARIABLE_Specs_1_58;
  MR_Word STATE_VARIABLE_DumpInfo_2_61;
  MR_Word STATE_VARIABLE_Specs_2_62;
  MR_Word Var_65;

  top_level__mercury_compile_make_hlds__make_hlds_pass_21_p_0(ProgressStream_17, ErrorStream_18, Globals_19, OpModeAugment_20, InvokedByMmcMake_21, Baggage_22, AugCompUnit_23, &HLDS1_29, &QualInfo_30, &MaybeTimestampMap_31, &UndefTypes_32, &UndefModes_33, &PreHLDSErrors_34, STATE_VARIABLE_DumpInfo_0_49, &STATE_VARIABLE_DumpInfo_1_57, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_1_58, STATE_VARIABLE_HaveParseTreeMaps_0_53, STATE_VARIABLE_HaveParseTreeMaps_54);
  top_level__mercury_compile_front_end__frontend_pass_16_p_0(ProgressStream_17, ErrorStream_18, OpModeAugment_20, QualInfo_30, UndefTypes_32, UndefModes_33, PreHLDSErrors_34, &FrontEndErrors_35, HLDS1_29, &HLDS20_36, STATE_VARIABLE_DumpInfo_1_57, &STATE_VARIABLE_DumpInfo_2_61, STATE_VARIABLE_Specs_1_58, &STATE_VARIABLE_Specs_2_62);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_37);
  succeeded = (PreHLDSErrors_34 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (FrontEndErrors_35 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_65 = parse_tree__error_util__contains_errors_2_f_0(Globals_19, STATE_VARIABLE_Specs_2_62);
      succeeded = (Var_65 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ExitStatus_37 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word Verbose_38;
    MR_Word Stats_39;
    MR_Word HLDS21_40;
    MR_Word Globals_96;
    MR_Word ShowDepGraph_97;

    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 131, &Verbose_38);
    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 133, &Stats_39);
    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS20_36, &Globals_96);
    libs__globals__lookup_bool_option_3_p_0(Globals_96, (MR_Integer) 249, &ShowDepGraph_97);
    switch (ShowDepGraph_97) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HLDS21_40 = HLDS20_36;
        break;
      case (MR_Integer) 1:
        {
          MR_String DepGraphStr_98;
          MR_Word ModuleName_99;
          MR_String DepGraphFileName_100;
          MR_Word _Succeeded_101;

          hlds__hlds_dependency_graph__dependency_graph_to_string_3_p_0(&DepGraphStr_98, HLDS20_36, &HLDS21_40);
          hlds__hlds_module__module_info_get_name_2_p_0(HLDS21_40, &ModuleName_99);
          parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 3, ModuleName_99, &DepGraphFileName_100);
          libs__file_util__write_string_to_file_8_p_0(ProgressStream_17, Globals_96, (MR_String) "Writing dependency graph", DepGraphFileName_100, DepGraphStr_98, &_Succeeded_101);
          libs__file_util__maybe_report_stats_4_p_0(ProgressStream_17, Stats_39);
        }
        break;
    }
    switch (MR_tag((MR_Word) OpModeAugment_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_2_61;
              *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_2_62;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_middle_passes__output_trans_opt_file_8_p_0(ProgressStream_17, HLDS21_40, STATE_VARIABLE_Specs_2_62, STATE_VARIABLE_Specs_52, STATE_VARIABLE_DumpInfo_2_61, STATE_VARIABLE_DumpInfo_50);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word AnalysisSpecs_41;
              MR_Word HLDS22_42;

              top_level__mercury_compile_augment__prepare_for_intermodule_analysis_9_p_0(ProgressStream_17, Globals_19, Verbose_38, Stats_39, &AnalysisSpecs_41, HLDS21_40, &HLDS22_42);
              if ((AnalysisSpecs_41 == (MR_Word) ((MR_Unsigned) 0U)))
                top_level__mercury_compile_middle_passes__output_analysis_file_8_p_0(ProgressStream_17, HLDS22_42, STATE_VARIABLE_Specs_2_62, STATE_VARIABLE_Specs_52, STATE_VARIABLE_DumpInfo_2_61, STATE_VARIABLE_DumpInfo_50);
              else
              {
                *STATE_VARIABLE_Specs_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_41, STATE_VARIABLE_Specs_2_62);
                *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_2_61;
              }
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__xml_documentation__xml_documentation_4_p_0(ProgressStream_17, HLDS21_40);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_2_61;
              *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_2_62;
            }
            break;
          case (MR_Integer) 4:
            {
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_2_61;
              *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_2_62;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpModeFrontAndMiddle_45 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_20, 0))) & (MR_Integer) 3);
          MR_Word IntermodAnalysis_106;

          libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 411, &IntermodAnalysis_106);
          switch (IntermodAnalysis_106) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MaybeTopModule_46 = ((MR_Word) ((MR_hl_field(0, Baggage_22, 3))));

                top_level__mercury_compile_augment__after_front_end_passes_14_p_0(ProgressStream_17, ErrorStream_18, Globals_19, OpModeFrontAndMiddle_45, MaybeTopModule_46, MaybeTimestampMap_31, HLDS21_40, ExtraObjFiles_24, STATE_VARIABLE_Specs_2_62, STATE_VARIABLE_Specs_52, STATE_VARIABLE_DumpInfo_2_61, STATE_VARIABLE_DumpInfo_50);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AllAvailModules_108;
                MR_Word LocalModulesList_109;
                MR_Word SymNames_110;
                MR_Word LocalModuleNames_111;
                MR_Word AnalysisInfo0_112;
                MR_Word AnalysisInfo_113;
                MR_Word AnalysisSpecs_148;
                MR_Word HLDS22_149;

                libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_38, (MR_String) "% Preparing for intermodule analysis...\n");
                hlds__hlds_module__module_info_get_all_avail_modules_2_p_0(HLDS21_40, &AllAvailModules_108);
                libs__globals__lookup_accumulating_option_3_p_0(Globals_19, (MR_Integer) 763, &LocalModulesList_109);
                SymNames_110 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_5[2]), LocalModulesList_109);
                LocalModuleNames_111 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_110);
                hlds__hlds_module__module_info_get_analysis_info_2_p_0(HLDS21_40, &AnalysisInfo0_112);
                analysis__operations__prepare_intermodule_analysis_9_p_0(ProgressStream_17, Globals_19, AllAvailModules_108, LocalModuleNames_111, &AnalysisSpecs_148, AnalysisInfo0_112, &AnalysisInfo_113);
                hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_113, HLDS21_40, &HLDS22_149);
                libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_38, (MR_String) "% done.\n");
                libs__file_util__maybe_report_stats_4_p_0(ProgressStream_17, Stats_39);
                if ((AnalysisSpecs_148 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word MaybeTopModule_130 = ((MR_Word) ((MR_hl_field(0, Baggage_22, 3))));

                  top_level__mercury_compile_augment__after_front_end_passes_14_p_0(ProgressStream_17, ErrorStream_18, Globals_19, OpModeFrontAndMiddle_45, MaybeTopModule_130, MaybeTimestampMap_31, HLDS22_149, ExtraObjFiles_24, STATE_VARIABLE_Specs_2_62, STATE_VARIABLE_Specs_52, STATE_VARIABLE_DumpInfo_2_61, STATE_VARIABLE_DumpInfo_50);
                }
                else
                {
                  *STATE_VARIABLE_Specs_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_148, STATE_VARIABLE_Specs_2_62);
                  *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_2_61;
                }
              }
              break;
          }
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_37 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_2_62;
    *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_2_61;
  }
}

static void MR_CALL 
top_level__mercury_compile_augment__after_front_end_passes_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeFrontAndMiddle_18,
  MR_Word MaybeTopModule_19,
  MR_Word MaybeTimestampMap_20,
  MR_Word STATE_VARIABLE_HLDS_0_34,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36,
  MR_Word STATE_VARIABLE_DumpInfo_0_37,
  MR_Word * STATE_VARIABLE_DumpInfo_38)
{
  MR_bool succeeded;
  MR_Word Stats_26;
  MR_Word ModuleName_27;
  MR_String UsageFileName_28;
  MR_Word FrontEndErrors_31;
  MR_Integer ExitStatus_32;
  MR_Word STATE_VARIABLE_HLDS_1_42;
  MR_Word STATE_VARIABLE_HLDS_2_44;
  MR_Word STATE_VARIABLE_DumpInfo_1_45;
  MR_Word STATE_VARIABLE_Specs_1_46;
  MR_Word Globals_57;
  MR_Word ProfileCalls_58;
  MR_Word ProfileTime_59;
  MR_String _UsageFileNameProposed_29;
  MR_Word Var_30;

  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 133, &Stats_26);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_34, &Globals_57);
  libs__globals__lookup_bool_option_3_p_0(Globals_57, (MR_Integer) 63, &ProfileCalls_58);
  libs__globals__lookup_bool_option_3_p_0(Globals_57, (MR_Integer) 64, &ProfileTime_59);
  succeeded = (ProfileCalls_58 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (ProfileTime_59 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word ModuleName_60;
    MR_String ProfFileName_61;
    MR_String DepGraphStr_63;
    MR_String _ProfFileNameProposed_62;
    MR_Word _Succeeded_64;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_34, &ModuleName_60);
    parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_57, (MR_String) "predicate \140top_level.mercury_compile_augment.maybe_output_prof_call_graph\'/6", (MR_Word) (MR_mkword(1, &top_level__mercury_compile_augment_scalar_common_2[1])), ModuleName_60, &ProfFileName_61, &_ProfFileNameProposed_62);
    hlds__hlds_dependency_graph__prof_dependency_graph_to_string_3_p_0(&DepGraphStr_63, STATE_VARIABLE_HLDS_0_34, &STATE_VARIABLE_HLDS_1_42);
    libs__file_util__write_string_to_file_8_p_0(ProgressStream_15, Globals_57, (MR_String) "Writing profiling call graph", ProfFileName_61, DepGraphStr_63, &_Succeeded_64);
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_15, Stats_26);
  }
  else
    STATE_VARIABLE_HLDS_1_42 = STATE_VARIABLE_HLDS_0_34;
  top_level__mercury_compile_middle_passes__middle_pass_11_p_0(ProgressStream_15, ErrorStream_16, OpModeFrontAndMiddle_18, STATE_VARIABLE_HLDS_1_42, &STATE_VARIABLE_HLDS_2_44, STATE_VARIABLE_DumpInfo_0_37, &STATE_VARIABLE_DumpInfo_1_45, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_1_46);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_2_44, &ModuleName_27);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_augment.after_front_end_passes\'/14", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[2])), ModuleName_27, &UsageFileName_28, &_UsageFileNameProposed_29);
  mercury__io__file__remove_file_4_p_0(UsageFileName_28, &Var_30);
  FrontEndErrors_31 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_17, STATE_VARIABLE_Specs_1_46);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_32);
  succeeded = (FrontEndErrors_31 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ExitStatus_32 == (MR_Integer) 0);
  if (succeeded)
    switch (OpModeFrontAndMiddle_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_1_46;
          *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_1_45;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          MR_Word OpModeCodeGen_33 = (MR_Word) (OpModeFrontAndMiddle_18);

          top_level__mercury_compile_augment__choose_and_execute_backend_passes_15_p_0(ProgressStream_15, ErrorStream_16, Globals_17, OpModeCodeGen_33, ModuleName_27, MaybeTopModule_19, MaybeTimestampMap_20, STATE_VARIABLE_HLDS_2_44, ExtraObjFiles_22, STATE_VARIABLE_Specs_1_46, STATE_VARIABLE_Specs_36, STATE_VARIABLE_DumpInfo_1_45, STATE_VARIABLE_DumpInfo_38);
        }
        break;
    }
  else
  {
    succeeded = (ExitStatus_32 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_1_45;
    *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_1_46;
  }
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
  MR_Word STATE_VARIABLE_HLDS_0_52,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54,
  MR_Word STATE_VARIABLE_DumpInfo_0_55,
  MR_Word * STATE_VARIABLE_DumpInfo_56)
{
  MR_bool succeeded;
  MR_Word Target_28;
  MR_Word Succeeded_30;
  MR_Word STATE_VARIABLE_HLDS_1_87;

  libs__globals__get_target_2_p_0(Globals_18, &Target_28);
  switch (Target_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ExportDecls_34;
        MR_Word HighLevelCode_35;

        backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_0_52, &ExportDecls_34);
        backend_libs__export__output_mh_header_file_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_52, ExportDecls_34, ModuleName_20);
        libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 55, &HighLevelCode_35);
        switch (HighLevelCode_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GlobalData_44;
              MR_Word LLDS_45;

              top_level__mercury_compile_llds_back_end__llds_backend_pass_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_0_52, &STATE_VARIABLE_HLDS_1_87, &GlobalData_44, &LLDS_45, STATE_VARIABLE_DumpInfo_0_55, STATE_VARIABLE_DumpInfo_56);
              top_level__mercury_compile_llds_back_end__llds_output_pass_10_p_0(ProgressStream_16, OpModeCodeGen_19, STATE_VARIABLE_HLDS_1_87, GlobalData_44, LLDS_45, ModuleName_20, &Succeeded_30, ExtraObjFiles_24);
              *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MLDS_95;
              MR_Word TargetCodeSucceeded_96;

              top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_52, &MLDS_95, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54, STATE_VARIABLE_DumpInfo_0_55, STATE_VARIABLE_DumpInfo_56);
              top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_6_p_0(ProgressStream_16, Globals_18, MLDS_95, &TargetCodeSucceeded_96);
              switch (OpModeCodeGen_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  switch (TargetCodeSucceeded_96) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Succeeded_30 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String C_File_36;
                        MR_Word TargetType_38;
                        MR_Word PIC_39;
                        MR_Word ObjExt_40;
                        MR_String O_File_42;
                        MR_Word Var_83;
                        MR_String _C_FileProposed_37;
                        MR_Word Var_41;
                        MR_String _O_FileProposed_43;

                        parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_augment.choose_and_execute_backend_passes\'/15", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[3])), ModuleName_20, &C_File_36, &_C_FileProposed_37);
                        backend_libs__link_target_code__get_linked_target_type_for_c_2_p_0(Globals_18, &TargetType_38);
                        backend_libs__link_target_code__get_object_code_type_3_p_0(Globals_18, TargetType_38, &PIC_39);
                        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_39, &ObjExt_40, &Var_41);
                        {
                          Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(3, Var_83, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_40));
                        }
                        parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_augment.choose_and_execute_backend_passes\'/15", Var_83, ModuleName_20, &O_File_42, &_O_FileProposed_43);
                        backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_18, ProgressStream_16, PIC_39, C_File_36, O_File_42, &Succeeded_30);
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_30);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  Succeeded_30 = TargetCodeSucceeded_96;
                  break;
              }
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HLDS_1_87 = STATE_VARIABLE_HLDS_0_52;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MLDS_29;

        top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_52, &MLDS_29, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54, STATE_VARIABLE_DumpInfo_0_55, STATE_VARIABLE_DumpInfo_56);
        top_level__mercury_compile_mlds_back_end__mlds_to_csharp_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_52, MLDS_29, &Succeeded_30);
        *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_HLDS_1_87 = STATE_VARIABLE_HLDS_0_52;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TargetCodeSucceeded_31;
        MR_Word MLDS_94;

        top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_52, &MLDS_94, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54, STATE_VARIABLE_DumpInfo_0_55, STATE_VARIABLE_DumpInfo_56);
        top_level__mercury_compile_mlds_back_end__mlds_to_java_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_0_52, MLDS_94, &TargetCodeSucceeded_31);
        switch (OpModeCodeGen_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            switch (TargetCodeSucceeded_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Succeeded_30 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_String JavaFile_32;
                  MR_String _JavaFileProposed_33;

                  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_augment.choose_and_execute_backend_passes\'/15", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_augment_scalar_common_1[4])), ModuleName_20, &JavaFile_32, &_JavaFileProposed_33);
                  backend_libs__compile_target_code__compile_java_files_7_p_0(Globals_18, ProgressStream_16, JavaFile_32, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_30);
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_30);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            Succeeded_30 = TargetCodeSucceeded_31;
            break;
        }
        *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_HLDS_1_87 = STATE_VARIABLE_HLDS_0_52;
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
        MR_Word MaybeRecompInfo_46;
        MR_String TimestampFile_50;
        MR_Word RecompInfo_47;
        MR_Word TimestampMap_48;
        MR_Word _Succeededs_51;

        hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_1_87, &MaybeRecompInfo_46);
        succeeded = (MaybeRecompInfo_46 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RecompInfo_47 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo_46, 0))));
          succeeded = (MaybeTimestampMap_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TimestampMap_48 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_22, 0))));
        }
        if (succeeded)
        {
          MR_Word UsedFileContents_49;

          recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_1_87, RecompInfo_47, MaybeTopModule_21, TimestampMap_48, &UsedFileContents_49);
          recompilation__used_file__write_usage_file_5_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_1_87, UsedFileContents_49);
        }
        parse_tree__file_names__module_name_to_target_timestamp_file_name_create_dirs_5_p_0(Globals_18, ModuleName_20, &TimestampFile_50);
        parse_tree__module_cmds__touch_file_datestamp_6_p_0(Globals_18, ProgressStream_16, TimestampFile_50, &_Succeededs_51);
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
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 763, &LocalModulesList_18);
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
top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0_3(
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

  top_level__mercury_compile_augment__augment_and_process_module_14_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), &conv2_ExtraObjFiles_22, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Specs_33, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_HaveParseTreeMaps_35);
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

  succeeded = top_level__mercury_compile_augment__IntroducedFrom__pred__augment_and_process_source_file__106__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_26, 0))));
  MR_Word BurdenedModules0_34;
  MR_Word BurdenedModulesToRecompile_40;
  MR_Word TraceProf_41;
  MR_Word GlobalsToUse_43;
  MR_Word STATE_VARIABLE_Specs_1_49;
  MR_Word ExtraObjFileLists_101;
  MR_Word Var_102;
  MR_Word Var_99;
  MR_Box conv5_STATE_VARIABLE_Specs_44;
  MR_Box conv4_STATE_VARIABLE_HaveParseTreeMaps_46;
  MR_Box conv3_STATE_VARIABLE_IO_48;

  parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_20, SourceFileName_23, ReadModuleErrors_25, MaybeTimestamp_24, ParseTreeSrc_26, &STATE_VARIABLE_Specs_1_49, &BurdenedModules0_34);
  if ((MaybeModulesToRecompile_27 == (MR_Word) ((MR_Unsigned) 0U)))
    BurdenedModulesToRecompile_40 = BurdenedModules0_34;
  else
  {
    MR_Word ModulesToRecompile_35 = ((MR_Word) ((MR_hl_field(1, MaybeModulesToRecompile_27, 0))));
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
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 255, &TraceProf_41);
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

    libs__globals__set_option_4_p_0((MR_Integer) 733, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_augment_scalar_common_2[0])), Globals_20, &Globals1_42);
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
  mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_1[1]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, BurdenedModulesToRecompile_40, &ExtraObjFileLists_101, ((MR_Box) (STATE_VARIABLE_Specs_1_49)), &conv5_STATE_VARIABLE_Specs_44, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_0_45)), &conv4_STATE_VARIABLE_HaveParseTreeMaps_46, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_48);
  *STATE_VARIABLE_Specs_44 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_44));
  *STATE_VARIABLE_HaveParseTreeMaps_46 = ((MR_Word) (conv4_STATE_VARIABLE_HaveParseTreeMaps_46));
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_augment_scalar_common_5[0]), BurdenedModulesToRecompile_40, ModulesToLink_28);
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
