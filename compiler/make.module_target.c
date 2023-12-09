/*
** Automatically generated from `make.module_target.m'
** by the Mercury compiler,
** version rotd-2023-12-09
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
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.shell_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.check_up_to_date.mih"
#include "make.dependencies.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.file_names.mih"
#include "make.get_module_dep_info.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.timestamp.mih"
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



struct make__module_target__make_dependency_files_11_p_0_env_0_s {
  MR_bool make__module_target__make_dependency_files_11_p_0_env_0__succeeded;
  MR_Word make__module_target__make_dependency_files_11_p_0_env_0__LhsFileTimestamps_27;
  jmp_buf make__module_target__make_dependency_files_11_p_0_env_0__commit_0;
  MR_Word make__module_target__make_dependency_files_11_p_0_env_0__Var_112;
  MR_Box make__module_target__make_dependency_files_11_p_0_env_0__conv5_Var_112;
};


static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_target_file_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

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

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1make__make_info__type_ctor_info_target_file_0;

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_make_lhs_files_0_0[3];

static const MR_ConstString make__module_target__make__module_target__field_names_make_lhs_files_0_0[3];

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_make_lhs_files_0_0;

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_make_lhs_files_0_0[1];

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_make_lhs_files_0[1];

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_make_lhs_files_0[1];

static const MR_Integer make__module_target__make__module_target__functor_number_map_make_lhs_files_0[1];

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__find_lhs_files_of_process_module__1142__1_1_f_0(
  MR_Word LambdaHeadVar__1_59);

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__find_lhs_files_of_process_module__1122__1_2_p_0(
  MR_Word LambdaHeadVar__1_52,
  MR_Word * LambdaHeadVar__2_53);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__record_made_target_given_make_lhs_files__905__1_3_p_0(
  MR_Word HeadVar__1_82,
  MR_Word HeadVar__2_83,
  MR_Word * HeadVar__3_84);

static void MR_CALL 
make__module_target____Compare____make_lhs_files_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__module_target____Unify____make_lhs_files_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Word STATE_VARIABLE_TimestampFileNames_0_15,
  MR_Word * STATE_VARIABLE_TimestampFileNames_16);

static MR_bool MR_CALL 
make__module_target__is_ancestor_module_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * ModuleName_4);

static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileName_9,
  MR_Word HeadVar__4_10,
  MR_Word STATE_VARIABLE_Timestamps_0_12,
  MR_Word * STATE_VARIABLE_Timestamps_13);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileName_9,
  MR_Word STATE_VARIABLE_Timestamps_0_12,
  MR_Word * STATE_VARIABLE_Timestamps_13);

static void MR_CALL 
make__module_target__delete_timestamp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__delete_timestamp_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Globals_7,
  MR_String TouchedFile_8,
  MR_Word STATE_VARIABLE_Timestamps_0_12,
  MR_Word * STATE_VARIABLE_Timestamps_13);

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
make__module_target__compile_foreign_code_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word PIC_11,
  MR_Word ModuleDepInfo_12,
  MR_Word ForeignCodeFile_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
make__module_target__build_object_code_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Target_12,
  MR_Word PIC_13,
  MR_Word ModuleName_14,
  MR_Word _ModuleDepInfo_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Target_12,
  MR_Word PIC_13,
  MR_Word ModuleName_14,
  MR_Word * Succeeded_16);

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
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word MaybeArgFileName_11,
  MR_Word MakeLhsFiles_12,
  MR_Word STATE_VARIABLE_MakeInfo_0_20,
  MR_Word * STATE_VARIABLE_MakeInfo_21);

static void MR_CALL 
make__module_target__get_any_fact_table_object_code_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__record_made_target_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0(
  MR_Word ExtraOptions_12,
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word TargetFile_15,
  MR_Word CompilationTaskAndOptions_16,
  MR_Word ModuleDepInfo_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
make__module_target__find_lhs_files_of_task_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word Task_13,
  MR_Word * MakeLhsFiles_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word Task_13,
  MR_Word * MakeLhsFiles_14,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
make__module_target__build_target_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__build_target_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word CompilationTask_16,
  MR_Word TargetFile_17,
  MR_String TargetFileName_18,
  MR_Word ModuleDepInfo_19,
  MR_Word MakeLhsFiles_20,
  MR_Word ExtraOptions_21,
  MR_Word * Succeeded_22,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58);

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Succeeded_13,
  MR_Word TargetFile_14,
  MR_String TargetFileName_15,
  MR_Word MakeLhsFiles_16,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_11(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__module_target__build_target_2_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals_16,
  MR_Word Task_17,
  MR_Word ModuleName_18,
  MR_Word ModuleDepInfo_19,
  MR_Word ArgFileName_20,
  MR_Word AllOptionArgs_21,
  MR_Word * Succeeded_22,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word Mkdir_9,
  MR_Word ObjExt_10,
  MR_String FactTableFileName_11,
  MR_Word * ForeignCodeFile_12);

static void MR_CALL 
make__module_target__call_mercury_compile_main_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Globals_10,
  MR_Word Args_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetFile_14,
  MR_String TargetFileName_15,
  MR_Word DepFilesToMake_16,
  MR_Word MakeLhsFiles_17,
  MR_Word * DepsResult_18,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
make__module_target__find_oldest_lhs_file_loop_3_p_0(
  MR_Word LhsMaybeTimestamps_4,
  MR_Word STATE_VARIABLE_OldestLhsTimestamp_0_11,
  MR_Word * MaybeOldestLhsTimestamp_6);

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

static MR_bool MR_CALL 
make__module_target____Unify____make_lhs_files_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_target____Compare____make_lhs_files_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__module_target_scalar_common_1[10][3];

static /* final */ const MR_Box make__module_target_scalar_common_2[28][2];

static /* final */ const MR_Box make__module_target_scalar_common_3[10][1];

static /* final */ const MR_Box make__module_target_scalar_common_4[2][6];

static /* final */ const MR_Box make__module_target_scalar_common_5[3][12];

static /* final */ const MR_Box make__module_target_scalar_common_6[4][10];

static /* final */ const MR_Box make__module_target_scalar_common_7[5][11];

static /* final */ const MR_Box make__module_target_scalar_common_8[4][5];

static /* final */ const MR_Box make__module_target_scalar_common_9[1][7];

static /* final */ const MR_Box make__module_target_scalar_common_10[1][13];

static /* final */ const MR_Box make__module_target_scalar_common_11[1][8];

static /* final */ const MR_Box make__module_target_scalar_common_12[3][9];

static /* final */ const MR_Box make__module_target_scalar_common_13[5][4];




static /* final */ const MR_Box make__module_target_scalar_common_1[10][3] = {
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
    ((MR_Box) (&make__module_target_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__build_target_2_13_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_4[1])),
    ((MR_Box) (make__module_target__record_made_target_given_make_lhs_files_10_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[1])),
    ((MR_Box) (make__module_target__find_lhs_files_of_process_module_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[2])),
    ((MR_Box) (make__module_target__find_lhs_files_of_process_module_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[3])),
    ((MR_Box) (make__module_target__find_lhs_files_of_process_module_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__module_target_scalar_common_4[1])),
    ((MR_Box) (make__module_target__record_made_target_10_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__invoke_mmc_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_2[28][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "--make-analysis-registry")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "--compile-to-c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "--csharp-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "--errorcheck-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "--make-private-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "--make-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_3[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "--java-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "--make-optimization-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "--make-xml-doc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_2[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_3[10][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 13U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   9 */
  { (MR_Box) ((MR_Unsigned) 7U) },
};

static /* final */ const MR_Box make__module_target_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_target_file_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&make__module_target__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_target_file_0__plain_libs__timestamp__type_ctor_info_timestamp_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_5[3][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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

static /* final */ const MR_Box make__module_target_scalar_common_6[4][10] = {
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_7[5][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_make_lhs_files_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_8[4][5] = {
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
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_9[1][7] = {
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
};

static /* final */ const MR_Box make__module_target_scalar_common_10[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_for_search_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_11[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row   1 */
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
  /* row   2 */
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
};

static /* final */ const MR_Box make__module_target_scalar_common_13[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (&make__module_target_scalar_common_9[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__module_target_scalar_common_9[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_9[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_9[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_9[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_11_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
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


static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0) }
};

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

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_target_file_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0) }
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
  (MR_String) "fcf_foreign_language",
  (MR_String) "fcf_target_file",
  (MR_String) "fcf_object_file"
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

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1make__make_info__type_ctor_info_target_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0) }
};

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_make_lhs_files_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__module_target__list__ti_list_1make__make_info__type_ctor_info_target_file_0),
  (MR_PseudoTypeInfo) (&make__module_target__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__module_target__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__module_target__make__module_target__field_names_make_lhs_files_0_0[3] = {
  (MR_String) "tf_target_files",
  (MR_String) "tf_timestamp_files",
  (MR_String) "tf_foreign_code_files"
};

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_make_lhs_files_0_0 = {
  (MR_String) "make_lhs_files",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__module_target__make__module_target__field_types_make_lhs_files_0_0,
  make__module_target__make__module_target__field_names_make_lhs_files_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_make_lhs_files_0_0[1] = { &make__module_target__make__module_target__du_functor_desc_make_lhs_files_0_0 };

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_make_lhs_files_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__module_target__make__module_target__du_stag_ordered_make_lhs_files_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_make_lhs_files_0[1] = { &make__module_target__make__module_target__du_functor_desc_make_lhs_files_0_0 };

static const MR_Integer make__module_target__make__module_target__functor_number_map_make_lhs_files_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_make_lhs_files_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____make_lhs_files_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____make_lhs_files_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "make_lhs_files",
  { make__module_target__make__module_target__du_name_ordered_make_lhs_files_0 },
  { make__module_target__make__module_target__du_ptag_ordered_make_lhs_files_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__module_target__make__module_target__functor_number_map_make_lhs_files_0,

};

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__find_lhs_files_of_process_module__1142__1_1_f_0(
  MR_Word LambdaHeadVar__1_59)
{
  MR_String LambdaHeadVar__2_60 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_59, (MR_Integer) 1))));

  return LambdaHeadVar__2_60;
}

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__find_lhs_files_of_process_module__1122__1_2_p_0(
  MR_Word LambdaHeadVar__1_52,
  MR_Word * LambdaHeadVar__2_53)
{
  MR_bool succeeded = (LambdaHeadVar__1_52 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
    *LambdaHeadVar__2_53 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_52, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__record_made_target_given_make_lhs_files__905__1_3_p_0(
  MR_Word HeadVar__1_82,
  MR_Word HeadVar__2_83,
  MR_Word * HeadVar__3_84)
{
  mercury__version_hash_table__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (HeadVar__1_82)), HeadVar__2_83, HeadVar__3_84);
}

static void MR_CALL 
make__module_target____Compare____make_lhs_files_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__module_target_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__module_target_scalar_common_2[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&make__module_target_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____make_lhs_files_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__module_target_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&make__module_target_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&make__module_target_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
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
      mercury__builtin__compare_3_p_0((MR_Word) (&make__module_target_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
      TypeInfo_10_10 = (MR_Word) (&make__module_target_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
  MR_Word Globals_7,
  MR_Word TouchedTargetFile_8,
  MR_Word STATE_VARIABLE_TimestampFileNames_0_15,
  MR_Word * STATE_VARIABLE_TimestampFileNames_16)
{
  MR_bool succeeded;
  MR_Word TargetModuleName_11 = ((MR_Word) ((MR_hl_field(0, TouchedTargetFile_8, (MR_Integer) 0))));
  MR_Word TargetType_12 = ((MR_Word) ((MR_hl_field(0, TouchedTargetFile_8, (MR_Integer) 1))));
  MR_Word TimestampExt_13;

  succeeded = make__file_names__timestamp_extension_2_p_0(TargetType_12, &TimestampExt_13);
  if (succeeded)
  {
    MR_String TimestampFile_14;

    parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_7, (MR_String) "predicate \140make.module_target.gather_target_file_timestamp_file_names\'/6", TimestampExt_13, TargetModuleName_11, &TimestampFile_14);
    mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TimestampFile_14)), STATE_VARIABLE_TimestampFileNames_0_15, STATE_VARIABLE_TimestampFileNames_16);
  }
  else
    *STATE_VARIABLE_TimestampFileNames_16 = STATE_VARIABLE_TimestampFileNames_0_15;
}

static MR_bool MR_CALL 
make__module_target__is_ancestor_module_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * ModuleName_4)
{
  MR_bool succeeded;
  MR_Word Children_5;

  parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_3, &Children_5);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_5);
  succeeded = !(succeeded);
  if (succeeded)
  {
    parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_3, ModuleName_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileName_9,
  MR_Word HeadVar__4_10,
  MR_Word STATE_VARIABLE_Timestamps_0_12,
  MR_Word * STATE_VARIABLE_Timestamps_13)
{
  make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_52_93_95_48_6_p_0(ProgressStream_7, Globals_8, FileName_9, STATE_VARIABLE_Timestamps_0_12, STATE_VARIABLE_Timestamps_13);
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileName_9,
  MR_Word STATE_VARIABLE_Timestamps_0_12,
  MR_Word * STATE_VARIABLE_Timestamps_13)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(FileName_9, (MR_String) ".analysis");
  if (succeeded)
    make__module_target__delete_timestamp_5_p_0(ProgressStream_7, Globals_8, FileName_9, STATE_VARIABLE_Timestamps_0_12, STATE_VARIABLE_Timestamps_13);
  else
    *STATE_VARIABLE_Timestamps_13 = STATE_VARIABLE_Timestamps_0_12;
}

static void MR_CALL 
make__module_target__delete_timestamp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__delete_timestamp_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Globals_7,
  MR_String TouchedFile_8,
  MR_Word STATE_VARIABLE_Timestamps_0_12,
  MR_Word * STATE_VARIABLE_Timestamps_13)
{
  MR_String DebugMsg_11;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (TouchedFile_8));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&make__module_target_scalar_common_4[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (make__module_target__delete_timestamp_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) ((MR_String) "Deleting timestamp for %s\n"));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Var_17));
  }
  make__util__debug_make_msg_3_p_0(Globals_7, Var_15, &DebugMsg_11);
  make__util__maybe_write_msg_4_p_0(ProgressStream_6, DebugMsg_11);
  mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[0]), ((MR_Box) (TouchedFile_8)), STATE_VARIABLE_Timestamps_0_12, STATE_VARIABLE_Timestamps_13);
}

