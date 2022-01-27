/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2021-04-15
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

static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_main____vpti_tuple_3__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_maps_0;

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile_main____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

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
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__2086__1_1_p_0(
  MR_Char LambdaHeadVar__1_22);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1408__1_2_p_0(
  MR_Word ModulesToRecompile_32,
  MR_Word LambdaHeadVar__1_57);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__950__1_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_57_53_48_95_95_49_95_95_91_51_93_95_48_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word * LambdaHeadVar__3_31);

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
top_level__mercury_compile_main____Compare____compile_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____compile_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String SourceFileName_18,
  MR_Word SourceFileModuleName_19,
  MR_Word MaybeTimestamp_20,
  MR_Word NestedSubModules0_21,
  MR_Word FindTimestampFiles_22,
  MR_Word RawCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41);

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_14_p_0(
  MR_Word Globals0_15,
  MR_Word OpModeAugment_16,
  MR_Word ModuleAndImports_17,
  MR_Word NestedSubModules_18,
  MR_Word FindTimestampFiles_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_49,
  MR_Word * STATE_VARIABLE_DumpInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_53,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_54);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeCodeGen_15,
  MR_Word NestedSubModules_16,
  MR_Word FindTimestampFiles_17,
  MR_Word MaybeTimestampMap_18,
  MR_Word STATE_VARIABLE_HLDS_0_53,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55,
  MR_Word STATE_VARIABLE_DumpInfo_0_56,
  MR_Word * STATE_VARIABLE_DumpInfo_57);

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
top_level__mercury_compile_main__pre_hlds_pass_18_p_0(
  MR_Word Globals_19,
  MR_Word OpModeAugment_20,
  MR_Word WriteDFile0_21,
  MR_Word ModuleAndImports0_22,
  MR_Word * HLDS1_23,
  MR_Word * QualInfo_24,
  MR_Word * MaybeTimestampMap_25,
  MR_Word * UndefTypes_26,
  MR_Word * UndefModes_27,
  MR_Word * FoundSemanticError_28,
  MR_Word STATE_VARIABLE_DumpInfo_0_74,
  MR_Word * STATE_VARIABLE_DumpInfo_75,
  MR_Word STATE_VARIABLE_Specs_0_76,
  MR_Word * STATE_VARIABLE_Specs_77,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_78,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_79);

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
  MR_Word * STATE_VARIABLE_HLDS_38,
  MR_Word * QualInfo_27,
  MR_Word * FoundInvalidType_28,
  MR_Word * FoundInvalidInstOrMode_29,
  MR_Word * FoundSemanticError_30,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
top_level__mercury_compile_main__maybe_grab_plain_and_trans_opt_files_11_p_0(
  MR_Word Globals_12,
  MR_Word OpModeAugment_13,
  MR_Word Verbose_14,
  MR_Word MaybeTransOptDeps_15,
  MR_Word * Error_16,
  MR_Word ModuleAndImports0_17,
  MR_Word * ModuleAndImports_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41);

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
  MR_Word HeadVar__1_1,
  MR_String * ModuleToLink_6);

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
top_level__mercury_compile_main__process_compiler_arg_build_11_p_0(
  MR_Word OpModeArgs_12,
  MR_Word FileOrModule_13,
  MR_Word OptionArgs_14,
  MR_Word HaveReadModuleMaps0_15,
  MR_Word Globals_16,
  MR_Word HeadVar__6_17,
  MR_Word * Succeeded_18,
  MR_Tuple * HeadVar__9_9);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_54_44_32_56_93_95_48_11_p_0(
  MR_Word OpModeArgs_12,
  MR_Word FileOrModule_13,
  MR_Word OptionArgs_14,
  MR_Word HaveReadModuleMaps0_15,
  MR_Word Globals_16,
  MR_Word * Succeeded_18,
  MR_Tuple * HeadVar__9_9);

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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_23,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_24);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_11_p_0(
  MR_Word Globals_12,
  MR_Word OpModeArgs_13,
  MR_Word FileNamesFromStdin_14,
  MR_Word DetectedGradeFlags_15,
  MR_Word OptionVariables_16,
  MR_Word OptionArgs_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_32,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_33);

