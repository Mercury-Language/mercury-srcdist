/*
** Automatically generated from `make.module_target.m'
** by the Mercury compiler,
** version rotd-2023-06-14
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


// :- module make.module_target.
// :- implementation.

/*
INIT mercury__make__module_target__init
ENDINIT
*/

#include "make.module_target.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.shell_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_main.mih"
#include "transform_hlds.mmc_analysis.mih"



struct make__module_target__make_dependency_files_10_p_0_env_0_s {
  MR_bool make__module_target__make_dependency_files_10_p_0_env_0__succeeded;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21;
  jmp_buf make__module_target__make_dependency_files_10_p_0_env_0__commit_0;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__Var_106;
  MR_Box make__module_target__make_dependency_files_10_p_0_env_0__conv4_Var_106;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_compilation_task_type_and_options_0_0[2];

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0;

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_compilation_task_type_and_options_0_0[1];

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_compilation_task_type_and_options_0[1];

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_compilation_task_type_and_options_0[1];

static const MR_Integer make__module_target__make__module_target__functor_number_map_compilation_task_type_and_options_0[1];

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3];

static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3];

static const MR_DuArgLocn make__module_target__make__module_target__field_locns_foreign_code_file_0_0[3];

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0;

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1];

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1];

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1];

static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1];

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1038__1_1_f_0(
  MR_Word LambdaHeadVar__1_60);

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__1017__1_2_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word * LambdaHeadVar__2_54);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__871__1_3_p_0(
  MR_String TouchedFile_6);

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__247__1_2_p_0(
  MR_Word KeepGoing0_32,
  MR_Word KeepGoing_45);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0(
  MR_Word Globals_12,
  MR_String TargetFileName_21,
  MR_Word DepFiles0_34,
  MR_Word STATE_VARIABLE_Info_68_68);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__239__1_3_p_0(
  MR_String LambdaHeadVar__1_85);

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
  MR_Word Globals_7,
  MR_Word TouchedTargetFile_8,
  MR_Word STATE_VARIABLE_TimestampFileNames_0_16,
  MR_Word * STATE_VARIABLE_TimestampFileNames_17);

static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word HeadVar__3_8,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11);

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
  MR_Word Globals_5,
  MR_String TouchedFile_6,
  MR_Word STATE_VARIABLE_Timestamps_0_9,
  MR_Word * STATE_VARIABLE_Timestamps_10);

static void MR_CALL 
make__module_target__update_target_status_4_p_0(
  MR_Word TargetStatus_5,
  MR_Word TargetFile_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static MR_Box MR_CALL 
make__module_target__invoke_mmc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__invoke_mmc_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word MaybeArgFileName_12,
  MR_Word Args_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
make__module_target__compile_foreign_code_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word PIC_13,
  MR_Word ModuleDepInfo_14,
  MR_Word ForeignCodeFile_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
make__module_target__build_object_code_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Target_13,
  MR_Word PIC_14,
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word _ModuleDepInfo_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_55_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Target_13,
  MR_Word PIC_14,
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word * Succeeded_18);

static void MR_CALL 
make__module_target__cleanup_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_target__cleanup_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_target__cleanup_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MaybeArgFileName_10,
  MR_Word TouchedTargetFiles_11,
  MR_Word TouchedFiles_12,
  MR_Word STATE_VARIABLE_MakeInfo_0_17,
  MR_Word * STATE_VARIABLE_MakeInfo_18);

static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0(
  MR_Word ExtraOptions_11,
  MR_Word Globals_12,
  MR_Word TargetFile_13,
  MR_Word CompilationTaskAndOptions_14,
  MR_Word ModuleDepInfo_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_task_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static void MR_CALL 
make__module_target__build_target_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__build_target_12_p_0(
  MR_Word Globals_13,
  MR_Word CompilationTask_14,
  MR_Word TargetFile_15,
  MR_Word ModuleDepInfo_16,
  MR_Word TouchedTargetFiles_17,
  MR_Word TouchedFiles_18,
  MR_Word ExtraOptions_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0(
  MR_Word Globals_11,
  MR_Word Succeeded_12,
  MR_Word TargetFile_13,
  MR_String TargetFileName_14,
  MR_Word TouchedTargetFiles_15,
  MR_Word OtherTouchedFiles_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static MR_Word MR_CALL 
make__module_target__do_task_in_separate_process_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_11(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0(
  MR_Word ModuleName_13,
  MR_Word Task_14,
  MR_Word ArgFileName_15,
  MR_Word ModuleDepInfo_16,
  MR_Word Globals_17,
  MR_Word AllOptionArgs_18,
  MR_Word ErrorStream_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44);

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_8_p_0(
  MR_Word Globals_9,
  MR_Word Mkdir_10,
  MR_Word ObjOtherExt_11,
  MR_Word ObjNewExt_12,
  MR_String FactTableFileName_13,
  MR_Word * ForeignCodeFile_14);

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word Globals_6,
  MR_Word Args_7,
  MR_Word * Succeeded_8);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word DepFilesToMake_13,
  MR_Word TouchedTargetFiles_14,
  MR_Word TouchedFiles_15,
  MR_Word * DepsResult_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word * ForceReanalysis_9,
  MR_Word Info_10);

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__module_target_scalar_common_1[29][2];

static /* final */ const MR_Box make__module_target_scalar_common_2[7][3];

static /* final */ const MR_Box make__module_target_scalar_common_3[11][1];

static /* final */ const MR_Box make__module_target_scalar_common_4[5][11];

static /* final */ const MR_Box make__module_target_scalar_common_5[4][10];

static /* final */ const MR_Box make__module_target_scalar_common_6[2][12];

static /* final */ const MR_Box make__module_target_scalar_common_7[4][5];

static /* final */ const MR_Box make__module_target_scalar_common_8[3][8];

static /* final */ const MR_Box make__module_target_scalar_common_9[1][13];

static /* final */ const MR_Box make__module_target_scalar_common_11[2][7];

static /* final */ const MR_Box make__module_target_scalar_common_12[3][9];

static /* final */ const MR_Box make__module_target_scalar_common_13[5][4];

static /* final */ const MR_Box make__module_target_scalar_common_14[1][6];


struct make__module_target__vector_common_type_10_0_s {
  const MR_Word make__module_target__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct make__module_target__vector_common_type_10_0_s make__module_target_vector_common_10[8];



static /* final */ const MR_Box make__module_target_scalar_common_1[29][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "--make-analysis-registry")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "--compile-to-c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "--csharp-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "--errorcheck-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "--make-private-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "--make-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_3[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "--java-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "--make-optimization-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "--make-xml-doc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[1])),
    ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[2])),
    ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__invoke_mmc_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[0])),
    ((MR_Box) (make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_3[11][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".cs")))) },
  /* row   2 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".java")))) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   9 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row  10 */
  { (MR_Box) ((MR_Unsigned) 7U) },
};

static /* final */ const MR_Box make__module_target_scalar_common_4[5][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_5[4][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_6[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_7[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_8[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_9[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_11[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_12[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_13[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_14[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__module_target__vector_common_type_10_0_s make__module_target_vector_common_10[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "libs.process_util.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0) }
};

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_compilation_task_type_and_options_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_compilation_task_type_0),
  (MR_PseudoTypeInfo) (&make__module_target__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0 = {
  (MR_String) "task_and_options",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__module_target__make__module_target__field_types_compilation_task_type_and_options_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_compilation_task_type_and_options_0_0[1] = { &make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0 };

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_compilation_task_type_and_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__module_target__make__module_target__du_stag_ordered_compilation_task_type_and_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_compilation_task_type_and_options_0[1] = { &make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0 };

static const MR_Integer make__module_target__make__module_target__functor_number_map_compilation_task_type_and_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_compilation_task_type_and_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____compilation_task_type_and_options_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____compilation_task_type_and_options_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "compilation_task_type_and_options",
  { make__module_target__make__module_target__du_name_ordered_compilation_task_type_and_options_0 },
  { make__module_target__make__module_target__du_ptag_ordered_compilation_task_type_and_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__module_target__make__module_target__functor_number_map_compilation_task_type_and_options_0,

};

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3] = {
  (MR_String) "foreign_language",
  (MR_String) "target_file",
  (MR_String) "object_file"
};

static const MR_DuArgLocn make__module_target__make__module_target__field_locns_foreign_code_file_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0 = {
  (MR_String) "foreign_code_file",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__module_target__make__module_target__field_types_foreign_code_file_0_0,
  make__module_target__make__module_target__field_names_foreign_code_file_0_0,
  make__module_target__make__module_target__field_locns_foreign_code_file_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1] = { &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0 };

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1] = { &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0 };

static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_foreign_code_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____foreign_code_file_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____foreign_code_file_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "foreign_code_file",
  { make__module_target__make__module_target__du_name_ordered_foreign_code_file_0 },
  { make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__module_target__make__module_target__functor_number_map_foreign_code_file_0,

};

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1038__1_1_f_0(
  MR_Word LambdaHeadVar__1_60)
{
  MR_String LambdaHeadVar__2_61 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_60, (MR_Integer) 1))));

  return LambdaHeadVar__2_61;
}

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__1017__1_2_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word * LambdaHeadVar__2_54)
{
  MR_bool succeeded = (LambdaHeadVar__1_53 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
    *LambdaHeadVar__2_54 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_53, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__871__1_3_p_0(
  MR_String TouchedFile_6)
{
  MR_Word Var_19;
  MR_Word Var_21;

  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (TouchedFile_6));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "Deleting timestamp for %s\n", Var_19);
}

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__247__1_2_p_0(
  MR_Word KeepGoing0_32,
  MR_Word KeepGoing_45)
{
  MR_bool succeeded = (KeepGoing_45 == KeepGoing0_32);

  return succeeded;
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__239__1_3_p_0(((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  make__util__dependency_file_to_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0(
  MR_Word Globals_12,
  MR_String TargetFileName_21,
  MR_Word DepFiles0_34,
  MR_Word STATE_VARIABLE_Info_68_68)
{
  MR_Word DepFilesPlainSet_39;
  MR_Word DepFileNames_40;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_81;
  MR_Word Var_83;
  MR_Box conv1_STATE_VARIABLE_IO_79_79;
  MR_Box conv2_LambdaHeadVar__2_74;

  make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_68_68, DepFiles0_34, &DepFilesPlainSet_39);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&make__module_target_scalar_common_8[2]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0_1));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (Globals_12));
  }
  Var_78 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesPlainSet_39);
  mercury__list__map_foldl_5_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Var_78, &DepFileNames_40, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_79_79);
  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) (TargetFileName_21));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "%s: dependencies:\n", Var_81);
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__module_target_scalar_common_2[6]), DepFileNames_40, ((MR_Box) ((MR_Integer) 0)), &conv2_LambdaHeadVar__2_74);
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__239__1_3_p_0(
  MR_String LambdaHeadVar__1_85)
{
  MR_Word Var_89;
  MR_Word Var_90;

  {
    Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_90, 1) = ((MR_Box) (LambdaHeadVar__1_85));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "\t%s\n", Var_89);
}