static void MR_CALL 
make__module_target__update_target_status_4_p_0(
  MR_Word TargetStatus_5,
  MR_Word TargetFile_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Dep_8 = (MR_Word) ((MR_Word) (TargetFile_6));
  MR_Word DepStatusMap0_9;
  MR_Word DepStatusMap_10;

  DepStatusMap0_9 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_11);
  mercury__version_hash_table__set_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_8)), ((MR_Box) (TargetStatus_5)), DepStatusMap0_9, &DepStatusMap_10);
  make__make_info__make_info_set_dep_file_status_map_3_p_0(DepStatusMap_10, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
  QuotedArgs_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[9]), Args_13);
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
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "Error opening \140");
    mercury__io__write_string_4_p_0(ProgressStream_10, ArgFileName_20);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\' for output: ");
    mercury__io__write_string_4_p_0(ProgressStream_10, ErrorMsg_26);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\n");
  }
  else
  {
    MR_Word ArgFileStream_22 = ((MR_Word) ((MR_hl_field(0, ArgFileOpenRes_21, (MR_Integer) 0))));
    MR_String Command_23;
    MR_String Var_42;
    MR_String Var_49;
    MR_String Var_52;
    MR_String Var_70;

    Var_42 = mercury__string__join_list_2_f_0((MR_String) " ", QuotedArgs_19);
    mercury__io__write_string_4_p_0(ArgFileStream_22, (MR_String) "MCFLAGS = ");
    mercury__io__write_string_4_p_0(ArgFileStream_22, Var_42);
    mercury__io__write_string_4_p_0(ArgFileStream_22, (MR_String) "\n");
    mercury__io__close_output_3_p_0(ArgFileStream_22);
    Var_49 = libs__shell_util__quote_shell_cmd_arg_1_f_0(MercuryCompiler_18);
    Var_52 = libs__shell_util__quote_shell_cmd_arg_1_f_0(ArgFileName_20);
    Var_70 = mercury__string__f_43_43_2_f_0((MR_String) " --arg-file ", Var_52);
    Command_23 = mercury__string__f_43_43_2_f_0(Var_49, Var_70);
    parse_tree__module_cmds__invoke_system_command_8_p_0(Globals_9, ProgressStream_10, ErrorStream_11, (MR_Integer) 0, Command_23, Succeeded_14);
  }
  mercury__io__file__remove_file_4_p_0(ArgFileName_20, &Var_27);
}

static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word PIC_11,
  MR_Word ModuleDepInfo_12,
  MR_Word ForeignCodeFile_13,
  MR_Word * Succeeded_14)
{
  MR_String Var_30 = ((MR_String) ((MR_hl_field(0, ForeignCodeFile_13, (MR_Integer) 2))));
  MR_String Var_31 = ((MR_String) ((MR_hl_field(0, ForeignCodeFile_13, (MR_Integer) 1))));
  MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(0, ForeignCodeFile_13, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (Var_32) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_9, ProgressStream_10, PIC_11, Var_31, Var_30, Succeeded_14);
      break;
    case (MR_Integer) 1:
      backend_libs__compile_target_code__compile_csharp_file_8_p_0(Globals_9, ProgressStream_10, ModuleDepInfo_12, Var_31, Var_30, Succeeded_14);
      break;
    case (MR_Integer) 2:
      backend_libs__compile_target_code__compile_java_files_7_p_0(Globals_9, ProgressStream_10, Var_31, (MR_Word) ((MR_Unsigned) 0U), Succeeded_14);
      break;
  }
}

static void MR_CALL 
make__module_target__build_object_code_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Target_12,
  MR_Word PIC_13,
  MR_Word ModuleName_14,
  MR_Word _ModuleDepInfo_15,
  MR_Word * Succeeded_16)
{
  make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(ProgressStream_10, Globals_11, Target_12, PIC_13, ModuleName_14, Succeeded_16);
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Target_12,
  MR_Word PIC_13,
  MR_Word ModuleName_14,
  MR_Word * Succeeded_16)
{
  switch (Target_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__compile_c_file_7_p_0(Globals_11, ProgressStream_10, PIC_13, ModuleName_14, Succeeded_16);
      break;
    case (MR_Integer) 1:
      {
        MR_String CsharpFile_19;
        MR_Word Var_34;

        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_11, (MR_String) "predicate \140make.module_target.build_object_code\'/9", (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_2[4])), ModuleName_14, &CsharpFile_19);
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (CsharpFile_19));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        backend_libs__compile_target_code__link_8_p_0(Globals_11, ProgressStream_10, (MR_Integer) 4, ModuleName_14, Var_34, Succeeded_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String JavaFile_18;

        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_11, (MR_String) "predicate \140make.module_target.build_object_code\'/9", (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_2[5])), ModuleName_14, &JavaFile_18);
        backend_libs__compile_target_code__compile_java_files_7_p_0(Globals_11, ProgressStream_10, JavaFile_18, (MR_Word) ((MR_Unsigned) 0U), Succeeded_16);
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
  MR_Word conv3_HeadVar__6_6;

  make__util__remove_file_for_make_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__6_6));
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
  MR_Word conv0_HeadVar__7_7;

  make__util__remove_make_target_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
make__module_target__cleanup_files_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word MaybeArgFileName_11,
  MR_Word MakeLhsFiles_12,
  MR_Word STATE_VARIABLE_MakeInfo_0_20,
  MR_Word * STATE_VARIABLE_MakeInfo_21)
{
  MR_Word LhsFiles_15 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_12, (MR_Integer) 0))));
  MR_Word LhsTimestampFiles_16 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_12, (MR_Integer) 1))));
  MR_Word LhsForeignCodeFiles_17 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_12, (MR_Integer) 2))));
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_MakeInfo_25_25;
  MR_Word Var_29;
  MR_Word STATE_VARIABLE_MakeInfo_30_30;
  MR_Box conv2_STATE_VARIABLE_MakeInfo_25_25;
  MR_Box conv1_STATE_VARIABLE_IO_26_26;
  MR_Box conv5_STATE_VARIABLE_MakeInfo_30_30;
  MR_Box conv4_STATE_VARIABLE_IO_31_31;
  MR_Box conv7_STATE_VARIABLE_MakeInfo_21;
  MR_Box conv6_STATE_VARIABLE_IO_35_35;

  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&make__module_target_scalar_common_5[2]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (make__module_target__cleanup_files_8_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_24, 5) = ((MR_Box) ((MR_String) "predicate \140make.module_target.cleanup_files\'/8"));
    MR_hl_field(0, Var_24, 6) = ((MR_Box) ((MR_Integer) 73));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, LhsFiles_15, ((MR_Box) (STATE_VARIABLE_MakeInfo_0_20)), &conv2_STATE_VARIABLE_MakeInfo_25_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
  STATE_VARIABLE_MakeInfo_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_MakeInfo_25_25));
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&make__module_target_scalar_common_7[4]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (make__module_target__cleanup_files_8_p_0_2));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_29, 5) = ((MR_Box) ((MR_Integer) 73));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, LhsTimestampFiles_16, ((MR_Box) (STATE_VARIABLE_MakeInfo_25_25)), &conv5_STATE_VARIABLE_MakeInfo_30_30, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_31_31);
  STATE_VARIABLE_MakeInfo_30_30 = ((MR_Word) (conv5_STATE_VARIABLE_MakeInfo_30_30));
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, LhsForeignCodeFiles_17, ((MR_Box) (STATE_VARIABLE_MakeInfo_30_30)), &conv7_STATE_VARIABLE_MakeInfo_21, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_35_35);
  *STATE_VARIABLE_MakeInfo_21 = ((MR_Word) (conv7_STATE_VARIABLE_MakeInfo_21));
  if (!((MaybeArgFileName_11 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ArgFileName2_18 = ((MR_String) ((MR_hl_field(1, MaybeArgFileName_11, (MR_Integer) 0))));
    MR_Word Var_19;

    mercury__io__file__remove_file_4_p_0(ArgFileName2_18, &Var_19);
  }
}

static void MR_CALL 
make__module_target__get_any_fact_table_object_code_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ForeignCodeFile_12;

  make__module_target__get_fact_table_foreign_code_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv0_ForeignCodeFile_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_ForeignCodeFile_12));
}

void MR_CALL 
make__module_target__get_any_fact_table_object_code_files_6_p_0(
  MR_Word Globals_7,
  MR_Word PIC_8,
  MR_Word ModuleDepInfo_9,
  MR_Word * ForeignFiles_10)
{
  MR_Word CompilationTarget_12;

  libs__globals__get_target_2_p_0(Globals_7, &CompilationTarget_12);
  switch (CompilationTarget_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObjExt_13;
        MR_Word FactTableFiles_15;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_23;
        MR_Word Var_14;
        MR_Box conv1_STATE_VARIABLE_IO_18;

        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_8, &ObjExt_13, &Var_14);
        parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_9, &FactTableFiles_15);
        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_23, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_13));
        }
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__module_target_scalar_common_6[3]));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__module_target__get_any_fact_table_object_code_files_6_p_0_1));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_19, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_19, 5) = ((MR_Box) (Var_23));
        }
        Var_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_15);
        mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Var_20, ForeignFiles_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ForeignFiles_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
make__module_target__record_made_target_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_84;

  make__module_target__IntroducedFrom__pred__record_made_target_given_make_lhs_files__905__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__3_84);
  *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__3_84));
}

static void MR_CALL 
make__module_target__record_made_target_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Timestamps_13;

  make__module_target__delete_analysis_registry_timestamps_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_Timestamps_13);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_Timestamps_13));
}

static void MR_CALL 
make__module_target__record_made_target_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Timestamps_13;

  make__module_target__delete_timestamp_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Timestamps_13);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Timestamps_13));
}

static void MR_CALL 
make__module_target__record_made_target_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__6_6;
  MR_Word conv2_HeadVar__8_8;

  make__file_names__module_maybe_nested_target_file_to_file_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__6_6, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__6_6));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__8_8));
}

