/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2024-07-15
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


// :- module make.program_target.
// :- implementation.

/*
INIT mercury__make__program_target__init
ENDINIT
*/

#include "make.program_target.mih"


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
#include "digraph.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.compile_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.file.mih"
#include "libs.check_libgrades.mih"
#include "libs.compute_grade.mih"
#include "libs.copy_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.shell_util.mih"
#include "libs.system_cmds.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.check_up_to_date.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.find_local_modules.mih"
#include "make.get_module_dep_info.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.timestamp.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"



struct make__program_target__build_linked_target_17_p_0_env_0_s {
  MR_bool make__program_target__build_linked_target_17_p_0_env_0__succeeded;
  MR_Word make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatuses_55;
  jmp_buf make__program_target__build_linked_target_17_p_0_env_0__commit_0;
  MR_Word make__program_target__build_linked_target_17_p_0_env_0__Var_73;
  MR_Word make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_81;
  MR_Box make__program_target__build_linked_target_17_p_0_env_0__conv5_ExtraObjDepStatus_81;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct6 make__program_target____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__program_target____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_0;

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_1;

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_2;

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_3;

static const MR_EnumFunctorDescPtr make__program_target__make__program_target__enum_ordinal_ordered_build_what_0[4];

static const MR_EnumFunctorDescPtr make__program_target__make__program_target__enum_name_ordered_build_what_0[4];

static const MR_Integer make__program_target__make__program_target__functor_number_map_build_what_0[4];

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_0;

static const MR_PseudoTypeInfo make__program_target__make__program_target__field_types_maybe_use_analysis_cache_dir_0_1[2];

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_1;

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_2;

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_0[2];

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_1[1];

static const MR_DuPtagLayout make__program_target__make__program_target__du_ptag_ordered_maybe_use_analysis_cache_dir_0[2];

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_name_ordered_maybe_use_analysis_cache_dir_0[3];

static const MR_Integer make__program_target__make__program_target__functor_number_map_maybe_use_analysis_cache_dir_0[3];

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__2155__1_5_p_0(
  MR_String IntsSubdir_16,
  MR_String LambdaHeadVar__1_66,
  MR_Word * LambdaHeadVar__2_67);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__get_reverse_ordered_modules__1499__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1391__1_2_p_0(
  MR_Word AllModules_13,
  MR_Word HeadVar__2_33);

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__788__1_1_f_0(
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__582__1_1_f_0(
  MR_String LambdaHeadVar__1_62);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__489__1_3_f_0(
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_String LambdaHeadVar__1_32);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__filter_out_nested_modules__459__1_2_p_0(
  MR_Word NestedModules_15,
  MR_Word HeadVar__2_36);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__398__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__394__1_3_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_45,
  MR_Word * HeadVar__3_46);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__403__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__402__1_3_p_0(
  MR_Word HeadVar__1_56,
  MR_Word HeadVar__2_57,
  MR_Word * HeadVar__3_58);

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target____Compare____build_what_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____build_what_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target____Compare____build3_1_0(
  MR_Word TypeInfo_for_Info_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____build3_1_0(
  MR_Word TypeInfo_for_Info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target____Compare____build2_1_0(
  MR_Word TypeInfo_for_Info_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____build2_1_0(
  MR_Word TypeInfo_for_Info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6);

static void MR_CALL 
make__program_target__acc_nonnested_and_parent_modules_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_NonnestedModules_0_24,
  MR_Word * STATE_VARIABLE_NonnestedModules_25,
  MR_Word STATE_VARIABLE_ParentModules_0_26,
  MR_Word * STATE_VARIABLE_ParentModules_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__program_target__collect_nested_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_NestedModules_0_20,
  MR_Word * STATE_VARIABLE_NestedModules_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__make_module_realclean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_realclean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__remove_fact_table_object_and_assembler_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word PIC_13,
  MR_String FactTableFile_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__program_target__remove_fact_table_c_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FactTableFile_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__make_module_clean_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__program_target__remove_target_file_if_grade_dependent_4_p_0(
  MR_Word File_5,
  MR_Word _Status_6,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word File_5,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11);

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__install_grade_ints_and_headers_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkSucceeded_13,
  MR_String GradeDir_14,
  MR_Word ModuleName_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
make__program_target__install_library_grade_2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkSucceeded0_13,
  MR_Word ModuleName_14,
  MR_Word AllModules_15,
  MR_Word Info0_16,
  MR_Word CleanAfter_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Clean_12,
  MR_Word ModuleName_13,
  MR_Word AllModules_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__program_target__install_extra_header_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String IncDir_11,
  MR_String FileName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_16,
  MR_Word * STATE_VARIABLE_Succeeded_17);

static void MR_CALL 
make__program_target__install_ints_and_headers_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_ints_and_headers_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word SubdirLinkSucceeded_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
make__program_target__install_subdir_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word SubdirLinkSucceeded_12,
  MR_String InstallDir_13,
  MR_Word ModuleName_14,
  MR_Tuple HeadVar__6_6,
  MR_Word * Succeeded_17);

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_Word MR_CALL 
make__program_target__lookup_module_dep_info_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5);

static void MR_CALL 
make__program_target__add_module_relations_6_p_0(
  MR_Word LookupModuleImports_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * STATE_VARIABLE_IntDepsGraph_13,
  MR_Word STATE_VARIABLE_ImplDepsGraph_0_14,
  MR_Word * STATE_VARIABLE_ImplDepsGraph_15);

static void MR_CALL 
make__program_target__get_non_nested_target_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_TargetModulesCord_0_19,
  MR_Word * STATE_VARIABLE_TargetModulesCord_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__do_not_reinsert_java_class_timestamps_4_p_0(
  MR_String FileName_5,
  MR_Word MaybeTimestamp_6,
  MR_Word STATE_VARIABLE_Timestamps_0_8,
  MR_Word * STATE_VARIABLE_Timestamps_9);

static void MR_CALL 
make__program_target__linked_target_cleanup_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word MainModuleName_13,
  MR_Word FileType_14,
  MR_String FullMainModuleLinkedFileName_15,
  MR_String CurDirMainModuleLinkedFileName_16,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__link_and_write_error_specs_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word LinkTargetType_11,
  MR_Word ModuleName_12,
  MR_Word ObjectsList_13,
  MR_Word * Succeeded_14);

static MR_Box MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ForeignObjectFiles_14,
  MR_Word STATE_VARIABLE_MakeInfo_0_23,
  MR_Word * STATE_VARIABLE_MakeInfo_24);

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ObjectTargets_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__pair_module_with_name_2_p_0(
  MR_Word Module_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
make__program_target__pair_module_with_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Module_11,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__install_library_grade_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_grade_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__install_library_grade_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word MainModuleName_14,
  MR_Word TargetType_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
make__program_target__make_linked_target_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_linked_target_1_11_p_0(
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word ExtraOptions_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
make__program_target__remove_cache_dir_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String CacheDir_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Var_50,
  MR_Word Var_51,
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Var_50,
  MR_Word Var_51,
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
make__program_target__build_analysis_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__program_target__build_analysis_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0(
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_Word Succeeded0_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetModules_15,
  MR_Word LocalModulesOpts_16,
  MR_Word Succeeded0_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
make__program_target__should_we_use_analysis_cache_dir_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word Info_9,
  MR_Word * UseAnalysisCacheDir_10);

static void MR_CALL 
make__program_target__remove_init_files_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Verbose_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__make_main_module_realclean_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_main_module_realclean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_main_module_realclean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__install_library_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__install_library_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__program_target__install_library_grade_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_grade_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word LinkSucceeded0_14,
  MR_String GradeDir_15,
  MR_Word ModuleName_16,
  MR_Word AllModules_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
make__program_target__make_grade_install_dirs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_grade_install_dirs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String Grade_10,
  MR_Word * Result_11,
  MR_Word * LinkResult_12);

static void MR_CALL 
make__program_target__print_mkdir_errors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
make__program_target__maybe_install_library_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String Linkage_11,
  MR_String FileName_12,
  MR_String InstallDir_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
make__program_target__install_grade_init_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String GradeDir_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word LinkedTargetFile_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
make__program_target__build_int_opt_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__program_target__build_int_opt_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word BuildWhat_12,
  MR_Word AllModules0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__program_target__make_java_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_java_files_9_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__make_java_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_java_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word ObjModules_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__out_of_date_java_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word ObjModules_11,
  MR_Word * OutOfDateModules_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
make__program_target__build_linked_target_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word Globals_19,
  MR_Word MainModuleName_20,
  MR_Word FileType_21,
  MR_String FullMainModuleLinkedFileName_22,
  MR_String CurDirMainModuleLinkedFileName_23,
  MR_Word MaybeOldestLhsTimestamp_24,
  MR_Word AllModules_25,
  MR_Word ObjModules_26,
  MR_Word CompilationTarget_27,
  MR_Word PIC_28,
  MR_Word ShouldRebuildLhs_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word NoLinkObjsGlobals_18,
  MR_Word MainModuleName_19,
  MR_Word FileType_20,
  MR_String FullMainModuleLinkedFileName_21,
  MR_Word AllModulesList_22,
  MR_Word ObjModules_23,
  MR_Word InitObjects_24,
  MR_Word LinkObjects_25,
  MR_Word CompilationTarget_26,
  MR_Word PIC_27,
  MR_Word * Succeeded_28,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static MR_bool MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules0_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules_11,
  MR_Word * OrderedModules_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static MR_bool MR_CALL 
make__program_target____Unify____build2_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__program_target____Compare____build2_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__program_target____Unify____build3_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__program_target____Compare____build3_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__program_target____Unify____build_what_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__program_target____Compare____build_what_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__program_target_scalar_common_1[18][3];

static /* final */ const MR_Box make__program_target_scalar_common_2[66][2];

static /* final */ const MR_Box make__program_target_scalar_common_3[1][4];

static /* final */ const MR_Box make__program_target_scalar_common_4[7][1];

static /* final */ const MR_Box make__program_target_scalar_common_5[8][5];

static /* final */ const MR_Box make__program_target_scalar_common_6[5][6];

static /* final */ const MR_Box make__program_target_scalar_common_7[5][11];

static /* final */ const MR_Box make__program_target_scalar_common_8[8][12];

static /* final */ const MR_Box make__program_target_scalar_common_9[2][8];

static /* final */ const MR_Box make__program_target_scalar_common_10[6][10];

static /* final */ const MR_Box make__program_target_scalar_common_11[3][7];

static /* final */ const MR_Box make__program_target_scalar_common_12[1][14];

static /* final */ const MR_Box make__program_target_scalar_common_13[4][13];

static /* final */ const MR_Box make__program_target_scalar_common_14[2][9];


struct make__program_target__vector_common_type_15_0_s {
  const MR_Word make__program_target__vector_common_type_15_0__vct_15_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_15_0_s make__program_target_vector_common_15[7];



static /* final */ const MR_Box make__program_target_scalar_common_1[18][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[0])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[1])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[1])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[2])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[4])),
    ((MR_Box) (make__program_target__build_linked_target_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__program_target_scalar_common_11[0])),
    ((MR_Box) (make__program_target__make_java_files_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[2])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[2])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[5])),
    ((MR_Box) (make__program_target__build_analysis_files_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__build_analysis_files_10_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__program_target_scalar_common_11[1])),
    ((MR_Box) (make__program_target__install_library_grade_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[7])),
    ((MR_Box) (make__program_target__get_module_foreign_object_files_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_2[66][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "--compile-to-shared-lib")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "--use-grade-subdirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[0]))),
    ((MR_Box) ((MR_String) "int0s"))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__program_target_scalar_common_2[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_2[15]))),
    ((MR_Box) ((MR_String) "opts"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[1]))),
    ((MR_Box) ((MR_String) "ints"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[2]))),
    ((MR_Box) ((MR_String) "int2s"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[3]))),
    ((MR_Box) ((MR_String) "int3s"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[4]))),
    ((MR_Box) ((MR_String) "module_deps"))
  },
  /* row  21 */
  {
    ((MR_Box) (&make__program_target_scalar_common_4[0])),
    ((MR_Box) ((MR_String) "mhs"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_2[22]))),
    ((MR_Box) ((MR_String) "mihs"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_2[24]))),
    ((MR_Box) ((MR_String) "analyses"))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "module_dep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "mih")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "mh")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[28])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[29])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "int3")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "int2")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "analysis")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 17U)
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 18U)
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Unsigned) 48U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_Unsigned) 44U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[48])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_Unsigned) 40U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[49])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 21U)
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[57])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[58])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[62])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_4[7][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 10U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 12U) },
};

static /* final */ const MR_Box make__program_target_scalar_common_5[8][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_6[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_7[5][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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

static /* final */ const MR_Box make__program_target_scalar_common_8[8][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
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
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_9[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_10[6][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_11[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__program_target__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__program_target__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_12[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_13[4][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_14[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};


static /* final */ const struct make__program_target__vector_common_type_15_0_s make__program_target_vector_common_15[7] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_2[7])) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 0U) },
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


static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 make__program_target____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_build2_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__program_target____Unify____build2_1_0_10001)),
  ((MR_Box) (make__program_target____Compare____build2_1_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "build2",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__program_target____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__program_target____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_build3_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__program_target____Unify____build3_1_0_10001)),
  ((MR_Box) (make__program_target____Compare____build3_1_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "build3",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__program_target____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_0 = {
  (MR_String) "build_int3s",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_1 = {
  (MR_String) "build_int3s_int0s",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_2 = {
  (MR_String) "build_all_ints",
  INT32_C(2)
};

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_3 = {
  (MR_String) "build_all_ints_opts",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr make__program_target__make__program_target__enum_ordinal_ordered_build_what_0[4] = {
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_0,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_1,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_2,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_3
};

static const MR_EnumFunctorDescPtr make__program_target__make__program_target__enum_name_ordered_build_what_0[4] = {
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_2,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_3,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_0,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_1
};

static const MR_Integer make__program_target__make__program_target__functor_number_map_build_what_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_build_what_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__program_target____Unify____build_what_0_0_10001)),
  ((MR_Box) (make__program_target____Compare____build_what_0_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "build_what",
  { make__program_target__make__program_target__enum_name_ordered_build_what_0 },
  { make__program_target__make__program_target__enum_ordinal_ordered_build_what_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  make__program_target__make__program_target__functor_number_map_build_what_0,

};

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_0 = {
  (MR_String) "do_not_use_analysis_cache_dir",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__program_target__make__program_target__field_types_maybe_use_analysis_cache_dir_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_1 = {
  (MR_String) "use_analysis_cache_dir",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__program_target__make__program_target__field_types_maybe_use_analysis_cache_dir_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_2 = {
  (MR_String) "analysis_cache_dir_create_failed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_0[2] = {
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_0,
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_2
};

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_1[1] = { &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_1 };

static const MR_DuPtagLayout make__program_target__make__program_target__du_ptag_ordered_maybe_use_analysis_cache_dir_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_name_ordered_maybe_use_analysis_cache_dir_0[3] = {
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_2,
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_0,
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_1
};

static const MR_Integer make__program_target__make__program_target__functor_number_map_maybe_use_analysis_cache_dir_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_maybe_use_analysis_cache_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__program_target____Unify____maybe_use_analysis_cache_dir_0_0_10001)),
  ((MR_Box) (make__program_target____Compare____maybe_use_analysis_cache_dir_0_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "maybe_use_analysis_cache_dir",
  { make__program_target__make__program_target__du_name_ordered_maybe_use_analysis_cache_dir_0 },
  { make__program_target__make__program_target__du_ptag_ordered_maybe_use_analysis_cache_dir_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__program_target__make__program_target__functor_number_map_maybe_use_analysis_cache_dir_0,

};

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__2155__1_5_p_0(
  MR_String IntsSubdir_16,
  MR_String LambdaHeadVar__1_66,
  MR_Word * LambdaHeadVar__2_67)
{
  MR_String Var_72;
  MR_String Var_74;

  Var_74 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_66, (MR_String) "s");
  Var_72 = mercury__dir__f_slash_2_f_0(IntsSubdir_16, Var_74);
  mercury__dir__make_directory_4_p_0(Var_72, LambdaHeadVar__2_67);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__get_reverse_ordered_modules__1499__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_25, HeadVar__2_26);
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1391__1_2_p_0(
  MR_Word AllModules_13,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_13, ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__788__1_1_f_0(
  MR_Word LambdaHeadVar__1_31)
{
  MR_String LambdaHeadVar__2_32 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_31, (MR_Integer) 2))));

  return LambdaHeadVar__2_32;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__582__1_1_f_0(
  MR_String LambdaHeadVar__1_62)
{
  MR_Word LambdaHeadVar__2_63;

  {
    LambdaHeadVar__2_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_63, 0) = ((MR_Box) (LambdaHeadVar__1_62));
  }
  return LambdaHeadVar__2_63;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__489__1_3_f_0(
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_String LambdaHeadVar__1_32)
{
  MR_Word LambdaHeadVar__2_33;
  MR_Word Var_34;
  MR_Word Var_35;

  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = (MR_Box) ((MR_Unsigned) (PIC_12));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (LambdaHeadVar__1_32));
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (Var_35));
  }
  LambdaHeadVar__2_33 = (MR_Word) ((MR_Word) (Var_34));
  return LambdaHeadVar__2_33;
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__filter_out_nested_modules__459__1_2_p_0(
  MR_Word NestedModules_15,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedModules_15, ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__398__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49)
{
  MR_Box conv0_HeadVar__2_49;

  mercury__pair__snd_2_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_48, &conv0_HeadVar__2_49);
  *HeadVar__2_49 = ((MR_Word) (conv0_HeadVar__2_49));
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__394__1_3_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_45,
  MR_Word * HeadVar__3_46)
{
  MR_Word KeyA_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_44, (MR_Integer) 0))));
  MR_Word ModuleA_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_44, (MR_Integer) 1))));
  MR_Word KeyB_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_45, (MR_Integer) 0))));
  MR_Word ModuleB_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_45, (MR_Integer) 1))));
  MR_Word KeyResult_52;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), &KeyResult_52, ((MR_Box) (KeyA_48)), ((MR_Box) (KeyB_50)));
  switch (KeyResult_52) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *HeadVar__3_46 = KeyResult_52;
      break;
    case (MR_Integer) 0:
      {
        MR_String ModuleAStr_53;
        MR_String ModuleBStr_54;

        ModuleAStr_53 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleA_49);
        ModuleBStr_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleB_51);
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__3_46, ModuleAStr_53, ModuleBStr_54);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__403__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61)
{
  MR_Box conv0_HeadVar__2_61;

  mercury__pair__snd_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_60, &conv0_HeadVar__2_61);
  *HeadVar__2_61 = ((MR_Word) (conv0_HeadVar__2_61));
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__402__1_3_p_0(
  MR_Word HeadVar__1_56,
  MR_Word HeadVar__2_57,
  MR_Word * HeadVar__3_58)
{
  MR_String KeyA_60 = ((MR_String) ((MR_hl_field(0, HeadVar__1_56, (MR_Integer) 0))));
  MR_Word ModuleA_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_56, (MR_Integer) 1))));
  MR_String KeyB_62 = ((MR_String) ((MR_hl_field(0, HeadVar__2_57, (MR_Integer) 0))));
  MR_Word ModuleB_63 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_57, (MR_Integer) 1))));
  MR_Word KeyResult_64;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &KeyResult_64, ((MR_Box) (KeyA_60)), ((MR_Box) (KeyB_62)));
  switch (KeyResult_64) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *HeadVar__3_58 = KeyResult_64;
      break;
    case (MR_Integer) 0:
      {
        MR_String ModuleAStr_65;
        MR_String ModuleBStr_66;

        ModuleAStr_65 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleA_61);
        ModuleBStr_66 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleB_63);
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__3_58, ModuleAStr_65, ModuleBStr_66);
      }
      break;
  }
}

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;
          MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build_what_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
make__program_target____Unify____build_what_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build3_1_0(
  MR_Word TypeInfo_for_Info_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
make__program_target____Unify____build3_1_0(
  MR_Word TypeInfo_for_Info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build2_1_0(
  MR_Word TypeInfo_for_Info_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
make__program_target____Unify____build2_1_0(
  MR_Word TypeInfo_for_Info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
make__program_target__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6)
{
  MR_String ModuleNameStr_7;
  MR_Word Var_9;

  ModuleNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_4);
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (ModuleNameStr_7));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Opts0_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Opts_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "--local-module-id"));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_9));
  }
}