static void MR_CALL 
top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word DetectedGradeFlags_12,
  MR_Word OptionVariables_13,
  MR_Word OptionArgs_14,
  MR_Word Compile_15,
  MR_Word * Succeeded_16);

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
top_level__mercury_compile_main__process_compiler_stdin_args_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeArgs_15,
  MR_Word DetectedGradeFlags_16,
  MR_Word OptionVariables_17,
  MR_Word OptionArgs_18,
  MR_Word STATE_VARIABLE_Modules_0_30,
  MR_Word * STATE_VARIABLE_Modules_31,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_32,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_33,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_30,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_31);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(
  MR_Word Globals0_11,
  MR_Word OpModeArgs_12,
  MR_Word OptionArgs_13,
  MR_Word FileOrModule_14,
  MR_Word * ModulesToLink_15,
  MR_Word * ExtraObjFiles_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_47);

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
  MR_Word SourceFileModuleName_19,
  MR_Word MaybeTimestamp_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word RawCompUnits_23,
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
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(
  MR_Word Globals0_8,
  MR_Word InterfaceFile_9,
  MR_Word FileOrModule_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_25,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_26);

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
top_level__mercury_compile_main____Unify____compile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____compile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[16][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[5][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][6];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[14][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[2][12];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[7][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[1][8];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[2][9];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][18];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[1][14];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[1][11];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_12[1][4];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_13[1][7];




static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[16][2] = {
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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[3])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for module"))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[5][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[0])),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[14][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".ugly"))))
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
    ((MR_Box) (((MR_Box) ((MR_String) ".prof"))))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".used"))))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c"))))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java"))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[2][12] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[3])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_12[0])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_12[0])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[4])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[4])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[2][9] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0)),
    ((MR_Box) (&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_tuple_3__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_12[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_13[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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

static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_main____vpti_tuple_3__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_maps_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile_main____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_compile_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (top_level__mercury_compile_main____Unify____compile_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____compile_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "compile",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&top_level__mercury_compile_main____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__2086__1_1_p_0(
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
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1408__1_2_p_0(
  MR_Word ModulesToRecompile_32,
  MR_Word LambdaHeadVar__1_57)
{
  {
    MR_bool succeeded;
    MR_Word RawCompUnitModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_57, (MR_Integer) 0))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (RawCompUnitModuleName_35)), ModulesToRecompile_32);
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__950__1_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_57_53_48_95_95_49_95_95_91_51_93_95_48_8_p_0(Compile_15, LambdaHeadVar__1_29, LambdaHeadVar__3_31);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_57_53_48_95_95_49_95_95_91_51_93_95_48_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word * LambdaHeadVar__3_31)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Compile_15, (MR_Integer) 1))));
    MR_Box conv2_LambdaHeadVar__3_31;
    MR_Box conv1_LambdaHeadVar__7_35;

    func_0(((MR_Box) (Compile_15)), ((MR_Box) (LambdaHeadVar__1_29)), &conv2_LambdaHeadVar__3_31, ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__7_35);
    *LambdaHeadVar__3_31 = ((MR_Word) (conv2_LambdaHeadVar__3_31));
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
top_level__mercury_compile_main____Compare____compile_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____compile_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
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
  MR_Word SourceFileModuleName_19,
  MR_Word MaybeTimestamp_20,
  MR_Word NestedSubModules0_21,
  MR_Word FindTimestampFiles_22,
  MR_Word RawCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 0))));
    MR_Word ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 1))));
    MR_Word RawItemBlocks_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 2))));
    MR_Word NestedSubModules_31;
    MR_Word ModuleAndImports_32;
    MR_Word ImportedSpecs_34;
    MR_Word Errors_35;
    MR_Word FatalErrors_36;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_45_45;
    MR_Word STATE_VARIABLE_Specs_47_47;
    MR_Word Var_48;
    MR_Word _AugCompUnit_33;

    parse_tree__check_raw_comp_unit__check_interface_item_blocks_for_no_exports_6_p_0(Globals_16, ModuleName_28, ModuleNameContext_29, RawItemBlocks_30, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_44_44);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_28, SourceFileModuleName_19);
    if (succeeded)
      NestedSubModules_31 = NestedSubModules0_21;
    else
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &NestedSubModules_31);
    parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0(Globals_16, SourceFileName_18, SourceFileModuleName_19, MaybeTimestamp_20, NestedSubModules_31, RawCompUnit_23, &ModuleAndImports_32, STATE_VARIABLE_HaveReadModuleMaps_0_40, &STATE_VARIABLE_HaveReadModuleMaps_45_45);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_32, &_AugCompUnit_33, &ImportedSpecs_34, &Errors_35);
    STATE_VARIABLE_Specs_47_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ImportedSpecs_34, STATE_VARIABLE_Specs_44_44);
    Var_48 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_35, Var_48, &FatalErrors_36);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_36);
    if (succeeded)
    {
      MR_Word Var_37;

      top_level__mercury_compile_main__process_augmented_module_14_p_0(Globals_16, OpModeAugment_17, ModuleAndImports_32, NestedSubModules_31, FindTimestampFiles_22, ExtraObjFiles_24, (MR_Word) ((MR_Unsigned) 0U), &Var_37, STATE_VARIABLE_Specs_47_47, STATE_VARIABLE_Specs_39, STATE_VARIABLE_HaveReadModuleMaps_45_45, STATE_VARIABLE_HaveReadModuleMaps_41);
    }
    else
    {
      *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_45_45;
      *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_47_47;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_14_p_0(
  MR_Word Globals0_15,
  MR_Word OpModeAugment_16,
  MR_Word ModuleAndImports_17,
  MR_Word NestedSubModules_18,
  MR_Word FindTimestampFiles_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_49,
  MR_Word * STATE_VARIABLE_DumpInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_53,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_54)
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
    MR_Word STATE_VARIABLE_DumpInfo_57_57;
    MR_Word STATE_VARIABLE_Specs_58_58;
    MR_Word STATE_VARIABLE_DumpInfo_61_61;
    MR_Word STATE_VARIABLE_Specs_62_62;
    MR_Word Var_64;

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
    top_level__mercury_compile_main__pre_hlds_pass_18_p_0(Globals_25, OpModeAugment_16, WriteDFile_26, ModuleAndImports_17, &HLDS1_28, &QualInfo_29, &MaybeTimestampMap_30, &UndefTypes_31, &UndefModes_32, &PreHLDSErrors_33, STATE_VARIABLE_DumpInfo_0_49, &STATE_VARIABLE_DumpInfo_57_57, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_HaveReadModuleMaps_0_53, STATE_VARIABLE_HaveReadModuleMaps_54);
    top_level__mercury_compile_front_end__frontend_pass_14_p_0(OpModeAugment_16, QualInfo_29, UndefTypes_31, UndefModes_32, PreHLDSErrors_33, &FrontEndErrors_34, HLDS1_28, &HLDS20_35, STATE_VARIABLE_DumpInfo_57_57, &STATE_VARIABLE_DumpInfo_61_61, STATE_VARIABLE_Specs_58_58, &STATE_VARIABLE_Specs_62_62);
    succeeded = (PreHLDSErrors_33 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (FrontEndErrors_34 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_64 = parse_tree__error_util__contains_errors_2_f_0(Globals_25, STATE_VARIABLE_Specs_62_62);
        succeeded = (Var_64 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Verbose_36;
      MR_Word Stats_37;
      MR_Word HLDS21_38;

      libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 65, &Verbose_36);
      libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 75, &Stats_37);
      top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(Verbose_36, Stats_37, HLDS20_35, &HLDS21_38);
      switch (MR_tag((MR_Word) OpModeAugment_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpModeAugment_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_61_61;
                *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_62_62;
              }
              break;
            case (MR_Integer) 1:
              {
                top_level__mercury_compile_middle_passes__output_trans_opt_file_7_p_0(HLDS21_38, STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_52, STATE_VARIABLE_DumpInfo_61_61, STATE_VARIABLE_DumpInfo_50);
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word HLDS22_46;

                top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(Globals_25, Verbose_36, Stats_37, HLDS21_38, &HLDS22_46);
                top_level__mercury_compile_middle_passes__output_analysis_file_7_p_0(HLDS22_46, STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_52, STATE_VARIABLE_DumpInfo_61_61, STATE_VARIABLE_DumpInfo_50);
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              {
                check_hlds__xml_documentation__xml_documentation_3_p_0(HLDS21_38);
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_61_61;
                *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_62_62;
              }
              break;
            case (MR_Integer) 4:
              {
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_61_61;
                *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_62_62;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word UnusedArgs_39;

                libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 13, &UnusedArgs_39);
                switch (UnusedArgs_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_62_62;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word OptTuple_40;
                      MR_Word NoOptUnusedArgsOptTuple_41;
                      MR_Word NoOptUnusedArgsGlobals_42;
                      MR_Word HLDS21a_43;
                      MR_Integer Var_174;
                      MR_Integer Var_175;
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
                      MR_String Var_211;
                      MR_Unsigned packed_word_0;
                      MR_Unsigned packed_word_1;
                      MR_Unsigned packed_word_2;
                      MR_Word _UnusedArgsInfos_44;
                      MR_Word _HLDS22_45;

                      libs__globals__get_opt_tuple_2_p_0(Globals_25, &OptTuple_40);
                      packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 0)));
                      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 1)));
                      packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 2)));
                      Var_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 3))));
                      Var_175 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 4))));
                      Var_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 5))));
                      Var_177 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 6))));
                      Var_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 7))));
                      Var_179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 8))));
                      Var_180 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 9))));
                      Var_181 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 10))));
                      Var_182 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 11))));
                      Var_183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 12))));
                      Var_184 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 13))));
                      Var_185 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 14))));
                      Var_186 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 15))));
                      Var_187 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 16))));
                      Var_188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 17))));
                      Var_189 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 18))));
                      Var_190 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 19))));
                      Var_191 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 20))));
                      Var_192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 21))));
                      Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 22))));
                      Var_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 23))));
                      Var_195 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 24))));
                      Var_196 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 25))));
                      Var_197 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 26))));
                      Var_198 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 27))));
                      Var_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 28))));
                      Var_200 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 29))));
                      Var_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 30))));
                      Var_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 31))));
                      Var_203 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 32))));
                      Var_204 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 33))));
                      Var_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 34))));
                      Var_206 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 35))));
                      Var_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 36))));
                      Var_208 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 37))));
                      Var_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 38))));
                      Var_210 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 39))));
                      Var_211 = ((MR_String) ((MR_hl_field(MR_mktag(0), OptTuple_40, (MR_Integer) 40))));
                      {
                        NoOptUnusedArgsOptTuple_41 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 128U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 7))));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 1) = (MR_Box) (packed_word_1);
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 2) = (MR_Box) (packed_word_2);
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 3) = ((MR_Box) (Var_174));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 4) = ((MR_Box) (Var_175));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 5) = ((MR_Box) (Var_176));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 6) = ((MR_Box) (Var_177));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 7) = ((MR_Box) (Var_178));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 8) = ((MR_Box) (Var_179));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 9) = ((MR_Box) (Var_180));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 10) = ((MR_Box) (Var_181));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 11) = ((MR_Box) (Var_182));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 12) = ((MR_Box) (Var_183));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 13) = ((MR_Box) (Var_184));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 14) = ((MR_Box) (Var_185));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 15) = ((MR_Box) (Var_186));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 16) = ((MR_Box) (Var_187));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 17) = ((MR_Box) (Var_188));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 18) = ((MR_Box) (Var_189));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 19) = ((MR_Box) (Var_190));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 20) = ((MR_Box) (Var_191));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 21) = ((MR_Box) (Var_192));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 22) = ((MR_Box) (Var_193));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 23) = ((MR_Box) (Var_194));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 24) = ((MR_Box) (Var_195));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 25) = ((MR_Box) (Var_196));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 26) = ((MR_Box) (Var_197));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 27) = ((MR_Box) (Var_198));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 28) = ((MR_Box) (Var_199));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 29) = ((MR_Box) (Var_200));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 30) = ((MR_Box) (Var_201));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 31) = ((MR_Box) (Var_202));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 32) = ((MR_Box) (Var_203));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 33) = ((MR_Box) (Var_204));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 34) = ((MR_Box) (Var_205));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 35) = ((MR_Box) (Var_206));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 36) = ((MR_Box) (Var_207));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 37) = ((MR_Box) (Var_208));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 38) = ((MR_Box) (Var_209));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 39) = ((MR_Box) (Var_210));
                        MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_41, 40) = ((MR_Box) (Var_211));
                      }
                      libs__globals__set_opt_tuple_3_p_0(NoOptUnusedArgsOptTuple_41, Globals_25, &NoOptUnusedArgsGlobals_42);
                      hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_42, HLDS21_38, &HLDS21a_43);
                      top_level__mercury_compile_middle_passes__maybe_unused_args_9_p_0(Verbose_36, Stats_37, &_UnusedArgsInfos_44, HLDS21a_43, &_HLDS22_45, STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_52);
                    }
                    break;
                }
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_61_61;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OpModeCodeGen_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeAugment_16, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word HLDS22_87;

            top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(Globals_25, Verbose_36, Stats_37, HLDS21_38, &HLDS22_87);
            top_level__mercury_compile_main__after_front_end_passes_13_p_0(Globals_25, OpModeCodeGen_47, NestedSubModules_18, FindTimestampFiles_19, MaybeTimestampMap_30, HLDS22_87, ExtraObjFiles_20, STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_52, STATE_VARIABLE_DumpInfo_61_61, STATE_VARIABLE_DumpInfo_50);
          }
          break;
      }
    }
    else
    {
      MR_Integer ExitStatus_48;

      mercury__io__get_exit_status_3_p_0(&ExitStatus_48);
      succeeded = (ExitStatus_48 == (MR_Integer) 0);
      if (succeeded)
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_62_62;
      *STATE_VARIABLE_DumpInfo_50 = STATE_VARIABLE_DumpInfo_61_61;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeCodeGen_15,
  MR_Word NestedSubModules_16,
  MR_Word FindTimestampFiles_17,
  MR_Word MaybeTimestampMap_18,
  MR_Word STATE_VARIABLE_HLDS_0_53,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55,
  MR_Word STATE_VARIABLE_DumpInfo_0_56,
  MR_Word * STATE_VARIABLE_DumpInfo_57)
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
    MR_Word STATE_VARIABLE_HLDS_62_62;
    MR_Word STATE_VARIABLE_HLDS_64_64;
    MR_Word STATE_VARIABLE_DumpInfo_65_65;
    MR_Word STATE_VARIABLE_Specs_66_66;
    MR_Word Var_30;

    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 65, &Verbose_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 75, &Stats_25);
    top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(Verbose_24, Stats_25, STATE_VARIABLE_HLDS_0_53, &STATE_VARIABLE_HLDS_62_62);
    top_level__mercury_compile_middle_passes__middle_pass_8_p_0(STATE_VARIABLE_HLDS_62_62, &STATE_VARIABLE_HLDS_64_64, STATE_VARIABLE_DumpInfo_0_56, &STATE_VARIABLE_DumpInfo_65_65, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_66_66);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 296, &HighLevelCode_26);
    libs__globals__get_target_2_p_0(Globals_14, &Target_27);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_64_64, &ModuleName_28);
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[11])), ModuleName_28, &UsageFileName_29);
    mercury__io__remove_file_4_p_0(UsageFileName_29, &Var_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 3, &HaltAtWarn_31);
    switch (HaltAtWarn_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FrontEndErrors_32 = parse_tree__error_util__contains_errors_2_f_0(Globals_14, STATE_VARIABLE_Specs_66_66);
        break;
      case (MR_Integer) 1:
        FrontEndErrors_32 = parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(Globals_14, STATE_VARIABLE_Specs_66_66);
        break;
    }
    hlds__hlds_module__module_info_get_num_errors_2_p_0(STATE_VARIABLE_HLDS_64_64, &NumErrors_33);
    succeeded = (FrontEndErrors_32 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (NumErrors_33 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Succeeded_37;
      MR_Word STATE_VARIABLE_HLDS_78_78;

      switch (Target_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExportDecls_42;

            backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_64_64, &ExportDecls_42);
            backend_libs__export__produce_header_file_5_p_0(STATE_VARIABLE_HLDS_64_64, ExportDecls_42, ModuleName_28);
            switch (HighLevelCode_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GlobalData_49;
                  MR_Word LLDS_50;

                  top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(STATE_VARIABLE_HLDS_64_64, &STATE_VARIABLE_HLDS_78_78, &GlobalData_49, &LLDS_50, STATE_VARIABLE_DumpInfo_65_65, STATE_VARIABLE_DumpInfo_57);
                  top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0(OpModeCodeGen_15, STATE_VARIABLE_HLDS_78_78, GlobalData_49, LLDS_50, ModuleName_28, &Succeeded_37, ExtraObjFiles_20);
                  *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_66_66;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MLDS_131;
                  MR_Word NewSpecs_132;
                  MR_Word TargetCodeSucceeded_133;
                  MR_Word Var_43;

                  top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_64_64, &Var_43, &MLDS_131, &NewSpecs_132, STATE_VARIABLE_DumpInfo_65_65, STATE_VARIABLE_DumpInfo_57);
                  *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_132, STATE_VARIABLE_Specs_66_66);
                  top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(Globals_14, MLDS_131, &TargetCodeSucceeded_133);
                  switch (OpModeCodeGen_15) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      switch (TargetCodeSucceeded_133) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          Succeeded_37 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_String C_File_44;
                            MR_Word TargetType_45;
                            MR_Word PIC_46;
                            MR_Word ObjOtherExt_47;
                            MR_String O_File_48;
                            MR_Word Var_94;
                            MR_Word OutputStream_127;

                            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[12])), ModuleName_28, &C_File_44);
                            backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_14, &TargetType_45);
                            backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_14, TargetType_45, &PIC_46);
                            backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_14, PIC_46, &ObjOtherExt_47);
                            {
                              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (ObjOtherExt_47));
                            }
                            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 0, Var_94, ModuleName_28, &O_File_48);
                            mercury__io__output_stream_3_p_0(&OutputStream_127);
                            backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_14, OutputStream_127, PIC_46, C_File_44, O_File_48, &Succeeded_37);
                            parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_37);
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 0:
                      Succeeded_37 = TargetCodeSucceeded_133;
                      break;
                  }
                  *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_64_64;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MLDS_35;
            MR_Word NewSpecs_36;
            MR_Word Var_34;

            top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_64_64, &Var_34, &MLDS_35, &NewSpecs_36, STATE_VARIABLE_DumpInfo_65_65, STATE_VARIABLE_DumpInfo_57);
            *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_36, STATE_VARIABLE_Specs_66_66);
            top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(STATE_VARIABLE_HLDS_64_64, MLDS_35, &Succeeded_37);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_64_64;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TargetCodeSucceeded_39;
            MR_Word MLDS_125;
            MR_Word NewSpecs_126;
            MR_Word Var_38;

            top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_64_64, &Var_38, &MLDS_125, &NewSpecs_126, STATE_VARIABLE_DumpInfo_65_65, STATE_VARIABLE_DumpInfo_57);
            *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_126, STATE_VARIABLE_Specs_66_66);
            top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(STATE_VARIABLE_HLDS_64_64, MLDS_125, &TargetCodeSucceeded_39);
            switch (OpModeCodeGen_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                switch (TargetCodeSucceeded_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Succeeded_37 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word OutputStream_40;
                      MR_String JavaFile_41;
                      MR_Word Var_110;

                      mercury__io__output_stream_3_p_0(&OutputStream_40);
                      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[13])), ModuleName_28, &JavaFile_41);
                      {
                        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (JavaFile_41));
                        MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      backend_libs__compile_target_code__compile_java_files_6_p_0(Globals_14, OutputStream_40, Var_110, &Succeeded_37);
                      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_37);
                    }
                    break;
                }
                break;
              case (MR_Integer) 0:
                Succeeded_37 = TargetCodeSucceeded_39;
                break;
            }
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_64_64;
          }
          break;
      }
      switch (Succeeded_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TimestampFiles_51;
            MR_Word Var_120;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv2_TimestampFiles_51;
            MR_Box conv1_STATE_VARIABLE_IO_119_119;
            MR_Box conv3_STATE_VARIABLE_IO_59;

            recompilation__usage__write_usage_file_5_p_0(STATE_VARIABLE_HLDS_78_78, NestedSubModules_16, MaybeTimestampMap_18);
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), FindTimestampFiles_17, (MR_Integer) 1))));
            func_0(((MR_Box) (FindTimestampFiles_17)), ((MR_Box) (ModuleName_28)), &conv2_TimestampFiles_51, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_119_119);
            TimestampFiles_51 = ((MR_Word) (conv2_TimestampFiles_51));
            {
              Var_120 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_13[0]));
              MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_13_p_0_1));
              MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (Globals_14));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_120, TimestampFiles_51, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_59);
          }
          break;
      }
    }
    else
    {
      MR_Integer ExitStatus_52;

      mercury__io__get_exit_status_3_p_0(&ExitStatus_52);
      succeeded = (ExitStatus_52 == (MR_Integer) 0);
      if (succeeded)
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DumpInfo_57 = STATE_VARIABLE_DumpInfo_65_65;
      *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_66_66;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 228, &ProfileCalls_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 229, &ProfileTime_13);
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
      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_output_prof_call_graph\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[10])), ModuleName_14, &ProfFileName_15);
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
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 699, &LocalModulesList_14);
    SymNames_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[6]), LocalModulesList_14);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 491, &IntermodAnalysis_13);
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
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 699, &LocalModulesList_31);
          SymNames_32 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[5]), LocalModulesList_31);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 174, &ShowDepGraph_12);
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
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_dependency_graph\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[9])), ModuleName_13, &FileName_14);
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
top_level__mercury_compile_main__pre_hlds_pass_18_p_0(
  MR_Word Globals_19,
  MR_Word OpModeAugment_20,
  MR_Word WriteDFile0_21,
  MR_Word ModuleAndImports0_22,
  MR_Word * HLDS1_23,
  MR_Word * QualInfo_24,
  MR_Word * MaybeTimestampMap_25,
  MR_Word * UndefTypes_26,
  MR_Word * UndefModes_27,
  MR_Word * FoundSemanticError_28,
  MR_Word STATE_VARIABLE_DumpInfo_0_74,
  MR_Word * STATE_VARIABLE_DumpInfo_75,
  MR_Word STATE_VARIABLE_Specs_0_76,
  MR_Word * STATE_VARIABLE_Specs_77,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_78,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_79)
{
  {
    MR_bool succeeded;
    MR_Word Stats_33;
    MR_Word Verbose_34;
    MR_Word MMCMake_35;
    MR_Word WriteDFile_36;
    MR_Word ModuleName_37;
    MR_Word MaybeTransOptDeps_38;
    MR_Word IntermodError_39;
    MR_Word ModuleAndImports1_40;
    MR_Word AugCompUnit1_41;
    MR_Word ItemSpecs_42;
    MR_String EventSetFileName_44;
    MR_String EventSetName_45;
    MR_Word EventSpecMap1_46;
    MR_Word EventSetErrors_47;
    MR_Word AugCompUnit2_51;
    MR_Word EventSpecMap2_52;
    MR_Word MQInfo0_53;
    MR_Word MQUndefTypes_54;
    MR_Word MQUndefInsts_55;
    MR_Word MQUndefModes_56;
    MR_Word MQUndefTypeClasses_57;
    MR_Word QualifySpecs_58;
    MR_Word RecompInfo0_59;
    MR_Word AugCompUnit_60;
    MR_Word EventSpecMap_61;
    MR_Word TypeEqvMap_62;
    MR_Word UsedModules_63;
    MR_Word RecompInfo_64;
    MR_Word ExpandSpecs_65;
    MR_Word ExpandErrors_66;
    MR_Word MQInfo_67;
    MR_Word EventSet_68;
    MR_Word HLDS0_69;
    MR_Word MakeHLDSFoundInvalidType_70;
    MR_Word MakeHLDSFoundInvalidInstOrMode_71;
    MR_Word STATE_VARIABLE_Specs_88_88;
    MR_Word STATE_VARIABLE_Specs_91_91;
    MR_Word STATE_VARIABLE_Specs_92_92;
    MR_Word STATE_VARIABLE_Specs_98_98;
    MR_Word STATE_VARIABLE_Specs_99_99;
    MR_Word STATE_VARIABLE_Specs_104_104;
    MR_Word STATE_VARIABLE_Specs_109_109;
    MR_Word STATE_VARIABLE_Specs_110_110;
    MR_Word _Error_43;

    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 75, &Stats_33);
    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 65, &Verbose_34);
    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 660, &MMCMake_35);
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports0_22, &ModuleName_37);
    succeeded = (MMCMake_35 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OpModeAugment_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      WriteDFile_36 = (MR_Integer) 0;
      MaybeTransOptDeps_38 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      WriteDFile_36 = WriteDFile0_21;
      switch (WriteDFile_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeTransOptDeps_38 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          top_level__mercury_compile_main__maybe_read_d_file_for_trans_opt_deps_5_p_0(Globals_19, ModuleName_37, &MaybeTransOptDeps_38);
          break;
      }
    }
    top_level__mercury_compile_main__maybe_grab_plain_and_trans_opt_files_11_p_0(Globals_19, OpModeAugment_20, Verbose_34, MaybeTransOptDeps_38, &IntermodError_39, ModuleAndImports0_22, &ModuleAndImports1_40, STATE_VARIABLE_HaveReadModuleMaps_0_78, STATE_VARIABLE_HaveReadModuleMaps_79);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports1_40, &AugCompUnit1_41, &ItemSpecs_42, &_Error_43);
    STATE_VARIABLE_Specs_88_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_42, STATE_VARIABLE_Specs_0_76);
    parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(ModuleAndImports1_40, MaybeTimestampMap_25);
    libs__globals__lookup_string_option_3_p_0(Globals_19, (MR_Integer) 212, &EventSetFileName_44);
    succeeded = (strcmp(EventSetFileName_44, (MR_String) "") == 0);
    if (succeeded)
    {
      EventSetName_45 = (MR_String) "";
      EventSpecMap1_46 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      EventSetErrors_47 = (MR_Integer) 0;
      STATE_VARIABLE_Specs_91_91 = STATE_VARIABLE_Specs_88_88;
    }
    else
    {
      MR_String EventSetName0_48;
      MR_Word EventSpecMap0_49;
      MR_Word EventSetSpecs_50;

      parse_tree__prog_event__read_event_set_6_p_0(EventSetFileName_44, &EventSetName0_48, &EventSpecMap0_49, &EventSetSpecs_50);
      STATE_VARIABLE_Specs_91_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EventSetSpecs_50, STATE_VARIABLE_Specs_88_88);
      EventSetErrors_47 = parse_tree__error_util__contains_errors_2_f_0(Globals_19, EventSetSpecs_50);
      switch (EventSetErrors_47) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            EventSetName_45 = EventSetName0_48;
            EventSpecMap1_46 = EventSpecMap0_49;
          }
          break;
        case (MR_Integer) 1:
          {
            EventSetName_45 = (MR_String) "";
            EventSpecMap1_46 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
          }
          break;
      }
    }
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_34, Globals_19, STATE_VARIABLE_Specs_91_91, &STATE_VARIABLE_Specs_92_92);
    libs__file_util__maybe_write_string_4_p_0(Verbose_34, (MR_String) "% Module qualifying items...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_34);
    parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_19, AugCompUnit1_41, &AugCompUnit2_51, EventSpecMap1_46, &EventSpecMap2_52, EventSetFileName_44, &MQInfo0_53, &MQUndefTypes_54, &MQUndefInsts_55, &MQUndefModes_56, &MQUndefTypeClasses_57, (MR_Word) ((MR_Unsigned) 0U), &QualifySpecs_58);
    STATE_VARIABLE_Specs_98_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), QualifySpecs_58, STATE_VARIABLE_Specs_92_92);
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_34, Globals_19, STATE_VARIABLE_Specs_98_98, &STATE_VARIABLE_Specs_99_99);
    libs__file_util__maybe_write_string_4_p_0(Verbose_34, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_33);
    parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo0_53, &RecompInfo0_59);
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_34, Globals_19, STATE_VARIABLE_Specs_99_99, &STATE_VARIABLE_Specs_104_104);
    libs__file_util__maybe_write_string_4_p_0(Verbose_34, (MR_String) "% Expanding equivalence types and insts...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_34);
    parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(AugCompUnit2_51, &AugCompUnit_60, EventSpecMap2_52, &EventSpecMap_61, &TypeEqvMap_62, &UsedModules_63, RecompInfo0_59, &RecompInfo_64, &ExpandSpecs_65);
    ExpandErrors_66 = parse_tree__error_util__contains_errors_2_f_0(Globals_19, ExpandSpecs_65);
    STATE_VARIABLE_Specs_109_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ExpandSpecs_65, STATE_VARIABLE_Specs_104_104);
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_34, Globals_19, STATE_VARIABLE_Specs_109_109, &STATE_VARIABLE_Specs_110_110);
    libs__file_util__maybe_write_string_4_p_0(Verbose_34, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_33);
    parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(RecompInfo_64, MQInfo0_53, &MQInfo_67);
    {
      EventSet_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EventSet_68, 0) = ((MR_Box) (EventSetName_45));
      MR_hl_field(MR_mktag(0), EventSet_68, 1) = ((MR_Box) (EventSpecMap_61));
    }
    top_level__mercury_compile_main__make_hlds_17_p_0(Globals_19, AugCompUnit_60, EventSet_68, MQInfo_67, TypeEqvMap_62, UsedModules_63, Verbose_34, Stats_33, &HLDS0_69, QualInfo_24, &MakeHLDSFoundInvalidType_70, &MakeHLDSFoundInvalidInstOrMode_71, FoundSemanticError_28, STATE_VARIABLE_Specs_110_110, STATE_VARIABLE_Specs_77);
    top_level__mercury_compile_main__maybe_write_definitions_5_p_0(Verbose_34, Stats_33, HLDS0_69);
    top_level__mercury_compile_main__maybe_write_definition_line_counts_5_p_0(Verbose_34, Stats_33, HLDS0_69);
    top_level__mercury_compile_main__maybe_write_definition_extents_5_p_0(Verbose_34, Stats_33, HLDS0_69);
    succeeded = (MQUndefTypes_54 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MQUndefTypeClasses_57 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (EventSetErrors_47 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (ExpandErrors_66 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MakeHLDSFoundInvalidType_70 == (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
      *UndefTypes_26 = (MR_Integer) 0;
    else
      *UndefTypes_26 = (MR_Integer) 1;
    succeeded = (MQUndefInsts_55 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MQUndefModes_56 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (MakeHLDSFoundInvalidInstOrMode_71 == (MR_Integer) 0);
    }
    if (succeeded)
      *UndefModes_27 = (MR_Integer) 0;
    else
      *UndefModes_27 = (MR_Integer) 1;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(HLDS0_69, (MR_Integer) 1, (MR_String) "initial", STATE_VARIABLE_DumpInfo_0_74, STATE_VARIABLE_DumpInfo_75);
    switch (WriteDFile_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllDeps_72;
          MR_Word OutputMMCMakeDeps_73;

          hlds__hlds_module__module_info_get_all_deps_2_p_0(HLDS0_69, &AllDeps_72);
          parse_tree__write_deps_file__write_dependency_file_6_p_0(Globals_19, ModuleAndImports0_22, AllDeps_72, MaybeTransOptDeps_38);
          libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 142, &OutputMMCMakeDeps_73);
          switch (OutputMMCMakeDeps_73) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              make__make_write_module_dep_file_4_p_0(Globals_19, ModuleAndImports0_22);
              break;
          }
        }
        break;
    }
    succeeded = (*FoundSemanticError_28 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (IntermodError_39 == (MR_Integer) 1);
    if (succeeded)
      hlds__hlds_module__module_info_incr_errors_2_p_0(HLDS0_69, HLDS1_23);
    else
      *HLDS1_23 = HLDS0_69;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 170, &Extents_11);
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
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_definition_extents\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[8])), ModuleName_12, &FileName_13);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 169, &LineCounts_11);
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
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_definition_line_counts\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[7])), ModuleName_12, &FileName_13);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 168, &ShowDefns_11);
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
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_definitions\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[6])), ModuleName_12, &FileName_13);
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
  MR_Word * STATE_VARIABLE_HLDS_38,
  MR_Word * QualInfo_27,
  MR_Word * FoundInvalidType_28,
  MR_Word * FoundInvalidInstOrMode_29,
  MR_Word * FoundSemanticError_30,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_33;
    MR_String DumpBaseFileName_34;
    MR_Word MakeSpecs_35;
    MR_Integer Status_36;
    MR_Word SpecsErrors_37;
    MR_Word STATE_VARIABLE_Specs_43_43;
    MR_Word STATE_VARIABLE_HLDS_53_53;
    MR_Word STATE_VARIABLE_Specs_54_54;

    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_24, Globals_18, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_43_43);
    libs__file_util__maybe_write_string_4_p_0(Verbose_24, (MR_String) "% Converting parse tree to hlds...\n");
    ModuleName_33 = parse_tree__item_util__aug_compilation_unit_project_name_1_f_0(AugCompUnit_19);
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.make_hlds\'/17", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[5])), ModuleName_33, &DumpBaseFileName_34);
    hlds__make_hlds__parse_tree_to_hlds_11_p_0(AugCompUnit_19, Globals_18, DumpBaseFileName_34, MQInfo_21, TypeEqvMap_22, UsedModules_23, QualInfo_27, FoundInvalidType_28, FoundInvalidInstOrMode_29, &STATE_VARIABLE_HLDS_53_53, &MakeSpecs_35);
    STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MakeSpecs_35, STATE_VARIABLE_Specs_43_43);
    hlds__hlds_module__module_info_set_event_set_3_p_0(EventSet_20, STATE_VARIABLE_HLDS_53_53, STATE_VARIABLE_HLDS_38);
    mercury__io__get_exit_status_3_p_0(&Status_36);
    SpecsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(Globals_18, STATE_VARIABLE_Specs_54_54);
    succeeded = (Status_36 != (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (SpecsErrors_37 == (MR_Integer) 1);
    if (succeeded)
    {
      *FoundSemanticError_30 = (MR_Integer) 1;
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
      *FoundSemanticError_30 = (MR_Integer) 0;
    parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(Verbose_24, Globals_18, STATE_VARIABLE_Specs_54_54, STATE_VARIABLE_Specs_40);
    libs__file_util__maybe_write_string_4_p_0(Verbose_24, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_25);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_grab_plain_and_trans_opt_files_11_p_0(
  MR_Word Globals_12,
  MR_Word OpModeAugment_13,
  MR_Word Verbose_14,
  MR_Word MaybeTransOptDeps_15,
  MR_Word * Error_16,
  MR_Word ModuleAndImports0_17,
  MR_Word * ModuleAndImports_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41)
{
  {
    MR_bool succeeded;
    MR_Word IntermodOpt_21;
    MR_Word UseOptInt_22;
    MR_Word TransOpt_23;
    MR_Word IntermodAnalysis_24;
    MR_Word Error1_25;
    MR_Word ModuleAndImports1_26;
    MR_Word Error2_28;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_51_51;

    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 486, &IntermodOpt_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 488, &UseOptInt_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 490, &TransOpt_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 491, &IntermodAnalysis_24);
    succeeded = (UseOptInt_22 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (IntermodOpt_21 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (IntermodAnalysis_24 == (MR_Integer) 1);
    }
    if (succeeded)
      succeeded = (OpModeAugment_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_14, (MR_String) "% Reading .opt files...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_14);
      parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_8_p_0(Globals_12, &Error1_25, ModuleAndImports0_17, &ModuleAndImports1_26, STATE_VARIABLE_HaveReadModuleMaps_0_40, &STATE_VARIABLE_HaveReadModuleMaps_51_51);
      libs__file_util__maybe_write_string_4_p_0(Verbose_14, (MR_String) "% Done.\n");
    }
    else
    {
      ModuleAndImports1_26 = ModuleAndImports0_17;
      Error1_25 = (MR_Integer) 0;
      STATE_VARIABLE_HaveReadModuleMaps_51_51 = STATE_VARIABLE_HaveReadModuleMaps_0_40;
    }
    switch (MR_tag((MR_Word) OpModeAugment_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ModuleAndImports_18 = ModuleAndImports1_26;
              Error2_28 = (MR_Integer) 0;
              *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_51_51;
            }
            break;
          case (MR_Integer) 1:
            if ((MaybeTransOptDeps_15 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ModuleName_29;
              MR_Word WarnNoTransOptDeps_30;

              *ModuleAndImports_18 = ModuleAndImports1_26;
              Error2_28 = (MR_Integer) 0;
              parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*ModuleAndImports_18, &ModuleName_29);
              libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 18, &WarnNoTransOptDeps_30);
              switch (WarnNoTransOptDeps_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Pieces_31;
                    MR_Word Msg_32;
                    MR_Word Spec_33;
                    MR_Word Var_64;
                    MR_Word Var_67;
                    MR_Word Var_68;
                    MR_Word Var_83;
                    MR_Word Var_84;
                    MR_Word Var_89;

                    {
                      Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (ModuleName_29));
                    }
                    {
                      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
                      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[9])));
                    }
                    {
                      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
                    }
                    {
                      Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[14])));
                      MR_hl_field(MR_mktag(1), Pieces_31, 1) = ((MR_Box) (Var_64));
                    }
                    {
                      Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Pieces_31));
                    }
                    {
                      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
                      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Msg_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Msg_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(2), Msg_32, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(2), Msg_32, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(2), Msg_32, 3) = ((MR_Box) (Var_83));
                    }
                    {
                      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Msg_32));
                      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.maybe_grab_plain_and_trans_opt_files\'/11"));
                      MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(0), Spec_33, 3) = ((MR_Box) (Var_89));
                    }
                    parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_12, Spec_33);
                  }
                  break;
              }
              *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_51_51;
            }
            else
            {
              MR_Word TransOptDeps_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps_15, (MR_Integer) 0))));

              parse_tree__grab_modules__grab_trans_opt_files_9_p_0(Globals_12, TransOptDeps_27, &Error2_28, ModuleAndImports1_26, ModuleAndImports_18, STATE_VARIABLE_HaveReadModuleMaps_51_51, STATE_VARIABLE_HaveReadModuleMaps_41);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            switch (TransOpt_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ModuleAndImports_18 = ModuleAndImports1_26;
                  Error2_28 = (MR_Integer) 0;
                  *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_51_51;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ancestors_35;
                  MR_Word IntDeps_36;
                  MR_Word ImpDeps_37;
                  MR_Word TransOptFiles_38;
                  MR_Word TransOptFilesList_39;
                  MR_Word Var_55;
                  MR_Word Var_56;
                  MR_Word Var_57;

                  parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(ModuleAndImports0_17, &Ancestors_35);
                  parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(ModuleAndImports0_17, &IntDeps_36);
                  parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(ModuleAndImports0_17, &ImpDeps_37);
                  {
                    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ImpDeps_37));
                    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (IntDeps_36));
                    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
                  }
                  {
                    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Ancestors_35));
                    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
                  }
                  TransOptFiles_38 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_55);
                  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFiles_38, &TransOptFilesList_39);
                  parse_tree__grab_modules__grab_trans_opt_files_9_p_0(Globals_12, TransOptFilesList_39, &Error2_28, ModuleAndImports1_26, ModuleAndImports_18, STATE_VARIABLE_HaveReadModuleMaps_51_51, STATE_VARIABLE_HaveReadModuleMaps_41);
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (TransOpt_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ModuleAndImports_18 = ModuleAndImports1_26;
              Error2_28 = (MR_Integer) 0;
              *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_51_51;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Ancestors_35;
              MR_Word IntDeps_36;
              MR_Word ImpDeps_37;
              MR_Word TransOptFiles_38;
              MR_Word TransOptFilesList_39;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;

              parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(ModuleAndImports0_17, &Ancestors_35);
              parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(ModuleAndImports0_17, &IntDeps_36);
              parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(ModuleAndImports0_17, &ImpDeps_37);
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ImpDeps_37));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (IntDeps_36));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Ancestors_35));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
              }
              TransOptFiles_38 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_55);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFiles_38, &TransOptFilesList_39);
              parse_tree__grab_modules__grab_trans_opt_files_9_p_0(Globals_12, TransOptFilesList_39, &Error2_28, ModuleAndImports1_26, ModuleAndImports_18, STATE_VARIABLE_HaveReadModuleMaps_51_51, STATE_VARIABLE_HaveReadModuleMaps_41);
            }
            break;
        }
        break;
    }
    mercury__bool__or_3_p_0(Error1_25, Error2_28, Error_16);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 490, &TransOpt_10);
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_11);
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_6, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_read_d_file_for_trans_opt_deps\'/5", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[3])), ModuleName_7, &DependencyFileName_12);
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
            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_6, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_read_d_file_for_trans_opt_deps\'/5", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[4])), ModuleName_7, &TransOptDateFileName_16);
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

    succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__2086__1_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
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
      Var_21 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[3]);
      TypeCtorInfo_28_28 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
      mercury__list__drop_while_3_p_0(TypeCtorInfo_28_28, Var_21, CharList0_7, &CharList1_8);
      NotIsWhitespace_9 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[4]);
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
    MR_Word Var_9;
    MR_Word Var_11;

    libs__globals__get_options_2_p_0(Globals0_3, &OptionTable0_5);
    Var_8 = libs__options__style_warning_options_0_f_0();
    Var_9 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]));
    libs__options__set_all_options_to_4_p_0(Var_8, Var_9, OptionTable0_5, &OptionTable1_6);
    Var_11 = libs__options__non_style_warning_options_0_f_0();
    libs__options__set_all_options_to_4_p_0(Var_11, Var_9, OptionTable1_6, &OptionTable_7);
    libs__globals__set_options_3_p_0(OptionTable_7, Globals0_3, Globals_4);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * ModuleToLink_6)
{
  {
    MR_Word ModuleName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_3, ModuleToLink_6);
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
top_level__mercury_compile_main__process_compiler_arg_build_11_p_0(
  MR_Word OpModeArgs_12,
  MR_Word FileOrModule_13,
  MR_Word OptionArgs_14,
  MR_Word HaveReadModuleMaps0_15,
  MR_Word Globals_16,
  MR_Word HeadVar__6_17,
  MR_Word * Succeeded_18,
  MR_Tuple * HeadVar__9_9)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_54_44_32_56_93_95_48_11_p_0(OpModeArgs_12, FileOrModule_13, OptionArgs_14, HaveReadModuleMaps0_15, Globals_16, Succeeded_18, HeadVar__9_9);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_54_44_32_56_93_95_48_11_p_0(
  MR_Word OpModeArgs_12,
  MR_Word FileOrModule_13,
  MR_Word OptionArgs_14,
  MR_Word HaveReadModuleMaps0_15,
  MR_Word Globals_16,
  MR_Word * Succeeded_18,
  MR_Tuple * HeadVar__9_9)
{
  {
    MR_Word Modules_20;
    MR_Word ExtraObjFiles_21;
    MR_Word HaveReadModuleMaps_22;
    MR_Word LibgradeCheckSucceeded_24;

    libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_16, &LibgradeCheckSucceeded_24);
    switch (LibgradeCheckSucceeded_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Modules_20 = (MR_Word) ((MR_Unsigned) 0U);
          ExtraObjFiles_21 = (MR_Word) ((MR_Unsigned) 0U);
          *Succeeded_18 = (MR_Integer) 0;
          HaveReadModuleMaps_22 = HaveReadModuleMaps0_15;
        }
        break;
      case (MR_Integer) 1:
        {
          top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(Globals_16, OpModeArgs_12, OptionArgs_14, FileOrModule_13, &Modules_20, &ExtraObjFiles_21, HaveReadModuleMaps0_15, &HaveReadModuleMaps_22);
          *Succeeded_18 = (MR_Integer) 1;
        }
        break;
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Modules_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExtraObjFiles_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HaveReadModuleMaps_22));
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
            mercury__io__check_file_accessibility_5_p_0(TargetFile_18, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[13])), &Result_19);
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
        mercury__io__check_file_accessibility_5_p_0(InitFile_17, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[13])), &Result_18);
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
    MR_Word Var_11;
    MR_Word Version_22;
    MR_Word Help_23;

    Var_11 = make__options_file__options_variables_init_0_f_0();
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 696, &Version_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 695, &Help_23);
    succeeded = (Help_23 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Stdout_24;
      MR_Word OldOutputStream_25;
      MR_Word Var_26;

      mercury__io__stdout_stream_3_p_0(&Stdout_24);
      mercury__io__set_output_stream_4_p_0(Stdout_24, &OldOutputStream_25);
      libs__handle_options__long_usage_2_p_0();
      mercury__io__set_output_stream_4_p_0(OldOutputStream_25, &Var_26);
    }
    else
    {
      succeeded = (Version_22 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Stdout_42;
        MR_Word OldOutputStream_43;
        MR_Word Var_27;

        mercury__io__stdout_stream_3_p_0(&Stdout_42);
        mercury__io__set_output_stream_4_p_0(Stdout_42, &OldOutputStream_43);
        libs__handle_options__display_compiler_version_2_p_0();
        mercury__io__set_output_stream_4_p_0(OldOutputStream_43, &Var_27);
      }
      else
      {
        MR_Word OpMode_28;
        MR_Word HaveReadModuleMaps0_29;
        MR_Word _HaveReadModuleMaps_30;

        libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_28);
        HaveReadModuleMaps0_29 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
        top_level__mercury_compile_main__do_op_mode_10_p_0(Globals_5, OpMode_28, (MR_Word) ((MR_Unsigned) 0U), Var_11, (MR_Word) ((MR_Unsigned) 0U), Args_6, HaveReadModuleMaps0_29, &_HaveReadModuleMaps_30);
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
      MR_String Var_27;

      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      Var_27 = mercury__io__error_message_1_f_0(E_10);
      mercury__io__write_string_3_p_0(Var_27);
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
    MR_bool succeeded = (CmdLineArgs_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_String ArgFile_6;
    MR_Word ExtraArgs_7;
    MR_String Var_67;
    MR_Word Var_68;

    if (succeeded)
    {
      Var_67 = ((MR_String) ((MR_hl_field(MR_mktag(1), CmdLineArgs_4, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CmdLineArgs_4, (MR_Integer) 1))));
      succeeded = (strcmp(Var_67, (MR_String) "--arg-file") == 0);
      if (succeeded)
      {
        succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgFile_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0))));
          ExtraArgs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeArgs1_10;
      MR_Word ArgsNonUndefSpecs_11;
      MR_Word ArgsUndefSpecs_12;
      MR_Word AllSpecs_13;
      MR_Word OptionArgs_15;
      MR_Word NonOptionArgs_16;
      MR_Word Variables_18;
      MR_Word AllFlags_54;
      MR_Word Specs_57;
      MR_Word ActualGlobals_58;
      MR_Word Var_106;
      MR_Word Var_55;
      MR_Word Var_56;

      if (!((ExtraArgs_7 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Var_70;
        MR_String Var_72;

        Var_72 = mercury__string__string_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), ((MR_Box) (ExtraArgs_7)));
        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", Var_72);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_main.real_main_after_expansion\'/3", Var_70);
          return;
        }
      }
      make__options_file__read_args_file_6_p_0(ArgFile_6, &MaybeArgs1_10, &ArgsNonUndefSpecs_11, &ArgsUndefSpecs_12);
      AllSpecs_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ArgsNonUndefSpecs_11, ArgsUndefSpecs_12);
      if ((MaybeArgs1_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OptionArgs_15 = (MR_Word) ((MR_Unsigned) 0U);
        NonOptionArgs_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Args1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgs1_10, (MR_Integer) 0))));

        libs__handle_options__separate_option_args_5_p_0(Args1_14, &OptionArgs_15, &NonOptionArgs_16);
      }
      Variables_18 = make__options_file__options_variables_init_0_f_0();
      Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), OptionArgs_15);
      AllFlags_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), Var_106);
      libs__handle_options__handle_given_options_7_p_0(AllFlags_54, &Var_55, &Var_56, &Specs_57, &ActualGlobals_58);
      parse_tree__error_util__write_error_specs_ignore_4_p_0(ActualGlobals_58, AllSpecs_13);
      if ((Specs_57 == (MR_Word) ((MR_Unsigned) 0U)))
        top_level__mercury_compile_main__main_after_setup_7_p_0(ActualGlobals_58, (MR_Word) ((MR_Unsigned) 0U), Variables_18, OptionArgs_15, NonOptionArgs_16);
      else
        libs__handle_options__usage_errors_4_p_0(ActualGlobals_58, Specs_57);
    }
    else
    {
      MR_Word ArgsGlobals_21;
      MR_Word OptionSearchDirectories_22;
      MR_Word OptionsFiles_23;
      MR_Word Variables0_24;
      MR_Word OptFileNonUndefSpecs_25;
      MR_Word OptFileUndefSpecs_26;
      MR_Word WarnUndef_27;
      MR_Word OptFileSpecs_28;
      MR_Word OptFileErrors_29;
      MR_Word OptionArgs_150;
      MR_Word NonOptionArgs_151;
      MR_Word _Errors0_20;

      libs__handle_options__handle_given_options_7_p_0(CmdLineArgs_4, &OptionArgs_150, &NonOptionArgs_151, &_Errors0_20, &ArgsGlobals_21);
      libs__globals__lookup_accumulating_option_3_p_0(ArgsGlobals_21, (MR_Integer) 677, &OptionSearchDirectories_22);
      libs__globals__lookup_accumulating_option_3_p_0(ArgsGlobals_21, (MR_Integer) 675, &OptionsFiles_23);
      make__options_file__read_options_files_named_in_options_file_option_7_p_0(OptionSearchDirectories_22, OptionsFiles_23, &Variables0_24, &OptFileNonUndefSpecs_25, &OptFileUndefSpecs_26);
      libs__globals__lookup_bool_option_3_p_0(ArgsGlobals_21, (MR_Integer) 32, &WarnUndef_27);
      switch (WarnUndef_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OptFileSpecs_28 = OptFileNonUndefSpecs_25;
          break;
        case (MR_Integer) 1:
          OptFileSpecs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileNonUndefSpecs_25, OptFileUndefSpecs_26);
          break;
      }
      OptFileErrors_29 = parse_tree__error_util__contains_errors_2_f_0(ArgsGlobals_21, OptFileSpecs_28);
      switch (OptFileErrors_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MCFlags0_30;
            MR_Word MCFlagsSpecs0_31;
            MR_Word MCFlagsErrors0_32;

            top_level__mercury_compile_main__maybe_dump_options_file_4_p_0(ArgsGlobals_21, Variables0_24);
            make__options_file__lookup_mmc_options_5_p_0(Variables0_24, &MCFlags0_30, &MCFlagsSpecs0_31);
            MCFlagsErrors0_32 = parse_tree__error_util__contains_errors_2_f_0(ArgsGlobals_21, MCFlagsSpecs0_31);
            switch (MCFlagsErrors0_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FlagsSpecs_36;
                  MR_Word FlagsArgsGlobals_37;
                  MR_Word Var_88;
                  MR_Word AllSpecs_149;
                  MR_Word DetectedGradeFlags_152;
                  MR_Word Variables_153;
                  MR_Word MaybeMCFlags_154;
                  MR_Word Var_34;
                  MR_Word Var_35;

                  Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags0_30, CmdLineArgs_4);
                  libs__handle_options__handle_given_options_7_p_0(Var_88, &Var_34, &Var_35, &FlagsSpecs_36, &FlagsArgsGlobals_37);
                  if ((FlagsSpecs_36 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word MaybeConfigFile_40;

                    libs__globals__lookup_maybe_string_option_3_p_0(FlagsArgsGlobals_37, (MR_Integer) 676, &MaybeConfigFile_40);
                    if ((MaybeConfigFile_40 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word AllErrors_52;
                      MR_Word Var_92;
                      MR_Word MCFlags1_114;
                      MR_Word MCFlagsSpecs1_115;

                      DetectedGradeFlags_152 = (MR_Word) ((MR_Unsigned) 0U);
                      Variables_153 = make__options_file__options_variables_init_0_f_0();
                      make__options_file__lookup_mmc_options_5_p_0(Variables_153, &MCFlags1_114, &MCFlagsSpecs1_115);
                      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MCFlagsSpecs0_31, MCFlagsSpecs1_115);
                      AllSpecs_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_28, Var_92);
                      AllErrors_52 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_37, AllSpecs_149);
                      switch (AllErrors_52) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MaybeMCFlags_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), MaybeMCFlags_154, 0) = ((MR_Box) (MCFlags1_114));
                          }
                          break;
                        case (MR_Integer) 1:
                          MaybeMCFlags_154 = (MR_Word) ((MR_Unsigned) 0U);
                          break;
                      }
                    }
                    else
                    {
                      MR_String ConfigFile_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfigFile_40, (MR_Integer) 0))));
                      MR_Word ConfigNonUndefSpecs_42;
                      MR_Word ConfigUndefSpecs_43;
                      MR_Word ConfigSpecs_44;
                      MR_Word ConfigErrors_45;

                      make__options_file__read_named_options_file_7_p_0(ConfigFile_41, Variables0_24, &Variables_153, &ConfigNonUndefSpecs_42, &ConfigUndefSpecs_43);
                      switch (WarnUndef_27) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ConfigSpecs_44 = ConfigNonUndefSpecs_42;
                          break;
                        case (MR_Integer) 1:
                          ConfigSpecs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ConfigNonUndefSpecs_42, ConfigUndefSpecs_43);
                          break;
                      }
                      ConfigErrors_45 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_37, ConfigSpecs_44);
                      switch (ConfigErrors_45) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word MCFlags1_46;
                            MR_Word MCFlagsSpecs1_47;
                            MR_Word AllSpecs0_48;
                            MR_Word AllErrors0_49;
                            MR_Word MaybeMerStdLibDir_50;
                            MR_Word StdLibDirSpecs_51;
                            MR_Word Var_96;
                            MR_Word Var_97;

                            make__options_file__lookup_mmc_options_5_p_0(Variables_153, &MCFlags1_46, &MCFlagsSpecs1_47);
                            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ConfigSpecs_44, MCFlagsSpecs1_47);
                            Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MCFlagsSpecs0_31, Var_97);
                            AllSpecs0_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_28, Var_96);
                            AllErrors0_49 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_37, AllSpecs0_48);
                            switch (AllErrors0_49) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MaybeMCFlags_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), MaybeMCFlags_154, 0) = ((MR_Box) (MCFlags1_46));
                                }
                                break;
                              case (MR_Integer) 1:
                                MaybeMCFlags_154 = (MR_Word) ((MR_Unsigned) 0U);
                                break;
                            }
                            make__options_file__lookup_mercury_stdlib_dir_5_p_0(Variables_153, &MaybeMerStdLibDir_50, &StdLibDirSpecs_51);
                            top_level__mercury_compile_main__detect_libgrades_5_p_0(FlagsArgsGlobals_37, MaybeMerStdLibDir_50, &DetectedGradeFlags_152);
                            AllSpecs_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), AllSpecs0_48, StdLibDirSpecs_51);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_94;

                            DetectedGradeFlags_152 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MCFlagsSpecs0_31, ConfigSpecs_44);
                            AllSpecs_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_28, Var_94);
                            MaybeMCFlags_154 = (MR_Word) ((MR_Unsigned) 0U);
                          }
                          break;
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_100;

                    DetectedGradeFlags_152 = (MR_Word) ((MR_Unsigned) 0U);
                    Variables_153 = make__options_file__options_variables_init_0_f_0();
                    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MCFlagsSpecs0_31, FlagsSpecs_36);
                    AllSpecs_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_28, Var_100);
                    MaybeMCFlags_154 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  if ((MaybeMCFlags_154 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word DummyGlobals_64;
                    MR_Word Var_61;
                    MR_Word Var_62;
                    MR_Word _Specs_63;

                    libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_61, &Var_62, &_Specs_63, &DummyGlobals_64);
                    parse_tree__error_util__write_error_specs_ignore_4_p_0(DummyGlobals_64, AllSpecs_149);
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
                  else
                  {
                    MR_Word MCFlags_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMCFlags_154, (MR_Integer) 0))));
                    MR_Word AllFlags_130;
                    MR_Word Specs_133;
                    MR_Word ActualGlobals_134;
                    MR_Word Var_135;
                    MR_Word Var_127;
                    MR_Word Var_128;

                    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_129, OptionArgs_150);
                    AllFlags_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_152, Var_135);
                    libs__handle_options__handle_given_options_7_p_0(AllFlags_130, &Var_127, &Var_128, &Specs_133, &ActualGlobals_134);
                    parse_tree__error_util__write_error_specs_ignore_4_p_0(ActualGlobals_134, AllSpecs_149);
                    if ((Specs_133 == (MR_Word) ((MR_Unsigned) 0U)))
                      top_level__mercury_compile_main__main_after_setup_7_p_0(ActualGlobals_134, DetectedGradeFlags_152, Variables_153, OptionArgs_150, NonOptionArgs_151);
                    else
                      libs__handle_options__usage_errors_4_p_0(ActualGlobals_134, Specs_133);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word DummyGlobals_194;
                  MR_Word AllSpecs_199;
                  MR_Word Variables_185;
                  MR_Word Var_188;
                  MR_Word Var_189;
                  MR_Word _Specs_190;

                  Variables_185 = make__options_file__options_variables_init_0_f_0();
                  AllSpecs_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_28, MCFlagsSpecs0_31);
                  libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_188, &Var_189, &_Specs_190, &DummyGlobals_194);
                  parse_tree__error_util__write_error_specs_ignore_4_p_0(DummyGlobals_194, AllSpecs_199);
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DummyGlobals_175;
            MR_Word Variables_166;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Word _Specs_171;

            Variables_166 = make__options_file__options_variables_init_0_f_0();
            libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_169, &Var_170, &_Specs_171, &DummyGlobals_175);
            parse_tree__error_util__write_error_specs_ignore_4_p_0(DummyGlobals_175, OptFileSpecs_28);
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          break;
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

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 696, &Version_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 695, &Help_15);
    succeeded = (Help_15 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Stdout_16;
      MR_Word OldOutputStream_17;
      MR_Word Var_18;

      mercury__io__stdout_stream_3_p_0(&Stdout_16);
      mercury__io__set_output_stream_4_p_0(Stdout_16, &OldOutputStream_17);
      libs__handle_options__long_usage_2_p_0();
      mercury__io__set_output_stream_4_p_0(OldOutputStream_17, &Var_18);
    }
    else
    {
      succeeded = (Version_14 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Stdout_36;
        MR_Word OldOutputStream_37;
        MR_Word Var_19;

        mercury__io__stdout_stream_3_p_0(&Stdout_36);
        mercury__io__set_output_stream_4_p_0(Stdout_36, &OldOutputStream_37);
        libs__handle_options__display_compiler_version_2_p_0();
        mercury__io__set_output_stream_4_p_0(OldOutputStream_37, &Var_19);
      }
      else
      {
        MR_Word OpMode_20;
        MR_Word HaveReadModuleMaps0_21;
        MR_Word _HaveReadModuleMaps_22;

        libs__globals__get_op_mode_2_p_0(Globals_8, &OpMode_20);
        HaveReadModuleMaps0_21 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
        top_level__mercury_compile_main__do_op_mode_10_p_0(Globals_8, OpMode_20, DetectedGradeFlags_9, OptionVariables_10, OptionArgs_11, Args_12, HaveReadModuleMaps0_21, &_HaveReadModuleMaps_22);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_23,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_24)
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
              *STATE_VARIABLE_HaveReadModuleMaps_24 = STATE_VARIABLE_HaveReadModuleMaps_0_23;
            }
            break;
          case (MR_Integer) 1:
            {
              parse_tree__source_file_map__write_source_file_map_4_p_0(Globals_11, Args_16);
              *STATE_VARIABLE_HaveReadModuleMaps_24 = STATE_VARIABLE_HaveReadModuleMaps_0_23;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String StandaloneIntBasename_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), OpMode_12, (MR_Integer) 0))));
          MR_Word Target_40;

          libs__globals__get_target_2_p_0(Globals_11, &Target_40);
          switch (Target_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__make_standalone_interface_4_p_0(Globals_11, StandaloneIntBasename_19);
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word NotRequiredMsg_41;
                MR_Word Var_45;
                MR_Word Var_48;
                MR_Word Var_51;
                MR_Word Var_52;
                MR_String Var_53;

                Var_53 = libs__globals__compilation_target_string_1_f_0(Target_40);
                {
                  Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[5])));
                }
                {
                  Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[12])));
                  MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
                }
                {
                  Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
                }
                {
                  NotRequiredMsg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NotRequiredMsg_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[10])));
                  MR_hl_field(MR_mktag(1), NotRequiredMsg_41, 1) = ((MR_Box) (Var_45));
                }
                parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_11, NotRequiredMsg_41);
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
              break;
          }
          *STATE_VARIABLE_HaveReadModuleMaps_24 = STATE_VARIABLE_HaveReadModuleMaps_0_23;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OpModeQuery_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), OpMode_12, (MR_Integer) 0))) & (MR_Integer) 15);

          top_level__mercury_compile_main__do_op_mode_query_4_p_0(Globals_11, OpModeQuery_20);
          *STATE_VARIABLE_HaveReadModuleMaps_24 = STATE_VARIABLE_HaveReadModuleMaps_0_23;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word OpModeArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_12, (MR_Integer) 0))));
          MR_Word FileNamesFromStdin_22;

          libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 692, &FileNamesFromStdin_22);
          succeeded = (Args_16 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (FileNamesFromStdin_22 == (MR_Integer) 0);
          if (succeeded)
          {
            libs__handle_options__usage_2_p_0();
            *STATE_VARIABLE_HaveReadModuleMaps_24 = STATE_VARIABLE_HaveReadModuleMaps_0_23;
          }
          else
            top_level__mercury_compile_main__do_op_mode_args_11_p_0(Globals_11, OpModeArgs_21, FileNamesFromStdin_22, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16, STATE_VARIABLE_HaveReadModuleMaps_0_23, STATE_VARIABLE_HaveReadModuleMaps_24);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    backend_libs__compile_target_code__link_module_list_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_32,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_33)
{
  {
    MR_bool succeeded;
    MR_Word ModulesToLinkCord_21;
    MR_Word ExtraObjFilesCord_22;
    MR_Word ModulesToLink_23;
    MR_Word ExtraObjFiles_24;
    MR_Integer ExitStatus_25;
    MR_Word Statistics_31;
    MR_Word Limited_66;
    MR_Word ExtraErrorInfo_67;

    switch (FileNamesFromStdin_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_36;
          MR_Word Var_37;

          Var_36 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          Var_37 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          top_level__mercury_compile_main__process_compiler_cmd_line_args_14_p_0(Globals_12, OpModeArgs_13, DetectedGradeFlags_15, OptionVariables_16, OptionArgs_17, Args_18, Var_36, &ModulesToLinkCord_21, Var_37, &ExtraObjFilesCord_22, STATE_VARIABLE_HaveReadModuleMaps_0_32, STATE_VARIABLE_HaveReadModuleMaps_33);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_40;
          MR_Word Var_41;

          Var_40 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          Var_41 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          top_level__mercury_compile_main__process_compiler_stdin_args_13_p_0(Globals_12, OpModeArgs_13, DetectedGradeFlags_15, OptionVariables_16, OptionArgs_17, Var_40, &ModulesToLinkCord_21, Var_41, &ExtraObjFilesCord_22, STATE_VARIABLE_HaveReadModuleMaps_0_32, STATE_VARIABLE_HaveReadModuleMaps_33);
        }
        break;
    }
    ModulesToLink_23 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_21);
    ExtraObjFiles_24 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_22);
    mercury__io__get_exit_status_3_p_0(&ExitStatus_25);
    succeeded = (ExitStatus_25 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_String FirstModule_26;
      MR_Word Var_45;
      MR_Word Var_46;

      succeeded = ((MR_tag((MR_Word) OpModeArgs_13)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_46 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (ModulesToLink_23 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              FirstModule_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModulesToLink_23, (MR_Integer) 0))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word MainModuleName_28;
        MR_Word Target_29;
        MR_Word Succeeded_30;

        parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_26, &MainModuleName_28);
        libs__globals__get_target_2_p_0(Globals_12, &Target_29);
        switch (Target_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word Var_47;

              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_args_11_p_0_1));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModulesToLink_23));
                MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (ExtraObjFiles_24));
              }
              top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0(ModulesToLink_23, ExtraObjFiles_24, Globals_12, MainModuleName_28, DetectedGradeFlags_15, OptionVariables_16, OptionArgs_17, Var_47, &Succeeded_30);
            }
            break;
          case (MR_Integer) 2:
            parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_12, MainModuleName_28, &Succeeded_30);
            break;
        }
        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_30);
      }
    }
    libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_66);
    libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 0);
    libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_67);
    libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 0);
    switch (Limited_66) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_75;
          MR_String Var_79;

          Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "Some error messages were suppressed ", (MR_String) "by \140--limit-error-contexts\' options.\n");
          mercury__io__write_string_3_p_0(Var_75);
          Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "You can see the suppressed messages ", (MR_String) "if you recompile without these options.\n");
          mercury__io__write_string_3_p_0(Var_79);
        }
        break;
    }
    switch (ExtraErrorInfo_67) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VerboseErrors_68;

          libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 67, &VerboseErrors_68);
          switch (VerboseErrors_68) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 75, &Statistics_31);
    switch (Statistics_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_31;

    top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__950__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_31);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_31));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word DetectedGradeFlags_12,
  MR_Word OptionVariables_13,
  MR_Word OptionArgs_14,
  MR_Word Compile_15,
  MR_Word * Succeeded_16)
{
  {
    MR_Word InvokedByMake_18;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 660, &InvokedByMake_18);
    switch (InvokedByMake_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Builder_19;
          MR_Word Var_25;

          {
            Builder_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Builder_19, 1) = ((MR_Box) (top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0_1));
            MR_hl_field(MR_mktag(0), Builder_19, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Builder_19, 3) = ((MR_Box) (Compile_15));
          }
          make__build__build_with_module_options_args_12_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Globals_10, ModuleName_11, DetectedGradeFlags_12, OptionVariables_13, OptionArgs_14, (MR_Word) ((MR_Unsigned) 0U), Builder_19, Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &Var_25);
        }
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__link_module_list_6_p_0(Var_48, Var_49, Globals_10, Succeeded_16);
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
top_level__mercury_compile_main__process_compiler_stdin_args_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeArgs_15,
  MR_Word DetectedGradeFlags_16,
  MR_Word OptionVariables_17,
  MR_Word OptionArgs_18,
  MR_Word STATE_VARIABLE_Modules_0_30,
  MR_Word * STATE_VARIABLE_Modules_31,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_32,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_33,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FileResult_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_30);
    if (!(succeeded))
      mercury__gc__garbage_collect_2_p_0();
    mercury__io__read_line_as_string_3_p_0(&FileResult_23);
    switch (MR_tag((MR_Word) FileResult_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Modules_31 = STATE_VARIABLE_Modules_0_30;
          *STATE_VARIABLE_ExtraObjFiles_33 = STATE_VARIABLE_ExtraObjFiles_0_32;
          *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileResult_23, (MR_Integer) 0))));
          MR_String Arg_25;
          MR_Word ArgModules_26;
          MR_Word ArgExtraObjFiles_27;
          MR_Word STATE_VARIABLE_HaveReadModuleMaps_45_45;
          MR_Word STATE_VARIABLE_Modules_47_47;
          MR_Word Var_48;
          MR_Word STATE_VARIABLE_ExtraObjFiles_49_49;
          MR_Word Var_50;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_30;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_32;
          MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_34;

          Arg_25 = mercury__string__rstrip_1_f_0(Line_24);
          top_level__mercury_compile_main__process_compiler_arg_12_p_0(Globals_14, OpModeArgs_15, DetectedGradeFlags_16, OptionVariables_17, OptionArgs_18, Arg_25, &ArgModules_26, &ArgExtraObjFiles_27, STATE_VARIABLE_HaveReadModuleMaps_0_34, &STATE_VARIABLE_HaveReadModuleMaps_45_45);
          Var_48 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_26);
          STATE_VARIABLE_Modules_47_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_30, Var_48);
          Var_50 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_27);
          STATE_VARIABLE_ExtraObjFiles_49_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_32, Var_50);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_30 = STATE_VARIABLE_Modules_47_47;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_32 = STATE_VARIABLE_ExtraObjFiles_49_49;
          next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_34 = STATE_VARIABLE_HaveReadModuleMaps_45_45;
          STATE_VARIABLE_Modules_0_30 = next_value_of_STATE_VARIABLE_Modules_0_30;
          STATE_VARIABLE_ExtraObjFiles_0_32 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_32;
          STATE_VARIABLE_HaveReadModuleMaps_0_34 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_34;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FileResult_23, (MR_Integer) 0))));
          MR_String Msg_29;

          mercury__io__error_message_2_p_0(Error_28, &Msg_29);
          mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
          mercury__io__write_string_3_p_0(Msg_29);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          *STATE_VARIABLE_Modules_31 = STATE_VARIABLE_Modules_0_30;
          *STATE_VARIABLE_ExtraObjFiles_33 = STATE_VARIABLE_ExtraObjFiles_0_32;
          *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_18;
    MR_Tuple conv0_HeadVar__9_9;

    top_level__mercury_compile_main__process_compiler_arg_build_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Succeeded_18, &conv0_HeadVar__9_9);
    *wrapper_arg_3 = ((MR_Box) (conv1_Succeeded_18));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__9_9));
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_30,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_31)
{
  {
    MR_bool succeeded;
    MR_Word FileOrModule_23;
    MR_Word InvokedByMake_24;
    MR_String FileName_52;

    succeeded = mercury__string__remove_suffix_3_p_0(Arg_18, (MR_String) ".m", &FileName_52);
    if (succeeded)
      {
        FileOrModule_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FileOrModule_23, 0) = ((MR_Box) (FileName_52));
      }
    else
    {
      MR_Word ModuleName_53;

      parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_18, &ModuleName_53);
      {
        FileOrModule_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileOrModule_23, 0) = ((MR_Box) (ModuleName_53));
      }
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 660, &InvokedByMake_24);
    switch (InvokedByMake_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybeTuple_28;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word _Succeeded_27;

          if (((MR_tag((MR_Word) FileOrModule_23)) == (MR_Integer) 0))
          {
            MR_String FileName_55 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_23, (MR_Integer) 0))));

            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_55, &Var_37);
          }
          else
            Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_23, (MR_Integer) 0))));
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (top_level__mercury_compile_main__process_compiler_arg_12_p_0_1));
            MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (OpModeArgs_14));
            MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (FileOrModule_23));
            MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (OptionArgs_17));
            MR_hl_field(MR_mktag(0), Var_38, 6) = ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_0_30));
          }
          make__build__build_with_module_options_args_12_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]), Globals_13, Var_37, DetectedGradeFlags_15, OptionVariables_16, OptionArgs_17, (MR_Word) ((MR_Unsigned) 0U), Var_38, &_Succeeded_27, ((MR_Box) ((MR_Integer) 0)), &MaybeTuple_28);
          if ((MaybeTuple_28 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *ModulesToLink_19 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_31 = STATE_VARIABLE_HaveReadModuleMaps_0_30;
          }
          else
          {
            MR_Tuple Tuple_29 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeTuple_28, (MR_Integer) 0))));

            *ModulesToLink_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tuple_29, (MR_Integer) 0))));
            *ExtraObjFiles_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tuple_29, (MR_Integer) 1))));
            *STATE_VARIABLE_HaveReadModuleMaps_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tuple_29, (MR_Integer) 2))));
          }
        }
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(Globals_13, OpModeArgs_14, OptionArgs_17, FileOrModule_23, ModulesToLink_19, ExtraObjFiles_20, STATE_VARIABLE_HaveReadModuleMaps_0_30, STATE_VARIABLE_HaveReadModuleMaps_31);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32)
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
              *STATE_VARIABLE_HaveReadModuleMaps_32 = STATE_VARIABLE_HaveReadModuleMaps_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              if (((MR_tag((MR_Word) FileOrModule_14)) == (MR_Integer) 0))
              {
                MR_String FileName_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_14, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(Globals0_11, FileName_57);
              }
              else
              {
                MR_Word ModuleName_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_14, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(Globals0_11, ModuleName_58);
              }
              *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
              *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_HaveReadModuleMaps_32 = STATE_VARIABLE_HaveReadModuleMaps_0_31;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Globals_21;
              MR_Word ParseTreeSrc_24;
              MR_Word Specs_25;
              MR_Word Errors_26;
              MR_Word ModuleName_63;
              MR_String Var_22;
              MR_Word Var_23;

              top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_11, &Globals_21, FileOrModule_14, &ModuleName_63, &Var_22, (MR_Integer) 1, &Var_23, &ParseTreeSrc_24, &Specs_25, &Errors_26, STATE_VARIABLE_HaveReadModuleMaps_0_31, STATE_VARIABLE_HaveReadModuleMaps_32);
              parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_21, Specs_25);
              succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_26);
              if (succeeded)
              {
                {
                  MR_Word HaltSyntax_67;

                  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 4, &HaltSyntax_67);
                  succeeded = (HaltSyntax_67 == (MR_Integer) 1);
                }
                if (!(succeeded))
                {
                  MR_Word FatalErrors_68;
                  MR_Word Var_69;

                  Var_69 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
                  mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_26, Var_69, &FatalErrors_68);
                  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_68);
                }
              }
              if (!(succeeded))
              {
                MR_String OutputFileName_27;

                parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_21, (MR_String) "predicate \140top_level.mercury_compile_main.do_process_compiler_arg\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[2])), ModuleName_63, &OutputFileName_27);
                parse_tree__parse_tree_out__output_parse_tree_src_5_p_0(Globals_21, OutputFileName_27, ParseTreeSrc_24);
              }
              *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
              *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InterfaceFile_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeArgs_12, (MR_Integer) 0))) & (MR_Integer) 3);

          top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(Globals0_11, InterfaceFile_28, FileOrModule_14, STATE_VARIABLE_HaveReadModuleMaps_0_31, STATE_VARIABLE_HaveReadModuleMaps_32);
          *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OpModeAugment_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_12, (MR_Integer) 0))));
          MR_Word ModulesToRecompile_30;
          MR_Word STATE_VARIABLE_HaveReadModuleMaps_35_35;
          MR_Word Globals_64;
          MR_Word Var_37;

          top_level__mercury_compile_main__find_modules_to_recompile_8_p_0(Globals0_11, &Globals_64, FileOrModule_14, &ModulesToRecompile_30, STATE_VARIABLE_HaveReadModuleMaps_0_31, &STATE_VARIABLE_HaveReadModuleMaps_35_35);
          succeeded = (ModulesToRecompile_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModulesToRecompile_30, (MR_Integer) 0))));
            succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_32 = STATE_VARIABLE_HaveReadModuleMaps_35_35;
          }
          else
            top_level__mercury_compile_main__read_augment_and_process_module_11_p_0(Globals_64, OpModeAugment_29, OptionArgs_13, FileOrModule_14, ModulesToRecompile_30, ModulesToLink_15, ExtraObjFiles_16, STATE_VARIABLE_HaveReadModuleMaps_35_35, STATE_VARIABLE_HaveReadModuleMaps_32);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_3(
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

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__raw_compilation_unit_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1408__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_47)
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
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_54_54;

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

              libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 74, &ReportCmdLineArgsDotErr_22);
              top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(ReportCmdLineArgsDotErr_22, OptionArgs_14, (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ReportCmdLineArgsDotErr_22;

          libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 74, &ReportCmdLineArgsDotErr_22);
          top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(ReportCmdLineArgsDotErr_22, OptionArgs_14, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_12, &Globals_23, FileOrModule_15, &ModuleName_24, &FileName_25, (MR_Integer) 0, &MaybeTimestamp_26, &ParseTreeSrc_27, &Specs0_28, &Errors_29, STATE_VARIABLE_HaveReadModuleMaps_0_46, &STATE_VARIABLE_HaveReadModuleMaps_54_54);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_29);
    if (succeeded)
    {
      {
        MR_Word HaltSyntax_77;

        libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 4, &HaltSyntax_77);
        succeeded = (HaltSyntax_77 == (MR_Integer) 1);
      }
      if (!(succeeded))
      {
        MR_Word FatalErrors_78;
        MR_Word Var_79;

        Var_79 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_29, Var_79, &FatalErrors_78);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_78);
      }
    }
    if (succeeded)
    {
      parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_23, Specs0_28);
      *ModulesToLink_17 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_54_54;
    }
    else
    {
      MR_Word RawCompUnits0_30;
      MR_Word Specs1_31;
      MR_Word RawCompUnitsToCompile_38;
      MR_Word RawCompUnitNames_39;
      MR_Word NestedCompUnitNames_40;
      MR_Word FindTimestampFiles_41;
      MR_Word TraceProf_42;
      MR_Word GlobalsToUse_45;
      MR_Word Var_58;
      MR_Word CompilationTarget_84;
      MR_Word TimestampOtherExt_85;
      MR_Word Var_73;

      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_27, &RawCompUnits0_30, Specs0_28, &Specs1_31);
      if ((MaybeModulesToRecompile_16 == (MR_Word) ((MR_Unsigned) 0U)))
        RawCompUnitsToCompile_38 = RawCompUnits0_30;
      else
      {
        MR_Word ModulesToRecompile_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModulesToRecompile_16, (MR_Integer) 0))));
        MR_Word ToRecompile_33;

        {
          ToRecompile_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ToRecompile_33, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_1));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 3) = ((MR_Box) (ModulesToRecompile_32));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), ToRecompile_33, RawCompUnits0_30, &RawCompUnitsToCompile_38);
      }
      Var_58 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[2]), RawCompUnits0_30);
      RawCompUnitNames_39 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_58);
      mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_24)), RawCompUnitNames_39, &NestedCompUnitNames_40);
      libs__globals__get_target_2_p_0(Globals_23, &CompilationTarget_84);
      switch (CompilationTarget_84) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TimestampOtherExt_85 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
          break;
        case (MR_Integer) 1:
          TimestampOtherExt_85 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
          break;
        case (MR_Integer) 2:
          TimestampOtherExt_85 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
          break;
      }
      {
        FindTimestampFiles_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_3));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 3) = ((MR_Box) (Globals_23));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 4) = ((MR_Box) (TimestampOtherExt_85));
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 145, &TraceProf_42);
      succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_24);
      if (succeeded)
      {
        Var_73 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, Var_73);
        if (succeeded)
          succeeded = (TraceProf_42 == (MR_Integer) 1);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word GlobalsNoTrace0_43;

        libs__globals__set_option_4_p_0((MR_Integer) 306, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals_23, &GlobalsNoTrace0_43);
        libs__globals__set_trace_level_none_2_p_0(GlobalsNoTrace0_43, &GlobalsToUse_45);
      }
      else
        GlobalsToUse_45 = Globals_23;
      top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0(GlobalsToUse_45, OpModeAugment_13, FileName_25, ModuleName_24, MaybeTimestamp_26, NestedCompUnitNames_40, FindTimestampFiles_41, RawCompUnitsToCompile_38, Specs1_31, ModulesToLink_17, ExtraObjFiles_18, STATE_VARIABLE_HaveReadModuleMaps_54_54, STATE_VARIABLE_HaveReadModuleMaps_47);
    }
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
    MR_String conv6_ModuleToLink_6;

    top_level__mercury_compile_main__module_to_link_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_ModuleToLink_6);
    *wrapper_arg_2 = ((MR_Box) (conv6_ModuleToLink_6));
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
    MR_Word conv1_STATE_VARIABLE_Specs_39;
    MR_Word conv0_STATE_VARIABLE_HaveReadModuleMaps_41;

    top_level__mercury_compile_main__augment_and_process_module_15_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv2_ExtraObjFiles_24, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Specs_39, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_HaveReadModuleMaps_41);
    *wrapper_arg_2 = ((MR_Box) (conv2_ExtraObjFiles_24));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_39));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_HaveReadModuleMaps_41));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String FileName_18,
  MR_Word SourceFileModuleName_19,
  MR_Word MaybeTimestamp_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word RawCompUnits_23,
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
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (SourceFileModuleName_19));
      MR_hl_field(MR_mktag(0), Var_35, 7) = ((MR_Box) (MaybeTimestamp_20));
      MR_hl_field(MR_mktag(0), Var_35, 8) = ((MR_Box) (NestedSubModules_21));
      MR_hl_field(MR_mktag(0), Var_35, 9) = ((MR_Box) (FindTimestampFiles_22));
    }
    mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, RawCompUnits_23, &ExtraObjFileLists_29, ((MR_Box) (STATE_VARIABLE_Specs_0_30)), &conv5_STATE_VARIABLE_Specs_36_36, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_0_31)), &conv4_STATE_VARIABLE_HaveReadModuleMaps_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_38_38);
    STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_36_36));
    *STATE_VARIABLE_HaveReadModuleMaps_32 = ((MR_Word) (conv4_STATE_VARIABLE_HaveReadModuleMaps_32));
    parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_16, STATE_VARIABLE_Specs_36_36);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[1]), RawCompUnits_23, ModulesToLink_25);
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

    libs__globals__lookup_bool_option_3_p_0(Globals0_9, (MR_Integer) 140, &Smart0_15);
    libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_16);
    switch (DisableSmart_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 140, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals0_9, Globals_10);
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
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__write_module_interface_files__write_short_interface_file_int3_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__7_7;

    parse_tree__write_module_interface_files__write_interface_file_int1_int2_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__7_7));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__7_7;

    parse_tree__write_module_interface_files__write_private_interface_file_int0_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(
  MR_Word Globals0_8,
  MR_Word InterfaceFile_9,
  MR_Word FileOrModule_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_25,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_26)
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
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_31_31;

    switch (InterfaceFile_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GenerateVersionNumbers_14;

          libs__globals__lookup_bool_option_3_p_0(Globals0_8, (MR_Integer) 141, &GenerateVersionNumbers_14);
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
          MR_Word GenerateVersionNumbers_45;

          libs__globals__lookup_bool_option_3_p_0(Globals0_8, (MR_Integer) 141, &GenerateVersionNumbers_45);
          switch (GenerateVersionNumbers_45) {
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
    top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_8, &Globals_15, FileOrModule_10, &ModuleName_16, &FileName_17, ReturnTimestamp_13, &MaybeTimestamp_18, &ParseTreeSrc_19, &ReadSpecs_20, &ReadErrors_21, STATE_VARIABLE_HaveReadModuleMaps_0_25, &STATE_VARIABLE_HaveReadModuleMaps_31_31);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadErrors_21);
    if (succeeded)
    {
      {
        MR_Word HaltSyntax_69;

        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 4, &HaltSyntax_69);
        succeeded = (HaltSyntax_69 == (MR_Integer) 1);
      }
      if (!(succeeded))
      {
        MR_Word FatalErrors_70;
        MR_Word Var_71;

        Var_71 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadErrors_21, Var_71, &FatalErrors_70);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_70);
      }
    }
    if (succeeded)
    {
      parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_15, ReadSpecs_20);
      *STATE_VARIABLE_HaveReadModuleMaps_26 = STATE_VARIABLE_HaveReadModuleMaps_31_31;
    }
    else
    {
      MR_Word RawCompUnits_22;
      MR_Word ReadSplitSpecs_23;
      MR_Word Specs_24;
      MR_Word Limited_78;
      MR_Word ExtraErrorInfo_79;

      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_19, &RawCompUnits_22, ReadSpecs_20, &ReadSplitSpecs_23);
      parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_15, ReadSplitSpecs_23, &Specs_24);
      parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_15, Specs_24);
      libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_78);
      libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 0);
      libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_79);
      libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 0);
      switch (Limited_78) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_87;
            MR_String Var_91;

            Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "Some error messages were suppressed ", (MR_String) "by \140--limit-error-contexts\' options.\n");
            mercury__io__write_string_3_p_0(Var_87);
            Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "You can see the suppressed messages ", (MR_String) "if you recompile without these options.\n");
            mercury__io__write_string_3_p_0(Var_91);
          }
          break;
      }
      switch (ExtraErrorInfo_79) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word VerboseErrors_80;

            libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 67, &VerboseErrors_80);
            switch (VerboseErrors_80) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
          }
          break;
      }
      switch (InterfaceFile_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_42;
            MR_Box conv2_STATE_VARIABLE_HaveReadModuleMaps_26;
            MR_Box conv1_STATE_VARIABLE_IO_28;

            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Globals0_8));
              MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (FileName_17));
              MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (ModuleName_16));
              MR_hl_field(MR_mktag(0), Var_42, 6) = ((MR_Box) (MaybeTimestamp_18));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, RawCompUnits_22, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_31_31)), &conv2_STATE_VARIABLE_HaveReadModuleMaps_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28);
            *STATE_VARIABLE_HaveReadModuleMaps_26 = ((MR_Word) (conv2_STATE_VARIABLE_HaveReadModuleMaps_26));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_39;
            MR_Box conv5_STATE_VARIABLE_HaveReadModuleMaps_26;
            MR_Box conv4_STATE_VARIABLE_IO_28;

            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Globals0_8));
              MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (FileName_17));
              MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (ModuleName_16));
              MR_hl_field(MR_mktag(0), Var_39, 6) = ((MR_Box) (MaybeTimestamp_18));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, RawCompUnits_22, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_31_31)), &conv5_STATE_VARIABLE_HaveReadModuleMaps_26, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_28);
            *STATE_VARIABLE_HaveReadModuleMaps_26 = ((MR_Word) (conv5_STATE_VARIABLE_HaveReadModuleMaps_26));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_37;
            MR_Box conv6_STATE_VARIABLE_IO_28;

            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_3));
              MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Globals0_8));
              MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (FileName_17));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, RawCompUnits_22, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_28);
            *STATE_VARIABLE_HaveReadModuleMaps_26 = STATE_VARIABLE_HaveReadModuleMaps_31_31;
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
      libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 65, &Verbose_96);
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
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;

        *Globals_16 = Globals0_15;
        HaveReadModuleMapSrc0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
        *ModuleName_18 = DefaultModuleName_39;
        mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), ((MR_Box) (*ModuleName_18)), HaveReadModuleMapSrc0_86, &HaveReadModuleMapSrc_87);
        Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 1))));
        Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 2))));
        Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 3))));
        Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 4))));
        Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 5))));
        Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 6))));
        Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 7))));
        Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 8))));
        Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 9))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HaveReadModuleMaps_44 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_87));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_152));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_153));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_154));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_155));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_156));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_157));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_158));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_159));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_160));
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
            libs__globals__set_option_4_p_0((MR_Integer) 140, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals0_15, Globals_16);
            break;
          case (MR_Integer) 0:
            *Globals_16 = Globals0_15;
            break;
        }
        *STATE_VARIABLE_HaveReadModuleMaps_44 = STATE_VARIABLE_HaveReadModuleMaps_0_43;
      }
      libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 76, &Stats_104);
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
      libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 65, &Verbose_27);
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
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;

        *Globals_16 = Globals0_15;
        HaveReadModuleMapSrc0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
        mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), ((MR_Box) (*ModuleName_18)), HaveReadModuleMapSrc0_34, &HaveReadModuleMapSrc_35);
        Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 1))));
        Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 2))));
        Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 3))));
        Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 4))));
        Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 5))));
        Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 6))));
        Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 7))));
        Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 8))));
        Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 9))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HaveReadModuleMaps_44 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_35));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_131));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_132));
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
            libs__globals__set_option_4_p_0((MR_Integer) 140, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals0_15, Globals_16);
            break;
          case (MR_Integer) 0:
            *Globals_16 = Globals0_15;
            break;
        }
        *STATE_VARIABLE_HaveReadModuleMaps_44 = STATE_VARIABLE_HaveReadModuleMaps_0_43;
      }
      libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 75, &Stats_37);
      libs__file_util__maybe_report_stats_3_p_0(Stats_37);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 548, &CC_Type_10);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 524, &CC_8);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 556, &CSC_11);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 549, &CSC_Type_12);
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

        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 670, &LibGrades_17);
        if (!((LibGrades_17 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Stdout_89;

          mercury__io__stdout_stream_3_p_0(&Stdout_89);
          mercury__io__write_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Stdout_89, LibGrades_17, (MR_String) "\n", (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[0]));
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 607, &LinkCommand_13);
        mercury__io__stdout_stream_3_p_0(&Stdout_14);
        mercury__io__write_string_4_p_0(Stdout_14, LinkCommand_13);
        mercury__io__nl_3_p_0(Stdout_14);
      }
      break;
    case (MR_Integer) 8:
      {
        MR_String LinkCommand_84;
        MR_Word Stdout_85;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 608, &LinkCommand_84);
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
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 697, &TargetArch_20);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 669, &Detect_10);
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_11);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 66, &VeryVerbose_13);
          libs__globals__lookup_maybe_string_option_3_p_0(Globals_6, (MR_Integer) 584, &MaybeStdLibDir_14);
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
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0]));
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
                  MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0]));
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
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0]));
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
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0]));
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
    MR_Word DumpOptionsFile_8;

    libs__globals__lookup_bool_option_3_p_0(ArgsGlobals_5, (MR_Integer) 191, &DumpOptionsFile_8);
    switch (DumpOptionsFile_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        make__options_file__dump_options_file_3_p_0(Variables_6);
        break;
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
      *HeadVar__2_2 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_4[0]);
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
        *Res_6 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_4[0]);
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
top_level__mercury_compile_main____Unify____compile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = top_level__mercury_compile_main____Unify____compile_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____compile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    top_level__mercury_compile_main____Compare____compile_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_compile_0);
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