static void MR_CALL 
make__module_target__record_made_target_10_p_0_1(
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

void MR_CALL 
make__module_target__record_made_target_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word TargetFile_13,
  MR_String TargetFileName_14,
  MR_Word CompilationTask_15,
  MR_Word Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word MakeLhsFiles_19;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word TargetStatus_26;
  MR_Word LhsFiles_28;
  MR_Word LhsTimestampFiles_29;
  MR_Word LhsForeignCodeFiles_30;
  MR_Word TouchedTargetFileNames_31;
  MR_Word TargetFileTimestamps0_33;
  MR_Word TargetFileTimestamps_34;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_Info_35_37;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_Info_37_39;
  MR_Word STATE_VARIABLE_FileTimestamps_41_42;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_FileTimestamps_43_44;
  MR_Word STATE_VARIABLE_FileTimestamps_45_46;
  MR_Word STATE_VARIABLE_FileTimestamps_47_48;
  MR_Word STATE_VARIABLE_FileTimestamps_51_51;
  MR_Word STATE_VARIABLE_Info_52_52;
  MR_Box conv1_STATE_VARIABLE_Info_35_37;
  MR_Box conv5_STATE_VARIABLE_Info_37_39;
  MR_Box conv4_STATE_VARIABLE_IO_23;
  MR_Box conv7_STATE_VARIABLE_FileTimestamps_43_44;
  MR_Box conv8_STATE_VARIABLE_FileTimestamps_45_46;
  MR_Box conv9_STATE_VARIABLE_FileTimestamps_47_48;
  MR_Word Var_49;
  MR_Box conv13_TargetFileTimestamps_34;

  make__module_target__find_lhs_files_of_task_9_p_0(ProgressStream_11, Globals_12, TargetFile_13, CompilationTask_15, &MakeLhsFiles_19, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_24);
  switch (Succeeded_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ErrorMsg_27;

        TargetStatus_26 = (MR_Integer) 3;
        make__util__file_error_msg_2_p_0(TargetFileName_14, &ErrorMsg_27);
        make__util__maybe_write_msg_locked_5_p_0(ProgressStream_11, STATE_VARIABLE_Info_24_24, ErrorMsg_27);
      }
      break;
    case (MR_Integer) 1:
      TargetStatus_26 = (MR_Integer) 2;
      break;
  }
  LhsFiles_28 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_19, (MR_Integer) 0))));
  LhsTimestampFiles_29 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_19, (MR_Integer) 1))));
  LhsForeignCodeFiles_30 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_19, (MR_Integer) 2))));
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (make__module_target__record_made_target_10_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (TargetStatus_26));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_36, LhsFiles_28, ((MR_Box) (STATE_VARIABLE_Info_24_24)), &conv1_STATE_VARIABLE_Info_35_37);
  STATE_VARIABLE_Info_35_37 = ((MR_Word) (conv1_STATE_VARIABLE_Info_35_37));
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&make__module_target_scalar_common_10[0]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (make__module_target__record_made_target_10_p_0_2));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) (Globals_12));
    MR_hl_field(0, Var_38, 5) = ((MR_Box) ((MR_String) "predicate \140make.module_target.record_made_target_given_make_lhs_files\'/10"));
    MR_hl_field(0, Var_38, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, LhsFiles_28, &TouchedTargetFileNames_31, ((MR_Box) (STATE_VARIABLE_Info_35_37)), &conv5_STATE_VARIABLE_Info_37_39, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_23);
  STATE_VARIABLE_Info_37_39 = ((MR_Word) (conv5_STATE_VARIABLE_Info_37_39));
  STATE_VARIABLE_FileTimestamps_41_42 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_37_39);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&make__module_target_scalar_common_11[0]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (make__module_target__record_made_target_10_p_0_3));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_43, 4) = ((MR_Box) (Globals_12));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[1]), Var_43, TouchedTargetFileNames_31, ((MR_Box) (STATE_VARIABLE_FileTimestamps_41_42)), &conv7_STATE_VARIABLE_FileTimestamps_43_44);
  STATE_VARIABLE_FileTimestamps_43_44 = ((MR_Word) (conv7_STATE_VARIABLE_FileTimestamps_43_44));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[1]), Var_43, LhsTimestampFiles_29, ((MR_Box) (STATE_VARIABLE_FileTimestamps_43_44)), &conv8_STATE_VARIABLE_FileTimestamps_45_46);
  STATE_VARIABLE_FileTimestamps_45_46 = ((MR_Word) (conv8_STATE_VARIABLE_FileTimestamps_45_46));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[1]), Var_43, LhsForeignCodeFiles_30, ((MR_Box) (STATE_VARIABLE_FileTimestamps_45_46)), &conv9_STATE_VARIABLE_FileTimestamps_47_48);
  STATE_VARIABLE_FileTimestamps_47_48 = ((MR_Word) (conv9_STATE_VARIABLE_FileTimestamps_47_48));
  Var_49 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));
  succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word Var_50;
    MR_Box conv11_STATE_VARIABLE_FileTimestamps_51_51;

    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__module_target_scalar_common_12[0]));
      MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__module_target__record_made_target_10_p_0_4));
      MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_50, 3) = ((MR_Box) (ProgressStream_11));
      MR_hl_field(0, Var_50, 4) = ((MR_Box) (Globals_12));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[0]), (MR_Word) (&make__module_target_scalar_common_1[1]), Var_50, STATE_VARIABLE_FileTimestamps_47_48, ((MR_Box) (STATE_VARIABLE_FileTimestamps_47_48)), &conv11_STATE_VARIABLE_FileTimestamps_51_51);
    STATE_VARIABLE_FileTimestamps_51_51 = ((MR_Word) (conv11_STATE_VARIABLE_FileTimestamps_51_51));
  }
  else
    STATE_VARIABLE_FileTimestamps_51_51 = STATE_VARIABLE_FileTimestamps_47_48;
  make__make_info__make_info_set_file_timestamps_3_p_0(STATE_VARIABLE_FileTimestamps_51_51, STATE_VARIABLE_Info_37_39, &STATE_VARIABLE_Info_52_52);
  TargetFileTimestamps0_33 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_52_52);
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_1[2]), (MR_Word) (&make__module_target_scalar_common_1[8]), LhsFiles_28, ((MR_Box) (TargetFileTimestamps0_33)), &conv13_TargetFileTimestamps_34);
  TargetFileTimestamps_34 = ((MR_Word) (conv13_TargetFileTimestamps_34));
  make__make_info__make_info_set_target_file_timestamps_3_p_0(TargetFileTimestamps_34, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_21);
}