static void MR_CALL 
make__program_target__acc_nonnested_and_parent_modules_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_NonnestedModules_0_24,
  MR_Word * STATE_VARIABLE_NonnestedModules_25,
  MR_Word STATE_VARIABLE_ParentModules_0_26,
  MR_Word * STATE_VARIABLE_ParentModules_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_19;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_12, Globals_13, ModuleName_14, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
  if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_NonnestedModules_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NonnestedModules_0_24));
    }
    *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
  }
  else
  {
    MR_Word ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_19, (MR_Integer) 0))));
    MR_Word MaybeTopModule_21;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_20, &MaybeTopModule_21);
    if ((MaybeTopModule_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NonnestedModules_25 = STATE_VARIABLE_NonnestedModules_0_24;
      *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
    }
    else
    {
      MR_Word Children_23;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_NonnestedModules_25 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NonnestedModules_0_24));
      }
      parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_20, &Children_23);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_23);
      if (succeeded)
        *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParentModules_27 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParentModules_0_26));
        }
    }
  }
}

static void MR_CALL 
make__program_target__collect_nested_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_NestedModules_0_20,
  MR_Word * STATE_VARIABLE_NestedModules_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word MaybeModuleDepInfo_16;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_12, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  if ((MaybeModuleDepInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_NestedModules_21 = STATE_VARIABLE_NestedModules_0_20;
  else
  {
    MR_Word ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, (MR_Integer) 0))));
    MR_Word MaybeTopModule_18;
    MR_Word NestedSubModules_19;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_17, &MaybeTopModule_18);
    NestedSubModules_19 = parse_tree__module_baggage__get_nested_children_of_top_module_1_f_0(MaybeTopModule_18);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedSubModules_19, STATE_VARIABLE_NestedModules_0_20, STATE_VARIABLE_NestedModules_21);
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__8_8;

  make__util__remove_make_target_file_by_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__8_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
make__program_target__make_module_realclean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_String Part1_13;
  MR_String CleaningMsg_14;
  MR_Word STATE_VARIABLE_Info_20_20;
  MR_String Var_25;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_Info_46_46;
  MR_Word STATE_VARIABLE_Info_52_52;
  MR_Word STATE_VARIABLE_Info_57_57;
  MR_String Var_74;
  MR_Box conv2_STATE_VARIABLE_Info_46_46;
  MR_Box conv1_STATE_VARIABLE_IO_47_47;

  make__program_target__make_module_clean_7_p_0(ProgressStream_8, Globals_9, ModuleName_10, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_20_20);
  Var_25 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
  Var_74 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) "\'");
  Part1_13 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up interface files for module \140", Var_74);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_13, &CleaningMsg_14);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, CleaningMsg_14);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__program_target_scalar_common_13[3]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__program_target__make_module_realclean_7_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_45, 5) = ((MR_Box) ((MR_String) "predicate \140make.program_target.make_module_realclean\'/7"));
    MR_hl_field(0, Var_45, 6) = ((MR_Box) ((MR_Integer) 76));
    MR_hl_field(0, Var_45, 7) = ((MR_Box) (ModuleName_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_2[63])), ((MR_Box) (STATE_VARIABLE_Info_20_20)), &conv2_STATE_VARIABLE_Info_46_46, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
  STATE_VARIABLE_Info_46_46 = ((MR_Word) (conv2_STATE_VARIABLE_Info_46_46));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[4])), STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_52_52);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[64])), STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_57_57);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[65])), STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
make__program_target__remove_fact_table_object_and_assembler_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word PIC_13,
  MR_String FactTableFile_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Var_23;

  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = (MR_Box) ((MR_Unsigned) (PIC_13));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (FactTableFile_14));
  }
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_10, Globals_11, (MR_String) "predicate \140make.program_target.remove_fact_table_object_and_assembler_files\'/9", (MR_Integer) 76, ModuleName_12, Var_23, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

static void MR_CALL 
make__program_target__remove_fact_table_c_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FactTableFile_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_String FactTableCFile_14;
  MR_Word _FactTableDirs_13;

  parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(Globals_9, (MR_String) "predicate \140make.program_target.remove_fact_table_c_file\'/7", (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[55])), FactTableFile_10, &_FactTableDirs_13, &FactTableCFile_14);
  make__util__remove_file_for_make_8_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, FactTableCFile_14, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
make__program_target__make_module_clean_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Info_18;

  make__program_target__remove_fact_table_object_and_assembler_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__program_target__make_module_clean_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_18;

  make__program_target__remove_fact_table_object_and_assembler_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__program_target__make_module_clean_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_16;

  make__program_target__remove_fact_table_c_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__program_target__make_module_clean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__8_8;

  make__util__remove_make_target_file_by_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__8_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
make__program_target__make_module_clean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_String Part1_13;
  MR_String CleaningMsg_14;
  MR_Word MaybeModuleDepInfo_15;
  MR_Word FactTableFiles_18;
  MR_Word CCodeModule_19;
  MR_String Var_27;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Info_51_51;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_59_59;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word STATE_VARIABLE_Info_71_71;
  MR_String Var_90;
  MR_Word STATE_VARIABLE_Info_24_95;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_Info_24_104;
  MR_Word Var_106;
  MR_Box conv2_STATE_VARIABLE_Info_32_32;
  MR_Box conv1_STATE_VARIABLE_IO_33_33;
  MR_Box conv5_STATE_VARIABLE_Info_62_62;
  MR_Box conv4_STATE_VARIABLE_IO_63_63;
  MR_Box conv8_STATE_VARIABLE_Info_71_71;
  MR_Box conv7_STATE_VARIABLE_IO_72_72;
  MR_Box conv11_STATE_VARIABLE_Info_21;
  MR_Box conv10_STATE_VARIABLE_IO_23;

  Var_27 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
  Var_90 = mercury__string__f_43_43_2_f_0(Var_27, (MR_String) "\'.");
  Part1_13 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up target files for module \140", Var_90);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_13, &CleaningMsg_14);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, CleaningMsg_14);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_13[3]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__program_target__make_module_clean_7_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) ((MR_String) "predicate \140make.program_target.make_module_clean\'/7"));
    MR_hl_field(0, Var_30, 6) = ((MR_Box) ((MR_Integer) 76));
    MR_hl_field(0, Var_30, 7) = ((MR_Box) (ModuleName_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_2[53])), ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv2_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33_33);
  STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv2_STATE_VARIABLE_Info_32_32));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[54])), STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_51_51);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[6])), STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_56_56);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_8, Globals_9, ModuleName_10, &MaybeModuleDepInfo_15, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_59_59);
  if ((MaybeModuleDepInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    FactTableFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleDepInfo_16 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_15, (MR_Integer) 0))));
    MR_Word FactTableFilesSet_17;

    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_16, &FactTableFilesSet_17);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_17, &FactTableFiles_18);
  }
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_10[4]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__program_target__make_module_clean_7_p_0_2));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) (Globals_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, FactTableFiles_18, ((MR_Box) (STATE_VARIABLE_Info_59_59)), &conv5_STATE_VARIABLE_Info_62_62, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_63_63);
  STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv5_STATE_VARIABLE_Info_62_62));
  parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_10, (MR_Integer) 0, &CCodeModule_19);
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_8, Globals_9, (MR_String) "predicate \140make.program_target.make_module_clean\'/7", (MR_Integer) 76, CCodeModule_19, (MR_Word) ((MR_Unsigned) 36U), STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_68_68);
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_8, Globals_9, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/9", (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[0])), STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_24_95);
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (&make__program_target_scalar_common_8[7]));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (make__program_target__make_module_clean_7_p_0_3));
    MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_97, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_97, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_97, 5) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, Var_97, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, FactTableFiles_18, ((MR_Box) (STATE_VARIABLE_Info_24_95)), &conv8_STATE_VARIABLE_Info_71_71, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_72_72);
  STATE_VARIABLE_Info_71_71 = ((MR_Word) (conv8_STATE_VARIABLE_Info_71_71));
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_8, Globals_9, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/9", (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[1])), STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_24_104);
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (&make__program_target_scalar_common_8[7]));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) (make__program_target__make_module_clean_7_p_0_4));
    MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_106, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_106, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_106, 5) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, Var_106, 6) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, FactTableFiles_18, ((MR_Box) (STATE_VARIABLE_Info_24_104)), &conv11_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_23);
  *STATE_VARIABLE_Info_21 = ((MR_Word) (conv11_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__program_target__remove_target_file_if_grade_dependent_4_p_0(
  MR_Word File_5,
  MR_Word _Status_6,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11)
{
  make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(File_5, STATE_VARIABLE_StatusMap_0_10, STATE_VARIABLE_StatusMap_11);
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word File_5,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11)
{
  MR_bool succeeded = ((MR_tag((MR_Word) File_5)) == (MR_Integer) 0);
  MR_Word TargetType_9;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_12 = (MR_Word) ((MR_Word) (File_5));
    TargetType_9 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
    succeeded = make__util__target_is_grade_or_arch_dependent_1_p_0(TargetType_9);
  }
  if (succeeded)
    mercury__version_hash_table__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (File_5)), STATE_VARIABLE_StatusMap_0_10, STATE_VARIABLE_StatusMap_11);
  else
    *STATE_VARIABLE_StatusMap_11 = STATE_VARIABLE_StatusMap_0_10;
}

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10)
{
  MR_String LinkName_12;
  MR_String Var_15;

  Var_15 = mercury__string__f_43_43_2_f_0(Ext_9, (MR_String) "s");
  LinkName_12 = mercury__dir__f_slash_2_f_0(Subdir_8, Var_15);
  parse_tree__module_cmds__maybe_make_symlink_6_p_0(Globals_7, (MR_String) "..", LinkName_12, Succeeded_10);
}

static void MR_CALL 
make__program_target__install_grade_ints_and_headers_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkSucceeded_13,
  MR_String GradeDir_14,
  MR_Word ModuleName_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_19;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_12, ModuleName_15, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
  if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
    *Succeeded_16 = (MR_Integer) 0;
  else
  {
    MR_String Prefix_21;
    MR_String LibDir_22;
    MR_Word Target_23;
    MR_Word HighLevelCode_24;
    MR_Word HeaderSucceeded_29;
    MR_String GradeIntDir_30;
    MR_Word AnyIntermod_31;
    MR_Word OptSucceeded_32;
    MR_Word IntermodAnalysis_33;
    MR_Word IntermodAnalysisSucceeded_34;
    MR_String Var_42;
    MR_String Var_61;
    MR_Word Var_74;

    libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 689, &Prefix_21);
    Var_42 = mercury__dir__f_slash_2_f_0(Prefix_21, (MR_String) "lib");
    LibDir_22 = mercury__dir__f_slash_2_f_0(Var_42, (MR_String) "mercury");
    libs__globals__get_target_2_p_0(Globals_12, &Target_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 329, &HighLevelCode_24);
    succeeded = (Target_23 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (HighLevelCode_24 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String GradeIncDir_25;
      MR_Word HeaderSucceeded1_26;
      MR_String IntDir_27;
      MR_Word HeaderSucceeded2_28;
      MR_String Var_46;
      MR_String Var_47;

      Var_47 = mercury__dir__f_slash_2_f_0(LibDir_22, (MR_String) "lib");
      Var_46 = mercury__dir__f_slash_2_f_0(Var_47, GradeDir_14);
      GradeIncDir_25 = mercury__dir__f_slash_2_f_0(Var_46, (MR_String) "inc");
      make__program_target__install_subdir_file_9_p_0(ProgressStream_11, Globals_12, LinkSucceeded_13, GradeIncDir_25, ModuleName_15, (MR_Tuple) (&make__program_target_scalar_common_2[23]), &HeaderSucceeded1_26);
      IntDir_27 = mercury__dir__f_slash_2_f_0(LibDir_22, (MR_String) "ints");
      make__program_target__install_subdir_file_9_p_0(ProgressStream_11, Globals_12, LinkSucceeded_13, IntDir_27, ModuleName_15, (MR_Tuple) (&make__program_target_scalar_common_2[23]), &HeaderSucceeded2_28);
      HeaderSucceeded_29 = libs__maybe_util__and_2_f_0(HeaderSucceeded1_26, HeaderSucceeded2_28);
    }
    else
      HeaderSucceeded_29 = (MR_Integer) 1;
    Var_61 = mercury__dir__f_slash_2_f_0(LibDir_22, (MR_String) "ints");
    GradeIntDir_30 = mercury__dir__f_slash_2_f_0(Var_61, GradeDir_14);
    libs__globals__get_any_intermod_2_p_0(Globals_12, &AnyIntermod_31);
    switch (AnyIntermod_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OptSucceeded_32 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__program_target__install_subdir_file_9_p_0(ProgressStream_11, Globals_12, LinkSucceeded_13, GradeIntDir_30, ModuleName_15, (MR_Tuple) (&make__program_target_scalar_common_2[16]), &OptSucceeded_32);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 524, &IntermodAnalysis_33);
    switch (IntermodAnalysis_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IntermodAnalysisSucceeded_34 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__program_target__install_subdir_file_9_p_0(ProgressStream_11, Globals_12, LinkSucceeded_13, GradeIntDir_30, ModuleName_15, (MR_Tuple) (&make__program_target_scalar_common_2[25]), &IntermodAnalysisSucceeded_34);
        break;
    }
    Var_74 = libs__maybe_util__and_2_f_0(HeaderSucceeded_29, OptSucceeded_32);
    *Succeeded_16 = libs__maybe_util__and_2_f_0(Var_74, IntermodAnalysisSucceeded_34);
  }
}

static void MR_CALL 
make__program_target__install_library_grade_2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkSucceeded0_13,
  MR_Word ModuleName_14,
  MR_Word AllModules_15,
  MR_Word Info0_16,
  MR_Word CleanAfter_17,
  MR_Word * Succeeded_18)
{
  MR_Word LibSucceeded_20;
  MR_Word Info1_21;
  MR_Word Specs_22;
  MR_Word Var_29;

  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (ModuleName_14));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  make__program_target__make_misc_target_10_p_0(ProgressStream_11, Globals_12, Var_29, &LibSucceeded_20, Info0_16, &Info1_21, (MR_Word) ((MR_Unsigned) 0U), &Specs_22);
  switch (LibSucceeded_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ErrorStream_26;

        mercury__io__output_stream_3_p_0(&ErrorStream_26);
        parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_26, Globals_12, Specs_22);
        *Succeeded_18 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String GradeDir_23;
        MR_Word Info2_24;
        MR_Word _Info_25;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_12, &GradeDir_23);
        make__program_target__install_library_grade_files_11_p_0(ProgressStream_11, Globals_12, LinkSucceeded0_13, GradeDir_23, ModuleName_14, AllModules_15, Succeeded_18, Info1_21, &Info2_24);
        make__program_target__maybe_make_grade_clean_9_p_0(ProgressStream_11, Globals_12, CleanAfter_17, ModuleName_14, AllModules_15, Info2_24, &_Info_25);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_21;

  make__program_target__make_module_clean_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_9_p_0_2(
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
make__program_target__maybe_make_grade_clean_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__4_4;
  MR_String conv0_HeadVar__5_5;

  backend_libs__compile_target_code__linked_target_file_name_full_curdir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Clean_12,
  MR_Word ModuleName_13,
  MR_Word AllModules_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  switch (Clean_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      break;
    case (MR_Integer) 1:
      {
        MR_String Grade_21;
        MR_String Part1_22;
        MR_String CleaningMsg_23;
        MR_String Var_24;
        MR_Word STATE_VARIABLE_Info_30_26;
        MR_Word Var_28;
        MR_String Var_33;
        MR_String Var_35;
        MR_String Var_36;
        MR_String Part1_38;
        MR_String CleaningMsg_39;
        MR_Word FileNames_41;
        MR_Word ThisDirFileNames_42;
        MR_String FullInitFileName_43;
        MR_String ThisDirInitFileName_44;
        MR_Word FilesToRemove_45;
        MR_String Var_46;
        MR_Word Var_48;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word STATE_VARIABLE_Info_55_57;
        MR_String Var_66;
        MR_Word STATE_VARIABLE_Info_20_69;
        MR_Word STATE_VARIABLE_Info_24_73;
        MR_Box conv2_STATE_VARIABLE_IO_46_49;
        MR_Box conv5_STATE_VARIABLE_Info_55_57;
        MR_Box conv4_STATE_VARIABLE_IO_56_58;
        MR_Box conv8_STATE_VARIABLE_Info_18;
        MR_Box conv7_STATE_VARIABLE_IO_20;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_11, &Grade_21);
        Var_24 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_13);
        Var_33 = mercury__string__f_43_43_2_f_0(Grade_21, (MR_String) ".");
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "\' in grade ", Var_33);
        Var_36 = mercury__string__f_43_43_2_f_0(Var_24, Var_35);
        Part1_22 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up grade-dependent files for \140", Var_36);
        make__util__verbose_make_one_part_msg_3_p_0(Globals_11, Part1_22, &CleaningMsg_23);
        make__util__maybe_write_msg_4_p_0(ProgressStream_10, CleaningMsg_23);
        Var_46 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_13);
        Var_66 = mercury__string__f_43_43_2_f_0(Var_46, (MR_String) "\'.");
        Part1_38 = mercury__string__f_43_43_2_f_0((MR_String) "Removing executable and library files for \140", Var_66);
        make__util__verbose_make_one_part_msg_3_p_0(Globals_11, Part1_38, &CleaningMsg_39);
        make__util__maybe_write_msg_4_p_0(ProgressStream_10, CleaningMsg_39);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_10[3]));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_9_p_0_1));
          MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_48, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_48, 4) = ((MR_Box) (ModuleName_13));
        }
        mercury__list__map2_foldl_6_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_2[44])), &FileNames_41, &ThisDirFileNames_42, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_46_49);
        parse_tree__file_names__module_name_to_file_name_full_curdir_6_p_0(Globals_11, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/7", (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[5])), ModuleName_13, &FullInitFileName_43, &ThisDirInitFileName_44);
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (ThisDirInitFileName_44));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (FullInitFileName_43));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
        }
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_42, Var_53);
        FilesToRemove_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_41, Var_52);
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_7[4]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_9_p_0_2));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_56, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_56, 5) = ((MR_Box) ((MR_Integer) 76));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, FilesToRemove_45, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv5_STATE_VARIABLE_Info_55_57, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_56_58);
        STATE_VARIABLE_Info_55_57 = ((MR_Word) (conv5_STATE_VARIABLE_Info_55_57));
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_10, Globals_11, (MR_Integer) 76, ModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[45])), STATE_VARIABLE_Info_55_57, &STATE_VARIABLE_Info_20_69);
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_10, Globals_11, (MR_Integer) 76, ModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[46])), STATE_VARIABLE_Info_20_69, &STATE_VARIABLE_Info_24_73);
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_10, Globals_11, (MR_Integer) 76, ModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[47])), STATE_VARIABLE_Info_24_73, &STATE_VARIABLE_Info_30_26);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_10[5]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_9_p_0_3));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) (Globals_11));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, AllModules_14, ((MR_Box) (STATE_VARIABLE_Info_30_26)), &conv8_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_20);
        *STATE_VARIABLE_Info_18 = ((MR_Word) (conv8_STATE_VARIABLE_Info_18));
      }
      break;
  }
}

static void MR_CALL 
make__program_target__install_extra_header_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String IncDir_11,
  MR_String FileName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_16,
  MR_Word * STATE_VARIABLE_Succeeded_17)
{
  MR_Word InstallSucceeded_15;
  MR_String InstallMsg_20;

  make__util__verbose_make_four_part_msg_6_p_0(Globals_10, (MR_String) "Installing file", FileName_12, (MR_String) "in", IncDir_11, &InstallMsg_20);
  make__util__maybe_write_msg_4_p_0(ProgressStream_9, InstallMsg_20);
  libs__copy_util__copy_file_to_directory_7_p_0(Globals_10, ProgressStream_9, FileName_12, IncDir_11, &InstallSucceeded_15);
  *STATE_VARIABLE_Succeeded_17 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_16, InstallSucceeded_15);
}

static void MR_CALL 
make__program_target__install_ints_and_headers_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_17;

  make__program_target__install_subdir_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_Succeeded_17);
  *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_17));
}