void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
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
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    make__make_info____Compare____compilation_task_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&make__module_target_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = make__make_info____Unify____compilation_task_type_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&make__module_target_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
  MR_Word Globals_7,
  MR_Word TouchedTargetFile_8,
  MR_Word STATE_VARIABLE_TimestampFileNames_0_16,
  MR_Word * STATE_VARIABLE_TimestampFileNames_17)
{
  MR_bool succeeded;
  MR_Word TargetModuleName_11 = ((MR_Word) ((MR_hl_field(0, TouchedTargetFile_8, (MR_Integer) 0))));
  MR_Word TargetType_12 = ((MR_Word) ((MR_hl_field(0, TouchedTargetFile_8, (MR_Integer) 1))));
  MR_Word TimestampOtherExt_13;
  MR_Word TimestampNewExt_14;

  succeeded = make__util__timestamp_extension_3_p_0(TargetType_12, &TimestampOtherExt_13, &TimestampNewExt_14);
  if (succeeded)
  {
    MR_String TimestampFile_15;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (TimestampOtherExt_13));
    }
    parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_7, (MR_String) "predicate \140make.module_target.gather_target_file_timestamp_file_names\'/6", (MR_Integer) 1, Var_22, TimestampNewExt_14, TargetModuleName_11, &TimestampFile_15);
    mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TimestampFile_15)), STATE_VARIABLE_TimestampFileNames_0_16, STATE_VARIABLE_TimestampFileNames_17);
  }
  else
    *STATE_VARIABLE_TimestampFileNames_17 = STATE_VARIABLE_TimestampFileNames_0_16;
}

static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word HeadVar__3_8,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11)
{
  make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(Globals_6, FileName_7, STATE_VARIABLE_Timestamps_0_10, STATE_VARIABLE_Timestamps_11);
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(FileName_7, (MR_String) ".analysis");
  if (succeeded)
    make__module_target__delete_timestamp_4_p_0(Globals_6, FileName_7, STATE_VARIABLE_Timestamps_0_10, STATE_VARIABLE_Timestamps_11);
  else
    *STATE_VARIABLE_Timestamps_11 = STATE_VARIABLE_Timestamps_0_10;
}

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__module_target__IntroducedFrom__pred__delete_timestamp__871__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
  MR_Word Globals_5,
  MR_String TouchedFile_6,
  MR_Word STATE_VARIABLE_Timestamps_0_9,
  MR_Word * STATE_VARIABLE_Timestamps_10)
{
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&make__module_target_scalar_common_14[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (make__module_target__delete_timestamp_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TouchedFile_6));
  }
  make__util__debug_make_msg_4_p_0(Globals_5, Var_12);
  mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[0]), ((MR_Box) (TouchedFile_6)), STATE_VARIABLE_Timestamps_0_9, STATE_VARIABLE_Timestamps_10);
}

static void MR_CALL 
make__module_target__update_target_status_4_p_0(
  MR_Word TargetStatus_5,
  MR_Word TargetFile_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Dep_8;
  MR_Word DepStatus0_9;
  MR_Word DepStatus_10;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Integer Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Unsigned packed_word_1;

  {
    Dep_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Dep_8, 0) = ((MR_Box) (TargetFile_6));
  }
  DepStatus0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 8))));
  mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_8)), ((MR_Box) (TargetStatus_5)), DepStatus0_9, &DepStatus_10);
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 2))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 3))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 6))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 7))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 9))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 10))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 11))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 12))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 13))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 14))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 15)));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 16))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 17))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 18))));
  Var_55 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 19))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 20))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 21))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 8) = ((MR_Box) (DepStatus_10));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 15) = (MR_Box) (packed_word_1);
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_57));
  }
}

static MR_Box MR_CALL 
make__module_target__invoke_mmc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__shell_util__quote_shell_cmd_arg_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_target__invoke_mmc_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word MaybeArgFileName_12,
  MR_Word Args_13,
  MR_Word * Succeeded_14)
{
  MR_bool succeeded;
  MR_String ProgName_16;
  MR_String MercuryCompiler_18;
  MR_Word QuotedArgs_19;
  MR_String ArgFileName_20;
  MR_Word ArgFileOpenRes_21;
  MR_Word Var_27;

  mercury__io__progname_4_p_0((MR_String) "", &ProgName_16);
  succeeded = (strcmp(ProgName_16, (MR_String) "") == 0);
  if (!(succeeded))
    succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_Word MaybeMercuryCompiler_17;

    mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_COMPILER", &MaybeMercuryCompiler_17);
    if ((MaybeMercuryCompiler_17 == (MR_Word) ((MR_Unsigned) 0U)))
      MercuryCompiler_18 = (MR_String) "mmc";
    else
      MercuryCompiler_18 = ((MR_String) ((MR_hl_field(1, MaybeMercuryCompiler_17, (MR_Integer) 0))));
  }
  else
    MercuryCompiler_18 = ProgName_16;
  QuotedArgs_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[5]), Args_13);
  if ((MaybeArgFileName_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.invoke_mmc\'/8", (MR_String) "argument file not created");
      return;
    }
  else
    ArgFileName_20 = ((MR_String) ((MR_hl_field(1, MaybeArgFileName_12, (MR_Integer) 0))));
  mercury__io__open_output_4_p_0(ArgFileName_20, &ArgFileOpenRes_21);
  if (((MR_tag((MR_Word) ArgFileOpenRes_21)) == (MR_Integer) 1))
  {
    MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, ArgFileOpenRes_21, (MR_Integer) 0))));
    MR_String ErrorMsg_26;

    *Succeeded_14 = (MR_Integer) 0;
    mercury__io__error_message_2_p_0(Error_25, &ErrorMsg_26);
    mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
    mercury__io__write_string_3_p_0(ArgFileName_20);
    mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
    mercury__io__write_string_3_p_0(ErrorMsg_26);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
  else
  {
    MR_Word ArgFileStream_22 = ((MR_Word) ((MR_hl_field(0, ArgFileOpenRes_21, (MR_Integer) 0))));
    MR_String Command_23;
    MR_String Var_42;
    MR_String Var_49;
    MR_String Var_52;
    MR_String Var_71;

    Var_42 = mercury__string__join_list_2_f_0((MR_String) " ", QuotedArgs_19);
    mercury__io__write_string_4_p_0(ArgFileStream_22, (MR_String) "MCFLAGS = ");
    mercury__io__write_string_4_p_0(ArgFileStream_22, Var_42);
    mercury__io__write_string_4_p_0(ArgFileStream_22, (MR_String) "\n");
    mercury__io__close_output_3_p_0(ArgFileStream_22);
    Var_49 = libs__shell_util__quote_shell_cmd_arg_1_f_0(MercuryCompiler_18);
    Var_52 = libs__shell_util__quote_shell_cmd_arg_1_f_0(ArgFileName_20);
    Var_71 = mercury__string__f_43_43_2_f_0((MR_String) " --arg-file ", Var_52);
    Command_23 = mercury__string__f_43_43_2_f_0(Var_49, Var_71);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ProgressStream_10, ErrorStream_11, ErrorStream_11, (MR_Integer) 0, Command_23, Succeeded_14);
  }
  mercury__io__file__remove_file_4_p_0(ArgFileName_20, &Var_27);
}

static void MR_CALL 
make__module_target__compile_foreign_code_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word PIC_13,
  MR_Word ModuleDepInfo_14,
  MR_Word ForeignCodeFile_15,
  MR_Word * Succeeded_16)
{
  MR_String Var_32 = ((MR_String) ((MR_hl_field(0, ForeignCodeFile_15, (MR_Integer) 2))));
  MR_String Var_33 = ((MR_String) ((MR_hl_field(0, ForeignCodeFile_15, (MR_Integer) 1))));
  MR_Word Var_34 = ((MR_Unsigned) ((MR_hl_field(0, ForeignCodeFile_15, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (Var_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, PIC_13, Var_33, Var_32, Succeeded_16);
      break;
    case (MR_Integer) 1:
      backend_libs__compile_target_code__compile_csharp_file_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, ModuleDepInfo_14, Var_33, Var_32, Succeeded_16);
      break;
    case (MR_Integer) 2:
      backend_libs__compile_target_code__compile_java_files_8_p_0(Globals_10, ProgressStream_11, ErrorStream_12, Var_33, (MR_Word) ((MR_Unsigned) 0U), Succeeded_16);
      break;
  }
}

static void MR_CALL 
make__module_target__build_object_code_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Target_13,
  MR_Word PIC_14,
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word _ModuleDepInfo_17,
  MR_Word * Succeeded_18)
{
  make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_55_93_95_48_10_p_0(Globals_11, ModuleName_12, Target_13, PIC_14, ProgressStream_15, ErrorStream_16, Succeeded_18);
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_55_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Target_13,
  MR_Word PIC_14,
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word * Succeeded_18)
{
  switch (Target_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__compile_c_file_8_p_0(Globals_11, ProgressStream_15, ErrorStream_16, PIC_14, ModuleName_12, Succeeded_18);
      break;
    case (MR_Integer) 1:
      {
        MR_String CsharpFile_21;
        MR_Word Var_44;

        parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_11, (MR_String) "predicate \140make.module_target.build_object_code\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[1])), (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[5])), ModuleName_12, &CsharpFile_21);
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (CsharpFile_21));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        backend_libs__compile_target_code__link_9_p_0(Globals_11, ProgressStream_15, ErrorStream_16, (MR_Integer) 4, ModuleName_12, Var_44, Succeeded_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String JavaFile_20;

        parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_11, (MR_String) "predicate \140make.module_target.build_object_code\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[2])), (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[6])), ModuleName_12, &JavaFile_20);
        backend_libs__compile_target_code__compile_java_files_8_p_0(Globals_11, ProgressStream_15, ErrorStream_16, JavaFile_20, (MR_Word) ((MR_Unsigned) 0U), Succeeded_18);
      }
      break;
  }
}

static void MR_CALL 
make__module_target__cleanup_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__5_5;

  make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__cleanup_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_6;

  make__util__remove_make_target_file_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
make__module_target__cleanup_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MaybeArgFileName_10,
  MR_Word TouchedTargetFiles_11,
  MR_Word TouchedFiles_12,
  MR_Word STATE_VARIABLE_MakeInfo_0_17,
  MR_Word * STATE_VARIABLE_MakeInfo_18)
{
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_MakeInfo_22_22;
  MR_Word Var_26;
  MR_Box conv2_STATE_VARIABLE_MakeInfo_22_22;
  MR_Box conv1_STATE_VARIABLE_IO_23_23;
  MR_Box conv5_STATE_VARIABLE_MakeInfo_18;
  MR_Box conv4_STATE_VARIABLE_IO_28_28;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__module_target_scalar_common_4[4]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (make__module_target__cleanup_files_8_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) ((MR_String) "predicate \140make.module_target.cleanup_files\'/8"));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) ((MR_Integer) 73));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, TouchedTargetFiles_11, ((MR_Box) (STATE_VARIABLE_MakeInfo_0_17)), &conv2_STATE_VARIABLE_MakeInfo_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
  STATE_VARIABLE_MakeInfo_22_22 = ((MR_Word) (conv2_STATE_VARIABLE_MakeInfo_22_22));
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&make__module_target_scalar_common_5[3]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (make__module_target__cleanup_files_8_p_0_2));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) ((MR_Integer) 73));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, TouchedFiles_12, ((MR_Box) (STATE_VARIABLE_MakeInfo_22_22)), &conv5_STATE_VARIABLE_MakeInfo_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_28_28);
  *STATE_VARIABLE_MakeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_MakeInfo_18));
  if (!((MaybeArgFileName_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ArgFileName2_15 = ((MR_String) ((MR_hl_field(1, MaybeArgFileName_10, (MR_Integer) 0))));
    MR_Word Var_16;

    mercury__io__file__remove_file_4_p_0(ArgFileName2_15, &Var_16);
  }
}

static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ForeignCodeFile_14;

  make__module_target__get_fact_table_foreign_code_file_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) (wrapper_arg_1)), &conv0_ForeignCodeFile_14);
  *wrapper_arg_2 = ((MR_Box) (conv0_ForeignCodeFile_14));
}