void MR_CALL 
make__module_target__make_module_target_9_p_0(
  MR_Word ExtraOptions_10,
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Dep_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word StatusResult_17;
    MR_Word Status_20;
    MR_Word STATE_VARIABLE_Info_41_41;

    // setup for model_det tailcalls optimized into a loop
    ;
    make__check_up_to_date__get_dependency_file_status_8_p_0(ProgressStream_11, Globals_12, Dep_13, &StatusResult_17, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_41_41);
    Status_20 = ((MR_Unsigned) ((MR_hl_field(0, StatusResult_17, (MR_Integer) 2))) & (MR_Integer) 3);
    switch (Status_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          if (((MR_tag((MR_Word) Dep_13)) == (MR_Integer) 1))
            *Succeeded_14 = (MR_Integer) 1;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.make_module_target\'/9", (MR_String) "target being built, circular dependencies\?");
              return;
            }
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_41_41;
        }
        break;
      case (MR_Integer) 3:
        {
          *Succeeded_14 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_41_41;
        }
        break;
      case (MR_Integer) 0:
        if (((MR_tag((MR_Word) Dep_13)) == (MR_Integer) 1))
        {
          *Succeeded_14 = (MR_Integer) 1;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_41_41;
        }
        else
        {
          MR_Word TargetFile_22 = (MR_Word) ((MR_Word) (Dep_13));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, TargetFile_22, (MR_Integer) 0))));
          MR_Word TargetType_24 = ((MR_Word) ((MR_hl_field(0, TargetFile_22, (MR_Integer) 1))));
          MR_Word MaybeModuleDepInfo_25;
          MR_Word STATE_VARIABLE_Info_43_43;

          make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_12, ModuleName_23, &MaybeModuleDepInfo_25, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_43_43);
          if ((MaybeModuleDepInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word DepStatusMap0_26;
            MR_Word DepStatusMap_27;

            *Succeeded_14 = (MR_Integer) 0;
            DepStatusMap0_26 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_43_43);
            mercury__version_hash_table__set_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_13)), ((MR_Box) ((MR_Integer) 3)), DepStatusMap0_26, &DepStatusMap_27);
            make__make_info__make_info_set_dep_file_status_map_3_p_0(DepStatusMap_27, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_38);
          }
          else
          {
            MR_Word ModuleDepInfo_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_25, (MR_Integer) 0))));
            MR_Word CompilationTaskAndOptions_29;
            MR_Word SourceFileModuleName_30;
            MR_Word CompilationTaskType_31;

            switch (MR_tag((MR_Word) TargetType_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(TargetType_24)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 8:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.get_compilation_task_and_options\'/2", (MR_String) "compilation_task");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[13]);
                    break;
                  case (MR_Integer) 2:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[15]);
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[17]);
                    break;
                  case (MR_Integer) 5:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[19]);
                    break;
                  case (MR_Integer) 6:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[24]);
                    break;
                  case (MR_Integer) 7:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[7]);
                    break;
                  case (MR_Integer) 9:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[9]);
                    break;
                  case (MR_Integer) 10:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[11]);
                    break;
                  case (MR_Integer) 11:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[22]);
                    break;
                  case (MR_Integer) 12:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[20]);
                    break;
                  case (MR_Integer) 13:
                    CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[26]);
                    break;
                }
                break;
              case (MR_Integer) 1:
                CompilationTaskAndOptions_29 = (MR_Word) (&make__module_target_scalar_common_2[9]);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word PIC_58 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_24, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word Var_66;

                  {
                    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_66, 0) = (MR_Box) ((MR_Unsigned) (PIC_58));
                  }
                  {
                    CompilationTaskAndOptions_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CompilationTaskAndOptions_29, 0) = ((MR_Box) (Var_66));
                    MR_hl_field(0, CompilationTaskAndOptions_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, TargetType_24, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_68;
                      MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, TargetType_24, (MR_Integer) 1)));

                      {
                        Var_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_68, 0) = (MR_Box) (packed_word_2);
                      }
                      {
                        CompilationTaskAndOptions_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CompilationTaskAndOptions_29, 0) = ((MR_Box) (Var_68));
                        MR_hl_field(0, CompilationTaskAndOptions_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String FactTable_60 = ((MR_String) ((MR_hl_field(3, TargetType_24, (MR_Integer) 2))));
                      MR_Word Var_70;
                      MR_Word PIC_73 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_24, (MR_Integer) 1))) & (MR_Integer) 1);

                      {
                        Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_70, 0) = (MR_Box) ((MR_Unsigned) (PIC_73));
                        MR_hl_field(3, Var_70, 1) = ((MR_Box) (FactTable_60));
                      }
                      {
                        CompilationTaskAndOptions_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CompilationTaskAndOptions_29, 0) = ((MR_Box) (Var_70));
                        MR_hl_field(0, CompilationTaskAndOptions_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
                break;
            }
            parse_tree__module_dep_info__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_28, &SourceFileModuleName_30);
            CompilationTaskType_31 = ((MR_Word) ((MR_hl_field(0, CompilationTaskAndOptions_29, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) CompilationTaskType_31)) == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_30, ModuleName_23);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word NestedTargetFile_34;
              MR_Word Var_47;
              MR_Word next_value_of_Dep_13;
              MR_Word next_value_of_STATE_VARIABLE_Info_0_37;

              {
                NestedTargetFile_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NestedTargetFile_34, 0) = ((MR_Box) (SourceFileModuleName_30));
                MR_hl_field(0, NestedTargetFile_34, 1) = ((MR_Box) (TargetType_24));
              }
              Var_47 = (MR_Word) ((MR_Word) (NestedTargetFile_34));
              // direct tailcall eliminated
              ;
              next_value_of_Dep_13 = Var_47;
              next_value_of_STATE_VARIABLE_Info_0_37 = STATE_VARIABLE_Info_43_43;
              Dep_13 = next_value_of_Dep_13;
              STATE_VARIABLE_Info_0_37 = next_value_of_STATE_VARIABLE_Info_0_37;
              continue;
            }
            else
              make__module_target__make_module_target_file_main_path_11_p_0(ExtraOptions_10, ProgressStream_11, Globals_12, TargetFile_22, CompilationTaskAndOptions_29, ModuleDepInfo_28, Succeeded_14, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_38);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Succeeded_14 = (MR_Integer) 1;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_41_41;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_6(
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
make__module_target__make_module_target_file_main_path_11_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv7_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv7_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv7_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv2_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_11_p_0_1(
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
make__module_target__make_module_target_file_main_path_11_p_0(
  MR_Word ExtraOptions_12,
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word TargetFile_15,
  MR_Word CompilationTaskAndOptions_16,
  MR_Word ModuleDepInfo_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_bool succeeded;
  MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(0, TargetFile_15, (MR_Integer) 0))));
  MR_Word TargetType_22 = ((MR_Word) ((MR_hl_field(0, TargetFile_15, (MR_Integer) 1))));
  MR_String TargetFileName_23;
  MR_Word CompilationTaskType_24;
  MR_Word MakeLhsFiles_26;
  MR_Word LhsFiles_27;
  MR_String CheckingMsg_30;
  MR_Word DepsSucceeded_31;
  MR_Word DepFilesSet_32;
  MR_Word DepFilesToMake_33;
  MR_Word KeepGoing_34;
  MR_Word STATE_VARIABLE_Info_48_48;
  MR_Word STATE_VARIABLE_Info_51_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_Info_59_59;
  MR_Box conv1_STATE_VARIABLE_Info_51_51;

  make__file_names__module_target_file_to_file_name_6_p_0(Globals_14, (MR_String) "predicate \140make.module_target.make_module_target_file_main_path\'/11", TargetFile_15, &TargetFileName_23);
  CompilationTaskType_24 = ((MR_Word) ((MR_hl_field(0, CompilationTaskAndOptions_16, (MR_Integer) 0))));
  make__module_target__find_lhs_files_of_task_9_p_0(ProgressStream_13, Globals_14, TargetFile_15, CompilationTaskType_24, &MakeLhsFiles_26, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_48_48);
  LhsFiles_27 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_26, (MR_Integer) 0))));
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[0]), LhsFiles_27, ((MR_Box) (STATE_VARIABLE_Info_48_48)), &conv1_STATE_VARIABLE_Info_51_51);
  STATE_VARIABLE_Info_51_51 = ((MR_Word) (conv1_STATE_VARIABLE_Info_51_51));
  {
    Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_56, 1) = ((MR_Box) (TargetFileName_23));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&make__module_target_scalar_common_4[0]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_11_p_0_2));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) ((MR_String) "%s: checking dependencies\n"));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) (Var_55));
  }
  make__util__debug_make_msg_3_p_0(Globals_14, Var_53, &CheckingMsg_30);
  make__util__maybe_write_msg_4_p_0(ProgressStream_13, CheckingMsg_30);
  make__dependencies__find_direct_prereqs_of_target_file_11_p_0(ProgressStream_13, Globals_14, CompilationTaskType_24, ModuleDepInfo_17, TargetFile_15, &DepsSucceeded_31, &DepFilesSet_32, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_59_59);
  DepFilesToMake_33 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), DepFilesSet_32);
  KeepGoing_34 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_59_59);
  succeeded = (DepsSucceeded_31 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_34 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Box conv4_STATE_VARIABLE_Info_43;

    *Succeeded_18 = (MR_Integer) 0;
    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[1]), LhsFiles_27, ((MR_Box) (STATE_VARIABLE_Info_59_59)), &conv4_STATE_VARIABLE_Info_43);
    *STATE_VARIABLE_Info_43 = ((MR_Word) (conv4_STATE_VARIABLE_Info_43));
  }
  else
  {
    MR_Word LhsResult0_36;
    MR_Word STATE_VARIABLE_Info_61_100;

    make__module_target__make_dependency_files_11_p_0(ProgressStream_13, Globals_14, TargetFile_15, TargetFileName_23, DepFilesToMake_33, MakeLhsFiles_26, &LhsResult0_36, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_61_100);
    switch (DepsSucceeded_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box conv6_STATE_VARIABLE_Info_43;

          *Succeeded_18 = (MR_Integer) 0;
          mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[2]), LhsFiles_27, ((MR_Box) (STATE_VARIABLE_Info_61_100)), &conv6_STATE_VARIABLE_Info_43);
          *STATE_VARIABLE_Info_43 = ((MR_Word) (conv6_STATE_VARIABLE_Info_43));
        }
        break;
      case (MR_Integer) 1:
        switch (LhsResult0_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TopTargetFile_39;
              MR_String UpToDateMsg_40;
              MR_String DebugMsg_41;
              MR_Word Var_71;
              MR_Word STATE_VARIABLE_Info_72_72;
              MR_Word Var_74;
              MR_Word Var_81;
              MR_Box conv9_STATE_VARIABLE_Info_43;

              {
                Var_71 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_71, 0) = ((MR_Box) (TargetType_22));
              }
              {
                TopTargetFile_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TopTargetFile_39, 0) = ((MR_Box) (ModuleName_21));
                MR_hl_field(0, TopTargetFile_39, 1) = ((MR_Box) (Var_71));
              }
              make__util__maybe_warn_up_to_date_target_msg_6_p_0(Globals_14, TopTargetFile_39, TargetFileName_23, STATE_VARIABLE_Info_61_100, &STATE_VARIABLE_Info_72_72, &UpToDateMsg_40);
              make__util__maybe_write_msg_4_p_0(ProgressStream_13, UpToDateMsg_40);
              {
                Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_74, 0) = ((MR_Box) (&make__module_target_scalar_common_4[0]));
                MR_hl_field(0, Var_74, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_11_p_0_5));
                MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_74, 3) = ((MR_Box) ((MR_String) "%s: up to date\n"));
                MR_hl_field(0, Var_74, 4) = ((MR_Box) (Var_55));
              }
              make__util__debug_make_msg_3_p_0(Globals_14, Var_74, &DebugMsg_41);
              make__util__maybe_write_msg_4_p_0(ProgressStream_13, DebugMsg_41);
              *Succeeded_18 = (MR_Integer) 1;
              {
                Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_81, 0) = ((MR_Box) (TargetFile_15));
                MR_hl_field(1, Var_81, 1) = ((MR_Box) (LhsFiles_27));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[3]), Var_81, ((MR_Box) (STATE_VARIABLE_Info_72_72)), &conv9_STATE_VARIABLE_Info_43);
              *STATE_VARIABLE_Info_43 = ((MR_Word) (conv9_STATE_VARIABLE_Info_43));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box conv11_STATE_VARIABLE_Info_43;

              *Succeeded_18 = (MR_Integer) 0;
              mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[4]), LhsFiles_27, ((MR_Box) (STATE_VARIABLE_Info_61_100)), &conv11_STATE_VARIABLE_Info_43);
              *STATE_VARIABLE_Info_43 = ((MR_Word) (conv11_STATE_VARIABLE_Info_43));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Targets0_37;
              MR_Word Targets_38;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word STATE_VARIABLE_Info_68_68;

              Targets0_37 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_61_100);
              {
                Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_67, 0) = ((MR_Box) (TargetType_22));
              }
              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_66, 0) = ((MR_Box) (ModuleName_21));
                MR_hl_field(0, Var_66, 1) = ((MR_Box) (Var_67));
              }
              mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_66)), Targets0_37, &Targets_38);
              make__make_info__make_info_set_command_line_targets_3_p_0(Targets_38, STATE_VARIABLE_Info_61_100, &STATE_VARIABLE_Info_68_68);
              make__module_target__build_target_13_p_0(ProgressStream_13, Globals_14, CompilationTaskAndOptions_16, TargetFile_15, TargetFileName_23, ModuleDepInfo_17, MakeLhsFiles_26, ExtraOptions_12, Succeeded_18, STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Info_43);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_target__find_lhs_files_of_task_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word Task_13,
  MR_Word * MakeLhsFiles_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  switch (MR_tag((MR_Word) Task_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModuleTask_17 = ((MR_Unsigned) ((MR_hl_field(0, Task_13, (MR_Integer) 0))) & (MR_Integer) 7);

        make__module_target__find_lhs_files_of_process_module_9_p_0(ProgressStream_10, Globals_11, TargetFile_12, ModuleTask_17, MakeLhsFiles_14, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_35;

        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (TargetFile_12));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *MakeLhsFiles_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PIC_19 = ((((MR_Unsigned) ((MR_hl_field(2, Task_13, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        MR_Word Lang_20 = ((MR_Unsigned) ((MR_hl_field(2, Task_13, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 0))));
        MR_String ForeignObjectFile_24;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word ForeignModName_62;
        MR_Word SrcExt_63;
        MR_Word ObjExt_64;
        MR_Word Var_70;
        MR_Word CompilationTarget_71;
        MR_String SrcFileName_65;

        parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_21, Lang_20, &ForeignModName_62);
        parse_tree__prog_foreign__foreign_language_file_extension_2_p_0(Lang_20, &SrcExt_63);
        libs__globals__get_target_2_p_0(Globals_11, &CompilationTarget_71);
        switch (CompilationTarget_71) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_72;

              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_19, &ObjExt_64, &Var_72);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_11, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", SrcExt_63, ForeignModName_62, &SrcFileName_65);
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_70, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_64));
        }
        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_11, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", Var_70, ForeignModName_62, &ForeignObjectFile_24);
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (TargetFile_12));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (ForeignObjectFile_24));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *MakeLhsFiles_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_43));
        }
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String FactTableName_25 = ((MR_String) ((MR_hl_field(3, Task_13, (MR_Integer) 1))));
        MR_Word ObjExt_26;
        MR_Word FactTableDirs_27;
        MR_String FactTableObjectFile_28;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word PIC_53 = ((MR_Unsigned) ((MR_hl_field(3, Task_13, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_56;

        libs__globals__get_target_2_p_0(Globals_11, &CompilationTarget_56);
        switch (CompilationTarget_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_57;

              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_53, &ObjExt_26, &Var_57);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        {
          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_46, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_26));
        }
        parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(Globals_11, (MR_String) "predicate \140make.module_target.find_lhs_files_of_task\'/9", Var_46, FactTableName_25, &FactTableDirs_27, &FactTableObjectFile_28);
        parse_tree__file_names__create_any_dirs_on_path_3_p_0(FactTableDirs_27);
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (TargetFile_12));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (FactTableObjectFile_28));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *MakeLhsFiles_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_51));
        }
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      }
      break;
  }
}

static void MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_TimestampFileNames_16;

  make__module_target__gather_target_file_timestamp_file_names_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_TimestampFileNames_16);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_TimestampFileNames_16));
}

static MR_bool MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv8_ModuleName_4;

  succeeded = make__module_target__is_ancestor_module_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_ModuleName_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv8_ModuleName_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_LambdaHeadVar__2_60;

  conv7_LambdaHeadVar__2_60 = make__module_target__IntroducedFrom__func__find_lhs_files_of_process_module__1142__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_60));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_ForeignFiles_10;

  make__module_target__get_any_fact_table_object_code_files_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_ForeignFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv5_ForeignFiles_10));
}