static void MR_CALL 
make__program_target__install_ints_and_headers_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word SubdirLinkSucceeded_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_17;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_17, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *Succeeded_14 = (MR_Integer) 0;
  else
  {
    MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_17, (MR_Integer) 0))));
    MR_Word Children_19;
    MR_Word ExtExtDirs0_20;
    MR_Word AnyIntermod_21;
    MR_Word ExtExtDirs1_22;
    MR_Word ExtExtDirs_23;
    MR_String Prefix_24;
    MR_String LibDir_25;
    MR_Word Results_26;
    MR_Word Target_27;
    MR_Word HeaderSucceeded_31;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_61;
    MR_String Var_67;
    MR_Word Var_70;
    MR_String Var_72;
    MR_Word Var_87;
    MR_Box conv1_STATE_VARIABLE_IO_71_71;

    parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_18, &Children_19);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_19);
    if (succeeded)
      ExtExtDirs0_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
      ExtExtDirs0_20 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_2[14]));
    libs__globals__get_any_intermod_2_p_0(Globals_11, &AnyIntermod_21);
    switch (AnyIntermod_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ExtExtDirs1_22 = ExtExtDirs0_20;
        break;
      case (MR_Integer) 1:
        {
          ExtExtDirs1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ExtExtDirs1_22, 0) = ((MR_Box) (&make__program_target_scalar_common_2[16]));
          MR_hl_field(1, ExtExtDirs1_22, 1) = ((MR_Box) (ExtExtDirs0_20));
        }
        break;
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_2[20]));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (ExtExtDirs1_22));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_2[19]));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (&make__program_target_scalar_common_2[18]));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_56));
    }
    {
      ExtExtDirs_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ExtExtDirs_23, 0) = ((MR_Box) (&make__program_target_scalar_common_2[17]));
      MR_hl_field(1, ExtExtDirs_23, 1) = ((MR_Box) (Var_51));
    }
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 689, &Prefix_24);
    Var_67 = mercury__dir__f_slash_2_f_0(Prefix_24, (MR_String) "lib");
    LibDir_25 = mercury__dir__f_slash_2_f_0(Var_67, (MR_String) "mercury");
    Var_72 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (&make__program_target_scalar_common_8[6]));
      MR_hl_field(0, Var_70, 1) = ((MR_Box) (make__program_target__install_ints_and_headers_9_p_0_1));
      MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_70, 3) = ((MR_Box) (ProgressStream_10));
      MR_hl_field(0, Var_70, 4) = ((MR_Box) (Globals_11));
      MR_hl_field(0, Var_70, 5) = ((MR_Box) (SubdirLinkSucceeded_12));
      MR_hl_field(0, Var_70, 6) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_70, 7) = ((MR_Box) (ModuleName_13));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&make__program_target_scalar_common_3[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, ExtExtDirs_23, &Results_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_71_71);
    libs__globals__get_target_2_p_0(Globals_11, &Target_27);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String FileName_28;
          MR_Word HeaderSucceeded1_29;
          MR_Word HeaderSucceeded2_30;
          MR_String Var_77;
          MR_String Var_80;
          MR_String InstallMsg_96;

          parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140make.program_target.install_ints_and_headers\'/9", (MR_Word) (&make__program_target_scalar_common_4[0]), ModuleName_13, &FileName_28);
          Var_77 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "inc");
          make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_28, (MR_String) "in", Var_77, &InstallMsg_96);
          make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_96);
          libs__copy_util__copy_file_to_directory_7_p_0(Globals_11, ProgressStream_10, FileName_28, Var_77, &HeaderSucceeded1_29);
          Var_80 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
          make__program_target__install_subdir_file_9_p_0(ProgressStream_10, Globals_11, SubdirLinkSucceeded_12, Var_80, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_2[21]), &HeaderSucceeded2_30);
          HeaderSucceeded_31 = libs__maybe_util__and_2_f_0(HeaderSucceeded1_29, HeaderSucceeded2_30);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        HeaderSucceeded_31 = (MR_Integer) 1;
        break;
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (HeaderSucceeded_31));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Results_26));
    }
    *Succeeded_14 = libs__maybe_util__and_list_1_f_0(Var_87);
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word SubdirLinkSucceeded_12,
  MR_String InstallDir_13,
  MR_Word ModuleName_14,
  MR_Tuple HeadVar__6_6,
  MR_Word * Succeeded_17)
{
  MR_Word Ext_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0))));
  MR_String ExtDir_16 = ((MR_String) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))));
  MR_String FileName_19;
  MR_Word Succeeded1_20;
  MR_String InstallMsg_30;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140make.program_target.install_subdir_file\'/9", Ext_15, ModuleName_14, &FileName_19);
  make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_19, (MR_String) "in", InstallDir_13, &InstallMsg_30);
  make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_30);
  libs__copy_util__copy_file_to_directory_7_p_0(Globals_11, ProgressStream_10, FileName_19, InstallDir_13, &Succeeded1_20);
  switch (SubdirLinkSucceeded_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Succeeded2_21;
        MR_String Var_26;
        MR_String Var_28;
        MR_String InstallMsg_34;

        Var_28 = mercury__dir__f_slash_2_f_0(InstallDir_13, (MR_String) "Mercury");
        Var_26 = mercury__dir__f_slash_2_f_0(Var_28, ExtDir_16);
        make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_19, (MR_String) "in", Var_26, &InstallMsg_34);
        make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_34);
        libs__copy_util__copy_file_to_directory_7_p_0(Globals_11, ProgressStream_10, FileName_19, Var_26, &Succeeded2_21);
        *Succeeded_17 = libs__maybe_util__and_2_f_0(Succeeded1_20, Succeeded2_21);
      }
      break;
    case (MR_Integer) 1:
      *Succeeded_17 = Succeeded1_20;
      break;
  }
}

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word Dep_6;
  MR_Word DepStatusMap0_7;
  MR_Word DepStatusMap_8;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (ModuleName_4));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 28U));
  }
  Dep_6 = (MR_Word) ((MR_Word) (Var_11));
  DepStatusMap0_7 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_9);
  mercury__version_hash_table__set_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_6)), ((MR_Box) ((MR_Integer) 0)), DepStatusMap0_7, &DepStatusMap_8);
  make__make_info__make_info_set_dep_file_status_map_3_p_0(DepStatusMap_8, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
}

static MR_Word MR_CALL 
make__program_target__lookup_module_dep_info_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5)
{
  MR_Word ModuleDepInfo_6;
  MR_Word MaybeModuleDepInfo_7;
  MR_Box conv0_MaybeModuleDepInfo_7;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDeps_4, ((MR_Box) (ModuleName_5)), &conv0_MaybeModuleDepInfo_7);
  MaybeModuleDepInfo_7 = ((MR_Word) (conv0_MaybeModuleDepInfo_7));
  if ((MaybeModuleDepInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140make.program_target.lookup_module_dep_info_in_maybe_map\'/2", (MR_String) "MaybeModuleDepInfo = no");
  else
    ModuleDepInfo_6 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_7, (MR_Integer) 0))));
  return ModuleDepInfo_6;
}

static void MR_CALL 
make__program_target__add_module_relations_6_p_0(
  MR_Word LookupModuleImports_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * STATE_VARIABLE_IntDepsGraph_13,
  MR_Word STATE_VARIABLE_ImplDepsGraph_0_14,
  MR_Word * STATE_VARIABLE_ImplDepsGraph_15)
{
  MR_Word ModuleDepInfo_11;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, LookupModuleImports_7, (MR_Integer) 1))));
  MR_Box conv1_ModuleDepInfo_11;

  conv1_ModuleDepInfo_11 = func_0(((MR_Box) (LookupModuleImports_7)), ((MR_Box) (ModuleName_8)));
  ModuleDepInfo_11 = ((MR_Word) (conv1_ModuleDepInfo_11));
  parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0(ModuleDepInfo_11, LookupModuleImports_7, STATE_VARIABLE_IntDepsGraph_0_12, STATE_VARIABLE_IntDepsGraph_13, STATE_VARIABLE_ImplDepsGraph_0_14, STATE_VARIABLE_ImplDepsGraph_15);
}

static void MR_CALL 
make__program_target__get_non_nested_target_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_TargetModulesCord_0_19,
  MR_Word * STATE_VARIABLE_TargetModulesCord_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_16;
  MR_Word ModuleDepInfo_17;
  MR_Word SourceFileModuleName_18;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_12, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  succeeded = (MaybeModuleDepInfo_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, (MR_Integer) 0))));
    parse_tree__module_dep_info__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_17, &SourceFileModuleName_18);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, SourceFileModuleName_18);
  }
  if (succeeded)
    mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_TargetModulesCord_0_19, STATE_VARIABLE_TargetModulesCord_20);
  else
    *STATE_VARIABLE_TargetModulesCord_20 = STATE_VARIABLE_TargetModulesCord_0_19;
}

static void MR_CALL 
make__program_target__do_not_reinsert_java_class_timestamps_4_p_0(
  MR_String FileName_5,
  MR_Word MaybeTimestamp_6,
  MR_Word STATE_VARIABLE_Timestamps_0_8,
  MR_Word * STATE_VARIABLE_Timestamps_9)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(FileName_5, (MR_String) ".class");
  if (succeeded)
    *STATE_VARIABLE_Timestamps_9 = STATE_VARIABLE_Timestamps_0_8;
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[3]), ((MR_Box) (FileName_5)), ((MR_Box) (MaybeTimestamp_6)), STATE_VARIABLE_Timestamps_0_8, STATE_VARIABLE_Timestamps_9);
}

static void MR_CALL 
make__program_target__linked_target_cleanup_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word MainModuleName_13,
  MR_Word FileType_14,
  MR_String FullMainModuleLinkedFileName_15,
  MR_String CurDirMainModuleLinkedFileName_16,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word STATE_VARIABLE_Info_27_27;

  make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 80, FullMainModuleLinkedFileName_15, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_24_24);
  succeeded = (strcmp(FullMainModuleLinkedFileName_15, CurDirMainModuleLinkedFileName_16) == 0);
  if (succeeded)
    STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_24_24;
  else
    make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 80, CurDirMainModuleLinkedFileName_16, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_27_27);
  switch (FileType_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_27_27;
      break;
    case (MR_Integer) 4:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_27_27;
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_Info_20_31;
        MR_Word STATE_VARIABLE_Info_24_35;

        make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_12, (MR_Integer) 80, MainModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[45])), STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_20_31);
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_12, (MR_Integer) 80, MainModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[46])), STATE_VARIABLE_Info_20_31, &STATE_VARIABLE_Info_24_35);
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_12, (MR_Integer) 80, MainModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[47])), STATE_VARIABLE_Info_24_35, STATE_VARIABLE_Info_20);
      }
      break;
    case (MR_Integer) 6:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_27_27;
      break;
    case (MR_Integer) 5:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_27_27;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_27_27;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_27_27;
      break;
  }
}

static void MR_CALL 
make__program_target__link_and_write_error_specs_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word LinkTargetType_11,
  MR_Word ModuleName_12,
  MR_Word ObjectsList_13,
  MR_Word * Succeeded_14)
{
  MR_Word Specs_16;

  backend_libs__compile_target_code__link_9_p_0(Globals_9, ProgressStream_10, LinkTargetType_11, ModuleName_12, ObjectsList_13, &Specs_16, Succeeded_14);
  parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_10, Globals_9, Specs_16);
}

static MR_Box MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_32;

  conv0_LambdaHeadVar__2_32 = make__program_target__IntroducedFrom__func__get_module_foreign_object_files__788__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ForeignObjectFiles_14,
  MR_Word STATE_VARIABLE_MakeInfo_0_23,
  MR_Word * STATE_VARIABLE_MakeInfo_24)
{
  MR_Word MaybeModuleDepInfo_17;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_17, STATE_VARIABLE_MakeInfo_0_23, STATE_VARIABLE_MakeInfo_24);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_module_foreign_object_files\'/9", (MR_String) "error in dependencies");
      return;
    }
  else
  {
    MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_17, (MR_Integer) 0))));
    MR_Word ForeignFiles_19;

    make__module_target__get_any_fact_table_object_code_files_6_p_0(Globals_11, PIC_12, ModuleDepInfo_18, &ForeignFiles_19);
    *ForeignObjectFiles_14 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[17]), ForeignFiles_19);
  }
}

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_33;

  conv0_LambdaHeadVar__2_33 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__489__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_33));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ObjectTargets_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word CompilationTarget_17;
  MR_Word MaybeModuleDepInfo_18;
  MR_Word ModuleDepInfo_19;

  libs__globals__get_target_2_p_0(Globals_11, &CompilationTarget_17);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
  if ((MaybeModuleDepInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_foreign_object_targets\'/9", (MR_String) "unknown imports");
      return;
    }
  else
    ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, (MR_Integer) 0))));
  switch (CompilationTarget_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FactFileToTarget_20;
        MR_Word FactTableFiles_22;
        MR_Word Var_36;

        {
          FactFileToTarget_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FactFileToTarget_20, 0) = ((MR_Box) (&make__program_target_scalar_common_11[2]));
          MR_hl_field(0, FactFileToTarget_20, 1) = ((MR_Box) (make__program_target__get_foreign_object_targets_9_p_0_1));
          MR_hl_field(0, FactFileToTarget_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FactFileToTarget_20, 3) = ((MR_Box) (PIC_12));
          MR_hl_field(0, FactFileToTarget_20, 4) = ((MR_Box) (ModuleName_13));
        }
        parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_19, &FactTableFiles_22);
        Var_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_22);
        *ObjectTargets_14 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), FactFileToTarget_20, Var_36);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ObjectTargets_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
make__program_target__pair_module_with_name_2_p_0(
  MR_Word Module_3,
  MR_Word * HeadVar__2_2)
{
  MR_String Name_4;

  Name_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_3);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Module_3));
  }
}

static void MR_CALL 
make__program_target__pair_module_with_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Module_11,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word Timestamp_12;
  MR_Word Target_16;
  MR_Word MaybeTimestamp_17;

  {
    Target_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Target_16, 0) = ((MR_Box) (Module_11));
    MR_hl_field(0, Target_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__timestamp__get_target_timestamp_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 0, Target_16, &MaybeTimestamp_17, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  if (((MR_tag((MR_Word) MaybeTimestamp_17)) == (MR_Integer) 1))
    Timestamp_12 = libs__timestamp__oldest_timestamp_0_f_0();
  else
    Timestamp_12 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_17, (MR_Integer) 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Module_11));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_18;

  make__program_target__maybe_make_grade_clean_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Info_18);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__program_target__install_library_grade_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_18;

  make__program_target__install_library_grade_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), &conv2_Succeeded_18);
  *wrapper_arg_1 = ((MR_Box) (conv2_Succeeded_18));
}

static void MR_CALL 
make__program_target__install_library_grade_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StatusMap_11;

  make__program_target__remove_target_file_if_grade_dependent_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StatusMap_11);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StatusMap_11));
}

void MR_CALL 
make__program_target__install_library_grade_11_p_0(
  MR_Word LinkSucceeded0_12,
  MR_Word ModuleName_13,
  MR_Word AllModules_14,
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_String Grade_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  MR_Word SubdirSetting_21;
  MR_Word CleanAfter_22;
  MR_Word EnvVarArgs_23;
  MR_Word OptionArgs0_24;
  MR_Word OptionArgs_25;
  MR_String InstallMsg_26;
  MR_Word MaybeMCFlags_27;
  MR_Word OptionsSpecs_34;
  MR_Word LibGlobals_35;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_57;

  libs__globals__get_subdir_setting_2_p_0(Globals_16, &SubdirSetting_21);
  switch (SubdirSetting_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      CleanAfter_22 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      CleanAfter_22 = (MR_Integer) 0;
      break;
  }
  EnvVarArgs_23 = make__make_info__make_info_get_env_var_args_1_f_0(STATE_VARIABLE_Info_0_45);
  OptionArgs0_24 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_45);
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Grade_17));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_2[8])));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_String) "--grade"));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  OptionArgs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs0_24, Var_49);
  make__util__verbose_make_two_part_msg_4_p_0(Globals_16, (MR_String) "Installing grade", Grade_17, &InstallMsg_26);
  make__util__maybe_write_msg_4_p_0(ProgressStream_15, InstallMsg_26);
  Var_57 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_0_45);
  make__options_file__lookup_mmc_options_2_p_0(Var_57, &MaybeMCFlags_27);
  if (((MR_tag((MR_Word) MaybeMCFlags_27)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_36 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags_27, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_15, Globals_16, LookupSpecs_36);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.install_library_grade\'/11", (MR_String) "bad DEFAULT_MCFLAGS");
      return;
    }
  }
  else
  {
    MR_Word MCFlags_28 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags_27, (MR_Integer) 0))));
    MR_Word DefaultOptionTable_29;
    MR_Word DetectedGradeFlags_30;
    MR_Word AllFlags_31;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_32;
    MR_Word Var_33;

    libs__globals__get_default_options_2_p_0(Globals_16, &DefaultOptionTable_29);
    DetectedGradeFlags_30 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_0_45);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarArgs_23, OptionArgs_25);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_28, Var_59);
    AllFlags_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_30, Var_58);
    libs__handle_options__handle_given_options_9_p_0(ProgressStream_15, DefaultOptionTable_29, AllFlags_31, &Var_32, &Var_33, &OptionsSpecs_34, &LibGlobals_35);
  }
  if ((OptionsSpecs_34 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StatusMap0_39;
    MR_Word StatusMap_40;
    MR_Word VeryVerbose_41;
    MR_Box Cookie_42;
    MR_Word Succeeded0_43;
    MR_Word Cleanup_44;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word STATE_VARIABLE_Info_68_68;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_Info_70_70;
    MR_Word Var_73;
    MR_Box conv1_StatusMap_40;
    MR_Box conv4_STATE_VARIABLE_Info_46;

    StatusMap0_39 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_45);
    mercury__version_hash_table__fold_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__program_target_scalar_common_1[16]), StatusMap0_39, ((MR_Box) (StatusMap0_39)), &conv1_StatusMap_40);
    StatusMap_40 = ((MR_Word) (conv1_StatusMap_40));
    make__make_info__make_info_set_dep_file_status_map_3_p_0(StatusMap_40, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_67_67);
    make__make_info__make_info_set_option_args_3_p_0(OptionArgs_25, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_68_68);
    Var_69 = make__timestamp__init_target_file_timestamps_0_f_0();
    make__make_info__make_info_set_target_file_timestamps_3_p_0(Var_69, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_70_70);
    libs__globals__lookup_bool_option_3_p_0(LibGlobals_35, (MR_Integer) 76, &VeryVerbose_41);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_42);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_73, 0) = ((MR_Box) (&make__program_target_scalar_common_13[2]));
      MR_hl_field(0, Var_73, 1) = ((MR_Box) (make__program_target__install_library_grade_11_p_0_2));
      MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(0, Var_73, 3) = ((MR_Box) (ProgressStream_15));
      MR_hl_field(0, Var_73, 4) = ((MR_Box) (LibGlobals_35));
      MR_hl_field(0, Var_73, 5) = ((MR_Box) (LinkSucceeded0_12));
      MR_hl_field(0, Var_73, 6) = ((MR_Box) (ModuleName_13));
      MR_hl_field(0, Var_73, 7) = ((MR_Box) (AllModules_14));
      MR_hl_field(0, Var_73, 8) = ((MR_Box) (STATE_VARIABLE_Info_70_70));
      MR_hl_field(0, Var_73, 9) = ((MR_Box) (CleanAfter_22));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_73, &Succeeded0_43);
    {
      Cleanup_44 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_44, 0) = ((MR_Box) (&make__program_target_scalar_common_8[5]));
      MR_hl_field(0, Cleanup_44, 1) = ((MR_Box) (make__program_target__install_library_grade_11_p_0_3));
      MR_hl_field(0, Cleanup_44, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Cleanup_44, 3) = ((MR_Box) (ProgressStream_15));
      MR_hl_field(0, Cleanup_44, 4) = ((MR_Box) (LibGlobals_35));
      MR_hl_field(0, Cleanup_44, 5) = ((MR_Box) (CleanAfter_22));
      MR_hl_field(0, Cleanup_44, 6) = ((MR_Box) (ModuleName_13));
      MR_hl_field(0, Cleanup_44, 7) = ((MR_Box) (AllModules_14));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_41, Cookie_42, Cleanup_44, Succeeded0_43, Succeeded_18, ((MR_Box) (STATE_VARIABLE_Info_70_70)), &conv4_STATE_VARIABLE_Info_46);
    *STATE_VARIABLE_Info_46 = ((MR_Word) (conv4_STATE_VARIABLE_Info_46));
  }
  else
  {
    libs__handle_options__usage_errors_5_p_0(ProgressStream_15, Globals_16, OptionsSpecs_34);
    *Succeeded_18 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_0_45;
  }
}

