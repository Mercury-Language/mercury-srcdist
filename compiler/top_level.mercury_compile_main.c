/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2021-12-27
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


// :- module top_level.mercury_compile_main.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_main__init
ENDINIT
*/

#include "top_level.mercury_compile_main.mih"


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
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "gc.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.export.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.xml_documentation.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_defns.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.check_libgrades.mih"
#include "libs.compute_grade.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "make.build.mih"
#include "make.options_file.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.check_raw_comp_unit.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.generate_dep_d_files.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "recompilation.check.mih"
#include "recompilation.usage.mih"
#include "recompilation.used_file.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1;

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1];

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0[2];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0[2];

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0[2];

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0;

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1;

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_ordinal_ordered_maybe_write_d_file_0[2];

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0[2];

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0[2];

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__2088__1_1_p_0(
  MR_Char LambdaHeadVar__1_22);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1406__1_2_p_0(
  MR_Word ModulesToRecompile_32,
  MR_Word LambdaHeadVar__1_54);

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String SourceFileName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word SourceFileModuleName_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word ParseTreeModuleSrc_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_38);

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_14_p_0(
  MR_Word Globals0_15,
  MR_Word OpModeAugment_16,
  MR_Word Baggage_17,
  MR_Word AugCompUnit_18,
  MR_Word FindTimestampFiles_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_50,
  MR_Word * STATE_VARIABLE_DumpInfo_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_54,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_55);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeCodeGen_15,
  MR_Word MaybeTopModule_16,
  MR_Word FindTimestampFiles_17,
  MR_Word MaybeTimestampMap_18,
  MR_Word STATE_VARIABLE_HLDS_0_59,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61,
  MR_Word STATE_VARIABLE_DumpInfo_0_62,
  MR_Word * STATE_VARIABLE_DumpInfo_63);

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21);

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

static void MR_CALL 
top_level__mercury_compile_main__pre_hlds_pass_19_p_0(
  MR_Word Globals_20,
  MR_Word OpModeAugment_21,
  MR_Word WriteDFile0_22,
  MR_Word Baggage0_23,
  MR_Word AugCompUnit0_24,
  MR_Word * HLDS1_25,
  MR_Word * QualInfo_26,
  MR_Word * MaybeTimestampMap_27,
  MR_Word * UndefTypes_28,
  MR_Word * UndefModes_29,
  MR_Word * FoundSemanticError_30,
  MR_Word STATE_VARIABLE_DumpInfo_0_76,
  MR_Word * STATE_VARIABLE_DumpInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_80,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_81);

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_definition_extents_5_p_0(
  MR_Word Verbose_6,
  MR_Word Stats_7,
  MR_Word HLDS_8);

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_definition_line_counts_5_p_0(
  MR_Word Verbose_6,
  MR_Word Stats_7,
  MR_Word HLDS_8);

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_definitions_5_p_0(
  MR_Word Verbose_6,
  MR_Word Stats_7,
  MR_Word HLDS_8);

static void MR_CALL 
top_level__mercury_compile_main__make_hlds_17_p_0(
  MR_Word Globals_18,
  MR_Word AugCompUnit_19,
  MR_Word EventSet_20,
  MR_Word MQInfo_21,
  MR_Word TypeEqvMap_22,
  MR_Word UsedModules_23,
  MR_Word Verbose_24,
  MR_Word Stats_25,
  MR_Word * STATE_VARIABLE_HLDS_39,
  MR_Word * QualInfo_27,
  MR_Word * FoundInvalidType_28,
  MR_Word * FoundInvalidInstOrMode_29,
  MR_Word * FoundSemanticError_30,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
top_level__mercury_compile_main__maybe_grab_plain_and_trans_opt_files_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeAugment_15,
  MR_Word Verbose_16,
  MR_Word MaybeTransOptDeps_17,
  MR_Word * Error_18,
  MR_Word STATE_VARIABLE_Baggage_0_42,
  MR_Word * STATE_VARIABLE_Baggage_43,
  MR_Word STATE_VARIABLE_AugCompUnit_0_44,
  MR_Word * STATE_VARIABLE_AugCompUnit_45,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_47);

static void MR_CALL 
top_level__mercury_compile_main__maybe_read_d_file_for_trans_opt_deps_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * MaybeTransOptDeps_8);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(
  MR_Word * TransOptDeps_4);

static void MR_CALL 
top_level__mercury_compile_main__read_dependency_file_find_start_4_p_0(
  MR_String SearchPattern_5,
  MR_Word * Success_6);