static MR_bool MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_53;

  succeeded = make__module_target__IntroducedFrom__pred__find_lhs_files_of_process_module__1122__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_53);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_53));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0_1(
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

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
make__module_target__find_lhs_files_of_process_module_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word Task_13,
  MR_Word * MakeLhsFiles_14,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 1))));
  MR_Word MaybeModuleDepInfo_19;
  MR_Word ModuleDepInfo_20;
  MR_Word MaybeTopModule_21;
  MR_Word NestedSubModules_22;
  MR_Word SourceFileModuleNames_23;
  MR_Word MaybeNestedModuleDepInfos_24;
  MR_Word ModuleDepInfos_27;
  MR_Word LhsForeignCodeFileNames_31;
  MR_Word LhsFiles_37;
  MR_Word LhsTimestampFileNames_39;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word Var_48;
  MR_Word Var_73;
  MR_Box conv3_STATE_VARIABLE_Info_41;
  MR_Box conv2_STATE_VARIABLE_IO_50_50;
  MR_Word NestedModuleDepInfos_26;
  MR_Box conv11_LhsTimestampFileNames_39;
  MR_Box conv10_STATE_VARIABLE_IO_43;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_17, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_44_44);
  if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.find_lhs_files_of_process_module\'/9", (MR_String) "no module dependencies");
      return;
    }
  else
    ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_19, (MR_Integer) 0))));
  parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_20, &MaybeTopModule_21);
  NestedSubModules_22 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_21);
  {
    SourceFileModuleNames_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SourceFileModuleNames_23, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(1, SourceFileModuleNames_23, 1) = ((MR_Box) (NestedSubModules_22));
  }
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__module_target_scalar_common_7[3]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__module_target__find_lhs_files_of_process_module_9_p_0_1));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) (Globals_11));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, NestedSubModules_22, &MaybeNestedModuleDepInfos_24, ((MR_Box) (STATE_VARIABLE_Info_44_44)), &conv3_STATE_VARIABLE_Info_41, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_50_50);
  *STATE_VARIABLE_Info_41 = ((MR_Word) (conv3_STATE_VARIABLE_Info_41));
  succeeded = mercury__list__map_3_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), (MR_Word) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0), (MR_Word) (&make__module_target_scalar_common_1[5]), MaybeNestedModuleDepInfos_24, &NestedModuleDepInfos_26);
  if (succeeded)
    {
      ModuleDepInfos_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ModuleDepInfos_27, 0) = ((MR_Box) (ModuleDepInfo_20));
      MR_hl_field(1, ModuleDepInfos_27, 1) = ((MR_Box) (NestedModuleDepInfos_26));
    }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.find_lhs_files_of_process_module\'/9", (MR_String) "no nested module dependencies");
      return;
    }
  switch (Task_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 6:
      {
        MR_Word DirectLhsFiles_28;
        MR_Word TargetPIC_29;
        MR_Word ForeignCodeFileList_30;
        MR_Word CompilationTarget_33;
        MR_Word Var_56;
        MR_Word Var_61;
        MR_Box conv6_STATE_VARIABLE_IO_57_57;

        DirectLhsFiles_28 = make__util__make_target_file_list_2_f_0(SourceFileModuleNames_23, TargetType_18);
        switch (MR_tag((MR_Word) TargetType_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetPIC_29 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            TargetPIC_29 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            TargetPIC_29 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_18, (MR_Integer) 0))) & (MR_Integer) 1);
            break;
          case (MR_Integer) 3:
            TargetPIC_29 = (MR_Integer) 1;
            break;
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__module_target_scalar_common_12[1]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__module_target__find_lhs_files_of_process_module_9_p_0_3));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_56, 4) = ((MR_Box) (TargetPIC_29));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, ModuleDepInfos_27, &ForeignCodeFileList_30, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_57_57);
        Var_61 = mercury__list__condense_1_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), ForeignCodeFileList_30);
        LhsForeignCodeFileNames_31 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[6]), Var_61);
        libs__globals__get_target_2_p_0(Globals_11, &CompilationTarget_33);
        switch (CompilationTarget_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MhTargets_34;
              MR_Word HighLevelCode_35;

              MhTargets_34 = make__util__make_target_file_list_2_f_0(SourceFileModuleNames_23, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[4])));
              libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 312, &HighLevelCode_35);
              switch (HighLevelCode_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  LhsFiles_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), DirectLhsFiles_28, MhTargets_34);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MihTargets_36;
                    MR_Word Var_67;

                    MihTargets_36 = make__util__make_target_file_list_2_f_0(SourceFileModuleNames_23, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[5])));
                    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), MhTargets_34, MihTargets_36);
                    LhsFiles_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), DirectLhsFiles_28, Var_67);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            LhsFiles_37 = DirectLhsFiles_28;
            break;
        }
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 5:
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 7:
      {
        LhsFiles_37 = make__util__make_target_file_list_2_f_0(SourceFileModuleNames_23, TargetType_18);
        LhsForeignCodeFileNames_31 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AncestorModules_38;

        mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_target_scalar_common_1[7]), ModuleDepInfos_27, &AncestorModules_38);
        LhsFiles_37 = make__util__make_target_file_list_2_f_0(AncestorModules_38, TargetType_18);
        LhsForeignCodeFileNames_31 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_69;
        MR_Word Var_71;

        Var_69 = make__util__make_target_file_list_2_f_0(SourceFileModuleNames_23, (MR_Word) ((MR_Unsigned) 12U));
        Var_71 = make__util__make_target_file_list_2_f_0(SourceFileModuleNames_23, (MR_Word) ((MR_Unsigned) 16U));
        LhsFiles_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_69, Var_71);
        LhsForeignCodeFileNames_31 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&make__module_target_scalar_common_12[2]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (make__module_target__find_lhs_files_of_process_module_9_p_0_6));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (Globals_11));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, LhsFiles_37, ((MR_Box) ((MR_Unsigned) 0U)), &conv11_LhsTimestampFileNames_39, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_43);
  LhsTimestampFileNames_39 = ((MR_Word) (conv11_LhsTimestampFileNames_39));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *MakeLhsFiles_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LhsFiles_37));
    MR_hl_field(0, base, 1) = ((MR_Box) (LhsTimestampFileNames_39));
    MR_hl_field(0, base, 2) = ((MR_Box) (LhsForeignCodeFileNames_31));
  }
}

static void MR_CALL 
make__module_target__build_target_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_MakeInfo_21;

  make__module_target__cleanup_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_MakeInfo_21);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_MakeInfo_21));
}

static void MR_CALL 
make__module_target__build_target_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word CompilationTask_16,
  MR_Word TargetFile_17,
  MR_String TargetFileName_18,
  MR_Word ModuleDepInfo_19,
  MR_Word MakeLhsFiles_20,
  MR_Word ExtraOptions_21,
  MR_Word * Succeeded_22,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58)
{
  MR_bool succeeded;
  MR_String MakingMsg_25;
  MR_Word ModuleName_26;
  MR_Word Task_28;
  MR_Word TaskOptions_29;
  MR_Word ExtraAndTaskOptions_30;
  MR_Word MaybeArgFileName_34;
  MR_Word ArgFileNameRes_35;
  MR_Word ModuleTask_31;

  make__util__maybe_making_filename_msg_3_p_0(Globals_15, TargetFileName_18, &MakingMsg_25);
  make__util__maybe_write_msg_4_p_0(ProgressStream_14, MakingMsg_25);
  ModuleName_26 = ((MR_Word) ((MR_hl_field(0, TargetFile_17, (MR_Integer) 0))));
  Task_28 = ((MR_Word) ((MR_hl_field(0, CompilationTask_16, (MR_Integer) 0))));
  TaskOptions_29 = ((MR_Word) ((MR_hl_field(0, CompilationTask_16, (MR_Integer) 1))));
  ExtraAndTaskOptions_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraOptions_21, TaskOptions_29);
  succeeded = ((MR_tag((MR_Word) Task_28)) == (MR_Integer) 0);
  if (succeeded)
  {
    ModuleTask_31 = ((MR_Unsigned) ((MR_hl_field(0, Task_28, (MR_Integer) 0))) & (MR_Integer) 7);
    if (((MR_Unsigned) 240U & (((MR_Integer) 1 << ModuleTask_31))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = libs__process_util__can_fork_0_p_0();
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_Word ArgFileNameResult_32;

    mercury__io__file__make_temp_file_3_p_0(&ArgFileNameResult_32);
    if (((MR_tag((MR_Word) ArgFileNameResult_32)) == (MR_Integer) 1))
    {
      MR_Word Error_36 = ((MR_Word) ((MR_hl_field(1, ArgFileNameResult_32, (MR_Integer) 0))));

      MaybeArgFileName_34 = (MR_Word) ((MR_Unsigned) 0U);
      {
        ArgFileNameRes_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgFileNameRes_35, 0) = ((MR_Box) (Error_36));
      }
    }
    else
    {
      MR_String ArgFileName_33 = ((MR_String) ((MR_hl_field(0, ArgFileNameResult_32, (MR_Integer) 0))));

      {
        MaybeArgFileName_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeArgFileName_34, 0) = ((MR_Box) (ArgFileName_33));
      }
      ArgFileNameRes_35 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
  {
    MaybeArgFileName_34 = (MR_Word) ((MR_Unsigned) 0U);
    ArgFileNameRes_35 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((ArgFileNameRes_35 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer StartTimeMs_37;
    MR_Word VeryVerbose_38;
    MR_Word Cleanup_39;
    MR_Box Cookie_40;
    MR_Word DefaultOptionTable_41;
    MR_Word DetectedGradeFlags_42;
    MR_Word OptionVariables_43;
    MR_Word OptionArgs_44;
    MR_Word MayBuild_45;
    MR_Word Succeeded0_49;
    MR_Integer EndTimeMs_53;
    MR_Word ShowMakeTimes_54;
    MR_Word STATE_VARIABLE_Info_73_73;
    MR_Word STATE_VARIABLE_Info_76_76;
    MR_Box conv1_STATE_VARIABLE_Info_76_76;

    make__util__get_real_milliseconds_3_p_0(&StartTimeMs_37);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 73, &VeryVerbose_38);
    {
      Cleanup_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_39, 0) = ((MR_Box) (&make__module_target_scalar_common_7[2]));
      MR_hl_field(0, Cleanup_39, 1) = ((MR_Box) (make__module_target__build_target_13_p_0_1));
      MR_hl_field(0, Cleanup_39, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Cleanup_39, 3) = ((MR_Box) (ProgressStream_14));
      MR_hl_field(0, Cleanup_39, 4) = ((MR_Box) (Globals_15));
      MR_hl_field(0, Cleanup_39, 5) = ((MR_Box) (MaybeArgFileName_34));
      MR_hl_field(0, Cleanup_39, 6) = ((MR_Box) (MakeLhsFiles_20));
    }
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_40);
    libs__globals__get_default_options_2_p_0(Globals_15, &DefaultOptionTable_41);
    DetectedGradeFlags_42 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_0_57);
    OptionVariables_43 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_0_57);
    OptionArgs_44 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_57);
    make__build__setup_for_build_with_module_options_11_p_0(ProgressStream_14, DefaultOptionTable_41, (MR_Integer) 1, ModuleName_26, DetectedGradeFlags_42, OptionVariables_43, OptionArgs_44, ExtraAndTaskOptions_30, &MayBuild_45);
    if (((MR_tag((MR_Word) MayBuild_45)) == (MR_Integer) 1))
    {
      MR_Word AllOptionArgs_46 = ((MR_Word) ((MR_hl_field(1, MayBuild_45, (MR_Integer) 0))));
      MR_Word BuildGlobals_47 = ((MR_Word) ((MR_hl_field(1, MayBuild_45, (MR_Integer) 1))));
      MR_Word MaybeErrorStream_48;
      MR_Word STATE_VARIABLE_Info_69_69;

      make__build__open_module_error_stream_8_p_0(ProgressStream_14, Globals_15, ModuleName_26, &MaybeErrorStream_48, STATE_VARIABLE_Info_0_57, &STATE_VARIABLE_Info_69_69);
      if ((MaybeErrorStream_48 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_49 = (MR_Integer) 0;
        STATE_VARIABLE_Info_73_73 = STATE_VARIABLE_Info_69_69;
      }
      else
      {
        MR_Word MESI_50 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_48, (MR_Integer) 0))));
        MR_Word ErrorStream_51 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_48, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Info_71_71;

        make__module_target__build_target_2_13_p_0(ProgressStream_14, ErrorStream_51, BuildGlobals_47, Task_28, ModuleName_26, ModuleDepInfo_19, MaybeArgFileName_34, AllOptionArgs_46, &Succeeded0_49, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_71_71);
        make__build__close_module_error_stream_handle_errors_9_p_0(ProgressStream_14, Globals_15, ModuleName_26, MESI_50, ErrorStream_51, STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_73_73);
      }
    }
    else
    {
      MR_Word Specs_52 = ((MR_Word) ((MR_hl_field(0, MayBuild_45, (MR_Integer) 0))));

      parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_14, Globals_15, Specs_52);
      Succeeded0_49 = (MR_Integer) 0;
      STATE_VARIABLE_Info_73_73 = STATE_VARIABLE_Info_0_57;
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_38, Cookie_40, Cleanup_39, Succeeded0_49, Succeeded_22, ((MR_Box) (STATE_VARIABLE_Info_73_73)), &conv1_STATE_VARIABLE_Info_76_76);
    STATE_VARIABLE_Info_76_76 = ((MR_Word) (conv1_STATE_VARIABLE_Info_76_76));
    make__module_target__record_made_target_given_make_lhs_files_10_p_0(ProgressStream_14, Globals_15, *Succeeded_22, TargetFile_17, TargetFileName_18, MakeLhsFiles_20, STATE_VARIABLE_Info_76_76, STATE_VARIABLE_Info_58);
    make__util__get_real_milliseconds_3_p_0(&EndTimeMs_53);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 696, &ShowMakeTimes_54);
    switch (ShowMakeTimes_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float DiffSecs_55;
          MR_Float Var_82;
          MR_Integer Var_83 = (MR_Integer) ((MR_Unsigned) EndTimeMs_53 - (MR_Unsigned) StartTimeMs_37);

          Var_82 = mercury__float__float_1_f_0(Var_83);
          DiffSecs_55 = mercury__float__f_slash_2_f_0(Var_82, (MR_Float) 1000.0000000000000);
          succeeded = (DiffSecs_55 >= ((MR_Float) 0.50000000000000000));
          if (succeeded)
          {
            MR_String Var_111;

            mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "Making ");
            mercury__io__write_string_4_p_0(ProgressStream_14, TargetFileName_18);
            mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) " took ");
            mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&make__module_target_scalar_common_3[0]), (MR_Integer) 2, (MR_Integer) 2, DiffSecs_55, &Var_111);
            mercury__io__write_string_4_p_0(ProgressStream_14, Var_111);
            mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "s\n");
          }
        }
        break;
    }
  }
  else
  {
    MR_Word ArgFileError_56 = ((MR_Word) ((MR_hl_field(1, ArgFileNameRes_35, (MR_Integer) 0))));
    MR_String Var_97;

    Var_97 = mercury__io__error_message_1_f_0(ArgFileError_56);
    mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "Could not create temporary file: ");
    mercury__io__write_string_4_p_0(ProgressStream_14, Var_97);
    mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "\n");
    *Succeeded_22 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_58 = STATE_VARIABLE_Info_0_57;
  }
}

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_84;

  make__module_target__IntroducedFrom__pred__record_made_target_given_make_lhs_files__905__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__3_84);
  *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__3_84));
}

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Timestamps_13;

  make__module_target__delete_analysis_registry_timestamps_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_Timestamps_13);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_Timestamps_13));
}

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Timestamps_13;

  make__module_target__delete_timestamp_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Timestamps_13);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Timestamps_13));
}

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__6_6;
  MR_Word conv2_HeadVar__8_8;

  make__file_names__module_maybe_nested_target_file_to_file_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__6_6, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__6_6));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__8_8));
}