void MR_CALL 
make__program_target__make_misc_target_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word HeadVar__3_3,
  MR_Word * Succeeded_15,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word MainModuleName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word TargetType_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word DefaultOptionTable_19;
  MR_Word DetectedGradeFlags_20;
  MR_Word OptionVariables_21;
  MR_Word EnvVarArgs_22;
  MR_Word OptionArgs_23;
  MR_Word MayBuild_25;

  libs__globals__get_default_options_2_p_0(Globals_12, &DefaultOptionTable_19);
  DetectedGradeFlags_20 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_0_29);
  OptionVariables_21 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_0_29);
  EnvVarArgs_22 = make__make_info__make_info_get_env_var_args_1_f_0(STATE_VARIABLE_Info_0_29);
  OptionArgs_23 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_29);
  make__build__setup_for_build_with_module_options_12_p_0(ProgressStream_11, DefaultOptionTable_19, (MR_Integer) 1, MainModuleName_13, DetectedGradeFlags_20, OptionVariables_21, EnvVarArgs_22, OptionArgs_23, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_25);
  if (((MR_tag((MR_Word) MayBuild_25)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_27 = ((MR_Word) ((MR_hl_field(1, MayBuild_25, (MR_Integer) 1))));

    make__program_target__make_misc_target_builder_11_p_0(ProgressStream_11, BuildGlobals_27, MainModuleName_13, TargetType_14, Succeeded_15, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
  }
  else
  {
    MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(0, MayBuild_25, (MR_Integer) 0))));
    MR_Word ErrorStream_28;

    libs__globals__get_error_output_stream_5_p_0(Globals_12, MainModuleName_13, &ErrorStream_28);
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_28, Globals_12, Specs_17);
    *Succeeded_15 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_17;

  make__program_target__make_module_realclean_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Info_21;

  make__program_target__make_module_clean_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TargetModulesCord_20;
  MR_Word conv0_STATE_VARIABLE_Info_22;

  make__program_target__get_non_nested_target_modules_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetModulesCord_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetModulesCord_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word MainModuleName_14,
  MR_Word TargetType_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word RebuildModuleDeps_20;
  MR_Word Succeeded0_21;
  MR_Word AllModulesSet_22;
  MR_Word AllModules_23;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word STATE_VARIABLE_Info_47_47;

  RebuildModuleDeps_20 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(STATE_VARIABLE_Info_0_37);
  if ((TargetType_15 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if ((TargetType_15 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
    make__make_info__make_info_set_rebuild_module_deps_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_44_44);
  else
    STATE_VARIABLE_Info_44_44 = STATE_VARIABLE_Info_0_37;
  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_12, Globals_13, MainModuleName_14, &Succeeded0_21, &AllModulesSet_22, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_45_45);
  make__make_info__make_info_set_rebuild_module_deps_3_p_0(RebuildModuleDeps_20, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_47_47);
  AllModules_23 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModulesSet_22);
  switch (MR_tag((MR_Word) TargetType_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_48;
            MR_Word STATE_VARIABLE_Info_49_49;
            MR_Box conv7_STATE_VARIABLE_Info_49_49;
            MR_Box conv6_STATE_VARIABLE_IO_50_50;

            *Succeeded_16 = (MR_Integer) 1;
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_10[5]));
              MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_2));
              MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_48, 3) = ((MR_Box) (ProgressStream_12));
              MR_hl_field(0, Var_48, 4) = ((MR_Box) (Globals_13));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, AllModules_23, ((MR_Box) (STATE_VARIABLE_Info_47_47)), &conv7_STATE_VARIABLE_Info_49_49, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_50_50);
            STATE_VARIABLE_Info_49_49 = ((MR_Word) (conv7_STATE_VARIABLE_Info_49_49));
            make__program_target__remove_init_files_8_p_0(ProgressStream_12, Globals_13, (MR_Integer) 76, MainModuleName_14, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_38);
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_54_54;
            MR_Word Var_56;
            MR_Box conv10_STATE_VARIABLE_Info_38;
            MR_Box conv9_STATE_VARIABLE_IO_42;

            *Succeeded_16 = (MR_Integer) 1;
            make__program_target__make_main_module_realclean_7_p_0(ProgressStream_12, Globals_13, MainModuleName_14, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_54_54);
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_10[5]));
              MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_3));
              MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_56, 3) = ((MR_Box) (ProgressStream_12));
              MR_hl_field(0, Var_56, 4) = ((MR_Box) (Globals_13));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, AllModules_23, ((MR_Box) (STATE_VARIABLE_Info_54_54)), &conv10_STATE_VARIABLE_Info_38, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_42);
            *STATE_VARIABLE_Info_38 = ((MR_Word) (conv10_STATE_VARIABLE_Info_38));
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0(Globals_13, MainModuleName_14, AllModules_23, Succeeded0_21, ProgressStream_12, Globals_13, Succeeded_16, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_38);
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntSucceeded_34;
            MR_Word STATE_VARIABLE_Info_82_82;

            make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModules_23, &IntSucceeded_34, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_82_82);
            switch (IntSucceeded_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_82_82;
                  *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
                }
                break;
              case (MR_Integer) 1:
                make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(MainModuleName_14, AllModules_23, Globals_13, ProgressStream_12, Globals_13, Succeeded_16, STATE_VARIABLE_Info_82_82, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word LibSucceeded_35;
            MR_Word Var_88;
            MR_Word STATE_VARIABLE_Info_89_89;

            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_88, 0) = ((MR_Box) (MainModuleName_14));
              MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            make__program_target__make_misc_target_10_p_0(ProgressStream_12, Globals_13, Var_88, &LibSucceeded_35, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_89_89, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            switch (LibSucceeded_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_89_89;
                }
                break;
              case (MR_Integer) 1:
                make__program_target__install_library_8_p_0(ProgressStream_12, Globals_13, MainModuleName_14, Succeeded_16, STATE_VARIABLE_Info_89_89, STATE_VARIABLE_Info_38);
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word KeepGoing_105;

            KeepGoing_105 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_47_47);
            succeeded = (Succeeded0_21 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (KeepGoing_105 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_16 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_47_47;
            }
            else
            {
              MR_Word XmlDocs_36;
              MR_Word Succeeded1_102;

              XmlDocs_36 = make__util__make_dependency_list_2_f_0(AllModules_23, (MR_Word) ((MR_Unsigned) 52U));
              make__build__foldl2_make_module_targets_10_p_0(KeepGoing_105, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_12, Globals_13, XmlDocs_36, &Succeeded1_102, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_38);
              *Succeeded_16 = libs__maybe_util__and_2_f_0(Succeeded0_21, Succeeded1_102);
            }
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleTargetType_24 = ((MR_Word) ((MR_hl_field(1, TargetType_15, (MR_Integer) 0))));
        MR_Word TargetModules_25;
        MR_Word KeepGoing_26;
        MR_Word STATE_VARIABLE_Info_59_59;

        succeeded = (ModuleTargetType_24 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          MR_Word TargetModulesCord_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Box conv4_TargetModulesCord_121;
          MR_Box conv3_STATE_VARIABLE_Info_59_59;
          MR_Box conv2_STATE_VARIABLE_IO_60_60;

          {
            Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_122, 0) = ((MR_Box) (&make__program_target_scalar_common_8[4]));
            MR_hl_field(0, Var_122, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_1));
            MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_122, 3) = ((MR_Box) (ProgressStream_12));
            MR_hl_field(0, Var_122, 4) = ((MR_Box) (Globals_13));
          }
          Var_123 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, AllModules_23, ((MR_Box) (Var_123)), &conv4_TargetModulesCord_121, ((MR_Box) (STATE_VARIABLE_Info_47_47)), &conv3_STATE_VARIABLE_Info_59_59, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_60_60);
          TargetModulesCord_121 = ((MR_Word) (conv4_TargetModulesCord_121));
          STATE_VARIABLE_Info_59_59 = ((MR_Word) (conv3_STATE_VARIABLE_Info_59_59));
          TargetModules_25 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TargetModulesCord_121);
        }
        else
        {
          TargetModules_25 = AllModules_23;
          STATE_VARIABLE_Info_59_59 = STATE_VARIABLE_Info_47_47;
        }
        KeepGoing_26 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_59_59);
        succeeded = (Succeeded0_21 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_26 == (MR_Integer) 0);
        if (succeeded)
        {
          *Succeeded_16 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_59_59;
        }
        else
        {
          MR_Word Succeeded1_27;
          MR_Word STATE_VARIABLE_Info_62_62;

          switch (MR_tag((MR_Word) ModuleTargetType_24)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ModuleTargetType_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 5:
                case (MR_Integer) 8:
                  {
                    Succeeded1_27 = (MR_Integer) 1;
                    STATE_VARIABLE_Info_62_62 = STATE_VARIABLE_Info_59_59;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 7:
                case (MR_Integer) 9:
                case (MR_Integer) 10:
                case (MR_Integer) 11:
                case (MR_Integer) 12:
                case (MR_Integer) 13:
                  make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_62_62);
                  break;
                case (MR_Integer) 2:
                  make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_62_62);
                  break;
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                  make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_62_62);
                  break;
                case (MR_Integer) 6:
                  make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_62_62);
                  break;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_62_62);
              break;
          }
          succeeded = (Succeeded1_27 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (KeepGoing_26 == (MR_Integer) 0);
          if (succeeded)
          {
            *Succeeded_16 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_62_62;
          }
          else
          {
            MR_Word Targets_32;
            MR_Word Succeeded2_33;
            MR_Word Var_77;

            Targets_32 = make__util__make_dependency_list_2_f_0(TargetModules_25, ModuleTargetType_24);
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0(KeepGoing_26, (MR_Word) ((MR_Unsigned) 0U), Globals_13, Targets_32, ProgressStream_12, Globals_13, &Succeeded2_33, STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Info_38);
            Var_77 = libs__maybe_util__and_2_f_0(Succeeded0_21, Succeeded1_27);
            *Succeeded_16 = libs__maybe_util__and_2_f_0(Var_77, Succeeded2_33);
          }
        }
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
      }
      break;
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  make__program_target__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word UseAnalysisCacheDir_18;

  make__program_target__should_we_use_analysis_cache_dir_6_p_0(ProgressStream_11, Globals_12, STATE_VARIABLE_Info_0_26, &UseAnalysisCacheDir_18);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Target_58;

            libs__globals__get_target_2_p_0(Var_57, &Target_58);
            switch (Target_58) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word StaticSucceeded_59;
                  MR_Word SharedLibsSupported_60;
                  MR_Word Var_62;
                  MR_Word STATE_VARIABLE_Info_30_63;
                  MR_Word STATE_VARIABLE_Specs_31_64;

                  {
                    Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_62, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(0, Var_62, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  }
                  make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_62, &StaticSucceeded_59, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_30_63, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_31_64);
                  backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Var_57, &SharedLibsSupported_60);
                  switch (StaticSucceeded_59) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *Succeeded_14 = (MR_Integer) 0;
                        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_30_63;
                        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_31_64;
                      }
                      break;
                    case (MR_Integer) 1:
                      switch (SharedLibsSupported_60) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_30_63;
                            *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_31_64;
                            backend_libs__compile_target_code__make_library_init_file_7_p_0(Var_57, ProgressStream_11, Var_55, Var_56, Succeeded_14);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_67;
                            MR_Word SharedLibsSucceeded_94;

                            {
                              Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_55));
                              MR_hl_field(0, Var_67, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            }
                            make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_67, &SharedLibsSucceeded_94, STATE_VARIABLE_Info_30_63, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_31_64, STATE_VARIABLE_Specs_29);
                            switch (SharedLibsSucceeded_94) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *Succeeded_14 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 1:
                                backend_libs__compile_target_code__make_library_init_file_7_p_0(Var_57, ProgressStream_11, Var_55, Var_56, Succeeded_14);
                                break;
                            }
                          }
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_70;

                  {
                    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(0, Var_70, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  }
                  make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_70, Succeeded_14, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_72;

                  {
                    Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(0, Var_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_72, Succeeded_14, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_14 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
            *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_19 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_18, (MR_Integer) 0))));
        MR_String CacheDirOption_20 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_18, (MR_Integer) 1))));
        MR_Word OrigOptionArgs_21;
        MR_Word VeryVerbose_22;
        MR_Box Cookie_23;
        MR_Word Succeeded1_24;
        MR_Word Cleanup_25;
        MR_Word Var_36;
        MR_Word STATE_VARIABLE_Info_37_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word STATE_VARIABLE_Info_43_43;
        MR_Word STATE_VARIABLE_Info_48_48;
        MR_Word Target_74;
        MR_String RemovingMsg_90;
        MR_Box conv1_STATE_VARIABLE_Info_48_48;
        MR_Word Var_91;

        OrigOptionArgs_21 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_26);
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (CacheDir_19));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (CacheDirOption_20));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
        }
        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_21, Var_38);
        make__make_info__make_info_set_option_args_3_p_0(Var_36, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_37_37);
        libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 76, &VeryVerbose_22);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_23);
        libs__globals__get_target_2_p_0(Var_57, &Target_74);
        switch (Target_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word StaticSucceeded_75;
              MR_Word SharedLibsSupported_76;
              MR_Word Var_78;
              MR_Word STATE_VARIABLE_Info_30_79;
              MR_Word STATE_VARIABLE_Specs_31_80;

              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_78, 0) = ((MR_Box) (Var_55));
                MR_hl_field(0, Var_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_78, &StaticSucceeded_75, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_30_79, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_31_80);
              backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Var_57, &SharedLibsSupported_76);
              switch (StaticSucceeded_75) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Succeeded1_24 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_30_79;
                    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_31_80;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (SharedLibsSupported_76) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_30_79;
                        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_31_80;
                        backend_libs__compile_target_code__make_library_init_file_7_p_0(Var_57, ProgressStream_11, Var_55, Var_56, &Succeeded1_24);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_83;
                        MR_Word SharedLibsSucceeded_96;

                        {
                          Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_55));
                          MR_hl_field(0, Var_83, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                        }
                        make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_83, &SharedLibsSucceeded_96, STATE_VARIABLE_Info_30_79, &STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Specs_31_80, STATE_VARIABLE_Specs_29);
                        switch (SharedLibsSucceeded_96) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            Succeeded1_24 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            backend_libs__compile_target_code__make_library_init_file_7_p_0(Var_57, ProgressStream_11, Var_55, Var_56, &Succeeded1_24);
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_86;

              {
                Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_86, 0) = ((MR_Box) (Var_55));
                MR_hl_field(0, Var_86, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
              }
              make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_86, &Succeeded1_24, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_88;

              {
                Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_55));
                MR_hl_field(0, Var_88, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
              }
              make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_88, &Succeeded1_24, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
            }
            break;
        }
        {
          Cleanup_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_25, 0) = ((MR_Box) (&make__program_target_scalar_common_10[4]));
          MR_hl_field(0, Cleanup_25, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0_1));
          MR_hl_field(0, Cleanup_25, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Cleanup_25, 3) = ((MR_Box) (ProgressStream_11));
          MR_hl_field(0, Cleanup_25, 4) = ((MR_Box) (Globals_12));
          MR_hl_field(0, Cleanup_25, 5) = ((MR_Box) (CacheDir_19));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_22, Cookie_23, Cleanup_25, Succeeded1_24, Succeeded_14, ((MR_Box) (STATE_VARIABLE_Info_43_43)), &conv1_STATE_VARIABLE_Info_48_48);
        STATE_VARIABLE_Info_48_48 = ((MR_Word) (conv1_STATE_VARIABLE_Info_48_48));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_12, (MR_String) "Removing", CacheDir_19, &RemovingMsg_90);
        make__util__maybe_write_msg_4_p_0(ProgressStream_11, RemovingMsg_90);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_19, &Var_91);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_21, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_27);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  make__program_target__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

