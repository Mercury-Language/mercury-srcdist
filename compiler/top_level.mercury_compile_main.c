/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version 2018-04-30
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
#include "backend_libs.foreign.mih"
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
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile_main____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

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
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1869__1_1_p_0(
  MR_Char LambdaHeadVar__1_22);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1192__1_2_p_0(
  MR_Word ModulesToRecompile_34,
  MR_Word LambdaHeadVar__1_58);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__781__1_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_49_95_95_49_95_95_91_51_93_95_48_8_p_0(
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
  MR_Word Globals_13,
  MR_Word OpModeAugment_14,
  MR_Word ModuleAndImports_15,
  MR_Word NestedSubModules_16,
  MR_Word FindTimestampFiles_17,
  MR_Word * ExtraObjFiles_18,
  MR_Word STATE_VARIABLE_DumpInfo_0_43,
  MR_Word * STATE_VARIABLE_DumpInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

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
  MR_Word STATE_VARIABLE_DumpInfo_0_72,
  MR_Word * STATE_VARIABLE_DumpInfo_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75);

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
  MR_Word Imports0_14,
  MR_Word * Imports_15,
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
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * ModuleToLink_6);

static void MR_CALL 
top_level__mercury_compile_main__apply_process_module_7_p_0(
  MR_Word ProcessModule_8,
  MR_String FileName_9,
  MR_Word ModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__call_make_private_interface_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__call_make_short_interface_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word HeadVar__3_10,
  MR_Word HeadVar__4_11,
  MR_Word RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__call_make_interface_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit_12);

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
top_level__mercury_compile_main__do_detect_libgrade_9_p_0(
  MR_Word VeryVerbose_10,
  MR_String DirName_11,
  MR_String FileName_12,
  MR_Word FileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * STATE_VARIABLE_GradeOpts_21);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
  MR_String DirName_11,
  MR_String FileName_12,
  MR_Word FileType_13,
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
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26);

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_14_p_0(
  MR_Word Globals0_15,
  MR_Word * Globals_16,
  MR_Word FileOrModuleName_17,
  MR_Word * ModuleName_18,
  MR_String * SourceFileName_19,
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[2][10];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_12[1][13];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_13[1][11];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_14[1][7];


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mmc -f *.m"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a module name to file name mapping is created"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work unless"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[8])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not yet supported with target language"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module name does not match file name: "))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains module"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0])),
    ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[2])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[3])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[3])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_12[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_13[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_14[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile_main____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_main__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile_main____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile_main____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_compile_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (top_level__mercury_compile_main____Unify____compile_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____compile_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "compile",
  {     NULL },
  {     (MR_PseudoTypeInfo) &top_level__mercury_compile_main____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0 = {
  (MR_String) "fm_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1 = {
  (MR_String) "fm_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1
};

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_main____Unify____file_or_module_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____file_or_module_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "file_or_module",
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0 },
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0
};

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0 = {
  (MR_String) "do_not_write_d_file",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1 = {
  (MR_String) "write_d_file",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "maybe_write_d_file",
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0 },
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__enum_value_ordered_maybe_write_d_file_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0
};

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1869__1_1_p_0(
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
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1192__1_2_p_0(
  MR_Word ModulesToRecompile_34,
  MR_Word LambdaHeadVar__1_58)
{
  {
    MR_bool succeeded;
    MR_Word RawCompUnitModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_58, (MR_Integer) 0)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_58, (MR_Integer) 1)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_58, (MR_Integer) 2)));

    succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (RawCompUnitModuleName_37)), ModulesToRecompile_34);
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__781__1_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_49_95_95_49_95_95_91_51_93_95_48_8_p_0(Compile_15, LambdaHeadVar__1_29, LambdaHeadVar__3_31);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_49_95_95_49_95_95_91_51_93_95_48_8_p_0(
  MR_Word Compile_15,
  MR_Word LambdaHeadVar__1_29,
  MR_Word * LambdaHeadVar__3_31)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Compile_15, (MR_Integer) 1)));
    MR_Box conv2_LambdaHeadVar__3_31;
    MR_Box conv1_LambdaHeadVar__7_35;

    func_0(((MR_Box) Compile_15), ((MR_Box) (LambdaHeadVar__1_29)), &conv2_LambdaHeadVar__3_31, ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__7_35);
    *LambdaHeadVar__3_31 = ((MR_Word) conv2_LambdaHeadVar__3_31);
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_String Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

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
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
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

    mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_3[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
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
    MR_Word TypeCtorInfo_50_50;
    MR_Word ModuleName_27;
    MR_Word NestedSubModules_30;
    MR_Word ModuleAndImports_31;
    MR_Word ImportedSpecs_33;
    MR_Word Errors_34;
    MR_Word FatalErrors_35;
    MR_Word STATE_VARIABLE_Specs_41_41;
    MR_Word STATE_VARIABLE_Specs_43_43;
    MR_Word Var_44;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word _AugCompUnit_32;

    parse_tree__check_raw_comp_unit__check_for_no_exports_4_p_0(Globals_15, RawCompUnit_23, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_41_41);
    ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 0)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 1)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_23, (MR_Integer) 2)));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_27, SourceFileModuleName_18);
    if (succeeded)
      NestedSubModules_30 = NestedSubModules0_20;
    else
    {
      mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &NestedSubModules_30);
    }
    parse_tree__modules__grab_imported_modules_10_p_0(Globals_15, SourceFileName_17, SourceFileModuleName_18, MaybeTimestamp_19, NestedSubModules_30, RawCompUnit_23, HaveReadModuleMaps_21, &ModuleAndImports_31);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_31, &_AugCompUnit_32, &ImportedSpecs_33, &Errors_34);
    STATE_VARIABLE_Specs_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ImportedSpecs_33, STATE_VARIABLE_Specs_41_41);
    Var_44 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    TypeCtorInfo_50_50 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
    mercury__set__intersect_3_p_0(TypeCtorInfo_50_50, Errors_34, Var_44, &FatalErrors_35);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_50_50, FatalErrors_35);
    if (succeeded)
    {
      MR_Word Var_36;

      top_level__mercury_compile_main__process_augmented_module_12_p_0(Globals_15, OpModeAugment_16, ModuleAndImports_31, NestedSubModules_30, FindTimestampFiles_22, ExtraObjFiles_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_36, STATE_VARIABLE_Specs_43_43, STATE_VARIABLE_Specs_38);
    }
    else
    {
      *ExtraObjFiles_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_43_43;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_12_p_0(
  MR_Word Globals_13,
  MR_Word OpModeAugment_14,
  MR_Word ModuleAndImports_15,
  MR_Word NestedSubModules_16,
  MR_Word FindTimestampFiles_17,
  MR_Word * ExtraObjFiles_18,
  MR_Word STATE_VARIABLE_DumpInfo_0_43,
  MR_Word * STATE_VARIABLE_DumpInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_bool succeeded;
    MR_Word WriteDFile_22;
    MR_Word HLDS1_24;
    MR_Word QualInfo_25;
    MR_Word MaybeTimestampMap_26;
    MR_Word UndefTypes_27;
    MR_Word UndefModes_28;
    MR_Word PreHLDSErrors_29;
    MR_Word FrontEndErrors_30;
    MR_Word HLDS20_31;
    MR_Word STATE_VARIABLE_DumpInfo_49_49;
    MR_Word STATE_VARIABLE_Specs_50_50;
    MR_Word STATE_VARIABLE_DumpInfo_52_52;
    MR_Word STATE_VARIABLE_Specs_53_53;
    MR_Word Var_55;

    switch (MR_tag((MR_Word) OpModeAugment_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            WriteDFile_22 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            WriteDFile_22 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            WriteDFile_22 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            WriteDFile_22 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        WriteDFile_22 = (MR_Integer) 1;
        break;
    }
    top_level__mercury_compile_main__pre_hlds_pass_16_p_0(Globals_13, OpModeAugment_14, WriteDFile_22, ModuleAndImports_15, &HLDS1_24, &QualInfo_25, &MaybeTimestampMap_26, &UndefTypes_27, &UndefModes_28, &PreHLDSErrors_29, STATE_VARIABLE_DumpInfo_0_43, &STATE_VARIABLE_DumpInfo_49_49, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_50_50);
    top_level__mercury_compile_front_end__frontend_pass_14_p_0(OpModeAugment_14, QualInfo_25, UndefTypes_27, UndefModes_28, PreHLDSErrors_29, &FrontEndErrors_30, HLDS1_24, &HLDS20_31, STATE_VARIABLE_DumpInfo_49_49, &STATE_VARIABLE_DumpInfo_52_52, STATE_VARIABLE_Specs_50_50, &STATE_VARIABLE_Specs_53_53);
    succeeded = (PreHLDSErrors_29 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (FrontEndErrors_30 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_55 = parse_tree__error_util__contains_errors_2_f_0(Globals_13, STATE_VARIABLE_Specs_53_53);
        succeeded = (Var_55 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Verbose_32;
      MR_Word Stats_33;
      MR_Word HLDS21_34;

      libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 58, &Verbose_32);
      libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 68, &Stats_33);
      top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(Verbose_32, Stats_33, HLDS20_31, &HLDS21_34);
      switch (MR_tag((MR_Word) OpModeAugment_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpModeAugment_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_52_52;
                *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_53_53;
              }
              break;
            case (MR_Integer) 1:
              {
                top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(HLDS21_34, STATE_VARIABLE_DumpInfo_52_52, STATE_VARIABLE_DumpInfo_44);
                *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_53_53;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word HLDS22_40;

                top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(Globals_13, Verbose_32, Stats_33, HLDS21_34, &HLDS22_40);
                top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(HLDS22_40, STATE_VARIABLE_DumpInfo_52_52, STATE_VARIABLE_DumpInfo_44);
                *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_53_53;
              }
              break;
            case (MR_Integer) 3:
              {
                check_hlds__xml_documentation__xml_documentation_3_p_0(HLDS21_34);
                *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_52_52;
                *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_53_53;
              }
              break;
            case (MR_Integer) 4:
              {
                *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_52_52;
                *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_53_53;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word UnusedArgs_35;

                libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 11, &UnusedArgs_35);
                switch (UnusedArgs_35) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NoOptUnusedArgsGlobals_36;
                      MR_Word HLDS21a_37;
                      MR_Word _UnusedArgsInfos_38;
                      MR_Word _HLDS22_39;

                      libs__globals__set_option_4_p_0((MR_Integer) 359, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), Globals_13, &NoOptUnusedArgsGlobals_36);
                      hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_36, HLDS21_34, &HLDS21a_37);
                      top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(Verbose_32, Stats_33, &_UnusedArgsInfos_38, HLDS21a_37, &_HLDS22_39);
                    }
                    break;
                }
                *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_52_52;
                *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_53_53;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OpModeCodeGen_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpModeAugment_14, (MR_Integer) 0)));
            MR_Word HLDS22_77;

            top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(Globals_13, Verbose_32, Stats_33, HLDS21_34, &HLDS22_77);
            top_level__mercury_compile_main__after_front_end_passes_13_p_0(Globals_13, OpModeCodeGen_41, NestedSubModules_16, FindTimestampFiles_17, MaybeTimestampMap_26, HLDS22_77, ExtraObjFiles_18, STATE_VARIABLE_Specs_53_53, STATE_VARIABLE_Specs_46, STATE_VARIABLE_DumpInfo_52_52, STATE_VARIABLE_DumpInfo_44);
          }
          break;
      }
    }
    else
    {
      MR_Integer ExitStatus_42;

      mercury__io__get_exit_status_3_p_0(&ExitStatus_42);
      succeeded = (ExitStatus_42 == (MR_Integer) 0);
      if (succeeded)
      {
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      else
      {
      }
      *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_53_53;
      *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_52_52;
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

    parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 58, &Verbose_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 68, &Stats_25);
    top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(Verbose_24, Stats_25, STATE_VARIABLE_HLDS_0_54, &STATE_VARIABLE_HLDS_63_63);
    top_level__mercury_compile_middle_passes__middle_pass_6_p_0(STATE_VARIABLE_HLDS_63_63, &STATE_VARIABLE_HLDS_65_65, STATE_VARIABLE_DumpInfo_0_57, &STATE_VARIABLE_DumpInfo_66_66);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 266, &HighLevelCode_26);
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
                  *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, NewSpecs_124, STATE_VARIABLE_Specs_0_55);
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
                  *ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
            *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, NewSpecs_36, STATE_VARIABLE_Specs_0_55);
            top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(STATE_VARIABLE_HLDS_65_65, MLDS_35, &Succeeded_37);
            *ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_65_65;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ELDS_51;

            top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(STATE_VARIABLE_HLDS_65_65, &ELDS_51, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_58);
            top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(STATE_VARIABLE_HLDS_65_65, ELDS_51, &Succeeded_37);
            *ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
            *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, NewSpecs_118, STATE_VARIABLE_Specs_0_55);
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
                        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (JavaFile_41));
                        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
            *ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindTimestampFiles_17, (MR_Integer) 1)));
            func_0(((MR_Box) FindTimestampFiles_17), ((MR_Box) (ModuleName_28)), &conv2_TimestampFiles_52, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_111_111);
            TimestampFiles_52 = ((MR_Word) conv2_TimestampFiles_52);
            {
              Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_14[0]));
              MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_13_p_0_1));
              MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (Globals_14));
            }
            mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_112, TimestampFiles_52, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_60);
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
      else
      {
      }
      *ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 207, &ProfileCalls_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 208, &ProfileTime_13);
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
      if (((MR_tag((MR_Word) Res_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res_16, (MR_Integer) 0)));
        MR_String ErrorMsg_21;
        MR_String Var_36;

        Var_36 = mercury__io__error_message_1_f_0(IOError_20);
        ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", Var_36);
        libs__file_util__report_error_3_p_0(ErrorMsg_21);
        *STATE_VARIABLE_HLDS_23 = STATE_VARIABLE_HLDS_0_22;
      }
      else
      {
        MR_Word FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res_16, (MR_Integer) 0)));
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

    conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) wrapper_arg_1));
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
    MR_Word TypeCtorInfo_33_33;
    MR_Word ModuleNames_13;
    MR_Word LocalModulesList_14;
    MR_Word SymNames_15;
    MR_Word LocalModuleNames_16;
    MR_Word AnalysisInfo0_17;
    MR_Word AnalysisInfo_18;

    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_19, &ModuleNames_13);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 672, &LocalModulesList_14);
    TypeCtorInfo_33_33 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    SymNames_15 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_33_33, (MR_Word) &top_level__mercury_compile_main_scalar_common_6[6], LocalModulesList_14);
    LocalModuleNames_16 = mercury__set__from_list_1_f_0(TypeCtorInfo_33_33, SymNames_15);
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

    conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) wrapper_arg_1));
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

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 338, &IntermodAnalysis_13);
    switch (IntermodAnalysis_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_33_46;
          MR_Word ModuleNames_30;
          MR_Word LocalModulesList_31;
          MR_Word SymNames_32;
          MR_Word LocalModuleNames_33;
          MR_Word AnalysisInfo0_34;
          MR_Word AnalysisInfo_35;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
          hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_14, &ModuleNames_30);
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 672, &LocalModulesList_31);
          TypeCtorInfo_33_46 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          SymNames_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_33_46, (MR_Word) &top_level__mercury_compile_main_scalar_common_6[5], LocalModulesList_31);
          LocalModuleNames_33 = mercury__set__from_list_1_f_0(TypeCtorInfo_33_46, SymNames_32);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 158, &ShowDepGraph_12);
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
          if (((MR_tag((MR_Word) Res_15)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res_15, (MR_Integer) 0)));
            MR_String ErrorMsg_20;
            MR_String Var_33;

            Var_33 = mercury__io__error_message_1_f_0(IOError_19);
            ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", Var_33);
            libs__file_util__report_error_3_p_0(ErrorMsg_20);
            *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
          }
          else
          {
            MR_Word FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res_15, (MR_Integer) 0)));
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
  MR_Word STATE_VARIABLE_DumpInfo_0_72,
  MR_Word * STATE_VARIABLE_DumpInfo_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_147_147;
    MR_Word Stats_30;
    MR_Word Verbose_31;
    MR_Word MMCMake_32;
    MR_Word ModuleName_34;
    MR_Word MaybeTransOptDeps_36;
    MR_Word ModuleAndImports1_37;
    MR_Word IntermodError_38;
    MR_Word AugCompUnit1_39;
    MR_Word ItemSpecs_40;
    MR_String EventSetFileName_42;
    MR_String EventSetName_43;
    MR_Word EventSpecMap1_44;
    MR_Word EventSetErrors_45;
    MR_Word AugCompUnit2_49;
    MR_Word EventSpecMap2_50;
    MR_Word MQInfo0_51;
    MR_Word MQUndefTypes_52;
    MR_Word MQUndefInsts_53;
    MR_Word MQUndefModes_54;
    MR_Word MQUndefTypeClasses_55;
    MR_Word QualifySpecs_56;
    MR_Word RecompInfo0_57;
    MR_Word AugCompUnit_58;
    MR_Word EventSpecMap_59;
    MR_Word TypeEqvMap_60;
    MR_Word UsedModules_61;
    MR_Word RecompInfo_62;
    MR_Word ExpandSpecs_63;
    MR_Word ExpandErrors_64;
    MR_Word MQInfo_65;
    MR_Word EventSet_66;
    MR_Word HLDS0_67;
    MR_Word MakeHLDSFoundInvalidType_68;
    MR_Word MakeHLDSFoundInvalidInstOrMode_69;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word STATE_VARIABLE_Specs_86_86;
    MR_Word STATE_VARIABLE_Specs_87_87;
    MR_Word STATE_VARIABLE_Specs_93_93;
    MR_Word STATE_VARIABLE_Specs_94_94;
    MR_Word STATE_VARIABLE_Specs_99_99;
    MR_Word STATE_VARIABLE_Specs_104_104;
    MR_Word STATE_VARIABLE_Specs_105_105;
    MR_Word _Error_41;
    MR_String Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_String Var_146;

    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 68, &Stats_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 58, &Verbose_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 633, &MMCMake_32);
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports0_20, &ModuleName_34);
    switch (MR_tag((MR_Word) OpModeAugment_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            MaybeTransOptDeps_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            top_level__mercury_compile_main__maybe_read_dependency_file_5_p_0(Globals_17, ModuleName_34, &MaybeTransOptDeps_36);
            break;
        }
        break;
      case (MR_Integer) 1:
        MaybeTransOptDeps_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    top_level__mercury_compile_main__maybe_grab_optfiles_9_p_0(Globals_17, OpModeAugment_18, Verbose_31, MaybeTransOptDeps_36, ModuleAndImports0_20, &ModuleAndImports1_37, &IntermodError_38);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports1_37, &AugCompUnit1_39, &ItemSpecs_40, &_Error_41);
    TypeCtorInfo_147_147 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
    STATE_VARIABLE_Specs_83_83 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_147_147, ItemSpecs_40, STATE_VARIABLE_Specs_0_74);
    Var_121 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 0)));
    Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 1)));
    Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 2)));
    Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 3)));
    Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 4)));
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 5)));
    Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 6)));
    Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 7)));
    Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 8)));
    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 9)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 10)));
    Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 11)));
    Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 12)));
    Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 13)));
    Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 14)));
    Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 15)));
    Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 16)));
    Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 17)));
    Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 18)));
    Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 19)));
    Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 20)));
    Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 21)));
    Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 22)));
    Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 23)));
    *MaybeTimestampMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 24)));
    Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 25)));
    Var_146 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports1_37, (MR_Integer) 26)));
    libs__globals__lookup_string_option_3_p_0(Globals_17, (MR_Integer) 191, &EventSetFileName_42);
    succeeded = (strcmp(EventSetFileName_42, (MR_String) "") == 0);
    if (succeeded)
    {
      EventSetName_43 = (MR_String) "";
      EventSpecMap1_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0);
      EventSetErrors_45 = (MR_Integer) 0;
      STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_83_83;
    }
    else
    {
      MR_String EventSetName0_46;
      MR_Word EventSpecMap0_47;
      MR_Word EventSetSpecs_48;

      parse_tree__prog_event__read_event_set_6_p_0(EventSetFileName_42, &EventSetName0_46, &EventSpecMap0_47, &EventSetSpecs_48);
      STATE_VARIABLE_Specs_86_86 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_147_147, EventSetSpecs_48, STATE_VARIABLE_Specs_83_83);
      EventSetErrors_45 = parse_tree__error_util__contains_errors_2_f_0(Globals_17, EventSetSpecs_48);
      switch (EventSetErrors_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            EventSetName_43 = EventSetName0_46;
            EventSpecMap1_44 = EventSpecMap0_47;
          }
          break;
        case (MR_Integer) 1:
          {
            EventSetName_43 = (MR_String) "";
            EventSpecMap1_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0);
          }
          break;
      }
    }
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_31, Globals_17, STATE_VARIABLE_Specs_86_86, &STATE_VARIABLE_Specs_87_87);
    libs__file_util__maybe_write_string_4_p_0(Verbose_31, (MR_String) "% Module qualifying items...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_31);
    parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_17, AugCompUnit1_39, &AugCompUnit2_49, EventSpecMap1_44, &EventSpecMap2_50, EventSetFileName_42, &MQInfo0_51, &MQUndefTypes_52, &MQUndefInsts_53, &MQUndefModes_54, &MQUndefTypeClasses_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &QualifySpecs_56);
    STATE_VARIABLE_Specs_93_93 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_147_147, QualifySpecs_56, STATE_VARIABLE_Specs_87_87);
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_31, Globals_17, STATE_VARIABLE_Specs_93_93, &STATE_VARIABLE_Specs_94_94);
    libs__file_util__maybe_write_string_4_p_0(Verbose_31, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_30);
    parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo0_51, &RecompInfo0_57);
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_31, Globals_17, STATE_VARIABLE_Specs_94_94, &STATE_VARIABLE_Specs_99_99);
    libs__file_util__maybe_write_string_4_p_0(Verbose_31, (MR_String) "% Expanding equivalence types and insts...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_31);
    parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(AugCompUnit2_49, &AugCompUnit_58, EventSpecMap2_50, &EventSpecMap_59, &TypeEqvMap_60, &UsedModules_61, RecompInfo0_57, &RecompInfo_62, &ExpandSpecs_63);
    ExpandErrors_64 = parse_tree__error_util__contains_errors_2_f_0(Globals_17, ExpandSpecs_63);
    STATE_VARIABLE_Specs_104_104 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_147_147, ExpandSpecs_63, STATE_VARIABLE_Specs_99_99);
    parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(Verbose_31, Globals_17, STATE_VARIABLE_Specs_104_104, &STATE_VARIABLE_Specs_105_105);
    libs__file_util__maybe_write_string_4_p_0(Verbose_31, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_30);
    parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(RecompInfo_62, MQInfo0_51, &MQInfo_65);
    {
      EventSet_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EventSet_66, 0) = ((MR_Box) (EventSetName_43));
      MR_hl_field(MR_mktag(0), EventSet_66, 1) = ((MR_Box) (EventSpecMap_59));
    }
    top_level__mercury_compile_main__make_hlds_17_p_0(Globals_17, AugCompUnit_58, EventSet_66, MQInfo_65, TypeEqvMap_60, UsedModules_61, Verbose_31, Stats_30, &HLDS0_67, QualInfo_22, &MakeHLDSFoundInvalidType_68, &MakeHLDSFoundInvalidInstOrMode_69, FoundSemanticError_26, STATE_VARIABLE_Specs_105_105, STATE_VARIABLE_Specs_75);
    top_level__mercury_compile_main__maybe_write_definitions_5_p_0(Verbose_31, Stats_30, HLDS0_67);
    top_level__mercury_compile_main__maybe_write_definition_line_counts_5_p_0(Verbose_31, Stats_30, HLDS0_67);
    succeeded = (MQUndefTypes_52 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MQUndefTypeClasses_55 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (EventSetErrors_45 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (ExpandErrors_64 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MakeHLDSFoundInvalidType_68 == (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
      *UndefTypes_24 = (MR_Integer) 0;
    else
      *UndefTypes_24 = (MR_Integer) 1;
    succeeded = (MQUndefInsts_53 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MQUndefModes_54 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (MakeHLDSFoundInvalidInstOrMode_69 == (MR_Integer) 0);
    }
    if (succeeded)
      *UndefModes_25 = (MR_Integer) 0;
    else
      *UndefModes_25 = (MR_Integer) 1;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(HLDS0_67, (MR_Integer) 1, (MR_String) "initial", STATE_VARIABLE_DumpInfo_0_72, STATE_VARIABLE_DumpInfo_73);
    switch (MMCMake_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (WriteDFile0_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AllDeps_70;
              MR_Word OutputMMCMakeDeps_71;

              hlds__hlds_module__module_info_get_all_deps_2_p_0(HLDS0_67, &AllDeps_70);
              parse_tree__write_deps_file__write_dependency_file_6_p_0(Globals_17, ModuleAndImports0_20, AllDeps_70, MaybeTransOptDeps_36);
              libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 130, &OutputMMCMakeDeps_71);
              switch (OutputMMCMakeDeps_71) {
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
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    succeeded = (*FoundSemanticError_26 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (IntermodError_38 == (MR_Integer) 1);
    if (succeeded)
      hlds__hlds_module__module_info_incr_errors_2_p_0(HLDS0_67, HLDS1_21);
    else
      *HLDS1_21 = HLDS0_67;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 157, &LineCounts_11);
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
          if (((MR_tag((MR_Word) Res_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0)));
            MR_String ErrorMsg_17;
            MR_String Var_28;

            Var_28 = mercury__io__error_message_1_f_0(IOError_16);
            ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definition line counts: ", Var_28);
            libs__file_util__report_error_3_p_0(ErrorMsg_17);
          }
          else
          {
            MR_Word FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res_14, (MR_Integer) 0)));

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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 156, &ShowDefns_11);
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
          if (((MR_tag((MR_Word) Res_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0)));
            MR_String ErrorMsg_17;
            MR_String Var_28;

            Var_28 = mercury__io__error_message_1_f_0(IOError_16);
            ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definitions: ", Var_28);
            libs__file_util__report_error_3_p_0(ErrorMsg_17);
          }
          else
          {
            MR_Word FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res_14, (MR_Integer) 0)));

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
    STATE_VARIABLE_Specs_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, MakeSpecs_35, STATE_VARIABLE_Specs_43_43);
    hlds__hlds_module__module_info_set_event_set_3_p_0(EventSet_20, STATE_VARIABLE_HLDS_50_50, STATE_VARIABLE_HLDS_38);
    mercury__io__get_exit_status_3_p_0(&Status_36);
    SpecsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(Globals_18, STATE_VARIABLE_Specs_51_51);
    succeeded = (Status_36 == (MR_Integer) 0);
    succeeded = !(succeeded);
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
  MR_Word Imports0_14,
  MR_Word * Imports_15,
  MR_Word * Error_16)
{
  {
    MR_bool succeeded;
    MR_Word IntermodOpt_18;
    MR_Word UseOptInt_19;
    MR_Word TransOpt_20;
    MR_Word IntermodAnalysis_21;
    MR_Word Imports1_22;
    MR_Word Error1_23;
    MR_Word Error2_25;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 333, &IntermodOpt_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 335, &UseOptInt_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 337, &TransOpt_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 338, &IntermodAnalysis_21);
    succeeded = (UseOptInt_19 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (IntermodOpt_18 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (IntermodAnalysis_21 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      succeeded = (OpModeAugment_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Reading .opt files...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      parse_tree__modules__grab_opt_files_6_p_0(Globals_10, Imports0_14, &Imports1_22, &Error1_23);
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Done.\n");
    }
    else
    {
      Imports1_22 = Imports0_14;
      Error1_23 = (MR_Integer) 0;
    }
    switch (MR_tag((MR_Word) OpModeAugment_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Imports_15 = Imports1_22;
              Error2_25 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            if ((MaybeTransOptDeps_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ModuleName_26;
              MR_Word WarnNoTransOptDeps_27;

              *Imports_15 = Imports1_22;
              Error2_25 = (MR_Integer) 0;
              parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*Imports_15, &ModuleName_26);
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
                    MR_Word Var_63;
                    MR_Word Var_66;
                    MR_Word Var_67;
                    MR_Word Var_82;
                    MR_Word Var_83;
                    MR_Word Var_87;
                    MR_Integer _NumWarnings_31;
                    MR_Integer _NumErrors_32;

                    {
                      Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ModuleName_26));
                    }
                    {
                      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
                      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[24])));
                    }
                    {
                      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[35])));
                      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
                    }
                    {
                      Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[34])));
                      MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_63));
                    }
                    {
                      Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_28));
                    }
                    {
                      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Msg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(1), Msg_29, 1) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(1), Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), Msg_29, 3) = ((MR_Box) (Var_82));
                    }
                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Msg_29));
                      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                      MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                      MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_87));
                    }
                    parse_tree__error_util__write_error_spec_8_p_0(Spec_30, Globals_10, (MR_Integer) 0, &_NumWarnings_31, (MR_Integer) 0, &_NumErrors_32);
                  }
                  break;
              }
            }
            else
            {
              MR_Word TransOptDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTransOptDeps_13, (MR_Integer) 0)));

              parse_tree__modules__grab_trans_opt_files_7_p_0(Globals_10, TransOptDeps_24, Imports1_22, Imports_15, &Error2_25);
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
                  *Imports_15 = Imports1_22;
                  Error2_25 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtorInfo_171_171 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
                  MR_Word TypeCtorInfo_172_172 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
                  MR_Word TransOptFiles_34;
                  MR_Word TransOptFilesList_35;
                  MR_Word Var_48;
                  MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 4)));
                  MR_Word Var_50;
                  MR_Word Var_51;
                  MR_Word Var_52;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Var_56;
                  MR_Word Var_57;
                  MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 5)));
                  MR_String Var_93 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 0)));
                  MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 1)));
                  MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 2)));
                  MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 3)));
                  MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 6)));
                  MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 7)));
                  MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 8)));
                  MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 9)));
                  MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 10)));
                  MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 11)));
                  MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 12)));
                  MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 13)));
                  MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 14)));
                  MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 15)));
                  MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 16)));
                  MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 17)));
                  MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 18)));
                  MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 19)));
                  MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 20)));
                  MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 21)));
                  MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 22)));
                  MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 23)));
                  MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 24)));
                  MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 25)));
                  MR_String Var_118 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 26)));
                  MR_String Var_145;
                  MR_Word Var_146;
                  MR_Word Var_147;
                  MR_Word Var_148;
                  MR_Word Var_149;
                  MR_Word Var_150;
                  MR_Word Var_151;
                  MR_Word Var_152;
                  MR_Word Var_153;
                  MR_Word Var_154;
                  MR_Word Var_155;
                  MR_Word Var_156;
                  MR_Word Var_157;
                  MR_Word Var_158;
                  MR_Word Var_159;
                  MR_Word Var_160;
                  MR_Word Var_161;
                  MR_Word Var_162;
                  MR_Word Var_163;
                  MR_Word Var_164;
                  MR_Word Var_165;
                  MR_Word Var_166;
                  MR_Word Var_167;
                  MR_Word Var_168;
                  MR_Word Var_169;
                  MR_String Var_170;

                  Var_52 = mercury__multi_map__keys_1_f_0(TypeCtorInfo_171_171, TypeCtorInfo_172_172, Var_97);
                  Var_51 = mercury__set__sorted_list_to_set_1_f_0(TypeCtorInfo_171_171, Var_52);
                  Var_145 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 0)));
                  Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 1)));
                  Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 2)));
                  Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 3)));
                  Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 4)));
                  Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 5)));
                  Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 6)));
                  Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 7)));
                  Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 8)));
                  Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 9)));
                  Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 10)));
                  Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 11)));
                  Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 12)));
                  Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 13)));
                  Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 14)));
                  Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 15)));
                  Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 16)));
                  Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 17)));
                  Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 18)));
                  Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 19)));
                  Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 20)));
                  Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 21)));
                  Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 22)));
                  Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 23)));
                  Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 24)));
                  Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 25)));
                  Var_170 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 26)));
                  Var_56 = mercury__multi_map__keys_1_f_0(TypeCtorInfo_171_171, TypeCtorInfo_172_172, Var_57);
                  Var_55 = mercury__set__sorted_list_to_set_1_f_0(TypeCtorInfo_171_171, Var_56);
                  {
                    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_54));
                  }
                  {
                    Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                    MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
                  }
                  TransOptFiles_34 = mercury__set__union_list_1_f_0(TypeCtorInfo_171_171, Var_48);
                  mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_171_171, TransOptFiles_34, &TransOptFilesList_35);
                  parse_tree__modules__grab_trans_opt_files_7_p_0(Globals_10, TransOptFilesList_35, Imports1_22, Imports_15, &Error2_25);
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
              *Imports_15 = Imports1_22;
              Error2_25 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_171_171 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
              MR_Word TypeCtorInfo_172_172 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
              MR_Word TransOptFiles_34;
              MR_Word TransOptFilesList_35;
              MR_Word Var_48;
              MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 4)));
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 5)));
              MR_String Var_93 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 0)));
              MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 1)));
              MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 2)));
              MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 3)));
              MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 6)));
              MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 7)));
              MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 8)));
              MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 9)));
              MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 10)));
              MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 11)));
              MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 12)));
              MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 13)));
              MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 14)));
              MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 15)));
              MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 16)));
              MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 17)));
              MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 18)));
              MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 19)));
              MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 20)));
              MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 21)));
              MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 22)));
              MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 23)));
              MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 24)));
              MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 25)));
              MR_String Var_118 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 26)));
              MR_String Var_145;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Word Var_149;
              MR_Word Var_150;
              MR_Word Var_151;
              MR_Word Var_152;
              MR_Word Var_153;
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word Var_159;
              MR_Word Var_160;
              MR_Word Var_161;
              MR_Word Var_162;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Word Var_167;
              MR_Word Var_168;
              MR_Word Var_169;
              MR_String Var_170;

              Var_52 = mercury__multi_map__keys_1_f_0(TypeCtorInfo_171_171, TypeCtorInfo_172_172, Var_97);
              Var_51 = mercury__set__sorted_list_to_set_1_f_0(TypeCtorInfo_171_171, Var_52);
              Var_145 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 0)));
              Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 1)));
              Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 2)));
              Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 3)));
              Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 4)));
              Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 5)));
              Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 6)));
              Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 7)));
              Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 8)));
              Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 9)));
              Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 10)));
              Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 11)));
              Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 12)));
              Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 13)));
              Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 14)));
              Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 15)));
              Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 16)));
              Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 17)));
              Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 18)));
              Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 19)));
              Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 20)));
              Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 21)));
              Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 22)));
              Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 23)));
              Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 24)));
              Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 25)));
              Var_170 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports0_14, (MR_Integer) 26)));
              Var_56 = mercury__multi_map__keys_1_f_0(TypeCtorInfo_171_171, TypeCtorInfo_172_172, Var_57);
              Var_55 = mercury__set__sorted_list_to_set_1_f_0(TypeCtorInfo_171_171, Var_56);
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_54));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
              }
              TransOptFiles_34 = mercury__set__union_list_1_f_0(TypeCtorInfo_171_171, Var_48);
              mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_171_171, TransOptFiles_34, &TransOptFilesList_35);
              parse_tree__modules__grab_trans_opt_files_7_p_0(Globals_10, TransOptFilesList_35, Imports1_22, Imports_15, &Error2_25);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 337, &TransOpt_10);
    switch (TransOpt_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Verbose_11;
          MR_String DependencyFileName_12;
          MR_Word OpenResult_13;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 58, &Verbose_11);
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 1, (MR_String) ".d", ModuleName_7, &DependencyFileName_12);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Reading auto-dependency file \140");
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, DependencyFileName_12);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "\'...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
          mercury__io__open_input_4_p_0(DependencyFileName_12, &OpenResult_13);
          if (((MR_tag((MR_Word) OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word IOError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenResult_13, (MR_Integer) 0)));
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
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (IOErrorMessage_22));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "\' for input: "));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (DependencyFileName_12));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
            }
            mercury__string__append_list_2_p_0(Var_41, &Message_23);
            libs__file_util__report_error_3_p_0(Message_23);
            *MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Word Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenResult_13, (MR_Integer) 0)));
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
                *MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TransOptDeps_19;

                  top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(&TransOptDeps_19);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1869__1_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
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
    succeeded = ((MR_tag((MR_Word) Result_6)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      CharList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_6, (MR_Integer) 0)));
      Var_21 = (MR_Word) &top_level__mercury_compile_main_scalar_common_6[3];
      TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      mercury__list__drop_while_3_p_0(TypeCtorInfo_28_28, Var_21, CharList0_7, &CharList1_8);
      NotIsWhitespace_9 = (MR_Word) &top_level__mercury_compile_main_scalar_common_6[4];
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *TransOptDeps_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TransOptDeps0_17));
      }
    }
    else
      *TransOptDeps_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
    mercury__io__read_line_as_string_3_p_0(&Result_8);
    switch (MR_tag((MR_Word) Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Success_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), Result_8, (MR_Integer) 0)));

          succeeded = mercury__string__prefix_2_p_0(Line_9, SearchPattern_5);
          if (succeeded)
            *Success_6 = (MR_Integer) 1;
          else
          {
            // direct tailcall eliminated
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
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * ModuleToLink_6)
{
  {
    MR_Word ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));

    parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_3, ModuleToLink_6);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__apply_process_module_7_p_0(
  MR_Word ProcessModule_8,
  MR_String FileName_9,
  MR_Word ModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit_12)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ProcessModule_8, (MR_Integer) 1)));
    MR_Box conv1_STATE_VARIABLE_IO_15;

    func_0(((MR_Box) ProcessModule_8), ((MR_Box) (FileName_9)), ((MR_Box) (ModuleName_10)), ((MR_Box) (MaybeTimestamp_11)), ((MR_Box) (RawCompUnit_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__call_make_private_interface_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit_12)
{
  parse_tree__write_module_interface_files__write_private_interface_file_7_p_0(Globals_8, SourceFileName_9, SourceFileModuleName_10, RawCompUnit_12, MaybeTimestamp_11);
}

static void MR_CALL 
top_level__mercury_compile_main__call_make_short_interface_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word HeadVar__3_10,
  MR_Word HeadVar__4_11,
  MR_Word RawCompUnit_12)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(Globals_8, SourceFileName_9, RawCompUnit_12);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word RawCompUnit_12)
{
  parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(Globals_8, SourceFileName_9, RawCompUnit_12);
}