static void MR_CALL 
make__module_target__record_made_target_given_make_lhs_files_10_p_0_1(
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
make__module_target__record_made_target_given_make_lhs_files_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Succeeded_13,
  MR_Word TargetFile_14,
  MR_String TargetFileName_15,
  MR_Word MakeLhsFiles_16,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word TargetStatus_19;
  MR_Word LhsFiles_21;
  MR_Word LhsTimestampFiles_22;
  MR_Word LhsForeignCodeFiles_23;
  MR_Word TouchedTargetFileNames_24;
  MR_Word TargetFileTimestamps0_27;
  MR_Word TargetFileTimestamps_28;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_Info_37_37;
  MR_Word STATE_VARIABLE_FileTimestamps_41_41;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_FileTimestamps_43_43;
  MR_Word STATE_VARIABLE_FileTimestamps_45_45;
  MR_Word STATE_VARIABLE_FileTimestamps_47_47;
  MR_Word STATE_VARIABLE_FileTimestamps_51_51;
  MR_Word STATE_VARIABLE_Info_52_52;
  MR_Box conv1_STATE_VARIABLE_Info_35_35;
  MR_Box conv5_STATE_VARIABLE_Info_37_37;
  MR_Box conv4_STATE_VARIABLE_IO_32;
  MR_Box conv7_STATE_VARIABLE_FileTimestamps_43_43;
  MR_Box conv8_STATE_VARIABLE_FileTimestamps_45_45;
  MR_Box conv9_STATE_VARIABLE_FileTimestamps_47_47;
  MR_Word Var_48;
  MR_Box conv13_TargetFileTimestamps_28;

  switch (Succeeded_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ErrorMsg_20;

        TargetStatus_19 = (MR_Integer) 3;
        make__util__file_error_msg_2_p_0(TargetFileName_15, &ErrorMsg_20);
        make__util__maybe_write_msg_locked_5_p_0(ProgressStream_11, STATE_VARIABLE_Info_0_29, ErrorMsg_20);
      }
      break;
    case (MR_Integer) 1:
      TargetStatus_19 = (MR_Integer) 2;
      break;
  }
  LhsFiles_21 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_16, (MR_Integer) 0))));
  LhsTimestampFiles_22 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_16, (MR_Integer) 1))));
  LhsForeignCodeFiles_23 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_16, (MR_Integer) 2))));
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__module_target__record_made_target_given_make_lhs_files_10_p_0_1));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (TargetStatus_19));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_34, LhsFiles_21, ((MR_Box) (STATE_VARIABLE_Info_0_29)), &conv1_STATE_VARIABLE_Info_35_35);
  STATE_VARIABLE_Info_35_35 = ((MR_Word) (conv1_STATE_VARIABLE_Info_35_35));
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__module_target_scalar_common_10[0]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (make__module_target__record_made_target_given_make_lhs_files_10_p_0_2));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_36, 4) = ((MR_Box) (Globals_12));
    MR_hl_field(0, Var_36, 5) = ((MR_Box) ((MR_String) "predicate \140make.module_target.record_made_target_given_make_lhs_files\'/10"));
    MR_hl_field(0, Var_36, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, LhsFiles_21, &TouchedTargetFileNames_24, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv5_STATE_VARIABLE_Info_37_37, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_32);
  STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv5_STATE_VARIABLE_Info_37_37));
  STATE_VARIABLE_FileTimestamps_41_41 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_37_37);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&make__module_target_scalar_common_11[0]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (make__module_target__record_made_target_given_make_lhs_files_10_p_0_3));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) (Globals_12));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[1]), Var_42, TouchedTargetFileNames_24, ((MR_Box) (STATE_VARIABLE_FileTimestamps_41_41)), &conv7_STATE_VARIABLE_FileTimestamps_43_43);
  STATE_VARIABLE_FileTimestamps_43_43 = ((MR_Word) (conv7_STATE_VARIABLE_FileTimestamps_43_43));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[1]), Var_42, LhsTimestampFiles_22, ((MR_Box) (STATE_VARIABLE_FileTimestamps_43_43)), &conv8_STATE_VARIABLE_FileTimestamps_45_45);
  STATE_VARIABLE_FileTimestamps_45_45 = ((MR_Word) (conv8_STATE_VARIABLE_FileTimestamps_45_45));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[1]), Var_42, LhsForeignCodeFiles_23, ((MR_Box) (STATE_VARIABLE_FileTimestamps_45_45)), &conv9_STATE_VARIABLE_FileTimestamps_47_47);
  STATE_VARIABLE_FileTimestamps_47_47 = ((MR_Word) (conv9_STATE_VARIABLE_FileTimestamps_47_47));
  Var_48 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, (MR_Integer) 1))));
  succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word Var_49;
    MR_Box conv11_STATE_VARIABLE_FileTimestamps_51_51;

    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__module_target_scalar_common_12[0]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__module_target__record_made_target_given_make_lhs_files_10_p_0_4));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (ProgressStream_11));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (Globals_12));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[0]), (MR_Word) (&make__module_target_scalar_common_1[1]), Var_49, STATE_VARIABLE_FileTimestamps_47_47, ((MR_Box) (STATE_VARIABLE_FileTimestamps_47_47)), &conv11_STATE_VARIABLE_FileTimestamps_51_51);
    STATE_VARIABLE_FileTimestamps_51_51 = ((MR_Word) (conv11_STATE_VARIABLE_FileTimestamps_51_51));
  }
  else
    STATE_VARIABLE_FileTimestamps_51_51 = STATE_VARIABLE_FileTimestamps_47_47;
  make__make_info__make_info_set_file_timestamps_3_p_0(STATE_VARIABLE_FileTimestamps_51_51, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_52_52);
  TargetFileTimestamps0_27 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_52_52);
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_1[2]), (MR_Word) (&make__module_target_scalar_common_1[4]), LhsFiles_21, ((MR_Box) (TargetFileTimestamps0_27)), &conv13_TargetFileTimestamps_28);
  TargetFileTimestamps_28 = ((MR_Word) (conv13_TargetFileTimestamps_28));
  make__make_info__make_info_set_target_file_timestamps_3_p_0(TargetFileTimestamps_28, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_30);
}

static void MR_CALL 
make__module_target__build_target_2_13_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Succeeded_16;

  make__module_target__build_object_code_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &conv11_Succeeded_16);
  *wrapper_arg_1 = ((MR_Box) (conv11_Succeeded_16));
}

static void MR_CALL 
make__module_target__build_target_2_13_p_0_11(
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
make__module_target__build_target_2_13_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_Succeeded_12;

  make__module_target__call_mercury_compile_main_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &conv9_Succeeded_12);
  *wrapper_arg_1 = ((MR_Box) (conv9_Succeeded_12));
}

static void MR_CALL 
make__module_target__build_target_2_13_p_0_9(
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
make__module_target__build_target_2_13_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Succeeded_12;

  make__module_target__call_mercury_compile_main_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &conv7_Succeeded_12);
  *wrapper_arg_1 = ((MR_Box) (conv7_Succeeded_12));
}

static void MR_CALL 
make__module_target__build_target_2_13_p_0_7(
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
make__module_target__build_target_2_13_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_12;

  make__module_target__call_mercury_compile_main_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &conv5_Succeeded_12);
  *wrapper_arg_1 = ((MR_Box) (conv5_Succeeded_12));
}

static void MR_CALL 
make__module_target__build_target_2_13_p_0_5(
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
make__module_target__build_target_2_13_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Succeeded_12;

  make__module_target__call_mercury_compile_main_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &conv3_Succeeded_12);
  *wrapper_arg_1 = ((MR_Box) (conv3_Succeeded_12));
}