void MR_CALL 
make__program_target__make_linked_target_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word * LinkedTargetSucceeded_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word FileType_19 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_13, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word ExtraOptions_20 = ((&make__program_target_vector_common_15[0 + FileType_19]))->make__program_target__vector_common_type_15_0__vct_15_f_0;
  MR_Word LibLinkages_21;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 700, &LibLinkages_21);
  switch (FileType_19) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "shared")), LibLinkages_21);
        succeeded = !(succeeded);
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "static")), LibLinkages_21);
        succeeded = !(succeeded);
      }
      break;
  }
  if (succeeded)
  {
    *LinkedTargetSucceeded_14 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word LibgradeCheckSpecs_22;

    libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_12, &LibgradeCheckSpecs_22);
    if ((LibgradeCheckSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UseAnalysisCacheDir_49;

      make__program_target__should_we_use_analysis_cache_dir_6_p_0(ProgressStream_11, Globals_12, STATE_VARIABLE_Info_0_25, &UseAnalysisCacheDir_49);
      switch (MR_tag((MR_Word) UseAnalysisCacheDir_49)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(UseAnalysisCacheDir_49)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              make__program_target__make_linked_target_1_11_p_0(Globals_12, LinkedTargetFile_13, ExtraOptions_20, ProgressStream_11, LinkedTargetSucceeded_14, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
              break;
            case (MR_Integer) 1:
              {
                *LinkedTargetSucceeded_14 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
                *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String CacheDir_50 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_49, (MR_Integer) 0))));
            MR_String CacheDirOption_51 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_49, (MR_Integer) 1))));
            MR_Word OrigOptionArgs_52;
            MR_Word VeryVerbose_53;
            MR_Box Cookie_54;
            MR_Word Succeeded1_55;
            MR_Word Cleanup_56;
            MR_Word Var_58;
            MR_Word STATE_VARIABLE_Info_37_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word STATE_VARIABLE_Info_43_65;
            MR_Word STATE_VARIABLE_Info_46_67;
            MR_Word STATE_VARIABLE_Info_48_69;
            MR_Box conv1_STATE_VARIABLE_Info_46_67;

            OrigOptionArgs_52 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_25);
            {
              Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_61, 0) = ((MR_Box) (CacheDir_50));
              MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_60, 0) = ((MR_Box) (CacheDirOption_51));
              MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
            }
            Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_52, Var_60);
            make__make_info__make_info_set_option_args_3_p_0(Var_58, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_37_59);
            libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 76, &VeryVerbose_53);
            libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_54);
            make__program_target__make_linked_target_1_11_p_0(Globals_12, LinkedTargetFile_13, ExtraOptions_20, ProgressStream_11, &Succeeded1_55, STATE_VARIABLE_Info_37_59, &STATE_VARIABLE_Info_43_65, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
            {
              Cleanup_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Cleanup_56, 0) = ((MR_Box) (&make__program_target_scalar_common_10[4]));
              MR_hl_field(0, Cleanup_56, 1) = ((MR_Box) (make__program_target__make_linked_target_10_p_0_1));
              MR_hl_field(0, Cleanup_56, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Cleanup_56, 3) = ((MR_Box) (ProgressStream_11));
              MR_hl_field(0, Cleanup_56, 4) = ((MR_Box) (Globals_12));
              MR_hl_field(0, Cleanup_56, 5) = ((MR_Box) (CacheDir_50));
            }
            libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_53, Cookie_54, Cleanup_56, Succeeded1_55, LinkedTargetSucceeded_14, ((MR_Box) (STATE_VARIABLE_Info_43_65)), &conv1_STATE_VARIABLE_Info_46_67);
            STATE_VARIABLE_Info_46_67 = ((MR_Word) (conv1_STATE_VARIABLE_Info_46_67));
            make__program_target__remove_cache_dir_7_p_0(ProgressStream_11, Globals_12, CacheDir_50, STATE_VARIABLE_Info_46_67, &STATE_VARIABLE_Info_48_69);
            make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_52, STATE_VARIABLE_Info_48_69, STATE_VARIABLE_Info_26);
          }
          break;
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_22, STATE_VARIABLE_Specs_0_27);
      *LinkedTargetSucceeded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_11_p_0(
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word ExtraOptions_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  MR_Word MainModuleName_20 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_13, (MR_Integer) 0))));
  MR_Word IntermodAnalysis_22;
  MR_Word IntermodAnalysisSucceeded_23;
  MR_Word STATE_VARIABLE_Info_40_40;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 524, &IntermodAnalysis_22);
  switch (IntermodAnalysis_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodAnalysisSucceeded_23 = (MR_Integer) 1;
        STATE_VARIABLE_Info_40_40 = STATE_VARIABLE_Info_0_32;
        *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
      }
      break;
    case (MR_Integer) 1:
      make__program_target__make_misc_target_builder_11_p_0(ProgressStream_15, Globals_12, MainModuleName_20, (MR_Word) ((MR_Unsigned) 8U), &IntermodAnalysisSucceeded_23, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
      break;
  }
  switch (IntermodAnalysisSucceeded_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_16 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_40_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DefaultOptionTable_24;
        MR_Word DetectedGradeFlags_25;
        MR_Word OptionVariables_26;
        MR_Word EnvVarArgs_27;
        MR_Word OptionArgs_28;
        MR_Word MayBuild_29;

        libs__globals__get_default_options_2_p_0(Globals_12, &DefaultOptionTable_24);
        DetectedGradeFlags_25 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_40_40);
        OptionVariables_26 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_40_40);
        EnvVarArgs_27 = make__make_info__make_info_get_env_var_args_1_f_0(STATE_VARIABLE_Info_40_40);
        OptionArgs_28 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_40_40);
        make__build__setup_for_build_with_module_options_12_p_0(ProgressStream_15, DefaultOptionTable_24, (MR_Integer) 1, MainModuleName_20, DetectedGradeFlags_25, OptionVariables_26, EnvVarArgs_27, OptionArgs_28, ExtraOptions_14, &MayBuild_29);
        if (((MR_tag((MR_Word) MayBuild_29)) == (MR_Integer) 1))
        {
          MR_Word BuildGlobals_31 = ((MR_Word) ((MR_hl_field(1, MayBuild_29, (MR_Integer) 1))));

          make__program_target__make_linked_target_2_8_p_0(ProgressStream_15, BuildGlobals_31, LinkedTargetFile_13, Succeeded_16, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_33);
        }
        else
        {
          MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(0, MayBuild_29, (MR_Integer) 0))));

          parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_15, Globals_12, Specs_18);
          *Succeeded_16 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_40_40;
        }
      }
      break;
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String CacheDir_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_String RemovingMsg_13;
  MR_Word Var_14;

  make__util__verbose_make_two_part_msg_4_p_0(Globals_9, (MR_String) "Removing", CacheDir_10, &RemovingMsg_13);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, RemovingMsg_13);
  mercury__io__file__remove_file_recursively_4_p_0(CacheDir_10, &Var_14);
  *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  make__program_target__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Var_50,
  MR_Word Var_51,
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_Word UseAnalysisCacheDir_15;

  make__program_target__should_we_use_analysis_cache_dir_6_p_0(ProgressStream_9, Globals_10, STATE_VARIABLE_Info_0_23, &UseAnalysisCacheDir_15);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__build__foldl2_make_module_targets_maybe_parallel_build2_10_p_0(Var_48, Var_49, Var_50, Var_51, ProgressStream_9, Succeeded_12, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_12 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_16 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_15, (MR_Integer) 0))));
        MR_String CacheDirOption_17 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_15, (MR_Integer) 1))));
        MR_Word OrigOptionArgs_18;
        MR_Word VeryVerbose_19;
        MR_Box Cookie_20;
        MR_Word Succeeded1_21;
        MR_Word Cleanup_22;
        MR_Word Var_30;
        MR_Word STATE_VARIABLE_Info_31_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word STATE_VARIABLE_Info_37_37;
        MR_Word STATE_VARIABLE_Info_41_41;
        MR_String RemovingMsg_52;
        MR_Box conv1_STATE_VARIABLE_Info_41_41;
        MR_Word Var_53;

        OrigOptionArgs_18 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_23);
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (CacheDir_16));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (CacheDirOption_17));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
        }
        Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_18, Var_32);
        make__make_info__make_info_set_option_args_3_p_0(Var_30, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_31_31);
        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 76, &VeryVerbose_19);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_20);
        make__build__foldl2_make_module_targets_maybe_parallel_build2_10_p_0(Var_48, Var_49, Var_50, Var_51, ProgressStream_9, &Succeeded1_21, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_37_37);
        {
          Cleanup_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_22, 0) = ((MR_Box) (&make__program_target_scalar_common_10[4]));
          MR_hl_field(0, Cleanup_22, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0_1));
          MR_hl_field(0, Cleanup_22, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Cleanup_22, 3) = ((MR_Box) (ProgressStream_9));
          MR_hl_field(0, Cleanup_22, 4) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Cleanup_22, 5) = ((MR_Box) (CacheDir_16));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_19, Cookie_20, Cleanup_22, Succeeded1_21, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_37_37)), &conv1_STATE_VARIABLE_Info_41_41);
        STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv1_STATE_VARIABLE_Info_41_41));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_10, (MR_String) "Removing", CacheDir_16, &RemovingMsg_52);
        make__util__maybe_write_msg_4_p_0(ProgressStream_9, RemovingMsg_52);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_16, &Var_53);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_18, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_24);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  make__program_target__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Var_50,
  MR_Word Var_51,
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_Word UseAnalysisCacheDir_15;

  make__program_target__should_we_use_analysis_cache_dir_6_p_0(ProgressStream_9, Globals_10, STATE_VARIABLE_Info_0_23, &UseAnalysisCacheDir_15);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__program_target__build_analysis_files_10_p_0(Var_48, Var_49, Var_50, Var_51, ProgressStream_9, Succeeded_12, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_12 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_16 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_15, (MR_Integer) 0))));
        MR_String CacheDirOption_17 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_15, (MR_Integer) 1))));
        MR_Word OrigOptionArgs_18;
        MR_Word VeryVerbose_19;
        MR_Box Cookie_20;
        MR_Word Succeeded1_21;
        MR_Word Cleanup_22;
        MR_Word Var_30;
        MR_Word STATE_VARIABLE_Info_31_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word STATE_VARIABLE_Info_37_37;
        MR_Word STATE_VARIABLE_Info_41_41;
        MR_String RemovingMsg_52;
        MR_Box conv1_STATE_VARIABLE_Info_41_41;
        MR_Word Var_53;

        OrigOptionArgs_18 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_23);
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (CacheDir_16));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (CacheDirOption_17));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
        }
        Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_18, Var_32);
        make__make_info__make_info_set_option_args_3_p_0(Var_30, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_31_31);
        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 76, &VeryVerbose_19);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_20);
        make__program_target__build_analysis_files_10_p_0(Var_48, Var_49, Var_50, Var_51, ProgressStream_9, &Succeeded1_21, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_37_37);
        {
          Cleanup_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_22, 0) = ((MR_Box) (&make__program_target_scalar_common_10[4]));
          MR_hl_field(0, Cleanup_22, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0_1));
          MR_hl_field(0, Cleanup_22, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Cleanup_22, 3) = ((MR_Box) (ProgressStream_9));
          MR_hl_field(0, Cleanup_22, 4) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Cleanup_22, 5) = ((MR_Box) (CacheDir_16));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_19, Cookie_20, Cleanup_22, Succeeded1_21, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_37_37)), &conv1_STATE_VARIABLE_Info_41_41);
        STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv1_STATE_VARIABLE_Info_41_41));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_10, (MR_String) "Removing", CacheDir_16, &RemovingMsg_52);
        make__util__maybe_write_msg_4_p_0(ProgressStream_9, RemovingMsg_52);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_16, &Var_53);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_18, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_24);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Opts_6;

  make__program_target__make_local_module_id_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_Opts_6);
  *wrapper_arg_3 = ((MR_Box) (conv6_Opts_6));
}

static MR_bool MR_CALL 
make__program_target__build_analysis_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__program_target__IntroducedFrom__pred__build_analysis_files_1__1391__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_26;

  make__program_target__IntroducedFrom__pred__get_reverse_ordered_modules__1499__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_26));
}

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_IntDepsGraph_13;
  MR_Word conv1_STATE_VARIABLE_ImplDepsGraph_15;

  make__program_target__add_module_relations_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IntDepsGraph_13, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ImplDepsGraph_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IntDepsGraph_13));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ImplDepsGraph_15));
}

static MR_Box MR_CALL 
make__program_target__build_analysis_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleDepInfo_6;

  conv0_ModuleDepInfo_6 = make__program_target__lookup_module_dep_info_in_maybe_map_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleDepInfo_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0(
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_Word Succeeded0_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word KeepGoing_19;

  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_21);
  succeeded = (Succeeded0_14 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word Succeeded1_20;
    MR_Word STATE_VARIABLE_Info_26_26;

    make__program_target__build_int_opt_files_9_p_0(ProgressStream_15, Globals_11, (MR_Integer) 3, AllModules_13, &Succeeded1_20, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_26_26);
    succeeded = (Succeeded1_20 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_16 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_26_26;
    }
    else
    {
      MR_Word TargetModules1_29;
      MR_Word TargetModules_30;
      MR_Word Succeeded0_31;
      MR_Word LocalModulesOpts_32;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_Info_31_38;
      MR_Word ImpDepsGraph_49;
      MR_Word SccSets_50;
      MR_Word SccLists_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word LocalModules_61;
      MR_Box conv4__IntDepsGraph_48;
      MR_Box conv3_ImpDepsGraph_49;
      MR_Box conv7_LocalModulesOpts_32;

      Var_36 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_26_26);
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__program_target__build_analysis_files_10_p_0_1));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (Var_36));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (&make__program_target_scalar_common_14[1]));
        MR_hl_field(0, Var_52, 1) = ((MR_Box) (make__program_target__build_analysis_files_10_p_0_2));
        MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_52, 3) = ((MR_Box) (Var_55));
      }
      Var_53 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      Var_54 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[4]), (MR_Word) (&make__program_target_scalar_common_2[4]), Var_52, AllModules_13, ((MR_Box) (Var_53)), &conv4__IntDepsGraph_48, ((MR_Box) (Var_54)), &conv3_ImpDepsGraph_49);
      ImpDepsGraph_49 = ((MR_Word) (conv3_ImpDepsGraph_49));
      SccSets_50 = mercury__digraph__return_sccs_in_to_from_order_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_49);
      mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__program_target_scalar_common_2[5]), (MR_Word) (&make__program_target_scalar_common_1[14]), SccSets_50, &SccLists_51);
      mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SccLists_51, &TargetModules1_29);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (&make__program_target_scalar_common_5[6]));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (make__program_target__build_analysis_files_10_p_0_4));
        MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_37, 3) = ((MR_Box) (AllModules_13));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, TargetModules1_29, &TargetModules_30);
      make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_15, Globals_11, MainModuleName_12, &Succeeded0_31, &LocalModules_61, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_31_38);
      mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[2]), (MR_Word) (&make__program_target_scalar_common_1[15]), LocalModules_61, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_LocalModulesOpts_32);
      LocalModulesOpts_32 = ((MR_Word) (conv7_LocalModulesOpts_32));
      switch (Succeeded0_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_16 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_31_38;
          }
          break;
        case (MR_Integer) 1:
          make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(ProgressStream_15, Globals_11, TargetModules_30, LocalModulesOpts_32, Succeeded0_31, Succeeded_16, STATE_VARIABLE_Info_31_38, STATE_VARIABLE_Info_22);
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_10;

  make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_10;

  make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetModules_15,
  MR_Word LocalModulesOpts_16,
  MR_Word Succeeded0_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word KeepGoing_21;
    MR_Word Registries_22;
    MR_Word Succeeded1_23;
    MR_Integer ReanalysisPasses_24;
    MR_Word ReanalyseSuboptimal_25;
    MR_Word InvalidModules_26;
    MR_Word SuboptimalModules_27;
    MR_Word STATE_VARIABLE_Info_34_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    KeepGoing_21 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_29);
    Registries_22 = make__util__make_dependency_list_2_f_0(TargetModules_15, (MR_Word) ((MR_Unsigned) 28U));
    make__build__foldl2_make_module_targets_10_p_0(KeepGoing_21, LocalModulesOpts_16, ProgressStream_12, Globals_13, Registries_22, &Succeeded1_23, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_34_34);
    ReanalysisPasses_24 = make__make_info__make_info_get_reanalysis_passes_1_f_0(STATE_VARIABLE_Info_34_34);
    succeeded = (ReanalysisPasses_24 > (MR_Integer) 1);
    if (succeeded)
      ReanalyseSuboptimal_25 = (MR_Integer) 1;
    else
      ReanalyseSuboptimal_25 = (MR_Integer) 0;
    make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_25, Globals_13, TargetModules_15, &InvalidModules_26, &SuboptimalModules_27);
    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidModules_26);
    if (succeeded)
    {
      MR_String ReanalysingMsg_28;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Box conv1_STATE_VARIABLE_Info_40_40;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_29;

      make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_13, &ReanalysingMsg_28);
      make__util__maybe_write_msg_4_p_0(ProgressStream_12, ReanalysingMsg_28);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_1[12]), InvalidModules_26, ((MR_Box) (STATE_VARIABLE_Info_34_34)), &conv1_STATE_VARIABLE_Info_40_40);
      STATE_VARIABLE_Info_40_40 = ((MR_Word) (conv1_STATE_VARIABLE_Info_40_40));
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_40_40;
      STATE_VARIABLE_Info_0_29 = next_value_of_STATE_VARIABLE_Info_0_29;
      continue;
    }
    else
    {
      succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SuboptimalModules_27);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_44_44;
        MR_Integer Var_45;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_String ReanalysingMsg_51;
        MR_Box conv3_STATE_VARIABLE_Info_44_44;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_29;

        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_1[13]), SuboptimalModules_27, ((MR_Box) (STATE_VARIABLE_Info_34_34)), &conv3_STATE_VARIABLE_Info_44_44);
        STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv3_STATE_VARIABLE_Info_44_44));
        Var_45 = (MR_Integer) ((MR_Unsigned) ReanalysisPasses_24 - (MR_Unsigned) 1);
        make__make_info__make_info_set_reanalysis_passes_3_p_0(Var_45, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
        make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_13, &ReanalysingMsg_51);
        make__util__maybe_write_msg_4_p_0(ProgressStream_12, ReanalysingMsg_51);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_46_46;
        STATE_VARIABLE_Info_0_29 = next_value_of_STATE_VARIABLE_Info_0_29;
        continue;
      }
      else
      {
        *Succeeded_18 = libs__maybe_util__and_2_f_0(Succeeded0_17, Succeeded1_23);
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_34_34;
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Module_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modules_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ModuleStatus_20;

      analysis__operations__do_read_module_overall_status_6_p_0((MR_Word) (&make__program_target_scalar_common_2[6]), ((MR_Box) ((MR_Integer) 0)), Globals_2, Module_15, &ModuleStatus_20);
      switch (ModuleStatus_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InvalidModules0_22;

            make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, &InvalidModules0_22, HeadVar__5_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Module_15));
              MR_hl_field(1, base, 1) = ((MR_Box) (InvalidModules0_22));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__3_3 = Modules_16;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SuboptimalModules0_21;

            make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, HeadVar__4_4, &SuboptimalModules0_21);
            switch (ReanalyseSuboptimal_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__5_5 = SuboptimalModules0_21;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Module_15));
                  MR_hl_field(1, base, 1) = ((MR_Box) (SuboptimalModules0_21));
                }
                break;
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__should_we_use_analysis_cache_dir_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word Info_9,
  MR_Word * UseAnalysisCacheDir_10)
{
  MR_bool succeeded;
  MR_Word IntermodAnalysis_12;
  MR_Word Caching_13;
  MR_String CacheDir0_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 524, &IntermodAnalysis_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 526, &Caching_13);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 728, &CacheDir0_14);
  succeeded = (IntermodAnalysis_12 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Caching_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (strcmp(CacheDir0_14, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (!(succeeded))
      {
        MR_Word Var_23;

        Var_23 = make__make_info__make_info_get_option_args_1_f_0(Info_9);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_23);
      }
    }
  }
  if (succeeded)
    *UseAnalysisCacheDir_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String CacheDir_17;
    MR_String CreatingMsg_25;
    MR_Word MakeRes_26;

    parse_tree__file_names__analysis_cache_dir_name_2_p_0(Globals_8, &CacheDir_17);
    make__util__verbose_make_two_part_msg_4_p_0(Globals_8, (MR_String) "Creating", CacheDir_17, &CreatingMsg_25);
    make__util__maybe_write_msg_4_p_0(ProgressStream_7, CreatingMsg_25);
    mercury__dir__make_directory_4_p_0(CacheDir_17, &MakeRes_26);
    if ((MakeRes_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *UseAnalysisCacheDir_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CacheDir_17));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
      }
    else
    {
      MR_Word Error_27 = ((MR_Word) ((MR_hl_field(1, MakeRes_26, (MR_Integer) 0))));
      MR_String Var_36;

      Var_36 = mercury__io__error_message_1_f_0(Error_27);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error: making directory ");
      mercury__io__write_string_4_p_0(ProgressStream_7, CacheDir_17);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
      mercury__io__write_string_4_p_0(ProgressStream_7, Var_36);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
      *UseAnalysisCacheDir_10 = (MR_Word) ((MR_Unsigned) 4U);
    }
  }
}

static void MR_CALL 
make__program_target__remove_init_files_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Verbose_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word STATE_VARIABLE_Info_20_20;
  MR_Word STATE_VARIABLE_Info_24_24;

  make__util__remove_module_file_for_make_9_p_0(ProgressStream_9, Globals_10, Verbose_11, ModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[45])), STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_20_20);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_9, Globals_10, Verbose_11, ModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[46])), STATE_VARIABLE_Info_20_20, &STATE_VARIABLE_Info_24_24);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_9, Globals_10, Verbose_11, ModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[47])), STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
make__program_target__make_main_module_realclean_7_p_0_2(
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
make__program_target__make_main_module_realclean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__4_4;
  MR_String conv0_HeadVar__5_5;

  backend_libs__compile_target_code__linked_target_file_name_full_curdir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_main_module_realclean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_String Part1_13;
  MR_String CleaningMsg_14;
  MR_Word FileNames_16;
  MR_Word ThisDirFileNames_17;
  MR_String FullInitFileName_18;
  MR_String ThisDirInitFileName_19;
  MR_Word FilesToRemove_20;
  MR_String Var_28;
  MR_Word Var_45;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_Info_55_55;
  MR_String Var_74;
  MR_Word STATE_VARIABLE_Info_20_77;
  MR_Word STATE_VARIABLE_Info_24_81;
  MR_Box conv2_STATE_VARIABLE_IO_46_46;
  MR_Box conv5_STATE_VARIABLE_Info_55_55;
  MR_Box conv4_STATE_VARIABLE_IO_56_56;

  Var_28 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
  Var_74 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\'.");
  Part1_13 = mercury__string__f_43_43_2_f_0((MR_String) "Removing executable and library files for \140", Var_74);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_13, &CleaningMsg_14);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, CleaningMsg_14);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__program_target_scalar_common_10[3]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_7_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (ModuleName_10));
  }
  mercury__list__map2_foldl_6_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_2[44])), &FileNames_16, &ThisDirFileNames_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_46_46);
  parse_tree__file_names__module_name_to_file_name_full_curdir_6_p_0(Globals_9, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/7", (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[5])), ModuleName_10, &FullInitFileName_18, &ThisDirInitFileName_19);
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (ThisDirInitFileName_19));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (FullInitFileName_18));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_17, Var_51);
  FilesToRemove_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_16, Var_50);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_7[4]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_7_p_0_2));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_54, 5) = ((MR_Box) ((MR_Integer) 76));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, FilesToRemove_20, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv5_STATE_VARIABLE_Info_55_55, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_56_56);
  STATE_VARIABLE_Info_55_55 = ((MR_Word) (conv5_STATE_VARIABLE_Info_55_55));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[45])), STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_20_77);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[46])), STATE_VARIABLE_Info_20_77, &STATE_VARIABLE_Info_24_81);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 76, ModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[47])), STATE_VARIABLE_Info_24_81, STATE_VARIABLE_Info_22);
}

static void MR_CALL 
make__program_target__install_library_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Succeeded_17;

  make__program_target__install_extra_header_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Succeeded_17);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Succeeded_17));
}

static void MR_CALL 
make__program_target__install_library_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_14;
  MR_Word conv4_STATE_VARIABLE_Info_33;

  make__program_target__install_ints_and_headers_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_Succeeded_14, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Info_33);
  *wrapper_arg_2 = ((MR_Box) (conv5_Succeeded_14));
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Info_33));
}