void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0(
  MR_Word Globals_7,
  MR_Word PIC_8,
  MR_Word ModuleDepInfo_9,
  MR_Word * ForeignFiles_10)
{
  MR_Word ObjExt_12;
  MR_Word ObjNewExt_13;
  MR_Word CompilationTarget_15;
  MR_Word Var_14;

  backend_libs__compile_target_code__pic_object_file_extension_5_p_0(Globals_7, PIC_8, &ObjExt_12, &ObjNewExt_13, &Var_14);
  libs__globals__get_target_2_p_0(Globals_7, &CompilationTarget_15);
  switch (CompilationTarget_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FactTableFiles_16;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_24;
        MR_Box conv1_STATE_VARIABLE_IO_19;

        parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_9, &FactTableFiles_16);
        {
          Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_24, 1) = (MR_Box) ((MR_Unsigned) (ObjNewExt_13));
        }
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&make__module_target_scalar_common_4[3]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (make__module_target__external_foreign_code_files_6_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(0, Var_20, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_20, 5) = ((MR_Box) (ObjExt_12));
          MR_hl_field(0, Var_20, 6) = ((MR_Box) (Var_24));
        }
        Var_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_16);
        mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, Var_21, ForeignFiles_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ForeignFiles_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void MR_CALL 
make__module_target__record_made_target_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_String TargetFileName_12,
  MR_Word CompilationTask_13,
  MR_Word Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word TouchedTargetFiles_17;
  MR_Word TouchedFiles_18;
  MR_Word STATE_VARIABLE_Info_23_23;

  make__module_target__find_files_maybe_touched_by_task_9_p_0(Globals_10, TargetFile_11, CompilationTask_13, &TouchedTargetFiles_17, &TouchedFiles_18, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23);
  make__module_target__record_made_target_given_maybe_touched_files_10_p_0(Globals_10, Succeeded_14, TargetFile_11, TargetFileName_12, TouchedTargetFiles_17, TouchedFiles_18, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
}

void MR_CALL 
make__module_target__make_module_target_8_p_0(
  MR_Word ExtraOptions_9,
  MR_Word Globals_10,
  MR_Word Dep_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Status_15;
    MR_Word STATE_VARIABLE_Info_36_36;

    // setup for model_det tailcalls optimized into a loop
    ;
    make__dependencies__dependency_status_7_p_0(Globals_10, Dep_11, &Status_15, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_36_36);
    switch (Status_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
            *Succeeded_12 = (MR_Integer) 1;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.make_module_target\'/8", (MR_String) "target being built, circular dependencies\?");
              return;
            }
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_36_36;
        }
        break;
      case (MR_Integer) 3:
        {
          *Succeeded_12 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_36_36;
        }
        break;
      case (MR_Integer) 0:
        if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
        {
          *Succeeded_12 = (MR_Integer) 1;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_36_36;
        }
        else
        {
          MR_Word TargetFile_17 = ((MR_Word) ((MR_hl_field(0, Dep_11, (MR_Integer) 0))));
          MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_17, (MR_Integer) 0))));
          MR_Word TargetType_19 = ((MR_Word) ((MR_hl_field(0, TargetFile_17, (MR_Integer) 1))));
          MR_Word MaybeModuleDepInfo_20;
          MR_Word STATE_VARIABLE_Info_38_38;

          make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_18, &MaybeModuleDepInfo_20, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_38_38);
          if ((MaybeModuleDepInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word DepStatus0_21;
            MR_Word DepStatus_22;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Integer Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Unsigned packed_word_1;

            *Succeeded_12 = (MR_Integer) 0;
            DepStatus0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 8))));
            mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_11)), ((MR_Box) ((MR_Integer) 3)), DepStatus0_21, &DepStatus_22);
            Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 0))));
            Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 1))));
            Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 2))));
            Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 3))));
            Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 4))));
            Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 5))));
            Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 6))));
            Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 7))));
            Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 9))));
            Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 10))));
            Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 11))));
            Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 12))));
            Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 13))));
            Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 14))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 15)));
            Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 16))));
            Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 17))));
            Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 18))));
            Var_91 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 19))));
            Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 20))));
            Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_38_38, (MR_Integer) 21))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_33 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_72));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_73));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_74));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_75));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_76));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_77));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_78));
              MR_hl_field(0, base, 8) = ((MR_Box) (DepStatus_22));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_80));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_81));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_82));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_83));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_84));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_85));
              MR_hl_field(0, base, 15) = (MR_Box) (packed_word_1);
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_88));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_89));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_90));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_91));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_92));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_93));
            }
          }
          else
          {
            MR_Word ModuleDepInfo_23 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_20, (MR_Integer) 0))));
            MR_Word CompilationTaskAndOptions_24;
            MR_Word SourceFileModuleName_25;
            MR_Word CompilationTaskType_26;

            switch (MR_tag((MR_Word) TargetType_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(TargetType_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 8:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.get_compilation_task_and_options\'/2", (MR_String) "compilation_task");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[14]);
                    break;
                  case (MR_Integer) 2:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[16]);
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[18]);
                    break;
                  case (MR_Integer) 5:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[20]);
                    break;
                  case (MR_Integer) 6:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[25]);
                    break;
                  case (MR_Integer) 7:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[8]);
                    break;
                  case (MR_Integer) 9:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[10]);
                    break;
                  case (MR_Integer) 10:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[12]);
                    break;
                  case (MR_Integer) 11:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[23]);
                    break;
                  case (MR_Integer) 12:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[21]);
                    break;
                  case (MR_Integer) 13:
                    CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[27]);
                    break;
                }
                break;
              case (MR_Integer) 1:
                CompilationTaskAndOptions_24 = (MR_Word) (&make__module_target_scalar_common_1[10]);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word PIC_98 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_19, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word Var_106;

                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = (MR_Box) ((MR_Unsigned) (PIC_98));
                  }
                  {
                    CompilationTaskAndOptions_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CompilationTaskAndOptions_24, 0) = ((MR_Box) (Var_106));
                    MR_hl_field(0, CompilationTaskAndOptions_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, TargetType_19, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_108;
                      MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(3, TargetType_19, (MR_Integer) 1)));

                      {
                        Var_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_108, 0) = (MR_Box) (packed_word_3);
                      }
                      {
                        CompilationTaskAndOptions_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CompilationTaskAndOptions_24, 0) = ((MR_Box) (Var_108));
                        MR_hl_field(0, CompilationTaskAndOptions_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String FactTable_100 = ((MR_String) ((MR_hl_field(3, TargetType_19, (MR_Integer) 2))));
                      MR_Word Var_110;
                      MR_Word PIC_113 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_19, (MR_Integer) 1))) & (MR_Integer) 1);

                      {
                        Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_110, 0) = (MR_Box) ((MR_Unsigned) (PIC_113));
                        MR_hl_field(3, Var_110, 1) = ((MR_Box) (FactTable_100));
                      }
                      {
                        CompilationTaskAndOptions_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CompilationTaskAndOptions_24, 0) = ((MR_Box) (Var_110));
                        MR_hl_field(0, CompilationTaskAndOptions_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
                break;
            }
            parse_tree__module_dep_info__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_23, &SourceFileModuleName_25);
            CompilationTaskType_26 = ((MR_Word) ((MR_hl_field(0, CompilationTaskAndOptions_24, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) CompilationTaskType_26)) == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_25, ModuleName_18);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word NestedTargetFile_29;
              MR_Word Var_42;
              MR_Word next_value_of_Dep_11;
              MR_Word next_value_of_STATE_VARIABLE_Info_0_32;

              {
                NestedTargetFile_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NestedTargetFile_29, 0) = ((MR_Box) (SourceFileModuleName_25));
                MR_hl_field(0, NestedTargetFile_29, 1) = ((MR_Box) (TargetType_19));
              }
              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_42, 0) = ((MR_Box) (NestedTargetFile_29));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Dep_11 = Var_42;
              next_value_of_STATE_VARIABLE_Info_0_32 = STATE_VARIABLE_Info_38_38;
              Dep_11 = next_value_of_Dep_11;
              STATE_VARIABLE_Info_0_32 = next_value_of_STATE_VARIABLE_Info_0_32;
              continue;
            }
            else
              make__module_target__make_module_target_file_main_path_10_p_0(ExtraOptions_9, Globals_10, TargetFile_17, CompilationTaskAndOptions_24, ModuleDepInfo_23, Succeeded_12, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_33);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Succeeded_12 = (MR_Integer) 1;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_36_36;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_12));
}