static MR_Box MR_CALL 
make__module_target__build_target_2_13_p_0_3(
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
make__module_target__build_target_2_13_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Succeeded_14;

  make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv1_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv1_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_13_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_14;

  make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv0_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals_16,
  MR_Word Task_17,
  MR_Word ModuleName_18,
  MR_Word ModuleDepInfo_19,
  MR_Word ArgFileName_20,
  MR_Word AllOptionArgs_21,
  MR_Word * Succeeded_22,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Task_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModuleTask_25 = ((MR_Unsigned) ((MR_hl_field(0, Task_17, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_String ModuleArg_26;
        MR_Word Verbose_27;
        MR_Word CompileSucceeded_32;

        ModuleArg_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_18);
        libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 78, &Verbose_27);
        switch (Verbose_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AllArgs_28;
              MR_Word AllArgStrs_29;
              MR_String AllArgsStr_30;
              MR_Word Var_46;

              {
                Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_46, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              AllArgs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_21, Var_46);
              AllArgStrs_29 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[3]), AllArgs_28);
              AllArgsStr_30 = mercury__string__join_list_2_f_0((MR_String) " ", AllArgStrs_29);
              mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "Invoking self \140mmc ");
              mercury__io__write_string_4_p_0(ProgressStream_14, AllArgsStr_30);
              mercury__io__write_string_4_p_0(ProgressStream_14, (MR_String) "\'\n");
            }
            break;
        }
        switch (ModuleTask_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 6:
            {
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_58;
              MR_Word Var_60;

              {
                Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_58, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__module_target_scalar_common_6[2]));
                MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_4));
                MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_55, 3) = ((MR_Box) (ProgressStream_14));
                MR_hl_field(0, Var_55, 4) = ((MR_Box) (ErrorStream_15));
                MR_hl_field(0, Var_55, 5) = ((MR_Box) (Globals_16));
                MR_hl_field(0, Var_55, 6) = ((MR_Box) (Var_58));
              }
              Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_21, Var_58);
              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__module_target_scalar_common_7[1]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_5));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (Globals_16));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) (ProgressStream_14));
                MR_hl_field(0, Var_56, 5) = ((MR_Box) (ErrorStream_15));
                MR_hl_field(0, Var_56, 6) = ((MR_Box) (ArgFileName_20));
                MR_hl_field(0, Var_56, 7) = ((MR_Box) (Var_60));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_55, Var_56, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_63;

              {
                Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_63, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_7_p_0(ProgressStream_14, ErrorStream_15, Globals_16, Var_63, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Var_131;
              MR_Word Var_133;

              {
                Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_131, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_129 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_129, 0) = ((MR_Box) (&make__module_target_scalar_common_6[2]));
                MR_hl_field(0, Var_129, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_6));
                MR_hl_field(0, Var_129, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_129, 3) = ((MR_Box) (ProgressStream_14));
                MR_hl_field(0, Var_129, 4) = ((MR_Box) (ErrorStream_15));
                MR_hl_field(0, Var_129, 5) = ((MR_Box) (Globals_16));
                MR_hl_field(0, Var_129, 6) = ((MR_Box) (Var_131));
              }
              Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_21, Var_131);
              {
                Var_130 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_130, 0) = ((MR_Box) (&make__module_target_scalar_common_7[1]));
                MR_hl_field(0, Var_130, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_7));
                MR_hl_field(0, Var_130, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_130, 3) = ((MR_Box) (Globals_16));
                MR_hl_field(0, Var_130, 4) = ((MR_Box) (ProgressStream_14));
                MR_hl_field(0, Var_130, 5) = ((MR_Box) (ErrorStream_15));
                MR_hl_field(0, Var_130, 6) = ((MR_Box) (ArgFileName_20));
                MR_hl_field(0, Var_130, 7) = ((MR_Box) (Var_133));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_129, Var_130, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_137;

              {
                Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_137, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_7_p_0(ProgressStream_14, ErrorStream_15, Globals_16, Var_137, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_141;

              {
                Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_141, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_7_p_0(ProgressStream_14, ErrorStream_15, Globals_16, Var_141, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_145;

              {
                Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_145, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_7_p_0(ProgressStream_14, ErrorStream_15, Globals_16, Var_145, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_149;
              MR_Word Var_150;
              MR_Word Var_151;
              MR_Word Var_153;

              {
                Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_151, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_149 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_149, 0) = ((MR_Box) (&make__module_target_scalar_common_6[2]));
                MR_hl_field(0, Var_149, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_8));
                MR_hl_field(0, Var_149, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_149, 3) = ((MR_Box) (ProgressStream_14));
                MR_hl_field(0, Var_149, 4) = ((MR_Box) (ErrorStream_15));
                MR_hl_field(0, Var_149, 5) = ((MR_Box) (Globals_16));
                MR_hl_field(0, Var_149, 6) = ((MR_Box) (Var_151));
              }
              Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_21, Var_151);
              {
                Var_150 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_150, 0) = ((MR_Box) (&make__module_target_scalar_common_7[1]));
                MR_hl_field(0, Var_150, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_9));
                MR_hl_field(0, Var_150, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_150, 3) = ((MR_Box) (Globals_16));
                MR_hl_field(0, Var_150, 4) = ((MR_Box) (ProgressStream_14));
                MR_hl_field(0, Var_150, 5) = ((MR_Box) (ErrorStream_15));
                MR_hl_field(0, Var_150, 6) = ((MR_Box) (ArgFileName_20));
                MR_hl_field(0, Var_150, 7) = ((MR_Box) (Var_153));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_149, Var_150, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word Var_159;
              MR_Word Var_161;

              {
                Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_159, 0) = ((MR_Box) (ModuleArg_26));
                MR_hl_field(1, Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_157 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_157, 0) = ((MR_Box) (&make__module_target_scalar_common_6[2]));
                MR_hl_field(0, Var_157, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_10));
                MR_hl_field(0, Var_157, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_157, 3) = ((MR_Box) (ProgressStream_14));
                MR_hl_field(0, Var_157, 4) = ((MR_Box) (ErrorStream_15));
                MR_hl_field(0, Var_157, 5) = ((MR_Box) (Globals_16));
                MR_hl_field(0, Var_157, 6) = ((MR_Box) (Var_159));
              }
              Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_21, Var_159);
              {
                Var_158 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_158, 0) = ((MR_Box) (&make__module_target_scalar_common_7[1]));
                MR_hl_field(0, Var_158, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_11));
                MR_hl_field(0, Var_158, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_158, 3) = ((MR_Box) (Globals_16));
                MR_hl_field(0, Var_158, 4) = ((MR_Box) (ProgressStream_14));
                MR_hl_field(0, Var_158, 5) = ((MR_Box) (ErrorStream_15));
                MR_hl_field(0, Var_158, 6) = ((MR_Box) (ArgFileName_20));
                MR_hl_field(0, Var_158, 7) = ((MR_Box) (Var_161));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_157, Var_158, &CompileSucceeded_32);
            }
            break;
        }
        switch (ModuleTask_25) {
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
          MR_Word TouchSucceeded_33;

          parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_16, ProgressStream_14, ModuleName_18, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[1])), &TouchSucceeded_33);
          *Succeeded_22 = libs__maybe_util__and_2_f_0(CompileSucceeded_32, TouchSucceeded_33);
        }
        else
          *Succeeded_22 = CompileSucceeded_32;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PIC_34 = ((MR_Unsigned) ((MR_hl_field(1, Task_17, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_35;
        MR_Word Var_69;

        libs__globals__get_target_2_p_0(Globals_16, &CompilationTarget_35);
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_69, 0) = ((MR_Box) (&make__module_target_scalar_common_5[1]));
          MR_hl_field(0, Var_69, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_12));
          MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_69, 3) = ((MR_Box) (ProgressStream_14));
          MR_hl_field(0, Var_69, 4) = ((MR_Box) (Globals_16));
          MR_hl_field(0, Var_69, 5) = ((MR_Box) (CompilationTarget_35));
          MR_hl_field(0, Var_69, 6) = ((MR_Box) (PIC_34));
          MR_hl_field(0, Var_69, 7) = ((MR_Box) (ModuleName_18));
          MR_hl_field(0, Var_69, 8) = ((MR_Box) (ModuleDepInfo_19));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_69, Succeeded_22);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lang_36 = ((MR_Unsigned) ((MR_hl_field(2, Task_17, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ForeignCodeFile_37;
        MR_Word Var_72;
        MR_Word PIC_79 = ((((MR_Unsigned) ((MR_hl_field(2, Task_17, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        MR_Word ForeignModName_110;
        MR_Word SrcExt_111;
        MR_Word ObjExt_112;
        MR_String SrcFileName_113;
        MR_String ObjFileName_114;
        MR_Word Var_118;
        MR_Word CompilationTarget_119;

        parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_18, Lang_36, &ForeignModName_110);
        parse_tree__prog_foreign__foreign_language_file_extension_2_p_0(Lang_36, &SrcExt_111);
        libs__globals__get_target_2_p_0(Globals_16, &CompilationTarget_119);
        switch (CompilationTarget_119) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_120;

              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_79, &ObjExt_112, &Var_120);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_16, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", SrcExt_111, ForeignModName_110, &SrcFileName_113);
        {
          Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_118, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_112));
        }
        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_16, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", Var_118, ForeignModName_110, &ObjFileName_114);
        {
          ForeignCodeFile_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ForeignCodeFile_37, 0) = (MR_Box) ((MR_Unsigned) (Lang_36));
          MR_hl_field(0, ForeignCodeFile_37, 1) = ((MR_Box) (SrcFileName_113));
          MR_hl_field(0, ForeignCodeFile_37, 2) = ((MR_Box) (ObjFileName_114));
        }
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_72, 0) = ((MR_Box) (&make__module_target_scalar_common_7[0]));
          MR_hl_field(0, Var_72, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_2));
          MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_72, 3) = ((MR_Box) (Globals_16));
          MR_hl_field(0, Var_72, 4) = ((MR_Box) (ProgressStream_14));
          MR_hl_field(0, Var_72, 5) = ((MR_Box) (PIC_79));
          MR_hl_field(0, Var_72, 6) = ((MR_Box) (ModuleDepInfo_19));
          MR_hl_field(0, Var_72, 7) = ((MR_Box) (ForeignCodeFile_37));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_72, Succeeded_22);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String FactTableFileName_38 = ((MR_String) ((MR_hl_field(3, Task_17, (MR_Integer) 1))));
        MR_Word ObjExt_39;
        MR_Word FactTableForeignCode_40;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word PIC_80 = ((MR_Unsigned) ((MR_hl_field(3, Task_17, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_104;

        libs__globals__get_target_2_p_0(Globals_16, &CompilationTarget_104);
        switch (CompilationTarget_104) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_105;

              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_80, &ObjExt_39, &Var_105);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_75, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_39));
        }
        make__module_target__get_fact_table_foreign_code_file_7_p_0(Globals_16, (MR_Integer) 0, Var_75, FactTableFileName_38, &FactTableForeignCode_40);
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_77, 0) = ((MR_Box) (&make__module_target_scalar_common_7[0]));
          MR_hl_field(0, Var_77, 1) = ((MR_Box) (make__module_target__build_target_2_13_p_0_1));
          MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_77, 3) = ((MR_Box) (Globals_16));
          MR_hl_field(0, Var_77, 4) = ((MR_Box) (ProgressStream_14));
          MR_hl_field(0, Var_77, 5) = ((MR_Box) (PIC_80));
          MR_hl_field(0, Var_77, 6) = ((MR_Box) (ModuleDepInfo_19));
          MR_hl_field(0, Var_77, 7) = ((MR_Box) (FactTableForeignCode_40));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_77, Succeeded_22);
      }
      break;
  }
  *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
}

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word Mkdir_9,
  MR_Word ObjExt_10,
  MR_String FactTableFileName_11,
  MR_Word * ForeignCodeFile_12)
{
  MR_Word FactTableDirsC_14;
  MR_String FactTableCFileName_15;
  MR_Word FactTableDirsO_16;
  MR_String FactTableObjFileName_17;

  parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/7", (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_2[27])), FactTableFileName_11, &FactTableDirsC_14, &FactTableCFileName_15);
  parse_tree__file_names__maybe_create_any_dirs_on_path_4_p_0(Mkdir_9, FactTableDirsC_14);
  parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/7", ObjExt_10, FactTableFileName_11, &FactTableDirsO_16, &FactTableObjFileName_17);
  parse_tree__file_names__maybe_create_any_dirs_on_path_4_p_0(Mkdir_9, FactTableDirsO_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ForeignCodeFile_12 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 1) = ((MR_Box) (FactTableCFileName_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (FactTableObjFileName_17));
  }
}