static void MR_CALL 
make__program_target__install_library_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_67;

  make__program_target__IntroducedFrom__pred__make_install_dirs__2155__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_67);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_67));
}

static void MR_CALL 
make__program_target__install_library_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_10;

  make__program_target__make_install_symlink_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_10));
}

static void MR_CALL 
make__program_target__install_library_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word DepsSucceeded_15;
  MR_Word AllModules0_16;
  MR_Word AllModules_17;
  MR_Word DirSucceeded_18;
  MR_Word LinkSucceeded_19;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_String Prefix_54;
  MR_String LibDir_55;
  MR_Word Result1_56;
  MR_Word Result2_57;
  MR_String IntsSubdir_58;
  MR_Word Result3_59;
  MR_Word Results0_60;
  MR_Word Subdirs_61;
  MR_Word LinkResults_62;
  MR_Word Results_63;
  MR_String Var_66;
  MR_String Var_69;
  MR_String Var_72;
  MR_String Var_75;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Box conv1_STATE_VARIABLE_IO_63_83;

  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_9, Globals_10, MainModuleName_11, &DepsSucceeded_15, &AllModules0_16, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_31_31);
  AllModules_17 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules0_16);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 689, &Prefix_54);
  Var_66 = mercury__dir__f_slash_2_f_0(Prefix_54, (MR_String) "lib");
  LibDir_55 = mercury__dir__f_slash_2_f_0(Var_66, (MR_String) "mercury");
  Var_69 = mercury__dir__f_slash_2_f_0(LibDir_55, (MR_String) "inc");
  mercury__dir__make_directory_4_p_0(Var_69, &Result1_56);
  Var_72 = mercury__dir__f_slash_2_f_0(LibDir_55, (MR_String) "modules");
  mercury__dir__make_directory_4_p_0(Var_72, &Result2_57);
  Var_75 = mercury__dir__f_slash_2_f_0(LibDir_55, (MR_String) "ints");
  IntsSubdir_58 = mercury__dir__f_slash_2_f_0(Var_75, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(IntsSubdir_58, &Result3_59);
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Result3_59));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Result2_57));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    Results0_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Results0_60, 0) = ((MR_Box) (Result1_56));
    MR_hl_field(1, Results0_60, 1) = ((MR_Box) (Var_79));
  }
  Subdirs_61 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_2[34]));
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&make__program_target_scalar_common_14[0]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (make__program_target__install_library_8_p_0_1));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (IntsSubdir_58));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Subdirs_61, &LinkResults_62, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_63_83);
  LinkSucceeded_19 = libs__maybe_util__and_list_1_f_0(LinkResults_62);
  switch (LinkSucceeded_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MkDirResults_64;
        MR_Word Var_84;
        MR_Box conv3_STATE_VARIABLE_IO_65_85;

        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) (make__program_target__install_library_8_p_0_2));
          MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_84, 3) = ((MR_Box) (IntsSubdir_58));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Subdirs_61, &MkDirResults_64, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_65_85);
        Results_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), Results0_60, MkDirResults_64);
      }
      break;
    case (MR_Integer) 1:
      Results_63 = Results0_60;
      break;
  }
  make__program_target__print_mkdir_errors_5_p_0(ProgressStream_9, Results_63, &DirSucceeded_18);
  succeeded = (DepsSucceeded_15 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DirSucceeded_18 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word IntsSucceeded_20;
    MR_Word ExtraHdrsSucceeded_21;
    MR_String Grade_22;
    MR_Word GradeSucceeded_23;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word ExtraHdrs_90;
    MR_String Prefix_91;
    MR_String IncDir_92;
    MR_String Var_95;
    MR_String Var_96;
    MR_Word Var_100;
    MR_Box conv7_STATE_VARIABLE_Info_35_35;
    MR_Box conv6_STATE_VARIABLE_IO_36_36;
    MR_Box conv10_ExtraHdrsSucceeded_21;
    MR_Box conv9_STATE_VARIABLE_IO_37_37;
    MR_Word Var_40;
    MR_Word Var_41;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__program_target__install_library_8_p_0_3));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_34, 5) = ((MR_Box) (LinkSucceeded_19));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, AllModules_17, &IntsSucceeded_20, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv7_STATE_VARIABLE_Info_35_35, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_36_36);
    STATE_VARIABLE_Info_35_35 = ((MR_Word) (conv7_STATE_VARIABLE_Info_35_35));
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 714, &ExtraHdrs_90);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 689, &Prefix_91);
    Var_96 = mercury__dir__f_slash_2_f_0(Prefix_91, (MR_String) "lib");
    Var_95 = mercury__dir__f_slash_2_f_0(Var_96, (MR_String) "mercury");
    IncDir_92 = mercury__dir__f_slash_2_f_0(Var_95, (MR_String) "inc");
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_100, 0) = ((MR_Box) (&make__program_target_scalar_common_7[3]));
      MR_hl_field(0, Var_100, 1) = ((MR_Box) (make__program_target__install_library_8_p_0_4));
      MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_100, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_100, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_100, 5) = ((MR_Box) (IncDir_92));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_100, ExtraHdrs_90, ((MR_Box) ((MR_Integer) 1)), &conv10_ExtraHdrsSucceeded_21, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_37_37);
    ExtraHdrsSucceeded_21 = ((MR_Word) (conv10_ExtraHdrsSucceeded_21));
    libs__compute_grade__grade_directory_component_2_p_0(Globals_10, &Grade_22);
    make__program_target__install_library_grade_files_11_p_0(ProgressStream_9, Globals_10, LinkSucceeded_19, Grade_22, MainModuleName_11, AllModules_17, &GradeSucceeded_23, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_38_38);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (ExtraHdrsSucceeded_21));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (IntsSucceeded_20));
    }
    Var_40 = libs__maybe_util__and_list_1_f_0(Var_41);
    succeeded = (Var_40 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (GradeSucceeded_23 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word KeepGoing_24;
      MR_Word LibGrades0_25;
      MR_Word LibGrades_26;

      KeepGoing_24 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_38_38);
      libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 697, &LibGrades0_25);
      LibGrades_26 = mercury__list__delete_all_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibGrades0_25, ((MR_Box) (Grade_22)));
      make__build__foldl2_install_library_grades_12_p_0(KeepGoing_24, LinkSucceeded_19, MainModuleName_11, AllModules_17, ProgressStream_9, Globals_10, LibGrades_26, Succeeded_12, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_28);
    }
    else
    {
      *Succeeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_38_38;
    }
  }
  else
  {
    *Succeeded_12 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_31_31;
  }
}

static void MR_CALL 
make__program_target__install_library_grade_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Succeeded_16;
  MR_Word conv0_STATE_VARIABLE_Info_36;

  make__program_target__install_grade_ints_and_headers_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Succeeded_16, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_36);
  *wrapper_arg_2 = ((MR_Box) (conv1_Succeeded_16));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_36));
}

static void MR_CALL 
make__program_target__install_library_grade_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word LinkSucceeded0_14,
  MR_String GradeDir_15,
  MR_Word ModuleName_16,
  MR_Word AllModules_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;
  MR_Word DirResult_21;
  MR_Word LinkSucceeded1_22;
  MR_Word LinkSucceeded_23;

  make__program_target__make_grade_install_dirs_7_p_0(ProgressStream_12, Globals_13, GradeDir_15, &DirResult_21, &LinkSucceeded1_22);
  LinkSucceeded_23 = libs__maybe_util__and_2_f_0(LinkSucceeded0_14, LinkSucceeded1_22);
  switch (DirResult_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_18 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LibFileName_24;
        MR_String SharedLibFileName_25;
        MR_String DllFileName_26;
        MR_String JarFileName_27;
        MR_String Prefix_28;
        MR_Word LibsSucceeded_30;
        MR_Word InitSucceeded_31;
        MR_Word IntsHeadersSucceeded_34;
        MR_Word Var_76;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Box conv3_STATE_VARIABLE_Info_36;
        MR_Box conv2_STATE_VARIABLE_IO_38;

        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_13, ModuleName_16, (MR_Integer) 1, &LibFileName_24);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_13, ModuleName_16, (MR_Integer) 2, &SharedLibFileName_25);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_13, ModuleName_16, (MR_Integer) 4, &DllFileName_26);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_13, ModuleName_16, (MR_Integer) 6, &JarFileName_27);
        libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 689, &Prefix_28);
        succeeded = mercury__string__prefix_2_p_0(GradeDir_15, (MR_String) "csharp");
        if (succeeded)
        {
          MR_String GradeLibDir_29;
          MR_String Var_50;
          MR_String Var_51;
          MR_String Var_52;
          MR_String InstallMsg_93;

          Var_52 = mercury__dir__f_slash_2_f_0(Prefix_28, (MR_String) "lib");
          Var_51 = mercury__dir__f_slash_2_f_0(Var_52, (MR_String) "mercury");
          Var_50 = mercury__dir__f_slash_2_f_0(Var_51, (MR_String) "lib");
          GradeLibDir_29 = mercury__dir__f_slash_2_f_0(Var_50, GradeDir_15);
          make__util__verbose_make_four_part_msg_6_p_0(Globals_13, (MR_String) "Installing file", DllFileName_26, (MR_String) "in", GradeLibDir_29, &InstallMsg_93);
          make__util__maybe_write_msg_4_p_0(ProgressStream_12, InstallMsg_93);
          libs__copy_util__copy_file_to_directory_7_p_0(Globals_13, ProgressStream_12, DllFileName_26, GradeLibDir_29, &LibsSucceeded_30);
          InitSucceeded_31 = (MR_Integer) 1;
        }
        else
        {
          succeeded = mercury__string__prefix_2_p_0(GradeDir_15, (MR_String) "java");
          if (succeeded)
          {
            MR_String Var_58;
            MR_String Var_59;
            MR_String Var_60;
            MR_String GradeLibDir_81;
            MR_String InstallMsg_97;

            Var_60 = mercury__dir__f_slash_2_f_0(Prefix_28, (MR_String) "lib");
            Var_59 = mercury__dir__f_slash_2_f_0(Var_60, (MR_String) "mercury");
            Var_58 = mercury__dir__f_slash_2_f_0(Var_59, (MR_String) "lib");
            GradeLibDir_81 = mercury__dir__f_slash_2_f_0(Var_58, GradeDir_15);
            make__util__verbose_make_four_part_msg_6_p_0(Globals_13, (MR_String) "Installing file", JarFileName_27, (MR_String) "in", GradeLibDir_81, &InstallMsg_97);
            make__util__maybe_write_msg_4_p_0(ProgressStream_12, InstallMsg_97);
            libs__copy_util__copy_file_to_directory_7_p_0(Globals_13, ProgressStream_12, JarFileName_27, GradeLibDir_81, &LibsSucceeded_30);
            InitSucceeded_31 = (MR_Integer) 1;
          }
          else
          {
            MR_Word LibSucceeded0_32;
            MR_String Var_65;
            MR_String Var_66;
            MR_String Var_67;
            MR_String GradeLibDir_82;

            Var_67 = mercury__dir__f_slash_2_f_0(Prefix_28, (MR_String) "lib");
            Var_66 = mercury__dir__f_slash_2_f_0(Var_67, (MR_String) "mercury");
            Var_65 = mercury__dir__f_slash_2_f_0(Var_66, (MR_String) "lib");
            GradeLibDir_82 = mercury__dir__f_slash_2_f_0(Var_65, GradeDir_15);
            make__program_target__maybe_install_library_file_8_p_0(ProgressStream_12, Globals_13, (MR_String) "static", LibFileName_24, GradeLibDir_82, &LibSucceeded0_32);
            succeeded = (strcmp(LibFileName_24, SharedLibFileName_25) == 0);
            if (succeeded)
              LibsSucceeded_30 = LibSucceeded0_32;
            else
            {
              MR_Word SharedLibSucceeded_33;

              make__program_target__maybe_install_library_file_8_p_0(ProgressStream_12, Globals_13, (MR_String) "shared", SharedLibFileName_25, GradeLibDir_82, &SharedLibSucceeded_33);
              LibsSucceeded_30 = libs__maybe_util__and_2_f_0(LibSucceeded0_32, SharedLibSucceeded_33);
            }
            make__program_target__install_grade_init_7_p_0(ProgressStream_12, Globals_13, GradeDir_15, ModuleName_16, &InitSucceeded_31);
          }
        }
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_76, 0) = ((MR_Box) (&make__program_target_scalar_common_13[1]));
          MR_hl_field(0, Var_76, 1) = ((MR_Box) (make__program_target__install_library_grade_files_11_p_0_1));
          MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_76, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_76, 4) = ((MR_Box) (Globals_13));
          MR_hl_field(0, Var_76, 5) = ((MR_Box) (LinkSucceeded_23));
          MR_hl_field(0, Var_76, 6) = ((MR_Box) (GradeDir_15));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, AllModules_17, &IntsHeadersSucceeded_34, ((MR_Box) (STATE_VARIABLE_Info_0_35)), &conv3_STATE_VARIABLE_Info_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_38);
        *STATE_VARIABLE_Info_36 = ((MR_Word) (conv3_STATE_VARIABLE_Info_36));
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (InitSucceeded_31));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (IntsHeadersSucceeded_34));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (LibsSucceeded_30));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
        }
        *Succeeded_18 = libs__maybe_util__and_list_1_f_0(Var_79);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__make_grade_install_dirs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_10;

  make__program_target__make_install_symlink_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_10));
}

static void MR_CALL 
make__program_target__make_grade_install_dirs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String Grade_10,
  MR_Word * Result_11,
  MR_Word * LinkResult_12)
{
  MR_String Prefix_14;
  MR_String LibDir_15;
  MR_String GradeIntsSubdir_16;
  MR_Word Result1_17;
  MR_String GradeIncSubdir_18;
  MR_Word Result2_19;
  MR_String GradeModuleSubdir_20;
  MR_Word Result3_21;
  MR_Word Results0_22;
  MR_Word LinkResult0_23;
  MR_Word LinkResults_24;
  MR_Word Results_25;
  MR_String Var_33;
  MR_String Var_36;
  MR_String Var_37;
  MR_String Var_41;
  MR_String Var_42;
  MR_String Var_43;
  MR_String Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_56;
  MR_Word Var_65;
  MR_String LinkName_88;
  MR_Box conv1_STATE_VARIABLE_IO_58_58;

  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 689, &Prefix_14);
  Var_33 = mercury__dir__f_slash_2_f_0(Prefix_14, (MR_String) "lib");
  LibDir_15 = mercury__dir__f_slash_2_f_0(Var_33, (MR_String) "mercury");
  Var_37 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "ints");
  Var_36 = mercury__dir__f_slash_2_f_0(Var_37, Grade_10);
  GradeIntsSubdir_16 = mercury__dir__f_slash_2_f_0(Var_36, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(GradeIntsSubdir_16, &Result1_17);
  Var_43 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "lib");
  Var_42 = mercury__dir__f_slash_2_f_0(Var_43, Grade_10);
  Var_41 = mercury__dir__f_slash_2_f_0(Var_42, (MR_String) "inc");
  GradeIncSubdir_18 = mercury__dir__f_slash_2_f_0(Var_41, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(GradeIncSubdir_18, &Result2_19);
  Var_48 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "modules");
  GradeModuleSubdir_20 = mercury__dir__f_slash_2_f_0(Var_48, Grade_10);
  mercury__dir__make_directory_4_p_0(GradeModuleSubdir_20, &Result3_21);
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Result3_21));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Result2_19));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    Results0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Results0_22, 0) = ((MR_Box) (Result1_17));
    MR_hl_field(1, Results0_22, 1) = ((MR_Box) (Var_51));
  }
  LinkName_88 = mercury__dir__f_slash_2_f_0(GradeIncSubdir_18, (MR_String) "mihs");
  parse_tree__module_cmds__maybe_make_symlink_6_p_0(Globals_9, (MR_String) "..", LinkName_88, &LinkResult0_23);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_14[0]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__program_target__make_grade_install_dirs_7_p_0_1));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) (GradeIntsSubdir_16));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_2[37])), &LinkResults_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_58_58);
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (LinkResult0_23));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (LinkResults_24));
  }
  *LinkResult_12 = libs__maybe_util__and_list_1_f_0(Var_65);
  switch (*LinkResult_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Result4_26;
        MR_Word Result5_27;
        MR_Word Result6_28;
        MR_Word Result7_29;
        MR_String Var_66;
        MR_String Var_69;
        MR_String Var_72;
        MR_String Var_75;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;

        Var_66 = mercury__dir__f_slash_2_f_0(GradeIncSubdir_18, (MR_String) "mihs");
        mercury__dir__make_directory_4_p_0(Var_66, &Result4_26);
        Var_69 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_16, (MR_String) "opts");
        mercury__dir__make_directory_4_p_0(Var_69, &Result5_27);
        Var_72 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_16, (MR_String) "trans_opts");
        mercury__dir__make_directory_4_p_0(Var_72, &Result6_28);
        Var_75 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_16, (MR_String) "analyses");
        mercury__dir__make_directory_4_p_0(Var_75, &Result7_29);
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (Result7_29));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Results0_22));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (Result6_28));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (Result5_27));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
        }
        {
          Results_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Results_25, 0) = ((MR_Box) (Result4_26));
          MR_hl_field(1, Results_25, 1) = ((MR_Box) (Var_78));
        }
      }
      break;
    case (MR_Integer) 1:
      Results_25 = Results0_22;
      break;
  }
  make__program_target__print_mkdir_errors_5_p_0(ProgressStream_8, Results_25, Result_11);
}

static void MR_CALL 
make__program_target__print_mkdir_errors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Integer) 1;
    else
    {
      MR_Word Result_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Results_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      if ((Result_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__2_2 = Results_12;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word Error_15 = ((MR_Word) ((MR_hl_field(1, Result_11, (MR_Integer) 0))));
        MR_String Var_24;
        MR_Word Var_16;

        Var_24 = mercury__io__error_message_1_f_0(Error_15);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "Error creating installation directories: ");
        mercury__io__write_string_4_p_0(HeadVar__1_1, Var_24);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
        make__program_target__print_mkdir_errors_5_p_0(HeadVar__1_1, Results_12, &Var_16);
        *HeadVar__3_3 = (MR_Integer) 0;
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String Linkage_11,
  MR_String FileName_12,
  MR_String InstallDir_13,
  MR_Word * Succeeded_14)
{
  MR_bool succeeded;
  MR_Word LibLinkages_16;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 700, &LibLinkages_16);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Linkage_11)), LibLinkages_16);
  if (succeeded)
  {
    MR_Word Succeeded0_17;
    MR_String InstallMsg_24;

    make__util__verbose_make_four_part_msg_6_p_0(Globals_10, (MR_String) "Installing file", FileName_12, (MR_String) "in", InstallDir_13, &InstallMsg_24);
    make__util__maybe_write_msg_4_p_0(ProgressStream_9, InstallMsg_24);
    libs__copy_util__copy_file_to_directory_7_p_0(Globals_10, ProgressStream_9, FileName_12, InstallDir_13, &Succeeded0_17);
    succeeded = (strcmp(Linkage_11, (MR_String) "static") == 0);
    if (succeeded)
      succeeded = (Succeeded0_17 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String BaseFileName_18;
      MR_String InstallMsg_28;
      MR_String RanLibCommand_29;
      MR_String RanLibFlags_30;
      MR_String Command_31;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_String Var_43;
      MR_String Var_44;

      BaseFileName_18 = mercury__dir__det_basename_1_f_0(FileName_12);
      make__util__verbose_make_four_part_msg_6_p_0(Globals_10, (MR_String) "Generating archive index for file", BaseFileName_18, (MR_String) "in", InstallDir_13, &InstallMsg_28);
      make__util__maybe_write_msg_4_p_0(ProgressStream_9, InstallMsg_28);
      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 638, &RanLibCommand_29);
      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 639, &RanLibFlags_30);
      Var_40 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_29);
      Var_44 = mercury__dir__f_slash_2_f_0(InstallDir_13, BaseFileName_18);
      Var_43 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_44);
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (RanLibFlags_30));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
      }
      Command_31 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_39);
      libs__system_cmds__invoke_system_command_8_p_0(Globals_10, ProgressStream_9, ProgressStream_9, (MR_Integer) 0, Command_31, Succeeded_14);
    }
    else
      *Succeeded_14 = Succeeded0_17;
  }
  else
    *Succeeded_14 = (MR_Integer) 1;
}