static MR_bool MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__247__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__232__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0(
  MR_Word ExtraOptions_11,
  MR_Word Globals_12,
  MR_Word TargetFile_13,
  MR_Word CompilationTaskAndOptions_14,
  MR_Word ModuleDepInfo_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  MR_bool succeeded;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
  MR_Word TargetType_20 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));
  MR_String TargetFileName_21;
  MR_Word CompilationTaskType_22;
  MR_Word TouchedTargetFiles_24;
  MR_Word TouchedFiles_25;
  MR_Word ModulesToCheck_29;
  MR_Word ModuleIndexesToCheckSet_30;
  MR_Word ModuleIndexesToCheck_31;
  MR_Word KeepGoing0_32;
  MR_Word DepsSucceeded_33;
  MR_Word DepFiles0_34;
  MR_Word DepFilesSet0_35;
  MR_Word DepFilesSet_37;
  MR_Word DepFilesToMake_38;
  MR_Word KeepGoing_45;
  MR_Word STATE_VARIABLE_Info_57_57;
  MR_Word STATE_VARIABLE_Info_60_60;
  MR_Word STATE_VARIABLE_Info_65_65;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word Var_71;
  MR_Word Var_93;
  MR_Box conv1_STATE_VARIABLE_Info_60_60;

  make__util__get_make_target_file_name_6_p_0(Globals_12, (MR_String) "predicate \140make.module_target.make_module_target_file_main_path\'/10", TargetFile_13, &TargetFileName_21);
  CompilationTaskType_22 = ((MR_Word) ((MR_hl_field(0, CompilationTaskAndOptions_14, (MR_Integer) 0))));
  make__module_target__find_files_maybe_touched_by_task_9_p_0(Globals_12, TargetFile_13, CompilationTaskType_22, &TouchedTargetFiles_24, &TouchedFiles_25, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_57_57);
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[0]), TouchedTargetFiles_24, ((MR_Box) (STATE_VARIABLE_Info_57_57)), &conv1_STATE_VARIABLE_Info_60_60);
  STATE_VARIABLE_Info_60_60 = ((MR_Word) (conv1_STATE_VARIABLE_Info_60_60));
  make__util__debug_file_msg_5_p_0(Globals_12, TargetFile_13, (MR_String) "checking dependencies");
  succeeded = ((MR_tag((MR_Word) CompilationTaskType_22)) == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word MaybeTopModule_27;
    MR_Word NestedSubModules_28;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_15, &MaybeTopModule_27);
    NestedSubModules_28 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_27);
    {
      ModulesToCheck_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ModulesToCheck_29, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(1, ModulesToCheck_29, 1) = ((MR_Box) (NestedSubModules_28));
    }
  }
  else
    {
      ModulesToCheck_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ModulesToCheck_29, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(1, ModulesToCheck_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  make__deps_set__module_names_to_index_set_4_p_0(ModulesToCheck_29, &ModuleIndexesToCheckSet_30, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_65_65);
  ModuleIndexesToCheck_31 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__module_target_scalar_common_1[0]), ModuleIndexesToCheckSet_30);
  KeepGoing0_32 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_65_65, (MR_Integer) 15))) & (MR_Integer) 1);
  Var_67 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  make__dependencies__find_target_dependencies_of_modules_12_p_0(KeepGoing0_32, Globals_12, TargetType_20, ModuleIndexesToCheck_31, (MR_Integer) 1, &DepsSucceeded_33, Var_67, &DepFiles0_34, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_68_68);
  make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_68_68, DepFiles0_34, &DepFilesSet0_35);
  succeeded = (TargetType_20 == (MR_Word) ((MR_Unsigned) 8U));
  if (succeeded)
  {
    MR_Word PrivateInts_36;

    PrivateInts_36 = make__util__make_dependency_list_2_f_0(ModulesToCheck_29, (MR_Word) ((MR_Unsigned) 8U));
    mercury__set__delete_list_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), PrivateInts_36, DepFilesSet0_35, &DepFilesSet_37);
  }
  else
    DepFilesSet_37 = DepFilesSet0_35;
  DepFilesToMake_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet_37);
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (&make__module_target_scalar_common_12[2]));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_2));
    MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_71, 3) = ((MR_Box) (Globals_12));
    MR_hl_field(0, Var_71, 4) = ((MR_Box) (TargetFileName_21));
    MR_hl_field(0, Var_71, 5) = ((MR_Box) (DepFiles0_34));
    MR_hl_field(0, Var_71, 6) = ((MR_Box) (STATE_VARIABLE_Info_68_68));
  }
  make__util__debug_make_msg_4_p_0(Globals_12, Var_71);
  KeepGoing_45 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_68_68, (MR_Integer) 15))) & (MR_Integer) 1);
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&make__module_target_scalar_common_7[3]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_3));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (KeepGoing0_32));
    MR_hl_field(0, Var_93, 4) = ((MR_Box) (KeepGoing_45));
  }
  mercury__require__expect_3_p_0(Var_93, (MR_String) "predicate \140make.module_target.make_module_target_file_main_path\'/10", (MR_String) "KeepGoing != KeepGoing0");
  succeeded = (DepsSucceeded_33 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_45 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Box conv3_STATE_VARIABLE_Info_52;

    *Succeeded_16 = (MR_Integer) 0;
    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[1]), TouchedTargetFiles_24, ((MR_Box) (STATE_VARIABLE_Info_68_68)), &conv3_STATE_VARIABLE_Info_52);
    *STATE_VARIABLE_Info_52 = ((MR_Word) (conv3_STATE_VARIABLE_Info_52));
  }
  else
  {
    MR_Word DepsResult0_47;
    MR_Word STATE_VARIABLE_Info_96_235;

    make__module_target__make_dependency_files_10_p_0(Globals_12, TargetFile_13, DepFilesToMake_38, TouchedTargetFiles_24, TouchedFiles_25, &DepsResult0_47, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_96_235);
    switch (DepsSucceeded_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box conv5_STATE_VARIABLE_Info_52;

          *Succeeded_16 = (MR_Integer) 0;
          mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[2]), TouchedTargetFiles_24, ((MR_Box) (STATE_VARIABLE_Info_96_235)), &conv5_STATE_VARIABLE_Info_52);
          *STATE_VARIABLE_Info_52 = ((MR_Word) (conv5_STATE_VARIABLE_Info_52));
        }
        break;
      case (MR_Integer) 1:
        switch (DepsResult0_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Box conv7_STATE_VARIABLE_Info_52;

              *Succeeded_16 = (MR_Integer) 0;
              mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[3]), TouchedTargetFiles_24, ((MR_Box) (STATE_VARIABLE_Info_96_235)), &conv7_STATE_VARIABLE_Info_52);
              *STATE_VARIABLE_Info_52 = ((MR_Word) (conv7_STATE_VARIABLE_Info_52));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Targets0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 18))));
              MR_Word Targets_49;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word STATE_VARIABLE_Info_103_103;
              MR_Word Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 0))));
              MR_Word Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 1))));
              MR_Word Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 2))));
              MR_Word Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 3))));
              MR_Word Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 4))));
              MR_Word Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 5))));
              MR_Word Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 6))));
              MR_Word Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 7))));
              MR_Word Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 8))));
              MR_Word Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 9))));
              MR_Word Var_174 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 10))));
              MR_Word Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 11))));
              MR_Word Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 12))));
              MR_Word Var_177 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 13))));
              MR_Word Var_178 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 14))));
              MR_Word Var_181 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 16))));
              MR_Word Var_182 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 17))));
              MR_Integer Var_183 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 19))));
              MR_Word Var_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 20))));
              MR_Word Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 21))));
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_96_235, (MR_Integer) 15)));

              {
                Var_102 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_102, 0) = ((MR_Box) (TargetType_20));
              }
              {
                Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_101, 0) = ((MR_Box) (ModuleName_19));
                MR_hl_field(0, Var_101, 1) = ((MR_Box) (Var_102));
              }
              mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_101)), Targets0_48, &Targets_49);
              {
                STATE_VARIABLE_Info_103_103 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 0) = ((MR_Box) (Var_164));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 1) = ((MR_Box) (Var_165));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 2) = ((MR_Box) (Var_166));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 3) = ((MR_Box) (Var_167));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 4) = ((MR_Box) (Var_168));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 5) = ((MR_Box) (Var_169));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 6) = ((MR_Box) (Var_170));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 7) = ((MR_Box) (Var_171));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 8) = ((MR_Box) (Var_172));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 9) = ((MR_Box) (Var_173));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 10) = ((MR_Box) (Var_174));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 11) = ((MR_Box) (Var_175));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 12) = ((MR_Box) (Var_176));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 13) = ((MR_Box) (Var_177));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 14) = ((MR_Box) (Var_178));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 15) = (MR_Box) (packed_word_3);
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 16) = ((MR_Box) (Var_181));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 17) = ((MR_Box) (Var_182));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 18) = ((MR_Box) (Targets_49));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 19) = ((MR_Box) (Var_183));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 20) = ((MR_Box) (Var_184));
                MR_hl_field(0, STATE_VARIABLE_Info_103_103, 21) = ((MR_Box) (Var_185));
              }
              make__module_target__build_target_12_p_0(Globals_12, CompilationTaskAndOptions_14, TargetFile_13, ModuleDepInfo_15, TouchedTargetFiles_24, TouchedFiles_25, ExtraOptions_11, Succeeded_16, STATE_VARIABLE_Info_103_103, STATE_VARIABLE_Info_52);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word TopTargetFile_50;
              MR_Word Var_106;
              MR_Word STATE_VARIABLE_Info_107_107;
              MR_Word Var_112;
              MR_Box conv9_STATE_VARIABLE_Info_52;

              {
                Var_106 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_106, 0) = ((MR_Box) (TargetType_20));
              }
              {
                TopTargetFile_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TopTargetFile_50, 0) = ((MR_Box) (ModuleName_19));
                MR_hl_field(0, TopTargetFile_50, 1) = ((MR_Box) (Var_106));
              }
              make__util__maybe_warn_up_to_date_target_7_p_0(Globals_12, TopTargetFile_50, TargetFileName_21, STATE_VARIABLE_Info_96_235, &STATE_VARIABLE_Info_107_107);
              make__util__debug_file_msg_5_p_0(Globals_12, TargetFile_13, (MR_String) "up to date");
              *Succeeded_16 = (MR_Integer) 1;
              {
                Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_112, 0) = ((MR_Box) (TargetFile_13));
                MR_hl_field(1, Var_112, 1) = ((MR_Box) (TouchedTargetFiles_24));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[4]), Var_112, ((MR_Box) (STATE_VARIABLE_Info_107_107)), &conv9_STATE_VARIABLE_Info_52);
              *STATE_VARIABLE_Info_52 = ((MR_Word) (conv9_STATE_VARIABLE_Info_52));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_task_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  switch (MR_tag((MR_Word) Task_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModuleTask_17 = ((MR_Unsigned) ((MR_hl_field(0, Task_12, (MR_Integer) 0))) & (MR_Integer) 7);

        make__module_target__find_files_maybe_touched_by_process_module_9_p_0(Globals_10, TargetFile_11, ModuleTask_17, TouchedTargetFiles_13, TouchedFileNames_14, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedTargetFiles_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TargetFile_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *TouchedFileNames_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PIC_19 = ((((MR_Unsigned) ((MR_hl_field(2, Task_12, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        MR_Word Lang_20 = ((MR_Unsigned) ((MR_hl_field(2, Task_12, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ModuleName_21;
        MR_String ForeignObjectFile_24;
        MR_Word ForeignModName_54;
        MR_Word SrcExt_55;
        MR_Word SrcNewExt_56;
        MR_Word ObjOtherExt_57;
        MR_Word ObjNewExt_58;
        MR_Word Var_63;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word CompilationTarget_69;
        MR_String SrcFileName_59;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedTargetFiles_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TargetFile_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ModuleName_21 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 0))));
        parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_21, Lang_20, &ForeignModName_54);
        parse_tree__prog_foreign__foreign_language_file_extension_3_p_0(Lang_20, &SrcExt_55, &SrcNewExt_56);
        libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_69);
        switch (CompilationTarget_69) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_70;

              backend_libs__compile_target_code__pic_object_file_extension_5_p_0(Globals_10, PIC_19, &ObjOtherExt_57, &ObjNewExt_58, &Var_70);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/4", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/4", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (SrcExt_55));
        }
        parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_10, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_63, SrcNewExt_56, ForeignModName_54, &SrcFileName_59);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (ObjOtherExt_57));
        }
        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_68, 1) = (MR_Box) ((MR_Unsigned) (ObjNewExt_58));
        }
        parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_10, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_67, Var_68, ForeignModName_54, &ForeignObjectFile_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedFileNames_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ForeignObjectFile_24));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String FactTableName_25 = ((MR_String) ((MR_hl_field(3, Task_12, (MR_Integer) 1))));
        MR_Word ObjOtherExt_26;
        MR_Word ObjNewExt_27;
        MR_String FactTableObjectFile_28;
        MR_Word Var_42;
        MR_Word PIC_45 = ((MR_Unsigned) ((MR_hl_field(3, Task_12, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_48;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedTargetFiles_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TargetFile_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_48);
        switch (CompilationTarget_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_49;

              backend_libs__compile_target_code__pic_object_file_extension_5_p_0(Globals_10, PIC_45, &ObjOtherExt_26, &ObjNewExt_27, &Var_49);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/4", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/4", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        {
          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_42, 1) = (MR_Box) ((MR_Unsigned) (ObjNewExt_27));
        }
        parse_tree__file_names__fact_table_file_name_9_p_0(Globals_10, (MR_String) "predicate \140make.module_target.find_files_maybe_touched_by_task\'/9", (MR_Integer) 0, ObjOtherExt_26, Var_42, FactTableName_25, &FactTableObjectFile_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedFileNames_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FactTableObjectFile_28));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      }
      break;
  }
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_TimestampFileNames_17;

  make__module_target__gather_target_file_timestamp_file_names_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_TimestampFileNames_17);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_TimestampFileNames_17));
}