static void MR_CALL 
top_level__mercury_compile_main__disable_warning_options_2_p_0(
  MR_Word Globals0_3,
  MR_Word * Globals_4);

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_String * ModuleToLink_4);

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(
  MR_Word Globals_7,
  MR_Word TimestampOtherExt_8,
  MR_Word ModuleName_9,
  MR_Word * TimestampFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_6_p_0(
  MR_Word Globals_7,
  MR_Word TargetOtherExt_8,
  MR_Word ModuleName_9,
  MR_Word * TargetFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrade_using_lib_file_9_p_0(
  MR_Word VeryVerbose_10,
  MR_String DirName_11,
  MR_String GradeFileName_12,
  MR_Word GradeFileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_21,
  MR_Word * STATE_VARIABLE_GradeOpts_22);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_117_115_105_110_103_95_108_105_98_95_102_105_108_101_95_95_91_49_93_95_48_9_p_0(
  MR_String DirName_11,
  MR_String GradeFileName_12,
  MR_Word GradeFileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_21,
  MR_Word * STATE_VARIABLE_GradeOpts_22);

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrade_using_init_file_9_p_0(
  MR_Word VeryVerbose_10,
  MR_String DirName_11,
  MR_String GradeFileName_12,
  MR_Word GradeFileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * STATE_VARIABLE_GradeOpts_21);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_117_115_105_110_103_95_105_110_105_116_95_102_105_108_101_95_95_91_49_93_95_48_9_p_0(
  MR_String DirName_11,
  MR_String GradeFileName_12,
  MR_Word GradeFileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * STATE_VARIABLE_GradeOpts_21);

static void MR_CALL 
top_level__mercury_compile_main__real_main_after_expansion_3_p_0(
  MR_Word CmdLineArgs_4);

static void MR_CALL 
top_level__mercury_compile_main__main_after_setup_7_p_0(
  MR_Word Globals_8,
  MR_Word DetectedGradeFlags_9,
  MR_Word OptionVariables_10,
  MR_Word OptionArgs_11,
  MR_Word Args_12);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_10_p_0(
  MR_Word Globals_11,
  MR_Word OpMode_12,
  MR_Word DetectedGradeFlags_13,
  MR_Word OptionVariables_14,
  MR_Word OptionArgs_15,
  MR_Word Args_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_11_p_0(
  MR_Word Globals_12,
  MR_Word OpModeArgs_13,
  MR_Word FileNamesFromStdin_14,
  MR_Word DetectedGradeFlags_15,
  MR_Word OptionVariables_16,
  MR_Word OptionArgs_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_43);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_cmd_line_args_14_p_0(
  MR_Word Globals_1,
  MR_Word OpModeArgs_2,
  MR_Word DetectedGradeFlags_3,
  MR_Word OptionVariables_4,
  MR_Word OptionArgs_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Modules_0_7,
  MR_Word * STATE_VARIABLE_Modules_8,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_11,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_12);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_14_p_0(
  MR_Word Globals_15,
  MR_Word StdIn_16,
  MR_Word OpModeArgs_17,
  MR_Word DetectedGradeFlags_18,
  MR_Word OptionVariables_19,
  MR_Word OptionArgs_20,
  MR_Word STATE_VARIABLE_Modules_0_33,
  MR_Word * STATE_VARIABLE_Modules_34,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_35,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_36,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_38);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_12_p_0(
  MR_Word Globals_13,
  MR_Word OpModeArgs_14,
  MR_Word DetectedGradeFlags_15,
  MR_Word OptionVariables_16,
  MR_Word OptionArgs_17,
  MR_String Arg_18,
  MR_Word * ModulesToLink_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(
  MR_Word Globals0_11,
  MR_Word OpModeArgs_12,
  MR_Word OptionArgs_13,
  MR_Word FileOrModule_14,
  MR_Word * ModulesToLink_15,
  MR_Word * ExtraObjFiles_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35);

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0(
  MR_Word Globals0_12,
  MR_Word OpModeAugment_13,
  MR_Word OptionArgs_14,
  MR_Word FileOrModule_15,
  MR_Word MaybeModulesToRecompile_16,
  MR_Word * ModulesToLink_17,
  MR_Word * ExtraObjFiles_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44);

static MR_bool MR_CALL 
top_level__mercury_compile_main__halt_at_module_error_2_p_0(
  MR_Word Globals_3,
  MR_Word Errors_4);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String FileName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word SourceFileModuleName_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word ParseTreeModuleSrcs_23,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32);

static void MR_CALL 
top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(
  MR_Word Report_6,
  MR_Word OptionArgs_7,
  MR_Word Args_8);

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_p_0(
  MR_Word Globals_3,
  MR_Word * FindTimestampFiles_4);

static void MR_CALL 
top_level__mercury_compile_main__find_modules_to_recompile_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__find_modules_to_recompile_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__find_modules_to_recompile_8_p_0(
  MR_Word Globals0_9,
  MR_Word * Globals_10,
  MR_Word FileOrModule_11,
  MR_Word * ModulesToRecompile_12,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(
  MR_Word Globals0_8,
  MR_Word InterfaceFile_9,
  MR_Word FileOrModule_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_28,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_29);

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_14_p_0(
  MR_Word Globals0_15,
  MR_Word * Globals_16,
  MR_Word FileOrModuleName_17,
  MR_Word * ModuleName_18,
  MR_String * FileNameDotM_19,
  MR_Word ReturnTimestamp_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeSrc_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44);

static void MR_CALL 
top_level__mercury_compile_main__maybe_print_delayed_error_messages_4_p_0(
  MR_Word ErrorStream_5,
  MR_Word Globals_6);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_4_p_0(
  MR_Word Globals_5,
  MR_Word OpModeQuery_6);

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0(
  MR_Word Globals_6,
  MR_Word MaybeConfigMerStdLibDir_7,
  MR_Word * GradeOpts_8);

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrades_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrades_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrades_5_p_0(
  MR_Word VeryVerbose_6,
  MR_String StdLibDir_7,
  MR_Word * GradeOpts_8);

static void MR_CALL 
top_level__mercury_compile_main__maybe_dump_options_file_4_p_0(
  MR_Word ArgsGlobals_5,
  MR_Word Variables_6);

static void MR_CALL 
top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(
  MR_Word S_5,
  MR_Word * Res_6);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[17][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[14][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[1][12];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[1][6];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[7][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[1][15];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[2][10];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[1][9];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][18];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[4][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[1][4];




static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[8])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[15])))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[14][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".ugly"))))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".d"))))
  },
  /* row 4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt_date"))))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".hlds_dump"))))
  },
  /* row 6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".defns"))))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".defn_line_counts"))))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".defn_extents"))))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dependency_graph"))))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".used"))))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c"))))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java"))))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".prof"))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0])),
    ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[2])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[3])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[3])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][18] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "make.build.mh"
#include "top_level.mercury_compile_main.mh"



static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0 = {
  (MR_String) "fm_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1 = {
  (MR_String) "fm_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1
};

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1
};

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_main____Unify____file_or_module_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____file_or_module_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "file_or_module",
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0 },
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0,

};

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0 = {
  (MR_String) "do_not_write_d_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1 = {
  (MR_String) "write_d_file",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_ordinal_ordered_maybe_write_d_file_0[2] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0,
  &top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0[2] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0,
  &top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1
};

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_maybe_write_d_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "maybe_write_d_file",
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0 },
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__enum_ordinal_ordered_maybe_write_d_file_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0,

};

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__2088__1_1_p_0(
  MR_Char LambdaHeadVar__1_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__char__is_whitespace_1_p_0(LambdaHeadVar__1_22);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1406__1_2_p_0(
  MR_Word ModulesToRecompile_32,
  MR_Word LambdaHeadVar__1_54)
{
  {
    MR_bool succeeded;
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 0))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_55)), ModulesToRecompile_32);
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_String Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL top_level__mercury_compile_main__gc_init_2_p_0


		{

#ifdef MR_BOEHM_GC
    /*
    ** Explicitly force the initial heap size to be at least 4 Mb.
    **
    ** This works around a bug in the Boehm collector (for versions up
    ** to at least 6.2) where the collector would sometimes abort with
    ** the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    ** on dec-alpha-osf3.2).
    **
    ** Doing this should also improve performance slightly by avoiding
    ** frequent garbage collection during start-up.
    */
    GC_expand_hp(4 * 1024 * 1024);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String SourceFileName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word SourceFileModuleName_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word ParseTreeModuleSrc_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_38)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_28;
    MR_Word MaybeTopModule_29;
    MR_Word Baggage_30;
    MR_Word AugCompUnit_31;
    MR_Word Errors_32;
    MR_Word FatalErrors_33;
    MR_Word STATE_VARIABLE_Specs_41_41;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_42_42;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word Var_45;
    MR_Word Var_46;

    parse_tree__check_raw_comp_unit__check_module_interface_for_no_exports_4_p_0(Globals_16, ParseTreeModuleSrc_23, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_41_41);
    ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_28, SourceFileModuleName_20);
    if (succeeded)
      {
        MaybeTopModule_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTopModule_29, 0) = ((MR_Box) (NestedSubModules_21));
      }
    else
      MaybeTopModule_29 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0(Globals_16, SourceFileName_18, SourceFileModuleName_20, MaybeTimestamp_19, MaybeTopModule_29, ParseTreeModuleSrc_23, &Baggage_30, &AugCompUnit_31, STATE_VARIABLE_HaveReadModuleMaps_0_37, &STATE_VARIABLE_HaveReadModuleMaps_42_42);
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_30, (MR_Integer) 6))));
    STATE_VARIABLE_Specs_44_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_45, STATE_VARIABLE_Specs_41_41);
    Errors_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_30, (MR_Integer) 7))));
    Var_46 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_32, Var_46, &FatalErrors_33);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_33);
    if (succeeded)
    {
      MR_Word Var_34;

      top_level__mercury_compile_main__process_augmented_module_14_p_0(Globals_16, OpModeAugment_17, Baggage_30, AugCompUnit_31, FindTimestampFiles_22, ExtraObjFiles_24, (MR_Word) ((MR_Unsigned) 0U), &Var_34, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_36, STATE_VARIABLE_HaveReadModuleMaps_42_42, STATE_VARIABLE_HaveReadModuleMaps_38);
    }
    else
    {
      *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveReadModuleMaps_38 = STATE_VARIABLE_HaveReadModuleMaps_42_42;
      *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_44_44;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_14_p_0(
  MR_Word Globals0_15,
  MR_Word OpModeAugment_16,
  MR_Word Baggage_17,
  MR_Word AugCompUnit_18,
  MR_Word FindTimestampFiles_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_50,
  MR_Word * STATE_VARIABLE_DumpInfo_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_54,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_55)
{
  {
    MR_bool succeeded;
    MR_Word Globals_25;
    MR_Word WriteDFile_26;
    MR_Word HLDS1_28;
    MR_Word QualInfo_29;
    MR_Word MaybeTimestampMap_30;
    MR_Word UndefTypes_31;
    MR_Word UndefModes_32;
    MR_Word PreHLDSErrors_33;
    MR_Word FrontEndErrors_34;
    MR_Word HLDS20_35;
    MR_Word STATE_VARIABLE_DumpInfo_58_58;
    MR_Word STATE_VARIABLE_Specs_59_59;
    MR_Word STATE_VARIABLE_DumpInfo_62_62;
    MR_Word STATE_VARIABLE_Specs_63_63;
    MR_Word Var_65;

    switch (MR_tag((MR_Word) OpModeAugment_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_15, &Globals_25);
              WriteDFile_26 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_15, &Globals_25);
              WriteDFile_26 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              Globals_25 = Globals0_15;
              WriteDFile_26 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              Globals_25 = Globals0_15;
              WriteDFile_26 = (MR_Integer) 0;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          Globals_25 = Globals0_15;
          WriteDFile_26 = (MR_Integer) 1;
        }
        break;
    }
    top_level__mercury_compile_main__pre_hlds_pass_19_p_0(Globals_25, OpModeAugment_16, WriteDFile_26, Baggage_17, AugCompUnit_18, &HLDS1_28, &QualInfo_29, &MaybeTimestampMap_30, &UndefTypes_31, &UndefModes_32, &PreHLDSErrors_33, STATE_VARIABLE_DumpInfo_0_50, &STATE_VARIABLE_DumpInfo_58_58, STATE_VARIABLE_Specs_0_52, &STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_HaveReadModuleMaps_0_54, STATE_VARIABLE_HaveReadModuleMaps_55);
    top_level__mercury_compile_front_end__frontend_pass_14_p_0(OpModeAugment_16, QualInfo_29, UndefTypes_31, UndefModes_32, PreHLDSErrors_33, &FrontEndErrors_34, HLDS1_28, &HLDS20_35, STATE_VARIABLE_DumpInfo_58_58, &STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_Specs_59_59, &STATE_VARIABLE_Specs_63_63);
    succeeded = (PreHLDSErrors_33 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (FrontEndErrors_34 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_65 = parse_tree__error_util__contains_errors_2_f_0(Globals_25, STATE_VARIABLE_Specs_63_63);
        succeeded = (Var_65 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Verbose_36;
      MR_Word Stats_37;
      MR_Word HLDS21_38;

      libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 69, &Verbose_36);
      libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 79, &Stats_37);
      top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(Verbose_36, Stats_37, HLDS20_35, &HLDS21_38);
      switch (MR_tag((MR_Word) OpModeAugment_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpModeAugment_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
                *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
              }
              break;
            case (MR_Integer) 1:
              {
                top_level__mercury_compile_middle_passes__output_trans_opt_file_7_p_0(HLDS21_38, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_53, STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_DumpInfo_51);
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word HLDS22_46;

                top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(Globals_25, Verbose_36, Stats_37, HLDS21_38, &HLDS22_46);
                top_level__mercury_compile_middle_passes__output_analysis_file_7_p_0(HLDS22_46, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_53, STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_DumpInfo_51);
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              {
                check_hlds__xml_documentation__xml_documentation_3_p_0(HLDS21_38);
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
                *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
              }
              break;
            case (MR_Integer) 4:
              {
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
                *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word UnusedArgs_39;

                libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 14, &UnusedArgs_39);
                switch (UnusedArgs_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word OptTuple_40;
                      MR_Word NoOptUnusedArgsOptTuple_41;
                      MR_Word NoOptUnusedArgsGlobals_42;
                      MR_Word HLDS21a_43;
                      MR_Integer Var_176;
                      MR_Integer Var_177;
                      MR_Integer Var_178;
                      MR_Integer Var_179;
                      MR_Integer Var_180;
                      MR_Integer Var_181;
                      MR_Integer Var_182;
                      MR_Integer Var_183;
                      MR_Integer Var_184;
                      MR_Integer Var_185;
                      MR_Integer Var_186;
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
                      MR_String Var_213;
                      MR_Unsigned packed_word_0;
                      MR_Unsigned packed_word_1;
                      MR_Unsigned packed_word_2;
                      MR_Word _UnusedArgsInfos_44;
                      MR_Word _HLDS22_45;

                      libs__globals__get_opt_tuple_2_p_0(Globals_25, &OptTuple_40);
                      packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 0)));
                      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 1)));
                      packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 2)));
                      Var_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 3))));
                      Var_177 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 4))));
                      Var_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 5))));
                      Var_179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 6))));
                      Var_180 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 7))));
                      Var_181 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 8))));
                      Var_182 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 9))));
                      Var_183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 10))));
                      Var_184 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 11))));
                      Var_185 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 12))));
                      Var_186 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 13))));
                      Var_187 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 14))));
                      Var_188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 15))));
                      Var_189 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 16))));
                      Var_190 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 17))));
                      Var_191 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 18))));
                      Var_192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 19))));
                      Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 20))));
                      Var_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 21))));
                      Var_195 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 22))));
                      Var_196 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 23))));
                      Var_197 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 24))));
                      Var_198 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 25))));
                      Var_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 26))));
                      Var_200 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 27))));
                      Var_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 28))));
                      Var_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 29))));
                      Var_203 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 30))));
                      Var_204 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 31))));
                      Var_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 32))));
                      Var_206 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 33))));
                      Var_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 34))));
                      Var_208 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 35))));
                      Var_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 36))));
                      Var_210 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 37))));
                      Var_211 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 38))));
                      Var_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 39))));
                      Var_213 = ((MR_String) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 40))));
                      {
                        NoOptUnusedArgsOptTuple_41 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 1) = (MR_Box) (packed_word_1);
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 2) = (MR_Box) (packed_word_2);
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 3) = ((MR_Box) (Var_176));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 4) = ((MR_Box) (Var_177));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 5) = ((MR_Box) (Var_178));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 6) = ((MR_Box) (Var_179));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 7) = ((MR_Box) (Var_180));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 8) = ((MR_Box) (Var_181));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 9) = ((MR_Box) (Var_182));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 10) = ((MR_Box) (Var_183));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 11) = ((MR_Box) (Var_184));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 12) = ((MR_Box) (Var_185));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 13) = ((MR_Box) (Var_186));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 14) = ((MR_Box) (Var_187));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 15) = ((MR_Box) (Var_188));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 16) = ((MR_Box) (Var_189));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 17) = ((MR_Box) (Var_190));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 18) = ((MR_Box) (Var_191));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 19) = ((MR_Box) (Var_192));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 20) = ((MR_Box) (Var_193));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 21) = ((MR_Box) (Var_194));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 22) = ((MR_Box) (Var_195));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 23) = ((MR_Box) (Var_196));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 24) = ((MR_Box) (Var_197));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 25) = ((MR_Box) (Var_198));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 26) = ((MR_Box) (Var_199));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 27) = ((MR_Box) (Var_200));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 28) = ((MR_Box) (Var_201));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 29) = ((MR_Box) (Var_202));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 30) = ((MR_Box) (Var_203));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 31) = ((MR_Box) (Var_204));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 32) = ((MR_Box) (Var_205));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 33) = ((MR_Box) (Var_206));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 34) = ((MR_Box) (Var_207));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 35) = ((MR_Box) (Var_208));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 36) = ((MR_Box) (Var_209));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 37) = ((MR_Box) (Var_210));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 38) = ((MR_Box) (Var_211));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 39) = ((MR_Box) (Var_212));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 40) = ((MR_Box) (Var_213));
                      }
                      libs__globals__set_opt_tuple_3_p_0(NoOptUnusedArgsOptTuple_41, Globals_25, &NoOptUnusedArgsGlobals_42);
                      hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_42, HLDS21_38, &HLDS21a_43);
                      top_level__mercury_compile_middle_passes__maybe_unused_args_9_p_0(Verbose_36, Stats_37, &_UnusedArgsInfos_44, HLDS21a_43, &_HLDS22_45, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_53);
                    }
                    break;
                }
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OpModeCodeGen_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeAugment_16, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word MaybeTopModule_48;
            MR_Word HLDS22_88;

            top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(Globals_25, Verbose_36, Stats_37, HLDS21_38, &HLDS22_88);
            MaybeTopModule_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_17, (MR_Integer) 3))));
            top_level__mercury_compile_main__after_front_end_passes_13_p_0(Globals_25, OpModeCodeGen_47, MaybeTopModule_48, FindTimestampFiles_19, MaybeTimestampMap_30, HLDS22_88, ExtraObjFiles_20, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_53, STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_DumpInfo_51);
          }
          break;
      }
    }
    else
    {
      MR_Integer ExitStatus_49;

      mercury__io__get_exit_status_3_p_0(&ExitStatus_49);
      succeeded = (ExitStatus_49 == (MR_Integer) 0);
      if (succeeded)
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
      *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__5_5;

    parse_tree__module_cmds__touch_datestamp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeCodeGen_15,
  MR_Word MaybeTopModule_16,
  MR_Word FindTimestampFiles_17,
  MR_Word MaybeTimestampMap_18,
  MR_Word STATE_VARIABLE_HLDS_0_59,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61,
  MR_Word STATE_VARIABLE_DumpInfo_0_62,
  MR_Word * STATE_VARIABLE_DumpInfo_63)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_24;
    MR_Word Stats_25;
    MR_Word HighLevelCode_26;
    MR_Word Target_27;
    MR_Word ModuleName_28;
    MR_String UsageFileName_29;
    MR_Word HaltAtWarn_31;
    MR_Word FrontEndErrors_32;
    MR_Integer NumErrors_33;
    MR_Word STATE_VARIABLE_HLDS_68_68;
    MR_Word STATE_VARIABLE_HLDS_70_70;
    MR_Word STATE_VARIABLE_DumpInfo_71_71;
    MR_Word STATE_VARIABLE_Specs_72_72;
    MR_Word Var_30;

    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 69, &Verbose_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 79, &Stats_25);
    top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(Verbose_24, Stats_25, STATE_VARIABLE_HLDS_0_59, &STATE_VARIABLE_HLDS_68_68);
    top_level__mercury_compile_middle_passes__middle_pass_8_p_0(STATE_VARIABLE_HLDS_68_68, &STATE_VARIABLE_HLDS_70_70, STATE_VARIABLE_DumpInfo_0_62, &STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_72_72);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 301, &HighLevelCode_26);
    libs__globals__get_target_2_p_0(Globals_14, &Target_27);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_70_70, &ModuleName_28);
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[10])), ModuleName_28, &UsageFileName_29);
    mercury__io__remove_file_4_p_0(UsageFileName_29, &Var_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 3, &HaltAtWarn_31);
    switch (HaltAtWarn_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FrontEndErrors_32 = parse_tree__error_util__contains_errors_2_f_0(Globals_14, STATE_VARIABLE_Specs_72_72);
        break;
      case (MR_Integer) 1:
        FrontEndErrors_32 = parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(Globals_14, STATE_VARIABLE_Specs_72_72);
        break;
    }
    hlds__hlds_module__module_info_get_num_errors_2_p_0(STATE_VARIABLE_HLDS_70_70, &NumErrors_33);
    succeeded = (FrontEndErrors_32 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (NumErrors_33 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word ProgressStream_34;
      MR_Word ErrorStream_35;
      MR_Word Succeeded_39;
      MR_Word STATE_VARIABLE_HLDS_86_86;

      hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_HLDS_70_70, &ProgressStream_34);
      hlds__passes_aux__get_error_output_stream_4_p_0(STATE_VARIABLE_HLDS_70_70, &ErrorStream_35);
      switch (Target_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExportDecls_43;

            backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_70_70, &ExportDecls_43);
            backend_libs__export__produce_header_file_5_p_0(STATE_VARIABLE_HLDS_70_70, ExportDecls_43, ModuleName_28);
            switch (HighLevelCode_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GlobalData_50;
                  MR_Word LLDS_51;

                  top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(STATE_VARIABLE_HLDS_70_70, &STATE_VARIABLE_HLDS_86_86, &GlobalData_50, &LLDS_51, STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_DumpInfo_63);
                  top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0(OpModeCodeGen_15, STATE_VARIABLE_HLDS_86_86, GlobalData_50, LLDS_51, ModuleName_28, &Succeeded_39, ExtraObjFiles_20);
                  *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_72_72;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MLDS_132;
                  MR_Word NewSpecs_133;
                  MR_Word TargetCodeSucceeded_134;
                  MR_Word Var_44;

                  top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_70_70, &Var_44, &MLDS_132, &NewSpecs_133, STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_DumpInfo_63);
                  *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_133, STATE_VARIABLE_Specs_72_72);
                  top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(Globals_14, MLDS_132, &TargetCodeSucceeded_134);
                  switch (OpModeCodeGen_15) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      switch (TargetCodeSucceeded_134) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          Succeeded_39 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_String C_File_45;
                            MR_Word TargetType_46;
                            MR_Word PIC_47;
                            MR_Word ObjOtherExt_48;
                            MR_String O_File_49;
                            MR_Word Var_102;

                            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[11])), ModuleName_28, &C_File_45);
                            backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_14, &TargetType_46);
                            backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_14, TargetType_46, &PIC_47);
                            backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_14, PIC_47, &ObjOtherExt_48);
                            {
                              Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (ObjOtherExt_48));
                            }
                            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 0, Var_102, ModuleName_28, &O_File_49);
                            backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_14, ProgressStream_34, ErrorStream_35, PIC_47, C_File_45, O_File_49, &Succeeded_39);
                            parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_39);
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 0:
                      Succeeded_39 = TargetCodeSucceeded_134;
                      break;
                  }
                  *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_HLDS_86_86 = STATE_VARIABLE_HLDS_70_70;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MLDS_37;
            MR_Word NewSpecs_38;
            MR_Word Var_36;

            top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_70_70, &Var_36, &MLDS_37, &NewSpecs_38, STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_DumpInfo_63);
            *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_38, STATE_VARIABLE_Specs_72_72);
            top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(STATE_VARIABLE_HLDS_70_70, MLDS_37, &Succeeded_39);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HLDS_86_86 = STATE_VARIABLE_HLDS_70_70;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TargetCodeSucceeded_41;
            MR_Word MLDS_130;
            MR_Word NewSpecs_131;
            MR_Word Var_40;

            top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_70_70, &Var_40, &MLDS_130, &NewSpecs_131, STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_DumpInfo_63);
            *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_131, STATE_VARIABLE_Specs_72_72);
            top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(STATE_VARIABLE_HLDS_70_70, MLDS_130, &TargetCodeSucceeded_41);
            switch (OpModeCodeGen_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                switch (TargetCodeSucceeded_41) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Succeeded_39 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String JavaFile_42;

                      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[12])), ModuleName_28, &JavaFile_42);
                      backend_libs__compile_target_code__compile_java_files_8_p_0(Globals_14, ProgressStream_34, ErrorStream_35, JavaFile_42, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_39);
                      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_39);
                    }
                    break;
                }
                break;
              case (MR_Integer) 0:
                Succeeded_39 = TargetCodeSucceeded_41;
                break;
            }
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HLDS_86_86 = STATE_VARIABLE_HLDS_70_70;
          }
          break;
      }
      switch (Succeeded_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeRecompInfo_52;
            MR_Word TimestampFiles_56;
            MR_Word Var_125;
            MR_Word RecompInfo_53;
            MR_Word TimestampMap_54;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv2_TimestampFiles_56;
            MR_Box conv1_STATE_VARIABLE_IO_124_124;
            MR_Word _Succeededs_57;
            MR_Box conv4_STATE_VARIABLE_IO_65;

            hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_86_86, &MaybeRecompInfo_52);
            succeeded = (MaybeRecompInfo_52 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RecompInfo_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecompInfo_52, (MR_Integer) 0))));
              succeeded = (MaybeTimestampMap_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                TimestampMap_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampMap_18, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word UsedFileContents_55;

              recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_86_86, RecompInfo_53, MaybeTopModule_16, TimestampMap_54, &UsedFileContents_55);
              recompilation__used_file__write_usage_file_4_p_0(STATE_VARIABLE_HLDS_86_86, UsedFileContents_55);
            }
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), FindTimestampFiles_17, (MR_Integer) 1))));
            func_0(((MR_Box) (FindTimestampFiles_17)), ((MR_Box) (ModuleName_28)), &conv2_TimestampFiles_56, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_124_124);
            TimestampFiles_56 = ((MR_Word) (conv2_TimestampFiles_56));
            {
              Var_125 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[1]));
              MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_13_p_0_1));
              MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (Globals_14));
              MR_hl_field(MR_mktag(0), Var_125, 4) = ((MR_Box) (ProgressStream_34));
              MR_hl_field(MR_mktag(0), Var_125, 5) = ((MR_Box) (ErrorStream_35));
            }
            mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_125, TimestampFiles_56, &_Succeededs_57, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_65);
          }
          break;
      }
    }
    else
    {
      MR_Integer ExitStatus_58;

      mercury__io__get_exit_status_3_p_0(&ExitStatus_58);
      succeeded = (ExitStatus_58 == (MR_Integer) 0);
      if (succeeded)
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DumpInfo_63 = STATE_VARIABLE_DumpInfo_71_71;
      *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_72_72;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word ProfileCalls_12;
    MR_Word ProfileTime_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 233, &ProfileCalls_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 234, &ProfileTime_13);
    succeeded = (ProfileCalls_12 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (ProfileTime_13 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word ModuleName_14;
      MR_String ProfFileName_15;
      MR_Word Res_16;

      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Outputting profiling call graph...");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_20, &ModuleName_14);
      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_output_prof_call_graph\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[13])), ModuleName_14, &ProfFileName_15);
      mercury__io__open_output_4_p_0(ProfFileName_15, &Res_16);
      if (((MR_tag((MR_Word) Res_16)) == (MR_Integer) 1))
      {
        MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_16, (MR_Integer) 0))));
        MR_String ErrorMsg_19;
        MR_String Var_37;

        Var_37 = mercury__io__error_message_1_f_0(IOError_18);
        ErrorMsg_19 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", Var_37);
        libs__file_util__report_error_3_p_0(ErrorMsg_19);
        *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
      }
      else
      {
        MR_Word FileStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_16, (MR_Integer) 0))));

        hlds__hlds_dependency_graph__write_prof_dependency_graph_5_p_0(FileStream_17, STATE_VARIABLE_HLDS_0_20, STATE_VARIABLE_HLDS_21);
        mercury__io__close_output_3_p_0(FileStream_17);
      }
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
    else
      *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  {
    MR_Word ModuleNames_13;
    MR_Word LocalModulesList_14;
    MR_Word SymNames_15;
    MR_Word LocalModuleNames_16;
    MR_Word AnalysisInfo0_17;
    MR_Word AnalysisInfo_18;

    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_19, &ModuleNames_13);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 706, &LocalModulesList_14);
    SymNames_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[6]), LocalModulesList_14);
    LocalModuleNames_16 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_15);
    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_19, &AnalysisInfo0_17);
    analysis__prepare_intermodule_analysis_7_p_0(Globals_8, ModuleNames_13, LocalModuleNames_16, AnalysisInfo0_17, &AnalysisInfo_18);
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_18, STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word IntermodAnalysis_13;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 498, &IntermodAnalysis_13);
    switch (IntermodAnalysis_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleNames_30;
          MR_Word LocalModulesList_31;
          MR_Word SymNames_32;
          MR_Word LocalModuleNames_33;
          MR_Word AnalysisInfo0_34;
          MR_Word AnalysisInfo_35;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
          hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_14, &ModuleNames_30);
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 706, &LocalModulesList_31);
          SymNames_32 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[5]), LocalModulesList_31);
          LocalModuleNames_33 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_32);
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_14, &AnalysisInfo0_34);
          analysis__prepare_intermodule_analysis_7_p_0(Globals_8, ModuleNames_30, LocalModuleNames_33, AnalysisInfo0_34, &AnalysisInfo_35);
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_35, STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  {
    MR_Word Globals_11;
    MR_Word ShowDepGraph_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 179, &ShowDepGraph_12);
    switch (ShowDepGraph_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_13;
          MR_String FileName_14;
          MR_Word Res_15;

          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Writing dependency graph...");
          hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_19, &ModuleName_13);
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_dependency_graph\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[9])), ModuleName_13, &FileName_14);
          mercury__io__open_output_4_p_0(FileName_14, &Res_15);
          if (((MR_tag((MR_Word) Res_15)) == (MR_Integer) 1))
          {
            MR_Word IOError_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_15, (MR_Integer) 0))));
            MR_String ErrorMsg_18;
            MR_String Var_34;

            Var_34 = mercury__io__error_message_1_f_0(IOError_17);
            ErrorMsg_18 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", Var_34);
            libs__file_util__report_error_3_p_0(ErrorMsg_18);
            *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
          }
          else
          {
            MR_Word FileStream_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_15, (MR_Integer) 0))));

            hlds__hlds_dependency_graph__write_dependency_graph_5_p_0(FileStream_16, STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
            mercury__io__close_output_3_p_0(FileStream_16);
            libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
          }
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__pre_hlds_pass_19_p_0(
  MR_Word Globals_20,
  MR_Word OpModeAugment_21,
  MR_Word WriteDFile0_22,
  MR_Word Baggage0_23,
  MR_Word AugCompUnit0_24,
  MR_Word * HLDS1_25,
  MR_Word * QualInfo_26,
  MR_Word * MaybeTimestampMap_27,
  MR_Word * UndefTypes_28,
  MR_Word * UndefModes_29,
  MR_Word * FoundSemanticError_30,
  MR_Word STATE_VARIABLE_DumpInfo_0_76,
  MR_Word * STATE_VARIABLE_DumpInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_80,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_81)
{
  {
    MR_bool succeeded;
    MR_Word Stats_35;
    MR_Word Verbose_36;
    MR_Word MMCMake_37;
    MR_Word WriteDFile_38;
    MR_Word ParseTreeModuleSrc_39;
    MR_Word ModuleName_40;
    MR_Word MaybeTransOptDeps_41;
    MR_Word IntermodError_42;
    MR_Word Baggage1_43;
    MR_Word AugCompUnit1_44;
    MR_String EventSetFileName_45;
    MR_String EventSetName_46;
    MR_Word EventSpecMap1_47;
    MR_Word EventSetErrors_48;
    MR_Word AugCompUnit2_52;
    MR_Word EventSpecMap2_53;
    MR_Word MQInfo0_54;
    MR_Word MQUndefTypes_55;
    MR_Word MQUndefInsts_56;
    MR_Word MQUndefModes_57;
    MR_Word MQUndefTypeClasses_58;
    MR_Word QualifySpecs_59;
    MR_Word RecompInfo0_60;
    MR_Word AugCompUnit_61;
    MR_Word EventSpecMap_62;
    MR_Word TypeEqvMap_63;
    MR_Word UsedModules_64;
    MR_Word RecompInfo_65;
    MR_Word ExpandSpecs_66;
    MR_Word ExpandErrors_67;
    MR_Word MQInfo_68;
    MR_Word EventSet_69;
    MR_Word HLDS0_70;
    MR_Word MakeHLDSFoundInvalidType_71;
    MR_Word MakeHLDSFoundInvalidInstOrMode_72;
    MR_Word STATE_VARIABLE_Specs_90_90;
    MR_Word STATE_VARIABLE_Specs_94_94;
    MR_Word STATE_VARIABLE_Specs_95_95;
    MR_Word STATE_VARIABLE_Specs_101_101;
    MR_Word STATE_VARIABLE_Specs_102_102;
    MR_Word STATE_VARIABLE_Specs_107_107;
    MR_Word STATE_VARIABLE_Specs_112_112;
    MR_Word STATE_VARIABLE_Specs_113_113;
    MR_Word Var_181;

    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 79, &Stats_35);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 69, &Verbose_36);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 667, &MMCMake_37);
    ParseTreeModuleSrc_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_24, (MR_Integer) 0))));
    ModuleName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_39, (MR_Integer) 0))));
    succeeded = (MMCMake_37 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OpModeAugment_21 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      WriteDFile_38 = (MR_Integer) 0;
      MaybeTransOptDeps_41 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      WriteDFile_38 = WriteDFile0_22;
      switch (WriteDFile_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeTransOptDeps_41 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          top_level__mercury_compile_main__maybe_read_d_file_for_trans_opt_deps_5_p_0(Globals_20, ModuleName_40, &MaybeTransOptDeps_41);
          break;
      }
    }
    top_level__mercury_compile_main__maybe_grab_plain_and_trans_opt_files_13_p_0(Globals_20, OpModeAugment_21, Verbose_36, MaybeTransOptDeps_41, &IntermodError_42, Baggage0_23, &Baggage1_43, AugCompUnit0_24, &AugCompUnit1_44, STATE_VARIABLE_HaveReadModuleMaps_0_80, STATE_VARIABLE_HaveReadModuleMaps_81);
    *MaybeTimestampMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage1_43, (MR_Integer) 4))));
    Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage1_43, (MR_Integer) 6))));
    STATE_VARIABLE_Specs_90_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_181, STATE_VARIABLE_Specs_0_78);
    libs__globals__lookup_string_option_3_p_0(Globals_20, (MR_Integer) 217, &EventSetFileName_45);
    succeeded = (strcmp(EventSetFileName_45, (MR_String) "") == 0);
    if (succeeded)
    {
      EventSetName_46 = (MR_String) "";
      EventSpecMap1_47 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      EventSetErrors_48 = (MR_Integer) 0;
      STATE_VARIABLE_Specs_94_94 = STATE_VARIABLE_Specs_90_90;
    }
    else
    {
      MR_String EventSetName0_49;
      MR_Word EventSpecMap0_50;
      MR_Word EventSetSpecs_51;

      parse_tree__prog_event__read_event_set_6_p_0(EventSetFileName_45, &EventSetName0_49, &EventSpecMap0_50, &EventSetSpecs_51);
      STATE_VARIABLE_Specs_94_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EventSetSpecs_51, STATE_VARIABLE_Specs_90_90);
      EventSetErrors_48 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, EventSetSpecs_51);
      switch (EventSetErrors_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            EventSetName_46 = EventSetName0_49;
            EventSpecMap1_47 = EventSpecMap0_50;
          }
          break;
        case (MR_Integer) 1:
          {
            EventSetName_46 = (MR_String) "";
            EventSpecMap1_47 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
          }
          break;
      }
    }
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_36, Globals_20, STATE_VARIABLE_Specs_94_94, &STATE_VARIABLE_Specs_95_95);
    libs__file_util__maybe_write_string_4_p_0(Verbose_36, (MR_String) "% Module qualifying items...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_36);
    parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_20, AugCompUnit1_44, &AugCompUnit2_52, EventSpecMap1_47, &EventSpecMap2_53, EventSetFileName_45, &MQInfo0_54, &MQUndefTypes_55, &MQUndefInsts_56, &MQUndefModes_57, &MQUndefTypeClasses_58, (MR_Word) ((MR_Unsigned) 0U), &QualifySpecs_59);
    STATE_VARIABLE_Specs_101_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), QualifySpecs_59, STATE_VARIABLE_Specs_95_95);
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_36, Globals_20, STATE_VARIABLE_Specs_101_101, &STATE_VARIABLE_Specs_102_102);
    libs__file_util__maybe_write_string_4_p_0(Verbose_36, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_35);
    parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo0_54, &RecompInfo0_60);
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_36, Globals_20, STATE_VARIABLE_Specs_102_102, &STATE_VARIABLE_Specs_107_107);
    libs__file_util__maybe_write_string_4_p_0(Verbose_36, (MR_String) "% Expanding equivalence types and insts...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_36);
    parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(AugCompUnit2_52, &AugCompUnit_61, EventSpecMap2_53, &EventSpecMap_62, &TypeEqvMap_63, &UsedModules_64, RecompInfo0_60, &RecompInfo_65, &ExpandSpecs_66);
    ExpandErrors_67 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, ExpandSpecs_66);
    STATE_VARIABLE_Specs_112_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ExpandSpecs_66, STATE_VARIABLE_Specs_107_107);
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_36, Globals_20, STATE_VARIABLE_Specs_112_112, &STATE_VARIABLE_Specs_113_113);
    libs__file_util__maybe_write_string_4_p_0(Verbose_36, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_35);
    parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(RecompInfo_65, MQInfo0_54, &MQInfo_68);
    {
      EventSet_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EventSet_69, 0) = ((MR_Box) (EventSetName_46));
      MR_hl_field(MR_mktag(0), EventSet_69, 1) = ((MR_Box) (EventSpecMap_62));
    }
    top_level__mercury_compile_main__make_hlds_17_p_0(Globals_20, AugCompUnit_61, EventSet_69, MQInfo_68, TypeEqvMap_63, UsedModules_64, Verbose_36, Stats_35, &HLDS0_70, QualInfo_26, &MakeHLDSFoundInvalidType_71, &MakeHLDSFoundInvalidInstOrMode_72, FoundSemanticError_30, STATE_VARIABLE_Specs_113_113, STATE_VARIABLE_Specs_79);
    top_level__mercury_compile_main__maybe_write_definitions_5_p_0(Verbose_36, Stats_35, HLDS0_70);
    top_level__mercury_compile_main__maybe_write_definition_line_counts_5_p_0(Verbose_36, Stats_35, HLDS0_70);
    top_level__mercury_compile_main__maybe_write_definition_extents_5_p_0(Verbose_36, Stats_35, HLDS0_70);
    succeeded = (MQUndefTypes_55 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MQUndefTypeClasses_58 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (EventSetErrors_48 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (ExpandErrors_67 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MakeHLDSFoundInvalidType_71 == (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
      *UndefTypes_28 = (MR_Integer) 0;
    else
      *UndefTypes_28 = (MR_Integer) 1;
    succeeded = (MQUndefInsts_56 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MQUndefModes_57 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (MakeHLDSFoundInvalidInstOrMode_72 == (MR_Integer) 0);
    }
    if (succeeded)
      *UndefModes_29 = (MR_Integer) 0;
    else
      *UndefModes_29 = (MR_Integer) 1;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(HLDS0_70, (MR_Integer) 1, (MR_String) "initial", STATE_VARIABLE_DumpInfo_0_76, STATE_VARIABLE_DumpInfo_77);
    switch (WriteDFile_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllDeps_73;
          MR_Word BurdenedAugCompUnit0_74;
          MR_Word OutputMMCMakeDeps_75;

          hlds__hlds_module__module_info_get_all_deps_2_p_0(HLDS0_70, &AllDeps_73);
          {
            BurdenedAugCompUnit0_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BurdenedAugCompUnit0_74, 0) = ((MR_Box) (Baggage0_23));
            MR_hl_field(MR_mktag(0), BurdenedAugCompUnit0_74, 1) = ((MR_Box) (AugCompUnit0_24));
          }
          parse_tree__write_deps_file__write_dependency_file_7_p_0(Globals_20, BurdenedAugCompUnit0_74, (MR_Word) ((MR_Unsigned) 0U), AllDeps_73, MaybeTransOptDeps_41);
          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 147, &OutputMMCMakeDeps_75);
          switch (OutputMMCMakeDeps_75) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              make__make_write_module_dep_file_4_p_0(Globals_20, BurdenedAugCompUnit0_74);
              break;
          }
        }
        break;
    }
    succeeded = (*FoundSemanticError_30 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (IntermodError_42 == (MR_Integer) 1);
    if (succeeded)
      hlds__hlds_module__module_info_incr_errors_2_p_0(HLDS0_70, HLDS1_25);
    else
      *HLDS1_25 = HLDS0_70;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_definition_extents_5_p_0(
  MR_Word Verbose_6,
  MR_Word Stats_7,
  MR_Word HLDS_8)
{
  {
    MR_Word Globals_10;
    MR_Word Extents_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_8, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 175, &Extents_11);
    switch (Extents_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_12;
          MR_String FileName_13;
          MR_Word Res_14;

          libs__file_util__maybe_write_string_4_p_0(Verbose_6, (MR_String) "% Writing definition extents...");
          hlds__hlds_module__module_info_get_name_2_p_0(HLDS_8, &ModuleName_12);
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_definition_extents\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[8])), ModuleName_12, &FileName_13);
          mercury__io__open_output_4_p_0(FileName_13, &Res_14);
          if (((MR_tag((MR_Word) Res_14)) == (MR_Integer) 1))
          {
            MR_Word IOError_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0))));
            MR_String ErrorMsg_17;
            MR_String Var_31;

            Var_31 = mercury__io__error_message_1_f_0(IOError_16);
            ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definition extents: ", Var_31);
            libs__file_util__report_error_3_p_0(ErrorMsg_17);
          }
          else
          {
            MR_Word FileStream_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_14, (MR_Integer) 0))));

            hlds__hlds_defns__write_hlds_defn_extents_4_p_0(FileStream_15, HLDS_8);
            mercury__io__close_output_3_p_0(FileStream_15);
            libs__file_util__maybe_write_string_4_p_0(Verbose_6, (MR_String) " done.\n");
          }
          libs__file_util__maybe_report_stats_3_p_0(Stats_7);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_definition_line_counts_5_p_0(
  MR_Word Verbose_6,
  MR_Word Stats_7,
  MR_Word HLDS_8)
{
  {
    MR_Word Globals_10;
    MR_Word LineCounts_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_8, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 174, &LineCounts_11);
    switch (LineCounts_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_12;
          MR_String FileName_13;
          MR_Word Res_14;

          libs__file_util__maybe_write_string_4_p_0(Verbose_6, (MR_String) "% Writing definition line counts...");
          hlds__hlds_module__module_info_get_name_2_p_0(HLDS_8, &ModuleName_12);
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_definition_line_counts\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[7])), ModuleName_12, &FileName_13);
          mercury__io__open_output_4_p_0(FileName_13, &Res_14);
          if (((MR_tag((MR_Word) Res_14)) == (MR_Integer) 1))
          {
            MR_Word IOError_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0))));
            MR_String ErrorMsg_17;
            MR_String Var_31;

            Var_31 = mercury__io__error_message_1_f_0(IOError_16);
            ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definition line counts: ", Var_31);
            libs__file_util__report_error_3_p_0(ErrorMsg_17);
          }
          else
          {
            MR_Word FileStream_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_14, (MR_Integer) 0))));

            hlds__hlds_defns__write_hlds_defn_line_counts_4_p_0(FileStream_15, HLDS_8);
            mercury__io__close_output_3_p_0(FileStream_15);
            libs__file_util__maybe_write_string_4_p_0(Verbose_6, (MR_String) " done.\n");
          }
          libs__file_util__maybe_report_stats_3_p_0(Stats_7);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_definitions_5_p_0(
  MR_Word Verbose_6,
  MR_Word Stats_7,
  MR_Word HLDS_8)
{
  {
    MR_Word Globals_10;
    MR_Word ShowDefns_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_8, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 173, &ShowDefns_11);
    switch (ShowDefns_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_12;
          MR_String FileName_13;
          MR_Word Res_14;

          libs__file_util__maybe_write_string_4_p_0(Verbose_6, (MR_String) "% Writing definitions...");
          hlds__hlds_module__module_info_get_name_2_p_0(HLDS_8, &ModuleName_12);
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_definitions\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[6])), ModuleName_12, &FileName_13);
          mercury__io__open_output_4_p_0(FileName_13, &Res_14);
          if (((MR_tag((MR_Word) Res_14)) == (MR_Integer) 1))
          {
            MR_Word IOError_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0))));
            MR_String ErrorMsg_17;
            MR_String Var_31;

            Var_31 = mercury__io__error_message_1_f_0(IOError_16);
            ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definitions: ", Var_31);
            libs__file_util__report_error_3_p_0(ErrorMsg_17);
          }
          else
          {
            MR_Word FileStream_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_14, (MR_Integer) 0))));

            hlds__hlds_defns__write_hlds_defns_4_p_0(FileStream_15, HLDS_8);
            mercury__io__close_output_3_p_0(FileStream_15);
            libs__file_util__maybe_write_string_4_p_0(Verbose_6, (MR_String) " done.\n");
          }
          libs__file_util__maybe_report_stats_3_p_0(Stats_7);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__make_hlds_17_p_0(
  MR_Word Globals_18,
  MR_Word AugCompUnit_19,
  MR_Word EventSet_20,
  MR_Word MQInfo_21,
  MR_Word TypeEqvMap_22,
  MR_Word UsedModules_23,
  MR_Word Verbose_24,
  MR_Word Stats_25,
  MR_Word * STATE_VARIABLE_HLDS_39,
  MR_Word * QualInfo_27,
  MR_Word * FoundInvalidType_28,
  MR_Word * FoundInvalidInstOrMode_29,
  MR_Word * FoundSemanticError_30,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeModuleSrc_33;
    MR_Word ModuleName_34;
    MR_String DumpBaseFileName_35;
    MR_Word MakeSpecs_36;
    MR_Integer Status_37;
    MR_Word SpecsErrors_38;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word STATE_VARIABLE_HLDS_54_54;
    MR_Word STATE_VARIABLE_Specs_55_55;

    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_24, Globals_18, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_44_44);
    libs__file_util__maybe_write_string_4_p_0(Verbose_24, (MR_String) "% Converting parse tree to hlds...\n");
    ParseTreeModuleSrc_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_19, (MR_Integer) 0))));
    ModuleName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 0))));
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.make_hlds\'/17", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[5])), ModuleName_34, &DumpBaseFileName_35);
    hlds__make_hlds__parse_tree_to_hlds_11_p_0(AugCompUnit_19, Globals_18, DumpBaseFileName_35, MQInfo_21, TypeEqvMap_22, UsedModules_23, QualInfo_27, FoundInvalidType_28, FoundInvalidInstOrMode_29, &STATE_VARIABLE_HLDS_54_54, &MakeSpecs_36);
    STATE_VARIABLE_Specs_55_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MakeSpecs_36, STATE_VARIABLE_Specs_44_44);
    hlds__hlds_module__module_info_set_event_set_3_p_0(EventSet_20, STATE_VARIABLE_HLDS_54_54, STATE_VARIABLE_HLDS_39);
    mercury__io__get_exit_status_3_p_0(&Status_37);
    SpecsErrors_38 = parse_tree__error_util__contains_errors_2_f_0(Globals_18, STATE_VARIABLE_Specs_55_55);
    succeeded = (Status_37 != (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (SpecsErrors_38 == (MR_Integer) 1);
    if (succeeded)
    {
      *FoundSemanticError_30 = (MR_Integer) 1;
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
      *FoundSemanticError_30 = (MR_Integer) 0;
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_24, Globals_18, STATE_VARIABLE_Specs_55_55, STATE_VARIABLE_Specs_41);
    libs__file_util__maybe_write_string_4_p_0(Verbose_24, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_25);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_grab_plain_and_trans_opt_files_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeAugment_15,
  MR_Word Verbose_16,
  MR_Word MaybeTransOptDeps_17,
  MR_Word * Error_18,
  MR_Word STATE_VARIABLE_Baggage_0_42,
  MR_Word * STATE_VARIABLE_Baggage_43,
  MR_Word STATE_VARIABLE_AugCompUnit_0_44,
  MR_Word * STATE_VARIABLE_AugCompUnit_45,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_47)
{
  {
    MR_bool succeeded;
    MR_Word IntermodOpt_23;
    MR_Word UseOptInt_24;
    MR_Word TransOpt_25;
    MR_Word IntermodAnalysis_26;
    MR_Word PlainOptError_27;
    MR_Word TransOptError_29;
    MR_Word STATE_VARIABLE_Baggage_57_57;
    MR_Word STATE_VARIABLE_AugCompUnit_58_58;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_59_59;

    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 493, &IntermodOpt_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 495, &UseOptInt_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 497, &TransOpt_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 498, &IntermodAnalysis_26);
    succeeded = (UseOptInt_24 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (IntermodOpt_23 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (IntermodAnalysis_26 == (MR_Integer) 1);
    }
    if (succeeded)
      succeeded = (OpModeAugment_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Reading .opt files...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_16);
      parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_10_p_0(Globals_14, &PlainOptError_27, STATE_VARIABLE_Baggage_0_42, &STATE_VARIABLE_Baggage_57_57, STATE_VARIABLE_AugCompUnit_0_44, &STATE_VARIABLE_AugCompUnit_58_58, STATE_VARIABLE_HaveReadModuleMaps_0_46, &STATE_VARIABLE_HaveReadModuleMaps_59_59);
      libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Done.\n");
    }
    else
    {
      PlainOptError_27 = (MR_Integer) 0;
      STATE_VARIABLE_HaveReadModuleMaps_59_59 = STATE_VARIABLE_HaveReadModuleMaps_0_46;
      STATE_VARIABLE_AugCompUnit_58_58 = STATE_VARIABLE_AugCompUnit_0_44;
      STATE_VARIABLE_Baggage_57_57 = STATE_VARIABLE_Baggage_0_42;
    }
    switch (MR_tag((MR_Word) OpModeAugment_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TransOptError_29 = (MR_Integer) 0;
              *STATE_VARIABLE_Baggage_43 = STATE_VARIABLE_Baggage_57_57;
              *STATE_VARIABLE_AugCompUnit_45 = STATE_VARIABLE_AugCompUnit_58_58;
              *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_59_59;
            }
            break;
          case (MR_Integer) 1:
            if ((MaybeTransOptDeps_17 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ParseTreeModuleSrc_30;
              MR_Word ModuleName_31;
              MR_Word WarnNoTransOptDeps_32;

              TransOptError_29 = (MR_Integer) 0;
              ParseTreeModuleSrc_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_58_58, (MR_Integer) 0))));
              ModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_30, (MR_Integer) 0))));
              libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 19, &WarnNoTransOptDeps_32);
              switch (WarnNoTransOptDeps_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Pieces_33;
                    MR_Word Msg_34;
                    MR_Word Spec_35;
                    MR_Word Var_74;
                    MR_Word Var_77;
                    MR_Word Var_78;
                    MR_Word Var_93;
                    MR_Word Var_94;
                    MR_Word Var_99;

                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (ModuleName_31));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
                      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[16])));
                    }
                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[12])));
                      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
                    }
                    {
                      Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (Var_74));
                    }
                    {
                      Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Pieces_33));
                    }
                    {
                      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Msg_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Msg_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(2), Msg_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(2), Msg_34, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(2), Msg_34, 3) = ((MR_Box) (Var_93));
                    }
                    {
                      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Msg_34));
                      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.maybe_grab_plain_and_trans_opt_files\'/13"));
                      MR_hl_field(MR_mktag(0), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(0), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(0), Spec_35, 3) = ((MR_Box) (Var_99));
                    }
                    parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_14, Spec_35);
                  }
                  break;
              }
              *STATE_VARIABLE_Baggage_43 = STATE_VARIABLE_Baggage_57_57;
              *STATE_VARIABLE_AugCompUnit_45 = STATE_VARIABLE_AugCompUnit_58_58;
              *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_59_59;
            }
            else
            {
              MR_Word TransOptDeps_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps_17, (MR_Integer) 0))));

              parse_tree__grab_modules__grab_trans_opt_files_11_p_0(Globals_14, TransOptDeps_28, &TransOptError_29, STATE_VARIABLE_Baggage_57_57, STATE_VARIABLE_Baggage_43, STATE_VARIABLE_AugCompUnit_58_58, STATE_VARIABLE_AugCompUnit_45, STATE_VARIABLE_HaveReadModuleMaps_59_59, STATE_VARIABLE_HaveReadModuleMaps_47);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            switch (TransOpt_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  TransOptError_29 = (MR_Integer) 0;
                  *STATE_VARIABLE_Baggage_43 = STATE_VARIABLE_Baggage_57_57;
                  *STATE_VARIABLE_AugCompUnit_45 = STATE_VARIABLE_AugCompUnit_58_58;
                  *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_59_59;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ancestors_37;
                  MR_Word Deps0_38;
                  MR_Word Deps_39;
                  MR_Word TransOptFiles_40;
                  MR_Word TransOptFilesList_41;
                  MR_Word Var_63;
                  MR_Word Var_64;
                  MR_Word Var_65;
                  MR_Word ParseTreeModuleSrc_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_58_58, (MR_Integer) 0))));
                  MR_Word ModuleName_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_106, (MR_Integer) 0))));

                  Ancestors_37 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_107);
                  Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_106, (MR_Integer) 9))));
                  Deps0_38 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_63);
                  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_107)), Deps0_38, &Deps_39);
                  {
                    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Deps_39));
                    MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Ancestors_37));
                    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
                  }
                  TransOptFiles_40 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_64);
                  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFiles_40, &TransOptFilesList_41);
                  parse_tree__grab_modules__grab_trans_opt_files_11_p_0(Globals_14, TransOptFilesList_41, &TransOptError_29, STATE_VARIABLE_Baggage_57_57, STATE_VARIABLE_Baggage_43, STATE_VARIABLE_AugCompUnit_58_58, STATE_VARIABLE_AugCompUnit_45, STATE_VARIABLE_HaveReadModuleMaps_59_59, STATE_VARIABLE_HaveReadModuleMaps_47);
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (TransOpt_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TransOptError_29 = (MR_Integer) 0;
              *STATE_VARIABLE_Baggage_43 = STATE_VARIABLE_Baggage_57_57;
              *STATE_VARIABLE_AugCompUnit_45 = STATE_VARIABLE_AugCompUnit_58_58;
              *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_59_59;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Ancestors_37;
              MR_Word Deps0_38;
              MR_Word Deps_39;
              MR_Word TransOptFiles_40;
              MR_Word TransOptFilesList_41;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word ParseTreeModuleSrc_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_58_58, (MR_Integer) 0))));
              MR_Word ModuleName_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_106, (MR_Integer) 0))));

              Ancestors_37 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_107);
              Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_106, (MR_Integer) 9))));
              Deps0_38 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_63);
              mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_107)), Deps0_38, &Deps_39);
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Deps_39));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Ancestors_37));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
              }
              TransOptFiles_40 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_64);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFiles_40, &TransOptFilesList_41);
              parse_tree__grab_modules__grab_trans_opt_files_11_p_0(Globals_14, TransOptFilesList_41, &TransOptError_29, STATE_VARIABLE_Baggage_57_57, STATE_VARIABLE_Baggage_43, STATE_VARIABLE_AugCompUnit_58_58, STATE_VARIABLE_AugCompUnit_45, STATE_VARIABLE_HaveReadModuleMaps_59_59, STATE_VARIABLE_HaveReadModuleMaps_47);
            }
            break;
        }
        break;
    }
    mercury__bool__or_3_p_0(PlainOptError_27, TransOptError_29, Error_18);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_read_d_file_for_trans_opt_deps_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * MaybeTransOptDeps_8)
{
  {
    MR_Word TransOpt_10;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 497, &TransOpt_10);
    switch (TransOpt_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeTransOptDeps_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Verbose_11;
          MR_String DependencyFileName_12;
          MR_Word OpenResult_13;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 69, &Verbose_11);
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_6, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_read_d_file_for_trans_opt_deps\'/5", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[3])), ModuleName_7, &DependencyFileName_12);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Reading auto-dependency file \140");
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, DependencyFileName_12);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "\'...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
          mercury__io__open_input_4_p_0(DependencyFileName_12, &OpenResult_13);
          if (((MR_tag((MR_Word) OpenResult_13)) == (MR_Integer) 1))
          {
            MR_Word IOError_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_13, (MR_Integer) 0))));
            MR_String IOErrorMessage_22;
            MR_String Message_23;
            MR_Word Var_44;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_49;

            libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
            mercury__io__error_message_2_p_0(IOError_21, &IOErrorMessage_22);
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (IOErrorMessage_22));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) ((MR_String) "\' for input: "));
              MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (DependencyFileName_12));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
            }
            mercury__string__append_list_2_p_0(Var_44, &Message_23);
            libs__file_util__report_error_3_p_0(Message_23);
            *MaybeTransOptDeps_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Stream_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_13, (MR_Integer) 0))));
            MR_Word OldStream_15;
            MR_String TransOptDateFileName_16;
            MR_String SearchPattern_17;
            MR_Word FindResult_18;
            MR_Word Var_20;

            mercury__io__set_input_stream_4_p_0(Stream_14, &OldStream_15);
            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_6, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_read_d_file_for_trans_opt_deps\'/5", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[4])), ModuleName_7, &TransOptDateFileName_16);
            SearchPattern_17 = mercury__string__f_43_43_2_f_0(TransOptDateFileName_16, (MR_String) " :");
            top_level__mercury_compile_main__read_dependency_file_find_start_4_p_0(SearchPattern_17, &FindResult_18);
            switch (FindResult_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *MaybeTransOptDeps_8 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TransOptDeps_19;

                  top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(&TransOptDeps_19);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeTransOptDeps_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TransOptDeps_19));
                  }
                }
                break;
            }
            mercury__io__set_input_stream_4_p_0(OldStream_15, &Var_20);
            mercury__io__close_input_3_p_0(Stream_14);
            libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) " done.\n");
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__2088__1_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(
  MR_Word * TransOptDeps_4)
{
  {
    MR_bool succeeded;
    MR_Word Result_6;
    MR_String FileName_13;
    MR_Word TypeCtorInfo_28_28;
    MR_Word CharList0_7;
    MR_Word CharList1_8;
    MR_Word NotIsWhitespace_9;
    MR_Word CharList_11;
    MR_String FileName0_12;
    MR_Word Var_21;
    MR_String Var_23;

    mercury__io__read_line_3_p_0(&Result_6);
    succeeded = ((MR_tag((MR_Word) Result_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      CharList0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_6, (MR_Integer) 0))));
      Var_21 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[3]);
      TypeCtorInfo_28_28 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
      mercury__list__drop_while_3_p_0(TypeCtorInfo_28_28, Var_21, CharList0_7, &CharList1_8);
      NotIsWhitespace_9 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[4]);
      mercury__list__take_while_3_p_0(TypeCtorInfo_28_28, NotIsWhitespace_9, CharList1_8, &CharList_11);
      mercury__string__from_char_list_2_p_0(CharList_11, &FileName0_12);
      Var_23 = (MR_String) ".trans_opt";
      succeeded = mercury__string__remove_suffix_3_p_0(FileName0_12, Var_23, &FileName_13);
    }
    if (succeeded)
    {
      MR_String ModuleFileName_15;
      MR_Word Module_16;
      MR_Word TransOptDeps0_17;
      MR_String BaseFileName_14;

      succeeded = mercury__string__append_3_p_1((MR_String) "Mercury/trans_opts/", &BaseFileName_14, FileName_13);
      if (succeeded)
        ModuleFileName_15 = BaseFileName_14;
      else
        ModuleFileName_15 = FileName_13;
      parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleFileName_15, &Module_16);
      top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(&TransOptDeps0_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *TransOptDeps_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TransOptDeps0_17));
      }
    }
    else
      *TransOptDeps_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_dependency_file_find_start_4_p_0(
  MR_String SearchPattern_5,
  MR_Word * Success_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_3_p_0(&Result_8);
    switch (MR_tag((MR_Word) Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Success_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_8, (MR_Integer) 0))));

          succeeded = mercury__string__prefix_2_p_0(Line_9, SearchPattern_5);
          if (succeeded)
            *Success_6 = (MR_Integer) 1;
          else
          {
            // direct tailcall eliminated
            ;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        *Success_6 = (MR_Integer) 0;
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__disable_warning_options_2_p_0(
  MR_Word Globals0_3,
  MR_Word * Globals_4)
{
  {
    MR_Word OptionTable0_5;
    MR_Word OptionTable1_6;
    MR_Word OptionTable_7;
    MR_Word Var_8;
    MR_Word Var_11;

    libs__globals__get_options_2_p_0(Globals0_3, &OptionTable0_5);
    Var_8 = libs__options__style_warning_options_0_f_0();
    libs__options__set_all_options_to_4_p_0(Var_8, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[2])), OptionTable0_5, &OptionTable1_6);
    Var_11 = libs__options__non_style_warning_options_0_f_0();
    libs__options__set_all_options_to_4_p_0(Var_11, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[2])), OptionTable1_6, &OptionTable_7);
    libs__globals__set_options_3_p_0(OptionTable_7, Globals0_3, Globals_4);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_String * ModuleToLink_4)
{
  {
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 0))));

    parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_5, ModuleToLink_4);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(
  MR_Word Globals_7,
  MR_Word TimestampOtherExt_8,
  MR_Word ModuleName_9,
  MR_Word * TimestampFiles_10)
{
  {
    MR_String FileName_12;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (TimestampOtherExt_8));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_main.find_timestamp_files_2\'/6", (MR_Integer) 0, Var_17, ModuleName_9, &FileName_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TimestampFiles_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_6_p_0(
  MR_Word Globals_7,
  MR_Word TargetOtherExt_8,
  MR_Word ModuleName_9,
  MR_Word * TargetFiles_10)
{
  {
    MR_String FileName_12;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (TargetOtherExt_8));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_main.usual_find_target_files\'/6", (MR_Integer) 0, Var_17, ModuleName_9, &FileName_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TargetFiles_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrade_using_lib_file_9_p_0(
  MR_Word VeryVerbose_10,
  MR_String DirName_11,
  MR_String GradeFileName_12,
  MR_Word GradeFileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_21,
  MR_Word * STATE_VARIABLE_GradeOpts_22)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_117_115_105_110_103_95_108_105_98_95_102_105_108_101_95_95_91_49_93_95_48_9_p_0(DirName_11, GradeFileName_12, GradeFileType_13, Continue_14, STATE_VARIABLE_GradeOpts_0_21, STATE_VARIABLE_GradeOpts_22);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_117_115_105_110_103_95_108_105_98_95_102_105_108_101_95_95_91_49_93_95_48_9_p_0(
  MR_String DirName_11,
  MR_String GradeFileName_12,
  MR_Word GradeFileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_21,
  MR_Word * STATE_VARIABLE_GradeOpts_22)
{
  {
    MR_bool succeeded;

    switch (GradeFileType_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 3:
      case (MR_Integer) 0:
      case (MR_Integer) 8:
      case (MR_Integer) 9:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 10:
        {
          *Continue_14 = (MR_Integer) 1;
          *STATE_VARIABLE_GradeOpts_22 = STATE_VARIABLE_GradeOpts_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String LibFile_17;

          succeeded = mercury__string__prefix_2_p_0(GradeFileName_12, (MR_String) "csharp");
          if (succeeded)
          {
            LibFile_17 = (MR_String) "mer_std.dll";
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = mercury__string__prefix_2_p_0(GradeFileName_12, (MR_String) "java");
            if (succeeded)
            {
              LibFile_17 = (MR_String) "mer_std.jar";
              succeeded = MR_TRUE;
            }
            else
              succeeded = mercury__builtin__false_0_p_0();
          }
          if (succeeded)
          {
            MR_String TargetFile_18;
            MR_Word Result_19;
            MR_String Var_25;

            Var_25 = mercury__dir__f_slash_2_f_0(DirName_11, GradeFileName_12);
            TargetFile_18 = mercury__dir__f_slash_2_f_0(Var_25, LibFile_17);
            mercury__io__check_file_accessibility_5_p_0(TargetFile_18, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[3])), &Result_19);
            if ((Result_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (GradeFileName_12));
                MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (STATE_VARIABLE_GradeOpts_0_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GradeOpts_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
              }
            }
            else
              *STATE_VARIABLE_GradeOpts_22 = STATE_VARIABLE_GradeOpts_0_21;
          }
          else
            *STATE_VARIABLE_GradeOpts_22 = STATE_VARIABLE_GradeOpts_0_21;
          *Continue_14 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrade_using_init_file_9_p_0(
  MR_Word VeryVerbose_10,
  MR_String DirName_11,
  MR_String GradeFileName_12,
  MR_Word GradeFileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * STATE_VARIABLE_GradeOpts_21)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_117_115_105_110_103_95_105_110_105_116_95_102_105_108_101_95_95_91_49_93_95_48_9_p_0(DirName_11, GradeFileName_12, GradeFileType_13, Continue_14, STATE_VARIABLE_GradeOpts_0_20, STATE_VARIABLE_GradeOpts_21);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_117_115_105_110_103_95_105_110_105_116_95_102_105_108_101_95_95_91_49_93_95_48_9_p_0(
  MR_String DirName_11,
  MR_String GradeFileName_12,
  MR_Word GradeFileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * STATE_VARIABLE_GradeOpts_21)
{
  switch (GradeFileType_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 6:
    case (MR_Integer) 5:
    case (MR_Integer) 7:
    case (MR_Integer) 3:
    case (MR_Integer) 0:
    case (MR_Integer) 8:
    case (MR_Integer) 9:
    case (MR_Integer) 4:
    case (MR_Integer) 2:
    case (MR_Integer) 10:
      {
        *Continue_14 = (MR_Integer) 1;
        *STATE_VARIABLE_GradeOpts_21 = STATE_VARIABLE_GradeOpts_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String InitFile_17;
        MR_Word Result_18;
        MR_String Var_24;

        Var_24 = mercury__dir__f_slash_2_f_0(DirName_11, GradeFileName_12);
        InitFile_17 = mercury__dir__f_slash_2_f_0(Var_24, (MR_String) "mer_std.init");
        mercury__io__check_file_accessibility_5_p_0(InitFile_17, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[3])), &Result_18);
        if ((Result_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_33;

          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (GradeFileName_12));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (STATE_VARIABLE_GradeOpts_0_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_GradeOpts_21 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
          }
        }
        else
          *STATE_VARIABLE_GradeOpts_21 = STATE_VARIABLE_GradeOpts_0_20;
        *Continue_14 = (MR_Integer) 1;
      }
      break;
  }
}

