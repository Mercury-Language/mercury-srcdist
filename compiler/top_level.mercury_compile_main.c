/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2019-05-06
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.export.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.xml_documentation.mih"
#include "erl_backend.elds.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_defns.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.shared_utilities.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "gc.mih"
#include "getopt_io.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.check_raw_comp_unit.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.generate_dep_d_files.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "recompilation.check.mih"
#include "recompilation.usage.mih"
#include "top_level.mercury_compile_erl_back_end.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile_main____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

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

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_value_ordered_maybe_write_d_file_0[2];

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0[2];

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0[2];

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1936__1_1_p_0(
  MR_Char LambdaHeadVar__1_22);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1239__1_2_p_0(
  MR_Word ModulesToRecompile_32,
  MR_Word LambdaHeadVar__1_54);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__831__1_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_56_51_49_95_95_49_95_95_91_51_93_95_48_8_p_0(
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
top_level__mercury_compile_main__augment_and_process_module_14_p_0(
  MR_Word Globals_15,
  MR_Word OpModeAugment_16,
  MR_String SourceFileName_17,
  MR_Word SourceFileModuleName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word NestedSubModules0_20,
  MR_Word HaveReadModuleMaps_21,
  MR_Word FindTimestampFiles_22,
  MR_Word RawCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_12_p_0(
  MR_Word Globals0_13,
  MR_Word OpModeAugment_14,
  MR_Word ModuleAndImports_15,
  MR_Word NestedSubModules_16,
  MR_Word FindTimestampFiles_17,
  MR_Word * ExtraObjFiles_18,
  MR_Word STATE_VARIABLE_DumpInfo_0_44,
  MR_Word * STATE_VARIABLE_DumpInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

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
  MR_Word STATE_VARIABLE_HLDS_0_54,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56,
  MR_Word STATE_VARIABLE_DumpInfo_0_57,
  MR_Word * STATE_VARIABLE_DumpInfo_58);

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23);

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
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22);

static void MR_CALL 
top_level__mercury_compile_main__pre_hlds_pass_16_p_0(
  MR_Word Globals_17,
  MR_Word OpModeAugment_18,
  MR_Word WriteDFile0_19,
  MR_Word ModuleAndImports0_20,
  MR_Word * HLDS1_21,
  MR_Word * QualInfo_22,
  MR_Word * MaybeTimestampMap_23,
  MR_Word * UndefTypes_24,
  MR_Word * UndefModes_25,
  MR_Word * FoundSemanticError_26,
  MR_Word STATE_VARIABLE_DumpInfo_0_71,
  MR_Word * STATE_VARIABLE_DumpInfo_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74);

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
top_level__mercury_compile_main__maybe_grab_optfiles_9_p_0(
  MR_Word Globals_10,
  MR_Word OpModeAugment_11,
  MR_Word Verbose_12,
  MR_Word MaybeTransOptDeps_13,
  MR_Word ModuleAndImports0_14,
  MR_Word * ModuleAndImports_15,
  MR_Word * Error_16);