static MR_Box MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_LambdaHeadVar__2_61;

  conv7_LambdaHeadVar__2_61 = make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1038__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_61));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_ForeignFiles_10;

  make__module_target__external_foreign_code_files_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_ForeignFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv5_ForeignFiles_10));
}

static MR_bool MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_54;

  succeeded = make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__1017__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_54);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_54));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__5_5;

  make__module_dep_file__get_module_dependencies_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 1))));
  MR_Word MaybeModuleDepInfo_19;
  MR_Word ModuleDepInfo_20;
  MR_Word MaybeTopModule_21;
  MR_Word NestedSubModules_22;
  MR_Word MaybeNestedModuleDepInfos_24;
  MR_Word ModuleDepInfos_27;
  MR_Word CompilationTarget_28;
  MR_Word TargetModuleNames_29;
  MR_Word ForeignCodeFiles_32;
  MR_Word TimestampFileNames_40;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word Var_49;
  MR_Word Var_73;
  MR_Box conv3_STATE_VARIABLE_Info_42;
  MR_Box conv2_STATE_VARIABLE_IO_51_51;
  MR_Word NestedModuleDepInfos_26;
  MR_Box conv10_TimestampFileNames_40;
  MR_Box conv9_STATE_VARIABLE_IO_44;

  make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_45_45);
  if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.find_files_maybe_touched_by_process_module\'/9", (MR_String) "no module dependencies");
      return;
    }
  else
    ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_19, (MR_Integer) 0))));
  parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_20, &MaybeTopModule_21);
  NestedSubModules_22 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_21);
  {
    TargetModuleNames_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TargetModuleNames_29, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(1, TargetModuleNames_29, 1) = ((MR_Box) (NestedSubModules_22));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__module_target_scalar_common_5[2]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Globals_10));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, NestedSubModules_22, &MaybeNestedModuleDepInfos_24, ((MR_Box) (STATE_VARIABLE_Info_45_45)), &conv3_STATE_VARIABLE_Info_42, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_51_51);
  *STATE_VARIABLE_Info_42 = ((MR_Word) (conv3_STATE_VARIABLE_Info_42));
  succeeded = mercury__list__map_3_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), (MR_Word) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0), (MR_Word) (&make__module_target_scalar_common_2[3]), MaybeNestedModuleDepInfos_24, &NestedModuleDepInfos_26);
  if (succeeded)
    {
      ModuleDepInfos_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ModuleDepInfos_27, 0) = ((MR_Box) (ModuleDepInfo_20));
      MR_hl_field(1, ModuleDepInfos_27, 1) = ((MR_Box) (NestedModuleDepInfos_26));
    }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.find_files_maybe_touched_by_process_module\'/9", (MR_String) "no nested module dependencies");
      return;
    }
  libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_28);
  switch (Task_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 6:
      {
        MR_Word TargetPIC_30;
        MR_Word ForeignCodeFileList_31;
        MR_Word HeaderTargets0_36;
        MR_Word HeaderTargets_38;
        MR_Word TouchedTargetFiles0_39;
        MR_Word Var_57;
        MR_Word Var_62;
        MR_Box conv6_STATE_VARIABLE_IO_58_58;

        switch (MR_tag((MR_Word) TargetType_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetPIC_30 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            TargetPIC_30 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            TargetPIC_30 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_18, (MR_Integer) 0))) & (MR_Integer) 1);
            break;
          case (MR_Integer) 3:
            TargetPIC_30 = (MR_Integer) 1;
            break;
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (&make__module_target_scalar_common_12[0]));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_3));
          MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_57, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Var_57, 4) = ((MR_Box) (TargetPIC_30));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0), (MR_Word) (&make__module_target_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, ModuleDepInfos_27, &ForeignCodeFileList_31, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_58_58);
        Var_62 = mercury__list__condense_1_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), ForeignCodeFileList_31);
        ForeignCodeFiles_32 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[4]), Var_62);
        switch (CompilationTarget_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word HighLevelCode_34;

              libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 309, &HighLevelCode_34);
              switch (HighLevelCode_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeaderTargets0_36 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  HeaderTargets0_36 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[6])));
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            HeaderTargets0_36 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        switch (CompilationTarget_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_66;

              Var_66 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[5])));
              HeaderTargets_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_66, HeaderTargets0_36);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            HeaderTargets_38 = HeaderTargets0_36;
            break;
        }
        TouchedTargetFiles0_39 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, TargetType_18);
        *TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), TouchedTargetFiles0_39, HeaderTargets_38);
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 5:
    case (MR_Integer) 1:
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 7:
      {
        ForeignCodeFiles_32 = (MR_Word) ((MR_Unsigned) 0U);
        *TouchedTargetFiles_13 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, TargetType_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_69;
        MR_Word Var_71;

        ForeignCodeFiles_32 = (MR_Word) ((MR_Unsigned) 0U);
        Var_69 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) ((MR_Unsigned) 12U));
        Var_71 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) ((MR_Unsigned) 16U));
        *TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_69, Var_71);
      }
      break;
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&make__module_target_scalar_common_12[1]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_5));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (Globals_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, *TouchedTargetFiles_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv10_TimestampFileNames_40, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_44);
  TimestampFileNames_40 = ((MR_Word) (conv10_TimestampFileNames_40));
  *TouchedFileNames_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignCodeFiles_32, TimestampFileNames_40);
}

static void MR_CALL 
make__module_target__build_target_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_MakeInfo_18;

  make__module_target__cleanup_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_MakeInfo_18);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_MakeInfo_18));
}