void MR_CALL 
top_level__mercury_compile_main__main_for_make_4_p_0(
  MR_Word Globals_5,
  MR_Word Args_6)
{
  {
    MR_bool succeeded;
    MR_Word EnvVarMap_9;
    MR_Word Variables_10;
    MR_Word Version_24;
    MR_Word Help_25;

    mercury__io__get_environment_var_map_3_p_0(&EnvVarMap_9);
    Variables_10 = make__options_file__options_variables_init_1_f_0(EnvVarMap_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 703, &Version_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 702, &Help_25);
    succeeded = (Help_25 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StdOut_26;

      mercury__io__stdout_stream_3_p_0(&StdOut_26);
      libs__handle_options__long_usage_3_p_0(StdOut_26);
    }
    else
    {
      succeeded = (Version_24 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word StdOut_37;

        mercury__io__stdout_stream_3_p_0(&StdOut_37);
        libs__handle_options__display_compiler_version_3_p_0(StdOut_37);
      }
      else
      {
        MR_Word OpMode_27;
        MR_Word HaveReadModuleMaps0_28;
        MR_Word _HaveReadModuleMaps_29;

        libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_27);
        HaveReadModuleMaps0_28 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
        top_level__mercury_compile_main__do_op_mode_10_p_0(Globals_5, OpMode_27, (MR_Word) ((MR_Unsigned) 0U), Variables_10, (MR_Word) ((MR_Unsigned) 0U), Args_6, HaveReadModuleMaps0_28, &_HaveReadModuleMaps_29);
      }
    }
  }
}