static void MR_CALL 
make__module_target__call_mercury_compile_main_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Globals_10,
  MR_Word Args_11,
  MR_Word * Succeeded_12)
{
  MR_bool succeeded;
  MR_Integer Status0_14;
  MR_Integer Status_15;

  mercury__io__get_exit_status_3_p_0(&Status0_14);
  mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
  top_level__mercury_compile_main__main_for_make_6_p_0(ProgressStream_8, ErrorStream_9, Globals_10, Args_11);
  mercury__io__get_exit_status_3_p_0(&Status_15);
  succeeded = (Status_15 == (MR_Integer) 0);
  if (succeeded)
    *Succeeded_12 = (MR_Integer) 1;
  else
    *Succeeded_12 = (MR_Integer) 0;
  mercury__io__set_exit_status_3_p_0(Status0_14);
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_HeadVar__3_3;
  MR_Word conv15_HeadVar__5_5;

  make__timestamp__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv16_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv15_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv16_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv15_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_3;
  MR_Word conv11_HeadVar__5_5;

  make__timestamp__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv12_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv11_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv11_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_3;
  MR_Word conv7_HeadVar__5_5;

  make__timestamp__get_timestamp_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv7_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv6_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv6_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__7_7;

  make__timestamp__get_target_timestamp_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__7_7));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_3(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_5(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__Var_112 = ((MR_Word) ((env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__conv5_Var_112));
  make__module_target__make_dependency_files_11_p_0_4(env_ptr);
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_4(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_11_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String ArgX1_119;

    (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__Var_112)) == (MR_Integer) 1);
    if ((env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__succeeded)
    {
      ArgX1_119 = ((MR_String) ((MR_hl_field(1, (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__Var_112, (MR_Integer) 0))));
      make__module_target__make_dependency_files_11_p_0_3(env_ptr);
    }
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_6(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__module_target_scalar_common_1[0]), &(env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__conv5_Var_112, (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__LhsFileTimestamps_27, make__module_target__make_dependency_files_11_p_0_5, env_ptr);
      (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetFile_14,
  MR_String TargetFileName_15,
  MR_Word DepFilesToMake_16,
  MR_Word MakeLhsFiles_17,
  MR_Word * DepsResult_18,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s env;

  {
    MR_Word KeepGoing_21;
    MR_Word MakeDepsSucceeded_22;
    MR_Word STATE_VARIABLE_Info_42_42;

    KeepGoing_21 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_37);
    make__build__foldl2_make_module_targets_10_p_0(KeepGoing_21, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_12, Globals_13, DepFilesToMake_16, &MakeDepsSucceeded_22, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_42_42);
    switch (MakeDepsSucceeded_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String DebugMsg_23;
          MR_Word Var_44;
          MR_Word Var_46;
          MR_Word Var_47;

          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_47, 1) = ((MR_Box) (TargetFileName_15));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_44, 0) = ((MR_Box) (&make__module_target_scalar_common_4[0]));
            MR_hl_field(0, Var_44, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_1));
            MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_44, 3) = ((MR_Box) ((MR_String) "%s: error making dependencies\n"));
            MR_hl_field(0, Var_44, 4) = ((MR_Box) (Var_46));
          }
          make__util__debug_make_msg_3_p_0(Globals_13, Var_44, &DebugMsg_23);
          make__util__maybe_write_msg_4_p_0(ProgressStream_12, DebugMsg_23);
          *DepsResult_18 = (MR_Integer) 2;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_42_42;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LhsFiles_24 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_17, (MR_Integer) 0))));
          MR_Word LhsTimestampFiles_25 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_17, (MR_Integer) 1))));
          MR_Word LhsForeignCodeFiles_26 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_17, (MR_Integer) 2))));
          MR_Word Var_50;
          MR_Word STATE_VARIABLE_Info_51_51;
          MR_Box conv4_STATE_VARIABLE_Info_51_51;
          MR_Box conv3_STATE_VARIABLE_IO_52_52;

          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
            MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_2));
            MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_50, 3) = ((MR_Box) (ProgressStream_12));
            MR_hl_field(0, Var_50, 4) = ((MR_Box) (Globals_13));
            MR_hl_field(0, Var_50, 5) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, LhsFiles_24, &(env).make__module_target__make_dependency_files_11_p_0_env_0__LhsFileTimestamps_27, ((MR_Box) (STATE_VARIABLE_Info_42_42)), &conv4_STATE_VARIABLE_Info_51_51, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_52_52);
          STATE_VARIABLE_Info_51_51 = ((MR_Word) (conv4_STATE_VARIABLE_Info_51_51));
          make__module_target__make_dependency_files_11_p_0_6(&env);
          if ((env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded)
          {
            MR_Word Var_55;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_String DebugMsg_80;

            {
              Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_58, 1) = ((MR_Box) (TargetFileName_15));
            }
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
              MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__module_target_scalar_common_4[0]));
              MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_7));
              MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_55, 3) = ((MR_Box) ((MR_String) "%s: target file does not exist\n"));
              MR_hl_field(0, Var_55, 4) = ((MR_Box) (Var_57));
            }
            make__util__debug_make_msg_3_p_0(Globals_13, Var_55, &DebugMsg_80);
            make__util__maybe_write_msg_4_p_0(ProgressStream_12, DebugMsg_80);
            *DepsResult_18 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_51_51;
          }
          else
          {
            MR_Word ForceReanalysis_31;
            MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, (MR_Integer) 0))));
            MR_Word TargetType_30 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, (MR_Integer) 1))));

            (env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded = (TargetType_30 == (MR_Word) ((MR_Unsigned) 28U));
            if ((env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded)
            {
              MR_Integer Var_124;

              Var_124 = make__make_info__make_info_get_reanalysis_passes_1_f_0(STATE_VARIABLE_Info_51_51);
              (env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded = (Var_124 > (MR_Integer) 0);
              if ((env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded)
              {
                MR_Word AnalysisStatus_123;

                analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__module_target_scalar_common_2[0]), ((MR_Box) ((MR_Integer) 0)), Globals_13, ModuleName_29, &AnalysisStatus_123);
                switch (AnalysisStatus_123) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    ForceReanalysis_31 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    ForceReanalysis_31 = (MR_Integer) 0;
                    break;
                }
              }
              else
                ForceReanalysis_31 = (MR_Integer) 0;
            }
            else
              ForceReanalysis_31 = (MR_Integer) 0;
            switch (ForceReanalysis_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LhsMaybeTimestampFileTimestamps_32;
                  MR_Word LhsTimestampFileTimestamps_33;
                  MR_Word LhsForeignCodeFileTimestamps_34;
                  MR_Word AllLhsTimestamps_35;
                  MR_Word MaybeOldestLhsTimestamp_36;
                  MR_Word Var_62;
                  MR_Word STATE_VARIABLE_Info_63_63;
                  MR_Word Var_65;
                  MR_Word STATE_VARIABLE_Info_66_66;
                  MR_Word Var_68;
                  MR_String Var_69;
                  MR_Word Var_71;
                  MR_Word STATE_VARIABLE_Info_72_72;
                  MR_Word Var_74;
                  MR_String Var_75;
                  MR_Word Var_77;
                  MR_Box conv10_STATE_VARIABLE_Info_63_63;
                  MR_Box conv9_STATE_VARIABLE_IO_64_64;
                  MR_Box conv14_STATE_VARIABLE_Info_66_66;
                  MR_Box conv13_STATE_VARIABLE_IO_67_67;
                  MR_Box conv18_STATE_VARIABLE_Info_72_72;
                  MR_Box conv17_STATE_VARIABLE_IO_73_73;

                  {
                    Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&make__module_target_scalar_common_6[0]));
                    MR_hl_field(0, Var_62, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_8));
                    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_62, 3) = ((MR_Box) (Globals_13));
                  }
                  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, LhsFiles_24, &LhsMaybeTimestampFileTimestamps_32, ((MR_Box) (STATE_VARIABLE_Info_51_51)), &conv10_STATE_VARIABLE_Info_63_63, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_64_64);
                  STATE_VARIABLE_Info_63_63 = ((MR_Word) (conv10_STATE_VARIABLE_Info_63_63));
                  Var_69 = mercury__dir__this_directory_0_f_0();
                  {
                    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__module_target_scalar_common_6[1]));
                    MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_9));
                    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_65, 3) = ((MR_Box) (Var_68));
                  }
                  mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, LhsTimestampFiles_25, &LhsTimestampFileTimestamps_33, ((MR_Box) (STATE_VARIABLE_Info_63_63)), &conv14_STATE_VARIABLE_Info_66_66, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_67_67);
                  STATE_VARIABLE_Info_66_66 = ((MR_Word) (conv14_STATE_VARIABLE_Info_66_66));
                  Var_75 = mercury__dir__this_directory_0_f_0();
                  {
                    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
                    MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_71, 0) = ((MR_Box) (&make__module_target_scalar_common_6[1]));
                    MR_hl_field(0, Var_71, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_10));
                    MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_71, 3) = ((MR_Box) (Var_74));
                  }
                  mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, LhsForeignCodeFiles_26, &LhsForeignCodeFileTimestamps_34, ((MR_Box) (STATE_VARIABLE_Info_66_66)), &conv18_STATE_VARIABLE_Info_72_72, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_73_73);
                  STATE_VARIABLE_Info_72_72 = ((MR_Word) (conv18_STATE_VARIABLE_Info_72_72));
                  Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__module_target_scalar_common_1[0]), LhsTimestampFileTimestamps_33, LhsForeignCodeFileTimestamps_34);
                  AllLhsTimestamps_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__module_target_scalar_common_1[0]), LhsMaybeTimestampFileTimestamps_32, Var_77);
                  if ((AllLhsTimestamps_35 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.find_oldest_lhs_file\'/2", (MR_String) "LhsMaybeTimestamps = []");
                      return;
                    }
                  else
                  {
                    MR_Word HeadLhsMaybeTimestamp_128 = ((MR_Word) ((MR_hl_field(1, AllLhsTimestamps_35, (MR_Integer) 0))));
                    MR_Word TailLhsMaybeTimestamps_129 = ((MR_Word) ((MR_hl_field(1, AllLhsTimestamps_35, (MR_Integer) 1))));

                    if (((MR_tag((MR_Word) HeadLhsMaybeTimestamp_128)) == (MR_Integer) 1))
                      MaybeOldestLhsTimestamp_36 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_Word HeadLhsTimestamp_131 = ((MR_Word) ((MR_hl_field(0, HeadLhsMaybeTimestamp_128, (MR_Integer) 0))));

                      make__module_target__find_oldest_lhs_file_loop_3_p_0(TailLhsMaybeTimestamps_129, HeadLhsTimestamp_131, &MaybeOldestLhsTimestamp_36);
                    }
                  }
                  make__check_up_to_date__check_dependencies_11_p_0(ProgressStream_12, Globals_13, TargetFileName_15, MaybeOldestLhsTimestamp_36, MakeDepsSucceeded_22, DepFilesToMake_16, DepsResult_18, STATE_VARIABLE_Info_72_72, STATE_VARIABLE_Info_38);
                }
                break;
              case (MR_Integer) 1:
                {
                  *DepsResult_18 = (MR_Integer) 1;
                  *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_51_51;
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
make__module_target__find_oldest_lhs_file_loop_3_p_0(
  MR_Word LhsMaybeTimestamps_4,
  MR_Word STATE_VARIABLE_OldestLhsTimestamp_0_11,
  MR_Word * MaybeOldestLhsTimestamp_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((LhsMaybeTimestamps_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeOldestLhsTimestamp_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_OldestLhsTimestamp_0_11));
      }
    else
    {
      MR_Word HeadLhsMaybeTimestamp_7 = ((MR_Word) ((MR_hl_field(1, LhsMaybeTimestamps_4, (MR_Integer) 0))));
      MR_Word TailLhsMaybeTimestamps_8 = ((MR_Word) ((MR_hl_field(1, LhsMaybeTimestamps_4, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) HeadLhsMaybeTimestamp_7)) == (MR_Integer) 1))
        *MaybeOldestLhsTimestamp_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word HeadLhsTimestamp_10 = ((MR_Word) ((MR_hl_field(0, HeadLhsMaybeTimestamp_7, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_OldestLhsTimestamp_13_13;
        MR_Word Var_15;
        MR_Word next_value_of_LhsMaybeTimestamps_4;
        MR_Word next_value_of_STATE_VARIABLE_OldestLhsTimestamp_0_11;

        libs__timestamp____Compare____timestamp_0_0(&Var_15, HeadLhsTimestamp_10, STATE_VARIABLE_OldestLhsTimestamp_0_11);
        succeeded = ((MR_Integer) 1 == Var_15);
        if (succeeded)
          STATE_VARIABLE_OldestLhsTimestamp_13_13 = HeadLhsTimestamp_10;
        else
          STATE_VARIABLE_OldestLhsTimestamp_13_13 = STATE_VARIABLE_OldestLhsTimestamp_0_11;
        // direct tailcall eliminated
        ;
        next_value_of_LhsMaybeTimestamps_4 = TailLhsMaybeTimestamps_8;
        next_value_of_STATE_VARIABLE_OldestLhsTimestamp_0_11 = STATE_VARIABLE_OldestLhsTimestamp_13_13;
        LhsMaybeTimestamps_4 = next_value_of_LhsMaybeTimestamps_4;
        STATE_VARIABLE_OldestLhsTimestamp_0_11 = next_value_of_STATE_VARIABLE_OldestLhsTimestamp_0_11;
        continue;
      }
    }
    break;
  }
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

static MR_bool MR_CALL 
make__module_target____Unify____make_lhs_files_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__module_target____Unify____make_lhs_files_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__module_target____Compare____make_lhs_files_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__module_target____Compare____make_lhs_files_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&make__module_target__make__module_target__type_ctor_info_make_lhs_files_0);
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