static void MR_CALL 
make__module_target__build_target_12_p_0(
  MR_Word Globals_13,
  MR_Word CompilationTask_14,
  MR_Word TargetFile_15,
  MR_Word ModuleDepInfo_16,
  MR_Word TouchedTargetFiles_17,
  MR_Word TouchedFiles_18,
  MR_Word ExtraOptions_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  MR_bool succeeded;
  MR_String TargetFileName_23;
  MR_Word ModuleName_24;
  MR_Word Task_26;
  MR_Word TaskOptions_27;
  MR_Word ExtraAndTaskOptions_28;
  MR_Word MaybeArgFileName_32;
  MR_Word ArgFileNameRes_33;
  MR_Word ModuleTask_29;
  MR_Word Var_60;

  make__util__get_make_target_file_name_6_p_0(Globals_13, (MR_String) "predicate \140make.module_target.build_target\'/12", TargetFile_15, &TargetFileName_23);
  make__util__maybe_make_target_message_4_p_0(Globals_13, TargetFileName_23);
  ModuleName_24 = ((MR_Word) ((MR_hl_field(0, TargetFile_15, (MR_Integer) 0))));
  Task_26 = ((MR_Word) ((MR_hl_field(0, CompilationTask_14, (MR_Integer) 0))));
  TaskOptions_27 = ((MR_Word) ((MR_hl_field(0, CompilationTask_14, (MR_Integer) 1))));
  ExtraAndTaskOptions_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraOptions_19, TaskOptions_27);
  succeeded = ((MR_tag((MR_Word) Task_26)) == (MR_Integer) 0);
  if (succeeded)
  {
    ModuleTask_29 = ((MR_Unsigned) ((MR_hl_field(0, Task_26, (MR_Integer) 0))) & (MR_Integer) 7);
    Var_60 = make__module_target__do_task_in_separate_process_1_f_0(ModuleTask_29);
    succeeded = (Var_60 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = libs__process_util__can_fork_0_p_0();
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_Word ArgFileNameResult_30;

    mercury__io__file__make_temp_file_3_p_0(&ArgFileNameResult_30);
    if (((MR_tag((MR_Word) ArgFileNameResult_30)) == (MR_Integer) 1))
    {
      MR_Word Error_34 = ((MR_Word) ((MR_hl_field(1, ArgFileNameResult_30, (MR_Integer) 0))));

      MaybeArgFileName_32 = (MR_Word) ((MR_Unsigned) 0U);
      {
        ArgFileNameRes_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgFileNameRes_33, 0) = ((MR_Box) (Error_34));
      }
    }
    else
    {
      MR_String ArgFileName_31 = ((MR_String) ((MR_hl_field(0, ArgFileNameResult_30, (MR_Integer) 0))));

      {
        MaybeArgFileName_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeArgFileName_32, 0) = ((MR_Box) (ArgFileName_31));
      }
      ArgFileNameRes_33 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
  {
    MaybeArgFileName_32 = (MR_Word) ((MR_Unsigned) 0U);
    ArgFileNameRes_33 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((ArgFileNameRes_33 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer Time0_35;
    MR_Word VeryVerbose_36;
    MR_Word Cleanup_37;
    MR_Box Cookie_38;
    MR_Word DetectedGradeFlags_39;
    MR_Word OptionVariables_40;
    MR_Word OptionArgs_41;
    MR_Word MayBuild_42;
    MR_Word Succeeded0_46;
    MR_Integer Time_49;
    MR_Word ShowMakeTimes_50;
    MR_Word STATE_VARIABLE_Info_71_71;
    MR_Word STATE_VARIABLE_Info_75_75;
    MR_Box conv1_STATE_VARIABLE_Info_75_75;

    make__util__get_real_milliseconds_3_p_0(&Time0_35);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 73, &VeryVerbose_36);
    {
      Cleanup_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_37, 0) = ((MR_Box) (&make__module_target_scalar_common_4[2]));
      MR_hl_field(0, Cleanup_37, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_1));
      MR_hl_field(0, Cleanup_37, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Cleanup_37, 3) = ((MR_Box) (Globals_13));
      MR_hl_field(0, Cleanup_37, 4) = ((MR_Box) (MaybeArgFileName_32));
      MR_hl_field(0, Cleanup_37, 5) = ((MR_Box) (TouchedTargetFiles_17));
      MR_hl_field(0, Cleanup_37, 6) = ((MR_Box) (TouchedFiles_18));
    }
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_38);
    DetectedGradeFlags_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 3))));
    OptionArgs_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 4))));
    OptionVariables_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 5))));
    make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 1, ModuleName_24, DetectedGradeFlags_39, OptionVariables_40, OptionArgs_41, ExtraAndTaskOptions_28, &MayBuild_42);
    if (((MR_tag((MR_Word) MayBuild_42)) == (MR_Integer) 1))
    {
      MR_Word AllOptionArgs_43 = ((MR_Word) ((MR_hl_field(1, MayBuild_42, (MR_Integer) 0))));
      MR_Word BuildGlobals_44 = ((MR_Word) ((MR_hl_field(1, MayBuild_42, (MR_Integer) 1))));
      MR_Word RedirectResult_45;
      MR_Word STATE_VARIABLE_Info_67_67;

      make__build__prepare_to_redirect_output_6_p_0(ModuleName_24, &RedirectResult_45, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_67_67);
      if ((RedirectResult_45 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_46 = (MR_Integer) 0;
        STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_67_67;
      }
      else
      {
        MR_Word ErrorStream_47 = ((MR_Word) ((MR_hl_field(1, RedirectResult_45, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Info_69_69;

        make__module_target__build_target_2_12_p_0(ModuleName_24, Task_26, MaybeArgFileName_32, ModuleDepInfo_16, BuildGlobals_44, AllOptionArgs_43, ErrorStream_47, &Succeeded0_46, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_69_69);
        make__build__unredirect_output_7_p_0(Globals_13, ModuleName_24, ErrorStream_47, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_71_71);
      }
    }
    else
    {
      MR_Word Specs_48 = ((MR_Word) ((MR_hl_field(0, MayBuild_42, (MR_Integer) 0))));
      MR_Word ErrorStream_99;

      libs__globals__get_error_output_stream_5_p_0(Globals_13, ModuleName_24, &ErrorStream_99);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_99, Globals_13, Specs_48);
      Succeeded0_46 = (MR_Integer) 0;
      STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_0_53;
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_36, Cookie_38, Cleanup_37, Succeeded0_46, Succeeded_20, ((MR_Box) (STATE_VARIABLE_Info_71_71)), &conv1_STATE_VARIABLE_Info_75_75);
    STATE_VARIABLE_Info_75_75 = ((MR_Word) (conv1_STATE_VARIABLE_Info_75_75));
    make__module_target__record_made_target_given_maybe_touched_files_10_p_0(Globals_13, *Succeeded_20, TargetFile_15, TargetFileName_23, TouchedTargetFiles_17, TouchedFiles_18, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_54);
    make__util__get_real_milliseconds_3_p_0(&Time_49);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 691, &ShowMakeTimes_50);
    switch (ShowMakeTimes_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float DiffSecs_51;
          MR_Float Var_81;
          MR_Integer Var_82 = (MR_Integer) ((MR_Unsigned) Time_49 - (MR_Unsigned) Time0_35);

          Var_81 = mercury__float__float_1_f_0(Var_82);
          DiffSecs_51 = mercury__float__f_slash_2_f_0(Var_81, (MR_Float) 1000.0000000000000);
          succeeded = (DiffSecs_51 >= ((MR_Float) 0.50000000000000000));
          if (succeeded)
          {
            MR_String Var_178;

            mercury__io__write_string_3_p_0((MR_String) "Making ");
            mercury__io__write_string_3_p_0(TargetFileName_23);
            mercury__io__write_string_3_p_0((MR_String) " took ");
            mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&make__module_target_scalar_common_3[0]), (MR_Integer) 2, (MR_Integer) 2, DiffSecs_51, &Var_178);
            mercury__io__write_string_3_p_0(Var_178);
            mercury__io__write_string_3_p_0((MR_String) "s\n");
          }
        }
        break;
    }
  }
  else
  {
    MR_Word ArgFileError_52 = ((MR_Word) ((MR_hl_field(1, ArgFileNameRes_33, (MR_Integer) 0))));
    MR_Word Var_92;
    MR_String Var_97;

    Var_92 = mercury__io__stderr_stream_0_f_0();
    Var_97 = mercury__io__error_message_1_f_0(ArgFileError_52);
    mercury__io__write_string_4_p_0(Var_92, (MR_String) "Could not create temporary file: ");
    mercury__io__write_string_4_p_0(Var_92, Var_97);
    mercury__io__write_string_4_p_0(Var_92, (MR_String) "\n");
    *Succeeded_20 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
  }
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Timestamps_11;

  make__module_target__delete_analysis_registry_timestamps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Timestamps_11);
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Timestamps_11));
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Timestamps_10;

  make__module_target__delete_timestamp_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Timestamps_10);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Timestamps_10));
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__5_5;
  MR_Word conv2_HeadVar__7_7;

  make__util__get_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__7_7));
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0(
  MR_Word Globals_11,
  MR_Word Succeeded_12,
  MR_Word TargetFile_13,
  MR_String TargetFileName_14,
  MR_Word TouchedTargetFiles_15,
  MR_Word OtherTouchedFiles_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word TargetStatus_19;
  MR_Word TouchedTargetFileNames_20;
  MR_Word TargetFileTimestamps0_23;
  MR_Word TargetFileTimestamps_24;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_FileTimestamps_37_37;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_FileTimestamps_39_39;
  MR_Word STATE_VARIABLE_FileTimestamps_41_41;
  MR_Word STATE_VARIABLE_FileTimestamps_45_45;
  MR_Word STATE_VARIABLE_Info_46_46;
  MR_Box conv1_STATE_VARIABLE_Info_31_31;
  MR_Box conv5_STATE_VARIABLE_Info_33_33;
  MR_Box conv4_STATE_VARIABLE_IO_28;
  MR_Box conv7_STATE_VARIABLE_FileTimestamps_39_39;
  MR_Box conv8_STATE_VARIABLE_FileTimestamps_41_41;
  MR_Word Var_42;
  MR_Word Var_69;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Integer Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Unsigned packed_word_1;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Integer Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Unsigned packed_word_2;

  switch (Succeeded_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TargetStatus_19 = (MR_Integer) 3;
        make__util__file_error_4_p_0(STATE_VARIABLE_Info_0_25, TargetFileName_14);
      }
      break;
    case (MR_Integer) 1:
      TargetStatus_19 = (MR_Integer) 2;
      break;
  }
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__module_target_scalar_common_11[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_10_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (TargetStatus_19));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_30, TouchedTargetFiles_15, ((MR_Box) (STATE_VARIABLE_Info_0_25)), &conv1_STATE_VARIABLE_Info_31_31);
  STATE_VARIABLE_Info_31_31 = ((MR_Word) (conv1_STATE_VARIABLE_Info_31_31));
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&make__module_target_scalar_common_6[1]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_10_p_0_2));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Globals_11));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) ((MR_String) "predicate \140make.module_target.record_made_target_given_maybe_touched_files\'/10"));
    MR_hl_field(0, Var_32, 5) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, TouchedTargetFiles_15, &TouchedTargetFileNames_20, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv5_STATE_VARIABLE_Info_33_33, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_28);
  STATE_VARIABLE_Info_33_33 = ((MR_Word) (conv5_STATE_VARIABLE_Info_33_33));
  STATE_VARIABLE_FileTimestamps_37_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 1))));
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&make__module_target_scalar_common_11[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_10_p_0_3));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Globals_11));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_38, TouchedTargetFileNames_20, ((MR_Box) (STATE_VARIABLE_FileTimestamps_37_37)), &conv7_STATE_VARIABLE_FileTimestamps_39_39);
  STATE_VARIABLE_FileTimestamps_39_39 = ((MR_Word) (conv7_STATE_VARIABLE_FileTimestamps_39_39));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_38, OtherTouchedFiles_16, ((MR_Box) (STATE_VARIABLE_FileTimestamps_39_39)), &conv8_STATE_VARIABLE_FileTimestamps_41_41);
  STATE_VARIABLE_FileTimestamps_41_41 = ((MR_Word) (conv8_STATE_VARIABLE_FileTimestamps_41_41));
  Var_42 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));
  succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word Var_43;
    MR_Box conv10_STATE_VARIABLE_FileTimestamps_45_45;

    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (&make__module_target_scalar_common_8[1]));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_10_p_0_4));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_43, 3) = ((MR_Box) (Globals_11));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_43, STATE_VARIABLE_FileTimestamps_41_41, ((MR_Box) (STATE_VARIABLE_FileTimestamps_41_41)), &conv10_STATE_VARIABLE_FileTimestamps_45_45);
    STATE_VARIABLE_FileTimestamps_45_45 = ((MR_Word) (conv10_STATE_VARIABLE_FileTimestamps_45_45));
  }
  else
    STATE_VARIABLE_FileTimestamps_45_45 = STATE_VARIABLE_FileTimestamps_41_41;
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 0))));
  TargetFileTimestamps0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 2))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 3))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 4))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 5))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 6))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 7))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 8))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 9))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 10))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 11))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 12))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 13))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 14))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 15)));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 16))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 17))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 18))));
  Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 19))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 20))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_33_33, (MR_Integer) 21))));
  {
    STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (STATE_VARIABLE_FileTimestamps_45_45));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (TargetFileTimestamps0_23));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (Var_72));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (Var_73));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (Var_74));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (Var_75));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (Var_76));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 8) = ((MR_Box) (Var_77));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 9) = ((MR_Box) (Var_78));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 10) = ((MR_Box) (Var_79));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 11) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 12) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 13) = ((MR_Box) (Var_82));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 14) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 15) = (MR_Box) (packed_word_1);
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 16) = ((MR_Box) (Var_86));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 17) = ((MR_Box) (Var_87));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 18) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 19) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 20) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_Info_46_46, 21) = ((MR_Box) (Var_91));
  }
  mercury__version_hash_table__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_13)), TargetFileTimestamps0_23, &TargetFileTimestamps_24);
  Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 0))));
  Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 1))));
  Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 3))));
  Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 4))));
  Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 5))));
  Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 6))));
  Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 7))));
  Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 8))));
  Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 9))));
  Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 10))));
  Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 11))));
  Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 12))));
  Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 13))));
  Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 14))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 15)));
  Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 16))));
  Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 17))));
  Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 18))));
  Var_134 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 19))));
  Var_135 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 20))));
  Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 21))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_26 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_114));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_115));
    MR_hl_field(0, base, 2) = ((MR_Box) (TargetFileTimestamps_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_117));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_118));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_119));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_120));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_121));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_122));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_123));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_124));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_125));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_126));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_127));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_128));
    MR_hl_field(0, base, 15) = (MR_Box) (packed_word_2);
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_131));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_132));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_133));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_134));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_135));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_136));
  }
}