void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0(void)
{
  {
    MR_Word StdErr_4;
    MR_Word CmdLineArgs_6;
    MR_Word Res_8;
    MR_Word Var_5;

{
#define MR_PROC_LABEL top_level__mercury_compile_main__real_main_2_p_0


		{

#ifdef MR_BOEHM_GC
    /*
    ** Explicitly force the initial heap size to be at least 4 Mb.
    **
    ** This works around a bug in the Boehm collector (for versions up
    ** to at least 6.2) where the collector would sometimes abort with
    ** the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    ** on dec-alpha-osf3.2).
    **
    ** Doing this should also improve performance slightly by avoiding
    ** frequent garbage collection during start-up.
    */
    GC_expand_hp(4 * 1024 * 1024);
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__io__stderr_stream_3_p_0(&StdErr_4);
    mercury__io__set_output_stream_4_p_0(StdErr_4, &Var_5);
    mercury__io__command_line_arguments_3_p_0(&CmdLineArgs_6);
    mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(CmdLineArgs_6, &Res_8);
    if (((MR_tag((MR_Word) Res_8)) == (MR_Integer) 1))
    {
      MR_Word E_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_8, (MR_Integer) 0))));
      MR_String Var_24;

      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      Var_24 = mercury__io__error_message_1_f_0(E_10);
      mercury__io__write_string_3_p_0(Var_24);
      mercury__io__nl_2_p_0();
    }
    else
    {
      MR_Word ExpandedCmdLineArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_8, (MR_Integer) 0))));

      top_level__mercury_compile_main__real_main_after_expansion_3_p_0(ExpandedCmdLineArgs_9);
    }
    libs__globals__close_any_specific_compiler_streams_2_p_0();
  }
}