static void MR_CALL 
top_level__mercury_compile_main__maybe_read_dependency_file_5_p_0(
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
  MR_String TimestampSuffix_8,
  MR_Word ModuleName_9,
  MR_Word * TimestampFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_6_p_0(
  MR_Word Globals_7,
  MR_String TargetSuffix_8,
  MR_Word ModuleName_9,
  MR_Word * TargetFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(
  MR_Word OpModeArgs_11,
  MR_Word FileOrModule_12,
  MR_Word OptionArgs_13,
  MR_Word Globals_14,
  MR_Word HeadVar__5_15,
  MR_Word * Succeeded_16,
  MR_Tuple * HeadVar__8_8);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(
  MR_Word OpModeArgs_11,
  MR_Word FileOrModule_12,
  MR_Word OptionArgs_13,
  MR_Word Globals_14,
  MR_Word * Succeeded_16,
  MR_Tuple * HeadVar__8_8);

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
top_level__mercury_compile_main__do_op_mode_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_8_p_0(
  MR_Word Globals_9,
  MR_Word OpMode_10,
  MR_Word DetectedGradeFlags_11,
  MR_Word OptionVariables_12,
  MR_Word OptionArgs_13,
  MR_Word Args_14);

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
top_level__mercury_compile_main__process_compiler_cmd_line_args_12_p_0(
  MR_Word Globals_1,
  MR_Word OpModeArgs_2,
  MR_Word DetectedGradeFlags_3,
  MR_Word OptionVariables_4,
  MR_Word OptionArgs_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Modules_0_7,
  MR_Word * STATE_VARIABLE_Modules_8,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_10_p_0(
  MR_Word Globals_11,
  MR_Word OpModeArgs_12,
  MR_Word DetectedGradeFlags_13,
  MR_Word OptionVariables_14,
  MR_Word OptionArgs_15,
  MR_String Arg_16,
  MR_Word * ModulesToLink_17,
  MR_Word * ExtraObjFiles_18);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0(
  MR_Word Globals_12,
  MR_Word OpModeArgs_13,
  MR_Word DetectedGradeFlags_14,
  MR_Word OptionVariables_15,
  MR_Word OptionArgs_16,
  MR_Word STATE_VARIABLE_Modules_0_27,
  MR_Word * STATE_VARIABLE_Modules_28,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_29,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_30);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(
  MR_Word Globals0_9,
  MR_Word OpModeArgs_10,
  MR_Word OptionArgs_11,
  MR_Word FileOrModule_12,
  MR_Word * ModulesToLink_13,
  MR_Word * ExtraObjFiles_14);

static MR_bool MR_CALL 
top_level__mercury_compile_main__halt_at_module_error_2_p_0(
  MR_Word Globals_3,
  MR_Word Errors_4);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0(
  MR_Word Globals0_11,
  MR_Word OpModeAugment_12,
  MR_Word OptionArgs_13,
  MR_Word FileOrModule_14,
  MR_Word MaybeModulesToRecompile_15,
  MR_Word HaveReadModuleMap0_16,
  MR_Word * ModulesToLink_17,
  MR_Word * ExtraObjFiles_18);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0(
  MR_Word Globals_15,
  MR_Word OpModeAugment_16,
  MR_String FileName_17,
  MR_Word SourceFileModuleName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word NestedSubModules_20,
  MR_Word HaveReadModuleMaps_21,
  MR_Word FindTimestampFiles_22,
  MR_Word RawCompUnits_23,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26);

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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_47);

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
top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0(
  MR_Word Globals_3,
  MR_Word * FindTargetFiles_4);

static MR_Word MR_CALL 
top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(
  MR_Word HeadVar__1_1);

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
top_level__mercury_compile_main__do_op_mode_standalone_interface_4_p_0(
  MR_Word Globals_5,
  MR_String StandaloneIntBasename_6);

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


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[36][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[2][4];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][6];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[1][12];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[7][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[2][9];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][17];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[4][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[1][10];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_12[1][8];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_13[1][13];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_14[1][11];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_15[1][7];


/* sealed */ struct top_level__mercury_compile_main__vector_common_type_7_0_s {
  const MR_String top_level__mercury_compile_main__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct top_level__mercury_compile_main__vector_common_type_7_0_s top_level__mercury_compile_main_vector_common_7[12];



static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[36][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mmc -f *.m"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a module name to file name mapping is created"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work unless"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[8])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Sorry,"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not yet supported with target language"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module name does not match file name: "))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains module"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for module"))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[0])),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[0]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[1][12] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0])),
    ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[2])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[1])),
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_12[1][8] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_13[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0)),
    ((MR_Box) (&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_14[1][11] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_15[1][7] = {
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


static /* final */ const struct top_level__mercury_compile_main__vector_common_type_7_0_s top_level__mercury_compile_main_vector_common_7[12] = {
  /* row 0 */   {     (MR_String) ".c" },
  /* row 1 */   {     (MR_String) ".cs" },
  /* row 2 */   {     (MR_String) ".java" },
  /* row 3 */   {     (MR_String) ".erl" },
  /* row 4 */   {     (MR_String) ".c_date" },
  /* row 5 */   {     (MR_String) ".cs_date" },
  /* row 6 */   {     (MR_String) ".java_date" },
  /* row 7 */   {     (MR_String) ".erl_date" },
  /* row 8 */   {     (MR_String) ".c_date" },
  /* row 9 */   {     (MR_String) ".cs_date" },
  /* row 10 */   {     (MR_String) ".java_date" },
  /* row 11 */   {     (MR_String) ".erl_date" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"
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

static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile_main____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0)
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
  UINT8_C(17),
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
  NULL
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_main____Unify____file_or_module_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____file_or_module_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "file_or_module",
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0 },
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0
};

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0 = {
  (MR_String) "do_not_write_d_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1 = {
  (MR_String) "write_d_file",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_value_ordered_maybe_write_d_file_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "maybe_write_d_file",
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0 },
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__enum_value_ordered_maybe_write_d_file_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0
};

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1936__1_1_p_0(
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
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1239__1_2_p_0(
  MR_Word ModulesToRecompile_32,
  MR_Word LambdaHeadVar__1_54)
{
  {
    MR_bool succeeded;
    MR_Word RawCompUnitModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 0))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (RawCompUnitModuleName_35)), ModulesToRecompile_32);
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__831__1_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_56_51_49_95_95_49_95_95_91_51_93_95_48_8_p_0(Compile_15, LambdaHeadVar__1_29, LambdaHeadVar__3_31);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_56_51_49_95_95_49_95_95_91_51_93_95_48_8_p_0(
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
top_level__mercury_compile_main__augment_and_process_module_14_p_0(
  MR_Word Globals_15,
  MR_Word OpModeAugment_16,
  MR_String SourceFileName_17,
  MR_Word SourceFileModuleName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word NestedSubModules0_20,
  MR_Word HaveReadModuleMaps_21,
  MR_Word FindTimestampFiles_22,
  MR_Word RawCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 0))));
    MR_Word ModuleNameContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 1))));
    MR_Word RawItemBlocks_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 2))));
    MR_Word NestedSubModules_30;
    MR_Word ModuleAndImports_31;
    MR_Word ImportedSpecs_33;
    MR_Word Errors_34;
    MR_Word FatalErrors_35;
    MR_Word STATE_VARIABLE_Specs_41_41;
    MR_Word STATE_VARIABLE_Specs_43_43;
    MR_Word Var_44;
    MR_Word _AugCompUnit_32;

    parse_tree__check_raw_comp_unit__check_interface_item_blocks_for_no_exports_6_p_0(Globals_15, ModuleName_27, ModuleNameContext_28, RawItemBlocks_29, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_41_41);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_27, SourceFileModuleName_18);
    if (succeeded)
      NestedSubModules_30 = NestedSubModules0_20;
    else
    {
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &NestedSubModules_30);
    }
    parse_tree__modules__grab_imported_modules_augment_10_p_0(Globals_15, SourceFileName_17, SourceFileModuleName_18, MaybeTimestamp_19, NestedSubModules_30, RawCompUnit_23, HaveReadModuleMaps_21, &ModuleAndImports_31);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_31, &_AugCompUnit_32, &ImportedSpecs_33, &Errors_34);
    STATE_VARIABLE_Specs_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ImportedSpecs_33, STATE_VARIABLE_Specs_41_41);
    Var_44 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_34, Var_44, &FatalErrors_35);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_35);
    if (succeeded)
    {
      MR_Word Var_36;

      top_level__mercury_compile_main__process_augmented_module_12_p_0(Globals_15, OpModeAugment_16, ModuleAndImports_31, NestedSubModules_30, FindTimestampFiles_22, ExtraObjFiles_24, (MR_Word) ((MR_Unsigned) 0U), &Var_36, STATE_VARIABLE_Specs_43_43, STATE_VARIABLE_Specs_38);
    }
    else
    {
      *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_43_43;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_12_p_0(
  MR_Word Globals0_13,
  MR_Word OpModeAugment_14,
  MR_Word ModuleAndImports_15,
  MR_Word NestedSubModules_16,
  MR_Word FindTimestampFiles_17,
  MR_Word * ExtraObjFiles_18,
  MR_Word STATE_VARIABLE_DumpInfo_0_44,
  MR_Word * STATE_VARIABLE_DumpInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  {
    MR_bool succeeded;
    MR_Word Globals_22;
    MR_Word WriteDFile_23;
    MR_Word HLDS1_25;
    MR_Word QualInfo_26;
    MR_Word MaybeTimestampMap_27;
    MR_Word UndefTypes_28;
    MR_Word UndefModes_29;
    MR_Word PreHLDSErrors_30;
    MR_Word FrontEndErrors_31;
    MR_Word HLDS20_32;
    MR_Word STATE_VARIABLE_DumpInfo_50_50;
    MR_Word STATE_VARIABLE_Specs_51_51;
    MR_Word STATE_VARIABLE_DumpInfo_53_53;
    MR_Word STATE_VARIABLE_Specs_54_54;
    MR_Word Var_56;

    switch (MR_tag((MR_Word) OpModeAugment_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OptionTable0_81;
              MR_Word OptionTable1_82;
              MR_Word OptionTable_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_87;

              libs__globals__get_options_2_p_0(Globals0_13, &OptionTable0_81);
              Var_84 = libs__options__style_warning_options_0_f_0();
              Var_85 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]));
              libs__options__set_all_options_to_4_p_0(Var_84, Var_85, OptionTable0_81, &OptionTable1_82);
              Var_87 = libs__options__non_style_warning_options_0_f_0();
              libs__options__set_all_options_to_4_p_0(Var_87, Var_85, OptionTable1_82, &OptionTable_83);
              libs__globals__set_options_3_p_0(OptionTable_83, Globals0_13, &Globals_22);
              WriteDFile_23 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_13, &Globals_22);
              WriteDFile_23 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              Globals_22 = Globals0_13;
              WriteDFile_23 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              Globals_22 = Globals0_13;
              WriteDFile_23 = (MR_Integer) 0;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          Globals_22 = Globals0_13;
          WriteDFile_23 = (MR_Integer) 1;
        }
        break;
    }
    top_level__mercury_compile_main__pre_hlds_pass_16_p_0(Globals_22, OpModeAugment_14, WriteDFile_23, ModuleAndImports_15, &HLDS1_25, &QualInfo_26, &MaybeTimestampMap_27, &UndefTypes_28, &UndefModes_29, &PreHLDSErrors_30, STATE_VARIABLE_DumpInfo_0_44, &STATE_VARIABLE_DumpInfo_50_50, STATE_VARIABLE_Specs_0_46, &STATE_VARIABLE_Specs_51_51);
    top_level__mercury_compile_front_end__frontend_pass_14_p_0(OpModeAugment_14, QualInfo_26, UndefTypes_28, UndefModes_29, PreHLDSErrors_30, &FrontEndErrors_31, HLDS1_25, &HLDS20_32, STATE_VARIABLE_DumpInfo_50_50, &STATE_VARIABLE_DumpInfo_53_53, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_54_54);
    succeeded = (PreHLDSErrors_30 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (FrontEndErrors_31 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_56 = parse_tree__error_util__contains_errors_2_f_0(Globals_22, STATE_VARIABLE_Specs_54_54);
        succeeded = (Var_56 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Verbose_33;
      MR_Word Stats_34;
      MR_Word HLDS21_35;

      libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 61, &Verbose_33);
      libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 71, &Stats_34);
      top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(Verbose_33, Stats_34, HLDS20_32, &HLDS21_35);
      switch (MR_tag((MR_Word) OpModeAugment_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpModeAugment_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_45 = STATE_VARIABLE_DumpInfo_53_53;
                *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_54_54;
              }
              break;
            case (MR_Integer) 1:
              {
                top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(HLDS21_35, STATE_VARIABLE_DumpInfo_53_53, STATE_VARIABLE_DumpInfo_45);
                *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_54_54;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word HLDS22_41;

                top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(Globals_22, Verbose_33, Stats_34, HLDS21_35, &HLDS22_41);
                top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(HLDS22_41, STATE_VARIABLE_DumpInfo_53_53, STATE_VARIABLE_DumpInfo_45);
                *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_54_54;
              }
              break;
            case (MR_Integer) 3:
              {
                check_hlds__xml_documentation__xml_documentation_3_p_0(HLDS21_35);
                *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_45 = STATE_VARIABLE_DumpInfo_53_53;
                *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_54_54;
              }
              break;
            case (MR_Integer) 4:
              {
                *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_45 = STATE_VARIABLE_DumpInfo_53_53;
                *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_54_54;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word UnusedArgs_36;

                libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 11, &UnusedArgs_36);
                switch (UnusedArgs_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NoOptUnusedArgsGlobals_37;
                      MR_Word HLDS21a_38;
                      MR_Word _UnusedArgsInfos_39;
                      MR_Word _HLDS22_40;

                      libs__globals__set_option_4_p_0((MR_Integer) 374, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals_22, &NoOptUnusedArgsGlobals_37);
                      hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_37, HLDS21_35, &HLDS21a_38);
                      top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(Verbose_33, Stats_34, &_UnusedArgsInfos_39, HLDS21a_38, &_HLDS22_40);
                    }
                    break;
                }
                *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_DumpInfo_45 = STATE_VARIABLE_DumpInfo_53_53;
                *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_54_54;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OpModeCodeGen_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeAugment_14, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word HLDS22_78;

            top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(Globals_22, Verbose_33, Stats_34, HLDS21_35, &HLDS22_78);
            top_level__mercury_compile_main__after_front_end_passes_13_p_0(Globals_22, OpModeCodeGen_42, NestedSubModules_16, FindTimestampFiles_17, MaybeTimestampMap_27, HLDS22_78, ExtraObjFiles_18, STATE_VARIABLE_Specs_54_54, STATE_VARIABLE_Specs_47, STATE_VARIABLE_DumpInfo_53_53, STATE_VARIABLE_DumpInfo_45);
          }
          break;
      }
    }
    else
    {
      MR_Integer ExitStatus_43;

      mercury__io__get_exit_status_3_p_0(&ExitStatus_43);
      succeeded = (ExitStatus_43 == (MR_Integer) 0);
      if (succeeded)
      {
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_54_54;
      *STATE_VARIABLE_DumpInfo_45 = STATE_VARIABLE_DumpInfo_53_53;
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
  MR_Word STATE_VARIABLE_HLDS_0_54,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56,
  MR_Word STATE_VARIABLE_DumpInfo_0_57,
  MR_Word * STATE_VARIABLE_DumpInfo_58)
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
    MR_Word STATE_VARIABLE_HLDS_63_63;
    MR_Word STATE_VARIABLE_HLDS_65_65;
    MR_Word STATE_VARIABLE_DumpInfo_66_66;
    MR_Word Var_30;

    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 61, &Verbose_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 71, &Stats_25);
    top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(Verbose_24, Stats_25, STATE_VARIABLE_HLDS_0_54, &STATE_VARIABLE_HLDS_63_63);
    top_level__mercury_compile_middle_passes__middle_pass_6_p_0(STATE_VARIABLE_HLDS_63_63, &STATE_VARIABLE_HLDS_65_65, STATE_VARIABLE_DumpInfo_0_57, &STATE_VARIABLE_DumpInfo_66_66);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 281, &HighLevelCode_26);
    libs__globals__get_target_2_p_0(Globals_14, &Target_27);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_65_65, &ModuleName_28);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_14, (MR_Integer) 1, (MR_String) ".used", ModuleName_28, &UsageFileName_29);
    mercury__io__remove_file_4_p_0(UsageFileName_29, &Var_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 3, &HaltAtWarn_31);
    switch (HaltAtWarn_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FrontEndErrors_32 = parse_tree__error_util__contains_errors_2_f_0(Globals_14, STATE_VARIABLE_Specs_0_55);
        break;
      case (MR_Integer) 1:
        FrontEndErrors_32 = parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(Globals_14, STATE_VARIABLE_Specs_0_55);
        break;
    }
    hlds__hlds_module__module_info_get_num_errors_2_p_0(STATE_VARIABLE_HLDS_65_65, &NumErrors_33);
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

            backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_65_65, &ExportDecls_42);
            backend_libs__export__produce_header_file_5_p_0(STATE_VARIABLE_HLDS_65_65, ExportDecls_42, ModuleName_28);
            switch (HighLevelCode_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GlobalData_49;
                  MR_Word LLDS_50;

                  top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(STATE_VARIABLE_HLDS_65_65, &STATE_VARIABLE_HLDS_78_78, &GlobalData_49, &LLDS_50, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_58);
                  top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0(OpModeCodeGen_15, STATE_VARIABLE_HLDS_78_78, GlobalData_49, LLDS_50, ModuleName_28, &Succeeded_37, ExtraObjFiles_20);
                  *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MLDS_123;
                  MR_Word NewSpecs_124;
                  MR_Word TargetCodeSucceeded_125;
                  MR_Word Var_43;

                  top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_65_65, &Var_43, &MLDS_123, &NewSpecs_124, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_58);
                  *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_124, STATE_VARIABLE_Specs_0_55);
                  top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(Globals_14, MLDS_123, &TargetCodeSucceeded_125);
                  switch (OpModeCodeGen_15) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      switch (TargetCodeSucceeded_125) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          Succeeded_37 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_String C_File_44;
                            MR_Word TargetType_45;
                            MR_Word PIC_46;
                            MR_String Obj_47;
                            MR_String O_File_48;
                            MR_Word OutputStream_119;

                            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_14, (MR_Integer) 1, (MR_String) ".c", ModuleName_28, &C_File_44);
                            backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_14, &TargetType_45);
                            backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_14, TargetType_45, &PIC_46);
                            backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_14, PIC_46, &Obj_47);
                            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_14, (MR_Integer) 0, Obj_47, ModuleName_28, &O_File_48);
                            mercury__io__output_stream_3_p_0(&OutputStream_119);
                            backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_14, OutputStream_119, PIC_46, C_File_44, O_File_48, &Succeeded_37);
                            parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_37);
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 0:
                      Succeeded_37 = TargetCodeSucceeded_125;
                      break;
                  }
                  *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_65_65;
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

            top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_65_65, &Var_34, &MLDS_35, &NewSpecs_36, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_58);
            *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_36, STATE_VARIABLE_Specs_0_55);
            top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(STATE_VARIABLE_HLDS_65_65, MLDS_35, &Succeeded_37);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_65_65;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ELDS_51;

            top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(STATE_VARIABLE_HLDS_65_65, &ELDS_51, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_58);
            top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(STATE_VARIABLE_HLDS_65_65, ELDS_51, &Succeeded_37);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_65_65;
            *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TargetCodeSucceeded_39;
            MR_Word MLDS_117;
            MR_Word NewSpecs_118;
            MR_Word Var_38;

            top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_65_65, &Var_38, &MLDS_117, &NewSpecs_118, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_58);
            *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_118, STATE_VARIABLE_Specs_0_55);
            top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(STATE_VARIABLE_HLDS_65_65, MLDS_117, &TargetCodeSucceeded_39);
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
                      MR_Word Var_102;

                      mercury__io__output_stream_3_p_0(&OutputStream_40);
                      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_14, (MR_Integer) 1, (MR_String) ".java", ModuleName_28, &JavaFile_41);
                      {
                        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (JavaFile_41));
                        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      backend_libs__compile_target_code__compile_java_files_6_p_0(Globals_14, OutputStream_40, Var_102, &Succeeded_37);
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
            STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_65_65;
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
            MR_Word TimestampFiles_52;
            MR_Word Var_112;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv2_TimestampFiles_52;
            MR_Box conv1_STATE_VARIABLE_IO_111_111;
            MR_Box conv3_STATE_VARIABLE_IO_60;

            recompilation__usage__write_usage_file_5_p_0(STATE_VARIABLE_HLDS_78_78, NestedSubModules_16, MaybeTimestampMap_18);
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), FindTimestampFiles_17, (MR_Integer) 1))));
            func_0(((MR_Box) (FindTimestampFiles_17)), ((MR_Box) (ModuleName_28)), &conv2_TimestampFiles_52, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_111_111);
            TimestampFiles_52 = ((MR_Word) (conv2_TimestampFiles_52));
            {
              Var_112 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_15[0]));
              MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_13_p_0_1));
              MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (Globals_14));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, TimestampFiles_52, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_60);
          }
          break;
      }
    }
    else
    {
      MR_Integer ExitStatus_53;

      mercury__io__get_exit_status_3_p_0(&ExitStatus_53);
      succeeded = (ExitStatus_53 == (MR_Integer) 0);
      if (succeeded)
      {
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DumpInfo_58 = STATE_VARIABLE_DumpInfo_66_66;
      *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word ProfileCalls_12;
    MR_Word ProfileTime_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 214, &ProfileCalls_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 215, &ProfileTime_13);
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
      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_22, &ModuleName_14);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_11, (MR_Integer) 0, (MR_String) ".prof", ModuleName_14, &ProfFileName_15);
      mercury__io__open_output_4_p_0(ProfFileName_15, &Res_16);
      if (((MR_tag((MR_Word) Res_16)) == (MR_Integer) 1))
      {
        MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_16, (MR_Integer) 0))));
        MR_String ErrorMsg_21;
        MR_String Var_36;

        Var_36 = mercury__io__error_message_1_f_0(IOError_20);
        ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", Var_36);
        libs__file_util__report_error_3_p_0(ErrorMsg_21);
        *STATE_VARIABLE_HLDS_23 = STATE_VARIABLE_HLDS_0_22;
      }
      else
      {
        MR_Word FileStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_16, (MR_Integer) 0))));
        MR_Word OutputStream_18;
        MR_Word Var_19;

        mercury__io__set_output_stream_4_p_0(FileStream_17, &OutputStream_18);
        hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0(STATE_VARIABLE_HLDS_0_22, STATE_VARIABLE_HLDS_23);
        mercury__io__set_output_stream_4_p_0(OutputStream_18, &Var_19);
        mercury__io__close_output_3_p_0(FileStream_17);
      }
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
    else
      *STATE_VARIABLE_HLDS_23 = STATE_VARIABLE_HLDS_0_22;
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
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 688, &LocalModulesList_14);
    SymNames_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[6]), LocalModulesList_14);
    LocalModuleNames_16 = mercury__set__from_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_15);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 353, &IntermodAnalysis_13);
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
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 688, &LocalModulesList_31);
          SymNames_32 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[5]), LocalModulesList_31);
          LocalModuleNames_33 = mercury__set__from_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_32);
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
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22)
{
  {
    MR_Word Globals_11;
    MR_Word ShowDepGraph_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 164, &ShowDepGraph_12);
    switch (ShowDepGraph_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_13;
          MR_String FileName_14;
          MR_Word Res_15;

          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Writing dependency graph...");
          hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_21, &ModuleName_13);
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_11, (MR_Integer) 0, (MR_String) ".dependency_graph", ModuleName_13, &FileName_14);
          mercury__io__open_output_4_p_0(FileName_14, &Res_15);
          if (((MR_tag((MR_Word) Res_15)) == (MR_Integer) 1))
          {
            MR_Word IOError_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_15, (MR_Integer) 0))));
            MR_String ErrorMsg_20;
            MR_String Var_33;

            Var_33 = mercury__io__error_message_1_f_0(IOError_19);
            ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", Var_33);
            libs__file_util__report_error_3_p_0(ErrorMsg_20);
            *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
          }
          else
          {
            MR_Word FileStream_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_15, (MR_Integer) 0))));
            MR_Word OutputStream_17;
            MR_Word Var_18;

            mercury__io__set_output_stream_4_p_0(FileStream_16, &OutputStream_17);
            hlds__hlds_dependency_graph__write_dependency_graph_4_p_0(STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22);
            mercury__io__set_output_stream_4_p_0(OutputStream_17, &Var_18);
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
top_level__mercury_compile_main__pre_hlds_pass_16_p_0(
  MR_Word Globals_17,
  MR_Word OpModeAugment_18,
  MR_Word WriteDFile0_19,
  MR_Word ModuleAndImports0_20,
  MR_Word * HLDS1_21,
  MR_Word * QualInfo_22,
  MR_Word * MaybeTimestampMap_23,
  MR_Word * UndefTypes_24,
  MR_Word * UndefModes_25,
  MR_Word * FoundSemanticError_26,
  MR_Word STATE_VARIABLE_DumpInfo_0_71,
  MR_Word * STATE_VARIABLE_DumpInfo_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74)
{
  {
    MR_bool succeeded;
    MR_Word Stats_30;
    MR_Word Verbose_31;
    MR_Word MMCMake_32;
    MR_Word WriteDFile_33;
    MR_Word ModuleName_34;
    MR_Word MaybeTransOptDeps_35;
    MR_Word ModuleAndImports1_36;
    MR_Word IntermodError_37;
    MR_Word AugCompUnit1_38;
    MR_Word ItemSpecs_39;
    MR_String EventSetFileName_41;
    MR_String EventSetName_42;
    MR_Word EventSpecMap1_43;
    MR_Word EventSetErrors_44;
    MR_Word AugCompUnit2_48;
    MR_Word EventSpecMap2_49;
    MR_Word MQInfo0_50;
    MR_Word MQUndefTypes_51;
    MR_Word MQUndefInsts_52;
    MR_Word MQUndefModes_53;
    MR_Word MQUndefTypeClasses_54;
    MR_Word QualifySpecs_55;
    MR_Word RecompInfo0_56;
    MR_Word AugCompUnit_57;
    MR_Word EventSpecMap_58;
    MR_Word TypeEqvMap_59;
    MR_Word UsedModules_60;
    MR_Word RecompInfo_61;
    MR_Word ExpandSpecs_62;
    MR_Word ExpandErrors_63;
    MR_Word MQInfo_64;
    MR_Word EventSet_65;
    MR_Word HLDS0_66;
    MR_Word MakeHLDSFoundInvalidType_67;
    MR_Word MakeHLDSFoundInvalidInstOrMode_68;
    MR_Word STATE_VARIABLE_Specs_82_82;
    MR_Word STATE_VARIABLE_Specs_85_85;
    MR_Word STATE_VARIABLE_Specs_86_86;
    MR_Word STATE_VARIABLE_Specs_92_92;
    MR_Word STATE_VARIABLE_Specs_93_93;
    MR_Word STATE_VARIABLE_Specs_98_98;
    MR_Word STATE_VARIABLE_Specs_103_103;
    MR_Word STATE_VARIABLE_Specs_104_104;
    MR_Word _Error_40;

    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 71, &Stats_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 61, &Verbose_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 649, &MMCMake_32);
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports0_20, &ModuleName_34);
    succeeded = (MMCMake_32 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OpModeAugment_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      WriteDFile_33 = (MR_Integer) 0;
      MaybeTransOptDeps_35 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      WriteDFile_33 = WriteDFile0_19;
      switch (WriteDFile_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeTransOptDeps_35 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          top_level__mercury_compile_main__maybe_read_dependency_file_5_p_0(Globals_17, ModuleName_34, &MaybeTransOptDeps_35);
          break;
      }
    }
    top_level__mercury_compile_main__maybe_grab_optfiles_9_p_0(Globals_17, OpModeAugment_18, Verbose_31, MaybeTransOptDeps_35, ModuleAndImports0_20, &ModuleAndImports1_36, &IntermodError_37);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports1_36, &AugCompUnit1_38, &ItemSpecs_39, &_Error_40);
    STATE_VARIABLE_Specs_82_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_39, STATE_VARIABLE_Specs_0_73);
    parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(ModuleAndImports1_36, MaybeTimestampMap_23);
    libs__globals__lookup_string_option_3_p_0(Globals_17, (MR_Integer) 198, &EventSetFileName_41);
    succeeded = (strcmp(EventSetFileName_41, (MR_String) "") == 0);
    if (succeeded)
    {
      EventSetName_42 = (MR_String) "";
      EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      EventSetErrors_44 = (MR_Integer) 0;
      STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_82_82;
    }
    else
    {
      MR_String EventSetName0_45;
      MR_Word EventSpecMap0_46;
      MR_Word EventSetSpecs_47;

      parse_tree__prog_event__read_event_set_6_p_0(EventSetFileName_41, &EventSetName0_45, &EventSpecMap0_46, &EventSetSpecs_47);
      STATE_VARIABLE_Specs_85_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EventSetSpecs_47, STATE_VARIABLE_Specs_82_82);
      EventSetErrors_44 = parse_tree__error_util__contains_errors_2_f_0(Globals_17, EventSetSpecs_47);
      switch (EventSetErrors_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            EventSetName_42 = EventSetName0_45;
            EventSpecMap1_43 = EventSpecMap0_46;
          }
          break;
        case (MR_Integer) 1:
          {
            EventSetName_42 = (MR_String) "";
            EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
          }
          break;
      }
    }
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_31, Globals_17, STATE_VARIABLE_Specs_85_85, &STATE_VARIABLE_Specs_86_86);
    libs__file_util__maybe_write_string_4_p_0(Verbose_31, (MR_String) "% Module qualifying items...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_31);
    parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_17, AugCompUnit1_38, &AugCompUnit2_48, EventSpecMap1_43, &EventSpecMap2_49, EventSetFileName_41, &MQInfo0_50, &MQUndefTypes_51, &MQUndefInsts_52, &MQUndefModes_53, &MQUndefTypeClasses_54, (MR_Word) ((MR_Unsigned) 0U), &QualifySpecs_55);
    STATE_VARIABLE_Specs_92_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), QualifySpecs_55, STATE_VARIABLE_Specs_86_86);
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_31, Globals_17, STATE_VARIABLE_Specs_92_92, &STATE_VARIABLE_Specs_93_93);
    libs__file_util__maybe_write_string_4_p_0(Verbose_31, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_30);
    parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo0_50, &RecompInfo0_56);
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_31, Globals_17, STATE_VARIABLE_Specs_93_93, &STATE_VARIABLE_Specs_98_98);
    libs__file_util__maybe_write_string_4_p_0(Verbose_31, (MR_String) "% Expanding equivalence types and insts...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_31);
    parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(AugCompUnit2_48, &AugCompUnit_57, EventSpecMap2_49, &EventSpecMap_58, &TypeEqvMap_59, &UsedModules_60, RecompInfo0_56, &RecompInfo_61, &ExpandSpecs_62);
    ExpandErrors_63 = parse_tree__error_util__contains_errors_2_f_0(Globals_17, ExpandSpecs_62);
    STATE_VARIABLE_Specs_103_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ExpandSpecs_62, STATE_VARIABLE_Specs_98_98);
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_31, Globals_17, STATE_VARIABLE_Specs_103_103, &STATE_VARIABLE_Specs_104_104);
    libs__file_util__maybe_write_string_4_p_0(Verbose_31, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_30);
    parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(RecompInfo_61, MQInfo0_50, &MQInfo_64);
    {
      EventSet_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EventSet_65, 0) = ((MR_Box) (EventSetName_42));
      MR_hl_field(MR_mktag(0), EventSet_65, 1) = ((MR_Box) (EventSpecMap_58));
    }
    top_level__mercury_compile_main__make_hlds_17_p_0(Globals_17, AugCompUnit_57, EventSet_65, MQInfo_64, TypeEqvMap_59, UsedModules_60, Verbose_31, Stats_30, &HLDS0_66, QualInfo_22, &MakeHLDSFoundInvalidType_67, &MakeHLDSFoundInvalidInstOrMode_68, FoundSemanticError_26, STATE_VARIABLE_Specs_104_104, STATE_VARIABLE_Specs_74);
    top_level__mercury_compile_main__maybe_write_definitions_5_p_0(Verbose_31, Stats_30, HLDS0_66);
    top_level__mercury_compile_main__maybe_write_definition_line_counts_5_p_0(Verbose_31, Stats_30, HLDS0_66);
    succeeded = (MQUndefTypes_51 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MQUndefTypeClasses_54 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (EventSetErrors_44 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (ExpandErrors_63 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MakeHLDSFoundInvalidType_67 == (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
      *UndefTypes_24 = (MR_Integer) 0;
    else
      *UndefTypes_24 = (MR_Integer) 1;
    succeeded = (MQUndefInsts_52 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MQUndefModes_53 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (MakeHLDSFoundInvalidInstOrMode_68 == (MR_Integer) 0);
    }
    if (succeeded)
      *UndefModes_25 = (MR_Integer) 0;
    else
      *UndefModes_25 = (MR_Integer) 1;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(HLDS0_66, (MR_Integer) 1, (MR_String) "initial", STATE_VARIABLE_DumpInfo_0_71, STATE_VARIABLE_DumpInfo_72);
    switch (WriteDFile_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllDeps_69;
          MR_Word OutputMMCMakeDeps_70;

          hlds__hlds_module__module_info_get_all_deps_2_p_0(HLDS0_66, &AllDeps_69);
          parse_tree__write_deps_file__write_dependency_file_6_p_0(Globals_17, ModuleAndImports0_20, AllDeps_69, MaybeTransOptDeps_35);
          libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 133, &OutputMMCMakeDeps_70);
          switch (OutputMMCMakeDeps_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              make__make_write_module_dep_file_4_p_0(Globals_17, ModuleAndImports0_20);
              break;
          }
        }
        break;
    }
    succeeded = (*FoundSemanticError_26 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (IntermodError_37 == (MR_Integer) 1);
    if (succeeded)
      hlds__hlds_module__module_info_incr_errors_2_p_0(HLDS0_66, HLDS1_21);
    else
      *HLDS1_21 = HLDS0_66;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 160, &LineCounts_11);
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

          libs__file_util__maybe_write_string_4_p_0(Verbose_6, (MR_String) "% Writing definition line coints...");
          hlds__hlds_module__module_info_get_name_2_p_0(HLDS_8, &ModuleName_12);
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".defn_line_counts", ModuleName_12, &FileName_13);
          mercury__io__open_output_4_p_0(FileName_13, &Res_14);
          if (((MR_tag((MR_Word) Res_14)) == (MR_Integer) 1))
          {
            MR_Word IOError_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0))));
            MR_String ErrorMsg_17;
            MR_String Var_28;

            Var_28 = mercury__io__error_message_1_f_0(IOError_16);
            ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definition line counts: ", Var_28);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 159, &ShowDefns_11);
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
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".defns", ModuleName_12, &FileName_13);
          mercury__io__open_output_4_p_0(FileName_13, &Res_14);
          if (((MR_tag((MR_Word) Res_14)) == (MR_Integer) 1))
          {
            MR_Word IOError_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0))));
            MR_String ErrorMsg_17;
            MR_String Var_28;

            Var_28 = mercury__io__error_message_1_f_0(IOError_16);
            ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definitions: ", Var_28);
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
    MR_Word STATE_VARIABLE_HLDS_50_50;
    MR_Word STATE_VARIABLE_Specs_51_51;

    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_24, Globals_18, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_43_43);
    libs__file_util__maybe_write_string_4_p_0(Verbose_24, (MR_String) "% Converting parse tree to hlds...\n");
    ModuleName_33 = parse_tree__prog_item__aug_compilation_unit_project_name_1_f_0(AugCompUnit_19);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_18, (MR_Integer) 0, (MR_String) ".hlds_dump", ModuleName_33, &DumpBaseFileName_34);
    hlds__make_hlds__parse_tree_to_hlds_11_p_0(AugCompUnit_19, Globals_18, DumpBaseFileName_34, MQInfo_21, TypeEqvMap_22, UsedModules_23, QualInfo_27, FoundInvalidType_28, FoundInvalidInstOrMode_29, &STATE_VARIABLE_HLDS_50_50, &MakeSpecs_35);
    STATE_VARIABLE_Specs_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MakeSpecs_35, STATE_VARIABLE_Specs_43_43);
    hlds__hlds_module__module_info_set_event_set_3_p_0(EventSet_20, STATE_VARIABLE_HLDS_50_50, STATE_VARIABLE_HLDS_38);
    mercury__io__get_exit_status_3_p_0(&Status_36);
    SpecsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(Globals_18, STATE_VARIABLE_Specs_51_51);
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
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_24, Globals_18, STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Specs_40);
    libs__file_util__maybe_write_string_4_p_0(Verbose_24, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_25);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_grab_optfiles_9_p_0(
  MR_Word Globals_10,
  MR_Word OpModeAugment_11,
  MR_Word Verbose_12,
  MR_Word MaybeTransOptDeps_13,
  MR_Word ModuleAndImports0_14,
  MR_Word * ModuleAndImports_15,
  MR_Word * Error_16)
{
  {
    MR_bool succeeded;
    MR_Word IntermodOpt_18;
    MR_Word UseOptInt_19;
    MR_Word TransOpt_20;
    MR_Word IntermodAnalysis_21;
    MR_Word ModuleAndImports1_22;
    MR_Word Error1_23;
    MR_Word Error2_25;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 348, &IntermodOpt_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 350, &UseOptInt_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 352, &TransOpt_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 353, &IntermodAnalysis_21);
    succeeded = (UseOptInt_19 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (IntermodOpt_18 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (IntermodAnalysis_21 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      succeeded = (OpModeAugment_11 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Reading .opt files...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      parse_tree__modules__grab_opt_files_6_p_0(Globals_10, ModuleAndImports0_14, &ModuleAndImports1_22, &Error1_23);
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Done.\n");
    }
    else
    {
      ModuleAndImports1_22 = ModuleAndImports0_14;
      Error1_23 = (MR_Integer) 0;
    }
    switch (MR_tag((MR_Word) OpModeAugment_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ModuleAndImports_15 = ModuleAndImports1_22;
              Error2_25 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            if ((MaybeTransOptDeps_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ModuleName_26;
              MR_Word WarnNoTransOptDeps_27;

              *ModuleAndImports_15 = ModuleAndImports1_22;
              Error2_25 = (MR_Integer) 0;
              parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*ModuleAndImports_15, &ModuleName_26);
              libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 16, &WarnNoTransOptDeps_27);
              switch (WarnNoTransOptDeps_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Pieces_28;
                    MR_Word Msg_29;
                    MR_Word Spec_30;
                    MR_Word Var_57;
                    MR_Word Var_60;
                    MR_Word Var_61;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_Word Var_81;

                    {
                      Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (ModuleName_26));
                    }
                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
                      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[24])));
                    }
                    {
                      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[35])));
                      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
                    }
                    {
                      Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[34])));
                      MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_57));
                    }
                    {
                      Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Pieces_28));
                    }
                    {
                      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
                      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Msg_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Msg_29, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(1), Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), Msg_29, 3) = ((MR_Box) (Var_76));
                    }
                    {
                      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Msg_29));
                      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_81));
                    }
                    parse_tree__error_util__write_error_spec_ignore_4_p_0(Spec_30, Globals_10);
                  }
                  break;
              }
            }
            else
            {
              MR_Word TransOptDeps_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps_13, (MR_Integer) 0))));

              parse_tree__modules__grab_trans_opt_files_7_p_0(Globals_10, TransOptDeps_24, ModuleAndImports1_22, ModuleAndImports_15, &Error2_25);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            switch (TransOpt_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ModuleAndImports_15 = ModuleAndImports1_22;
                  Error2_25 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ancestors_32;
                  MR_Word IntDeps_33;
                  MR_Word ImpDeps_34;
                  MR_Word TransOptFiles_35;
                  MR_Word TransOptFilesList_36;
                  MR_Word Var_49;
                  MR_Word Var_50;
                  MR_Word Var_51;

                  parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(ModuleAndImports0_14, &Ancestors_32);
                  parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(ModuleAndImports0_14, &IntDeps_33);
                  parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(ModuleAndImports0_14, &ImpDeps_34);
                  {
                    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ImpDeps_34));
                    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (IntDeps_33));
                    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
                  }
                  {
                    Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Ancestors_32));
                    MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
                  }
                  TransOptFiles_35 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49);
                  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFiles_35, &TransOptFilesList_36);
                  parse_tree__modules__grab_trans_opt_files_7_p_0(Globals_10, TransOptFilesList_36, ModuleAndImports1_22, ModuleAndImports_15, &Error2_25);
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (TransOpt_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ModuleAndImports_15 = ModuleAndImports1_22;
              Error2_25 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Ancestors_32;
              MR_Word IntDeps_33;
              MR_Word ImpDeps_34;
              MR_Word TransOptFiles_35;
              MR_Word TransOptFilesList_36;
              MR_Word Var_49;
              MR_Word Var_50;
              MR_Word Var_51;

              parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(ModuleAndImports0_14, &Ancestors_32);
              parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(ModuleAndImports0_14, &IntDeps_33);
              parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(ModuleAndImports0_14, &ImpDeps_34);
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ImpDeps_34));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (IntDeps_33));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Ancestors_32));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
              }
              TransOptFiles_35 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptFiles_35, &TransOptFilesList_36);
              parse_tree__modules__grab_trans_opt_files_7_p_0(Globals_10, TransOptFilesList_36, ModuleAndImports1_22, ModuleAndImports_15, &Error2_25);
            }
            break;
        }
        break;
    }
    mercury__bool__or_3_p_0(Error1_23, Error2_25, Error_16);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_read_dependency_file_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * MaybeTransOptDeps_8)
{
  {
    MR_Word TransOpt_10;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 352, &TransOpt_10);
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 61, &Verbose_11);
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 1, (MR_String) ".d", ModuleName_7, &DependencyFileName_12);
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
            MR_Word Var_41;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_46;

            libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
            mercury__io__error_message_2_p_0(IOError_21, &IOErrorMessage_22);
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (IOErrorMessage_22));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "\' for input: "));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (DependencyFileName_12));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
            }
            mercury__string__append_list_2_p_0(Var_41, &Message_23);
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
            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 1, (MR_String) ".trans_opt_date", ModuleName_7, &TransOptDateFileName_16);
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

    succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1936__1_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
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
  MR_String TimestampSuffix_8,
  MR_Word ModuleName_9,
  MR_Word * TimestampFiles_10)
{
  {
    MR_String FileName_12;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, TimestampSuffix_8, ModuleName_9, &FileName_12);
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
  MR_String TargetSuffix_8,
  MR_Word ModuleName_9,
  MR_Word * TargetFiles_10)
{
  {
    MR_String FileName_12;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, TargetSuffix_8, ModuleName_9, &FileName_12);
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
top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(
  MR_Word OpModeArgs_11,
  MR_Word FileOrModule_12,
  MR_Word OptionArgs_13,
  MR_Word Globals_14,
  MR_Word HeadVar__5_15,
  MR_Word * Succeeded_16,
  MR_Tuple * HeadVar__8_8)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(OpModeArgs_11, FileOrModule_12, OptionArgs_13, Globals_14, Succeeded_16, HeadVar__8_8);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(
  MR_Word OpModeArgs_11,
  MR_Word FileOrModule_12,
  MR_Word OptionArgs_13,
  MR_Word Globals_14,
  MR_Word * Succeeded_16,
  MR_Tuple * HeadVar__8_8)
{
  {
    MR_Word Modules_18;
    MR_Word ExtraObjFiles_19;

    top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(Globals_14, OpModeArgs_11, OptionArgs_13, FileOrModule_12, &Modules_18, &ExtraObjFiles_19);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Modules_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExtraObjFiles_19));
    }
    *Succeeded_16 = (MR_Integer) 1;
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
            mercury__io__check_file_accessibility_5_p_0(TargetFile_18, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[33])), &Result_19);
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
        mercury__io__check_file_accessibility_5_p_0(InitFile_17, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[33])), &Result_18);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 685, &Version_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 684, &Help_23);
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
        MR_Word Stdout_40;
        MR_Word OldOutputStream_41;
        MR_Word Var_27;

        mercury__io__stdout_stream_3_p_0(&Stdout_40);
        mercury__io__set_output_stream_4_p_0(Stdout_40, &OldOutputStream_41);
        libs__handle_options__display_compiler_version_2_p_0();
        mercury__io__set_output_stream_4_p_0(OldOutputStream_41, &Var_27);
      }
      else
      {
        MR_Word OpMode_28;

        libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_28);
        top_level__mercury_compile_main__do_op_mode_8_p_0(Globals_5, OpMode_28, (MR_Word) ((MR_Unsigned) 0U), Var_11, (MR_Word) ((MR_Unsigned) 0U), Args_6);
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
    MR_Word Res_7;
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
    top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(CmdLineArgs_6, &Res_7);
    if (((MR_tag((MR_Word) Res_7)) == (MR_Integer) 1))
    {
      MR_Word E_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_7, (MR_Integer) 0))));
      MR_String Var_20;

      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      Var_20 = mercury__io__error_message_1_f_0(E_9);
      mercury__io__write_string_3_p_0(Var_20);
      mercury__io__nl_2_p_0();
    }
    else
    {
      MR_Word ExpandedCmdLineArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_7, (MR_Integer) 0))));

      top_level__mercury_compile_main__real_main_after_expansion_3_p_0(ExpandedCmdLineArgs_8);
    }
    parse_tree__file_names__write_translations_record_if_any_2_p_0();
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
    MR_String Var_44;
    MR_Word Var_45;

    if (succeeded)
    {
      Var_44 = ((MR_String) ((MR_hl_field(MR_mktag(1), CmdLineArgs_4, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CmdLineArgs_4, (MR_Integer) 1))));
      succeeded = (strcmp(Var_44, (MR_String) "--arg-file") == 0);
      if (succeeded)
      {
        succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgFile_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
          ExtraArgs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word DummyGlobals_10;
      MR_Word MaybeArgs1_11;
      MR_Word OptionArgs_13;
      MR_Word NonOptionArgs_14;
      MR_Word Variables_16;
      MR_Word AllFlags_35;
      MR_Word Specs_38;
      MR_Word ActualGlobals_39;
      MR_Word Var_69;
      MR_Word Var_36;
      MR_Word Var_37;

      if (!((ExtraArgs_7 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Var_47;
        MR_String Var_49;

        Var_49 = mercury__string__string_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), ((MR_Box) (ExtraArgs_7)));
        Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", Var_49);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_main.real_main_after_expansion\'/3", Var_47);
          return;
        }
      }
      libs__handle_options__generate_default_globals_3_p_0(&DummyGlobals_10);
      make__options_file__read_args_file_5_p_0(DummyGlobals_10, ArgFile_6, &MaybeArgs1_11);
      if ((MaybeArgs1_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OptionArgs_13 = (MR_Word) ((MR_Unsigned) 0U);
        NonOptionArgs_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Args1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgs1_11, (MR_Integer) 0))));

        libs__handle_options__separate_option_args_5_p_0(Args1_12, &OptionArgs_13, &NonOptionArgs_14);
      }
      Variables_16 = make__options_file__options_variables_init_0_f_0();
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), OptionArgs_13);
      AllFlags_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), Var_69);
      libs__handle_options__handle_given_options_7_p_0(AllFlags_35, &Var_36, &Var_37, &Specs_38, &ActualGlobals_39);
      if ((Specs_38 == (MR_Word) ((MR_Unsigned) 0U)))
        top_level__mercury_compile_main__main_after_setup_7_p_0(ActualGlobals_39, (MR_Word) ((MR_Unsigned) 0U), Variables_16, OptionArgs_13, NonOptionArgs_14);
      else
        libs__handle_options__usage_errors_4_p_0(ActualGlobals_39, Specs_38);
    }
    else
    {
      MR_Word ArgsGlobals_19;
      MR_Word MaybeVariables0_20;
      MR_Word Var_55;
      MR_Word OptionArgs_96;
      MR_Word NonOptionArgs_97;
      MR_Word _Errors0_18;

      libs__handle_options__handle_given_options_7_p_0(CmdLineArgs_4, &OptionArgs_96, &NonOptionArgs_97, &_Errors0_18, &ArgsGlobals_19);
      Var_55 = make__options_file__options_variables_init_0_f_0();
      make__options_file__read_options_files_5_p_0(ArgsGlobals_19, Var_55, &MaybeVariables0_20);
      if ((MaybeVariables0_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Variables_99;

        Variables_99 = make__options_file__options_variables_init_0_f_0();
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      else
      {
        MR_Word Variables0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVariables0_20, (MR_Integer) 0))));
        MR_Word MaybeMCFlags0_22;

        make__options_file__lookup_mmc_options_5_p_0(ArgsGlobals_19, Variables0_21, &MaybeMCFlags0_22);
        if ((MaybeMCFlags0_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Variables_115;

          Variables_115 = make__options_file__options_variables_init_0_f_0();
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        else
        {
          MR_Word MCFlags0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMCFlags0_22, (MR_Integer) 0))));
          MR_Word FlagsSpecs_26;
          MR_Word FlagsArgsGlobals_27;
          MR_Word Var_58;
          MR_Word DetectedGradeFlags_121;
          MR_Word Variables_122;
          MR_Word MaybeMCFlags_123;
          MR_Word Var_24;
          MR_Word Var_25;

          Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags0_23, CmdLineArgs_4);
          libs__handle_options__handle_given_options_7_p_0(Var_58, &Var_24, &Var_25, &FlagsSpecs_26, &FlagsArgsGlobals_27);
          if ((FlagsSpecs_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeConfigFile_30;

            libs__globals__lookup_maybe_string_option_3_p_0(FlagsArgsGlobals_27, (MR_Integer) 665, &MaybeConfigFile_30);
            if ((MaybeConfigFile_30 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              DetectedGradeFlags_121 = (MR_Word) ((MR_Unsigned) 0U);
              Variables_122 = make__options_file__options_variables_init_0_f_0();
              make__options_file__lookup_mmc_options_5_p_0(FlagsArgsGlobals_27, Variables_122, &MaybeMCFlags_123);
            }
            else
            {
              MR_String ConfigFile_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfigFile_30, (MR_Integer) 0))));
              MR_Word MaybeVariables_32;

              make__options_file__read_options_file_6_p_0(FlagsArgsGlobals_27, ConfigFile_31, Variables0_21, &MaybeVariables_32);
              if ((MaybeVariables_32 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeMCFlags_123 = (MR_Word) ((MR_Unsigned) 0U);
                DetectedGradeFlags_121 = (MR_Word) ((MR_Unsigned) 0U);
                Variables_122 = make__options_file__options_variables_init_0_f_0();
              }
              else
              {
                MR_Word MaybeMerStdLibDir_33;

                Variables_122 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVariables_32, (MR_Integer) 0))));
                make__options_file__lookup_mmc_options_5_p_0(FlagsArgsGlobals_27, Variables_122, &MaybeMCFlags_123);
                make__options_file__lookup_mercury_stdlib_dir_5_p_0(FlagsArgsGlobals_27, Variables_122, &MaybeMerStdLibDir_33);
                top_level__mercury_compile_main__detect_libgrades_5_p_0(FlagsArgsGlobals_27, MaybeMerStdLibDir_33, &DetectedGradeFlags_121);
              }
            }
          }
          else
          {
            libs__handle_options__usage_errors_4_p_0(FlagsArgsGlobals_27, FlagsSpecs_26);
            DetectedGradeFlags_121 = (MR_Word) ((MR_Unsigned) 0U);
            Variables_122 = make__options_file__options_variables_init_0_f_0();
            MaybeMCFlags_123 = (MR_Word) ((MR_Unsigned) 0U);
          }
          if ((MaybeMCFlags_123 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          else
          {
            MR_Word MCFlags_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMCFlags_123, (MR_Integer) 0))));
            MR_Word AllFlags_79;
            MR_Word Specs_82;
            MR_Word ActualGlobals_83;
            MR_Word Var_84;
            MR_Word Var_76;
            MR_Word Var_77;

            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_78, OptionArgs_96);
            AllFlags_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_121, Var_84);
            libs__handle_options__handle_given_options_7_p_0(AllFlags_79, &Var_76, &Var_77, &Specs_82, &ActualGlobals_83);
            if ((Specs_82 == (MR_Word) ((MR_Unsigned) 0U)))
              top_level__mercury_compile_main__main_after_setup_7_p_0(ActualGlobals_83, DetectedGradeFlags_121, Variables_122, OptionArgs_96, NonOptionArgs_97);
            else
              libs__handle_options__usage_errors_4_p_0(ActualGlobals_83, Specs_82);
          }
        }
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

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 685, &Version_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 684, &Help_15);
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
        MR_Word Stdout_34;
        MR_Word OldOutputStream_35;
        MR_Word Var_19;

        mercury__io__stdout_stream_3_p_0(&Stdout_34);
        mercury__io__set_output_stream_4_p_0(Stdout_34, &OldOutputStream_35);
        libs__handle_options__display_compiler_version_2_p_0();
        mercury__io__set_output_stream_4_p_0(OldOutputStream_35, &Var_19);
      }
      else
      {
        MR_Word OpMode_20;

        libs__globals__get_op_mode_2_p_0(Globals_8, &OpMode_20);
        top_level__mercury_compile_main__do_op_mode_8_p_0(Globals_8, OpMode_20, DetectedGradeFlags_9, OptionVariables_10, OptionArgs_11, Args_12);
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_8_p_0_1(
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
top_level__mercury_compile_main__do_op_mode_8_p_0(
  MR_Word Globals_9,
  MR_Word OpMode_10,
  MR_Word DetectedGradeFlags_11,
  MR_Word OptionVariables_12,
  MR_Word OptionArgs_13,
  MR_Word Args_14)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) OpMode_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpMode_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__make_process_compiler_args_7_p_0(Globals_9, DetectedGradeFlags_11, OptionVariables_12, OptionArgs_13, Args_14);
            break;
          case (MR_Integer) 1:
            parse_tree__source_file_map__write_source_file_map_4_p_0(Globals_9, Args_14);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String StandaloneIntBasename_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), OpMode_10, (MR_Integer) 0))));

          top_level__mercury_compile_main__do_op_mode_standalone_interface_4_p_0(Globals_9, StandaloneIntBasename_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OpModeQuery_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), OpMode_10, (MR_Integer) 0))) & (MR_Integer) 15);

          top_level__mercury_compile_main__do_op_mode_query_4_p_0(Globals_9, OpModeQuery_17);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word OpModeArgs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_10, (MR_Integer) 0))));
          MR_Word FileNamesFromStdin_19;

          libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 681, &FileNamesFromStdin_19);
          succeeded = (Args_14 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (FileNamesFromStdin_19 == (MR_Integer) 0);
          if (succeeded)
            libs__handle_options__usage_2_p_0();
          else
          {
            MR_Word ModulesToLinkCord_39;
            MR_Word ExtraObjFilesCord_40;
            MR_Word ModulesToLink_41;
            MR_Word ExtraObjFiles_42;
            MR_Integer ExitStatus_43;
            MR_Word Statistics_52;

            switch (FileNamesFromStdin_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_53;
                  MR_Word Var_54;

                  Var_53 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  Var_54 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  top_level__mercury_compile_main__process_compiler_cmd_line_args_12_p_0(Globals_9, OpModeArgs_18, DetectedGradeFlags_11, OptionVariables_12, OptionArgs_13, Args_14, Var_53, &ModulesToLinkCord_39, Var_54, &ExtraObjFilesCord_40);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_56;
                  MR_Word Var_57;

                  Var_56 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  Var_57 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0(Globals_9, OpModeArgs_18, DetectedGradeFlags_11, OptionVariables_12, OptionArgs_13, Var_56, &ModulesToLinkCord_39, Var_57, &ExtraObjFilesCord_40);
                }
                break;
            }
            ModulesToLink_41 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_39);
            ExtraObjFiles_42 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_40);
            mercury__io__get_exit_status_3_p_0(&ExitStatus_43);
            succeeded = (ExitStatus_43 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_String FirstModule_44;
              MR_Word Var_60;
              MR_Word Var_61;

              succeeded = ((MR_tag((MR_Word) OpModeArgs_18)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_18, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_61 == (MR_Integer) 2);
                  if (succeeded)
                  {
                    succeeded = (ModulesToLink_41 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      FirstModule_44 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModulesToLink_41, (MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word MainModuleName_46;
                MR_Word Target_47;
                MR_Word Succeeded_48;

                parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_44, &MainModuleName_46);
                libs__globals__get_target_2_p_0(Globals_9, &Target_47);
                switch (Target_47) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_62;

                      {
                        Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[1]));
                        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_8_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ModulesToLink_41));
                        MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (ExtraObjFiles_42));
                      }
                      top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0(ModulesToLink_41, ExtraObjFiles_42, Globals_9, MainModuleName_46, DetectedGradeFlags_11, OptionVariables_12, OptionArgs_13, Var_62, &Succeeded_48);
                    }
                    break;
                  case (MR_Integer) 2:
                    parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_9, MainModuleName_46, &Succeeded_48);
                    break;
                }
                parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_48);
              }
            }
            else
            {
              MR_Word Limited_49;
              MR_Word VerboseErrors_50;
              MR_Word ExtraErrorInfo_51;

              libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_49);
              switch (Limited_49) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "Some error messages were suppressed by \140--limit-error-contexts\' options.\n");
                    mercury__io__write_string_3_p_0((MR_String) "You can see the suppressed messages if you recompile without these options.\n");
                  }
                  break;
              }
              libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 63, &VerboseErrors_50);
              libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_51);
              switch (VerboseErrors_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (ExtraErrorInfo_51) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
              }
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 71, &Statistics_52);
            switch (Statistics_52) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
                }
                break;
            }
          }
        }
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

    top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__831__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_31);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 649, &InvokedByMake_18);
    switch (InvokedByMake_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Builder_19;
          MR_Word Var_25;

          {
            Builder_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_14[0]));
            MR_hl_field(MR_mktag(0), Builder_19, 1) = ((MR_Box) (top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0_1));
            MR_hl_field(MR_mktag(0), Builder_19, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Builder_19, 3) = ((MR_Box) (Compile_15));
          }
          make__util__build_with_module_options_args_12_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Globals_10, ModuleName_11, DetectedGradeFlags_12, OptionVariables_13, OptionArgs_14, (MR_Word) ((MR_Unsigned) 0U), Builder_19, Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &Var_25);
        }
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__link_module_list_6_p_0(Var_48, Var_49, Globals_10, Succeeded_16);
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_cmd_line_args_12_p_0(
  MR_Word Globals_1,
  MR_Word OpModeArgs_2,
  MR_Word DetectedGradeFlags_3,
  MR_Word OptionVariables_4,
  MR_Word OptionArgs_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Modules_0_7,
  MR_Word * STATE_VARIABLE_Modules_8,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ExtraObjFiles_10 = STATE_VARIABLE_ExtraObjFiles_0_9;
      *STATE_VARIABLE_Modules_8 = STATE_VARIABLE_Modules_0_7;
    }
    else
    {
      MR_String Arg_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word ArgModules_37;
      MR_Word ArgExtraObjFiles_38;
      MR_Word STATE_VARIABLE_Modules_49_49;
      MR_Word Var_50;
      MR_Word STATE_VARIABLE_ExtraObjFiles_51_51;
      MR_Word Var_52;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9;

      top_level__mercury_compile_main__process_compiler_arg_10_p_0(Globals_1, OpModeArgs_2, DetectedGradeFlags_3, OptionVariables_4, OptionArgs_5, Arg_32, &ArgModules_37, &ArgExtraObjFiles_38);
      if (!((Args_33 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_50 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_37);
      STATE_VARIABLE_Modules_49_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_7, Var_50);
      Var_52 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_38);
      STATE_VARIABLE_ExtraObjFiles_51_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_9, Var_52);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Args_33;
      next_value_of_STATE_VARIABLE_Modules_0_7 = STATE_VARIABLE_Modules_49_49;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9 = STATE_VARIABLE_ExtraObjFiles_51_51;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Modules_0_7 = next_value_of_STATE_VARIABLE_Modules_0_7;
      STATE_VARIABLE_ExtraObjFiles_0_9 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_10_p_0_1(
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
    MR_Word conv1_Succeeded_16;
    MR_Tuple conv0_HeadVar__8_8;

    top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Succeeded_16, &conv0_HeadVar__8_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Succeeded_16));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__8_8));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_10_p_0(
  MR_Word Globals_11,
  MR_Word OpModeArgs_12,
  MR_Word DetectedGradeFlags_13,
  MR_Word OptionVariables_14,
  MR_Word OptionArgs_15,
  MR_String Arg_16,
  MR_Word * ModulesToLink_17,
  MR_Word * ExtraObjFiles_18)
{
  {
    MR_bool succeeded;
    MR_Word FileOrModule_20;
    MR_Word InvokedByMake_21;
    MR_String FileName_45;

    succeeded = mercury__string__remove_suffix_3_p_0(Arg_16, (MR_String) ".m", &FileName_45);
    if (succeeded)
      {
        FileOrModule_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FileOrModule_20, 0) = ((MR_Box) (FileName_45));
      }
    else
    {
      MR_Word ModuleName_46;

      parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_16, &ModuleName_46);
      {
        FileOrModule_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileOrModule_20, 0) = ((MR_Box) (ModuleName_46));
      }
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 649, &InvokedByMake_21);
    switch (InvokedByMake_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybeTuple_25;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word _Succeeded_24;

          if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
          {
            MR_String FileName_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_20, (MR_Integer) 0))));

            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_48, &Var_31);
          }
          else
            Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_20, (MR_Integer) 0))));
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_13[0]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (top_level__mercury_compile_main__process_compiler_arg_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (OpModeArgs_12));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (FileOrModule_20));
            MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (OptionArgs_15));
          }
          make__util__build_with_module_options_args_12_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]), Globals_11, Var_31, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, (MR_Word) ((MR_Unsigned) 0U), Var_32, &_Succeeded_24, ((MR_Box) ((MR_Integer) 0)), &MaybeTuple_25);
          if ((MaybeTuple_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *ModulesToLink_17 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Tuple Tuple_26 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeTuple_25, (MR_Integer) 0))));

            *ModulesToLink_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tuple_26, (MR_Integer) 0))));
            *ExtraObjFiles_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tuple_26, (MR_Integer) 1))));
          }
        }
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(Globals_11, OpModeArgs_12, OptionArgs_15, FileOrModule_20, ModulesToLink_17, ExtraObjFiles_18);
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0_1(
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
    MR_Word conv1_Succeeded_16;
    MR_Tuple conv0_HeadVar__8_8;

    top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Succeeded_16, &conv0_HeadVar__8_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_Succeeded_16));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__8_8));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0(
  MR_Word Globals_12,
  MR_Word OpModeArgs_13,
  MR_Word DetectedGradeFlags_14,
  MR_Word OptionVariables_15,
  MR_Word OptionArgs_16,
  MR_Word STATE_VARIABLE_Modules_0_27,
  MR_Word * STATE_VARIABLE_Modules_28,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_29,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FileResult_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_27);
    if (!(succeeded))
      mercury__gc__garbage_collect_2_p_0();
    mercury__io__read_line_as_string_3_p_0(&FileResult_20);
    switch (MR_tag((MR_Word) FileResult_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Modules_28 = STATE_VARIABLE_Modules_0_27;
          *STATE_VARIABLE_ExtraObjFiles_30 = STATE_VARIABLE_ExtraObjFiles_0_29;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileResult_20, (MR_Integer) 0))));
          MR_String Arg_22;
          MR_Word ArgModules_23;
          MR_Word ArgExtraObjFiles_24;
          MR_Word STATE_VARIABLE_Modules_41_41;
          MR_Word Var_42;
          MR_Word STATE_VARIABLE_ExtraObjFiles_43_43;
          MR_Word Var_44;
          MR_Word FileOrModule_61;
          MR_Word InvokedByMake_62;
          MR_String FileName_84;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_27;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_29;

          Arg_22 = mercury__string__rstrip_1_f_0(Line_21);
          succeeded = mercury__string__remove_suffix_3_p_0(Arg_22, (MR_String) ".m", &FileName_84);
          if (succeeded)
            {
              FileOrModule_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FileOrModule_61, 0) = ((MR_Box) (FileName_84));
            }
          else
          {
            MR_Word ModuleName_85;

            parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_22, &ModuleName_85);
            {
              FileOrModule_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FileOrModule_61, 0) = ((MR_Box) (ModuleName_85));
            }
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 649, &InvokedByMake_62);
          switch (InvokedByMake_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MaybeTuple_66;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word _Succeeded_65;

                if (((MR_tag((MR_Word) FileOrModule_61)) == (MR_Integer) 0))
                {
                  MR_String FileName_87 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_61, (MR_Integer) 0))));

                  parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_87, &Var_70);
                }
                else
                  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_61, (MR_Integer) 0))));
                {
                  Var_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_13[0]));
                  MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (OpModeArgs_13));
                  MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (FileOrModule_61));
                  MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (OptionArgs_16));
                }
                make__util__build_with_module_options_args_12_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]), Globals_12, Var_70, DetectedGradeFlags_14, OptionVariables_15, OptionArgs_16, (MR_Word) ((MR_Unsigned) 0U), Var_71, &_Succeeded_65, ((MR_Box) ((MR_Integer) 0)), &MaybeTuple_66);
                if ((MaybeTuple_66 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ArgModules_23 = (MR_Word) ((MR_Unsigned) 0U);
                  ArgExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Tuple Tuple_67 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeTuple_66, (MR_Integer) 0))));

                  ArgModules_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tuple_67, (MR_Integer) 0))));
                  ArgExtraObjFiles_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tuple_67, (MR_Integer) 1))));
                }
              }
              break;
            case (MR_Integer) 1:
              top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(Globals_12, OpModeArgs_13, OptionArgs_16, FileOrModule_61, &ArgModules_23, &ArgExtraObjFiles_24);
              break;
          }
          Var_42 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_23);
          STATE_VARIABLE_Modules_41_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_27, Var_42);
          Var_44 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_24);
          STATE_VARIABLE_ExtraObjFiles_43_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_29, Var_44);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_27 = STATE_VARIABLE_Modules_41_41;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_29 = STATE_VARIABLE_ExtraObjFiles_43_43;
          STATE_VARIABLE_Modules_0_27 = next_value_of_STATE_VARIABLE_Modules_0_27;
          STATE_VARIABLE_ExtraObjFiles_0_29 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_29;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FileResult_20, (MR_Integer) 0))));
          MR_String Msg_26;

          mercury__io__error_message_2_p_0(Error_25, &Msg_26);
          mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
          mercury__io__write_string_3_p_0(Msg_26);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          *STATE_VARIABLE_Modules_28 = STATE_VARIABLE_Modules_0_27;
          *STATE_VARIABLE_ExtraObjFiles_30 = STATE_VARIABLE_ExtraObjFiles_0_29;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3(
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
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__write_module_interface_files__write_interface_file_int1_int2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__write_module_interface_files__write_private_interface_file_int0_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(
  MR_Word Globals0_9,
  MR_Word OpModeArgs_10,
  MR_Word OptionArgs_11,
  MR_Word FileOrModule_12,
  MR_Word * ModulesToLink_13,
  MR_Word * ExtraObjFiles_14)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) OpModeArgs_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeArgs_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              if (((MR_tag((MR_Word) FileOrModule_12)) == (MR_Integer) 0))
              {
                MR_String FileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_12, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(Globals0_9, FileName_16);
              }
              else
              {
                MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_12, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(Globals0_9, ModuleName_17);
              }
              *ModulesToLink_13 = (MR_Word) ((MR_Unsigned) 0U);
              *ExtraObjFiles_14 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              if (((MR_tag((MR_Word) FileOrModule_12)) == (MR_Integer) 0))
              {
                MR_String FileName_81 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_12, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(Globals0_9, FileName_81);
              }
              else
              {
                MR_Word ModuleName_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_12, (MR_Integer) 0))));

                parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(Globals0_9, ModuleName_82);
              }
              *ModulesToLink_13 = (MR_Word) ((MR_Unsigned) 0U);
              *ExtraObjFiles_14 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HaveReadModuleMaps0_18;
              MR_Word Globals_19;
              MR_Word ParseTreeSrc_22;
              MR_Word Specs_23;
              MR_Word Errors_24;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word ModuleName_87;
              MR_String Var_20;
              MR_Word Var_21;
              MR_Word _HaveReadModuleMaps_25;

              Var_67 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]));
              Var_68 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[3]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]));
              Var_69 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[5]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[6]));
              {
                HaveReadModuleMaps0_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, 0) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, 1) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, 2) = ((MR_Box) (Var_69));
              }
              top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_9, &Globals_19, FileOrModule_12, &ModuleName_87, &Var_20, (MR_Integer) 1, &Var_21, &ParseTreeSrc_22, &Specs_23, &Errors_24, HaveReadModuleMaps0_18, &_HaveReadModuleMaps_25);
              parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_23, Globals_19);
              succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(Globals_19, Errors_24);
              if (!(succeeded))
              {
                MR_String OutputFileName_26;

                parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_19, (MR_Integer) 0, (MR_String) ".ugly", ModuleName_87, &OutputFileName_26);
                parse_tree__parse_tree_out__output_parse_tree_src_5_p_0(Globals_19, OutputFileName_26, ParseTreeSrc_22);
              }
              *ModulesToLink_13 = (MR_Word) ((MR_Unsigned) 0U);
              *ExtraObjFiles_14 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InterfaceFile_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeArgs_10, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ReturnTimestamp_28;
          MR_Word MaybeTimestamp_30;
          MR_Word Specs0_31;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_String FileName_92;
          MR_Word ModuleName_93;
          MR_Word HaveReadModuleMaps0_94;
          MR_Word Globals_95;
          MR_Word ParseTreeSrc_96;
          MR_Word Errors_98;
          MR_Word _HaveReadModuleMaps_89;

          switch (InterfaceFile_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenerateVersionNumbers_29;

                libs__globals__lookup_bool_option_3_p_0(Globals0_9, (MR_Integer) 132, &GenerateVersionNumbers_29);
                ReturnTimestamp_28 = top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(GenerateVersionNumbers_29);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word GenerateVersionNumbers_88;

                libs__globals__lookup_bool_option_3_p_0(Globals0_9, (MR_Integer) 132, &GenerateVersionNumbers_88);
                ReturnTimestamp_28 = top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(GenerateVersionNumbers_88);
              }
              break;
            case (MR_Integer) 2:
              ReturnTimestamp_28 = (MR_Integer) 1;
              break;
          }
          Var_56 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]));
          Var_57 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[3]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]));
          Var_58 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[5]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[6]));
          {
            HaveReadModuleMaps0_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_94, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_94, 1) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_94, 2) = ((MR_Box) (Var_58));
          }
          top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_9, &Globals_95, FileOrModule_12, &ModuleName_93, &FileName_92, ReturnTimestamp_28, &MaybeTimestamp_30, &ParseTreeSrc_96, &Specs0_31, &Errors_98, HaveReadModuleMaps0_94, &_HaveReadModuleMaps_89);
          succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(Globals_95, Errors_98);
          if (!(succeeded))
          {
            MR_Word RawCompUnits_32;
            MR_Word Specs_90;

            parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_96, &RawCompUnits_32, Specs0_31, &Specs_90);
            parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_90, Globals_95);
            switch (InterfaceFile_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_65;
                  MR_Box conv0_STATE_VARIABLE_IO_42;

                  {
                    Var_65 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0]));
                    MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Globals0_9));
                    MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (FileName_92));
                    MR_hl_field(MR_mktag(0), Var_65, 5) = ((MR_Box) (ModuleName_93));
                    MR_hl_field(MR_mktag(0), Var_65, 6) = ((MR_Box) (MaybeTimestamp_30));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, RawCompUnits_32, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_42);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_63;
                  MR_Box conv1_STATE_VARIABLE_IO_42;

                  {
                    Var_63 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0]));
                    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Globals0_9));
                    MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (FileName_92));
                    MR_hl_field(MR_mktag(0), Var_63, 5) = ((MR_Box) (ModuleName_93));
                    MR_hl_field(MR_mktag(0), Var_63, 6) = ((MR_Box) (MaybeTimestamp_30));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, RawCompUnits_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_42);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_61;
                  MR_Box conv2_STATE_VARIABLE_IO_42;

                  {
                    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_12[0]));
                    MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Globals0_9));
                    MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (FileName_92));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, RawCompUnits_32, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_42);
                }
                break;
            }
          }
          *ModulesToLink_13 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_14 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OpModeAugment_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_10, (MR_Integer) 0))));
          MR_Word Smart0_34;
          MR_Word DisableSmart_35;
          MR_Word Smart_36;
          MR_Word ModulesToRecompile_39;
          MR_Word HaveReadModuleMaps_40;
          MR_Word Globals_108;
          MR_Word Var_52;

          libs__globals__lookup_bool_option_3_p_0(Globals0_9, (MR_Integer) 131, &Smart0_34);
          libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_35);
          switch (DisableSmart_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Globals_108 = Globals0_9;
                Smart_36 = Smart0_34;
              }
              break;
            case (MR_Integer) 1:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 131, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals0_9, &Globals_108);
                Smart_36 = (MR_Integer) 0;
              }
              break;
          }
          switch (Smart_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_50;

                Var_48 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]));
                Var_49 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[3]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]));
                Var_50 = mercury__map__init_0_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[5]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[6]));
                {
                  HaveReadModuleMaps_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HaveReadModuleMaps_40, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(MR_mktag(0), HaveReadModuleMaps_40, 1) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(0), HaveReadModuleMaps_40, 2) = ((MR_Box) (Var_50));
                }
                ModulesToRecompile_39 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word FindTargetFiles_37;
                MR_Word FindTimestampFiles_38;
                MR_Word ModuleName_103;

                if (((MR_tag((MR_Word) FileOrModule_12)) == (MR_Integer) 0))
                {
                  MR_String FileName_100 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_12, (MR_Integer) 0))));

                  parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_100, &ModuleName_103);
                }
                else
                  ModuleName_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_12, (MR_Integer) 0))));
                top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0(Globals_108, &FindTargetFiles_37);
                top_level__mercury_compile_main__find_timestamp_files_2_p_0(Globals_108, &FindTimestampFiles_38);
                recompilation__check__should_recompile_8_p_0(Globals_108, ModuleName_103, FindTargetFiles_37, FindTimestampFiles_38, &ModulesToRecompile_39, &HaveReadModuleMaps_40);
              }
              break;
          }
          succeeded = (ModulesToRecompile_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModulesToRecompile_39, (MR_Integer) 0))));
            succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            *ModulesToLink_13 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_14 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
            top_level__mercury_compile_main__read_augment_and_process_module_10_p_0(Globals_108, OpModeAugment_33, OptionArgs_11, FileOrModule_12, ModulesToRecompile_39, HaveReadModuleMaps_40, ModulesToLink_13, ExtraObjFiles_14);
        }
        break;
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

        libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 4, &HaltSyntax_5);
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
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TimestampFiles_10;

    top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_10));
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1239__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0(
  MR_Word Globals0_11,
  MR_Word OpModeAugment_12,
  MR_Word OptionArgs_13,
  MR_Word FileOrModule_14,
  MR_Word MaybeModulesToRecompile_15,
  MR_Word HaveReadModuleMap0_16,
  MR_Word * ModulesToLink_17,
  MR_Word * ExtraObjFiles_18)
{
  {
    MR_bool succeeded;
    MR_Word Globals_22;
    MR_Word ModuleName_23;
    MR_String FileName_24;
    MR_Word MaybeTimestamp_25;
    MR_Word ParseTreeSrc_26;
    MR_Word Specs0_27;
    MR_Word Errors_28;
    MR_Word HaveReadModuleMaps_29;

    switch (MR_tag((MR_Word) OpModeAugment_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_12)) {
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
              MR_Word ReportCmdLineArgsDotErr_21;

              libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 70, &ReportCmdLineArgsDotErr_21);
              top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(ReportCmdLineArgsDotErr_21, OptionArgs_13, (MR_Word) ((MR_Unsigned) 0U));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ReportCmdLineArgsDotErr_21;

          libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 70, &ReportCmdLineArgsDotErr_21);
          top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(ReportCmdLineArgsDotErr_21, OptionArgs_13, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_11, &Globals_22, FileOrModule_14, &ModuleName_23, &FileName_24, (MR_Integer) 0, &MaybeTimestamp_25, &ParseTreeSrc_26, &Specs0_27, &Errors_28, HaveReadModuleMap0_16, &HaveReadModuleMaps_29);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_28);
    if (succeeded)
    {
      {
        MR_Word HaltSyntax_73;

        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 4, &HaltSyntax_73);
        succeeded = (HaltSyntax_73 == (MR_Integer) 1);
      }
      if (!(succeeded))
      {
        MR_Word FatalErrors_74;
        MR_Word Var_75;

        Var_75 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_28, Var_75, &FatalErrors_74);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_74);
      }
    }
    if (succeeded)
    {
      parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs0_27, Globals_22);
      *ModulesToLink_17 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_Word Var_55;
      MR_Word CompilationTarget_80;
      MR_String TimestampSuffix_81;
      MR_Word Var_69;

      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_26, &RawCompUnits0_30, Specs0_27, &Specs1_31);
      if ((MaybeModulesToRecompile_15 == (MR_Word) ((MR_Unsigned) 0U)))
        RawCompUnitsToCompile_38 = RawCompUnits0_30;
      else
      {
        MR_Word ModulesToRecompile_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModulesToRecompile_15, (MR_Integer) 0))));
        MR_Word ToRecompile_33;

        {
          ToRecompile_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ToRecompile_33, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_1));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ToRecompile_33, 3) = ((MR_Box) (ModulesToRecompile_32));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), ToRecompile_33, RawCompUnits0_30, &RawCompUnitsToCompile_38);
      }
      Var_55 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[2]), RawCompUnits0_30);
      RawCompUnitNames_39 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_55);
      mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_23)), RawCompUnitNames_39, &NestedCompUnitNames_40);
      libs__globals__get_target_2_p_0(Globals_22, &CompilationTarget_80);
      TimestampSuffix_81 = ((&top_level__mercury_compile_main_vector_common_7[8 + CompilationTarget_80]))->top_level__mercury_compile_main__vector_common_type_7_0__vct_7_f_0;
      {
        FindTimestampFiles_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_3));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 3) = ((MR_Box) (Globals_22));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_41, 4) = ((MR_Box) (TimestampSuffix_81));
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 137, &TraceProf_42);
      succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_23);
      if (succeeded)
      {
        Var_69 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_23, Var_69);
        if (succeeded)
          succeeded = (TraceProf_42 == (MR_Integer) 1);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word GlobalsNoTrace0_43;

        libs__globals__set_option_4_p_0((MR_Integer) 292, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals_22, &GlobalsNoTrace0_43);
        libs__globals__set_trace_level_none_2_p_0(GlobalsNoTrace0_43, &GlobalsToUse_45);
      }
      else
        GlobalsToUse_45 = Globals_22;
      top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0(GlobalsToUse_45, OpModeAugment_12, FileName_24, ModuleName_23, MaybeTimestamp_25, NestedCompUnitNames_40, HaveReadModuleMaps_29, FindTimestampFiles_41, RawCompUnitsToCompile_38, Specs1_31, ModulesToLink_17, ExtraObjFiles_18);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv4_ModuleToLink_6;

    top_level__mercury_compile_main__module_to_link_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_ModuleToLink_6);
    *wrapper_arg_2 = ((MR_Box) (conv4_ModuleToLink_6));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_1(
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
    MR_Word conv1_ExtraObjFiles_24;
    MR_Word conv0_STATE_VARIABLE_Specs_38;

    top_level__mercury_compile_main__augment_and_process_module_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), &conv1_ExtraObjFiles_24, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_38);
    *wrapper_arg_2 = ((MR_Box) (conv1_ExtraObjFiles_24));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_38));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0(
  MR_Word Globals_15,
  MR_Word OpModeAugment_16,
  MR_String FileName_17,
  MR_Word SourceFileModuleName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word NestedSubModules_20,
  MR_Word HaveReadModuleMaps_21,
  MR_Word FindTimestampFiles_22,
  MR_Word RawCompUnits_23,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26)
{
  {
    MR_Word ExtraObjFileLists_28;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Box conv3_STATE_VARIABLE_Specs_33_33;
    MR_Box conv2_STATE_VARIABLE_IO_34_34;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Globals_15));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (OpModeAugment_16));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (FileName_17));
      MR_hl_field(MR_mktag(0), Var_32, 6) = ((MR_Box) (SourceFileModuleName_18));
      MR_hl_field(MR_mktag(0), Var_32, 7) = ((MR_Box) (MaybeTimestamp_19));
      MR_hl_field(MR_mktag(0), Var_32, 8) = ((MR_Box) (NestedSubModules_20));
      MR_hl_field(MR_mktag(0), Var_32, 9) = ((MR_Box) (HaveReadModuleMaps_21));
      MR_hl_field(MR_mktag(0), Var_32, 10) = ((MR_Box) (FindTimestampFiles_22));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[7]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, RawCompUnits_23, &ExtraObjFileLists_28, ((MR_Box) (STATE_VARIABLE_Specs_0_29)), &conv3_STATE_VARIABLE_Specs_33_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_34_34);
    STATE_VARIABLE_Specs_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_33_33));
    parse_tree__error_util__write_error_specs_ignore_4_p_0(STATE_VARIABLE_Specs_33_33, Globals_15);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_6[1]), RawCompUnits_23, ModulesToLink_25);
    mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_28, ExtraObjFiles_26);
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_47)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) FileOrModuleName_17)) == (MR_Integer) 0))
    {
      MR_String FileName_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModuleName_17, (MR_Integer) 0))));
      MR_Word DefaultModuleName_39;
      MR_Word Verbose_146;
      MR_Word Stats_154;
      MR_Word MaybeTimestampPrime_139;
      MR_Word ParseTreeSrcPrime_140;
      MR_Word SpecsPrime_141;
      MR_Word ErrorsPrime_142;
      MR_Word Var_57;
      MR_String Var_40;

      *FileNameDotM_19 = mercury__string__f_43_43_2_f_0(FileName_38, (MR_String) ".m");
      libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 61, &Verbose_146);
      libs__file_util__maybe_write_string_4_p_0(Verbose_146, (MR_String) "% Parsing file \140");
      libs__file_util__maybe_write_string_4_p_0(Verbose_146, *FileNameDotM_19);
      libs__file_util__maybe_write_string_4_p_0(Verbose_146, (MR_String) "\' and imported interfaces...\n");
      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_38, &DefaultModuleName_39);
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0))));
      succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(Var_57, DefaultModuleName_39, ReturnTimestamp_20, &Var_40, &MaybeTimestampPrime_139, &ParseTreeSrcPrime_140, &SpecsPrime_141, &ErrorsPrime_142);
      if (succeeded)
      {
        MR_Word Var_58;
        MR_Word HaveReadModuleMapSrc0_136;
        MR_Word HaveReadModuleMapSrc_137;
        MR_Word Var_167;
        MR_Word Var_168;

        *Globals_16 = Globals0_15;
        HaveReadModuleMapSrc0_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0))));
        *ModuleName_18 = DefaultModuleName_39;
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (*ModuleName_18));
          MR_hl_field(MR_mktag(0), Var_58, 1) = NULL;
        }
        mercury__map__delete_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), ((MR_Box) (Var_58)), HaveReadModuleMapSrc0_136, &HaveReadModuleMapSrc_137);
        Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1))));
        Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HaveReadModuleMaps_47 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_137));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_168));
        }
        *MaybeTimestamp_21 = MaybeTimestampPrime_139;
        *ParseTreeSrc_22 = ParseTreeSrcPrime_140;
        *Specs_23 = SpecsPrime_141;
        *Errors_24 = ErrorsPrime_142;
      }
      else
      {
        MR_Word Smart_41;
        MR_Word Var_63;
        MR_Word DisableSmart_138;

        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_63, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_20));
        }
        parse_tree__read_modules__read_module_src_from_file_12_p_0(Globals0_15, FileName_38, *FileNameDotM_19, (MR_String) "Reading file", (MR_Integer) 1, Var_63, MaybeTimestamp_21, ParseTreeSrc_22, Specs_23, Errors_24);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_138);
        switch (DisableSmart_138) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Globals_16 = Globals0_15;
            break;
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 131, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals0_15, Globals_16);
            }
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 131, &Smart_41);
        *ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeSrc_22, (MR_Integer) 0))));
        succeeded = (Smart_41 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*ModuleName_18, DefaultModuleName_39);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Warn_44;

          libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 29, &Warn_44);
          switch (Warn_44) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Pieces_45;
                MR_Word Var_73;
                MR_Word Var_76;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_80;
                MR_Word Var_83;
                MR_Word Var_84;

                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (*FileNameDotM_19));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (*ModuleName_18));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[20])));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[32])));
                  MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
                }
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
                }
                {
                  Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[31])));
                  MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
                }
                {
                  Pieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[30])));
                  MR_hl_field(MR_mktag(1), Pieces_45, 1) = ((MR_Box) (Var_73));
                }
                parse_tree__error_util__write_error_pieces_plain_4_p_0(*Globals_16, Pieces_45);
                libs__compiler_util__record_warning_3_p_0(*Globals_16);
              }
              break;
          }
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
        *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_0_46;
      }
      libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 72, &Stats_154);
      libs__file_util__maybe_report_stats_3_p_0(Stats_154);
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
      MR_Word Var_120;

      *ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModuleName_17, (MR_Integer) 0))));
      libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 61, &Verbose_27);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, (MR_String) "% Parsing module \140");
      ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*ModuleName_18);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, ModuleNameString_28);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, (MR_String) "\' and imported interfaces...\n");
      Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0))));
      succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(Var_120, *ModuleName_18, ReturnTimestamp_20, &FileNameDotMPrime_29, &MaybeTimestampPrime_30, &ParseTreeSrcPrime_31, &SpecsPrime_32, &ErrorsPrime_33);
      if (succeeded)
      {
        MR_Word HaveReadModuleMapSrc0_34;
        MR_Word HaveReadModuleMapSrc_35;
        MR_Word Var_121;
        MR_Word Var_160;
        MR_Word Var_161;

        *Globals_16 = Globals0_15;
        HaveReadModuleMapSrc0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0))));
        {
          Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (*ModuleName_18));
          MR_hl_field(MR_mktag(0), Var_121, 1) = NULL;
        }
        mercury__map__delete_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), ((MR_Box) (Var_121)), HaveReadModuleMapSrc0_34, &HaveReadModuleMapSrc_35);
        Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1))));
        Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HaveReadModuleMaps_47 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_35));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_161));
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
        MR_Word Var_128;

        {
          Var_128 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_128, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_20));
        }
        parse_tree__read_modules__read_module_src_14_p_0(Globals0_15, (MR_String) "Reading module", (MR_Integer) 1, (MR_Integer) 1, *ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), FileNameDotM_19, Var_128, MaybeTimestamp_21, ParseTreeSrc_22, Specs_23, Errors_24);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_36);
        switch (DisableSmart_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Globals_16 = Globals0_15;
            break;
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 131, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1])), Globals0_15, Globals_16);
            }
            break;
        }
        *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_0_46;
      }
      libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 71, &Stats_37);
      libs__file_util__maybe_report_stats_3_p_0(Stats_37);
    }
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

    top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TimestampFiles_10);
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
    MR_String TimestampSuffix_6;

    libs__globals__get_target_2_p_0(Globals_3, &CompilationTarget_5);
    TimestampSuffix_6 = ((&top_level__mercury_compile_main_vector_common_7[4 + CompilationTarget_5]))->top_level__mercury_compile_main__vector_common_type_7_0__vct_7_f_0;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *FindTimestampFiles_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__find_timestamp_files_2_p_0_1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Globals_3));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TimestampSuffix_6));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TargetFiles_10;

    top_level__mercury_compile_main__usual_find_target_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TargetFiles_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_TargetFiles_10));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0(
  MR_Word Globals_3,
  MR_Word * FindTargetFiles_4)
{
  {
    MR_Word CompilationTarget_5;
    MR_String TargetSuffix_6;

    libs__globals__get_target_2_p_0(Globals_3, &CompilationTarget_5);
    TargetSuffix_6 = ((&top_level__mercury_compile_main_vector_common_7[0 + CompilationTarget_5]))->top_level__mercury_compile_main__vector_common_type_7_0__vct_7_f_0;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *FindTargetFiles_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0_1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Globals_3));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TargetSuffix_6));
    }
  }
}