static MR_Word MR_CALL 
make__module_target__do_task_in_separate_process_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2 = ((&make__module_target_vector_common_10[0 + HeadVar__1_1]))->make__module_target__vector_common_type_10_0__vct_10_f_0;

  return HeadVar__2_2;
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Succeeded_18;

  make__module_target__build_object_code_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), &conv11_Succeeded_18);
  *wrapper_arg_1 = ((MR_Box) (conv11_Succeeded_18));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_11(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Succeeded_14;

  make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv10_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv10_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_Succeeded_8;

  make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv9_Succeeded_8);
  *wrapper_arg_1 = ((MR_Box) (conv9_Succeeded_8));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Succeeded_14;

  make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv8_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv8_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Succeeded_8;

  make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv7_Succeeded_8);
  *wrapper_arg_1 = ((MR_Box) (conv7_Succeeded_8));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Succeeded_14;

  make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv6_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv6_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_8;

  make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv5_Succeeded_8);
  *wrapper_arg_1 = ((MR_Box) (conv5_Succeeded_8));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Succeeded_14;

  make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv4_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv4_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Succeeded_8;

  make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv3_Succeeded_8);
  *wrapper_arg_1 = ((MR_Box) (conv3_Succeeded_8));
}

static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = libs__shell_util__quote_shell_cmd_arg_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Succeeded_16;

  make__module_target__compile_foreign_code_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &conv1_Succeeded_16);
  *wrapper_arg_1 = ((MR_Box) (conv1_Succeeded_16));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_16;

  make__module_target__compile_foreign_code_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &conv0_Succeeded_16);
  *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_16));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0(
  MR_Word ModuleName_13,
  MR_Word Task_14,
  MR_Word ArgFileName_15,
  MR_Word ModuleDepInfo_16,
  MR_Word Globals_17,
  MR_Word AllOptionArgs_18,
  MR_Word ErrorStream_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  MR_bool succeeded;
  MR_Word ProgressStream_23;

  mercury__io__output_stream_3_p_0(&ProgressStream_23);
  switch (MR_tag((MR_Word) Task_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModuleTask_24 = ((MR_Unsigned) ((MR_hl_field(0, Task_14, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_String ModuleArg_25;
        MR_Word Verbose_26;
        MR_Word OldOutputStream_30;
        MR_Word CompileSucceeded_32;
        MR_Word Var_33;

        ModuleArg_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
        libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 78, &Verbose_26);
        switch (Verbose_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AllArgs_27;
              MR_Word AllArgStrs_28;
              MR_String AllArgsStr_29;
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_49, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              AllArgs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_49);
              AllArgStrs_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[2]), AllArgs_27);
              AllArgsStr_29 = mercury__string__join_list_2_f_0((MR_String) " ", AllArgStrs_28);
              mercury__io__write_string_3_p_0((MR_String) "Invoking self \140mmc ");
              mercury__io__write_string_3_p_0(AllArgsStr_29);
              mercury__io__write_string_3_p_0((MR_String) "\'\n");
            }
            break;
        }
        mercury__io__set_output_stream_4_p_0(ErrorStream_19, &OldOutputStream_30);
        switch (ModuleTask_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 6:
            {
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_62;
              MR_Word Var_64;

              {
                Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_62, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_59, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
                MR_hl_field(0, Var_59, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_4));
                MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_59, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_59, 4) = ((MR_Box) (Var_62));
              }
              Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_62);
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_60, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                MR_hl_field(0, Var_60, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_5));
                MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_60, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_60, 4) = ((MR_Box) (ProgressStream_23));
                MR_hl_field(0, Var_60, 5) = ((MR_Box) (ErrorStream_19));
                MR_hl_field(0, Var_60, 6) = ((MR_Box) (ArgFileName_15));
                MR_hl_field(0, Var_60, 7) = ((MR_Box) (Var_64));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_59, Var_60, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_67;

              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_67, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Word Var_146;

              {
                Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_144, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_142 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_142, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
                MR_hl_field(0, Var_142, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_6));
                MR_hl_field(0, Var_142, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_142, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_142, 4) = ((MR_Box) (Var_144));
              }
              Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_144);
              {
                Var_143 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_143, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                MR_hl_field(0, Var_143, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_7));
                MR_hl_field(0, Var_143, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_143, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_143, 4) = ((MR_Box) (ProgressStream_23));
                MR_hl_field(0, Var_143, 5) = ((MR_Box) (ErrorStream_19));
                MR_hl_field(0, Var_143, 6) = ((MR_Box) (ArgFileName_15));
                MR_hl_field(0, Var_143, 7) = ((MR_Box) (Var_146));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_142, Var_143, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_150;

              {
                Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_150, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_150, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_154;

              {
                Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_154, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_154, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_158;

              {
                Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_158, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_158, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_162;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_166;

              {
                Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_164, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_162 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_162, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
                MR_hl_field(0, Var_162, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_8));
                MR_hl_field(0, Var_162, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_162, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_162, 4) = ((MR_Box) (Var_164));
              }
              Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_164);
              {
                Var_163 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_163, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                MR_hl_field(0, Var_163, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_9));
                MR_hl_field(0, Var_163, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_163, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_163, 4) = ((MR_Box) (ProgressStream_23));
                MR_hl_field(0, Var_163, 5) = ((MR_Box) (ErrorStream_19));
                MR_hl_field(0, Var_163, 6) = ((MR_Box) (ArgFileName_15));
                MR_hl_field(0, Var_163, 7) = ((MR_Box) (Var_166));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_162, Var_163, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_170;
              MR_Word Var_171;
              MR_Word Var_172;
              MR_Word Var_174;

              {
                Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_172, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_170 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_170, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
                MR_hl_field(0, Var_170, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_10));
                MR_hl_field(0, Var_170, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_170, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_170, 4) = ((MR_Box) (Var_172));
              }
              Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_172);
              {
                Var_171 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_171, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                MR_hl_field(0, Var_171, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_11));
                MR_hl_field(0, Var_171, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_171, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_171, 4) = ((MR_Box) (ProgressStream_23));
                MR_hl_field(0, Var_171, 5) = ((MR_Box) (ErrorStream_19));
                MR_hl_field(0, Var_171, 6) = ((MR_Box) (ArgFileName_15));
                MR_hl_field(0, Var_171, 7) = ((MR_Box) (Var_174));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_170, Var_171, &CompileSucceeded_32);
            }
            break;
        }
        mercury__io__set_output_stream_4_p_0(OldOutputStream_30, &Var_33);
        switch (ModuleTask_24) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          MR_Word TouchSucceeded_34;

          parse_tree__module_cmds__touch_interface_datestamp_9_p_0(Globals_17, ProgressStream_23, ErrorStream_19, ModuleName_13, (MR_Word) (((MR_Box) ((MR_String) ".err_date"))), (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[4])), &TouchSucceeded_34);
          *Succeeded_20 = libs__maybe_util__and_2_f_0(CompileSucceeded_32, TouchSucceeded_34);
        }
        else
          *Succeeded_20 = CompileSucceeded_32;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PIC_35 = ((MR_Unsigned) ((MR_hl_field(1, Task_14, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_36;
        MR_Word Var_76;

        libs__globals__get_target_2_p_0(Globals_17, &CompilationTarget_36);
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_76, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
          MR_hl_field(0, Var_76, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_12));
          MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 7));
          MR_hl_field(0, Var_76, 3) = ((MR_Box) (Globals_17));
          MR_hl_field(0, Var_76, 4) = ((MR_Box) (ModuleName_13));
          MR_hl_field(0, Var_76, 5) = ((MR_Box) (CompilationTarget_36));
          MR_hl_field(0, Var_76, 6) = ((MR_Box) (PIC_35));
          MR_hl_field(0, Var_76, 7) = ((MR_Box) (ProgressStream_23));
          MR_hl_field(0, Var_76, 8) = ((MR_Box) (ErrorStream_19));
          MR_hl_field(0, Var_76, 9) = ((MR_Box) (ModuleDepInfo_16));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_76, Succeeded_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lang_37 = ((MR_Unsigned) ((MR_hl_field(2, Task_14, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ForeignCodeFile_38;
        MR_Word Var_79;
        MR_Word PIC_86 = ((((MR_Unsigned) ((MR_hl_field(2, Task_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        MR_Word ForeignModName_117;
        MR_Word SrcExt_118;
        MR_Word SrcNewExt_119;
        MR_Word ObjOtherExt_120;
        MR_Word ObjNewExt_121;
        MR_String SrcFileName_122;
        MR_String ObjFileName_123;
        MR_Word Var_126;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word CompilationTarget_132;

        parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_13, Lang_37, &ForeignModName_117);
        parse_tree__prog_foreign__foreign_language_file_extension_3_p_0(Lang_37, &SrcExt_118, &SrcNewExt_119);
        libs__globals__get_target_2_p_0(Globals_17, &CompilationTarget_132);
        switch (CompilationTarget_132) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_133;

              backend_libs__compile_target_code__pic_object_file_extension_5_p_0(Globals_17, PIC_86, &ObjOtherExt_120, &ObjNewExt_121, &Var_133);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/4", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/4", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        {
          Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_126, 0) = ((MR_Box) (SrcExt_118));
        }
        parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_17, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_126, SrcNewExt_119, ForeignModName_117, &SrcFileName_122);
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (ObjOtherExt_120));
        }
        {
          Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_131, 1) = (MR_Box) ((MR_Unsigned) (ObjNewExt_121));
        }
        parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_17, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_130, Var_131, ForeignModName_117, &ObjFileName_123);
        {
          ForeignCodeFile_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignCodeFile_38, 0) = (MR_Box) ((MR_Unsigned) (Lang_37));
          MR_hl_field(0, ForeignCodeFile_38, 1) = ((MR_Box) (SrcFileName_122));
          MR_hl_field(0, ForeignCodeFile_38, 2) = ((MR_Box) (ObjFileName_123));
        }
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_79, 0) = ((MR_Box) (&make__module_target_scalar_common_6[0]));
          MR_hl_field(0, Var_79, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_2));
          MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_79, 3) = ((MR_Box) (Globals_17));
          MR_hl_field(0, Var_79, 4) = ((MR_Box) (ProgressStream_23));
          MR_hl_field(0, Var_79, 5) = ((MR_Box) (ErrorStream_19));
          MR_hl_field(0, Var_79, 6) = ((MR_Box) (PIC_86));
          MR_hl_field(0, Var_79, 7) = ((MR_Box) (ModuleDepInfo_16));
          MR_hl_field(0, Var_79, 8) = ((MR_Box) (ForeignCodeFile_38));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_79, Succeeded_20);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String FactTableFileName_39 = ((MR_String) ((MR_hl_field(3, Task_14, (MR_Integer) 1))));
        MR_Word ObjExt_40;
        MR_Word ObjNewExt_41;
        MR_Word FactTableForeignCode_42;
        MR_Word Var_82;
        MR_Word Var_84;
        MR_Word PIC_87 = ((MR_Unsigned) ((MR_hl_field(3, Task_14, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_111;

        libs__globals__get_target_2_p_0(Globals_17, &CompilationTarget_111);
        switch (CompilationTarget_111) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_112;

              backend_libs__compile_target_code__pic_object_file_extension_5_p_0(Globals_17, PIC_87, &ObjExt_40, &ObjNewExt_41, &Var_112);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/4", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/4", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        {
          Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_82, 1) = (MR_Box) ((MR_Unsigned) (ObjNewExt_41));
        }
        make__module_target__get_fact_table_foreign_code_file_8_p_0(Globals_17, (MR_Integer) 0, ObjExt_40, Var_82, FactTableFileName_39, &FactTableForeignCode_42);
        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (&make__module_target_scalar_common_6[0]));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_1));
          MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_84, 3) = ((MR_Box) (Globals_17));
          MR_hl_field(0, Var_84, 4) = ((MR_Box) (ProgressStream_23));
          MR_hl_field(0, Var_84, 5) = ((MR_Box) (ErrorStream_19));
          MR_hl_field(0, Var_84, 6) = ((MR_Box) (PIC_87));
          MR_hl_field(0, Var_84, 7) = ((MR_Box) (ModuleDepInfo_16));
          MR_hl_field(0, Var_84, 8) = ((MR_Box) (FactTableForeignCode_42));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_84, Succeeded_20);
      }
      break;
  }
  *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
}

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_8_p_0(
  MR_Word Globals_9,
  MR_Word Mkdir_10,
  MR_Word ObjOtherExt_11,
  MR_Word ObjNewExt_12,
  MR_String FactTableFileName_13,
  MR_Word * ForeignCodeFile_14)
{
  MR_String FactTableCFileName_16;
  MR_String FactTableObjFileName_17;

  parse_tree__file_names__fact_table_file_name_9_p_0(Globals_9, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/8", Mkdir_10, (MR_Word) (((MR_Box) ((MR_String) ".c"))), (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[28])), FactTableFileName_13, &FactTableCFileName_16);
  parse_tree__file_names__fact_table_file_name_9_p_0(Globals_9, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/8", Mkdir_10, ObjOtherExt_11, ObjNewExt_12, FactTableFileName_13, &FactTableObjFileName_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ForeignCodeFile_14 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 1) = ((MR_Box) (FactTableCFileName_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (FactTableObjFileName_17));
  }
}

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word Globals_6,
  MR_Word Args_7,
  MR_Word * Succeeded_8)
{
  MR_bool succeeded;
  MR_Integer Status0_10;
  MR_Integer Status_11;

  mercury__io__get_exit_status_3_p_0(&Status0_10);
  mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
  top_level__mercury_compile_main__main_for_make_4_p_0(Globals_6, Args_7);
  mercury__io__get_exit_status_3_p_0(&Status_11);
  succeeded = (Status_11 == (MR_Integer) 0);
  if (succeeded)
    *Succeeded_8 = (MR_Integer) 1;
  else
    *Succeeded_8 = (MR_Integer) 0;
  mercury__io__set_exit_status_3_p_0(Status0_10);
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__3_3;
  MR_Word conv9_HeadVar__5_5;

  make__util__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv10_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv9_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv9_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_3;
  MR_Word conv5_HeadVar__5_5;

  make__util__get_timestamp_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv5_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv5_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  make__util__get_target_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_106 = ((MR_Word) ((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv4_Var_106));
  make__module_target__make_dependency_files_10_p_0_3(env_ptr);
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String ArgX1_111;

    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_106)) == (MR_Integer) 1);
    if ((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
    {
      ArgX1_111 = ((MR_String) ((MR_hl_field(1, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_106, (MR_Integer) 0))));
      make__module_target__make_dependency_files_10_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__module_target_scalar_common_2[0]), &(env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv4_Var_106, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, make__module_target__make_dependency_files_10_p_0_4, env_ptr);
      (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word DepFilesToMake_13,
  MR_Word TouchedTargetFiles_14,
  MR_Word TouchedFiles_15,
  MR_Word * DepsResult_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  struct make__module_target__make_dependency_files_10_p_0_env_0_s env;

  {
    MR_Word KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 15))) & (MR_Integer) 1);
    MR_Word MakeDepsSucceeded_20;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 1))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 2))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 3))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 4))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 5))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 6))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 7))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 8))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 9))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 10))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 11))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 12))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 13))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 14))));
    MR_Word Var_76 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 15))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 16))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 17))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 18))));
    MR_Integer Var_80 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 19))));
    MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 20))));
    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 21))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 15)));
    MR_Box conv3_STATE_VARIABLE_Info_38_38;
    MR_Box conv2_STATE_VARIABLE_IO_39_39;

    make__build__foldl2_make_module_targets_9_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), Globals_11, DepFilesToMake_13, &MakeDepsSucceeded_20, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_35_35);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&make__module_target_scalar_common_4[0]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_1));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (Globals_11));
      MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, TouchedTargetFiles_14, &(env).make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv3_STATE_VARIABLE_Info_38_38, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_39_39);
    STATE_VARIABLE_Info_38_38 = ((MR_Word) (conv3_STATE_VARIABLE_Info_38_38));
    switch (MakeDepsSucceeded_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "error making dependencies");
          *DepsResult_16 = (MR_Integer) 2;
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_38_38;
        }
        break;
      case (MR_Integer) 1:
        {
          make__module_target__make_dependency_files_10_p_0_5(&env);
          if ((env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
          {
            make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "target file does not exist");
            *DepsResult_16 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_38_38;
          }
          else
          {
            MR_Word ForceReanalysis_25;
            MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 0))));
            MR_Word TargetType_24 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 1))));

            (env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded = (TargetType_24 == (MR_Word) ((MR_Unsigned) 28U));
            if ((env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
              make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(Globals_11, ModuleName_23, &ForceReanalysis_25, STATE_VARIABLE_Info_38_38);
            else
              ForceReanalysis_25 = (MR_Integer) 0;
            switch (ForceReanalysis_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TouchedTargetFileTimestamps_26;
                  MR_Word TouchedFileTimestamps_27;
                  MR_Word MaybeOldestTimestamp_28;
                  MR_String TargetFileName_29;
                  MR_Word Var_47;
                  MR_Word STATE_VARIABLE_Info_48_48;
                  MR_Word Var_50;
                  MR_Word STATE_VARIABLE_Info_51_51;
                  MR_Word Var_53;
                  MR_String Var_54;
                  MR_Word Var_56;
                  MR_Word STATE_VARIABLE_Info_59_59;
                  MR_Box conv8_STATE_VARIABLE_Info_48_48;
                  MR_Box conv7_STATE_VARIABLE_IO_49_49;
                  MR_Box conv12_STATE_VARIABLE_Info_51_51;
                  MR_Box conv11_STATE_VARIABLE_IO_52_52;

                  {
                    Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
                    MR_hl_field(0, Var_47, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_6));
                    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_47, 3) = ((MR_Box) (Globals_11));
                  }
                  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, TouchedTargetFiles_14, &TouchedTargetFileTimestamps_26, ((MR_Box) (STATE_VARIABLE_Info_38_38)), &conv8_STATE_VARIABLE_Info_48_48, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_49_49);
                  STATE_VARIABLE_Info_48_48 = ((MR_Word) (conv8_STATE_VARIABLE_Info_48_48));
                  Var_54 = mercury__dir__this_directory_0_f_0();
                  {
                    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
                    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__module_target_scalar_common_5[1]));
                    MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_7));
                    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_50, 3) = ((MR_Box) (Var_53));
                  }
                  mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, TouchedFiles_15, &TouchedFileTimestamps_27, ((MR_Box) (STATE_VARIABLE_Info_48_48)), &conv12_STATE_VARIABLE_Info_51_51, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_52_52);
                  STATE_VARIABLE_Info_51_51 = ((MR_Word) (conv12_STATE_VARIABLE_Info_51_51));
                  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__module_target_scalar_common_2[0]), TouchedTargetFileTimestamps_26, TouchedFileTimestamps_27);
                  make__util__find_error_or_oldest_ok_timestamp_2_p_0(Var_56, &MaybeOldestTimestamp_28);
                  make__util__get_file_name_9_p_0(Globals_11, (MR_String) "predicate \140make.module_target.make_dependency_files\'/10", (MR_Integer) 1, TargetFile_12, &TargetFileName_29, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_59_59);
                  make__dependencies__check_dependencies_10_p_0(Globals_11, TargetFileName_29, MaybeOldestTimestamp_28, MakeDepsSucceeded_20, DepFilesToMake_13, DepsResult_16, STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_31);
                }
                break;
              case (MR_Integer) 1:
                {
                  *DepsResult_16 = (MR_Integer) 1;
                  *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_38_38;
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
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word * ForceReanalysis_9,
  MR_Word Info_10)
{
  MR_bool succeeded;
  MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(0, Info_10, (MR_Integer) 19))));

  succeeded = (Var_15 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word AnalysisStatus_12;

    analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__module_target_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), Globals_7, ModuleName_8, &AnalysisStatus_12);
    switch (AnalysisStatus_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *ForceReanalysis_9 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        *ForceReanalysis_9 = (MR_Integer) 0;
        break;
    }
  }
  else
    *ForceReanalysis_9 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__module_target____Unify____compilation_task_type_and_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__module_target____Compare____compilation_task_type_and_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__module_target____Unify____foreign_code_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__module_target____Compare____foreign_code_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__module_target__init(void)
{
}

void mercury__make__module_target__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__module_target__make__module_target__type_ctor_info_compilation_task_type_and_options_0);
	MR_register_type_ctor_info(&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0);
}

void mercury__make__module_target__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__module_target__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.module_target.