static void MR_CALL 
top_level__mercury_compile_main__real_main_after_expansion_3_p_0(
  MR_Word CmdLineArgs_4)
{
  {
    MR_bool succeeded;
    MR_Word EnvVarMap_6;
    MR_Word AllSpecs_14;
    MR_Word OptionArgs_16;
    MR_Word NonOptionArgs_17;
    MR_Word DetectedGradeFlags_18;
    MR_Word Variables_19;
    MR_Word MaybeMCFlags_20;
    MR_String ArgFile_7;
    MR_Word ExtraArgs_8;
    MR_String Var_70;
    MR_Word Var_71;

    mercury__io__get_environment_var_map_3_p_0(&EnvVarMap_6);
    succeeded = (CmdLineArgs_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(1), CmdLineArgs_4, (MR_Integer) 0))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CmdLineArgs_4, (MR_Integer) 1))));
      succeeded = (strcmp(Var_70, (MR_String) "--arg-file") == 0);
      if (succeeded)
      {
        succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgFile_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
          ExtraArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeArgs1_11;
      MR_Word ArgsNonUndefSpecs_12;
      MR_Word ArgsUndefSpecs_13;

      if (!((ExtraArgs_8 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Var_73;
        MR_String Var_75;

        Var_75 = mercury__string__string_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), ((MR_Box) (ExtraArgs_8)));
        Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", Var_75);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_main.real_main_after_expansion\'/3", Var_73);
          return;
        }
      }
      make__options_file__read_args_file_6_p_0(ArgFile_7, &MaybeArgs1_11, &ArgsNonUndefSpecs_12, &ArgsUndefSpecs_13);
      AllSpecs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ArgsNonUndefSpecs_12, ArgsUndefSpecs_13);
      if ((MaybeArgs1_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OptionArgs_16 = (MR_Word) ((MR_Unsigned) 0U);
        NonOptionArgs_17 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Args1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgs1_11, (MR_Integer) 0))));

        libs__handle_options__separate_option_args_5_p_0(Args1_15, &OptionArgs_16, &NonOptionArgs_17);
      }
      DetectedGradeFlags_18 = (MR_Word) ((MR_Unsigned) 0U);
      Variables_19 = make__options_file__options_variables_init_1_f_0(EnvVarMap_6);
      MaybeMCFlags_20 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[0]));
    }
    else
    {
      MR_Word ArgsGlobals_22;
      MR_Word OptionSearchDirectories_23;
      MR_Word OptionsFiles_24;
      MR_Word Variables0_25;
      MR_Word OptFileNonUndefSpecs_26;
      MR_Word OptFileUndefSpecs_27;
      MR_Word WarnUndef_28;
      MR_Word OptFileSpecs_29;
      MR_Word OptFileErrors_30;
      MR_Word _Errors0_21;

      libs__handle_options__handle_given_options_7_p_0(CmdLineArgs_4, &OptionArgs_16, &NonOptionArgs_17, &_Errors0_21, &ArgsGlobals_22);
      libs__globals__lookup_accumulating_option_3_p_0(ArgsGlobals_22, (MR_Integer) 684, &OptionSearchDirectories_23);
      libs__globals__lookup_accumulating_option_3_p_0(ArgsGlobals_22, (MR_Integer) 682, &OptionsFiles_24);
      make__options_file__read_options_files_named_in_options_file_option_7_p_0(OptionSearchDirectories_23, OptionsFiles_24, &Variables0_25, &OptFileNonUndefSpecs_26, &OptFileUndefSpecs_27);
      libs__globals__lookup_bool_option_3_p_0(ArgsGlobals_22, (MR_Integer) 33, &WarnUndef_28);
      switch (WarnUndef_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OptFileSpecs_29 = OptFileNonUndefSpecs_26;
          break;
        case (MR_Integer) 1:
          OptFileSpecs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileNonUndefSpecs_26, OptFileUndefSpecs_27);
          break;
      }
      OptFileErrors_30 = parse_tree__error_util__contains_errors_2_f_0(ArgsGlobals_22, OptFileSpecs_29);
      switch (OptFileErrors_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MCFlags0_31;
            MR_Word MCFlagsSpecs0_32;
            MR_Word MCFlagsErrors0_33;

            top_level__mercury_compile_main__maybe_dump_options_file_4_p_0(ArgsGlobals_22, Variables0_25);
            make__options_file__lookup_mmc_options_3_p_0(Variables0_25, &MCFlags0_31, &MCFlagsSpecs0_32);
            MCFlagsErrors0_33 = parse_tree__error_util__contains_errors_2_f_0(ArgsGlobals_22, MCFlagsSpecs0_32);
            switch (MCFlagsErrors0_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FlagsSpecs_37;
                  MR_Word FlagsArgsGlobals_38;
                  MR_Word Var_90;
                  MR_Word Var_35;
                  MR_Word Var_36;

                  Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags0_31, CmdLineArgs_4);
                  libs__handle_options__handle_given_options_7_p_0(Var_90, &Var_35, &Var_36, &FlagsSpecs_37, &FlagsArgsGlobals_38);
                  if ((FlagsSpecs_37 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybeConfigFile_41;

                    libs__globals__lookup_maybe_string_option_3_p_0(FlagsArgsGlobals_38, (MR_Integer) 683, &MaybeConfigFile_41);
                    if ((MaybeConfigFile_41 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word AllErrors_53;
                      MR_Word Var_93;
                      MR_Word MCFlags1_114;
                      MR_Word MCFlagsSpecs1_115;

                      DetectedGradeFlags_18 = (MR_Word) ((MR_Unsigned) 0U);
                      Variables_19 = make__options_file__options_variables_init_1_f_0(EnvVarMap_6);
                      make__options_file__lookup_mmc_options_3_p_0(Variables_19, &MCFlags1_114, &MCFlagsSpecs1_115);
                      Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MCFlagsSpecs0_32, MCFlagsSpecs1_115);
                      AllSpecs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_29, Var_93);
                      AllErrors_53 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_38, AllSpecs_14);
                      switch (AllErrors_53) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MaybeMCFlags_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), MaybeMCFlags_20, 0) = ((MR_Box) (MCFlags1_114));
                          }
                          break;
                        case (MR_Integer) 1:
                          MaybeMCFlags_20 = (MR_Word) ((MR_Unsigned) 0U);
                          break;
                      }
                    }
                    else
                    {
                      MR_String ConfigFile_42 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfigFile_41, (MR_Integer) 0))));
                      MR_Word ConfigNonUndefSpecs_43;
                      MR_Word ConfigUndefSpecs_44;
                      MR_Word ConfigSpecs_45;
                      MR_Word ConfigErrors_46;

                      make__options_file__read_named_options_file_7_p_0(ConfigFile_42, Variables0_25, &Variables_19, &ConfigNonUndefSpecs_43, &ConfigUndefSpecs_44);
                      switch (WarnUndef_28) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ConfigSpecs_45 = ConfigNonUndefSpecs_43;
                          break;
                        case (MR_Integer) 1:
                          ConfigSpecs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ConfigNonUndefSpecs_43, ConfigUndefSpecs_44);
                          break;
                      }
                      ConfigErrors_46 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_38, ConfigSpecs_45);
                      switch (ConfigErrors_46) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word MCFlags1_47;
                            MR_Word MCFlagsSpecs1_48;
                            MR_Word AllSpecs0_49;
                            MR_Word AllErrors0_50;
                            MR_Word MaybeMerStdLibDir_51;
                            MR_Word StdLibDirSpecs_52;
                            MR_Word Var_96;
                            MR_Word Var_97;

                            make__options_file__lookup_mmc_options_3_p_0(Variables_19, &MCFlags1_47, &MCFlagsSpecs1_48);
                            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ConfigSpecs_45, MCFlagsSpecs1_48);
                            Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MCFlagsSpecs0_32, Var_97);
                            AllSpecs0_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_29, Var_96);
                            AllErrors0_50 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_38, AllSpecs0_49);
                            switch (AllErrors0_50) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MaybeMCFlags_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), MaybeMCFlags_20, 0) = ((MR_Box) (MCFlags1_47));
                                }
                                break;
                              case (MR_Integer) 1:
                                MaybeMCFlags_20 = (MR_Word) ((MR_Unsigned) 0U);
                                break;
                            }
                            make__options_file__lookup_mercury_stdlib_dir_3_p_0(Variables_19, &MaybeMerStdLibDir_51, &StdLibDirSpecs_52);
                            top_level__mercury_compile_main__detect_libgrades_5_p_0(FlagsArgsGlobals_38, MaybeMerStdLibDir_51, &DetectedGradeFlags_18);
                            AllSpecs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), AllSpecs0_49, StdLibDirSpecs_52);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_95;

                            DetectedGradeFlags_18 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MCFlagsSpecs0_32, ConfigSpecs_45);
                            AllSpecs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_29, Var_95);
                            MaybeMCFlags_20 = (MR_Word) ((MR_Unsigned) 0U);
                          }
                          break;
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_99;

                    DetectedGradeFlags_18 = (MR_Word) ((MR_Unsigned) 0U);
                    Variables_19 = make__options_file__options_variables_init_1_f_0(EnvVarMap_6);
                    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MCFlagsSpecs0_32, FlagsSpecs_37);
                    AllSpecs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_29, Var_99);
                    MaybeMCFlags_20 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  Variables_19 = make__options_file__options_variables_init_1_f_0(EnvVarMap_6);
                  DetectedGradeFlags_18 = (MR_Word) ((MR_Unsigned) 0U);
                  AllSpecs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_29, MCFlagsSpecs0_32);
                  MaybeMCFlags_20 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            Variables_19 = make__options_file__options_variables_init_1_f_0(EnvVarMap_6);
            DetectedGradeFlags_18 = (MR_Word) ((MR_Unsigned) 0U);
            AllSpecs_14 = OptFileSpecs_29;
            MaybeMCFlags_20 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
    }
    if ((MaybeMCFlags_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DummyGlobals_66;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word _Specs_65;

      libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_63, &Var_64, &_Specs_65, &DummyGlobals_66);
      parse_tree__error_util__write_error_specs_ignore_4_p_0(DummyGlobals_66, AllSpecs_14);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word MCFlags_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMCFlags_20, (MR_Integer) 0))));
      MR_Word AllFlags_55;
      MR_Word Specs_58;
      MR_Word ActualGlobals_59;
      MR_Word Var_105;
      MR_Word Var_56;
      MR_Word Var_57;

      Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_54, OptionArgs_16);
      AllFlags_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_18, Var_105);
      libs__handle_options__handle_given_options_7_p_0(AllFlags_55, &Var_56, &Var_57, &Specs_58, &ActualGlobals_59);
      parse_tree__error_util__write_error_specs_ignore_4_p_0(ActualGlobals_59, AllSpecs_14);
      if ((Specs_58 == (MR_Word) ((MR_Unsigned) 0U)))
        top_level__mercury_compile_main__main_after_setup_7_p_0(ActualGlobals_59, DetectedGradeFlags_18, Variables_19, OptionArgs_16, NonOptionArgs_17);
      else
      {
        MR_Word StdErr_62;

        mercury__io__stderr_stream_3_p_0(&StdErr_62);
        libs__handle_options__usage_errors_5_p_0(StdErr_62, ActualGlobals_59, Specs_58);
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__main_after_setup_7_p_0(
  MR_Word Globals_8,
  MR_Word DetectedGradeFlags_9,
  MR_Word OptionVariables_10,
  MR_Word OptionArgs_11,
  MR_Word Args_12)
{
  {
    MR_bool succeeded;
    MR_Word Version_14;
    MR_Word Help_15;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 703, &Version_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 702, &Help_15);
    succeeded = (Help_15 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StdOut_16;

      mercury__io__stdout_stream_3_p_0(&StdOut_16);
      libs__handle_options__long_usage_3_p_0(StdOut_16);
    }
    else
    {
      succeeded = (Version_14 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word StdOut_29;

        mercury__io__stdout_stream_3_p_0(&StdOut_29);
        libs__handle_options__display_compiler_version_3_p_0(StdOut_29);
      }
      else
      {
        MR_Word OpMode_17;
        MR_Word HaveReadModuleMaps0_18;
        MR_Word _HaveReadModuleMaps_19;

        libs__globals__get_op_mode_2_p_0(Globals_8, &OpMode_17);
        HaveReadModuleMaps0_18 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
        top_level__mercury_compile_main__do_op_mode_10_p_0(Globals_8, OpMode_17, DetectedGradeFlags_9, OptionVariables_10, OptionArgs_11, Args_12, HaveReadModuleMaps0_18, &_HaveReadModuleMaps_19);
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_10_p_0(
  MR_Word Globals_11,
  MR_Word OpMode_12,
  MR_Word DetectedGradeFlags_13,
  MR_Word OptionVariables_14,
  MR_Word OptionArgs_15,
  MR_Word Args_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) OpMode_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpMode_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              make__make_process_compiler_args_7_p_0(Globals_11, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16);
              *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_0_24;
            }
            break;
          case (MR_Integer) 1:
            {
              parse_tree__source_file_map__write_source_file_map_4_p_0(Globals_11, Args_16);
              *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_0_24;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String StandaloneIntBasename_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), OpMode_12, (MR_Integer) 0))));
          MR_Word ProgressStream_44;
          MR_Word Target_45;

          mercury__io__stderr_stream_3_p_0(&ProgressStream_44);
          libs__globals__get_target_2_p_0(Globals_11, &Target_45);
          switch (Target_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__make_standalone_interface_6_p_0(Globals_11, ProgressStream_44, ProgressStream_44, StandaloneIntBasename_19);
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_String ProgName_46;
                MR_Word Pieces_47;
                MR_Word Spec_48;
                MR_Word Var_53;
                MR_Word Var_54;
                MR_Word Var_57;
                MR_Word Var_59;
                MR_Word Var_62;
                MR_Word Var_65;
                MR_Word Var_68;
                MR_Word Var_69;
                MR_String Var_70;
                MR_Word Var_80;
                MR_Word Var_81;
                MR_Word Var_85;
                MR_Word Var_86;

                mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_46);
                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (ProgName_46));
                }
                Var_70 = libs__globals__compilation_target_string_1_f_0(Target_45);
                {
                  Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
                }
                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                  MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[7])));
                  MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
                }
                {
                  Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[6])));
                  MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[5])));
                  MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
                }
                {
                  Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
                }
                {
                  Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_47, 0) = ((MR_Box) (Var_53));
                  MR_hl_field(MR_mktag(1), Pieces_47, 1) = ((MR_Box) (Var_54));
                }
                {
                  Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Pieces_47));
                }
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
                  MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(2), Var_81, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(2), Var_81, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(2), Var_81, 3) = ((MR_Box) (Var_85));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
                  MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_standalone_interface\'/4"));
                  MR_hl_field(MR_mktag(0), Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_48, 3) = ((MR_Box) (Var_80));
                }
                parse_tree__error_util__write_error_spec_ignore_5_p_0(ProgressStream_44, Globals_11, Spec_48);
              }
              break;
          }
          *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_0_24;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OpModeQuery_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), OpMode_12, (MR_Integer) 0))) & (MR_Integer) 15);

          top_level__mercury_compile_main__do_op_mode_query_4_p_0(Globals_11, OpModeQuery_20);
          *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_0_24;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word OpModeArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_12, (MR_Integer) 0))));
          MR_Word FileNamesFromStdin_22;

          libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 699, &FileNamesFromStdin_22);
          succeeded = (Args_16 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (FileNamesFromStdin_22 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word StdErr_23;

            mercury__io__stderr_stream_3_p_0(&StdErr_23);
            libs__handle_options__usage_3_p_0(StdErr_23);
            *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_0_24;
          }
          else
            top_level__mercury_compile_main__do_op_mode_args_11_p_0(Globals_11, OpModeArgs_21, FileNamesFromStdin_22, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16, STATE_VARIABLE_HaveReadModuleMaps_0_24, STATE_VARIABLE_HaveReadModuleMaps_25);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_11_p_0(
  MR_Word Globals_12,
  MR_Word OpModeArgs_13,
  MR_Word FileNamesFromStdin_14,
  MR_Word DetectedGradeFlags_15,
  MR_Word OptionVariables_16,
  MR_Word OptionArgs_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_43)
{
  {
    MR_bool succeeded;
    MR_Word ModulesToLinkCord_22;
    MR_Word ExtraObjFilesCord_23;
    MR_Word ModulesToLink_24;
    MR_Word ExtraObjFiles_25;
    MR_Integer ExitStatus_26;
    MR_Word StdErr_40;
    MR_Word Statistics_41;

    switch (FileNamesFromStdin_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_46;
          MR_Word Var_47;

          Var_46 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          Var_47 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          top_level__mercury_compile_main__process_compiler_cmd_line_args_14_p_0(Globals_12, OpModeArgs_13, DetectedGradeFlags_15, OptionVariables_16, OptionArgs_17, Args_18, Var_46, &ModulesToLinkCord_22, Var_47, &ExtraObjFilesCord_23, STATE_VARIABLE_HaveReadModuleMaps_0_42, STATE_VARIABLE_HaveReadModuleMaps_43);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word StdIn_21;
          MR_Word Var_51;
          MR_Word Var_52;

          mercury__io__stdin_stream_3_p_0(&StdIn_21);
          Var_51 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          Var_52 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          top_level__mercury_compile_main__process_compiler_stdin_args_14_p_0(Globals_12, StdIn_21, OpModeArgs_13, DetectedGradeFlags_15, OptionVariables_16, OptionArgs_17, Var_51, &ModulesToLinkCord_22, Var_52, &ExtraObjFilesCord_23, STATE_VARIABLE_HaveReadModuleMaps_0_42, STATE_VARIABLE_HaveReadModuleMaps_43);
        }
        break;
    }
    ModulesToLink_24 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_22);
    ExtraObjFiles_25 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_23);
    mercury__io__get_exit_status_3_p_0(&ExitStatus_26);
    succeeded = (ExitStatus_26 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_String FirstModule_27;
      MR_Word Var_56;
      MR_Word Var_57;

      succeeded = ((MR_tag((MR_Word) OpModeArgs_13)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_57 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (ModulesToLink_24 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              FirstModule_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModulesToLink_24, (MR_Integer) 0))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word MainModuleName_29;
        MR_Word Target_30;
        MR_Word Succeeded_31;

        parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_27, &MainModuleName_29);
        libs__globals__get_target_2_p_0(Globals_12, &Target_30);
        switch (Target_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_32;
              MR_Word ErrorStream_33;
              MR_Word InvokedByMake_34;

              libs__globals__get_progress_output_stream_5_p_0(Globals_12, MainModuleName_29, &ProgressStream_32);
              libs__globals__get_error_output_stream_5_p_0(Globals_12, MainModuleName_29, &ErrorStream_33);
              libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 667, &InvokedByMake_34);
              switch (InvokedByMake_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word MayBuild_35;

                    make__build__setup_for_build_with_module_options_10_p_0(Globals_12, (MR_Integer) 0, MainModuleName_29, DetectedGradeFlags_15, OptionVariables_16, OptionArgs_17, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_35);
                    if (((MR_tag((MR_Word) MayBuild_35)) == (MR_Integer) 1))
                    {
                      MR_Word BuildGlobals_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_35, (MR_Integer) 1))));

                      backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_32, ErrorStream_33, ModulesToLink_24, ExtraObjFiles_25, BuildGlobals_38, &Succeeded_31);
                    }
                    else
                    {
                      MR_Word SetupSpecs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_35, (MR_Integer) 0))));

                      parse_tree__error_util__write_error_specs_ignore_5_p_0(ErrorStream_33, Globals_12, SetupSpecs_36);
                      Succeeded_31 = (MR_Integer) 0;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_32, ErrorStream_33, ModulesToLink_24, ExtraObjFiles_25, Globals_12, &Succeeded_31);
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_12, MainModuleName_29, &Succeeded_31);
            break;
        }
        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_31);
      }
    }
    mercury__io__stderr_stream_3_p_0(&StdErr_40);
    top_level__mercury_compile_main__maybe_print_delayed_error_messages_4_p_0(StdErr_40, Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 79, &Statistics_41);
    switch (Statistics_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__report_stats_4_p_0(StdErr_40, (MR_String) "full_memory_stats");
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_cmd_line_args_14_p_0(
  MR_Word Globals_1,
  MR_Word OpModeArgs_2,
  MR_Word DetectedGradeFlags_3,
  MR_Word OptionVariables_4,
  MR_Word OptionArgs_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Modules_0_7,
  MR_Word * STATE_VARIABLE_Modules_8,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_11,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HaveReadModuleMaps_12 = STATE_VARIABLE_HaveReadModuleMaps_0_11;
      *STATE_VARIABLE_ExtraObjFiles_10 = STATE_VARIABLE_ExtraObjFiles_0_9;
      *STATE_VARIABLE_Modules_8 = STATE_VARIABLE_Modules_0_7;
    }
    else
    {
      MR_String Arg_37 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Args_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word ArgModules_43;
      MR_Word ArgExtraObjFiles_44;
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_55_55;
      MR_Word STATE_VARIABLE_Modules_58_58;
      MR_Word Var_59;
      MR_Word STATE_VARIABLE_ExtraObjFiles_60_60;
      MR_Word Var_61;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11;

      top_level__mercury_compile_main__process_compiler_arg_12_p_0(Globals_1, OpModeArgs_2, DetectedGradeFlags_3, OptionVariables_4, OptionArgs_5, Arg_37, &ArgModules_43, &ArgExtraObjFiles_44, STATE_VARIABLE_HaveReadModuleMaps_0_11, &STATE_VARIABLE_HaveReadModuleMaps_55_55);
      if (!((Args_38 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_43);
      STATE_VARIABLE_Modules_58_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_7, Var_59);
      Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_44);
      STATE_VARIABLE_ExtraObjFiles_60_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_9, Var_61);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Args_38;
      next_value_of_STATE_VARIABLE_Modules_0_7 = STATE_VARIABLE_Modules_58_58;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9 = STATE_VARIABLE_ExtraObjFiles_60_60;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11 = STATE_VARIABLE_HaveReadModuleMaps_55_55;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Modules_0_7 = next_value_of_STATE_VARIABLE_Modules_0_7;
      STATE_VARIABLE_ExtraObjFiles_0_9 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9;
      STATE_VARIABLE_HaveReadModuleMaps_0_11 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_14_p_0(
  MR_Word Globals_15,
  MR_Word StdIn_16,
  MR_Word OpModeArgs_17,
  MR_Word DetectedGradeFlags_18,
  MR_Word OptionVariables_19,
  MR_Word OptionArgs_20,
  MR_Word STATE_VARIABLE_Modules_0_33,
  MR_Word * STATE_VARIABLE_Modules_34,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_35,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_36,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_38)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FileResult_25;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_33);
    if (!(succeeded))
      mercury__gc__garbage_collect_2_p_0();
    mercury__io__read_line_as_string_4_p_0(StdIn_16, &FileResult_25);
    switch (MR_tag((MR_Word) FileResult_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Modules_34 = STATE_VARIABLE_Modules_0_33;
          *STATE_VARIABLE_ExtraObjFiles_36 = STATE_VARIABLE_ExtraObjFiles_0_35;
          *STATE_VARIABLE_HaveReadModuleMaps_38 = STATE_VARIABLE_HaveReadModuleMaps_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileResult_25, (MR_Integer) 0))));
          MR_String Arg_27;
          MR_Word ArgModules_28;
          MR_Word ArgExtraObjFiles_29;
          MR_Word STATE_VARIABLE_HaveReadModuleMaps_51_51;
          MR_Word STATE_VARIABLE_Modules_53_53;
          MR_Word Var_54;
          MR_Word STATE_VARIABLE_ExtraObjFiles_55_55;
          MR_Word Var_56;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_33;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_35;
          MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_37;

          Arg_27 = mercury__string__rstrip_1_f_0(Line_26);
          top_level__mercury_compile_main__process_compiler_arg_12_p_0(Globals_15, OpModeArgs_17, DetectedGradeFlags_18, OptionVariables_19, OptionArgs_20, Arg_27, &ArgModules_28, &ArgExtraObjFiles_29, STATE_VARIABLE_HaveReadModuleMaps_0_37, &STATE_VARIABLE_HaveReadModuleMaps_51_51);
          Var_54 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_28);
          STATE_VARIABLE_Modules_53_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_33, Var_54);
          Var_56 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_29);
          STATE_VARIABLE_ExtraObjFiles_55_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_35, Var_56);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_33 = STATE_VARIABLE_Modules_53_53;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_35 = STATE_VARIABLE_ExtraObjFiles_55_55;
          next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_37 = STATE_VARIABLE_HaveReadModuleMaps_51_51;
          STATE_VARIABLE_Modules_0_33 = next_value_of_STATE_VARIABLE_Modules_0_33;
          STATE_VARIABLE_ExtraObjFiles_0_35 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_35;
          STATE_VARIABLE_HaveReadModuleMaps_0_37 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_37;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FileResult_25, (MR_Integer) 0))));
          MR_String Msg_31;
          MR_Word StdErr_32;

          mercury__io__error_message_2_p_0(Error_30, &Msg_31);
          mercury__io__stderr_stream_3_p_0(&StdErr_32);
          mercury__io__write_string_4_p_0(StdErr_32, (MR_String) "Error reading module name from standard input: ");
          mercury__io__write_string_4_p_0(StdErr_32, Msg_31);
          mercury__io__write_string_4_p_0(StdErr_32, (MR_String) "\n");
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          *STATE_VARIABLE_Modules_34 = STATE_VARIABLE_Modules_0_33;
          *STATE_VARIABLE_ExtraObjFiles_36 = STATE_VARIABLE_ExtraObjFiles_0_35;
          *STATE_VARIABLE_HaveReadModuleMaps_38 = STATE_VARIABLE_HaveReadModuleMaps_0_37;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_12_p_0(
  MR_Word Globals_13,
  MR_Word OpModeArgs_14,
  MR_Word DetectedGradeFlags_15,
  MR_Word OptionVariables_16,
  MR_Word OptionArgs_17,
  MR_String Arg_18,
  MR_Word * ModulesToLink_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35)
{
  {
    MR_bool succeeded;
    MR_Word FileOrModule_23;
    MR_Word InvokedByMake_24;
    MR_String FileName_50;

    succeeded = mercury__string__remove_suffix_3_p_0(Arg_18, (MR_String) ".m", &FileName_50);
    if (succeeded)
      {
        FileOrModule_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FileOrModule_23, 0) = ((MR_Box) (FileName_50));
      }
    else
    {
      MR_Word ModuleName_51;

      parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_18, &ModuleName_51);
      {
        FileOrModule_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileOrModule_23, 0) = ((MR_Box) (ModuleName_51));
      }
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 667, &InvokedByMake_24);
    switch (InvokedByMake_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleName_25;
          MR_Word MayBuild_27;

          if (((MR_tag((MR_Word) FileOrModule_23)) == (MR_Integer) 0))
          {
            MR_String FileName_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_23, (MR_Integer) 0))));

            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_53, &ModuleName_25);
          }
          else
            ModuleName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_23, (MR_Integer) 0))));
          make__build__setup_for_build_with_module_options_10_p_0(Globals_13, (MR_Integer) 0, ModuleName_25, DetectedGradeFlags_15, OptionVariables_16, OptionArgs_17, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_27);
          if (((MR_tag((MR_Word) MayBuild_27)) == (MR_Integer) 1))
          {
            MR_Word BuildGlobals_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_27, (MR_Integer) 1))));
            MR_Word LibgradeCheckSucceeded_33;

            libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_13, &LibgradeCheckSucceeded_33);
            switch (LibgradeCheckSucceeded_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ModulesToLink_19 = (MR_Word) ((MR_Unsigned) 0U);
                  *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
                }
                break;
              case (MR_Integer) 1:
                top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(BuildGlobals_31, OpModeArgs_14, OptionArgs_17, FileOrModule_23, ModulesToLink_19, ExtraObjFiles_20, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
                break;
            }
          }
          else
          {
            MR_Word SetupSpecs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_27, (MR_Integer) 0))));
            MR_Word ErrorStream_29;

            libs__globals__get_error_output_stream_5_p_0(Globals_13, ModuleName_25, &ErrorStream_29);
            parse_tree__error_util__write_error_specs_ignore_5_p_0(ErrorStream_29, Globals_13, SetupSpecs_28);
            *ModulesToLink_19 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
          }
        }
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(Globals_13, OpModeArgs_14, OptionArgs_17, FileOrModule_23, ModulesToLink_19, ExtraObjFiles_20, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(
  MR_Word Globals0_11,
  MR_Word OpModeArgs_12,
  MR_Word OptionArgs_13,
  MR_Word FileOrModule_14,
  MR_Word * ModulesToLink_15,
  MR_Word * ExtraObjFiles_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) OpModeArgs_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeArgs_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              if (((MR_tag((MR_Word) FileOrModule_14)) == (MR_Integer) 0))
              {
                MR_String FileName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_14, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(Globals0_11, FileName_19);
              }
              else
              {
                MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_14, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(Globals0_11, ModuleName_20);
              }
              *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
              *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              if (((MR_tag((MR_Word) FileOrModule_14)) == (MR_Integer) 0))
              {
                MR_String FileName_62 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_14, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(Globals0_11, FileName_62);
              }
              else
              {
                MR_Word ModuleName_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_14, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(Globals0_11, ModuleName_63);
              }
              *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
              *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Globals_21;
              MR_Word ParseTreeSrc_24;
              MR_Word Specs_25;
              MR_Word Errors_26;
              MR_Word ModuleName_68;
              MR_String Var_22;
              MR_Word Var_23;

              top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_11, &Globals_21, FileOrModule_14, &ModuleName_68, &Var_22, (MR_Integer) 1, &Var_23, &ParseTreeSrc_24, &Specs_25, &Errors_26, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
              parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_21, Specs_25);
              succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_26);
              if (succeeded)
              {
                {
                  MR_Word HaltSyntax_72;

                  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 6, &HaltSyntax_72);
                  succeeded = (HaltSyntax_72 == (MR_Integer) 1);
                }
                if (!(succeeded))
                {
                  MR_Word FatalErrors_73;
                  MR_Word Var_74;

                  Var_74 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
                  mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_26, Var_74, &FatalErrors_73);
                  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_73);
                }
              }
              if (!(succeeded))
              {
                MR_String OutputFileName_27;
                MR_Word ProgressStream_28;
                MR_Word ErrorStream_29;
                MR_Word _Succeeded_30;

                parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_21, (MR_String) "predicate \140top_level.mercury_compile_main.do_process_compiler_arg\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[1])), ModuleName_68, &OutputFileName_27);
                libs__globals__get_progress_output_stream_5_p_0(Globals_21, ModuleName_68, &ProgressStream_28);
                libs__globals__get_error_output_stream_5_p_0(Globals_21, ModuleName_68, &ErrorStream_29);
                parse_tree__parse_tree_out__output_parse_tree_src_8_p_0(ProgressStream_28, ErrorStream_29, Globals_21, OutputFileName_27, ParseTreeSrc_24, &_Succeeded_30);
              }
              *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
              *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InterfaceFile_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeArgs_12, (MR_Integer) 0))) & (MR_Integer) 3);

          top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(Globals0_11, InterfaceFile_31, FileOrModule_14, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
          *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OpModeAugment_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_12, (MR_Integer) 0))));
          MR_Word ModulesToRecompile_33;
          MR_Word STATE_VARIABLE_HaveReadModuleMaps_38_38;
          MR_Word Globals_69;
          MR_Word Var_40;

          top_level__mercury_compile_main__find_modules_to_recompile_8_p_0(Globals0_11, &Globals_69, FileOrModule_14, &ModulesToRecompile_33, STATE_VARIABLE_HaveReadModuleMaps_0_34, &STATE_VARIABLE_HaveReadModuleMaps_38_38);
          succeeded = (ModulesToRecompile_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModulesToRecompile_33, (MR_Integer) 0))));
            succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_38_38;
          }
          else
            top_level__mercury_compile_main__read_augment_and_process_module_11_p_0(Globals_69, OpModeAugment_32, OptionArgs_13, FileOrModule_14, ModulesToRecompile_33, ModulesToLink_15, ExtraObjFiles_16, STATE_VARIABLE_HaveReadModuleMaps_38_38, STATE_VARIABLE_HaveReadModuleMaps_35);
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1406__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0(
  MR_Word Globals0_12,
  MR_Word OpModeAugment_13,
  MR_Word OptionArgs_14,
  MR_Word FileOrModule_15,
  MR_Word MaybeModulesToRecompile_16,
  MR_Word * ModulesToLink_17,
  MR_Word * ExtraObjFiles_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44)
{
  {
    MR_bool succeeded;
    MR_Word Globals_23;
    MR_Word ModuleName_24;
    MR_String FileName_25;
    MR_Word MaybeTimestamp_26;
    MR_Word ParseTreeSrc_27;
    MR_Word Specs0_28;
    MR_Word Errors_29;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_51_51;

    switch (MR_tag((MR_Word) OpModeAugment_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
          case (MR_Integer) 3:
            {
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word ReportCmdLineArgsDotErr_22;

              libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 78, &ReportCmdLineArgsDotErr_22);
              top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(ReportCmdLineArgsDotErr_22, OptionArgs_14, (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ReportCmdLineArgsDotErr_22;

          libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 78, &ReportCmdLineArgsDotErr_22);
          top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(ReportCmdLineArgsDotErr_22, OptionArgs_14, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_12, &Globals_23, FileOrModule_15, &ModuleName_24, &FileName_25, (MR_Integer) 0, &MaybeTimestamp_26, &ParseTreeSrc_27, &Specs0_28, &Errors_29, STATE_VARIABLE_HaveReadModuleMaps_0_43, &STATE_VARIABLE_HaveReadModuleMaps_51_51);
    succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(Globals_23, Errors_29);
    if (succeeded)
    {
      parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_23, Specs0_28);
      *ModulesToLink_17 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveReadModuleMaps_44 = STATE_VARIABLE_HaveReadModuleMaps_51_51;
    }
    else
    {
      MR_Word ParseTreeModuleSrcs0_30;
      MR_Word Specs1_31;
      MR_Word ParseTreeModuleSrcsToRecompile_35;
      MR_Word ParseTreeModuleNames_36;
      MR_Word NestedModuleNames_37;
      MR_Word FindTimestampFiles_38;
      MR_Word TraceProf_39;
      MR_Word GlobalsToUse_42;
      MR_Word Var_56;
      MR_Word Var_108;

      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_23, ParseTreeSrc_27, &ParseTreeModuleSrcs0_30, Specs0_28, &Specs1_31);
      if ((MaybeModulesToRecompile_16 == (MR_Word) ((MR_Unsigned) 0U)))
        ParseTreeModuleSrcsToRecompile_35 = ParseTreeModuleSrcs0_30;
      else
      {
        MR_Word ModulesToRecompile_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModulesToRecompile_16, (MR_Integer) 0))));
        MR_Word ToRecompile_33;

        {
          ToRecompile_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ToRecompile_33, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_1));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 3) = ((MR_Box) (ModulesToRecompile_32));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ToRecompile_33, ParseTreeModuleSrcs0_30, &ParseTreeModuleSrcsToRecompile_35);
      }
      Var_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[2]), ParseTreeModuleSrcs0_30);
      ParseTreeModuleNames_36 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_56);
      mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_24)), ParseTreeModuleNames_36, &NestedModuleNames_37);
      top_level__mercury_compile_main__find_timestamp_files_2_p_0(Globals_23, &FindTimestampFiles_38);
      libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 150, &TraceProf_39);
      succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_24);
      if (succeeded)
      {
        Var_108 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, Var_108);
        if (succeeded)
          succeeded = (TraceProf_39 == (MR_Integer) 1);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word GlobalsNoTrace0_40;

        libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[2])), Globals_23, &GlobalsNoTrace0_40);
        libs__globals__set_trace_level_none_2_p_0(GlobalsNoTrace0_40, &GlobalsToUse_42);
      }
      else
        GlobalsToUse_42 = Globals_23;
      top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0(GlobalsToUse_42, OpModeAugment_13, FileName_25, MaybeTimestamp_26, ModuleName_24, NestedModuleNames_37, FindTimestampFiles_38, ParseTreeModuleSrcsToRecompile_35, Specs1_31, ModulesToLink_17, ExtraObjFiles_18, STATE_VARIABLE_HaveReadModuleMaps_51_51, STATE_VARIABLE_HaveReadModuleMaps_44);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__halt_at_module_error_2_p_0(
  MR_Word Globals_3,
  MR_Word Errors_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_4);
    if (succeeded)
    {
      {
        MR_Word HaltSyntax_5;

        libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 6, &HaltSyntax_5);
        succeeded = (HaltSyntax_5 == (MR_Integer) 1);
      }
      if (!(succeeded))
      {
        MR_Word FatalErrors_6;
        MR_Word Var_7;

        Var_7 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_4, Var_7, &FatalErrors_6);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv6_ModuleToLink_4;

    top_level__mercury_compile_main__module_to_link_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_ModuleToLink_4);
    *wrapper_arg_2 = ((MR_Box) (conv6_ModuleToLink_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ExtraObjFiles_24;
    MR_Word conv1_STATE_VARIABLE_Specs_36;
    MR_Word conv0_STATE_VARIABLE_HaveReadModuleMaps_38;

    top_level__mercury_compile_main__augment_and_process_module_15_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv2_ExtraObjFiles_24, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Specs_36, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_HaveReadModuleMaps_38);
    *wrapper_arg_2 = ((MR_Box) (conv2_ExtraObjFiles_24));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_36));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_HaveReadModuleMaps_38));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String FileName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word SourceFileModuleName_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word ParseTreeModuleSrcs_23,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32)
{
  {
    MR_Word ExtraObjFileLists_29;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Box conv5_STATE_VARIABLE_Specs_36_36;
    MR_Box conv4_STATE_VARIABLE_HaveReadModuleMaps_32;
    MR_Box conv3_STATE_VARIABLE_IO_38_38;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Globals_16));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (OpModeAugment_17));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (FileName_18));
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (MaybeTimestamp_19));
      MR_hl_field(MR_mktag(0), Var_35, 7) = ((MR_Box) (SourceFileModuleName_20));
      MR_hl_field(MR_mktag(0), Var_35, 8) = ((MR_Box) (NestedSubModules_21));
      MR_hl_field(MR_mktag(0), Var_35, 9) = ((MR_Box) (FindTimestampFiles_22));
    }
    mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, ParseTreeModuleSrcs_23, &ExtraObjFileLists_29, ((MR_Box) (STATE_VARIABLE_Specs_0_30)), &conv5_STATE_VARIABLE_Specs_36_36, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_0_31)), &conv4_STATE_VARIABLE_HaveReadModuleMaps_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_38_38);
    STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_36_36));
    *STATE_VARIABLE_HaveReadModuleMaps_32 = ((MR_Word) (conv4_STATE_VARIABLE_HaveReadModuleMaps_32));
    parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_16, STATE_VARIABLE_Specs_36_36);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[1]), ParseTreeModuleSrcs_23, ModulesToLink_25);
    mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_29, ExtraObjFiles_26);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(
  MR_Word Report_6,
  MR_Word OptionArgs_7,
  MR_Word Args_8)
{
  switch (Report_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_19;
        MR_Word Var_21;

        mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
        Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_7, Args_8);
        Var_19 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_21);
        mercury__io__write_string_3_p_0((MR_String) "% ");
        mercury__io__write_string_3_p_0(Var_19);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TimestampFiles_10;

    top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TimestampFiles_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_TimestampFiles_10));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_p_0(
  MR_Word Globals_3,
  MR_Word * FindTimestampFiles_4)
{
  {
    MR_Word CompilationTarget_5;
    MR_Word TimestampOtherExt_6;

    libs__globals__get_target_2_p_0(Globals_3, &CompilationTarget_5);
    switch (CompilationTarget_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TimestampOtherExt_6 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
        break;
      case (MR_Integer) 1:
        TimestampOtherExt_6 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
        break;
      case (MR_Integer) 2:
        TimestampOtherExt_6 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *FindTimestampFiles_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__find_timestamp_files_2_p_0_1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Globals_3));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TimestampOtherExt_6));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_modules_to_recompile_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TimestampFiles_10;

    top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_10));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_modules_to_recompile_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TargetFiles_10;

    top_level__mercury_compile_main__usual_find_target_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TargetFiles_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_TargetFiles_10));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_modules_to_recompile_8_p_0(
  MR_Word Globals0_9,
  MR_Word * Globals_10,
  MR_Word FileOrModule_11,
  MR_Word * ModulesToRecompile_12,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23)
{
  {
    MR_Word Smart0_15;
    MR_Word DisableSmart_16;

    libs__globals__lookup_bool_option_3_p_0(Globals0_9, (MR_Integer) 145, &Smart0_15);
    libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_16);
    switch (DisableSmart_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 145, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[2])), Globals0_9, Globals_10);
          *ModulesToRecompile_12 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_0_22;
        }
        break;
      case (MR_Integer) 0:
        {
          *Globals_10 = Globals0_9;
          switch (Smart0_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ModulesToRecompile_12 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleName_18;
                MR_Word FindTargetFiles_20;
                MR_Word FindTimestampFiles_21;
                MR_Word CompilationTarget_35;
                MR_Word TargetOtherExt_36;
                MR_Word CompilationTarget_46;
                MR_Word TimestampOtherExt_47;

                if (((MR_tag((MR_Word) FileOrModule_11)) == (MR_Integer) 0))
                {
                  MR_String FileName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_11, (MR_Integer) 0))));

                  parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_19, &ModuleName_18);
                }
                else
                  ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_11, (MR_Integer) 0))));
                libs__globals__get_target_2_p_0(*Globals_10, &CompilationTarget_35);
                switch (CompilationTarget_35) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    TargetOtherExt_36 = (MR_Word) (((MR_Box) ((MR_String) ".c")));
                    break;
                  case (MR_Integer) 1:
                    TargetOtherExt_36 = (MR_Word) (((MR_Box) ((MR_String) ".cs")));
                    break;
                  case (MR_Integer) 2:
                    TargetOtherExt_36 = (MR_Word) (((MR_Box) ((MR_String) ".java")));
                    break;
                }
                {
                  FindTargetFiles_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FindTargetFiles_20, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), FindTargetFiles_20, 1) = ((MR_Box) (top_level__mercury_compile_main__find_modules_to_recompile_8_p_0_1));
                  MR_hl_field(MR_mktag(0), FindTargetFiles_20, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), FindTargetFiles_20, 3) = ((MR_Box) (Globals0_9));
                  MR_hl_field(MR_mktag(0), FindTargetFiles_20, 4) = ((MR_Box) (TargetOtherExt_36));
                }
                libs__globals__get_target_2_p_0(*Globals_10, &CompilationTarget_46);
                switch (CompilationTarget_46) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    TimestampOtherExt_47 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
                    break;
                  case (MR_Integer) 1:
                    TimestampOtherExt_47 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
                    break;
                  case (MR_Integer) 2:
                    TimestampOtherExt_47 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
                    break;
                }
                {
                  FindTimestampFiles_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FindTimestampFiles_21, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), FindTimestampFiles_21, 1) = ((MR_Box) (top_level__mercury_compile_main__find_modules_to_recompile_8_p_0_2));
                  MR_hl_field(MR_mktag(0), FindTimestampFiles_21, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), FindTimestampFiles_21, 3) = ((MR_Box) (Globals0_9));
                  MR_hl_field(MR_mktag(0), FindTimestampFiles_21, 4) = ((MR_Box) (TimestampOtherExt_47));
                }
                recompilation__check__should_recompile_9_p_0(*Globals_10, ModuleName_18, FindTargetFiles_20, FindTimestampFiles_21, ModulesToRecompile_12, STATE_VARIABLE_HaveReadModuleMaps_0_22, STATE_VARIABLE_HaveReadModuleMaps_23);
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__5_5;

    parse_tree__write_module_interface_files__write_short_interface_file_int3_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__8_8;
    MR_Word conv4_HeadVar__10_10;

    parse_tree__write_module_interface_files__write_interface_file_int1_int2_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__8_8, ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__10_10);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__8_8));
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__10_10));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__8_8;
    MR_Word conv0_HeadVar__10_10;

    parse_tree__write_module_interface_files__write_private_interface_file_int0_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__10_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__8_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__10_10));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(
  MR_Word Globals0_8,
  MR_Word InterfaceFile_9,
  MR_Word FileOrModule_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_28,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_29)
{
  {
    MR_bool succeeded;
    MR_Word ReturnTimestamp_13;
    MR_Word Globals_15;
    MR_Word ModuleName_16;
    MR_String FileName_17;
    MR_Word MaybeTimestamp_18;
    MR_Word ParseTreeSrc_19;
    MR_Word ReadSpecs_20;
    MR_Word ReadErrors_21;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_34_34;

    switch (InterfaceFile_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GenerateVersionNumbers_14;

          libs__globals__lookup_bool_option_3_p_0(Globals0_8, (MR_Integer) 146, &GenerateVersionNumbers_14);
          switch (GenerateVersionNumbers_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ReturnTimestamp_13 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              ReturnTimestamp_13 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GenerateVersionNumbers_50;

          libs__globals__lookup_bool_option_3_p_0(Globals0_8, (MR_Integer) 146, &GenerateVersionNumbers_50);
          switch (GenerateVersionNumbers_50) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ReturnTimestamp_13 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              ReturnTimestamp_13 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        ReturnTimestamp_13 = (MR_Integer) 1;
        break;
    }
    top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_8, &Globals_15, FileOrModule_10, &ModuleName_16, &FileName_17, ReturnTimestamp_13, &MaybeTimestamp_18, &ParseTreeSrc_19, &ReadSpecs_20, &ReadErrors_21, STATE_VARIABLE_HaveReadModuleMaps_0_28, &STATE_VARIABLE_HaveReadModuleMaps_34_34);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadErrors_21);
    if (succeeded)
    {
      {
        MR_Word HaltSyntax_84;

        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 6, &HaltSyntax_84);
        succeeded = (HaltSyntax_84 == (MR_Integer) 1);
      }
      if (!(succeeded))
      {
        MR_Word FatalErrors_85;
        MR_Word Var_86;

        Var_86 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadErrors_21, Var_86, &FatalErrors_85);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_85);
      }
    }
    if (succeeded)
    {
      parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_15, ReadSpecs_20);
      *STATE_VARIABLE_HaveReadModuleMaps_29 = STATE_VARIABLE_HaveReadModuleMaps_34_34;
    }
    else
    {
      MR_Word ParseTreeModuleSrcs_22;
      MR_Word ReadSplitSpecs_23;
      MR_Word Specs_24;
      MR_Word ProgressStream_25;
      MR_Word ErrorStream_26;

      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_15, ParseTreeSrc_19, &ParseTreeModuleSrcs_22, ReadSpecs_20, &ReadSplitSpecs_23);
      parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_15, ReadSplitSpecs_23, &Specs_24);
      libs__globals__get_progress_output_stream_5_p_0(Globals_15, ModuleName_16, &ProgressStream_25);
      libs__globals__get_error_output_stream_5_p_0(Globals_15, ModuleName_16, &ErrorStream_26);
      parse_tree__error_util__write_error_specs_ignore_5_p_0(ErrorStream_26, Globals_15, Specs_24);
      top_level__mercury_compile_main__maybe_print_delayed_error_messages_4_p_0(ErrorStream_26, Globals_15);
      switch (InterfaceFile_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_47;
            MR_Word _Succeededs_27;
            MR_Box conv3_STATE_VARIABLE_HaveReadModuleMaps_29;
            MR_Box conv2_STATE_VARIABLE_IO_31;

            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ProgressStream_25));
              MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (ErrorStream_26));
              MR_hl_field(MR_mktag(0), Var_47, 5) = ((MR_Box) (Globals0_8));
              MR_hl_field(MR_mktag(0), Var_47, 6) = ((MR_Box) (FileName_17));
              MR_hl_field(MR_mktag(0), Var_47, 7) = ((MR_Box) (ModuleName_16));
              MR_hl_field(MR_mktag(0), Var_47, 8) = ((MR_Box) (MaybeTimestamp_18));
            }
            mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, ParseTreeModuleSrcs_22, &_Succeededs_27, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_34_34)), &conv3_STATE_VARIABLE_HaveReadModuleMaps_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31);
            *STATE_VARIABLE_HaveReadModuleMaps_29 = ((MR_Word) (conv3_STATE_VARIABLE_HaveReadModuleMaps_29));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_44;
            MR_Word _Succeededs_51;
            MR_Box conv7_STATE_VARIABLE_HaveReadModuleMaps_29;
            MR_Box conv6_STATE_VARIABLE_IO_31;

            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ProgressStream_25));
              MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (ErrorStream_26));
              MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (Globals0_8));
              MR_hl_field(MR_mktag(0), Var_44, 6) = ((MR_Box) (FileName_17));
              MR_hl_field(MR_mktag(0), Var_44, 7) = ((MR_Box) (ModuleName_16));
              MR_hl_field(MR_mktag(0), Var_44, 8) = ((MR_Box) (MaybeTimestamp_18));
            }
            mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, ParseTreeModuleSrcs_22, &_Succeededs_51, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_34_34)), &conv7_STATE_VARIABLE_HaveReadModuleMaps_29, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_31);
            *STATE_VARIABLE_HaveReadModuleMaps_29 = ((MR_Word) (conv7_STATE_VARIABLE_HaveReadModuleMaps_29));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_42;
            MR_Word _Succeededs_53;
            MR_Box conv9_STATE_VARIABLE_IO_31;

            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_3));
              MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ProgressStream_25));
              MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (ErrorStream_26));
              MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (Globals0_8));
            }
            mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, ParseTreeModuleSrcs_22, &_Succeededs_53, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_31);
            *STATE_VARIABLE_HaveReadModuleMaps_29 = STATE_VARIABLE_HaveReadModuleMaps_34_34;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_14_p_0(
  MR_Word Globals0_15,
  MR_Word * Globals_16,
  MR_Word FileOrModuleName_17,
  MR_Word * ModuleName_18,
  MR_String * FileNameDotM_19,
  MR_Word ReturnTimestamp_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeSrc_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) FileOrModuleName_17)) == (MR_Integer) 0))
    {
      MR_String FileName_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModuleName_17, (MR_Integer) 0))));
      MR_Word DefaultModuleName_39;
      MR_Word Verbose_96;
      MR_Word Stats_104;
      MR_Word MaybeTimestampPrime_89;
      MR_Word ParseTreeSrcPrime_90;
      MR_Word SpecsPrime_91;
      MR_Word ErrorsPrime_92;
      MR_Word Var_54;
      MR_String Var_40;

      *FileNameDotM_19 = mercury__string__f_43_43_2_f_0(FileName_38, (MR_String) ".m");
      libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 69, &Verbose_96);
      libs__file_util__maybe_write_string_4_p_0(Verbose_96, (MR_String) "% Parsing file \140");
      libs__file_util__maybe_write_string_4_p_0(Verbose_96, *FileNameDotM_19);
      libs__file_util__maybe_write_string_4_p_0(Verbose_96, (MR_String) "\' and imported interfaces...\n");
      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_38, &DefaultModuleName_39);
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
      succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(Var_54, DefaultModuleName_39, ReturnTimestamp_20, &Var_40, &MaybeTimestampPrime_89, &ParseTreeSrcPrime_90, &SpecsPrime_91, &ErrorsPrime_92);
      if (succeeded)
      {
        MR_Word HaveReadModuleMapSrc0_86;
        MR_Word HaveReadModuleMapSrc_87;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_147;
        MR_Word Var_148;

        *Globals_16 = Globals0_15;
        HaveReadModuleMapSrc0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
        *ModuleName_18 = DefaultModuleName_39;
        mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), ((MR_Box) (*ModuleName_18)), HaveReadModuleMapSrc0_86, &HaveReadModuleMapSrc_87);
        Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 1))));
        Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 2))));
        Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 3))));
        Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 4))));
        Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 5))));
        Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 6))));
        Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 7))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HaveReadModuleMaps_44 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_87));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_142));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_145));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_148));
        }
        *MaybeTimestamp_21 = MaybeTimestampPrime_89;
        *ParseTreeSrc_22 = ParseTreeSrcPrime_90;
        *Specs_23 = SpecsPrime_91;
        *Errors_24 = ErrorsPrime_92;
      }
      else
      {
        MR_Word Var_58;
        MR_Word DisableSmart_88;

        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_20));
        }
        parse_tree__read_modules__read_module_src_from_file_12_p_0(Globals0_15, FileName_38, *FileNameDotM_19, (MR_String) "Reading file", (MR_Integer) 1, Var_58, MaybeTimestamp_21, ParseTreeSrc_22, Specs_23, Errors_24);
        *ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeSrc_22, (MR_Integer) 0))));
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_88);
        switch (DisableSmart_88) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            libs__globals__set_option_4_p_0((MR_Integer) 145, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[2])), Globals0_15, Globals_16);
            break;
          case (MR_Integer) 0:
            *Globals_16 = Globals0_15;
            break;
        }
        *STATE_VARIABLE_HaveReadModuleMaps_44 = STATE_VARIABLE_HaveReadModuleMaps_0_43;
      }
      libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 80, &Stats_104);
      libs__file_util__maybe_report_stats_3_p_0(Stats_104);
    }
    else
    {
      MR_Word Verbose_27;
      MR_String ModuleNameString_28;
      MR_Word Stats_37;
      MR_String FileNameDotMPrime_29;
      MR_Word MaybeTimestampPrime_30;
      MR_Word ParseTreeSrcPrime_31;
      MR_Word SpecsPrime_32;
      MR_Word ErrorsPrime_33;
      MR_Word Var_72;

      *ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModuleName_17, (MR_Integer) 0))));
      libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 69, &Verbose_27);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, (MR_String) "% Parsing module \140");
      ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*ModuleName_18);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, ModuleNameString_28);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, (MR_String) "\' and imported interfaces...\n");
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
      succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(Var_72, *ModuleName_18, ReturnTimestamp_20, &FileNameDotMPrime_29, &MaybeTimestampPrime_30, &ParseTreeSrcPrime_31, &SpecsPrime_32, &ErrorsPrime_33);
      if (succeeded)
      {
        MR_Word HaveReadModuleMapSrc0_34;
        MR_Word HaveReadModuleMapSrc_35;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;

        *Globals_16 = Globals0_15;
        HaveReadModuleMapSrc0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
        mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), ((MR_Box) (*ModuleName_18)), HaveReadModuleMapSrc0_34, &HaveReadModuleMapSrc_35);
        Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 1))));
        Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 2))));
        Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 3))));
        Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 4))));
        Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 5))));
        Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 6))));
        Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 7))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HaveReadModuleMaps_44 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_35));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_122));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_126));
        }
        *FileNameDotM_19 = FileNameDotMPrime_29;
        *MaybeTimestamp_21 = MaybeTimestampPrime_30;
        *ParseTreeSrc_22 = ParseTreeSrcPrime_31;
        *Specs_23 = SpecsPrime_32;
        *Errors_24 = ErrorsPrime_33;
      }
      else
      {
        MR_Word DisableSmart_36;
        MR_Word Var_78;

        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_20));
        }
        parse_tree__read_modules__read_module_src_14_p_0(Globals0_15, (MR_String) "Reading module", (MR_Integer) 1, (MR_Integer) 1, *ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), FileNameDotM_19, Var_78, MaybeTimestamp_21, ParseTreeSrc_22, Specs_23, Errors_24);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_36);
        switch (DisableSmart_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            libs__globals__set_option_4_p_0((MR_Integer) 145, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[2])), Globals0_15, Globals_16);
            break;
          case (MR_Integer) 0:
            *Globals_16 = Globals0_15;
            break;
        }
        *STATE_VARIABLE_HaveReadModuleMaps_44 = STATE_VARIABLE_HaveReadModuleMaps_0_43;
      }
      libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 79, &Stats_37);
      libs__file_util__maybe_report_stats_3_p_0(Stats_37);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_print_delayed_error_messages_4_p_0(
  MR_Word ErrorStream_5,
  MR_Word Globals_6)
{
  {
    MR_Word Limited_8;
    MR_Word ExtraErrorInfo_9;

    libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_8);
    libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 0);
    libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_9);
    libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 0);
    switch (Limited_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_19;
          MR_String Var_23;

          Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "Some error messages were suppressed ", (MR_String) "by \140--limit-error-contexts\' options.\n");
          mercury__io__write_string_4_p_0(ErrorStream_5, Var_19);
          Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "You can see the suppressed messages ", (MR_String) "if you recompile without these options.\n");
          mercury__io__write_string_4_p_0(ErrorStream_5, Var_23);
        }
        break;
    }
    switch (ExtraErrorInfo_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VerboseErrors_10;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 71, &VerboseErrors_10);
          switch (VerboseErrors_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_4_p_0(ErrorStream_5, (MR_String) "For more information, recompile with \140-E\'.\n");
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_4_p_0(
  MR_Word Globals_5,
  MR_Word OpModeQuery_6)
{
  switch (OpModeQuery_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String CC_Type_10;
        MR_String Var_70;
        MR_Word StdOut_78;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 555, &CC_Type_10);
        mercury__io__stdout_stream_3_p_0(&StdOut_78);
        Var_70 = mercury__string__f_43_43_2_f_0(CC_Type_10, (MR_String) "\n");
        mercury__io__write_string_4_p_0(StdOut_78, Var_70);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word StdOut_80;

        mercury__io__stdout_stream_3_p_0(&StdOut_80);
        backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(Globals_5, StdOut_80);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String CC_8;
        MR_Word StdOut_9;
        MR_String Var_75;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 531, &CC_8);
        mercury__io__stdout_stream_3_p_0(&StdOut_9);
        Var_75 = mercury__string__f_43_43_2_f_0(CC_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(StdOut_9, Var_75);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StdOut_79;

        mercury__io__stdout_stream_3_p_0(&StdOut_79);
        backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(Globals_5, StdOut_79);
        mercury__io__nl_3_p_0(StdOut_79);
      }
      break;
    case (MR_Integer) 10:
      {
        MR_String ClassName_15;
        MR_String Var_38;
        MR_Word StdOut_87;

        mercury__io__stdout_stream_3_p_0(&StdOut_87);
        parse_tree__file_names__get_class_dir_name_2_p_0(Globals_5, &ClassName_15);
        Var_38 = mercury__string__f_43_43_2_f_0(ClassName_15, (MR_String) "\n");
        mercury__io__write_string_4_p_0(StdOut_87, Var_38);
      }
      break;
    case (MR_Integer) 5:
      {
        MR_String CSC_11;
        MR_String Var_60;
        MR_Word StdOut_81;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 563, &CSC_11);
        mercury__io__stdout_stream_3_p_0(&StdOut_81);
        Var_60 = mercury__string__f_43_43_2_f_0(CSC_11, (MR_String) "\n");
        mercury__io__write_string_4_p_0(StdOut_81, Var_60);
      }
      break;
    case (MR_Integer) 6:
      {
        MR_String CSC_Type_12;
        MR_String Var_55;
        MR_Word StdOut_82;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 556, &CSC_Type_12);
        mercury__io__stdout_stream_3_p_0(&StdOut_82);
        Var_55 = mercury__string__f_43_43_2_f_0(CSC_Type_12, (MR_String) "\n");
        mercury__io__write_string_4_p_0(StdOut_82, Var_55);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word StdOut_83;

        mercury__io__stdout_stream_3_p_0(&StdOut_83);
        backend_libs__compile_target_code__output_c_grade_defines_4_p_0(Globals_5, StdOut_83);
      }
      break;
    case (MR_Integer) 11:
      {
        MR_String Grade_16;
        MR_Word Stdout_88;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &Grade_16);
        mercury__io__stdout_stream_3_p_0(&Stdout_88);
        mercury__io__write_string_4_p_0(Stdout_88, Grade_16);
        mercury__io__nl_3_p_0(Stdout_88);
      }
      break;
    case (MR_Integer) 12:
      {
        MR_Word LibGrades_17;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 677, &LibGrades_17);
        if (!((LibGrades_17 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Stdout_89;

          mercury__io__stdout_stream_3_p_0(&Stdout_89);
          mercury__io__write_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Stdout_89, LibGrades_17, (MR_String) "\n", (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[0]));
          mercury__io__nl_3_p_0(Stdout_89);
        }
      }
      break;
    case (MR_Integer) 9:
      {
        MR_Word StdOut_86;

        mercury__io__stdout_stream_3_p_0(&StdOut_86);
        backend_libs__compile_target_code__output_library_link_flags_4_p_0(Globals_5, StdOut_86);
      }
      break;
    case (MR_Integer) 7:
      {
        MR_String LinkCommand_13;
        MR_Word Stdout_14;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 614, &LinkCommand_13);
        mercury__io__stdout_stream_3_p_0(&Stdout_14);
        mercury__io__write_string_4_p_0(Stdout_14, LinkCommand_13);
        mercury__io__nl_3_p_0(Stdout_14);
      }
      break;
    case (MR_Integer) 8:
      {
        MR_String LinkCommand_84;
        MR_Word Stdout_85;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 615, &LinkCommand_84);
        mercury__io__stdout_stream_3_p_0(&Stdout_85);
        mercury__io__write_string_4_p_0(Stdout_85, LinkCommand_84);
        mercury__io__nl_3_p_0(Stdout_85);
      }
      break;
    case (MR_Integer) 13:
      {
        MR_String TargetArch_20;
        MR_String Var_25;
        MR_Word StdOut_92;

        mercury__io__stdout_stream_3_p_0(&StdOut_92);
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 704, &TargetArch_20);
        Var_25 = mercury__string__f_43_43_2_f_0(TargetArch_20, (MR_String) "\n");
        mercury__io__write_string_4_p_0(StdOut_92, Var_25);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Continue_14;
    MR_Word conv2_STATE_VARIABLE_GradeOpts_22;

    top_level__mercury_compile_main__do_detect_libgrade_using_lib_file_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_Continue_14, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_GradeOpts_22);
    *wrapper_arg_4 = ((MR_Box) (conv3_Continue_14));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_GradeOpts_22));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Continue_14;
    MR_Word conv0_STATE_VARIABLE_GradeOpts_21;

    top_level__mercury_compile_main__do_detect_libgrade_using_init_file_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_Continue_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_GradeOpts_21);
    *wrapper_arg_4 = ((MR_Box) (conv1_Continue_14));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_GradeOpts_21));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0(
  MR_Word Globals_6,
  MR_Word MaybeConfigMerStdLibDir_7,
  MR_Word * GradeOpts_8)
{
  {
    MR_bool succeeded;
    MR_Word Detect_10;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 676, &Detect_10);
    switch (Detect_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *GradeOpts_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word VeryVerbose_13;
          MR_Word Verbose_11;
          MR_String MerStdLibDir_15;
          MR_Word MaybeStdLibDir_14;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 69, &Verbose_11);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 70, &VeryVerbose_13);
          libs__globals__lookup_maybe_string_option_3_p_0(Globals_6, (MR_Integer) 591, &MaybeStdLibDir_14);
          succeeded = (MaybeStdLibDir_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MerStdLibDir_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_14, (MR_Integer) 0))));
            {
              MR_String ModulesDir_39;
              MR_Word MaybeGradeOpts0_40;
              MR_Word Var_49;

              ModulesDir_39 = mercury__dir__f_slash_2_f_0(MerStdLibDir_15, (MR_String) "modules");
              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (top_level__mercury_compile_main__detect_libgrades_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (VeryVerbose_13));
              }
              mercury__dir__foldl2_6_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), Var_49, ModulesDir_39, ((MR_Box) ((MR_Unsigned) 0U)), &MaybeGradeOpts0_40);
              if (((MR_tag((MR_Word) MaybeGradeOpts0_40)) == (MR_Integer) 1))
                *GradeOpts_8 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word GradeOpts0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGradeOpts0_40, (MR_Integer) 0))));
                MR_String LibsDir_42;
                MR_Word MaybeGradeOpts_43;
                MR_Word Var_53;

                LibsDir_42 = mercury__dir__f_slash_2_f_0(MerStdLibDir_15, (MR_String) "lib");
                {
                  Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (top_level__mercury_compile_main__detect_libgrades_5_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (VeryVerbose_13));
                }
                mercury__dir__foldl2_6_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), Var_53, LibsDir_42, ((MR_Box) (GradeOpts0_41)), &MaybeGradeOpts_43);
                if (((MR_tag((MR_Word) MaybeGradeOpts_43)) == (MR_Integer) 1))
                  *GradeOpts_8 = (MR_Word) ((MR_Unsigned) 0U);
                else
                  *GradeOpts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGradeOpts_43, (MR_Integer) 0))));
              }
            }
          }
          else
          {
            MR_String MerStdLibDir_32;
            MR_Word Var_26;
            MR_Word Var_27;

            succeeded = (MaybeConfigMerStdLibDir_7 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConfigMerStdLibDir_7, (MR_Integer) 0))));
              succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MerStdLibDir_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
                Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
                succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
              top_level__mercury_compile_main__do_detect_libgrades_5_p_0(VeryVerbose_13, MerStdLibDir_32, GradeOpts_8);
            else
              *GradeOpts_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrades_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Continue_14;
    MR_Word conv2_STATE_VARIABLE_GradeOpts_22;

    top_level__mercury_compile_main__do_detect_libgrade_using_lib_file_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_Continue_14, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_GradeOpts_22);
    *wrapper_arg_4 = ((MR_Box) (conv3_Continue_14));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_GradeOpts_22));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrades_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Continue_14;
    MR_Word conv0_STATE_VARIABLE_GradeOpts_21;

    top_level__mercury_compile_main__do_detect_libgrade_using_init_file_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_Continue_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_GradeOpts_21);
    *wrapper_arg_4 = ((MR_Box) (conv1_Continue_14));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_GradeOpts_21));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrades_5_p_0(
  MR_Word VeryVerbose_6,
  MR_String StdLibDir_7,
  MR_Word * GradeOpts_8)
{
  {
    MR_String ModulesDir_10;
    MR_Word MaybeGradeOpts0_11;
    MR_Word Var_22;

    ModulesDir_10 = mercury__dir__f_slash_2_f_0(StdLibDir_7, (MR_String) "modules");
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (top_level__mercury_compile_main__do_detect_libgrades_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (VeryVerbose_6));
    }
    mercury__dir__foldl2_6_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), Var_22, ModulesDir_10, ((MR_Box) ((MR_Unsigned) 0U)), &MaybeGradeOpts0_11);
    if (((MR_tag((MR_Word) MaybeGradeOpts0_11)) == (MR_Integer) 1))
      *GradeOpts_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word GradeOpts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGradeOpts0_11, (MR_Integer) 0))));
      MR_String LibsDir_13;
      MR_Word MaybeGradeOpts_14;
      MR_Word Var_26;

      LibsDir_13 = mercury__dir__f_slash_2_f_0(StdLibDir_7, (MR_String) "lib");
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (top_level__mercury_compile_main__do_detect_libgrades_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (VeryVerbose_6));
      }
      mercury__dir__foldl2_6_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), Var_26, LibsDir_13, ((MR_Box) (GradeOpts0_12)), &MaybeGradeOpts_14);
      if (((MR_tag((MR_Word) MaybeGradeOpts_14)) == (MR_Integer) 1))
        *GradeOpts_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
        *GradeOpts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGradeOpts_14, (MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_dump_options_file_4_p_0(
  MR_Word ArgsGlobals_5,
  MR_Word Variables_6)
{
  {
    MR_bool succeeded;
    MR_String DumpOptionsFile_8;

    libs__globals__lookup_string_option_3_p_0(ArgsGlobals_5, (MR_Integer) 196, &DumpOptionsFile_8);
    succeeded = (strcmp(DumpOptionsFile_8, (MR_String) "") == 0);
    if (!(succeeded))
    {
      MR_Word StdErrStream_9;

      mercury__io__stderr_stream_3_p_0(&StdErrStream_9);
      make__options_file__dump_options_file_5_p_0(StdErrStream_9, DumpOptionsFile_8, Variables_6);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]);
    else
    {
      MR_String Arg_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String File_13;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", Arg_9, &File_13);
      if (succeeded)
      {
        MR_Word OpenRes_14;

        mercury__io__open_input_4_p_0(File_13, &OpenRes_14);
        if (((MR_tag((MR_Word) OpenRes_14)) == (MR_Integer) 1))
        {
          MR_String Msg_20;
          MR_String Var_28;
          MR_Word Var_30;

          Var_28 = mercury__string__f_43_43_2_f_0(File_13, (MR_String) "\'");
          Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", Var_28);
          Var_30 = mercury__io__make_io_error_1_f_0(Msg_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
          }
        }
        else
        {
          MR_Word S_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenRes_14, (MR_Integer) 0))));
          MR_Word ReadRes_16;

          top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(S_15, &ReadRes_16);
          if (((MR_tag((MR_Word) ReadRes_16)) == (MR_Integer) 1))
          {
            MR_Word E_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadRes_16, (MR_Integer) 0))));
            MR_Word Var_32;
            MR_String Var_43;
            MR_String Var_45;
            MR_String Var_46;
            MR_String Var_48;

            Var_48 = mercury__io__error_message_1_f_0(E_18);
            Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", Var_48);
            Var_45 = mercury__string__f_43_43_2_f_0(File_13, Var_46);
            Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", Var_45);
            Var_32 = mercury__io__make_io_error_1_f_0(Var_43);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
            }
          }
          else
          {
            MR_Word FileArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadRes_16, (MR_Integer) 0))));
            MR_Word Var_33;
            MR_Word next_value_of_HeadVar__1_1;

            Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileArgs_17, Args_10);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_33;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
        }
      }
      else
      {
        MR_Word Result0_21;

        top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(Args_10, &Result0_21);
        if (((MR_tag((MR_Word) Result0_21)) == (MR_Integer) 1))
          *HeadVar__2_2 = Result0_21;
        else
        {
          MR_Word ExpandedArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_21, (MR_Integer) 0))));
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Arg_9));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (ExpandedArgs_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(
  MR_Word S_5,
  MR_Word * Res_6)
{
  {
    MR_bool succeeded;
    MR_Word LineRes_8;

    mercury__io__read_line_as_string_4_p_0(S_5, &LineRes_8);
    switch (MR_tag((MR_Word) LineRes_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_6 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]);
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), LineRes_8, (MR_Integer) 0))));
          MR_Word Res0_10;

          top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(S_5, &Res0_10);
          if (((MR_tag((MR_Word) Res0_10)) == (MR_Integer) 1))
            *Res_6 = Res0_10;
          else
          {
            MR_Word Lines_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res0_10, (MR_Integer) 0))));
            MR_String StrippedLine_12;

            StrippedLine_12 = mercury__string__strip_1_f_0(Line_9);
            succeeded = (strcmp(StrippedLine_12, (MR_String) "") == 0);
            if (succeeded)
              *Res_6 = Res0_10;
            else
            {
              MR_Word Var_20;

              {
                Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (StrippedLine_12));
                MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Lines_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Res_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word E_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LineRes_8, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (E_14));
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = top_level__mercury_compile_main____Unify____file_or_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    top_level__mercury_compile_main____Compare____file_or_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__top_level__mercury_compile_main__init(void)
{
}

void mercury__top_level__mercury_compile_main__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0);
	MR_register_type_ctor_info(&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_maybe_write_d_file_0);
}

void mercury__top_level__mercury_compile_main__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_main__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_main.