static void MR_CALL 
make__program_target__install_grade_init_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String GradeDir_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12)
{
  MR_String Prefix_14;
  MR_String GradeModulesDir_15;
  MR_String InitFileName_16;
  MR_String Var_20;
  MR_String Var_21;
  MR_String Var_22;
  MR_String InstallMsg_29;

  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 689, &Prefix_14);
  Var_22 = mercury__dir__f_slash_2_f_0(Prefix_14, (MR_String) "lib");
  Var_21 = mercury__dir__f_slash_2_f_0(Var_22, (MR_String) "mercury");
  Var_20 = mercury__dir__f_slash_2_f_0(Var_21, (MR_String) "modules");
  GradeModulesDir_15 = mercury__dir__f_slash_2_f_0(Var_20, GradeDir_10);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_9, (MR_String) "predicate \140make.program_target.install_grade_init\'/7", (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[5])), ModuleName_11, &InitFileName_16);
  make__util__verbose_make_four_part_msg_6_p_0(Globals_9, (MR_String) "Installing file", InitFileName_16, (MR_String) "in", GradeModulesDir_15, &InstallMsg_29);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, InstallMsg_29);
  libs__copy_util__copy_file_to_directory_7_p_0(Globals_9, ProgressStream_8, InitFileName_16, GradeModulesDir_15, Succeeded_12);
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_20;

  make__program_target__linked_target_cleanup_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Info_20);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ObjectTargets_14;
  MR_Word conv0_STATE_VARIABLE_Info_25;

  make__program_target__get_foreign_object_targets_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_ObjectTargets_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_25);
  *wrapper_arg_2 = ((MR_Box) (conv1_ObjectTargets_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word LinkedTargetFile_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  MR_bool succeeded;
  MR_Word MainModuleName_15 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_11, (MR_Integer) 0))));
  MR_Word FileType_16 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_11, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word DepsSucceeded_17;
  MR_Word AllModules_18;
  MR_Word KeepGoing_19;
  MR_Word STATE_VARIABLE_Info_57_57;

  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_9, Globals_10, MainModuleName_15, &DepsSucceeded_17, &AllModules_18, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_57_57);
  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_57_57);
  succeeded = (DepsSucceeded_17 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_12 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_57_57;
  }
  else
  {
    MR_Word PIC_20;
    MR_Word CompilationTarget_21;
    MR_Word IntermediateTargetType_22;
    MR_Word ObjectTargetType_23;
    MR_Word ObjModulesAlpha_25;
    MR_Word ObjModules_26;
    MR_Word ObjModulesNonnested_27;
    MR_Word IntermediateTargetsNonnested_28;
    MR_Word ObjTargets_29;
    MR_Word ForeignObjTargetsList_30;
    MR_Word ForeignObjTargets_31;
    MR_Word IntsSucceeded_32;
    MR_Word BuildDepsSucceeded_33;
    MR_String FullMainModuleLinkedFileName_38;
    MR_String CurDirMainModuleLinkedFileName_39;
    MR_Word MaybeTimestamp_40;
    MR_Word MaybeOldestLhsTimestamp_42;
    MR_Word LhsResult_44;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Word STATE_VARIABLE_Info_61_61;
    MR_Word Var_63;
    MR_Word STATE_VARIABLE_Info_64_64;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word STATE_VARIABLE_Info_84_84;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_Info_88_88;
    MR_String Var_90;
    MR_Word STATE_VARIABLE_Info_92_92;
    MR_Box conv3_STATE_VARIABLE_Info_64_64;
    MR_Box conv2_STATE_VARIABLE_IO_65_65;
    MR_Word ShouldRebuildLhs_45;

    backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_10, FileType_16, &PIC_20);
    libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_21);
    switch (CompilationTarget_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 36U);
          {
            ObjectTargetType_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ObjectTargetType_23, 0) = (MR_Box) ((MR_Unsigned) (PIC_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 40U);
          ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 40U);
        }
        break;
      case (MR_Integer) 2:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 44U);
          ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 48U);
        }
        break;
    }
    ObjModulesAlpha_25 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_18);
    make__program_target__order_target_modules_8_p_0(ProgressStream_9, Globals_10, ObjModulesAlpha_25, &ObjModules_26, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_59_59);
    make__program_target__filter_out_nested_modules_8_p_0(ProgressStream_9, Globals_10, ObjModules_26, &ObjModulesNonnested_27, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_61_61);
    IntermediateTargetsNonnested_28 = make__util__make_dependency_list_2_f_0(ObjModulesNonnested_27, IntermediateTargetType_22);
    ObjTargets_29 = make__util__make_dependency_list_2_f_0(ObjModules_26, ObjectTargetType_23);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_63, 0) = ((MR_Box) (&make__program_target_scalar_common_8[2]));
      MR_hl_field(0, Var_63, 1) = ((MR_Box) (make__program_target__make_linked_target_2_8_p_0_1));
      MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_63, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_63, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_63, 5) = ((MR_Box) (PIC_20));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, ObjModules_26, &ForeignObjTargetsList_30, ((MR_Box) (STATE_VARIABLE_Info_61_61)), &conv3_STATE_VARIABLE_Info_64_64, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_65_65);
    STATE_VARIABLE_Info_64_64 = ((MR_Word) (conv3_STATE_VARIABLE_Info_64_64));
    ForeignObjTargets_31 = mercury__list__condense_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), ForeignObjTargetsList_30);
    make__program_target__build_int_opt_files_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 3, ObjModulesAlpha_25, &IntsSucceeded_32, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_67_67);
    succeeded = (IntsSucceeded_32 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      BuildDepsSucceeded_33 = (MR_Integer) 0;
      STATE_VARIABLE_Info_84_84 = STATE_VARIABLE_Info_67_67;
    }
    else
    {
      MR_Word BuildDepsSucceeded0_34;
      MR_Word BuildDepsSucceeded1_37;
      MR_Word STATE_VARIABLE_Info_70_70;
      MR_Word STATE_VARIABLE_Info_78_78;

      make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, IntermediateTargetsNonnested_28, &BuildDepsSucceeded0_34, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_70_70);
      switch (BuildDepsSucceeded0_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded1_37 = (MR_Integer) 0;
            STATE_VARIABLE_Info_78_78 = STATE_VARIABLE_Info_70_70;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = (ObjectTargetType_23 == (MR_Word) ((MR_Unsigned) 48U));
            if (succeeded)
            {
              MR_Word BuildJavaSucceeded_35;
              MR_Word STATE_VARIABLE_Info_72_72;

              make__program_target__make_java_files_9_p_0(ProgressStream_9, Globals_10, MainModuleName_15, ObjModules_26, &BuildJavaSucceeded_35, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_72_72);
              switch (BuildJavaSucceeded_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    BuildDepsSucceeded1_37 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_78_78 = STATE_VARIABLE_Info_72_72;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NoRebuildGlobals_36;

                    libs__globals__set_option_4_p_0((MR_Integer) 683, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[0])), Globals_10, &NoRebuildGlobals_36);
                    make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, NoRebuildGlobals_36, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_78_78);
                  }
                  break;
              }
            }
            else
              make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_78_78);
          }
          break;
      }
      switch (BuildDepsSucceeded1_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded_33 = (MR_Integer) 0;
            STATE_VARIABLE_Info_84_84 = STATE_VARIABLE_Info_78_78;
          }
          break;
        case (MR_Integer) 1:
          make__build__foldl2_make_module_targets_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, ForeignObjTargets_31, &BuildDepsSucceeded_33, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_84_84);
          break;
      }
    }
    backend_libs__compile_target_code__linked_target_file_name_full_curdir_7_p_0(Globals_10, MainModuleName_15, FileType_16, &FullMainModuleLinkedFileName_38, &CurDirMainModuleLinkedFileName_39);
    Var_90 = mercury__dir__this_directory_0_f_0();
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_90));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__timestamp__get_file_timestamp_7_p_0(Var_87, FullMainModuleLinkedFileName_38, &MaybeTimestamp_40, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_88_88);
    if (((MR_tag((MR_Word) MaybeTimestamp_40)) == (MR_Integer) 1))
      MaybeOldestLhsTimestamp_42 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word LinkedFileTimestamp_43 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_40, (MR_Integer) 0))));

      {
        MaybeOldestLhsTimestamp_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeOldestLhsTimestamp_42, 0) = ((MR_Box) (LinkedFileTimestamp_43));
      }
    }
    make__check_up_to_date__should_we_rebuild_lhs_11_p_0(ProgressStream_9, Globals_10, FullMainModuleLinkedFileName_38, MaybeOldestLhsTimestamp_42, BuildDepsSucceeded_33, ObjTargets_29, &LhsResult_44, STATE_VARIABLE_Info_88_88, &STATE_VARIABLE_Info_92_92);
    succeeded = (DepsSucceeded_17 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (LhsResult_44 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ShouldRebuildLhs_45 = ((MR_Unsigned) ((MR_hl_field(1, LhsResult_44, (MR_Integer) 0))) & (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word VeryVerbose_46;
      MR_Box Cookie_47;
      MR_Word MaybeErrorStream_48;
      MR_Word Succeeded0_49;
      MR_Word Cleanup_52;
      MR_Word STATE_VARIABLE_Info_96_96;
      MR_Word STATE_VARIABLE_Info_100_100;
      MR_Box conv5_STATE_VARIABLE_Info_54;

      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 76, &VeryVerbose_46);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_47);
      make__build__open_module_error_stream_8_p_0(ProgressStream_9, Globals_10, MainModuleName_15, &MaybeErrorStream_48, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_96_96);
      if ((MaybeErrorStream_48 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_49 = (MR_Integer) 0;
        STATE_VARIABLE_Info_100_100 = STATE_VARIABLE_Info_96_96;
      }
      else
      {
        MR_Word MESI_50 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_48, (MR_Integer) 0))));
        MR_Word ErrorStream_51 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_48, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Info_98_98;

        make__program_target__build_linked_target_17_p_0(ProgressStream_9, Globals_10, MainModuleName_15, FileType_16, FullMainModuleLinkedFileName_38, CurDirMainModuleLinkedFileName_39, MaybeOldestLhsTimestamp_42, AllModules_18, ObjModules_26, CompilationTarget_21, PIC_20, ShouldRebuildLhs_45, &Succeeded0_49, STATE_VARIABLE_Info_96_96, &STATE_VARIABLE_Info_98_98);
        make__build__close_module_error_stream_handle_errors_9_p_0(ProgressStream_9, Globals_10, MainModuleName_15, MESI_50, ErrorStream_51, STATE_VARIABLE_Info_98_98, &STATE_VARIABLE_Info_100_100);
      }
      {
        Cleanup_52 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Cleanup_52, 0) = ((MR_Box) (&make__program_target_scalar_common_13[0]));
        MR_hl_field(0, Cleanup_52, 1) = ((MR_Box) (make__program_target__make_linked_target_2_8_p_0_2));
        MR_hl_field(0, Cleanup_52, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, Cleanup_52, 3) = ((MR_Box) (ProgressStream_9));
        MR_hl_field(0, Cleanup_52, 4) = ((MR_Box) (Globals_10));
        MR_hl_field(0, Cleanup_52, 5) = ((MR_Box) (MainModuleName_15));
        MR_hl_field(0, Cleanup_52, 6) = ((MR_Box) (FileType_16));
        MR_hl_field(0, Cleanup_52, 7) = ((MR_Box) (FullMainModuleLinkedFileName_38));
        MR_hl_field(0, Cleanup_52, 8) = ((MR_Box) (CurDirMainModuleLinkedFileName_39));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_46, Cookie_47, Cleanup_52, Succeeded0_49, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_100_100)), &conv5_STATE_VARIABLE_Info_54);
      *STATE_VARIABLE_Info_54 = ((MR_Word) (conv5_STATE_VARIABLE_Info_54));
    }
    else
    {
      *Succeeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_92_92;
    }
  }
}

static void MR_CALL 
make__program_target__build_int_opt_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_NonnestedModules_25;
  MR_Word conv1_STATE_VARIABLE_ParentModules_27;
  MR_Word conv0_STATE_VARIABLE_Info_29;

  make__program_target__acc_nonnested_and_parent_modules_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_NonnestedModules_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ParentModules_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_NonnestedModules_25));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ParentModules_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__program_target__build_int_opt_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word BuildWhat_12,
  MR_Word AllModules0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word NonnestedModules_17;
  MR_Word ParentModules_18;
  MR_Word Int3s_19;
  MR_Word Int0s_20;
  MR_Word Int1s_21;
  MR_Word AnyIntermod_22;
  MR_Word Opts_23;
  MR_Word KeepGoing_24;
  MR_Word Succeeded0_25;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Word Var_48;
  MR_Box conv6_NonnestedModules_17;
  MR_Box conv5_ParentModules_18;
  MR_Box conv4_STATE_VARIABLE_Info_32_32;
  MR_Box conv3_STATE_VARIABLE_IO_33_33;

  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__build_int_opt_files_9_p_0_1));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) (Globals_11));
  }
  mercury__list__foldl4_10_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[5]), (MR_Word) (&make__program_target_scalar_common_2[5]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, AllModules0_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_NonnestedModules_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_ParentModules_18, ((MR_Box) (STATE_VARIABLE_Info_0_28)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_33_33);
  NonnestedModules_17 = ((MR_Word) (conv6_NonnestedModules_17));
  ParentModules_18 = ((MR_Word) (conv5_ParentModules_18));
  STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_32_32));
  Int3s_19 = make__util__make_dependency_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 20U));
  Int0s_20 = make__util__make_dependency_list_2_f_0(ParentModules_18, (MR_Word) ((MR_Unsigned) 8U));
  Int1s_21 = make__util__make_dependency_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 12U));
  libs__globals__get_any_intermod_2_p_0(Globals_11, &AnyIntermod_22);
  switch (AnyIntermod_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Opts_23 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      Opts_23 = make__util__make_dependency_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 24U));
      break;
  }
  KeepGoing_24 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_32_32);
  make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int3s_19, &Succeeded0_25, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_39_39);
  succeeded = (Succeeded0_25 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (BuildWhat_12 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_14 = Succeeded0_25;
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_39_39;
  }
  else
  {
    MR_Word Succeeded1_26;
    MR_Word STATE_VARIABLE_Info_42_42;

    make__build__foldl2_make_module_targets_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int0s_20, &Succeeded1_26, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_42_42);
    succeeded = (Succeeded1_26 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (BuildWhat_12 == (MR_Integer) 1);
    if (succeeded)
    {
      *Succeeded_14 = Succeeded1_26;
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_42_42;
    }
    else
    {
      MR_Word Succeeded2_27;
      MR_Word STATE_VARIABLE_Info_45_45;

      make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int1s_21, &Succeeded2_27, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_45_45);
      succeeded = (Succeeded2_27 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (BuildWhat_12 == (MR_Integer) 2);
      if (succeeded)
      {
        *Succeeded_14 = Succeeded2_27;
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_45_45;
      }
      else
        make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Opts_23, Succeeded_14, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_29);
    }
  }
}

static void MR_CALL 
make__program_target__make_java_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Timestamps_9;

  make__program_target__do_not_reinsert_java_class_timestamps_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Timestamps_9);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Timestamps_9));
}