static MR_Word MR_CALL 
top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 538, &CC_Type_10);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 513, &CC_8);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 546, &CSC_11);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 539, &CSC_Type_12);
        mercury__io__stdout_stream_3_p_0(&StdOut_82);
        Var_55 = mercury__string__f_43_43_2_f_0(CSC_Type_12, (MR_String) "\n");
        mercury__io__write_string_4_p_0(StdOut_82, Var_55);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word StdOut_83;

        mercury__io__stdout_stream_3_p_0(&StdOut_83);
        backend_libs__compile_target_code__output_grade_defines_4_p_0(Globals_5, StdOut_83);
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

        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 659, &LibGrades_17);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 597, &LinkCommand_13);
        mercury__io__stdout_stream_3_p_0(&Stdout_14);
        mercury__io__write_string_4_p_0(Stdout_14, LinkCommand_13);
        mercury__io__nl_3_p_0(Stdout_14);
      }
      break;
    case (MR_Integer) 8:
      {
        MR_String LinkCommand_84;
        MR_Word Stdout_85;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 598, &LinkCommand_84);
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
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 686, &TargetArch_20);
        Var_25 = mercury__string__f_43_43_2_f_0(TargetArch_20, (MR_String) "\n");
        mercury__io__write_string_4_p_0(StdOut_92, Var_25);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_standalone_interface_4_p_0(
  MR_Word Globals_5,
  MR_String StandaloneIntBasename_6)
{
  {
    MR_Word Target_8;

    libs__globals__get_target_2_p_0(Globals_5, &Target_8);
    switch (Target_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__make_standalone_interface_4_p_0(Globals_5, StandaloneIntBasename_6);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word NotRequiredMsg_9;
          MR_Word Var_36;
          MR_Word Var_39;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_String Var_44;

          Var_44 = libs__globals__compilation_target_string_1_f_0(Target_8);
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[27])));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[26])));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
          }
          {
            NotRequiredMsg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NotRequiredMsg_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[25])));
            MR_hl_field(MR_mktag(1), NotRequiredMsg_9, 1) = ((MR_Box) (Var_36));
          }
          parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_5, NotRequiredMsg_9);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word NYIMsg_10;
          MR_Word Var_16;
          MR_Word Var_19;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_String Var_24;

          Var_24 = libs__globals__compilation_target_string_1_f_0(Target_8);
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Var_24));
          }
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])));
          }
          {
            Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[29])));
            MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[26])));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
          }
          {
            NYIMsg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NYIMsg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), NYIMsg_10, 1) = ((MR_Box) (Var_16));
          }
          parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_5, NYIMsg_10);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        break;
    }
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 658, &Detect_10);
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 61, &Verbose_11);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 62, &VeryVerbose_13);
          libs__globals__lookup_maybe_string_option_3_p_0(Globals_6, (MR_Integer) 574, &MaybeStdLibDir_14);
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