static void MR_CALL 
top_level__mercury_compile_main__call_make_interface_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit_12)
{
  parse_tree__write_module_interface_files__write_interface_file_7_p_0(Globals_8, SourceFileName_9, SourceFileModuleName_10, RawCompUnit_12, MaybeTimestamp_11);
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *TimestampFiles_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *TargetFiles_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Modules_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExtraObjFiles_19));
    }
    *Succeeded_16 = (MR_Integer) 1;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrade_9_p_0(
  MR_Word VeryVerbose_10,
  MR_String DirName_11,
  MR_String FileName_12,
  MR_Word FileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * STATE_VARIABLE_GradeOpts_21)
{
  top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(DirName_11, FileName_12, FileType_13, Continue_14, STATE_VARIABLE_GradeOpts_0_20, STATE_VARIABLE_GradeOpts_21);
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
  MR_String DirName_11,
  MR_String FileName_12,
  MR_Word FileType_13,
  MR_Word * Continue_14,
  MR_Word STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * STATE_VARIABLE_GradeOpts_21)
{
  {
    MR_bool succeeded;

    switch (FileType_13) {
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
          succeeded = mercury__string__prefix_2_p_0(FileName_12, (MR_String) "csharp");
          if (!(succeeded))
          {
            succeeded = mercury__string__prefix_2_p_0(FileName_12, (MR_String) "erlang");
            if (!(succeeded))
            {
              succeeded = mercury__string__prefix_2_p_0(FileName_12, (MR_String) "java");
            }
          }
          if (succeeded)
          {
            MR_Word Var_30;

            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (FileName_12));
              MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (STATE_VARIABLE_GradeOpts_0_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GradeOpts_21 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_30));
            }
          }
          else
          {
            MR_String InitFile_17;
            MR_Word Result_18;
            MR_String Var_31;

            Var_31 = mercury__dir__f_slash_2_f_0(DirName_11, FileName_12);
            InitFile_17 = mercury__dir__f_slash_2_f_0(Var_31, (MR_String) "mer_std.init");
            mercury__io__check_file_accessibility_5_p_0(InitFile_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[33]), &Result_18);
            if ((Result_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_40;

              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (FileName_12));
                MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (STATE_VARIABLE_GradeOpts_0_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GradeOpts_21 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_40));
              }
            }
            else
              *STATE_VARIABLE_GradeOpts_21 = STATE_VARIABLE_GradeOpts_0_20;
          }
          *Continue_14 = (MR_Integer) 1;
        }
        break;
    }
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
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 669, &Version_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 668, &Help_23);
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
        top_level__mercury_compile_main__do_op_mode_8_p_0(Globals_5, OpMode_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_6);
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
    if (((MR_tag((MR_Word) Res_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word E_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res_7, (MR_Integer) 0)));
      MR_String Var_20;

      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      Var_20 = mercury__io__error_message_1_f_0(E_9);
      mercury__io__write_string_3_p_0(Var_20);
      mercury__io__nl_2_p_0();
    }
    else
    {
      MR_Word ExpandedCmdLineArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res_7, (MR_Integer) 0)));

      top_level__mercury_compile_main__real_main_after_expansion_3_p_0(ExpandedCmdLineArgs_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__real_main_after_expansion_3_p_0(
  MR_Word CmdLineArgs_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) CmdLineArgs_4)) == (MR_mktag((MR_Integer) 1)));
    MR_String ArgFile_6;
    MR_Word ExtraArgs_7;
    MR_String Var_44;
    MR_Word Var_45;

    if (succeeded)
    {
      Var_44 = ((MR_String) (MR_hl_field(MR_mktag(1), CmdLineArgs_4, (MR_Integer) 0)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), CmdLineArgs_4, (MR_Integer) 1)));
      succeeded = (strcmp(Var_44, (MR_String) "--arg-file") == 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ArgFile_6 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0)));
          ExtraArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1)));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_76_76;
      MR_Word DummyGlobals_10;
      MR_Word MaybeArgs1_11;
      MR_Word OptionArgs_13;
      MR_Word NonOptionArgs_14;
      MR_Word DetectedGradeFlags_15;
      MR_Word Variables_16;
      MR_Word AllFlags_35;
      MR_Word Specs_38;
      MR_Word ActualGlobals_39;
      MR_Word Var_70;
      MR_Word Var_36;
      MR_Word Var_37;

      if (!((ExtraArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_String Var_48;
        MR_String Var_50;

        Var_50 = mercury__string__string_1_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[0], ((MR_Box) (ExtraArgs_7)));
        Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", Var_50);
        {
          mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_main", (MR_String) "predicate \140top_level.mercury_compile_main.real_main_after_expansion\'/3", Var_48);
          return;
        }
      }
      libs__handle_options__generate_default_globals_3_p_0(&DummyGlobals_10);
      make__options_file__read_args_file_5_p_0(DummyGlobals_10, ArgFile_6, &MaybeArgs1_11);
      if ((MaybeArgs1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        OptionArgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        NonOptionArgs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word Args1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgs1_11, (MR_Integer) 0)));

        libs__handle_options__separate_option_args_5_p_0(Args1_12, &OptionArgs_13, &NonOptionArgs_14);
      }
      DetectedGradeFlags_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Variables_16 = make__options_file__options_variables_init_0_f_0();
      TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      Var_70 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_76_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), OptionArgs_13);
      AllFlags_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_76_76, DetectedGradeFlags_15, Var_70);
      libs__handle_options__handle_given_options_7_p_0(AllFlags_35, &Var_36, &Var_37, &Specs_38, &ActualGlobals_39);
      if ((Specs_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        top_level__mercury_compile_main__main_after_setup_7_p_0(ActualGlobals_39, DetectedGradeFlags_15, Variables_16, OptionArgs_13, NonOptionArgs_14);
      else
        libs__handle_options__usage_errors_4_p_0(ActualGlobals_39, Specs_38);
    }
    else
    {
      MR_Word ArgsGlobals_19;
      MR_Word MaybeVariables0_20;
      MR_Word Var_56;
      MR_Word OptionArgs_97;
      MR_Word NonOptionArgs_98;
      MR_Word _Errors0_18;

      libs__handle_options__handle_given_options_7_p_0(CmdLineArgs_4, &OptionArgs_97, &NonOptionArgs_98, &_Errors0_18, &ArgsGlobals_19);
      Var_56 = make__options_file__options_variables_init_0_f_0();
      make__options_file__read_options_files_5_p_0(ArgsGlobals_19, Var_56, &MaybeVariables0_20);
      if ((MaybeVariables0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Variables_100;

        Variables_100 = make__options_file__options_variables_init_0_f_0();
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      else
      {
        MR_Word Variables0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeVariables0_20, (MR_Integer) 0)));
        MR_Word MaybeMCFlags0_22;

        make__options_file__lookup_mmc_options_5_p_0(ArgsGlobals_19, Variables0_21, &MaybeMCFlags0_22);
        if ((MaybeMCFlags0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word Variables_116;

          Variables_116 = make__options_file__options_variables_init_0_f_0();
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        else
        {
          MR_Word MCFlags0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMCFlags0_22, (MR_Integer) 0)));
          MR_Word FlagsSpecs_26;
          MR_Word FlagsArgsGlobals_27;
          MR_Word Var_59;
          MR_Word DetectedGradeFlags_122;
          MR_Word Variables_123;
          MR_Word MaybeMCFlags_124;
          MR_Word Var_24;
          MR_Word Var_25;

          Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, MCFlags0_23, CmdLineArgs_4);
          libs__handle_options__handle_given_options_7_p_0(Var_59, &Var_24, &Var_25, &FlagsSpecs_26, &FlagsArgsGlobals_27);
          if ((FlagsSpecs_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word MaybeConfigFile_30;

            libs__globals__lookup_maybe_string_option_3_p_0(FlagsArgsGlobals_27, (MR_Integer) 649, &MaybeConfigFile_30);
            if ((MaybeConfigFile_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              Variables_123 = make__options_file__options_variables_init_0_f_0();
              make__options_file__lookup_mmc_options_5_p_0(FlagsArgsGlobals_27, Variables_123, &MaybeMCFlags_124);
            }
            else
            {
              MR_String ConfigFile_31 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeConfigFile_30, (MR_Integer) 0)));
              MR_Word MaybeVariables_32;

              make__options_file__read_options_file_6_p_0(FlagsArgsGlobals_27, ConfigFile_31, Variables0_21, &MaybeVariables_32);
              if ((MaybeVariables_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MaybeMCFlags_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Variables_123 = make__options_file__options_variables_init_0_f_0();
              }
              else
              {
                MR_Word MaybeMerStdLibDir_33;

                Variables_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeVariables_32, (MR_Integer) 0)));
                make__options_file__lookup_mmc_options_5_p_0(FlagsArgsGlobals_27, Variables_123, &MaybeMCFlags_124);
                make__options_file__lookup_mercury_stdlib_dir_5_p_0(FlagsArgsGlobals_27, Variables_123, &MaybeMerStdLibDir_33);
                top_level__mercury_compile_main__detect_libgrades_5_p_0(FlagsArgsGlobals_27, MaybeMerStdLibDir_33, &DetectedGradeFlags_122);
              }
            }
          }
          else
          {
            libs__handle_options__usage_errors_4_p_0(FlagsArgsGlobals_27, FlagsSpecs_26);
            DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            Variables_123 = make__options_file__options_variables_init_0_f_0();
            MaybeMCFlags_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          if ((MaybeMCFlags_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          else
          {
            MR_Word TypeCtorInfo_76_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word MCFlags_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMCFlags_124, (MR_Integer) 0)));
            MR_Word AllFlags_80;
            MR_Word Specs_83;
            MR_Word ActualGlobals_84;
            MR_Word Var_85;
            MR_Word Var_77;
            MR_Word Var_78;

            Var_85 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_76_87, MCFlags_79, OptionArgs_97);
            AllFlags_80 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_76_87, DetectedGradeFlags_122, Var_85);
            libs__handle_options__handle_given_options_7_p_0(AllFlags_80, &Var_77, &Var_78, &Specs_83, &ActualGlobals_84);
            if ((Specs_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              top_level__mercury_compile_main__main_after_setup_7_p_0(ActualGlobals_84, DetectedGradeFlags_122, Variables_123, OptionArgs_97, NonOptionArgs_98);
            else
              libs__handle_options__usage_errors_4_p_0(ActualGlobals_84, Specs_83);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 669, &Version_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 668, &Help_15);
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

    backend_libs__compile_target_code__link_module_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__4_4);
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
          MR_String StandaloneIntBasename_16 = ((MR_String) (MR_hl_field(MR_mktag(1), OpMode_10, (MR_Integer) 0)));

          top_level__mercury_compile_main__do_op_mode_standalone_interface_4_p_0(Globals_9, StandaloneIntBasename_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word OpModeQuery_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpMode_10, (MR_Integer) 0)));

          top_level__mercury_compile_main__do_op_mode_query_4_p_0(Globals_9, OpModeQuery_17);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word OpModeArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_10, (MR_Integer) 0)));
          MR_Word FileNamesFromStdin_35;

          libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 665, &FileNamesFromStdin_35);
          succeeded = (Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            succeeded = (FileNamesFromStdin_35 == (MR_Integer) 0);
          if (succeeded)
            libs__handle_options__usage_2_p_0();
          else
          {
            MR_Word TypeCtorInfo_68_85;
            MR_Word ModulesToLinkCord_36;
            MR_Word ExtraObjFilesCord_37;
            MR_Word ModulesToLink_38;
            MR_Word ExtraObjFiles_39;
            MR_Integer ExitStatus_40;
            MR_Word Statistics_49;

            switch (FileNamesFromStdin_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorInfo_67_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  MR_Word Var_52;
                  MR_Word Var_53;

                  Var_52 = mercury__cord__empty_0_f_0(TypeCtorInfo_67_84);
                  Var_53 = mercury__cord__empty_0_f_0(TypeCtorInfo_67_84);
                  top_level__mercury_compile_main__process_compiler_cmd_line_args_12_p_0(Globals_9, OpModeArgs_18, DetectedGradeFlags_11, OptionVariables_12, OptionArgs_13, Args_14, Var_52, &ModulesToLinkCord_36, Var_53, &ExtraObjFilesCord_37);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtorInfo_66_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  MR_Word Var_55;
                  MR_Word Var_56;

                  Var_55 = mercury__cord__empty_0_f_0(TypeCtorInfo_66_83);
                  Var_56 = mercury__cord__empty_0_f_0(TypeCtorInfo_66_83);
                  top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0(Globals_9, OpModeArgs_18, DetectedGradeFlags_11, OptionVariables_12, OptionArgs_13, Var_55, &ModulesToLinkCord_36, Var_56, &ExtraObjFilesCord_37);
                }
                break;
            }
            TypeCtorInfo_68_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            ModulesToLink_38 = mercury__cord__list_1_f_0(TypeCtorInfo_68_85, ModulesToLinkCord_36);
            ExtraObjFiles_39 = mercury__cord__list_1_f_0(TypeCtorInfo_68_85, ExtraObjFilesCord_37);
            mercury__io__get_exit_status_3_p_0(&ExitStatus_40);
            succeeded = (ExitStatus_40 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_String FirstModule_41;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_42;

              succeeded = ((MR_tag((MR_Word) OpModeArgs_18)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpModeArgs_18, (MR_Integer) 0)));
                succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0)));
                  succeeded = (Var_60 == (MR_Integer) 2);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) ModulesToLink_38)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      FirstModule_41 = ((MR_String) (MR_hl_field(MR_mktag(1), ModulesToLink_38, (MR_Integer) 0)));
                      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ModulesToLink_38, (MR_Integer) 1)));
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word MainModuleName_43;
                MR_Word Target_44;
                MR_Word Succeeded_45;

                parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_41, &MainModuleName_43);
                libs__globals__get_target_2_p_0(Globals_9, &Target_44);
                switch (Target_44) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_61;

                      {
                        Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[1]));
                        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_8_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (ModulesToLink_38));
                        MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (ExtraObjFiles_39));
                      }
                      top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0(ModulesToLink_38, ExtraObjFiles_39, Globals_9, MainModuleName_43, DetectedGradeFlags_11, OptionVariables_12, OptionArgs_13, Var_61, &Succeeded_45);
                    }
                    break;
                  case (MR_Integer) 2:
                    parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_9, MainModuleName_43, &Succeeded_45);
                    break;
                }
                parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_45);
              }
              else
              {
              }
            }
            else
            {
              MR_Word Limited_46;
              MR_Word VerboseErrors_47;
              MR_Word ExtraErrorInfo_48;

              libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_46);
              switch (Limited_46) {
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
              libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 60, &VerboseErrors_47);
              libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_48);
              switch (VerboseErrors_47) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (ExtraErrorInfo_48) {
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
            libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 68, &Statistics_49);
            switch (Statistics_49) {
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

    top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__781__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_LambdaHeadVar__3_31);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 633, &InvokedByMake_18);
    switch (InvokedByMake_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_47_47;
          MR_Word Builder_19;
          MR_Word Var_25;

          {
            Builder_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_13[0]));
            MR_hl_field(MR_mktag(0), Builder_19, 1) = ((MR_Box) (top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0_1));
            MR_hl_field(MR_mktag(0), Builder_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Builder_19, 3) = ((MR_Box) (Compile_15));
          }
          TypeCtorInfo_47_47 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
          make__util__build_with_module_options_args_12_p_0(TypeCtorInfo_47_47, TypeCtorInfo_47_47, Globals_10, ModuleName_11, DetectedGradeFlags_12, OptionVariables_13, OptionArgs_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Builder_19, Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &Var_25);
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
    if ((HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ExtraObjFiles_10 = STATE_VARIABLE_ExtraObjFiles_0_9;
      *STATE_VARIABLE_Modules_8 = STATE_VARIABLE_Modules_0_7;
    }
    else
    {
      MR_Word TypeCtorInfo_56_56;
      MR_String Arg_32 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0)));
      MR_Word Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1)));
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
      if (!((Args_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        mercury__gc__garbage_collect_2_p_0();
      TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      Var_50 = mercury__cord__from_list_1_f_0(TypeCtorInfo_56_56, ArgModules_37);
      STATE_VARIABLE_Modules_49_49 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_56_56, STATE_VARIABLE_Modules_0_7, Var_50);
      Var_52 = mercury__cord__from_list_1_f_0(TypeCtorInfo_56_56, ArgExtraObjFiles_38);
      STATE_VARIABLE_ExtraObjFiles_51_51 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_56_56, STATE_VARIABLE_ExtraObjFiles_0_9, Var_52);
      // direct tailcall eliminated
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

    top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_Succeeded_16, &conv0_HeadVar__8_8);
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
        FileOrModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FileOrModule_20, 0) = ((MR_Box) (FileName_45));
      }
    else
    {
      MR_Word ModuleName_46;

      parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_16, &ModuleName_46);
      {
        FileOrModule_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileOrModule_20, 0) = ((MR_Box) (ModuleName_46));
      }
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 633, &InvokedByMake_21);
    switch (InvokedByMake_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybeTuple_25;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word _Succeeded_24;

          if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_String FileName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), FileOrModule_20, (MR_Integer) 0)));

            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_48, &Var_31);
          }
          else
            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileOrModule_20, (MR_Integer) 0)));
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_12[0]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (top_level__mercury_compile_main__process_compiler_arg_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (OpModeArgs_12));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (FileOrModule_20));
            MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (OptionArgs_15));
          }
          make__util__build_with_module_options_args_12_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &top_level__mercury_compile_main_scalar_common_2[0], Globals_11, Var_31, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_32, &_Succeeded_24, ((MR_Box) ((MR_Integer) 0)), &MaybeTuple_25);
          if ((MaybeTuple_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ModulesToLink_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Tuple Tuple_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), MaybeTuple_25, (MR_Integer) 0)));

            *ModulesToLink_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tuple_26, (MR_Integer) 0)));
            *ExtraObjFiles_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tuple_26, (MR_Integer) 1)));
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

    top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_Succeeded_16, &conv0_HeadVar__8_8);
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
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, STATE_VARIABLE_Modules_0_27);
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
          MR_Word TypeCtorInfo_49_49;
          MR_String Line_21 = ((MR_String) (MR_hl_field(MR_mktag(1), FileResult_20, (MR_Integer) 0)));
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
              FileOrModule_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FileOrModule_61, 0) = ((MR_Box) (FileName_84));
            }
          else
          {
            MR_Word ModuleName_85;

            parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_22, &ModuleName_85);
            {
              FileOrModule_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FileOrModule_61, 0) = ((MR_Box) (ModuleName_85));
            }
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 633, &InvokedByMake_62);
          switch (InvokedByMake_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MaybeTuple_66;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word _Succeeded_65;

                if (((MR_tag((MR_Word) FileOrModule_61)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_String FileName_87 = ((MR_String) (MR_hl_field(MR_mktag(0), FileOrModule_61, (MR_Integer) 0)));

                  parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_87, &Var_70);
                }
                else
                  Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileOrModule_61, (MR_Integer) 0)));
                {
                  Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_12[0]));
                  MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (OpModeArgs_13));
                  MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (FileOrModule_61));
                  MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (OptionArgs_16));
                }
                make__util__build_with_module_options_args_12_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &top_level__mercury_compile_main_scalar_common_2[0], Globals_12, Var_70, DetectedGradeFlags_14, OptionVariables_15, OptionArgs_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_71, &_Succeeded_65, ((MR_Box) ((MR_Integer) 0)), &MaybeTuple_66);
                if ((MaybeTuple_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ArgModules_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ArgExtraObjFiles_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                else
                {
                  MR_Tuple Tuple_67 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), MaybeTuple_66, (MR_Integer) 0)));

                  ArgModules_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tuple_67, (MR_Integer) 0)));
                  ArgExtraObjFiles_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tuple_67, (MR_Integer) 1)));
                }
              }
              break;
            case (MR_Integer) 1:
              top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(Globals_12, OpModeArgs_13, OptionArgs_16, FileOrModule_61, &ArgModules_23, &ArgExtraObjFiles_24);
              break;
          }
          TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          Var_42 = mercury__cord__from_list_1_f_0(TypeCtorInfo_49_49, ArgModules_23);
          STATE_VARIABLE_Modules_41_41 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_49_49, STATE_VARIABLE_Modules_0_27, Var_42);
          Var_44 = mercury__cord__from_list_1_f_0(TypeCtorInfo_49_49, ArgExtraObjFiles_24);
          STATE_VARIABLE_ExtraObjFiles_43_43 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_49_49, STATE_VARIABLE_ExtraObjFiles_0_29, Var_44);
          // direct tailcall eliminated
          next_value_of_STATE_VARIABLE_Modules_0_27 = STATE_VARIABLE_Modules_41_41;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_29 = STATE_VARIABLE_ExtraObjFiles_43_43;
          STATE_VARIABLE_Modules_0_27 = next_value_of_STATE_VARIABLE_Modules_0_27;
          STATE_VARIABLE_ExtraObjFiles_0_29 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_29;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), FileResult_20, (MR_Integer) 0)));
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
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_main__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_main__call_make_short_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_main__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_main__call_make_private_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
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

    top_level__mercury_compile_main__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_main__call_make_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
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
              if (((MR_tag((MR_Word) FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_String FileName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), FileOrModule_12, (MR_Integer) 0)));

                parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(Globals0_9, FileName_16);
              }
              else
              {
                MR_Word ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileOrModule_12, (MR_Integer) 0)));

                parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(Globals0_9, ModuleName_17);
              }
              *ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              if (((MR_tag((MR_Word) FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_String FileName_83 = ((MR_String) (MR_hl_field(MR_mktag(0), FileOrModule_12, (MR_Integer) 0)));

                parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(Globals0_9, FileName_83);
              }
              else
              {
                MR_Word ModuleName_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileOrModule_12, (MR_Integer) 0)));

                parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(Globals0_9, ModuleName_84);
              }
              *ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word GenerateVersionNumbers_30;
              MR_Word ProcessModule_186;
              MR_Word ReturnTimestamp_187;
              MR_Word MaybeTimestamp_188;
              MR_Word Specs0_189;
              MR_Word Var_191;
              MR_Word Var_192;
              MR_Word Var_193;
              MR_String FileName_203;
              MR_Word ModuleName_204;
              MR_Word HaveReadModuleMaps0_205;
              MR_Word Globals_206;
              MR_Word ParseTreeSrc_207;
              MR_Word Errors_208;
              MR_Word _HaveReadModuleMaps_160;

              {
                ProcessModule_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProcessModule_186, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0]));
                MR_hl_field(MR_mktag(0), ProcessModule_186, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3));
                MR_hl_field(MR_mktag(0), ProcessModule_186, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ProcessModule_186, 3) = ((MR_Box) (Globals0_9));
              }
              libs__globals__lookup_bool_option_3_p_0(Globals0_9, (MR_Integer) 129, &GenerateVersionNumbers_30);
              ReturnTimestamp_187 = top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(GenerateVersionNumbers_30);
              Var_191 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
              Var_192 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
              Var_193 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
              {
                HaveReadModuleMaps0_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_205, 0) = ((MR_Box) (Var_191));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_205, 1) = ((MR_Box) (Var_192));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_205, 2) = ((MR_Box) (Var_193));
              }
              top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_9, &Globals_206, FileOrModule_12, &ModuleName_204, &FileName_203, ReturnTimestamp_187, &MaybeTimestamp_188, &ParseTreeSrc_207, &Specs0_189, &Errors_208, HaveReadModuleMaps0_205, &_HaveReadModuleMaps_160);
              succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(Globals_206, Errors_208);
              if (!(succeeded))
              {
                MR_Word RawCompUnits_166;
                MR_Word Var_170;
                MR_Word Specs_173;
                MR_Integer _NumWarnings_161;
                MR_Integer _NumErrors_162;
                MR_Box conv1_STATE_VARIABLE_IO_44;

                parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_207, &RawCompUnits_166, Specs0_189, &Specs_173);
                parse_tree__error_util__write_error_specs_8_p_0(Specs_173, Globals_206, (MR_Integer) 0, &_NumWarnings_161, (MR_Integer) 0, &_NumErrors_162);
                {
                  Var_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_170, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_170, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_170, 3) = ((MR_Box) (ProcessModule_186));
                  MR_hl_field(MR_mktag(0), Var_170, 4) = ((MR_Box) (FileName_203));
                  MR_hl_field(MR_mktag(0), Var_170, 5) = ((MR_Box) (ModuleName_204));
                  MR_hl_field(MR_mktag(0), Var_170, 6) = ((MR_Box) (MaybeTimestamp_188));
                }
                mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_170, RawCompUnits_166, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_44);
              }
              *ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ProcessModule_243;
              MR_Word MaybeTimestamp_245;
              MR_Word Specs0_246;
              MR_Word Var_248;
              MR_Word Var_249;
              MR_Word Var_250;
              MR_String FileName_260;
              MR_Word ModuleName_261;
              MR_Word HaveReadModuleMaps0_262;
              MR_Word Globals_263;
              MR_Word ParseTreeSrc_264;
              MR_Word Errors_265;
              MR_Word _HaveReadModuleMaps_217;

              {
                ProcessModule_243 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProcessModule_243, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0]));
                MR_hl_field(MR_mktag(0), ProcessModule_243, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_5));
                MR_hl_field(MR_mktag(0), ProcessModule_243, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ProcessModule_243, 3) = ((MR_Box) (Globals0_9));
              }
              Var_248 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
              Var_249 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
              Var_250 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
              {
                HaveReadModuleMaps0_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_262, 0) = ((MR_Box) (Var_248));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_262, 1) = ((MR_Box) (Var_249));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_262, 2) = ((MR_Box) (Var_250));
              }
              top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_9, &Globals_263, FileOrModule_12, &ModuleName_261, &FileName_260, (MR_Integer) 1, &MaybeTimestamp_245, &ParseTreeSrc_264, &Specs0_246, &Errors_265, HaveReadModuleMaps0_262, &_HaveReadModuleMaps_217);
              succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(Globals_263, Errors_265);
              if (!(succeeded))
              {
                MR_Word RawCompUnits_223;
                MR_Word Var_227;
                MR_Word Specs_230;
                MR_Integer _NumWarnings_218;
                MR_Integer _NumErrors_219;
                MR_Box conv2_STATE_VARIABLE_IO_44;

                parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_264, &RawCompUnits_223, Specs0_246, &Specs_230);
                parse_tree__error_util__write_error_specs_8_p_0(Specs_230, Globals_263, (MR_Integer) 0, &_NumWarnings_218, (MR_Integer) 0, &_NumErrors_219);
                {
                  Var_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_227, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_227, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_227, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_227, 3) = ((MR_Box) (ProcessModule_243));
                  MR_hl_field(MR_mktag(0), Var_227, 4) = ((MR_Box) (FileName_260));
                  MR_hl_field(MR_mktag(0), Var_227, 5) = ((MR_Box) (ModuleName_261));
                  MR_hl_field(MR_mktag(0), Var_227, 6) = ((MR_Box) (MaybeTimestamp_245));
                }
                mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_227, RawCompUnits_223, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_44);
              }
              *ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ProcessModule_29;
              MR_Word ReturnTimestamp_31;
              MR_Word MaybeTimestamp_32;
              MR_Word Specs0_33;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word GenerateVersionNumbers_90;
              MR_String FileName_100;
              MR_Word ModuleName_101;
              MR_Word HaveReadModuleMaps0_102;
              MR_Word Globals_103;
              MR_Word ParseTreeSrc_104;
              MR_Word Errors_106;
              MR_Word _HaveReadModuleMaps_91;

              {
                ProcessModule_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProcessModule_29, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0]));
                MR_hl_field(MR_mktag(0), ProcessModule_29, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_1));
                MR_hl_field(MR_mktag(0), ProcessModule_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ProcessModule_29, 3) = ((MR_Box) (Globals0_9));
              }
              libs__globals__lookup_bool_option_3_p_0(Globals0_9, (MR_Integer) 129, &GenerateVersionNumbers_90);
              ReturnTimestamp_31 = top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(GenerateVersionNumbers_90);
              Var_58 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
              Var_59 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
              Var_60 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
              {
                HaveReadModuleMaps0_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_102, 0) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_102, 1) = ((MR_Box) (Var_59));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_102, 2) = ((MR_Box) (Var_60));
              }
              top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_9, &Globals_103, FileOrModule_12, &ModuleName_101, &FileName_100, ReturnTimestamp_31, &MaybeTimestamp_32, &ParseTreeSrc_104, &Specs0_33, &Errors_106, HaveReadModuleMaps0_102, &_HaveReadModuleMaps_91);
              succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(Globals_103, Errors_106);
              if (!(succeeded))
              {
                MR_Word RawCompUnits_34;
                MR_Word Var_65;
                MR_Word Specs_94;
                MR_Integer _NumWarnings_92;
                MR_Integer _NumErrors_93;
                MR_Box conv0_STATE_VARIABLE_IO_44;

                parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_104, &RawCompUnits_34, Specs0_33, &Specs_94);
                parse_tree__error_util__write_error_specs_8_p_0(Specs_94, Globals_103, (MR_Integer) 0, &_NumWarnings_92, (MR_Integer) 0, &_NumErrors_93);
                {
                  Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ProcessModule_29));
                  MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (FileName_100));
                  MR_hl_field(MR_mktag(0), Var_65, 5) = ((MR_Box) (ModuleName_101));
                  MR_hl_field(MR_mktag(0), Var_65, 6) = ((MR_Box) (MaybeTimestamp_32));
                }
                mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_65, RawCompUnits_34, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_44);
              }
              *ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word HaveReadModuleMaps0_18;
              MR_Word Globals_19;
              MR_Word ParseTreeSrc_22;
              MR_Word Specs_23;
              MR_Word Errors_24;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word ModuleName_89;
              MR_String Var_20;
              MR_Word Var_21;
              MR_Word _HaveReadModuleMaps_25;
              MR_Integer _NumWarnings_26;
              MR_Integer _NumErrors_27;

              Var_67 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
              Var_68 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
              Var_69 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
              {
                HaveReadModuleMaps0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, 0) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, 1) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, 2) = ((MR_Box) (Var_69));
              }
              top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_9, &Globals_19, FileOrModule_12, &ModuleName_89, &Var_20, (MR_Integer) 1, &Var_21, &ParseTreeSrc_22, &Specs_23, &Errors_24, HaveReadModuleMaps0_18, &_HaveReadModuleMaps_25);
              parse_tree__error_util__write_error_specs_8_p_0(Specs_23, Globals_19, (MR_Integer) 0, &_NumWarnings_26, (MR_Integer) 0, &_NumErrors_27);
              succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(Globals_19, Errors_24);
              if (!(succeeded))
              {
                MR_String OutputFileName_28;

                parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_19, (MR_Integer) 0, (MR_String) ".ugly", ModuleName_89, &OutputFileName_28);
                parse_tree__parse_tree_out__convert_to_mercury_src_5_p_0(Globals_19, OutputFileName_28, ParseTreeSrc_22);
              }
              *ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpModeAugment_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpModeArgs_10, (MR_Integer) 0)));
          MR_Word Smart0_36;
          MR_Word DisableSmart_37;
          MR_Word Smart_38;
          MR_Word ModulesToRecompile_41;
          MR_Word HaveReadModuleMaps_42;
          MR_Word Globals_118;
          MR_Word Var_54;

          libs__globals__lookup_bool_option_3_p_0(Globals0_9, (MR_Integer) 128, &Smart0_36);
          libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_37);
          switch (DisableSmart_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Globals_118 = Globals0_9;
                Smart_38 = Smart0_36;
              }
              break;
            case (MR_Integer) 1:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 128, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), Globals0_9, &Globals_118);
                Smart_38 = (MR_Integer) 0;
              }
              break;
          }
          switch (Smart_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_52;

                Var_50 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
                Var_51 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
                Var_52 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
                {
                  HaveReadModuleMaps_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HaveReadModuleMaps_42, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(MR_mktag(0), HaveReadModuleMaps_42, 1) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(0), HaveReadModuleMaps_42, 2) = ((MR_Box) (Var_52));
                }
                ModulesToRecompile_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word FindTargetFiles_39;
                MR_Word FindTimestampFiles_40;
                MR_Word ModuleName_113;

                if (((MR_tag((MR_Word) FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_String FileName_110 = ((MR_String) (MR_hl_field(MR_mktag(0), FileOrModule_12, (MR_Integer) 0)));

                  parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_110, &ModuleName_113);
                }
                else
                  ModuleName_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileOrModule_12, (MR_Integer) 0)));
                top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0(Globals_118, &FindTargetFiles_39);
                top_level__mercury_compile_main__find_timestamp_files_2_p_0(Globals_118, &FindTimestampFiles_40);
                recompilation__check__should_recompile_8_p_0(Globals_118, ModuleName_113, FindTargetFiles_39, FindTimestampFiles_40, &ModulesToRecompile_41, &HaveReadModuleMaps_42);
              }
              break;
          }
          succeeded = ((MR_tag((MR_Word) ModulesToRecompile_41)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ModulesToRecompile_41, (MR_Integer) 0)));
            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            *ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
            top_level__mercury_compile_main__read_augment_and_process_module_10_p_0(Globals_118, OpModeAugment_35, OptionArgs_11, FileOrModule_12, ModulesToRecompile_41, HaveReadModuleMaps_42, ModulesToLink_13, ExtraObjFiles_14);
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
    MR_Word TypeCtorInfo_9_9 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;

    succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_9_9, Errors_4);
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
        mercury__set__intersect_3_p_0(TypeCtorInfo_9_9, Errors_4, Var_7, &FatalErrors_6);
        succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_9_9, FatalErrors_6);
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

    top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_TimestampFiles_10);
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

    conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) wrapper_arg_1));
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

    succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1192__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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
    MR_Word TypeCtorInfo_9_81;

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

              libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 67, &ReportCmdLineArgsDotErr_21);
              top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(ReportCmdLineArgsDotErr_21, OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ReportCmdLineArgsDotErr_21;

          libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 67, &ReportCmdLineArgsDotErr_21);
          top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(ReportCmdLineArgsDotErr_21, OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        break;
    }
    top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_11, &Globals_22, FileOrModule_14, &ModuleName_23, &FileName_24, (MR_Integer) 0, &MaybeTimestamp_25, &ParseTreeSrc_26, &Specs0_27, &Errors_28, HaveReadModuleMap0_16, &HaveReadModuleMaps_29);
    TypeCtorInfo_9_81 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
    succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_9_81, Errors_28);
    if (succeeded)
    {
      {
        MR_Word HaltSyntax_77;

        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 4, &HaltSyntax_77);
        succeeded = (HaltSyntax_77 == (MR_Integer) 1);
      }
      if (!(succeeded))
      {
        MR_Word FatalErrors_78;
        MR_Word Var_79;

        Var_79 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        mercury__set__intersect_3_p_0(TypeCtorInfo_9_81, Errors_28, Var_79, &FatalErrors_78);
        succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_9_81, FatalErrors_78);
      }
    }
    if (succeeded)
    {
      MR_Integer _NumWarnings_30;
      MR_Integer _NumErrors_31;

      parse_tree__error_util__write_error_specs_8_p_0(Specs0_27, Globals_22, (MR_Integer) 0, &_NumWarnings_30, (MR_Integer) 0, &_NumErrors_31);
      *ModulesToLink_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word TypeCtorInfo_69_69;
      MR_Word RawCompUnits0_32;
      MR_Word Specs1_33;
      MR_Word RawCompUnitsToCompile_40;
      MR_Word RawCompUnitNames_41;
      MR_Word NestedCompUnitNames_42;
      MR_Word FindTimestampFiles_43;
      MR_Word TraceProf_44;
      MR_Word GlobalsToUse_47;
      MR_Word Var_59;
      MR_Word CompilationTarget_84;
      MR_String TimestampSuffix_85;
      MR_Word Var_73;

      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_26, &RawCompUnits0_32, Specs0_27, &Specs1_33);
      if ((MaybeModulesToRecompile_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        RawCompUnitsToCompile_40 = RawCompUnits0_32;
      else
      {
        MR_Word ModulesToRecompile_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeModulesToRecompile_15, (MR_Integer) 0)));
        MR_Word ToRecompile_35;

        {
          ToRecompile_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ToRecompile_35, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), ToRecompile_35, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_1));
          MR_hl_field(MR_mktag(0), ToRecompile_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ToRecompile_35, 3) = ((MR_Box) (ModulesToRecompile_34));
        }
        mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, ToRecompile_35, RawCompUnits0_32, &RawCompUnitsToCompile_40);
      }
      TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      Var_59 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, TypeCtorInfo_69_69, (MR_Word) &top_level__mercury_compile_main_scalar_common_6[2], RawCompUnits0_32);
      RawCompUnitNames_41 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_69_69, Var_59);
      mercury__set__delete_3_p_0(TypeCtorInfo_69_69, ((MR_Box) (ModuleName_23)), RawCompUnitNames_41, &NestedCompUnitNames_42);
      libs__globals__get_target_2_p_0(Globals_22, &CompilationTarget_84);
      TimestampSuffix_85 = ((&top_level__mercury_compile_main_vector_common_7[8 + CompilationTarget_84]))->top_level__mercury_compile_main__vector_common_type_7_0__vct_7_f_0;
      {
        FindTimestampFiles_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FindTimestampFiles_43, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_43, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_3));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_43, 3) = ((MR_Box) (Globals_22));
        MR_hl_field(MR_mktag(0), FindTimestampFiles_43, 4) = ((MR_Box) (TimestampSuffix_85));
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 134, &TraceProf_44);
      succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_23);
      if (succeeded)
      {
        Var_73 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_23, Var_73);
        if (succeeded)
          succeeded = (TraceProf_44 == (MR_Integer) 1);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word GlobalsNoTrace0_45;

        libs__globals__set_option_4_p_0((MR_Integer) 277, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), Globals_22, &GlobalsNoTrace0_45);
        libs__globals__set_trace_level_none_2_p_0(GlobalsNoTrace0_45, &GlobalsToUse_47);
      }
      else
        GlobalsToUse_47 = Globals_22;
      top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0(GlobalsToUse_47, OpModeAugment_12, FileName_24, ModuleName_23, MaybeTimestamp_25, NestedCompUnitNames_42, HaveReadModuleMaps_29, FindTimestampFiles_43, RawCompUnitsToCompile_40, Specs1_33, ModulesToLink_17, ExtraObjFiles_18);
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

    top_level__mercury_compile_main__module_to_link_2_p_0(((MR_Word) wrapper_arg_1), &conv4_ModuleToLink_6);
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

    top_level__mercury_compile_main__augment_and_process_module_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10))), ((MR_Word) wrapper_arg_1), &conv1_ExtraObjFiles_24, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Specs_38);
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
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26)
{
  {
    MR_Word TypeCtorInfo_47_47;
    MR_Word TypeCtorInfo_53_53;
    MR_Word ExtraObjFileLists_28;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_Specs_35_35;
    MR_Box conv3_STATE_VARIABLE_Specs_35_35;
    MR_Box conv2_STATE_VARIABLE_IO_36_36;
    MR_Integer _NumWarnings_29;
    MR_Integer _NumErrors_30;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Globals_15));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (OpModeAugment_16));
      MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (FileName_17));
      MR_hl_field(MR_mktag(0), Var_34, 6) = ((MR_Box) (SourceFileModuleName_18));
      MR_hl_field(MR_mktag(0), Var_34, 7) = ((MR_Box) (MaybeTimestamp_19));
      MR_hl_field(MR_mktag(0), Var_34, 8) = ((MR_Box) (NestedSubModules_20));
      MR_hl_field(MR_mktag(0), Var_34, 9) = ((MR_Box) (HaveReadModuleMaps_21));
      MR_hl_field(MR_mktag(0), Var_34, 10) = ((MR_Box) (FindTimestampFiles_22));
    }
    TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    mercury__list__map_foldl2_7_p_2(TypeCtorInfo_47_47, (MR_Word) &top_level__mercury_compile_main_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[7], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_34, RawCompUnits_23, &ExtraObjFileLists_28, ((MR_Box) (STATE_VARIABLE_Specs_0_31)), &conv3_STATE_VARIABLE_Specs_35_35, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_36_36);
    STATE_VARIABLE_Specs_35_35 = ((MR_Word) conv3_STATE_VARIABLE_Specs_35_35);
    parse_tree__error_util__write_error_specs_8_p_0(STATE_VARIABLE_Specs_35_35, Globals_15, (MR_Integer) 0, &_NumWarnings_29, (MR_Integer) 0, &_NumErrors_30);
    TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__map_3_p_0(TypeCtorInfo_47_47, TypeCtorInfo_53_53, (MR_Word) &top_level__mercury_compile_main_scalar_common_6[1], RawCompUnits_23, ModulesToLink_25);
    mercury__list__condense_2_p_0(TypeCtorInfo_53_53, ExtraObjFileLists_28, ExtraObjFiles_26);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_14_p_0(
  MR_Word Globals0_15,
  MR_Word * Globals_16,
  MR_Word FileOrModuleName_17,
  MR_Word * ModuleName_18,
  MR_String * SourceFileName_19,
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

    if (((MR_tag((MR_Word) FileOrModuleName_17)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_String FileName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), FileOrModuleName_17, (MR_Integer) 0)));
      MR_Word DefaultModuleName_39;
      MR_Word Verbose_146;
      MR_Word Stats_154;
      MR_Word MaybeTimestampPrime_139;
      MR_Word ParseTreeSrcPrime_140;
      MR_Word SpecsPrime_141;
      MR_Word ErrorsPrime_142;
      MR_Word Var_56;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_String Var_40;

      libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 58, &Verbose_146);
      libs__file_util__maybe_write_string_4_p_0(Verbose_146, (MR_String) "% Parsing file \140");
      libs__file_util__maybe_write_string_4_p_0(Verbose_146, FileName_38);
      libs__file_util__maybe_write_string_4_p_0(Verbose_146, (MR_String) "\' and imported interfaces...\n");
      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_38, &DefaultModuleName_39);
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
      Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
      Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
      succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(Var_56, DefaultModuleName_39, ReturnTimestamp_20, &Var_40, &MaybeTimestampPrime_139, &ParseTreeSrcPrime_140, &SpecsPrime_141, &ErrorsPrime_142);
      if (succeeded)
      {
        MR_Word Var_57;
        MR_Word HaveReadModuleMapSrc0_136;
        MR_Word HaveReadModuleMapSrc_137;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_166;

        *Globals_16 = Globals0_15;
        HaveReadModuleMapSrc0_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
        Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
        Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
        *ModuleName_18 = DefaultModuleName_39;
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (*ModuleName_18));
          MR_hl_field(MR_mktag(0), Var_57, 1) = NULL;
        }
        mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2], ((MR_Box) (Var_57)), HaveReadModuleMapSrc0_136, &HaveReadModuleMapSrc_137);
        Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
        Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
        Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
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
        MR_Word Var_62;
        MR_Word DisableSmart_138;
        MR_Word Var_42;
        MR_Word Var_43;

        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (ReturnTimestamp_20));
        }
        parse_tree__read_modules__read_module_src_from_file_11_p_0(Globals0_15, FileName_38, (MR_String) "Reading file", (MR_Integer) 1, Var_62, MaybeTimestamp_21, ParseTreeSrc_22, Specs_23, Errors_24);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_138);
        switch (DisableSmart_138) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Globals_16 = Globals0_15;
            break;
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 128, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), Globals0_15, Globals_16);
            }
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 128, &Smart_41);
        *ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ParseTreeSrc_22, (MR_Integer) 0)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ParseTreeSrc_22, (MR_Integer) 1)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ParseTreeSrc_22, (MR_Integer) 2)));
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
                MR_Word Var_72;
                MR_Word Var_75;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_82;
                MR_Word Var_83;

                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (FileName_38));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (*ModuleName_18));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                  MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[20])));
                }
                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[32])));
                  MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
                }
                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_77));
                }
                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[31])));
                  MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
                }
                {
                  Pieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[30])));
                  MR_hl_field(MR_mktag(1), Pieces_45, 1) = ((MR_Box) (Var_72));
                }
                parse_tree__error_util__write_error_pieces_plain_4_p_0(*Globals_16, Pieces_45);
                libs__compiler_util__record_warning_3_p_0(*Globals_16);
              }
              break;
          }
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
        else
        {
        }
        *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_0_46;
      }
      libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 69, &Stats_154);
      libs__file_util__maybe_report_stats_3_p_0(Stats_154);
      *SourceFileName_19 = mercury__string__f_43_43_2_f_0(FileName_38, (MR_String) ".m");
    }
    else
    {
      MR_Word Verbose_27;
      MR_String ModuleNameString_28;
      MR_Word Stats_37;
      MR_String SourceFileNamePrime_29;
      MR_Word MaybeTimestampPrime_30;
      MR_Word ParseTreeSrcPrime_31;
      MR_Word SpecsPrime_32;
      MR_Word ErrorsPrime_33;
      MR_Word Var_120;
      MR_Word Var_155;
      MR_Word Var_156;

      *ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileOrModuleName_17, (MR_Integer) 0)));
      libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 58, &Verbose_27);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, (MR_String) "% Parsing module \140");
      ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*ModuleName_18);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, ModuleNameString_28);
      libs__file_util__maybe_write_string_4_p_0(Verbose_27, (MR_String) "\' and imported interfaces...\n");
      Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
      Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
      Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
      succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(Var_120, *ModuleName_18, ReturnTimestamp_20, &SourceFileNamePrime_29, &MaybeTimestampPrime_30, &ParseTreeSrcPrime_31, &SpecsPrime_32, &ErrorsPrime_33);
      if (succeeded)
      {
        MR_Word HaveReadModuleMapSrc0_34;
        MR_Word HaveReadModuleMapSrc_35;
        MR_Word Var_121;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_159;

        *Globals_16 = Globals0_15;
        HaveReadModuleMapSrc0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
        Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
        Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
        {
          Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (*ModuleName_18));
          MR_hl_field(MR_mktag(0), Var_121, 1) = NULL;
        }
        mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2], ((MR_Box) (Var_121)), HaveReadModuleMapSrc0_34, &HaveReadModuleMapSrc_35);
        Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
        Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
        Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HaveReadModuleMaps_47 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_35));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_161));
        }
        *SourceFileName_19 = SourceFileNamePrime_29;
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
          Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (ReturnTimestamp_20));
        }
        parse_tree__read_modules__read_module_src_14_p_0(Globals0_15, (MR_String) "Reading module", (MR_Integer) 1, (MR_Integer) 1, *ModuleName_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SourceFileName_19, Var_128, MaybeTimestamp_21, ParseTreeSrc_22, Specs_23, Errors_24);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_36);
        switch (DisableSmart_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Globals_16 = Globals0_15;
            break;
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 128, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), Globals0_15, Globals_16);
            }
            break;
        }
        *STATE_VARIABLE_HaveReadModuleMaps_47 = STATE_VARIABLE_HaveReadModuleMaps_0_46;
      }
      libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 68, &Stats_37);
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
        Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, OptionArgs_7, Args_8);
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

    top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_TimestampFiles_10);
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *FindTimestampFiles_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__find_timestamp_files_2_p_0_1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
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

    top_level__mercury_compile_main__usual_find_target_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_TargetFiles_10);
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *FindTargetFiles_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0_1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
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

    mercury__io__write_string_3_p_0(((MR_String) wrapper_arg_1));
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 522, &CC_Type_10);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 497, &CC_8);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 530, &CSC_11);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 523, &CSC_Type_12);
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

        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 643, &LibGrades_17);
        if (!((LibGrades_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word Stdout_89;

          mercury__io__stdout_stream_3_p_0(&Stdout_89);
          mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Stdout_89, LibGrades_17, (MR_String) "\n", (MR_Word) &top_level__mercury_compile_main_scalar_common_6[0]);
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

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 581, &LinkCommand_13);
        mercury__io__stdout_stream_3_p_0(&Stdout_14);
        mercury__io__write_string_4_p_0(Stdout_14, LinkCommand_13);
        mercury__io__nl_3_p_0(Stdout_14);
      }
      break;
    case (MR_Integer) 8:
      {
        MR_String LinkCommand_84;
        MR_Word Stdout_85;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 582, &LinkCommand_84);
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
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 670, &TargetArch_20);
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
            Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[27])));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[26])));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
          }
          {
            NotRequiredMsg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
            Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Var_24));
          }
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])));
          }
          {
            Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[29])));
            MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[26])));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
          }
          {
            NYIMsg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word conv2_STATE_VARIABLE_GradeOpts_21;

    top_level__mercury_compile_main__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv3_Continue_14, ((MR_Word) wrapper_arg_5), &conv2_STATE_VARIABLE_GradeOpts_21);
    *wrapper_arg_4 = ((MR_Box) (conv3_Continue_14));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_GradeOpts_21));
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

    top_level__mercury_compile_main__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv1_Continue_14, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_GradeOpts_21);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 642, &Detect_10);
    switch (Detect_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word VeryVerbose_13;
          MR_Word Verbose_11;
          MR_String MerStdLibDir_15;
          MR_Word MaybeStdLibDir_14;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 58, &Verbose_11);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 59, &VeryVerbose_13);
          libs__globals__lookup_maybe_string_option_3_p_0(Globals_6, (MR_Integer) 558, &MaybeStdLibDir_14);
          succeeded = ((MR_tag((MR_Word) MaybeStdLibDir_14)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            MerStdLibDir_15 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeStdLibDir_14, (MR_Integer) 0)));
            {
              MR_String ModulesDir_39;
              MR_Word MaybeGradeOpts_40;
              MR_Word Var_44;

              ModulesDir_39 = mercury__dir__f_slash_2_f_0(MerStdLibDir_15, (MR_String) "modules");
              {
                Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (top_level__mercury_compile_main__detect_libgrades_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (VeryVerbose_13));
              }
              mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[0], Var_44, ModulesDir_39, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &MaybeGradeOpts_40);
              if (((MR_tag((MR_Word) MaybeGradeOpts_40)) == (MR_mktag((MR_Integer) 1))))
                *GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                *GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeGradeOpts_40, (MR_Integer) 0)));
            }
          }
          else
          {
            MR_String MerStdLibDir_32;
            MR_Word Var_26;
            MR_Word Var_27;

            succeeded = ((MR_tag((MR_Word) MaybeConfigMerStdLibDir_7)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConfigMerStdLibDir_7, (MR_Integer) 0)));
              succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                MerStdLibDir_32 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
                Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
                succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            if (succeeded)
            {
              MR_String ModulesDir_62;
              MR_Word MaybeGradeOpts_63;
              MR_Word Var_67;

              ModulesDir_62 = mercury__dir__f_slash_2_f_0(MerStdLibDir_32, (MR_String) "modules");
              {
                Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (top_level__mercury_compile_main__detect_libgrades_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (VeryVerbose_13));
              }
              mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[0], Var_67, ModulesDir_62, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &MaybeGradeOpts_63);
              if (((MR_tag((MR_Word) MaybeGradeOpts_63)) == (MR_mktag((MR_Integer) 1))))
                *GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                *GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeGradeOpts_63, (MR_Integer) 0)));
            }
            else
              *GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) &top_level__mercury_compile_main_scalar_common_4[0];
    }
    else
    {
      MR_String Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String File_13;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", Arg_9, &File_13);
      if (succeeded)
      {
        MR_Word OpenRes_14;

        mercury__io__open_input_4_p_0(File_13, &OpenRes_14);
        if (((MR_tag((MR_Word) OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_String Msg_20;
          MR_String Var_28;
          MR_Word Var_30;

          Var_28 = mercury__string__f_43_43_2_f_0(File_13, (MR_String) "\'");
          Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", Var_28);
          Var_30 = mercury__io__make_io_error_1_f_0(Msg_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
          }
        }
        else
        {
          MR_Word S_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenRes_14, (MR_Integer) 0)));
          MR_Word ReadRes_16;

          top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(S_15, &ReadRes_16);
          if (((MR_tag((MR_Word) ReadRes_16)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word E_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReadRes_16, (MR_Integer) 0)));
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
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
            }
          }
          else
          {
            MR_Word FileArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReadRes_16, (MR_Integer) 0)));
            MR_Word Var_33;
            MR_Word next_value_of_HeadVar__1_1;

            Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, FileArgs_17, Args_10);
            // direct tailcall eliminated
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
        if (((MR_tag((MR_Word) Result0_21)) == (MR_mktag((MR_Integer) 1))))
          *HeadVar__2_2 = Result0_21;
        else
        {
          MR_Word ExpandedArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_21, (MR_Integer) 0)));
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Arg_9));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (ExpandedArgs_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
        {
          *Res_6 = (MR_Word) &top_level__mercury_compile_main_scalar_common_4[0];
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), LineRes_8, (MR_Integer) 0)));
          MR_Word Res0_10;

          top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(S_5, &Res0_10);
          if (((MR_tag((MR_Word) Res0_10)) == (MR_mktag((MR_Integer) 1))))
            *Res_6 = Res0_10;
          else
          {
            MR_Word Lines_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res0_10, (MR_Integer) 0)));
            MR_String StrippedLine_12;

            StrippedLine_12 = mercury__string__strip_1_f_0(Line_9);
            succeeded = (strcmp(StrippedLine_12, (MR_String) "") == 0);
            if (succeeded)
              *Res_6 = Res0_10;
            else
            {
              MR_Word Var_20;

              {
                Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (StrippedLine_12));
                MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Lines_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Res_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word E_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), LineRes_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = top_level__mercury_compile_main____Unify____compile_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    top_level__mercury_compile_main____Compare____compile_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = top_level__mercury_compile_main____Unify____file_or_module_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    top_level__mercury_compile_main____Compare____file_or_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