static void MR_CALL 
make__program_target__make_java_files_9_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__5_5;

  backend_libs__compile_target_code__compile_java_files_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &conv3_HeadVar__5_5);
  *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_java_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__5_5;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_java_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word ObjModules_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word OutOfDateModules_17;
  MR_Word STATE_VARIABLE_Info_26_26;

  make__program_target__out_of_date_java_modules_8_p_0(ProgressStream_10, Globals_11, ObjModules_13, &OutOfDateModules_17, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
  if ((OutOfDateModules_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_14 = (MR_Integer) 1;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_26_26;
  }
  else
  {
    MR_Word Timestamps0_20;
    MR_Word Timestamps_21;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word Var_33;
    MR_String MakingMsg_41;
    MR_Word JavaFiles_42;
    MR_Word MaybeErrorStream_43;
    MR_Word Var_48;
    MR_Word STATE_VARIABLE_Info_33_52;
    MR_Box conv1_STATE_VARIABLE_IO_29_49;
    MR_Box conv5_Timestamps_21;

    make__util__verbose_make_one_part_msg_3_p_0(Globals_11, (MR_String) "Making Java class files", &MakingMsg_41);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, MakingMsg_41);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_10[1]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__make_java_files_9_p_0_1));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (Globals_11));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_java_files\'/9"));
      MR_hl_field(0, Var_48, 5) = ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_2[12])));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, OutOfDateModules_17, &JavaFiles_42, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_49);
    make__build__open_module_error_stream_8_p_0(ProgressStream_10, Globals_11, MainModuleName_12, &MaybeErrorStream_43, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_33_52);
    if ((MaybeErrorStream_43 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_14 = (MR_Integer) 0;
      STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_33_52;
    }
    else
    {
      MR_Word MESI_44 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_43, (MR_Integer) 0))));
      MR_Word ErrorStream_45 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_43, (MR_Integer) 1))));
      MR_String HeadJavaFile_59;
      MR_Word TailJavaFiles_60;
      MR_Word Var_61;
      MR_Box conv2_HeadJavaFile_59;

      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), JavaFiles_42, &conv2_HeadJavaFile_59, &TailJavaFiles_60);
      HeadJavaFile_59 = ((MR_String) (conv2_HeadJavaFile_59));
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_10[2]));
        MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__program_target__make_java_files_9_p_0_2));
        MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_61, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(0, Var_61, 4) = ((MR_Box) (ProgressStream_10));
        MR_hl_field(0, Var_61, 5) = ((MR_Box) (HeadJavaFile_59));
        MR_hl_field(0, Var_61, 6) = ((MR_Box) (TailJavaFiles_60));
      }
      libs__process_util__call_in_forked_process_4_p_0(Var_61, Succeeded_14);
      make__build__close_module_error_stream_handle_errors_9_p_0(ProgressStream_10, Globals_11, MainModuleName_12, MESI_44, ErrorStream_45, STATE_VARIABLE_Info_33_52, &STATE_VARIABLE_Info_28_28);
    }
    Timestamps0_20 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_28_28);
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[3]));
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__program_target_scalar_common_1[4]), (MR_Word) (&make__program_target_scalar_common_1[11]), Timestamps0_20, ((MR_Box) (Var_31)), &conv5_Timestamps_21);
    Timestamps_21 = ((MR_Word) (conv5_Timestamps_21));
    make__make_info__make_info_set_file_timestamps_3_p_0(Timestamps_21, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_32_32);
    Var_33 = make__timestamp__init_target_file_timestamps_0_f_0();
    make__make_info__make_info_set_target_file_timestamps_3_p_0(Var_33, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__program_target__out_of_date_java_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word ObjModules_11,
  MR_Word * OutOfDateModules_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;

  if ((ObjModules_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *OutOfDateModules_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
  }
  else
  {
    MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(1, ObjModules_11, (MR_Integer) 0))));
    MR_Word ModuleNames_16 = ((MR_Word) ((MR_hl_field(1, ObjModules_11, (MR_Integer) 1))));
    MR_Word OutOfDateModules0_17;
    MR_Word JavaTarget_18;
    MR_Word ClassTarget_19;
    MR_Word MaybeJavaTimestamp_20;
    MR_Word MaybeClassTimestamp_21;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word JavaTimestamp_22;
    MR_Word ClassTimestamp_23;
    MR_Word Var_37;

    make__program_target__out_of_date_java_modules_8_p_0(ProgressStream_9, Globals_10, ModuleNames_16, &OutOfDateModules0_17, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
    {
      JavaTarget_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, JavaTarget_18, 0) = ((MR_Box) (ModuleName_15));
      MR_hl_field(0, JavaTarget_18, 1) = ((MR_Box) ((MR_Unsigned) 44U));
    }
    {
      ClassTarget_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassTarget_19, 0) = ((MR_Box) (ModuleName_15));
      MR_hl_field(0, ClassTarget_19, 1) = ((MR_Box) ((MR_Unsigned) 48U));
    }
    make__timestamp__get_target_timestamp_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 0, JavaTarget_18, &MaybeJavaTimestamp_20, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_33_33);
    make__timestamp__get_target_timestamp_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 0, ClassTarget_19, &MaybeClassTimestamp_21, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25);
    succeeded = ((MR_tag((MR_Word) MaybeJavaTimestamp_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      JavaTimestamp_22 = ((MR_Word) ((MR_hl_field(0, MaybeJavaTimestamp_20, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeClassTimestamp_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        ClassTimestamp_23 = ((MR_Word) ((MR_hl_field(0, MaybeClassTimestamp_21, (MR_Integer) 0))));
        libs__timestamp____Compare____timestamp_0_0(&Var_37, ClassTimestamp_23, JavaTimestamp_22);
        succeeded = (Var_37 != (MR_Integer) 1);
      }
    }
    if (succeeded)
      *OutOfDateModules_12 = OutOfDateModules0_17;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *OutOfDateModules_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (OutOfDateModules0_17));
      }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__3_3;
  MR_Word conv6_HeadVar__5_5;

  make__timestamp__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv7_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv6_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv6_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_4;
  MR_Word conv1_HeadVar__6_6;

  make__check_up_to_date__get_dependency_file_status_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__6_6));
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_63;

  conv0_LambdaHeadVar__2_63 = make__program_target__IntroducedFrom__func__build_linked_target_2__582__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_63));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_3(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_5(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_81 = ((MR_Word) ((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__conv5_ExtraObjDepStatus_81));
  make__program_target__build_linked_target_17_p_0_4(env_ptr);
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_4(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_81, (MR_Integer) 0))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_81, (MR_Integer) 1))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_81, (MR_Integer) 2)));

    (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__Var_73 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_81, (MR_Integer) 2))) & (MR_Integer) 3);
    (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__succeeded = ((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__Var_73 == (MR_Integer) 3);
    if ((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__succeeded)
      make__program_target__build_linked_target_17_p_0_3(env_ptr);
  }
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_6(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), &(env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__conv5_ExtraObjDepStatus_81, (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatuses_55, make__program_target__build_linked_target_17_p_0_5, env_ptr);
      (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word Globals_19,
  MR_Word MainModuleName_20,
  MR_Word FileType_21,
  MR_String FullMainModuleLinkedFileName_22,
  MR_String CurDirMainModuleLinkedFileName_23,
  MR_Word MaybeOldestLhsTimestamp_24,
  MR_Word AllModules_25,
  MR_Word ObjModules_26,
  MR_Word CompilationTarget_27,
  MR_Word PIC_28,
  MR_Word ShouldRebuildLhs_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s env;

  {
    MR_Word MaybePreLinkCommand_33;
    MR_Word PreLinkSucceeded_37;

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_19, (MR_Integer) 688, &MaybePreLinkCommand_33);
    if ((MaybePreLinkCommand_33 == (MR_Word) ((MR_Unsigned) 0U)))
      PreLinkSucceeded_37 = (MR_Integer) 1;
    else
    {
      MR_String PreLinkCommand_34 = ((MR_String) ((MR_hl_field(1, MaybePreLinkCommand_33, (MR_Integer) 0))));
      MR_String CommandString_35;
      MR_Word Var_43;

      Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_25);
      backend_libs__compile_target_code__make_all_module_command_6_p_0(PreLinkCommand_34, MainModuleName_20, Var_43, &CommandString_35);
      libs__system_cmds__invoke_system_command_8_p_0(Globals_19, ProgressStream_18, ProgressStream_18, (MR_Integer) 0, CommandString_35, &PreLinkSucceeded_37);
    }
    switch (PreLinkSucceeded_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_30 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LinkObjects_48;
          MR_Word NoLinkObjsGlobals_49;
          MR_Word AllModulesList_50;
          MR_Word InitObjSucceeded_51;
          MR_Word InitObjects_52;
          MR_Word ObjectsToCheck_53;
          MR_Word ObjectsToCheckDepFiles_54;
          MR_Word ExtraObjSucceeded_58;
          MR_Word BuildDepsSucceeded_59;
          MR_Word ExtraObjectTimestamps_60;
          MR_Word ExtraObjectLhsResult_61;
          MR_Word STATE_VARIABLE_Info_59_67;
          MR_Word Var_70;
          MR_Word STATE_VARIABLE_Info_65_71;
          MR_Word Var_74;
          MR_Word STATE_VARIABLE_Info_69_75;
          MR_Word Var_77;
          MR_String Var_78;
          MR_Box conv4_STATE_VARIABLE_Info_65_71;
          MR_Box conv3_STATE_VARIABLE_IO_66_72;
          MR_Box conv9_STATE_VARIABLE_Info_69_75;
          MR_Box conv8_STATE_VARIABLE_IO_70_76;

          libs__globals__lookup_accumulating_option_3_p_0(Globals_19, (MR_Integer) 603, &LinkObjects_48);
          libs__globals__set_option_4_p_0((MR_Integer) 603, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[9])), Globals_19, &NoLinkObjsGlobals_49);
          AllModulesList_50 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_25);
          switch (FileType_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 6:
            case (MR_Integer) 5:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                InitObjSucceeded_51 = (MR_Integer) 1;
                InitObjects_52 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Info_59_67 = STATE_VARIABLE_Info_0_38;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word InitObjectResult_89;

                backend_libs__compile_target_code__make_init_obj_file_7_p_0(NoLinkObjsGlobals_49, ProgressStream_18, MainModuleName_20, AllModulesList_50, &InitObjectResult_89);
                if ((InitObjectResult_89 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  InitObjSucceeded_51 = (MR_Integer) 0;
                  InitObjects_52 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_Info_59_67 = STATE_VARIABLE_Info_0_38;
                }
                else
                {
                  MR_String InitObject_90 = ((MR_String) ((MR_hl_field(1, InitObjectResult_89, (MR_Integer) 0))));
                  MR_Word FileTimestamps0_91;
                  MR_Word FileTimestamps1_92;

                  FileTimestamps0_91 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_38);
                  mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[3]), ((MR_Box) (InitObject_90)), FileTimestamps0_91, &FileTimestamps1_92);
                  make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps1_92, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_59_67);
                  InitObjSucceeded_51 = (MR_Integer) 1;
                  {
                    InitObjects_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InitObjects_52, 0) = ((MR_Box) (InitObject_90));
                    MR_hl_field(1, InitObjects_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
              break;
          }
          ObjectsToCheck_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_52, LinkObjects_48);
          ObjectsToCheckDepFiles_54 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__program_target_scalar_common_1[10]), ObjectsToCheck_53);
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (make__program_target__build_linked_target_17_p_0_2));
            MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_70, 3) = ((MR_Box) (ProgressStream_18));
            MR_hl_field(0, Var_70, 4) = ((MR_Box) (NoLinkObjsGlobals_49));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, ObjectsToCheckDepFiles_54, &(env).make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatuses_55, ((MR_Box) (STATE_VARIABLE_Info_59_67)), &conv4_STATE_VARIABLE_Info_65_71, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_66_72);
          STATE_VARIABLE_Info_65_71 = ((MR_Word) (conv4_STATE_VARIABLE_Info_65_71));
          make__program_target__build_linked_target_17_p_0_6(&env);
          if ((env).make__program_target__build_linked_target_17_p_0_env_0__succeeded)
            ExtraObjSucceeded_58 = (MR_Integer) 0;
          else
            ExtraObjSucceeded_58 = (MR_Integer) 1;
          BuildDepsSucceeded_59 = libs__maybe_util__and_2_f_0(InitObjSucceeded_51, ExtraObjSucceeded_58);
          Var_78 = mercury__dir__this_directory_0_f_0();
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_74, 0) = ((MR_Box) (&make__program_target_scalar_common_10[0]));
            MR_hl_field(0, Var_74, 1) = ((MR_Box) (make__program_target__build_linked_target_17_p_0_7));
            MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_74, 3) = ((MR_Box) (Var_77));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, ObjectsToCheck_53, &ExtraObjectTimestamps_60, ((MR_Box) (STATE_VARIABLE_Info_65_71)), &conv9_STATE_VARIABLE_Info_69_75, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_70_76);
          STATE_VARIABLE_Info_69_75 = ((MR_Word) (conv9_STATE_VARIABLE_Info_69_75));
          make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0(ProgressStream_18, NoLinkObjsGlobals_49, FullMainModuleLinkedFileName_22, MaybeOldestLhsTimestamp_24, BuildDepsSucceeded_59, (env).make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatuses_55, ExtraObjectTimestamps_60, &ExtraObjectLhsResult_61);
          if ((ExtraObjectLhsResult_61 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String ErrorMsg_62;

            make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_22, &ErrorMsg_62);
            make__util__maybe_write_msg_locked_5_p_0(ProgressStream_18, STATE_VARIABLE_Info_69_75, ErrorMsg_62);
            *Succeeded_30 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_69_75;
          }
          else
          {
            MR_Word ExtraObjShouldRebuildLhs_63 = ((MR_Unsigned) ((MR_hl_field(1, ExtraObjectLhsResult_61, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, ExtraObjectLhsResult_61, (MR_Integer) 0)));

            (env).make__program_target__build_linked_target_17_p_0_env_0__succeeded = (ShouldRebuildLhs_29 == (MR_Integer) 0);
            if ((env).make__program_target__build_linked_target_17_p_0_env_0__succeeded)
              (env).make__program_target__build_linked_target_17_p_0_env_0__succeeded = (ExtraObjShouldRebuildLhs_63 == (MR_Integer) 0);
            if ((env).make__program_target__build_linked_target_17_p_0_env_0__succeeded)
            {
              MR_Word MainModuleLinkedTarget_96;
              MR_Word Var_100;

              {
                Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_100, 0) = (MR_Box) ((MR_Unsigned) (FileType_21));
              }
              {
                MainModuleLinkedTarget_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MainModuleLinkedTarget_96, 0) = ((MR_Box) (MainModuleName_20));
                MR_hl_field(0, MainModuleLinkedTarget_96, 1) = ((MR_Box) (Var_100));
              }
              (env).make__program_target__build_linked_target_17_p_0_env_0__succeeded = (strcmp(FullMainModuleLinkedFileName_22, CurDirMainModuleLinkedFileName_23) == 0);
              if ((env).make__program_target__build_linked_target_17_p_0_env_0__succeeded)
              {
                MR_String UpToDateMsg_97;

                make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_49, MainModuleLinkedTarget_96, FullMainModuleLinkedFileName_22, STATE_VARIABLE_Info_69_75, STATE_VARIABLE_Info_39, &UpToDateMsg_97);
                make__util__maybe_write_msg_4_p_0(ProgressStream_18, UpToDateMsg_97);
                *Succeeded_30 = (MR_Integer) 1;
              }
              else
              {
                MR_Word MadeSymlinkOrCopy_98;

                backend_libs__compile_target_code__post_link_maybe_make_symlink_or_copy_10_p_0(NoLinkObjsGlobals_49, ProgressStream_18, FullMainModuleLinkedFileName_22, CurDirMainModuleLinkedFileName_23, MainModuleName_20, FileType_21, Succeeded_30, &MadeSymlinkOrCopy_98);
                switch (MadeSymlinkOrCopy_98) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String UpToDateMsg_102;

                      make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_49, MainModuleLinkedTarget_96, FullMainModuleLinkedFileName_22, STATE_VARIABLE_Info_69_75, STATE_VARIABLE_Info_39, &UpToDateMsg_102);
                      make__util__maybe_write_msg_4_p_0(ProgressStream_18, UpToDateMsg_102);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String LinkMsg_99;

                      make__util__maybe_symlink_or_copy_linked_target_msg_3_p_0(NoLinkObjsGlobals_49, FullMainModuleLinkedFileName_22, &LinkMsg_99);
                      make__util__maybe_write_msg_4_p_0(ProgressStream_18, LinkMsg_99);
                      *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_69_75;
                    }
                    break;
                }
              }
            }
            else
              make__program_target__rebuild_linked_target_16_p_0(ProgressStream_18, NoLinkObjsGlobals_49, MainModuleName_20, FileType_21, FullMainModuleLinkedFileName_22, AllModulesList_50, ObjModules_26, InitObjects_52, LinkObjects_48, CompilationTarget_27, PIC_28, Succeeded_30, STATE_VARIABLE_Info_69_75, STATE_VARIABLE_Info_39);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_14;

  make__program_target__link_and_write_error_specs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv5_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv5_Succeeded_14));
}

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__5_5;

  parse_tree__file_names__module_name_to_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ForeignObjectFiles_14;
  MR_Word conv0_STATE_VARIABLE_MakeInfo_24;

  make__program_target__get_module_foreign_object_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_ForeignObjectFiles_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_MakeInfo_24);
  *wrapper_arg_2 = ((MR_Box) (conv1_ForeignObjectFiles_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_MakeInfo_24));
}

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word NoLinkObjsGlobals_18,
  MR_Word MainModuleName_19,
  MR_Word FileType_20,
  MR_String FullMainModuleLinkedFileName_21,
  MR_Word AllModulesList_22,
  MR_Word ObjModules_23,
  MR_Word InitObjects_24,
  MR_Word LinkObjects_25,
  MR_Word CompilationTarget_26,
  MR_Word PIC_27,
  MR_Word * Succeeded_28,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  MR_String MakingMsg_31;
  MR_Word ForeignObjectFileLists_32;
  MR_Word ForeignObjects_33;
  MR_Word Ext_36;
  MR_Word ObjList_37;
  MR_Word AllObjects_38;
  MR_Word CmdLineTargets0_39;
  MR_Word CmdLineTargets_40;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_Info_50_50;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Box conv3_STATE_VARIABLE_Info_50_50;
  MR_Box conv2_STATE_VARIABLE_IO_51_51;

  make__util__maybe_making_filename_msg_3_p_0(NoLinkObjsGlobals_18, FullMainModuleLinkedFileName_21, &MakingMsg_31);
  make__util__maybe_write_msg_4_p_0(ProgressStream_17, MakingMsg_31);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__program_target__rebuild_linked_target_16_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (ProgressStream_17));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_49, 5) = ((MR_Box) (PIC_27));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, AllModulesList_22, &ForeignObjectFileLists_32, ((MR_Box) (STATE_VARIABLE_Info_0_44)), &conv3_STATE_VARIABLE_Info_50_50, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_51_51);
  STATE_VARIABLE_Info_50_50 = ((MR_Word) (conv3_STATE_VARIABLE_Info_50_50));
  ForeignObjects_33 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjectFileLists_32);
  switch (CompilationTarget_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObjExt_34;
        MR_Word Var_35;

        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_27, &ObjExt_34, &Var_35);
        {
          Ext_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Ext_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Ext_36, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_34));
        }
      }
      break;
    case (MR_Integer) 1:
      Ext_36 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[10]));
      break;
    case (MR_Integer) 2:
      Ext_36 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_2[11]));
      break;
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__program_target__rebuild_linked_target_16_p_0_2));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.rebuild_linked_target\'/16"));
    MR_hl_field(0, Var_54, 5) = ((MR_Box) (Ext_36));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_54, ObjModules_23, &ObjList_37);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjects_33, LinkObjects_25);
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjList_37, Var_57);
  AllObjects_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_24, Var_56);
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&make__program_target_scalar_common_7[1]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (make__program_target__rebuild_linked_target_16_p_0_3));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_58, 4) = ((MR_Box) (ProgressStream_17));
    MR_hl_field(0, Var_58, 5) = ((MR_Box) (FileType_20));
    MR_hl_field(0, Var_58, 6) = ((MR_Box) (MainModuleName_19));
    MR_hl_field(0, Var_58, 7) = ((MR_Box) (AllObjects_38));
  }
  libs__process_util__call_in_forked_process_4_p_0(Var_58, Succeeded_28);
  CmdLineTargets0_39 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_50_50);
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
  }
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (MainModuleName_19));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (Var_61));
  }
  mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_60)), CmdLineTargets0_39, &CmdLineTargets_40);
  make__make_info__make_info_set_command_line_targets_3_p_0(CmdLineTargets_40, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_62_62);
  switch (*Succeeded_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ErrorMsg_43;

        make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_21, &ErrorMsg_43);
        make__util__maybe_write_msg_locked_5_p_0(ProgressStream_17, STATE_VARIABLE_Info_62_62, ErrorMsg_43);
        *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_62_62;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FileTimestamps2_41;
        MR_Word FileTimestamps_42;

        FileTimestamps2_41 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_62_62);
        mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[3]), ((MR_Box) (FullMainModuleLinkedFileName_21)), FileTimestamps2_41, &FileTimestamps_42);
        make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_42, STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Info_45);
      }
      break;
  }
}

static MR_bool MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__program_target__IntroducedFrom__pred__filter_out_nested_modules__459__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NestedModules_21;
  MR_Word conv0_STATE_VARIABLE_Info_23;

  make__program_target__collect_nested_modules_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NestedModules_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NestedModules_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_23));
}

static void MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules0_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word NestedModules_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Box conv4_NestedModules_15;
  MR_Box conv3_STATE_VARIABLE_Info_17;
  MR_Box conv2_STATE_VARIABLE_IO_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (make__program_target__filter_out_nested_modules_8_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (Globals_10));
  }
  Var_21 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, Modules0_11, ((MR_Box) (Var_21)), &conv4_NestedModules_15, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv3_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_19);
  NestedModules_15 = ((MR_Word) (conv4_NestedModules_15));
  *STATE_VARIABLE_Info_17 = ((MR_Word) (conv3_STATE_VARIABLE_Info_17));
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&make__program_target_scalar_common_5[3]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (make__program_target__filter_out_nested_modules_8_p_0_2));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (NestedModules_15));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_24, Modules0_11, Modules_12);
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_49;

  make__program_target__IntroducedFrom__pred__order_target_modules__398__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_49);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_49));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__3_46;

  make__program_target__IntroducedFrom__pred__order_target_modules__394__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__3_46);
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__3_46));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;
  MR_Word conv3_STATE_VARIABLE_Info_20;

  make__program_target__pair_module_with_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Info_20);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_61;

  make__program_target__IntroducedFrom__pred__order_target_modules__403__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_61);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_61));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_58;

  make__program_target__IntroducedFrom__pred__order_target_modules__402__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_58);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_58));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  make__program_target__pair_module_with_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules_11,
  MR_Word * OrderedModules_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word OrderByTimestamp_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 712, &OrderByTimestamp_15);
  switch (OrderByTimestamp_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PairedModules_32;
        MR_Word OrderedPairs_33;

        mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__program_target_scalar_common_1[5]), Modules_11, &PairedModules_32);
        mercury__list__sort_3_p_0((MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__program_target_scalar_common_1[6]), PairedModules_32, &OrderedPairs_33);
        mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[7]), OrderedPairs_33, OrderedModules_12);
        *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PairedModules_16;
        MR_Word RevOrderedPairs_17;
        MR_Word OrderedPairs_18;
        MR_Word Var_24;
        MR_Box conv6_STATE_VARIABLE_Info_20;
        MR_Box conv5_STATE_VARIABLE_IO_22;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (&make__program_target_scalar_common_7[0]));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (make__program_target__order_target_modules_8_p_0_4));
          MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_24, 3) = ((MR_Box) (ProgressStream_9));
          MR_hl_field(0, Var_24, 4) = ((MR_Box) (Globals_10));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Modules_11, &PairedModules_16, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv6_STATE_VARIABLE_Info_20, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_22);
        *STATE_VARIABLE_Info_20 = ((MR_Word) (conv6_STATE_VARIABLE_Info_20));
        mercury__list__sort_3_p_0((MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__program_target_scalar_common_1[8]), PairedModules_16, &RevOrderedPairs_17);
        mercury__list__reverse_2_p_0((MR_Word) (&make__program_target_scalar_common_1[1]), RevOrderedPairs_17, &OrderedPairs_18);
        mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[9]), OrderedPairs_18, OrderedModules_12);
      }
      break;
  }
}

static MR_bool MR_CALL 
make__program_target____Unify____build2_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__program_target____Unify____build2_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build2_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__program_target____Compare____build2_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__program_target____Unify____build3_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__program_target____Unify____build3_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build3_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__program_target____Compare____build3_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__program_target____Unify____build_what_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__program_target____Unify____build_what_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build_what_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__program_target____Compare____build_what_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__program_target____Unify____maybe_use_analysis_cache_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__program_target____Compare____maybe_use_analysis_cache_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__program_target__init(void)
{
}

void mercury__make__program_target__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_build2_1);
	MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_build3_1);
	MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_build_what_0);
	MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_maybe_use_analysis_cache_dir_0);
}

void mercury__make__program_target__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__program_target__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.program_target.
