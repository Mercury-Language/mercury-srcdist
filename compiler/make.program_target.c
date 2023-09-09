/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2023-09-09
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
#include "backend_libs.compile_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.file.mih"
#include "libs.check_libgrades.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
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
#include "make.hash.mih"
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.timestamp.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"



struct make__program_target__build_linked_target_2_18_p_0_env_0_s {
  MR_bool make__program_target__build_linked_target_2_18_p_0_env_0__succeeded;
  MR_Word make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuples_50;
  jmp_buf make__program_target__build_linked_target_2_18_p_0_env_0__commit_0;
  MR_Word make__program_target__build_linked_target_2_18_p_0_env_0__Var_95;
  MR_Word make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuple_129;
  MR_Box make__program_target__build_linked_target_2_18_p_0_env_0__conv5_ExtraObjTuple_129;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct5 make__program_target____vpti_pred_5__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

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
make__program_target__IntroducedFrom__pred__make_install_dirs__2022__1_5_p_0(
  MR_String IntsSubdir_14,
  MR_String LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1355__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1247__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word HeadVar__2_33);

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__690__1_1_f_0(
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__545__1_1_f_0(
  MR_String LambdaHeadVar__1_90);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__425__1_3_f_0(
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_String LambdaHeadVar__1_32);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__358__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word * HeadVar__2_40);

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
make__program_target__make_module_clean_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__install_directory_6_p_0(
  MR_Word Globals_7,
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
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
make__program_target__install_library_grade_2_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Info0_14,
  MR_Word CleanAfter_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0(
  MR_Word Globals_9,
  MR_Word Clean_10,
  MR_Word ModuleName_11,
  MR_Word AllModules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static MR_Word MR_CALL 
make__program_target__remove_grade_dependent_targets_3_f_0(
  MR_Word File_5,
  MR_Word _Status_6,
  MR_Word StatusMap0_7);

static MR_Word MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(
  MR_Word File_5,
  MR_Word StatusMap0_7);

static void MR_CALL 
make__program_target__install_extra_header_7_p_0(
  MR_Word Globals_8,
  MR_String IncDir_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Succeeded_0_14,
  MR_Word * STATE_VARIABLE_Succeeded_15);

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
make__program_target__install_subdir_file_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_String InstallDir_11,
  MR_Word ModuleName_12,
  MR_Tuple HeadVar__5_5,
  MR_Word * Succeeded_15);

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
make__program_target__collect_modules_with_children_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_ParentModules_0_18,
  MR_Word * STATE_VARIABLE_ParentModules_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__program_target__delete_java_class_timestamps_4_p_0(
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
make__program_target__compare_paired_modules_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Res_8);

static void MR_CALL 
make__program_target__pair_module_with_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word Module_9,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__make_misc_target_builder_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_misc_target_builder_10_p_0(
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word TargetType_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_53,
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
make__program_target__make_linked_target_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_linked_target_1_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkedTargetFile_12,
  MR_Word ExtraOptions_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word Globals_7,
  MR_String CacheDir_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0(
  MR_Word Var_46,
  MR_Word Var_47,
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Globals_8,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0(
  MR_Word Var_46,
  MR_Word Var_47,
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Globals_8,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static MR_bool MR_CALL 
make__program_target__build_analysis_files_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__program_target__build_analysis_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0(
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word AllModules_12,
  MR_Word Succeeded0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetModules_13,
  MR_Word LocalModulesOpts_14,
  MR_Word Succeeded0_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
make__program_target__should_we_use_analysis_cache_dir_5_p_0(
  MR_Word Globals_6,
  MR_Word Info_7,
  MR_Word * UseAnalysisCacheDir_8);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

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
make__program_target__install_library_grade_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkSucceeded0_12,
  MR_String GradeDir_13,
  MR_Word ModuleName_14,
  MR_Word AllModules_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0(
  MR_Word Globals_7,
  MR_String Grade_8,
  MR_Word * Result_9,
  MR_Word * LinkResult_10);

static void MR_CALL 
make__program_target__print_mkdir_errors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0(
  MR_Word Globals_8,
  MR_String Linkage_9,
  MR_String FileName_10,
  MR_String InstallDir_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
make__program_target__install_grade_init_6_p_0(
  MR_Word Globals_7,
  MR_String GradeDir_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0(
  MR_Word Globals_8,
  MR_Word LinkedTargetFile_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0(
  MR_Word Globals_8,
  MR_Word AllModules0_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__make_java_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_java_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__make_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word ObjModules_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__program_target__out_of_date_java_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word ObjModules_9,
  MR_Word * OutOfDateModules_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__program_target__build_linked_target_18_p_0(
  MR_Word MainModuleName_19,
  MR_Word FileType_20,
  MR_String FullMainModuleLinkedFileName_21,
  MR_String CurDirMainModuleLinkedFileName_22,
  MR_Word MaybeTimestamp_23,
  MR_Word AllModules_24,
  MR_Word ObjModules_25,
  MR_Word CompilationTarget_26,
  MR_Word PIC_27,
  MR_Word DepsSucceeded_28,
  MR_Word BuildDepsResult_29,
  MR_Word Globals_30,
  MR_Word ErrorStream_31,
  MR_Word * Succeeded_32,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0(
  MR_Word Globals_19,
  MR_Word MainModuleName_20,
  MR_Word FileType_21,
  MR_String FullMainModuleLinkedFileName_22,
  MR_String CurDirMainModuleLinkedFileName_23,
  MR_Word MaybeTimestamp_24,
  MR_Word AllModules_25,
  MR_Word ObjModules_26,
  MR_Word CompilationTarget_27,
  MR_Word PIC_28,
  MR_Word DepsSucceeded_29,
  MR_Word BuildDepsResult_30,
  MR_Word ErrorStream_31,
  MR_Word * Succeeded_32,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word Modules_9,
  MR_Word * OrderedModules_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

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
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__program_target_scalar_common_1[68][2];

static /* final */ const MR_Box make__program_target_scalar_common_2[12][3];

static /* final */ const MR_Box make__program_target_scalar_common_3[1][4];

static /* final */ const MR_Box make__program_target_scalar_common_4[7][1];

static /* final */ const MR_Box make__program_target_scalar_common_5[7][10];

static /* final */ const MR_Box make__program_target_scalar_common_6[3][6];

static /* final */ const MR_Box make__program_target_scalar_common_7[6][5];

static /* final */ const MR_Box make__program_target_scalar_common_8[6][11];

static /* final */ const MR_Box make__program_target_scalar_common_9[7][12];

static /* final */ const MR_Box make__program_target_scalar_common_10[2][8];

static /* final */ const MR_Box make__program_target_scalar_common_11[2][7];

static /* final */ const MR_Box make__program_target_scalar_common_12[3][13];

static /* final */ const MR_Box make__program_target_scalar_common_13[4][9];


struct make__program_target__vector_common_type_14_0_s {
  const MR_Word make__program_target__vector_common_type_14_0__vct_14_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_14_0_s make__program_target_vector_common_14[7];



static /* final */ const MR_Box make__program_target_scalar_common_1[68][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
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
    ((MR_Box) (&make__program_target_scalar_common_1[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[15]))),
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
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[22]))),
    ((MR_Box) ((MR_String) "mihs"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[24]))),
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
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "mh")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "int3")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "int2")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "analysis")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[43])))
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
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_Unsigned) 40U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[52])))
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
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[62])))
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
  /* row  66 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) (((MR_Unsigned) 0U << 2))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) (((MR_Unsigned) 1U << 2))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_2[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[0])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[1])),
    ((MR_Box) (make__program_target__build_linked_target_2_18_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__program_target_scalar_common_11[0])),
    ((MR_Box) (make__program_target__make_java_files_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[1])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[1])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[2])),
    ((MR_Box) (make__program_target__build_analysis_files_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[4])),
    ((MR_Box) (make__program_target__install_library_grade_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[5])),
    ((MR_Box) (make__program_target__get_module_foreign_object_files_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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
  { (MR_Box) ((MR_Unsigned) 12U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 14U) },
};

static /* final */ const MR_Box make__program_target_scalar_common_5[7][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
  /* row   6 */
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
};

static /* final */ const MR_Box make__program_target_scalar_common_6[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_7[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_8[6][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_status_result_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_9[7][12] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
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
  /* row   6 */
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

static /* final */ const MR_Box make__program_target_scalar_common_10[2][8] = {
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

static /* final */ const MR_Box make__program_target_scalar_common_11[2][7] = {
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
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_12[3][13] = {
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

static /* final */ const MR_Box make__program_target_scalar_common_13[4][9] = {
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__program_target__vector_common_type_14_0_s make__program_target_vector_common_14[7] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[7])) },
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


static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
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

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0) }
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

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 make__program_target____vpti_pred_5__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
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
  { (MR_PseudoTypeInfo) (&make__program_target____vpti_pred_5__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
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
  { (MR_PseudoTypeInfo) (&make__program_target____vpti_pred_7__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
make__program_target__IntroducedFrom__pred__make_install_dirs__2022__1_5_p_0(
  MR_String IntsSubdir_14,
  MR_String LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65)
{
  MR_String Var_70;
  MR_String Var_72;

  Var_72 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_64, (MR_String) "s");
  Var_70 = mercury__dir__f_slash_2_f_0(IntsSubdir_14, Var_72);
  mercury__dir__make_directory_4_p_0(Var_70, LambdaHeadVar__2_65);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1355__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_25, HeadVar__2_26);
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1247__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_11, ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__690__1_1_f_0(
  MR_Word LambdaHeadVar__1_31)
{
  MR_String LambdaHeadVar__2_32 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_31, (MR_Integer) 2))));

  return LambdaHeadVar__2_32;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__545__1_1_f_0(
  MR_String LambdaHeadVar__1_90)
{
  MR_Word LambdaHeadVar__2_91;

  {
    LambdaHeadVar__2_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_91, 0) = ((MR_Box) (LambdaHeadVar__1_90));
  }
  return LambdaHeadVar__2_91;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__425__1_3_f_0(
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_String LambdaHeadVar__1_32)
{
  MR_Word LambdaHeadVar__2_33;
  MR_Word Var_34;
  MR_Word Var_35;

  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_35, 1) = (MR_Box) ((MR_Unsigned) (PIC_12));
    MR_hl_field(3, Var_35, 2) = ((MR_Box) (LambdaHeadVar__1_32));
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (Var_35));
  }
  {
    LambdaHeadVar__2_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_33, 0) = ((MR_Box) (Var_34));
  }
  return LambdaHeadVar__2_33;
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__358__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word * HeadVar__2_40)
{
  MR_Box conv0_HeadVar__2_40;

  mercury__pair__snd_2_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_39, &conv0_HeadVar__2_40);
  *HeadVar__2_40 = ((MR_Word) (conv0_HeadVar__2_40));
}

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
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
        {
          MR_String Var_21 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_22 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_String ArgY2_12 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_10;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_10, Var_22, ArgY1_9);
                succeeded = (SubResult1_10 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_10;
                else
                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_21, ArgY2_12);
              }
              break;
          }
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

  make__program_target__make_module_clean_6_p_0(Globals_9, ModuleName_10, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_20_20);
  Var_25 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
  Var_74 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) "\'");
  Part1_13 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up interface files for module \140", Var_74);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_13, &CleaningMsg_14);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, CleaningMsg_14);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__program_target__make_module_realclean_7_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_45, 5) = ((MR_Box) ((MR_String) "predicate \140make.program_target.make_module_realclean\'/7"));
    MR_hl_field(0, Var_45, 6) = ((MR_Box) ((MR_Integer) 73));
    MR_hl_field(0, Var_45, 7) = ((MR_Box) (ModuleName_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[63])), ((MR_Box) (STATE_VARIABLE_Info_20_20)), &conv2_STATE_VARIABLE_Info_46_46, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
  STATE_VARIABLE_Info_46_46 = ((MR_Word) (conv2_STATE_VARIABLE_Info_46_46));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 73, ModuleName_10, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[4])), STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_52_52);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 73, ModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[64])), STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_57_57);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 73, ModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[65])), STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_17);
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
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_23, 1) = (MR_Box) ((MR_Unsigned) (PIC_13));
    MR_hl_field(3, Var_23, 2) = ((MR_Box) (FactTableFile_14));
  }
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_10, Globals_11, (MR_String) "predicate \140make.program_target.remove_fact_table_object_and_assembler_files\'/9", (MR_Integer) 73, ModuleName_12, Var_23, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
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

  parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(Globals_9, (MR_String) "predicate \140make.program_target.remove_fact_table_c_file\'/7", (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[55])), FactTableFile_10, &_FactTableDirs_13, &FactTableCFile_14);
  make__util__remove_file_for_make_8_p_0(ProgressStream_8, Globals_9, (MR_Integer) 73, FactTableCFile_14, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_4(
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
make__program_target__make_module_clean_6_p_0_3(
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
make__program_target__make_module_clean_6_p_0_2(
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
make__program_target__make_module_clean_6_p_0_1(
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
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word ProgressStream_11;
  MR_String Part1_12;
  MR_String CleaningMsg_13;
  MR_Word MaybeModuleDepInfo_14;
  MR_Word FactTableFiles_17;
  MR_Word CCodeModule_18;
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
  MR_Word STATE_VARIABLE_Info_29_100;
  MR_Word Var_103;
  MR_Word STATE_VARIABLE_Info_24_110;
  MR_Word STATE_VARIABLE_Info_29_115;
  MR_Word Var_118;
  MR_Box conv2_STATE_VARIABLE_Info_32_32;
  MR_Box conv1_STATE_VARIABLE_IO_33_33;
  MR_Box conv5_STATE_VARIABLE_Info_62_62;
  MR_Box conv4_STATE_VARIABLE_IO_63_63;
  MR_Box conv8_STATE_VARIABLE_Info_71_71;
  MR_Box conv7_STATE_VARIABLE_IO_72_72;
  MR_Box conv11_STATE_VARIABLE_Info_20;
  MR_Box conv10_STATE_VARIABLE_IO_22;

  mercury__io__output_stream_3_p_0(&ProgressStream_11);
  Var_27 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_8);
  Var_90 = mercury__string__f_43_43_2_f_0(Var_27, (MR_String) "\'.");
  Part1_12 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up target files for module \140", Var_90);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_7, Part1_12, &CleaningMsg_13);
  make__util__maybe_write_msg_4_p_0(ProgressStream_11, CleaningMsg_13);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) ((MR_String) "predicate \140make.program_target.make_module_clean\'/6"));
    MR_hl_field(0, Var_30, 6) = ((MR_Box) ((MR_Integer) 73));
    MR_hl_field(0, Var_30, 7) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[53])), ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv2_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33_33);
  STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv2_STATE_VARIABLE_Info_32_32));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[54])), STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_51_51);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[6])), STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_56_56);
  make__module_dep_file__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_7, ModuleName_8, &MaybeModuleDepInfo_14, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_59_59);
  if ((MaybeModuleDepInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    FactTableFiles_17 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleDepInfo_15 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_14, (MR_Integer) 0))));
    MR_Word FactTableFilesSet_16;

    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_15, &FactTableFilesSet_16);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_16, &FactTableFiles_17);
  }
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_5[6]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_2));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) (Globals_7));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, FactTableFiles_17, ((MR_Box) (STATE_VARIABLE_Info_59_59)), &conv5_STATE_VARIABLE_Info_62_62, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_63_63);
  STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv5_STATE_VARIABLE_Info_62_62));
  parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_8, (MR_Integer) 0, &CCodeModule_18);
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_11, Globals_7, (MR_String) "predicate \140make.program_target.make_module_clean\'/6", (MR_Integer) 73, CCodeModule_18, (MR_Word) ((MR_Unsigned) 36U), STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_68_68);
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_11, Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/9", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[0])), STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_24_95);
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_11, Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/9", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[66])), STATE_VARIABLE_Info_24_95, &STATE_VARIABLE_Info_29_100);
  {
    Var_103 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_103, 0) = ((MR_Box) (&make__program_target_scalar_common_9[6]));
    MR_hl_field(0, Var_103, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_3));
    MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_103, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_103, 4) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_103, 5) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, Var_103, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_103, FactTableFiles_17, ((MR_Box) (STATE_VARIABLE_Info_29_100)), &conv8_STATE_VARIABLE_Info_71_71, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_72_72);
  STATE_VARIABLE_Info_71_71 = ((MR_Word) (conv8_STATE_VARIABLE_Info_71_71));
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_11, Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/9", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[1])), STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_24_110);
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_11, Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/9", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[67])), STATE_VARIABLE_Info_24_110, &STATE_VARIABLE_Info_29_115);
  {
    Var_118 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_118, 0) = ((MR_Box) (&make__program_target_scalar_common_9[6]));
    MR_hl_field(0, Var_118, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_4));
    MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_118, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_118, 4) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_118, 5) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, Var_118, 6) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, FactTableFiles_17, ((MR_Box) (STATE_VARIABLE_Info_29_115)), &conv11_STATE_VARIABLE_Info_20, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_22);
  *STATE_VARIABLE_Info_20 = ((MR_Word) (conv11_STATE_VARIABLE_Info_20));
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
make__program_target__install_directory_6_p_0(
  MR_Word Globals_7,
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10)
{
  MR_Word ErrorStream_14;
  MR_String InstallMsg_15;
  MR_String Command_16;

  mercury__io__output_stream_3_p_0(&ErrorStream_14);
  make__util__verbose_make_four_part_msg_6_p_0(Globals_7, (MR_String) "Installing directory", SourceDirName_8, (MR_String) "in", InstallDir_9, &InstallMsg_15);
  make__util__maybe_write_msg_4_p_0(ErrorStream_14, InstallMsg_15);
  Command_16 = libs__file_util__make_install_dir_command_3_f_0(Globals_7, SourceDirName_8, InstallDir_9);
  parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_7, ErrorStream_14, ErrorStream_14, ErrorStream_14, (MR_Integer) 0, Command_16, Succeeded_10);
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

  make__module_dep_file__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_12, ModuleName_15, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
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

    libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 670, &Prefix_21);
    Var_42 = mercury__dir__f_slash_2_f_0(Prefix_21, (MR_String) "lib");
    LibDir_22 = mercury__dir__f_slash_2_f_0(Var_42, (MR_String) "mercury");
    libs__globals__get_target_2_p_0(Globals_12, &Target_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 310, &HighLevelCode_24);
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
      make__program_target__install_subdir_file_8_p_0(Globals_12, LinkSucceeded_13, GradeIncDir_25, ModuleName_15, (MR_Tuple) (&make__program_target_scalar_common_1[23]), &HeaderSucceeded1_26);
      IntDir_27 = mercury__dir__f_slash_2_f_0(LibDir_22, (MR_String) "ints");
      make__program_target__install_subdir_file_8_p_0(Globals_12, LinkSucceeded_13, IntDir_27, ModuleName_15, (MR_Tuple) (&make__program_target_scalar_common_1[23]), &HeaderSucceeded2_28);
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
        make__program_target__install_subdir_file_8_p_0(Globals_12, LinkSucceeded_13, GradeIntDir_30, ModuleName_15, (MR_Tuple) (&make__program_target_scalar_common_1[16]), &OptSucceeded_32);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 505, &IntermodAnalysis_33);
    switch (IntermodAnalysis_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IntermodAnalysisSucceeded_34 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__program_target__install_subdir_file_8_p_0(Globals_12, LinkSucceeded_13, GradeIntDir_30, ModuleName_15, (MR_Tuple) (&make__program_target_scalar_common_1[25]), &IntermodAnalysisSucceeded_34);
        break;
    }
    Var_74 = libs__maybe_util__and_2_f_0(HeaderSucceeded_29, OptSucceeded_32);
    *Succeeded_16 = libs__maybe_util__and_2_f_0(Var_74, IntermodAnalysisSucceeded_34);
  }
}

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Info0_14,
  MR_Word CleanAfter_15,
  MR_Word * Succeeded_16)
{
  MR_Word LibSucceeded_18;
  MR_Word Info1_19;
  MR_Word Specs_20;
  MR_Word Var_26;

  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (ModuleName_12));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  make__program_target__make_misc_target_9_p_0(Globals_10, Var_26, &LibSucceeded_18, Info0_14, &Info1_19, (MR_Word) ((MR_Unsigned) 0U), &Specs_20);
  switch (LibSucceeded_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        parse_tree__write_error_spec__write_error_specs_4_p_0(Globals_10, Specs_20);
        *Succeeded_16 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String GradeDir_21;
        MR_Word Info2_22;
        MR_Word _Info_23;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_10, &GradeDir_21);
        make__program_target__install_library_grade_files_10_p_0(Globals_10, LinkSucceeded0_11, GradeDir_21, ModuleName_12, AllModules_13, Succeeded_16, Info1_19, &Info2_22);
        make__program_target__maybe_make_grade_clean_8_p_0(Globals_10, CleanAfter_15, ModuleName_12, AllModules_13, Info2_22, &_Info_23);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_20;

  make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_2(
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
make__program_target__maybe_make_grade_clean_8_p_0_1(
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
make__program_target__maybe_make_grade_clean_8_p_0(
  MR_Word Globals_9,
  MR_Word Clean_10,
  MR_Word ModuleName_11,
  MR_Word AllModules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  switch (Clean_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProgressStream_19;
        MR_String Grade_20;
        MR_String Part1_21;
        MR_String CleaningMsg_22;
        MR_String Var_24;
        MR_Word STATE_VARIABLE_Info_30_26;
        MR_Word Var_28;
        MR_String Var_33;
        MR_String Var_35;
        MR_String Var_36;
        MR_Word ProgressStream_38;
        MR_String Part1_39;
        MR_String CleaningMsg_40;
        MR_Word FileNames_42;
        MR_Word ThisDirFileNames_43;
        MR_String FullInitFileName_44;
        MR_String ThisDirInitFileName_45;
        MR_Word FilesToRemove_46;
        MR_String Var_48;
        MR_Word Var_50;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_58;
        MR_Word STATE_VARIABLE_Info_55_59;
        MR_String Var_68;
        MR_Word STATE_VARIABLE_Info_20_71;
        MR_Word STATE_VARIABLE_Info_24_75;
        MR_Box conv2_STATE_VARIABLE_IO_46_51;
        MR_Box conv5_STATE_VARIABLE_Info_55_59;
        MR_Box conv4_STATE_VARIABLE_IO_56_60;
        MR_Box conv8_STATE_VARIABLE_Info_16;
        MR_Box conv7_STATE_VARIABLE_IO_18;

        mercury__io__output_stream_3_p_0(&ProgressStream_19);
        libs__compute_grade__grade_directory_component_2_p_0(Globals_9, &Grade_20);
        Var_24 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_11);
        Var_33 = mercury__string__f_43_43_2_f_0(Grade_20, (MR_String) ".");
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "\' in grade ", Var_33);
        Var_36 = mercury__string__f_43_43_2_f_0(Var_24, Var_35);
        Part1_21 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up grade-dependent files for \140", Var_36);
        make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_21, &CleaningMsg_22);
        make__util__maybe_write_msg_4_p_0(ProgressStream_19, CleaningMsg_22);
        mercury__io__output_stream_3_p_0(&ProgressStream_38);
        Var_48 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_11);
        Var_68 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "\'.");
        Part1_39 = mercury__string__f_43_43_2_f_0((MR_String) "Removing executable and library files for \140", Var_68);
        make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_39, &CleaningMsg_40);
        make__util__maybe_write_msg_4_p_0(ProgressStream_38, CleaningMsg_40);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__program_target_scalar_common_5[4]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_1));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (Globals_9));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) (ModuleName_11));
        }
        mercury__list__map2_foldl_6_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[44])), &FileNames_42, &ThisDirFileNames_43, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_46_51);
        parse_tree__file_names__module_name_to_file_name_full_curdir_6_p_0(Globals_9, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/6", (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[5])), ModuleName_11, &FullInitFileName_44, &ThisDirInitFileName_45);
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (ThisDirInitFileName_45));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (FullInitFileName_44));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
        }
        Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_43, Var_55);
        FilesToRemove_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_42, Var_54);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_58, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
          MR_hl_field(0, Var_58, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_2));
          MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_58, 3) = ((MR_Box) (ProgressStream_38));
          MR_hl_field(0, Var_58, 4) = ((MR_Box) (Globals_9));
          MR_hl_field(0, Var_58, 5) = ((MR_Box) ((MR_Integer) 73));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, FilesToRemove_46, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv5_STATE_VARIABLE_Info_55_59, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_56_60);
        STATE_VARIABLE_Info_55_59 = ((MR_Word) (conv5_STATE_VARIABLE_Info_55_59));
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_38, Globals_9, (MR_Integer) 73, ModuleName_11, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[45])), STATE_VARIABLE_Info_55_59, &STATE_VARIABLE_Info_20_71);
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_38, Globals_9, (MR_Integer) 73, ModuleName_11, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[46])), STATE_VARIABLE_Info_20_71, &STATE_VARIABLE_Info_24_75);
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_38, Globals_9, (MR_Integer) 73, ModuleName_11, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[47])), STATE_VARIABLE_Info_24_75, &STATE_VARIABLE_Info_30_26);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_13[3]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_3));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (Globals_9));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, AllModules_12, ((MR_Box) (STATE_VARIABLE_Info_30_26)), &conv8_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_18);
        *STATE_VARIABLE_Info_16 = ((MR_Word) (conv8_STATE_VARIABLE_Info_16));
      }
      break;
  }
}

static MR_Word MR_CALL 
make__program_target__remove_grade_dependent_targets_3_f_0(
  MR_Word File_5,
  MR_Word _Status_6,
  MR_Word StatusMap0_7)
{
  MR_Word StatusMap_8;

  StatusMap_8 = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(File_5, StatusMap0_7);
  return StatusMap_8;
}

static MR_Word MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(
  MR_Word File_5,
  MR_Word StatusMap0_7)
{
  MR_bool succeeded = ((MR_tag((MR_Word) File_5)) == (MR_Integer) 0);
  MR_Word StatusMap_8;
  MR_Word Target_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Var_11 = ((MR_Word) ((MR_hl_field(0, File_5, (MR_Integer) 0))));
    Target_10 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    succeeded = make__util__target_is_grade_or_arch_dependent_1_p_0(Target_10);
  }
  if (succeeded)
    StatusMap_8 = mercury__version_hash_table__delete_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), StatusMap0_7, ((MR_Box) (File_5)));
  else
    StatusMap_8 = StatusMap0_7;
  return StatusMap_8;
}

static void MR_CALL 
make__program_target__install_extra_header_7_p_0(
  MR_Word Globals_8,
  MR_String IncDir_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Succeeded_0_14,
  MR_Word * STATE_VARIABLE_Succeeded_15)
{
  MR_Word InstallSucceeded_13;
  MR_Word ErrorStream_20;
  MR_String InstallMsg_21;
  MR_String Command_22;

  mercury__io__output_stream_3_p_0(&ErrorStream_20);
  make__util__verbose_make_four_part_msg_6_p_0(Globals_8, (MR_String) "Installing file", FileName_10, (MR_String) "in", IncDir_9, &InstallMsg_21);
  make__util__maybe_write_msg_4_p_0(ErrorStream_20, InstallMsg_21);
  Command_22 = libs__file_util__make_install_file_command_3_f_0(Globals_8, FileName_10, IncDir_9);
  parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_8, ErrorStream_20, ErrorStream_20, ErrorStream_20, (MR_Integer) 0, Command_22, &InstallSucceeded_13);
  *STATE_VARIABLE_Succeeded_15 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_14, InstallSucceeded_13);
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
  MR_Word conv0_Succeeded_15;

  make__program_target__install_subdir_file_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_Succeeded_15);
  *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_15));
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

  make__module_dep_file__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_17, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *Succeeded_14 = (MR_Integer) 0;
  else
  {
    MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_17, (MR_Integer) 0))));
    MR_Word Children_19;
    MR_Word Exts0_20;
    MR_Word AnyIntermod_21;
    MR_Word Exts1_22;
    MR_Word Exts_23;
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
      Exts0_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
      Exts0_20 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[14]));
    libs__globals__get_any_intermod_2_p_0(Globals_11, &AnyIntermod_21);
    switch (AnyIntermod_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Exts1_22 = Exts0_20;
        break;
      case (MR_Integer) 1:
        {
          Exts1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Exts1_22, 0) = ((MR_Box) (&make__program_target_scalar_common_1[16]));
          MR_hl_field(1, Exts1_22, 1) = ((MR_Box) (Exts0_20));
        }
        break;
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_1[20]));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Exts1_22));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_1[19]));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (&make__program_target_scalar_common_1[18]));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_56));
    }
    {
      Exts_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Exts_23, 0) = ((MR_Box) (&make__program_target_scalar_common_1[17]));
      MR_hl_field(1, Exts_23, 1) = ((MR_Box) (Var_51));
    }
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 670, &Prefix_24);
    Var_67 = mercury__dir__f_slash_2_f_0(Prefix_24, (MR_String) "lib");
    LibDir_25 = mercury__dir__f_slash_2_f_0(Var_67, (MR_String) "mercury");
    Var_72 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (&make__program_target_scalar_common_8[5]));
      MR_hl_field(0, Var_70, 1) = ((MR_Box) (make__program_target__install_ints_and_headers_9_p_0_1));
      MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_70, 3) = ((MR_Box) (Globals_11));
      MR_hl_field(0, Var_70, 4) = ((MR_Box) (SubdirLinkSucceeded_12));
      MR_hl_field(0, Var_70, 5) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_70, 6) = ((MR_Box) (ModuleName_13));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&make__program_target_scalar_common_3[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, Exts_23, &Results_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_71_71);
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
          MR_Word ErrorStream_98;
          MR_String InstallMsg_99;
          MR_String Command_100;

          parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140make.program_target.install_ints_and_headers\'/9", (MR_Word) (&make__program_target_scalar_common_4[0]), ModuleName_13, &FileName_28);
          Var_77 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "inc");
          mercury__io__output_stream_3_p_0(&ErrorStream_98);
          make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_28, (MR_String) "in", Var_77, &InstallMsg_99);
          make__util__maybe_write_msg_4_p_0(ErrorStream_98, InstallMsg_99);
          Command_100 = libs__file_util__make_install_file_command_3_f_0(Globals_11, FileName_28, Var_77);
          parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ErrorStream_98, ErrorStream_98, ErrorStream_98, (MR_Integer) 0, Command_100, &HeaderSucceeded1_29);
          Var_80 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
          make__program_target__install_subdir_file_8_p_0(Globals_11, SubdirLinkSucceeded_12, Var_80, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[21]), &HeaderSucceeded2_30);
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
make__program_target__install_subdir_file_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_String InstallDir_11,
  MR_Word ModuleName_12,
  MR_Tuple HeadVar__5_5,
  MR_Word * Succeeded_15)
{
  MR_Word Ext_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 0))));
  MR_String Exts_14 = ((MR_String) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 1))));
  MR_String FileName_17;
  MR_Word Succeeded1_18;
  MR_Word ErrorStream_30;
  MR_String InstallMsg_31;
  MR_String Command_32;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_9, (MR_String) "predicate \140make.program_target.install_subdir_file\'/8", Ext_13, ModuleName_12, &FileName_17);
  mercury__io__output_stream_3_p_0(&ErrorStream_30);
  make__util__verbose_make_four_part_msg_6_p_0(Globals_9, (MR_String) "Installing file", FileName_17, (MR_String) "in", InstallDir_11, &InstallMsg_31);
  make__util__maybe_write_msg_4_p_0(ErrorStream_30, InstallMsg_31);
  Command_32 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_17, InstallDir_11);
  parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ErrorStream_30, ErrorStream_30, ErrorStream_30, (MR_Integer) 0, Command_32, &Succeeded1_18);
  switch (SubdirLinkSucceeded_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Succeeded2_19;
        MR_String Var_24;
        MR_String Var_26;
        MR_Word ErrorStream_40;
        MR_String InstallMsg_41;
        MR_String Command_42;

        Var_26 = mercury__dir__f_slash_2_f_0(InstallDir_11, (MR_String) "Mercury");
        Var_24 = mercury__dir__f_slash_2_f_0(Var_26, Exts_14);
        mercury__io__output_stream_3_p_0(&ErrorStream_40);
        make__util__verbose_make_four_part_msg_6_p_0(Globals_9, (MR_String) "Installing file", FileName_17, (MR_String) "in", Var_24, &InstallMsg_41);
        make__util__maybe_write_msg_4_p_0(ErrorStream_40, InstallMsg_41);
        Command_42 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_17, Var_24);
        parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ErrorStream_40, ErrorStream_40, ErrorStream_40, (MR_Integer) 0, Command_42, &Succeeded2_19);
        *Succeeded_15 = libs__maybe_util__and_2_f_0(Succeeded1_18, Succeeded2_19);
      }
      break;
    case (MR_Integer) 1:
      *Succeeded_15 = Succeeded1_18;
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
  {
    Dep_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Dep_6, 0) = ((MR_Box) (Var_11));
  }
  DepStatusMap0_7 = make__make_info__make_info_get_dependency_status_1_f_0(STATE_VARIABLE_Info_0_9);
  mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_6)), ((MR_Box) ((MR_Integer) 0)), DepStatusMap0_7, &DepStatusMap_8);
  make__make_info__make_info_set_dependency_status_3_p_0(DepStatusMap_8, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
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

  make__module_dep_file__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_12, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
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
make__program_target__collect_modules_with_children_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_ParentModules_0_18,
  MR_Word * STATE_VARIABLE_ParentModules_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word ProgressStream_14;
  MR_Word MaybeModuleDepInfo_15;

  mercury__io__output_stream_3_p_0(&ProgressStream_14);
  make__module_dep_file__get_maybe_module_dep_info_8_p_0(ProgressStream_14, Globals_9, ModuleName_10, &MaybeModuleDepInfo_15, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  if ((MaybeModuleDepInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ParentModules_19 = STATE_VARIABLE_ParentModules_0_18;
  else
  {
    MR_Word ModuleDepInfo_16 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_15, (MR_Integer) 0))));
    MR_Word Children_17;

    parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_16, &Children_17);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_17);
    if (succeeded)
      *STATE_VARIABLE_ParentModules_19 = STATE_VARIABLE_ParentModules_0_18;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ParentModules_19 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParentModules_0_18));
      }
  }
}

static void MR_CALL 
make__program_target__delete_java_class_timestamps_4_p_0(
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
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (FileName_5)), ((MR_Box) (MaybeTimestamp_6)), STATE_VARIABLE_Timestamps_0_8, STATE_VARIABLE_Timestamps_9);
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

  make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 77, FullMainModuleLinkedFileName_15, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_24_24);
  succeeded = (strcmp(FullMainModuleLinkedFileName_15, CurDirMainModuleLinkedFileName_16) == 0);
  if (succeeded)
    STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_24_24;
  else
    make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 77, CurDirMainModuleLinkedFileName_16, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_27_27);
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

        make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_12, (MR_Integer) 77, MainModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[45])), STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_20_31);
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_12, (MR_Integer) 77, MainModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[46])), STATE_VARIABLE_Info_20_31, &STATE_VARIABLE_Info_24_35);
        make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_12, (MR_Integer) 77, MainModuleName_13, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[47])), STATE_VARIABLE_Info_24_35, STATE_VARIABLE_Info_20);
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

static MR_Box MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_32;

  conv0_LambdaHeadVar__2_32 = make__program_target__IntroducedFrom__func__get_module_foreign_object_files__690__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

  make__module_dep_file__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_17, STATE_VARIABLE_MakeInfo_0_23, STATE_VARIABLE_MakeInfo_24);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_module_foreign_object_files\'/9", (MR_String) "error in dependencies");
      return;
    }
  else
  {
    MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_17, (MR_Integer) 0))));
    MR_Word ForeignFiles_19;

    make__module_target__external_foreign_code_files_6_p_0(Globals_11, PIC_12, ModuleDepInfo_18, &ForeignFiles_19);
    *ForeignObjectFiles_14 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[11]), ForeignFiles_19);
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

  conv0_LambdaHeadVar__2_33 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__425__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
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
  make__module_dep_file__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
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
          MR_hl_field(0, FactFileToTarget_20, 0) = ((MR_Box) (&make__program_target_scalar_common_11[1]));
          MR_hl_field(0, FactFileToTarget_20, 1) = ((MR_Box) (make__program_target__get_foreign_object_targets_9_p_0_1));
          MR_hl_field(0, FactFileToTarget_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FactFileToTarget_20, 3) = ((MR_Box) (PIC_12));
          MR_hl_field(0, FactFileToTarget_20, 4) = ((MR_Box) (ModuleName_13));
        }
        parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_19, &FactTableFiles_22);
        Var_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_22);
        *ObjectTargets_14 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), FactFileToTarget_20, Var_36);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ObjectTargets_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
make__program_target__compare_paired_modules_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Res_8)
{
  MR_Word TimeA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word ModuleA_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word TimeB_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ModuleB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word TimeRes_9;

  libs__timestamp____Compare____timestamp_0_0(&TimeRes_9, TimeA_4, TimeB_6);
  switch (TimeRes_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Res_8 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      mdbcomp__sym_name____Compare____sym_name_0_0(Res_8, ModuleA_5, ModuleB_7);
      break;
    case (MR_Integer) 2:
      *Res_8 = (MR_Integer) 1;
      break;
  }
}

static void MR_CALL 
make__program_target__pair_module_with_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word Module_9,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word Timestamp_10;
  MR_Word ProgressStream_13;
  MR_Word Target_15;
  MR_Word MaybeTimestamp_16;

  mercury__io__output_stream_3_p_0(&ProgressStream_13);
  {
    Target_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Target_15, 0) = ((MR_Box) (Module_9));
    MR_hl_field(0, Target_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__timestamp__get_target_timestamp_9_p_0(ProgressStream_13, Globals_8, (MR_Integer) 0, Target_15, &MaybeTimestamp_16, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  if (((MR_tag((MR_Word) MaybeTimestamp_16)) == (MR_Integer) 1))
    Timestamp_10 = libs__timestamp__oldest_timestamp_0_f_0();
  else
    Timestamp_10 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_16, (MR_Integer) 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Module_9));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_16;

  make__program_target__maybe_make_grade_clean_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Info_16);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Succeeded_16;

  make__program_target__install_library_grade_2_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &conv1_Succeeded_16);
  *wrapper_arg_1 = ((MR_Box) (conv1_Succeeded_16));
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  make__hash__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
make__program_target__install_library_grade_10_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Globals_14,
  MR_String Grade_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  MR_Word SubdirSetting_19;
  MR_Word CleanAfter_20;
  MR_Word OptionArgs0_21;
  MR_Word OptionArgs_22;
  MR_Word ProgressStream_23;
  MR_String InstallMsg_24;
  MR_Word MaybeMCFlags_25;
  MR_Word OptionsSpecs_32;
  MR_Word LibGlobals_33;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_56;

  libs__globals__get_subdir_setting_2_p_0(Globals_14, &SubdirSetting_19);
  switch (SubdirSetting_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      CleanAfter_20 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      CleanAfter_20 = (MR_Integer) 0;
      break;
  }
  OptionArgs0_21 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_43);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Grade_15));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[8])));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_String) "--grade"));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
  }
  OptionArgs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs0_21, Var_47);
  mercury__io__output_stream_3_p_0(&ProgressStream_23);
  make__util__verbose_make_two_part_msg_4_p_0(Globals_14, (MR_String) "Installing grade", Grade_15, &InstallMsg_24);
  make__util__maybe_write_msg_4_p_0(ProgressStream_23, InstallMsg_24);
  Var_56 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_0_43);
  make__options_file__lookup_mmc_options_2_p_0(Var_56, &MaybeMCFlags_25);
  if (((MR_tag((MR_Word) MaybeMCFlags_25)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_34 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags_25, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_4_p_0(Globals_14, LookupSpecs_34);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.install_library_grade\'/10", (MR_String) "bad DEFAULT_MCFLAGS");
      return;
    }
  }
  else
  {
    MR_Word MCFlags_26 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags_25, (MR_Integer) 0))));
    MR_Word DefaultOptionTable_27;
    MR_Word DetectedGradeFlags_28;
    MR_Word AllFlags_29;
    MR_Word Var_57;
    MR_Word Var_30;
    MR_Word Var_31;

    libs__globals__get_default_options_2_p_0(Globals_14, &DefaultOptionTable_27);
    DetectedGradeFlags_28 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_0_43);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_26, OptionArgs_22);
    AllFlags_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_28, Var_57);
    libs__handle_options__handle_given_options_9_p_0(ProgressStream_23, DefaultOptionTable_27, AllFlags_29, &Var_30, &Var_31, &OptionsSpecs_32, &LibGlobals_33);
  }
  if ((OptionsSpecs_32 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StatusMap_38;
    MR_Word VeryVerbose_39;
    MR_Box Cookie_40;
    MR_Word Succeeded0_41;
    MR_Word Cleanup_42;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word Var_69;
    MR_Box conv3_STATE_VARIABLE_Info_44;

    StatusMap_38 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__program_target_scalar_common_2[10]));
    make__make_info__make_info_set_dependency_status_3_p_0(StatusMap_38, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_65_65);
    make__make_info__make_info_set_option_args_3_p_0(OptionArgs_22, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_66_66);
    libs__globals__lookup_bool_option_3_p_0(LibGlobals_33, (MR_Integer) 73, &VeryVerbose_39);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_40);
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) (&make__program_target_scalar_common_9[5]));
      MR_hl_field(0, Var_69, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_2));
      MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(0, Var_69, 3) = ((MR_Box) (LibGlobals_33));
      MR_hl_field(0, Var_69, 4) = ((MR_Box) (LinkSucceeded0_11));
      MR_hl_field(0, Var_69, 5) = ((MR_Box) (ModuleName_12));
      MR_hl_field(0, Var_69, 6) = ((MR_Box) (AllModules_13));
      MR_hl_field(0, Var_69, 7) = ((MR_Box) (STATE_VARIABLE_Info_66_66));
      MR_hl_field(0, Var_69, 8) = ((MR_Box) (CleanAfter_20));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_69, &Succeeded0_41);
    {
      Cleanup_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_42, 0) = ((MR_Box) (&make__program_target_scalar_common_8[4]));
      MR_hl_field(0, Cleanup_42, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_3));
      MR_hl_field(0, Cleanup_42, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Cleanup_42, 3) = ((MR_Box) (LibGlobals_33));
      MR_hl_field(0, Cleanup_42, 4) = ((MR_Box) (CleanAfter_20));
      MR_hl_field(0, Cleanup_42, 5) = ((MR_Box) (ModuleName_12));
      MR_hl_field(0, Cleanup_42, 6) = ((MR_Box) (AllModules_13));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_39, Cookie_40, Cleanup_42, Succeeded0_41, Succeeded_16, ((MR_Box) (STATE_VARIABLE_Info_66_66)), &conv3_STATE_VARIABLE_Info_44);
    *STATE_VARIABLE_Info_44 = ((MR_Word) (conv3_STATE_VARIABLE_Info_44));
  }
  else
  {
    MR_Word ErrorStream_37;

    libs__globals__get_error_output_stream_5_p_0(Globals_14, ModuleName_12, &ErrorStream_37);
    libs__handle_options__usage_errors_5_p_0(ErrorStream_37, Globals_14, OptionsSpecs_32);
    *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
  }
}

void MR_CALL 
make__program_target__make_misc_target_9_p_0(
  MR_Word Globals_10,
  MR_Word HeadVar__2_2,
  MR_Word * Succeeded_13,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word MainModuleName_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TargetType_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word DefaultOptionTable_17;
  MR_Word DetectedGradeFlags_18;
  MR_Word OptionVariables_19;
  MR_Word OptionArgs_20;
  MR_Word MayBuild_22;

  libs__globals__get_default_options_2_p_0(Globals_10, &DefaultOptionTable_17);
  DetectedGradeFlags_18 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_0_26);
  OptionVariables_19 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_0_26);
  OptionArgs_20 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_26);
  make__build__setup_for_build_with_module_options_10_p_0(DefaultOptionTable_17, (MR_Integer) 1, MainModuleName_11, DetectedGradeFlags_18, OptionVariables_19, OptionArgs_20, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_22);
  if (((MR_tag((MR_Word) MayBuild_22)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_24 = ((MR_Word) ((MR_hl_field(1, MayBuild_22, (MR_Integer) 1))));

    make__program_target__make_misc_target_builder_10_p_0(BuildGlobals_24, MainModuleName_11, TargetType_12, Succeeded_13, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
  }
  else
  {
    MR_Word Specs_15 = ((MR_Word) ((MR_hl_field(0, MayBuild_22, (MR_Integer) 0))));
    MR_Word ErrorStream_25;

    libs__globals__get_error_output_stream_5_p_0(Globals_10, MainModuleName_11, &ErrorStream_25);
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_25, Globals_10, Specs_15);
    *Succeeded_13 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_10_p_0_3(
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
make__program_target__make_misc_target_builder_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Info_20;

  make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_10_p_0_1(
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
make__program_target__make_misc_target_builder_10_p_0(
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word TargetType_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_bool succeeded;
  MR_Word RebuildModuleDeps_18;
  MR_Word Succeeded0_19;
  MR_Word AllModulesSet_20;
  MR_Word AllModules_21;
  MR_Word ProgressStream_22;
  MR_Word STATE_VARIABLE_Info_37_37;
  MR_Word STATE_VARIABLE_Info_38_38;
  MR_Word STATE_VARIABLE_Info_40_40;

  RebuildModuleDeps_18 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(STATE_VARIABLE_Info_0_30);
  if ((TargetType_13 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if ((TargetType_13 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
    make__make_info__make_info_set_rebuild_module_deps_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_37_37);
  else
    STATE_VARIABLE_Info_37_37 = STATE_VARIABLE_Info_0_30;
  make__dependencies__find_reachable_local_modules_8_p_0(Globals_11, MainModuleName_12, &Succeeded0_19, &AllModulesSet_20, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
  make__make_info__make_info_set_rebuild_module_deps_3_p_0(RebuildModuleDeps_18, STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_Info_40_40);
  AllModules_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModulesSet_20);
  mercury__io__output_stream_3_p_0(&ProgressStream_22);
  switch (MR_tag((MR_Word) TargetType_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_42;
            MR_Word STATE_VARIABLE_Info_43_43;
            MR_Word STATE_VARIABLE_Info_20_121;
            MR_Word STATE_VARIABLE_Info_24_125;
            MR_Box conv7_STATE_VARIABLE_Info_43_43;
            MR_Box conv6_STATE_VARIABLE_IO_44_44;

            *Succeeded_14 = (MR_Integer) 1;
            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_42, 0) = ((MR_Box) (&make__program_target_scalar_common_13[3]));
              MR_hl_field(0, Var_42, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_10_p_0_2));
              MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_42, 3) = ((MR_Box) (Globals_11));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, AllModules_21, ((MR_Box) (STATE_VARIABLE_Info_40_40)), &conv7_STATE_VARIABLE_Info_43_43, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_44_44);
            STATE_VARIABLE_Info_43_43 = ((MR_Word) (conv7_STATE_VARIABLE_Info_43_43));
            make__util__remove_module_file_for_make_9_p_0(ProgressStream_22, Globals_11, (MR_Integer) 73, MainModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[45])), STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_20_121);
            make__util__remove_module_file_for_make_9_p_0(ProgressStream_22, Globals_11, (MR_Integer) 73, MainModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[46])), STATE_VARIABLE_Info_20_121, &STATE_VARIABLE_Info_24_125);
            make__util__remove_module_file_for_make_9_p_0(ProgressStream_22, Globals_11, (MR_Integer) 73, MainModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[47])), STATE_VARIABLE_Info_24_125, STATE_VARIABLE_Info_31);
            *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_48_48;
            MR_Word Var_50;
            MR_Box conv10_STATE_VARIABLE_Info_31;
            MR_Box conv9_STATE_VARIABLE_IO_35;

            *Succeeded_14 = (MR_Integer) 1;
            make__program_target__make_main_module_realclean_6_p_0(Globals_11, MainModuleName_12, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_48_48);
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__program_target_scalar_common_5[5]));
              MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_10_p_0_3));
              MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_50, 3) = ((MR_Box) (ProgressStream_22));
              MR_hl_field(0, Var_50, 4) = ((MR_Box) (Globals_11));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, AllModules_21, ((MR_Box) (STATE_VARIABLE_Info_48_48)), &conv10_STATE_VARIABLE_Info_31, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_35);
            *STATE_VARIABLE_Info_31 = ((MR_Word) (conv10_STATE_VARIABLE_Info_31));
            *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
          }
          break;
        case (MR_Integer) 2:
          {
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0(Globals_11, MainModuleName_12, AllModules_21, Succeeded0_19, Globals_11, Succeeded_14, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_31);
            *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntSucceeded_28;
            MR_Word STATE_VARIABLE_Info_66_66;

            make__program_target__make_all_interface_files_7_p_0(Globals_11, AllModules_21, &IntSucceeded_28, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_66_66);
            switch (IntSucceeded_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_14 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_66_66;
                  *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
                }
                break;
              case (MR_Integer) 1:
                make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0(MainModuleName_12, AllModules_21, Globals_11, Globals_11, Succeeded_14, STATE_VARIABLE_Info_66_66, STATE_VARIABLE_Info_31, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word LibSucceeded_29;
            MR_Word Var_72;
            MR_Word STATE_VARIABLE_Info_73_73;

            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_72, 0) = ((MR_Box) (MainModuleName_12));
              MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            make__program_target__make_misc_target_9_p_0(Globals_11, Var_72, &LibSucceeded_29, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
            switch (LibSucceeded_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_14 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_73_73;
                }
                break;
              case (MR_Integer) 1:
                make__program_target__install_library_8_p_0(ProgressStream_22, Globals_11, MainModuleName_12, Succeeded_14, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_31);
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word KeepGoing_90;

            KeepGoing_90 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_40_40);
            succeeded = (Succeeded0_19 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (KeepGoing_90 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_14 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_40_40;
            }
            else
            {
              MR_Word Var_83;
              MR_Word Succeeded1_87;

              Var_83 = make__util__make_dependency_list_2_f_0(AllModules_21, (MR_Word) ((MR_Unsigned) 52U));
              make__build__foldl2_make_module_targets_9_p_0(KeepGoing_90, (MR_Word) ((MR_Unsigned) 0U), Globals_11, Var_83, &Succeeded1_87, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_31);
              *Succeeded_14 = libs__maybe_util__and_2_f_0(Succeeded0_19, Succeeded1_87);
            }
            *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleTargetType_23 = ((MR_Word) ((MR_hl_field(1, TargetType_13, (MR_Integer) 0))));
        MR_Word TargetModules_24;
        MR_Word KeepGoing_25;
        MR_Word STATE_VARIABLE_Info_53_53;

        succeeded = (ModuleTargetType_23 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          MR_Word TargetModulesCord_106;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Box conv4_TargetModulesCord_106;
          MR_Box conv3_STATE_VARIABLE_Info_53_53;
          MR_Box conv2_STATE_VARIABLE_IO_54_54;

          {
            Var_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_107, 0) = ((MR_Box) (&make__program_target_scalar_common_9[4]));
            MR_hl_field(0, Var_107, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_10_p_0_1));
            MR_hl_field(0, Var_107, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_107, 3) = ((MR_Box) (ProgressStream_22));
            MR_hl_field(0, Var_107, 4) = ((MR_Box) (Globals_11));
          }
          Var_108 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_107, AllModules_21, ((MR_Box) (Var_108)), &conv4_TargetModulesCord_106, ((MR_Box) (STATE_VARIABLE_Info_40_40)), &conv3_STATE_VARIABLE_Info_53_53, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_54_54);
          TargetModulesCord_106 = ((MR_Word) (conv4_TargetModulesCord_106));
          STATE_VARIABLE_Info_53_53 = ((MR_Word) (conv3_STATE_VARIABLE_Info_53_53));
          TargetModules_24 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TargetModulesCord_106);
        }
        else
        {
          TargetModules_24 = AllModules_21;
          STATE_VARIABLE_Info_53_53 = STATE_VARIABLE_Info_40_40;
        }
        KeepGoing_25 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_53_53);
        succeeded = (Succeeded0_19 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_25 == (MR_Integer) 0);
        if (succeeded)
        {
          *Succeeded_14 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_53_53;
        }
        else
        {
          MR_Word Succeeded1_26;
          MR_Word STATE_VARIABLE_Info_55_55;

          make__program_target__make_all_interface_files_7_p_0(Globals_11, AllModules_21, &Succeeded1_26, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
          succeeded = (Succeeded1_26 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (KeepGoing_25 == (MR_Integer) 0);
          if (succeeded)
          {
            *Succeeded_14 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_55_55;
          }
          else
          {
            MR_Word Succeeded2_27;
            MR_Word Var_61;
            MR_Word Var_62;

            Var_61 = make__util__make_dependency_list_2_f_0(TargetModules_24, ModuleTargetType_23);
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0(KeepGoing_25, (MR_Word) ((MR_Unsigned) 0U), Globals_11, Var_61, Globals_11, &Succeeded2_27, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_31);
            Var_62 = libs__maybe_util__and_2_f_0(Succeeded0_19, Succeeded1_26);
            *Succeeded_14 = libs__maybe_util__and_2_f_0(Var_62, Succeeded2_27);
          }
        }
        *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
      }
      break;
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_15;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_15);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_53,
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word UseAnalysisCacheDir_16;

  make__program_target__should_we_use_analysis_cache_dir_5_p_0(Globals_10, STATE_VARIABLE_Info_0_24, &UseAnalysisCacheDir_16);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Target_56;

            libs__globals__get_target_2_p_0(Var_55, &Target_56);
            switch (Target_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word StaticSucceeded_57;
                  MR_Word SharedLibsSupported_58;
                  MR_Word Var_63;
                  MR_Word STATE_VARIABLE_Info_31_64;
                  MR_Word STATE_VARIABLE_Specs_32_65;

                  {
                    Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_63, 0) = ((MR_Box) (Var_53));
                    MR_hl_field(0, Var_63, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  }
                  make__program_target__make_linked_target_9_p_0(Var_55, Var_63, &StaticSucceeded_57, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_31_64, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_32_65);
                  backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Var_55, &SharedLibsSupported_58);
                  switch (StaticSucceeded_57) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *Succeeded_12 = (MR_Integer) 0;
                        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_31_64;
                        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_32_65;
                      }
                      break;
                    case (MR_Integer) 1:
                      switch (SharedLibsSupported_58) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ErrorStream_62;

                            *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_31_64;
                            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_32_65;
                            mercury__io__output_stream_3_p_0(&ErrorStream_62);
                            backend_libs__compile_target_code__make_library_init_file_8_p_0(Var_55, ErrorStream_62, ErrorStream_62, Var_53, Var_54, Succeeded_12);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_68;
                            MR_Word SharedLibsSucceeded_106;

                            {
                              Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_53));
                              MR_hl_field(0, Var_68, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            }
                            make__program_target__make_linked_target_9_p_0(Var_55, Var_68, &SharedLibsSucceeded_106, STATE_VARIABLE_Info_31_64, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_32_65, STATE_VARIABLE_Specs_27);
                            switch (SharedLibsSucceeded_106) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *Succeeded_12 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word ErrorStream_102;

                                  mercury__io__output_stream_3_p_0(&ErrorStream_102);
                                  backend_libs__compile_target_code__make_library_init_file_8_p_0(Var_55, ErrorStream_102, ErrorStream_102, Var_53, Var_54, Succeeded_12);
                                }
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
                  MR_Word Var_72;

                  {
                    Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_53));
                    MR_hl_field(0, Var_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  }
                  make__program_target__make_linked_target_9_p_0(Var_55, Var_72, Succeeded_12, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_74;

                  {
                    Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_74, 0) = ((MR_Box) (Var_53));
                    MR_hl_field(0, Var_74, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  make__program_target__make_linked_target_9_p_0(Var_55, Var_74, Succeeded_12, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_12 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_17 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_16, (MR_Integer) 0))));
        MR_String CacheDirOption_18 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_16, (MR_Integer) 1))));
        MR_Word OrigOptionArgs_19;
        MR_Word VeryVerbose_20;
        MR_Box Cookie_21;
        MR_Word Succeeded1_22;
        MR_Word Cleanup_23;
        MR_Word Var_34;
        MR_Word STATE_VARIABLE_Info_35_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word STATE_VARIABLE_Info_41_41;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_Word Target_76;
        MR_Word ProgressStream_96;
        MR_String RemovingMsg_97;
        MR_Box conv1_STATE_VARIABLE_Info_46_46;
        MR_Word Var_98;

        OrigOptionArgs_19 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_24);
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (CacheDir_17));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (CacheDirOption_18));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
        }
        Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_36);
        make__make_info__make_info_set_option_args_3_p_0(Var_34, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_35_35);
        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 73, &VeryVerbose_20);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_21);
        libs__globals__get_target_2_p_0(Var_55, &Target_76);
        switch (Target_76) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word StaticSucceeded_77;
              MR_Word SharedLibsSupported_78;
              MR_Word Var_83;
              MR_Word STATE_VARIABLE_Info_31_84;
              MR_Word STATE_VARIABLE_Specs_32_85;

              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_53));
                MR_hl_field(0, Var_83, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              make__program_target__make_linked_target_9_p_0(Var_55, Var_83, &StaticSucceeded_77, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_31_84, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_32_85);
              backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Var_55, &SharedLibsSupported_78);
              switch (StaticSucceeded_77) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Succeeded1_22 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_41_41 = STATE_VARIABLE_Info_31_84;
                    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_32_85;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (SharedLibsSupported_78) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ErrorStream_82;

                        STATE_VARIABLE_Info_41_41 = STATE_VARIABLE_Info_31_84;
                        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_32_85;
                        mercury__io__output_stream_3_p_0(&ErrorStream_82);
                        backend_libs__compile_target_code__make_library_init_file_8_p_0(Var_55, ErrorStream_82, ErrorStream_82, Var_53, Var_54, &Succeeded1_22);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_88;
                        MR_Word SharedLibsSucceeded_114;

                        {
                          Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_53));
                          MR_hl_field(0, Var_88, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                        }
                        make__program_target__make_linked_target_9_p_0(Var_55, Var_88, &SharedLibsSucceeded_114, STATE_VARIABLE_Info_31_84, &STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Specs_32_85, STATE_VARIABLE_Specs_27);
                        switch (SharedLibsSucceeded_114) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            Succeeded1_22 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ErrorStream_110;

                              mercury__io__output_stream_3_p_0(&ErrorStream_110);
                              backend_libs__compile_target_code__make_library_init_file_8_p_0(Var_55, ErrorStream_110, ErrorStream_110, Var_53, Var_54, &Succeeded1_22);
                            }
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
              MR_Word Var_92;

              {
                Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_53));
                MR_hl_field(0, Var_92, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
              }
              make__program_target__make_linked_target_9_p_0(Var_55, Var_92, &Succeeded1_22, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_94;

              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_94, 0) = ((MR_Box) (Var_53));
                MR_hl_field(0, Var_94, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
              }
              make__program_target__make_linked_target_9_p_0(Var_55, Var_94, &Succeeded1_22, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
            }
            break;
        }
        {
          Cleanup_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_23, 0) = ((MR_Box) (&make__program_target_scalar_common_13[2]));
          MR_hl_field(0, Cleanup_23, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0_1));
          MR_hl_field(0, Cleanup_23, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_23, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Cleanup_23, 4) = ((MR_Box) (CacheDir_17));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_20, Cookie_21, Cleanup_23, Succeeded1_22, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_41_41)), &conv1_STATE_VARIABLE_Info_46_46);
        STATE_VARIABLE_Info_46_46 = ((MR_Word) (conv1_STATE_VARIABLE_Info_46_46));
        mercury__io__output_stream_3_p_0(&ProgressStream_96);
        make__util__verbose_make_two_part_msg_4_p_0(Globals_10, (MR_String) "Removing", CacheDir_17, &RemovingMsg_97);
        make__util__maybe_write_msg_4_p_0(ProgressStream_96, RemovingMsg_97);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_17, &Var_98);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_19, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_25);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_15;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_15);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
}

void MR_CALL 
make__program_target__make_linked_target_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkedTargetFile_11,
  MR_Word * LinkedTargetSucceeded_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded;
  MR_Word FileType_17 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_11, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word ExtraOptions_18 = ((&make__program_target_vector_common_14[0 + FileType_17]))->make__program_target__vector_common_type_14_0__vct_14_f_0;
  MR_Word LibLinkages_19;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 680, &LibLinkages_19);
  switch (FileType_17) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "shared")), LibLinkages_19);
        succeeded = !(succeeded);
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "static")), LibLinkages_19);
        succeeded = !(succeeded);
      }
      break;
  }
  if (succeeded)
  {
    *LinkedTargetSucceeded_12 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word LibgradeCheckSpecs_20;

    libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_10, &LibgradeCheckSpecs_20);
    if ((LibgradeCheckSpecs_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UseAnalysisCacheDir_46;

      make__program_target__should_we_use_analysis_cache_dir_5_p_0(Globals_10, STATE_VARIABLE_Info_0_23, &UseAnalysisCacheDir_46);
      switch (MR_tag((MR_Word) UseAnalysisCacheDir_46)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(UseAnalysisCacheDir_46)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              make__program_target__make_linked_target_1_10_p_0(Globals_10, LinkedTargetFile_11, ExtraOptions_18, LinkedTargetSucceeded_12, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
              break;
            case (MR_Integer) 1:
              {
                *LinkedTargetSucceeded_12 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
                *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String CacheDir_47 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_46, (MR_Integer) 0))));
            MR_String CacheDirOption_48 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_46, (MR_Integer) 1))));
            MR_Word OrigOptionArgs_49;
            MR_Word VeryVerbose_50;
            MR_Box Cookie_51;
            MR_Word Succeeded1_52;
            MR_Word Cleanup_53;
            MR_Word Var_55;
            MR_Word STATE_VARIABLE_Info_35_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word STATE_VARIABLE_Info_41_62;
            MR_Word STATE_VARIABLE_Info_44_64;
            MR_Word STATE_VARIABLE_Info_46_66;
            MR_Box conv1_STATE_VARIABLE_Info_44_64;

            OrigOptionArgs_49 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_23);
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (CacheDir_47));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (CacheDirOption_48));
              MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
            }
            Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_49, Var_57);
            make__make_info__make_info_set_option_args_3_p_0(Var_55, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_35_56);
            libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 73, &VeryVerbose_50);
            libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_51);
            make__program_target__make_linked_target_1_10_p_0(Globals_10, LinkedTargetFile_11, ExtraOptions_18, &Succeeded1_52, STATE_VARIABLE_Info_35_56, &STATE_VARIABLE_Info_41_62, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
            {
              Cleanup_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Cleanup_53, 0) = ((MR_Box) (&make__program_target_scalar_common_13[2]));
              MR_hl_field(0, Cleanup_53, 1) = ((MR_Box) (make__program_target__make_linked_target_9_p_0_1));
              MR_hl_field(0, Cleanup_53, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Cleanup_53, 3) = ((MR_Box) (Globals_10));
              MR_hl_field(0, Cleanup_53, 4) = ((MR_Box) (CacheDir_47));
            }
            libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_50, Cookie_51, Cleanup_53, Succeeded1_52, LinkedTargetSucceeded_12, ((MR_Box) (STATE_VARIABLE_Info_41_62)), &conv1_STATE_VARIABLE_Info_44_64);
            STATE_VARIABLE_Info_44_64 = ((MR_Word) (conv1_STATE_VARIABLE_Info_44_64));
            make__program_target__remove_cache_dir_6_p_0(Globals_10, CacheDir_47, STATE_VARIABLE_Info_44_64, &STATE_VARIABLE_Info_46_66);
            make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_49, STATE_VARIABLE_Info_46_66, STATE_VARIABLE_Info_24);
          }
          break;
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_20, STATE_VARIABLE_Specs_0_25);
      *LinkedTargetSucceeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkedTargetFile_12,
  MR_Word ExtraOptions_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_Word MainModuleName_18 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_12, (MR_Integer) 0))));
  MR_Word IntermodAnalysis_20;
  MR_Word IntermodAnalysisSucceeded_21;
  MR_Word STATE_VARIABLE_Info_38_38;

  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 505, &IntermodAnalysis_20);
  switch (IntermodAnalysis_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodAnalysisSucceeded_21 = (MR_Integer) 1;
        STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_0_30;
        *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
      }
      break;
    case (MR_Integer) 1:
      make__program_target__make_misc_target_builder_10_p_0(Globals_11, MainModuleName_18, (MR_Word) ((MR_Unsigned) 8U), &IntermodAnalysisSucceeded_21, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
      break;
  }
  switch (IntermodAnalysisSucceeded_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_14 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_38_38;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DefaultOptionTable_22;
        MR_Word DetectedGradeFlags_23;
        MR_Word OptionVariables_24;
        MR_Word OptionArgs_25;
        MR_Word MayBuild_26;

        libs__globals__get_default_options_2_p_0(Globals_11, &DefaultOptionTable_22);
        DetectedGradeFlags_23 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_38_38);
        OptionVariables_24 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_38_38);
        OptionArgs_25 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_38_38);
        make__build__setup_for_build_with_module_options_10_p_0(DefaultOptionTable_22, (MR_Integer) 1, MainModuleName_18, DetectedGradeFlags_23, OptionVariables_24, OptionArgs_25, ExtraOptions_13, &MayBuild_26);
        if (((MR_tag((MR_Word) MayBuild_26)) == (MR_Integer) 1))
        {
          MR_Word BuildGlobals_28 = ((MR_Word) ((MR_hl_field(1, MayBuild_26, (MR_Integer) 1))));

          make__program_target__make_linked_target_2_7_p_0(BuildGlobals_28, LinkedTargetFile_12, Succeeded_14, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_31);
        }
        else
        {
          MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(0, MayBuild_26, (MR_Integer) 0))));
          MR_Word ErrorStream_29;

          libs__globals__get_error_output_stream_5_p_0(Globals_11, MainModuleName_18, &ErrorStream_29);
          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_29, Globals_11, Specs_16);
          *Succeeded_14 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_38_38;
        }
      }
      break;
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word Globals_7,
  MR_String CacheDir_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word ProgressStream_11;
  MR_String RemovingMsg_12;
  MR_Word Var_13;

  mercury__io__output_stream_3_p_0(&ProgressStream_11);
  make__util__verbose_make_two_part_msg_4_p_0(Globals_7, (MR_String) "Removing", CacheDir_8, &RemovingMsg_12);
  make__util__maybe_write_msg_4_p_0(ProgressStream_11, RemovingMsg_12);
  mercury__io__file__remove_file_recursively_4_p_0(CacheDir_8, &Var_13);
  *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_15;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_15);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0(
  MR_Word Var_46,
  MR_Word Var_47,
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Globals_8,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word UseAnalysisCacheDir_13;

  make__program_target__should_we_use_analysis_cache_dir_5_p_0(Globals_8, STATE_VARIABLE_Info_0_21, &UseAnalysisCacheDir_13);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(Var_46, Var_47, Var_48, Var_49, Succeeded_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_14 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_13, (MR_Integer) 0))));
        MR_String CacheDirOption_15 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_13, (MR_Integer) 1))));
        MR_Word OrigOptionArgs_16;
        MR_Word VeryVerbose_17;
        MR_Box Cookie_18;
        MR_Word Succeeded1_19;
        MR_Word Cleanup_20;
        MR_Word Var_28;
        MR_Word STATE_VARIABLE_Info_29_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_Info_35_35;
        MR_Word STATE_VARIABLE_Info_39_39;
        MR_Word ProgressStream_50;
        MR_String RemovingMsg_51;
        MR_Box conv1_STATE_VARIABLE_Info_39_39;
        MR_Word Var_52;

        OrigOptionArgs_16 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_21);
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (CacheDir_14));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (CacheDirOption_15));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
        }
        Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_16, Var_30);
        make__make_info__make_info_set_option_args_3_p_0(Var_28, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_29_29);
        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &VeryVerbose_17);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_18);
        make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(Var_46, Var_47, Var_48, Var_49, &Succeeded1_19, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_35_35);
        {
          Cleanup_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_20, 0) = ((MR_Box) (&make__program_target_scalar_common_13[2]));
          MR_hl_field(0, Cleanup_20, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0_1));
          MR_hl_field(0, Cleanup_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_20, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Cleanup_20, 4) = ((MR_Box) (CacheDir_14));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_17, Cookie_18, Cleanup_20, Succeeded1_19, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv1_STATE_VARIABLE_Info_39_39);
        STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv1_STATE_VARIABLE_Info_39_39));
        mercury__io__output_stream_3_p_0(&ProgressStream_50);
        make__util__verbose_make_two_part_msg_4_p_0(Globals_8, (MR_String) "Removing", CacheDir_14, &RemovingMsg_51);
        make__util__maybe_write_msg_4_p_0(ProgressStream_50, RemovingMsg_51);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_14, &Var_52);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_16, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_22);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_15;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_15);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0(
  MR_Word Var_46,
  MR_Word Var_47,
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Globals_8,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word UseAnalysisCacheDir_13;

  make__program_target__should_we_use_analysis_cache_dir_5_p_0(Globals_8, STATE_VARIABLE_Info_0_21, &UseAnalysisCacheDir_13);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__program_target__build_analysis_files_9_p_0(Var_46, Var_47, Var_48, Var_49, Succeeded_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_14 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_13, (MR_Integer) 0))));
        MR_String CacheDirOption_15 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_13, (MR_Integer) 1))));
        MR_Word OrigOptionArgs_16;
        MR_Word VeryVerbose_17;
        MR_Box Cookie_18;
        MR_Word Succeeded1_19;
        MR_Word Cleanup_20;
        MR_Word Var_28;
        MR_Word STATE_VARIABLE_Info_29_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_Info_35_35;
        MR_Word STATE_VARIABLE_Info_39_39;
        MR_Word ProgressStream_50;
        MR_String RemovingMsg_51;
        MR_Box conv1_STATE_VARIABLE_Info_39_39;
        MR_Word Var_52;

        OrigOptionArgs_16 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_21);
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (CacheDir_14));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (CacheDirOption_15));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
        }
        Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_16, Var_30);
        make__make_info__make_info_set_option_args_3_p_0(Var_28, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_29_29);
        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &VeryVerbose_17);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_18);
        make__program_target__build_analysis_files_9_p_0(Var_46, Var_47, Var_48, Var_49, &Succeeded1_19, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_35_35);
        {
          Cleanup_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_20, 0) = ((MR_Box) (&make__program_target_scalar_common_13[2]));
          MR_hl_field(0, Cleanup_20, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0_1));
          MR_hl_field(0, Cleanup_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_20, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Cleanup_20, 4) = ((MR_Box) (CacheDir_14));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_17, Cookie_18, Cleanup_20, Succeeded1_19, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv1_STATE_VARIABLE_Info_39_39);
        STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv1_STATE_VARIABLE_Info_39_39));
        mercury__io__output_stream_3_p_0(&ProgressStream_50);
        make__util__verbose_make_two_part_msg_4_p_0(Globals_8, (MR_String) "Removing", CacheDir_14, &RemovingMsg_51);
        make__util__maybe_write_msg_4_p_0(ProgressStream_50, RemovingMsg_51);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_14, &Var_52);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_16, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_22);
      }
      break;
  }
}

static MR_bool MR_CALL 
make__program_target__build_analysis_files_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__program_target__IntroducedFrom__pred__build_analysis_files_1__1247__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_26;

  make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1355__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_26));
}

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0_2(
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
make__program_target__build_analysis_files_9_p_0_1(
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
make__program_target__build_analysis_files_9_p_0(
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word AllModules_12,
  MR_Word Succeeded0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word KeepGoing_17;

  KeepGoing_17 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_19);
  succeeded = (Succeeded0_13 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_17 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_14 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
  }
  else
  {
    MR_Word Succeeded1_18;
    MR_Word STATE_VARIABLE_Info_23_23;

    make__program_target__make_all_interface_files_7_p_0(Globals_10, AllModules_12, &Succeeded1_18, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23);
    succeeded = (Succeeded1_18 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_17 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_23_23;
    }
    else
    {
      MR_Word TargetModules1_27;
      MR_Word TargetModules_28;
      MR_Word Succeeded0_29;
      MR_Word LocalModulesOpts_30;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word STATE_VARIABLE_Info_31_37;
      MR_Word ImpDepsGraph_48;
      MR_Word SccSets_49;
      MR_Word SccLists_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word ProgressStream_25;
      MR_Box conv4__IntDepsGraph_47;
      MR_Box conv3_ImpDepsGraph_48;

      mercury__io__output_stream_3_p_0(&ProgressStream_25);
      Var_35 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_23_23);
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_6[2]));
        MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_1));
        MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_54, 3) = ((MR_Box) (Var_35));
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (&make__program_target_scalar_common_13[1]));
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_2));
        MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_51, 3) = ((MR_Box) (Var_54));
      }
      Var_52 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      Var_53 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[4]), (MR_Word) (&make__program_target_scalar_common_1[4]), Var_51, AllModules_12, ((MR_Box) (Var_52)), &conv4__IntDepsGraph_47, ((MR_Box) (Var_53)), &conv3_ImpDepsGraph_48);
      ImpDepsGraph_48 = ((MR_Word) (conv3_ImpDepsGraph_48));
      SccSets_49 = mercury__digraph__return_sccs_in_to_from_order_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_48);
      mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_1[5]), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__program_target_scalar_common_2[9]), SccSets_49, &SccLists_50);
      mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SccLists_50, &TargetModules1_27);
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__program_target_scalar_common_7[3]));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_4));
        MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_36, 3) = ((MR_Box) (AllModules_12));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_36, TargetModules1_27, &TargetModules_28);
      make__dependencies__make_local_module_id_options_8_p_0(Globals_10, MainModuleName_11, &Succeeded0_29, &LocalModulesOpts_30, STATE_VARIABLE_Info_23_23, &STATE_VARIABLE_Info_31_37);
      switch (Succeeded0_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_14 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_31_37;
          }
          break;
        case (MR_Integer) 1:
          make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(Globals_10, TargetModules_28, LocalModulesOpts_30, Succeeded0_29, Succeeded_14, STATE_VARIABLE_Info_31_37, STATE_VARIABLE_Info_20);
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2(
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
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1(
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
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetModules_13,
  MR_Word LocalModulesOpts_14,
  MR_Word Succeeded0_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ProgressStream_19;
    MR_Word KeepGoing_20;
    MR_Word Succeeded1_21;
    MR_Integer ReanalysisPasses_22;
    MR_Word ReanalyseSuboptimal_23;
    MR_Word InvalidModules_24;
    MR_Word SuboptimalModules_25;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Info_33_33;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__output_stream_3_p_0(&ProgressStream_19);
    KeepGoing_20 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_27);
    Var_32 = make__util__make_dependency_list_2_f_0(TargetModules_13, (MR_Word) ((MR_Unsigned) 28U));
    make__build__foldl2_make_module_targets_9_p_0(KeepGoing_20, LocalModulesOpts_14, Globals_11, Var_32, &Succeeded1_21, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_33_33);
    ReanalysisPasses_22 = make__make_info__make_info_get_reanalysis_passes_1_f_0(STATE_VARIABLE_Info_33_33);
    succeeded = (ReanalysisPasses_22 > (MR_Integer) 1);
    if (succeeded)
      ReanalyseSuboptimal_23 = (MR_Integer) 1;
    else
      ReanalyseSuboptimal_23 = (MR_Integer) 0;
    make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_23, Globals_11, TargetModules_13, &InvalidModules_24, &SuboptimalModules_25);
    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidModules_24);
    if (succeeded)
    {
      MR_String ReanalysingMsg_26;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Box conv1_STATE_VARIABLE_Info_40_40;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_27;

      make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_11, &ReanalysingMsg_26);
      make__util__maybe_write_msg_4_p_0(ProgressStream_19, ReanalysingMsg_26);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[7]), InvalidModules_24, ((MR_Box) (STATE_VARIABLE_Info_33_33)), &conv1_STATE_VARIABLE_Info_40_40);
      STATE_VARIABLE_Info_40_40 = ((MR_Word) (conv1_STATE_VARIABLE_Info_40_40));
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Info_0_27 = STATE_VARIABLE_Info_40_40;
      STATE_VARIABLE_Info_0_27 = next_value_of_STATE_VARIABLE_Info_0_27;
      continue;
    }
    else
    {
      succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SuboptimalModules_25);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_44_44;
        MR_Integer Var_45;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_String ReanalysingMsg_51;
        MR_Box conv3_STATE_VARIABLE_Info_44_44;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_27;

        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[8]), SuboptimalModules_25, ((MR_Box) (STATE_VARIABLE_Info_33_33)), &conv3_STATE_VARIABLE_Info_44_44);
        STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv3_STATE_VARIABLE_Info_44_44));
        Var_45 = (MR_Integer) ((MR_Unsigned) ReanalysisPasses_22 - (MR_Unsigned) 1);
        make__make_info__make_info_set_reanalysis_passes_3_p_0(Var_45, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
        make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_11, &ReanalysingMsg_51);
        make__util__maybe_write_msg_4_p_0(ProgressStream_19, ReanalysingMsg_51);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Info_0_27 = STATE_VARIABLE_Info_46_46;
        STATE_VARIABLE_Info_0_27 = next_value_of_STATE_VARIABLE_Info_0_27;
        continue;
      }
      else
      {
        *Succeeded_16 = libs__maybe_util__and_2_f_0(Succeeded0_15, Succeeded1_21);
        *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_33_33;
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

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__program_target_scalar_common_1[6]), ((MR_Box) ((MR_Integer) 0)), Globals_2, Module_15, &ModuleStatus_20);
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
make__program_target__should_we_use_analysis_cache_dir_5_p_0(
  MR_Word Globals_6,
  MR_Word Info_7,
  MR_Word * UseAnalysisCacheDir_8)
{
  MR_bool succeeded;
  MR_Word IntermodAnalysis_10;
  MR_Word Caching_11;
  MR_String CacheDir0_12;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 505, &IntermodAnalysis_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 507, &Caching_11);
  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 707, &CacheDir0_12);
  succeeded = (IntermodAnalysis_10 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Caching_11 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (strcmp(CacheDir0_12, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (!(succeeded))
      {
        MR_Word Var_21;

        Var_21 = make__make_info__make_info_get_option_args_1_f_0(Info_7);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_21);
      }
    }
  }
  if (succeeded)
    *UseAnalysisCacheDir_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String CacheDir_15;
    MR_Word ProgressStream_23;
    MR_String CreatingMsg_24;
    MR_Word MakeRes_25;

    mercury__io__output_stream_3_p_0(&ProgressStream_23);
    parse_tree__file_names__analysis_cache_dir_name_2_p_0(Globals_6, &CacheDir_15);
    make__util__verbose_make_two_part_msg_4_p_0(Globals_6, (MR_String) "Creating", CacheDir_15, &CreatingMsg_24);
    make__util__maybe_write_msg_4_p_0(ProgressStream_23, CreatingMsg_24);
    mercury__dir__make_directory_4_p_0(CacheDir_15, &MakeRes_25);
    if ((MakeRes_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *UseAnalysisCacheDir_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CacheDir_15));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
      }
    else
    {
      MR_Word Error_26 = ((MR_Word) ((MR_hl_field(1, MakeRes_25, (MR_Integer) 0))));
      MR_String Var_36;

      Var_36 = mercury__io__error_message_1_f_0(Error_26);
      mercury__io__write_string_4_p_0(ProgressStream_23, (MR_String) "Error: making directory ");
      mercury__io__write_string_4_p_0(ProgressStream_23, CacheDir_15);
      mercury__io__write_string_4_p_0(ProgressStream_23, (MR_String) ": ");
      mercury__io__write_string_4_p_0(ProgressStream_23, Var_36);
      mercury__io__write_string_4_p_0(ProgressStream_23, (MR_String) "\n");
      *UseAnalysisCacheDir_8 = (MR_Word) ((MR_Unsigned) 4U);
    }
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
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
make__program_target__make_main_module_realclean_6_p_0_1(
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
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word ProgressStream_11;
  MR_String Part1_12;
  MR_String CleaningMsg_13;
  MR_Word FileNames_15;
  MR_Word ThisDirFileNames_16;
  MR_String FullInitFileName_17;
  MR_String ThisDirInitFileName_18;
  MR_Word FilesToRemove_19;
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

  mercury__io__output_stream_3_p_0(&ProgressStream_11);
  Var_28 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_8);
  Var_74 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\'.");
  Part1_12 = mercury__string__f_43_43_2_f_0((MR_String) "Removing executable and library files for \140", Var_74);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_7, Part1_12, &CleaningMsg_13);
  make__util__maybe_write_msg_4_p_0(ProgressStream_11, CleaningMsg_13);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__program_target_scalar_common_5[4]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__map2_foldl_6_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[44])), &FileNames_15, &ThisDirFileNames_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_46_46);
  parse_tree__file_names__module_name_to_file_name_full_curdir_6_p_0(Globals_7, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/6", (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[5])), ModuleName_8, &FullInitFileName_17, &ThisDirInitFileName_18);
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (ThisDirInitFileName_18));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (FullInitFileName_17));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_16, Var_51);
  FilesToRemove_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_15, Var_50);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_2));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (ProgressStream_11));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_54, 5) = ((MR_Box) ((MR_Integer) 73));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, FilesToRemove_19, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv5_STATE_VARIABLE_Info_55_55, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_56_56);
  STATE_VARIABLE_Info_55_55 = ((MR_Word) (conv5_STATE_VARIABLE_Info_55_55));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[45])), STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_20_77);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[46])), STATE_VARIABLE_Info_20_77, &STATE_VARIABLE_Info_24_81);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_11, Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[47])), STATE_VARIABLE_Info_24_81, STATE_VARIABLE_Info_21);
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
  MR_Word conv8_STATE_VARIABLE_Succeeded_15;

  make__program_target__install_extra_header_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Succeeded_15);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Succeeded_15));
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
  MR_Word conv2_LambdaHeadVar__2_65;

  make__program_target__IntroducedFrom__pred__make_install_dirs__2022__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_65);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_65));
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
  MR_Box conv1_STATE_VARIABLE_IO_61_83;

  make__dependencies__find_reachable_local_modules_8_p_0(Globals_10, MainModuleName_11, &DepsSucceeded_15, &AllModules0_16, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_31_31);
  AllModules_17 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules0_16);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 670, &Prefix_54);
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
  Subdirs_61 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[34]));
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&make__program_target_scalar_common_13[0]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (make__program_target__install_library_8_p_0_1));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (IntsSubdir_58));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Subdirs_61, &LinkResults_62, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_61_83);
  LinkSucceeded_19 = libs__maybe_util__and_list_1_f_0(LinkResults_62);
  switch (LinkSucceeded_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MkDirResults_64;
        MR_Word Var_84;
        MR_Box conv3_STATE_VARIABLE_IO_63_85;

        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (&make__program_target_scalar_common_10[1]));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) (make__program_target__install_library_8_p_0_2));
          MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_84, 3) = ((MR_Box) (IntsSubdir_58));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Subdirs_61, &MkDirResults_64, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_63_85);
        Results_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), Results0_60, MkDirResults_64);
      }
      break;
    case (MR_Integer) 1:
      Results_63 = Results0_60;
      break;
  }
  make__program_target__print_mkdir_errors_4_p_0(Results_63, &DirSucceeded_18);
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
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__program_target__install_library_8_p_0_3));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_34, 5) = ((MR_Box) (LinkSucceeded_19));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, AllModules_17, &IntsSucceeded_20, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv7_STATE_VARIABLE_Info_35_35, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_36_36);
    STATE_VARIABLE_Info_35_35 = ((MR_Word) (conv7_STATE_VARIABLE_Info_35_35));
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 693, &ExtraHdrs_90);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 670, &Prefix_91);
    Var_96 = mercury__dir__f_slash_2_f_0(Prefix_91, (MR_String) "lib");
    Var_95 = mercury__dir__f_slash_2_f_0(Var_96, (MR_String) "mercury");
    IncDir_92 = mercury__dir__f_slash_2_f_0(Var_95, (MR_String) "inc");
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_100, 0) = ((MR_Box) (&make__program_target_scalar_common_5[3]));
      MR_hl_field(0, Var_100, 1) = ((MR_Box) (make__program_target__install_library_8_p_0_4));
      MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_100, 3) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_100, 4) = ((MR_Box) (IncDir_92));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_100, ExtraHdrs_90, ((MR_Box) ((MR_Integer) 1)), &conv10_ExtraHdrsSucceeded_21, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_37_37);
    ExtraHdrsSucceeded_21 = ((MR_Word) (conv10_ExtraHdrsSucceeded_21));
    libs__compute_grade__grade_directory_component_2_p_0(Globals_10, &Grade_22);
    make__program_target__install_library_grade_files_10_p_0(Globals_10, LinkSucceeded_19, Grade_22, MainModuleName_11, AllModules_17, &GradeSucceeded_23, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_38_38);
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
      libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 677, &LibGrades0_25);
      LibGrades_26 = mercury__list__delete_all_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibGrades0_25, ((MR_Box) (Grade_22)));
      make__build__foldl2_install_library_grades_11_p_0(KeepGoing_24, LinkSucceeded_19, MainModuleName_11, AllModules_17, Globals_10, LibGrades_26, Succeeded_12, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_28);
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
make__program_target__install_library_grade_files_10_p_0_1(
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
make__program_target__install_library_grade_files_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkSucceeded0_12,
  MR_String GradeDir_13,
  MR_Word ModuleName_14,
  MR_Word AllModules_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;
  MR_Word ProgressStream_19;
  MR_Word DirResult_20;
  MR_Word LinkSucceeded1_21;
  MR_Word LinkSucceeded_22;

  mercury__io__output_stream_3_p_0(&ProgressStream_19);
  make__program_target__make_grade_install_dirs_6_p_0(Globals_11, GradeDir_13, &DirResult_20, &LinkSucceeded1_21);
  LinkSucceeded_22 = libs__maybe_util__and_2_f_0(LinkSucceeded0_12, LinkSucceeded1_21);
  switch (DirResult_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_16 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LibFileName_23;
        MR_String SharedLibFileName_24;
        MR_String DllFileName_25;
        MR_String JarFileName_26;
        MR_String Prefix_27;
        MR_Word LibsSucceeded_29;
        MR_Word InitSucceeded_30;
        MR_Word IntsHeadersSucceeded_33;
        MR_Word Var_76;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Box conv3_STATE_VARIABLE_Info_35;
        MR_Box conv2_STATE_VARIABLE_IO_37;

        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 1, &LibFileName_23);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 2, &SharedLibFileName_24);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 4, &DllFileName_25);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 6, &JarFileName_26);
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 670, &Prefix_27);
        succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "csharp");
        if (succeeded)
        {
          MR_String GradeLibDir_28;
          MR_String Var_50;
          MR_String Var_51;
          MR_String Var_52;
          MR_Word ErrorStream_95;
          MR_String InstallMsg_96;
          MR_String Command_97;

          Var_52 = mercury__dir__f_slash_2_f_0(Prefix_27, (MR_String) "lib");
          Var_51 = mercury__dir__f_slash_2_f_0(Var_52, (MR_String) "mercury");
          Var_50 = mercury__dir__f_slash_2_f_0(Var_51, (MR_String) "lib");
          GradeLibDir_28 = mercury__dir__f_slash_2_f_0(Var_50, GradeDir_13);
          mercury__io__output_stream_3_p_0(&ErrorStream_95);
          make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", DllFileName_25, (MR_String) "in", GradeLibDir_28, &InstallMsg_96);
          make__util__maybe_write_msg_4_p_0(ErrorStream_95, InstallMsg_96);
          Command_97 = libs__file_util__make_install_file_command_3_f_0(Globals_11, DllFileName_25, GradeLibDir_28);
          parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ErrorStream_95, ErrorStream_95, ErrorStream_95, (MR_Integer) 0, Command_97, &LibsSucceeded_29);
          InitSucceeded_30 = (MR_Integer) 1;
        }
        else
        {
          succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "java");
          if (succeeded)
          {
            MR_String Var_58;
            MR_String Var_59;
            MR_String Var_60;
            MR_String GradeLibDir_81;
            MR_Word ErrorStream_105;
            MR_String InstallMsg_106;
            MR_String Command_107;

            Var_60 = mercury__dir__f_slash_2_f_0(Prefix_27, (MR_String) "lib");
            Var_59 = mercury__dir__f_slash_2_f_0(Var_60, (MR_String) "mercury");
            Var_58 = mercury__dir__f_slash_2_f_0(Var_59, (MR_String) "lib");
            GradeLibDir_81 = mercury__dir__f_slash_2_f_0(Var_58, GradeDir_13);
            mercury__io__output_stream_3_p_0(&ErrorStream_105);
            make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", JarFileName_26, (MR_String) "in", GradeLibDir_81, &InstallMsg_106);
            make__util__maybe_write_msg_4_p_0(ErrorStream_105, InstallMsg_106);
            Command_107 = libs__file_util__make_install_file_command_3_f_0(Globals_11, JarFileName_26, GradeLibDir_81);
            parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ErrorStream_105, ErrorStream_105, ErrorStream_105, (MR_Integer) 0, Command_107, &LibsSucceeded_29);
            InitSucceeded_30 = (MR_Integer) 1;
          }
          else
          {
            MR_Word LibSucceeded0_31;
            MR_String Var_65;
            MR_String Var_66;
            MR_String Var_67;
            MR_String GradeLibDir_82;

            Var_67 = mercury__dir__f_slash_2_f_0(Prefix_27, (MR_String) "lib");
            Var_66 = mercury__dir__f_slash_2_f_0(Var_67, (MR_String) "mercury");
            Var_65 = mercury__dir__f_slash_2_f_0(Var_66, (MR_String) "lib");
            GradeLibDir_82 = mercury__dir__f_slash_2_f_0(Var_65, GradeDir_13);
            make__program_target__maybe_install_library_file_7_p_0(Globals_11, (MR_String) "static", LibFileName_23, GradeLibDir_82, &LibSucceeded0_31);
            succeeded = (strcmp(LibFileName_23, SharedLibFileName_24) == 0);
            if (succeeded)
              LibsSucceeded_29 = LibSucceeded0_31;
            else
            {
              MR_Word SharedLibSucceeded_32;

              make__program_target__maybe_install_library_file_7_p_0(Globals_11, (MR_String) "shared", SharedLibFileName_24, GradeLibDir_82, &SharedLibSucceeded_32);
              LibsSucceeded_29 = libs__maybe_util__and_2_f_0(LibSucceeded0_31, SharedLibSucceeded_32);
            }
            make__program_target__install_grade_init_6_p_0(Globals_11, GradeDir_13, ModuleName_14, &InitSucceeded_30);
          }
        }
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_76, 0) = ((MR_Box) (&make__program_target_scalar_common_12[1]));
          MR_hl_field(0, Var_76, 1) = ((MR_Box) (make__program_target__install_library_grade_files_10_p_0_1));
          MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_76, 3) = ((MR_Box) (ProgressStream_19));
          MR_hl_field(0, Var_76, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_76, 5) = ((MR_Box) (LinkSucceeded_22));
          MR_hl_field(0, Var_76, 6) = ((MR_Box) (GradeDir_13));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, AllModules_15, &IntsHeadersSucceeded_33, ((MR_Box) (STATE_VARIABLE_Info_0_34)), &conv3_STATE_VARIABLE_Info_35, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37);
        *STATE_VARIABLE_Info_35 = ((MR_Word) (conv3_STATE_VARIABLE_Info_35));
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (InitSucceeded_30));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (IntsHeadersSucceeded_33));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (LibsSucceeded_29));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
        }
        *Succeeded_16 = libs__maybe_util__and_list_1_f_0(Var_79);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0_1(
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
make__program_target__make_grade_install_dirs_6_p_0(
  MR_Word Globals_7,
  MR_String Grade_8,
  MR_Word * Result_9,
  MR_Word * LinkResult_10)
{
  MR_String Prefix_12;
  MR_String LibDir_13;
  MR_String GradeIntsSubdir_14;
  MR_Word Result1_15;
  MR_String GradeIncSubdir_16;
  MR_Word Result2_17;
  MR_String GradeModuleSubdir_18;
  MR_Word Result3_19;
  MR_Word Results0_20;
  MR_Word LinkResult0_21;
  MR_Word LinkResults_22;
  MR_Word Results_23;
  MR_String Var_31;
  MR_String Var_34;
  MR_String Var_35;
  MR_String Var_39;
  MR_String Var_40;
  MR_String Var_41;
  MR_String Var_46;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_54;
  MR_Word Var_63;
  MR_String LinkName_86;
  MR_Box conv1_STATE_VARIABLE_IO_56_56;

  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 670, &Prefix_12);
  Var_31 = mercury__dir__f_slash_2_f_0(Prefix_12, (MR_String) "lib");
  LibDir_13 = mercury__dir__f_slash_2_f_0(Var_31, (MR_String) "mercury");
  Var_35 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "ints");
  Var_34 = mercury__dir__f_slash_2_f_0(Var_35, Grade_8);
  GradeIntsSubdir_14 = mercury__dir__f_slash_2_f_0(Var_34, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(GradeIntsSubdir_14, &Result1_15);
  Var_41 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "lib");
  Var_40 = mercury__dir__f_slash_2_f_0(Var_41, Grade_8);
  Var_39 = mercury__dir__f_slash_2_f_0(Var_40, (MR_String) "inc");
  GradeIncSubdir_16 = mercury__dir__f_slash_2_f_0(Var_39, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(GradeIncSubdir_16, &Result2_17);
  Var_46 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "modules");
  GradeModuleSubdir_18 = mercury__dir__f_slash_2_f_0(Var_46, Grade_8);
  mercury__dir__make_directory_4_p_0(GradeModuleSubdir_18, &Result3_19);
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Result3_19));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Result2_17));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Results0_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Results0_20, 0) = ((MR_Box) (Result1_15));
    MR_hl_field(1, Results0_20, 1) = ((MR_Box) (Var_49));
  }
  LinkName_86 = mercury__dir__f_slash_2_f_0(GradeIncSubdir_16, (MR_String) "mihs");
  parse_tree__module_cmds__maybe_make_symlink_6_p_0(Globals_7, (MR_String) "..", LinkName_86, &LinkResult0_21);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_13[0]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__program_target__make_grade_install_dirs_6_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (GradeIntsSubdir_14));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[37])), &LinkResults_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_56_56);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (LinkResult0_21));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (LinkResults_22));
  }
  *LinkResult_10 = libs__maybe_util__and_list_1_f_0(Var_63);
  switch (*LinkResult_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Result4_24;
        MR_Word Result5_25;
        MR_Word Result6_26;
        MR_Word Result7_27;
        MR_String Var_64;
        MR_String Var_67;
        MR_String Var_70;
        MR_String Var_73;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;

        Var_64 = mercury__dir__f_slash_2_f_0(GradeIncSubdir_16, (MR_String) "mihs");
        mercury__dir__make_directory_4_p_0(Var_64, &Result4_24);
        Var_67 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_14, (MR_String) "opts");
        mercury__dir__make_directory_4_p_0(Var_67, &Result5_25);
        Var_70 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_14, (MR_String) "trans_opts");
        mercury__dir__make_directory_4_p_0(Var_70, &Result6_26);
        Var_73 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_14, (MR_String) "analyses");
        mercury__dir__make_directory_4_p_0(Var_73, &Result7_27);
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (Result7_27));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Results0_20));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Result6_26));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Result5_25));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
        }
        {
          Results_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Results_23, 0) = ((MR_Box) (Result4_24));
          MR_hl_field(1, Results_23, 1) = ((MR_Box) (Var_76));
        }
      }
      break;
    case (MR_Integer) 1:
      Results_23 = Results0_20;
      break;
  }
  make__program_target__print_mkdir_errors_4_p_0(Results_23, Result_9);
}

static void MR_CALL 
make__program_target__print_mkdir_errors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = Var_28;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word Error_15 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
        MR_String Var_26;
        MR_Word Var_18;

        *HeadVar__2_2 = (MR_Integer) 0;
        Var_26 = mercury__io__error_message_1_f_0(Error_15);
        mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
        mercury__io__write_string_3_p_0(Var_26);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        make__program_target__print_mkdir_errors_4_p_0(Var_28, &Var_18);
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0(
  MR_Word Globals_8,
  MR_String Linkage_9,
  MR_String FileName_10,
  MR_String InstallDir_11,
  MR_Word * Succeeded_12)
{
  MR_bool succeeded;
  MR_Word LibLinkages_14;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 680, &LibLinkages_14);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Linkage_9)), LibLinkages_14);
  if (succeeded)
  {
    MR_Word Succeeded0_15;
    MR_Word ErrorStream_24;
    MR_String InstallMsg_25;
    MR_String Command_26;

    mercury__io__output_stream_3_p_0(&ErrorStream_24);
    make__util__verbose_make_four_part_msg_6_p_0(Globals_8, (MR_String) "Installing file", FileName_10, (MR_String) "in", InstallDir_11, &InstallMsg_25);
    make__util__maybe_write_msg_4_p_0(ErrorStream_24, InstallMsg_25);
    Command_26 = libs__file_util__make_install_file_command_3_f_0(Globals_8, FileName_10, InstallDir_11);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_8, ErrorStream_24, ErrorStream_24, ErrorStream_24, (MR_Integer) 0, Command_26, &Succeeded0_15);
    succeeded = (strcmp(Linkage_9, (MR_String) "static") == 0);
    if (succeeded)
      succeeded = (Succeeded0_15 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String BaseFileName_16;
      MR_Word ErrorStream_34;
      MR_String InstallMsg_35;
      MR_String RanLibCommand_36;
      MR_String RanLibFlags_37;
      MR_String Command_38;
      MR_Word Var_46;
      MR_String Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_String Var_50;
      MR_String Var_51;

      BaseFileName_16 = mercury__dir__det_basename_1_f_0(FileName_10);
      mercury__io__output_stream_3_p_0(&ErrorStream_34);
      make__util__verbose_make_four_part_msg_6_p_0(Globals_8, (MR_String) "Generating archive index for file", BaseFileName_16, (MR_String) "in", InstallDir_11, &InstallMsg_35);
      make__util__maybe_write_msg_4_p_0(ErrorStream_34, InstallMsg_35);
      libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 619, &RanLibCommand_36);
      libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 620, &RanLibFlags_37);
      Var_47 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_36);
      Var_51 = mercury__dir__f_slash_2_f_0(InstallDir_11, BaseFileName_16);
      Var_50 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_51);
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (RanLibFlags_37));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
      }
      Command_38 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_46);
      parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_8, ErrorStream_34, ErrorStream_34, ErrorStream_34, (MR_Integer) 0, Command_38, Succeeded_12);
    }
    else
      *Succeeded_12 = Succeeded0_15;
  }
  else
    *Succeeded_12 = (MR_Integer) 1;
}

static void MR_CALL 
make__program_target__install_grade_init_6_p_0(
  MR_Word Globals_7,
  MR_String GradeDir_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10)
{
  MR_String Prefix_12;
  MR_String GradeModulesDir_13;
  MR_String InitFileName_14;
  MR_String Var_18;
  MR_String Var_19;
  MR_String Var_20;
  MR_Word ErrorStream_29;
  MR_String InstallMsg_30;
  MR_String Command_31;

  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 670, &Prefix_12);
  Var_20 = mercury__dir__f_slash_2_f_0(Prefix_12, (MR_String) "lib");
  Var_19 = mercury__dir__f_slash_2_f_0(Var_20, (MR_String) "mercury");
  Var_18 = mercury__dir__f_slash_2_f_0(Var_19, (MR_String) "modules");
  GradeModulesDir_13 = mercury__dir__f_slash_2_f_0(Var_18, GradeDir_8);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_7, (MR_String) "predicate \140make.program_target.install_grade_init\'/6", (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[5])), ModuleName_9, &InitFileName_14);
  mercury__io__output_stream_3_p_0(&ErrorStream_29);
  make__util__verbose_make_four_part_msg_6_p_0(Globals_7, (MR_String) "Installing file", InitFileName_14, (MR_String) "in", GradeModulesDir_13, &InstallMsg_30);
  make__util__maybe_write_msg_4_p_0(ErrorStream_29, InstallMsg_30);
  Command_31 = libs__file_util__make_install_file_command_3_f_0(Globals_7, InitFileName_14, GradeModulesDir_13);
  parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_7, ErrorStream_29, ErrorStream_29, ErrorStream_29, (MR_Integer) 0, Command_31, Succeeded_10);
}

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_2(
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
make__program_target__make_linked_target_2_7_p_0_1(
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
make__program_target__make_linked_target_2_7_p_0(
  MR_Word Globals_8,
  MR_Word LinkedTargetFile_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  MR_bool succeeded;
  MR_Word MainModuleName_13 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_9, (MR_Integer) 0))));
  MR_Word FileType_14 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_9, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word DepsSucceeded_15;
  MR_Word AllModules_16;
  MR_Word KeepGoing_17;
  MR_Word STATE_VARIABLE_Info_51_51;

  make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, MainModuleName_13, &DepsSucceeded_15, &AllModules_16, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_51_51);
  KeepGoing_17 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_51_51);
  succeeded = (DepsSucceeded_15 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_17 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_10 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_51_51;
  }
  else
  {
    MR_Word PIC_18;
    MR_Word CompilationTarget_19;
    MR_Word IntermediateTargetType_20;
    MR_Word ObjectTargetType_21;
    MR_Word ObjModulesAlpha_23;
    MR_Word ObjModules_24;
    MR_Word ObjModulesNonnested_25;
    MR_Word IntermediateTargetsNonnested_26;
    MR_Word ObjTargets_27;
    MR_Word ProgressStream_28;
    MR_Word ForeignObjTargetsList_29;
    MR_Word ForeignObjTargets_30;
    MR_Word IntsSucceeded_31;
    MR_Word BuildDepsSucceeded_32;
    MR_String FullMainModuleLinkedFileName_37;
    MR_String CurDirMainModuleLinkedFileName_38;
    MR_Word MaybeTimestamp_39;
    MR_Word BuildDepsResult_40;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Word STATE_VARIABLE_Info_61_61;
    MR_Word STATE_VARIABLE_Info_78_78;
    MR_Word Var_81;
    MR_Word STATE_VARIABLE_Info_82_82;
    MR_String Var_84;
    MR_Word STATE_VARIABLE_Info_86_86;
    MR_Box conv3_STATE_VARIABLE_Info_59_59;
    MR_Box conv2_STATE_VARIABLE_IO_60_60;

    backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_8, FileType_14, &PIC_18);
    libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_19);
    switch (CompilationTarget_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          IntermediateTargetType_20 = (MR_Word) ((MR_Unsigned) 36U);
          {
            ObjectTargetType_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ObjectTargetType_21, 0) = (MR_Box) ((MR_Unsigned) (PIC_18));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          IntermediateTargetType_20 = (MR_Word) ((MR_Unsigned) 40U);
          ObjectTargetType_21 = (MR_Word) ((MR_Unsigned) 40U);
        }
        break;
      case (MR_Integer) 2:
        {
          IntermediateTargetType_20 = (MR_Word) ((MR_Unsigned) 44U);
          ObjectTargetType_21 = (MR_Word) ((MR_Unsigned) 48U);
        }
        break;
    }
    ObjModulesAlpha_23 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_16);
    make__program_target__order_target_modules_7_p_0(Globals_8, ObjModulesAlpha_23, &ObjModules_24, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
    make__dependencies__remove_nested_modules_7_p_0(Globals_8, ObjModules_24, &ObjModulesNonnested_25, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
    IntermediateTargetsNonnested_26 = make__util__make_dependency_list_2_f_0(ObjModulesNonnested_25, IntermediateTargetType_20);
    ObjTargets_27 = make__util__make_dependency_list_2_f_0(ObjModules_24, ObjectTargetType_21);
    mercury__io__output_stream_3_p_0(&ProgressStream_28);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_1));
      MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_58, 3) = ((MR_Box) (ProgressStream_28));
      MR_hl_field(0, Var_58, 4) = ((MR_Box) (Globals_8));
      MR_hl_field(0, Var_58, 5) = ((MR_Box) (PIC_18));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, ObjModules_24, &ForeignObjTargetsList_29, ((MR_Box) (STATE_VARIABLE_Info_55_55)), &conv3_STATE_VARIABLE_Info_59_59, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_60_60);
    STATE_VARIABLE_Info_59_59 = ((MR_Word) (conv3_STATE_VARIABLE_Info_59_59));
    ForeignObjTargets_30 = mercury__list__condense_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), ForeignObjTargetsList_29);
    make__program_target__make_all_interface_files_7_p_0(Globals_8, ObjModulesAlpha_23, &IntsSucceeded_31, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_61_61);
    succeeded = (IntsSucceeded_31 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_17 == (MR_Integer) 0);
    if (succeeded)
    {
      BuildDepsSucceeded_32 = (MR_Integer) 0;
      STATE_VARIABLE_Info_78_78 = STATE_VARIABLE_Info_61_61;
    }
    else
    {
      MR_Word BuildDepsSucceeded0_33;
      MR_Word BuildDepsSucceeded1_36;
      MR_Word STATE_VARIABLE_Info_64_64;
      MR_Word STATE_VARIABLE_Info_72_72;

      make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, IntermediateTargetsNonnested_26, &BuildDepsSucceeded0_33, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_64_64);
      switch (BuildDepsSucceeded0_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded1_36 = (MR_Integer) 0;
            STATE_VARIABLE_Info_72_72 = STATE_VARIABLE_Info_64_64;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = (ObjectTargetType_21 == (MR_Word) ((MR_Unsigned) 48U));
            if (succeeded)
            {
              MR_Word BuildJavaSucceeded_34;
              MR_Word STATE_VARIABLE_Info_66_66;

              make__program_target__make_java_files_8_p_0(Globals_8, MainModuleName_13, ObjModules_24, &BuildJavaSucceeded_34, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_66_66);
              switch (BuildJavaSucceeded_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    BuildDepsSucceeded1_36 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_72_72 = STATE_VARIABLE_Info_66_66;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NoRebuildGlobals_35;

                    libs__globals__set_option_4_p_0((MR_Integer) 664, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[0])), Globals_8, &NoRebuildGlobals_35);
                    make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), NoRebuildGlobals_35, ObjTargets_27, &BuildDepsSucceeded1_36, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_72_72);
                  }
                  break;
              }
            }
            else
              make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, ObjTargets_27, &BuildDepsSucceeded1_36, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_72_72);
          }
          break;
      }
      switch (BuildDepsSucceeded1_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded_32 = (MR_Integer) 0;
            STATE_VARIABLE_Info_78_78 = STATE_VARIABLE_Info_72_72;
          }
          break;
        case (MR_Integer) 1:
          make__build__foldl2_make_module_targets_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, ForeignObjTargets_30, &BuildDepsSucceeded_32, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_78_78);
          break;
      }
    }
    backend_libs__compile_target_code__linked_target_file_name_full_curdir_7_p_0(Globals_8, MainModuleName_13, FileType_14, &FullMainModuleLinkedFileName_37, &CurDirMainModuleLinkedFileName_38);
    Var_84 = mercury__dir__this_directory_0_f_0();
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__timestamp__get_file_timestamp_7_p_0(Var_81, FullMainModuleLinkedFileName_37, &MaybeTimestamp_39, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_82_82);
    make__dependencies__check_dependencies_11_p_0(ProgressStream_28, Globals_8, FullMainModuleLinkedFileName_37, MaybeTimestamp_39, BuildDepsSucceeded_32, ObjTargets_27, &BuildDepsResult_40, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_86_86);
    succeeded = (DepsSucceeded_15 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (BuildDepsResult_40 != (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word VeryVerbose_41;
      MR_Box Cookie_42;
      MR_Word RedirectResult_43;
      MR_Word Succeeded0_44;
      MR_Word Cleanup_46;
      MR_Word STATE_VARIABLE_Info_90_90;
      MR_Word STATE_VARIABLE_Info_94_94;
      MR_Box conv5_STATE_VARIABLE_Info_48;

      libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &VeryVerbose_41);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_42);
      make__build__prepare_to_redirect_output_6_p_0(MainModuleName_13, &RedirectResult_43, STATE_VARIABLE_Info_86_86, &STATE_VARIABLE_Info_90_90);
      if ((RedirectResult_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_44 = (MR_Integer) 0;
        STATE_VARIABLE_Info_94_94 = STATE_VARIABLE_Info_90_90;
      }
      else
      {
        MR_Word ErrorStream_45 = ((MR_Word) ((MR_hl_field(1, RedirectResult_43, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Info_92_92;

        make__program_target__build_linked_target_18_p_0(MainModuleName_13, FileType_14, FullMainModuleLinkedFileName_37, CurDirMainModuleLinkedFileName_38, MaybeTimestamp_39, AllModules_16, ObjModules_24, CompilationTarget_19, PIC_18, DepsSucceeded_15, BuildDepsResult_40, Globals_8, ErrorStream_45, &Succeeded0_44, STATE_VARIABLE_Info_90_90, &STATE_VARIABLE_Info_92_92);
        make__build__unredirect_output_7_p_0(Globals_8, MainModuleName_13, ErrorStream_45, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_94_94);
      }
      {
        Cleanup_46 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Cleanup_46, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
        MR_hl_field(0, Cleanup_46, 1) = ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_2));
        MR_hl_field(0, Cleanup_46, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, Cleanup_46, 3) = ((MR_Box) (ProgressStream_28));
        MR_hl_field(0, Cleanup_46, 4) = ((MR_Box) (Globals_8));
        MR_hl_field(0, Cleanup_46, 5) = ((MR_Box) (MainModuleName_13));
        MR_hl_field(0, Cleanup_46, 6) = ((MR_Box) (FileType_14));
        MR_hl_field(0, Cleanup_46, 7) = ((MR_Box) (FullMainModuleLinkedFileName_37));
        MR_hl_field(0, Cleanup_46, 8) = ((MR_Box) (CurDirMainModuleLinkedFileName_38));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_41, Cookie_42, Cleanup_46, Succeeded0_44, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_94_94)), &conv5_STATE_VARIABLE_Info_48);
      *STATE_VARIABLE_Info_48 = ((MR_Word) (conv5_STATE_VARIABLE_Info_48));
    }
    else
    {
      *Succeeded_10 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_86_86;
    }
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_ParentModules_19;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  make__program_target__collect_modules_with_children_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ParentModules_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ParentModules_19));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0(
  MR_Word Globals_8,
  MR_Word AllModules0_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word NonnestedModules_13;
  MR_Word ParentModules_14;
  MR_Word Int3s_15;
  MR_Word Int0s_16;
  MR_Word Int1s_17;
  MR_Word AnyIntermod_18;
  MR_Word Opts_19;
  MR_Word KeepGoing_20;
  MR_Word Succeeded0_21;
  MR_Word STATE_VARIABLE_Info_28_28;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Box conv4_ParentModules_14;
  MR_Box conv3_STATE_VARIABLE_Info_32_32;
  MR_Box conv2_STATE_VARIABLE_IO_33_33;

  make__dependencies__remove_nested_modules_7_p_0(Globals_8, AllModules0_9, &NonnestedModules_13, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_8[2]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (Globals_8));
  }
  mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, NonnestedModules_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ParentModules_14, ((MR_Box) (STATE_VARIABLE_Info_28_28)), &conv3_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33_33);
  ParentModules_14 = ((MR_Word) (conv4_ParentModules_14));
  STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv3_STATE_VARIABLE_Info_32_32));
  Int3s_15 = make__util__make_dependency_list_2_f_0(NonnestedModules_13, (MR_Word) ((MR_Unsigned) 20U));
  Int0s_16 = make__util__make_dependency_list_2_f_0(ParentModules_14, (MR_Word) ((MR_Unsigned) 8U));
  Int1s_17 = make__util__make_dependency_list_2_f_0(NonnestedModules_13, (MR_Word) ((MR_Unsigned) 12U));
  libs__globals__get_any_intermod_2_p_0(Globals_8, &AnyIntermod_18);
  switch (AnyIntermod_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Opts_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      Opts_19 = make__util__make_dependency_list_2_f_0(NonnestedModules_13, (MR_Word) ((MR_Unsigned) 24U));
      break;
  }
  KeepGoing_20 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_32_32);
  make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_20, (MR_Word) ((MR_Unsigned) 0U), Globals_8, Int3s_15, &Succeeded0_21, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_39_39);
  switch (Succeeded0_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_39_39;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Succeeded1_22;
        MR_Word STATE_VARIABLE_Info_42_42;

        make__build__foldl2_make_module_targets_9_p_0(KeepGoing_20, (MR_Word) ((MR_Unsigned) 0U), Globals_8, Int0s_16, &Succeeded1_22, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_42_42);
        switch (Succeeded1_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Succeeded_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_42_42;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Succeeded2_23;
              MR_Word STATE_VARIABLE_Info_45_45;

              make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_20, (MR_Word) ((MR_Unsigned) 0U), Globals_8, Int1s_17, &Succeeded2_23, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_45_45);
              switch (Succeeded2_23) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *Succeeded_10 = (MR_Integer) 0;
                    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_45_45;
                  }
                  break;
                case (MR_Integer) 1:
                  make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_20, (MR_Word) ((MR_Unsigned) 0U), Globals_8, Opts_19, Succeeded_10, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_25);
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
make__program_target__make_java_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Timestamps_9;

  make__program_target__delete_java_class_timestamps_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Timestamps_9);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Timestamps_9));
}

static void MR_CALL 
make__program_target__make_java_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__6_6;

  backend_libs__compile_target_code__compile_java_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv3_HeadVar__6_6);
  *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__6_6));
}

static void MR_CALL 
make__program_target__make_java_files_8_p_0_1(
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
make__program_target__make_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word ObjModules_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word OutOfDateModules_15;
  MR_Word STATE_VARIABLE_Info_24_24;

  make__program_target__out_of_date_java_modules_7_p_0(Globals_9, ObjModules_11, &OutOfDateModules_15, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_24);
  if ((OutOfDateModules_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_12 = (MR_Integer) 1;
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_24_24;
  }
  else
  {
    MR_Word Timestamps0_18;
    MR_Word Timestamps_19;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word Var_31;
    MR_String MakingMsg_39;
    MR_Word ProgressStream_40;
    MR_Word JavaFiles_41;
    MR_Word RedirectResult_42;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_Info_32_51;
    MR_Box conv1_STATE_VARIABLE_IO_28_48;
    MR_Box conv5_Timestamps_19;

    make__util__verbose_make_one_part_msg_3_p_0(Globals_9, (MR_String) "Making Java class files", &MakingMsg_39);
    mercury__io__output_stream_3_p_0(&ProgressStream_40);
    make__util__maybe_write_msg_4_p_0(ProgressStream_40, MakingMsg_39);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (&make__program_target_scalar_common_5[2]));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) (make__program_target__make_java_files_8_p_0_1));
      MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_47, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(0, Var_47, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_java_files\'/8"));
      MR_hl_field(0, Var_47, 5) = ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[12])));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, OutOfDateModules_15, &JavaFiles_41, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_48);
    make__build__prepare_to_redirect_output_6_p_0(MainModuleName_10, &RedirectResult_42, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_32_51);
    if ((RedirectResult_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_12 = (MR_Integer) 0;
      STATE_VARIABLE_Info_26_26 = STATE_VARIABLE_Info_32_51;
    }
    else
    {
      MR_Word ErrorStream_43 = ((MR_Word) ((MR_hl_field(1, RedirectResult_42, (MR_Integer) 0))));
      MR_String HeadJavaFile_58;
      MR_Word TailJavaFiles_59;
      MR_Word ProgressStream_60;
      MR_Word Var_62;
      MR_Box conv2_HeadJavaFile_58;

      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), JavaFiles_41, &conv2_HeadJavaFile_58, &TailJavaFiles_59);
      HeadJavaFile_58 = ((MR_String) (conv2_HeadJavaFile_58));
      mercury__io__output_stream_3_p_0(&ProgressStream_60);
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) (make__program_target__make_java_files_8_p_0_2));
        MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_62, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(0, Var_62, 4) = ((MR_Box) (ProgressStream_60));
        MR_hl_field(0, Var_62, 5) = ((MR_Box) (ErrorStream_43));
        MR_hl_field(0, Var_62, 6) = ((MR_Box) (HeadJavaFile_58));
        MR_hl_field(0, Var_62, 7) = ((MR_Box) (TailJavaFiles_59));
      }
      libs__process_util__call_in_forked_process_4_p_0(Var_62, Succeeded_12);
      make__build__unredirect_output_7_p_0(Globals_9, MainModuleName_10, ErrorStream_43, STATE_VARIABLE_Info_32_51, &STATE_VARIABLE_Info_26_26);
    }
    Timestamps0_18 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_26_26);
    Var_29 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]));
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__program_target_scalar_common_2[2]), (MR_Word) (&make__program_target_scalar_common_2[6]), Timestamps0_18, ((MR_Box) (Var_29)), &conv5_Timestamps_19);
    Timestamps_19 = ((MR_Word) (conv5_Timestamps_19));
    make__make_info__make_info_set_file_timestamps_3_p_0(Timestamps_19, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_30_30);
    Var_31 = make__timestamp__init_target_file_timestamps_0_f_0();
    make__make_info__make_info_set_target_file_timestamps_3_p_0(Var_31, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_21);
  }
}

static void MR_CALL 
make__program_target__out_of_date_java_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word ObjModules_9,
  MR_Word * OutOfDateModules_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;

  if ((ObjModules_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *OutOfDateModules_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(1, ObjModules_9, (MR_Integer) 0))));
    MR_Word ModuleNames_14 = ((MR_Word) ((MR_hl_field(1, ObjModules_9, (MR_Integer) 1))));
    MR_Word OutOfDateModules0_15;
    MR_Word JavaTarget_16;
    MR_Word ClassTarget_17;
    MR_Word ProgressStream_18;
    MR_Word MaybeJavaTimestamp_19;
    MR_Word MaybeClassTimestamp_20;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word JavaTimestamp_21;
    MR_Word ClassTimestamp_22;
    MR_Word Var_37;

    make__program_target__out_of_date_java_modules_7_p_0(Globals_8, ModuleNames_14, &OutOfDateModules0_15, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_27);
    {
      JavaTarget_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, JavaTarget_16, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(0, JavaTarget_16, 1) = ((MR_Box) ((MR_Unsigned) 44U));
    }
    {
      ClassTarget_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassTarget_17, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(0, ClassTarget_17, 1) = ((MR_Box) ((MR_Unsigned) 48U));
    }
    mercury__io__output_stream_3_p_0(&ProgressStream_18);
    make__timestamp__get_target_timestamp_9_p_0(ProgressStream_18, Globals_8, (MR_Integer) 0, JavaTarget_16, &MaybeJavaTimestamp_19, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_33_33);
    make__timestamp__get_target_timestamp_9_p_0(ProgressStream_18, Globals_8, (MR_Integer) 0, ClassTarget_17, &MaybeClassTimestamp_20, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_24);
    succeeded = ((MR_tag((MR_Word) MaybeJavaTimestamp_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      JavaTimestamp_21 = ((MR_Word) ((MR_hl_field(0, MaybeJavaTimestamp_19, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeClassTimestamp_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        ClassTimestamp_22 = ((MR_Word) ((MR_hl_field(0, MaybeClassTimestamp_20, (MR_Integer) 0))));
        libs__timestamp____Compare____timestamp_0_0(&Var_37, ClassTimestamp_22, JavaTimestamp_21);
        succeeded = (Var_37 != (MR_Integer) 1);
      }
    }
    if (succeeded)
      *OutOfDateModules_10 = OutOfDateModules0_15;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *OutOfDateModules_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (OutOfDateModules0_15));
      }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_18_p_0(
  MR_Word MainModuleName_19,
  MR_Word FileType_20,
  MR_String FullMainModuleLinkedFileName_21,
  MR_String CurDirMainModuleLinkedFileName_22,
  MR_Word MaybeTimestamp_23,
  MR_Word AllModules_24,
  MR_Word ObjModules_25,
  MR_Word CompilationTarget_26,
  MR_Word PIC_27,
  MR_Word DepsSucceeded_28,
  MR_Word BuildDepsResult_29,
  MR_Word Globals_30,
  MR_Word ErrorStream_31,
  MR_Word * Succeeded_32,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_Word MaybePreLinkCommand_35;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_30, (MR_Integer) 669, &MaybePreLinkCommand_35);
  if ((MaybePreLinkCommand_35 == (MR_Word) ((MR_Unsigned) 0U)))
    make__program_target__build_linked_target_2_18_p_0(Globals_30, MainModuleName_19, FileType_20, FullMainModuleLinkedFileName_21, CurDirMainModuleLinkedFileName_22, MaybeTimestamp_23, AllModules_24, ObjModules_25, CompilationTarget_26, PIC_27, DepsSucceeded_28, BuildDepsResult_29, ErrorStream_31, Succeeded_32, STATE_VARIABLE_Info_0_41, STATE_VARIABLE_Info_42);
  else
  {
    MR_String PreLinkCommand_36 = ((MR_String) ((MR_hl_field(1, MaybePreLinkCommand_35, (MR_Integer) 0))));
    MR_String CommandString_37;
    MR_Word ProgressStream_39;
    MR_Word Var_46;
    MR_Word PreLinkSucceeded_52;

    Var_46 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_24);
    backend_libs__compile_target_code__make_all_module_command_6_p_0(PreLinkCommand_36, MainModuleName_19, Var_46, &CommandString_37);
    mercury__io__output_stream_3_p_0(&ProgressStream_39);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_30, ProgressStream_39, ErrorStream_31, ProgressStream_39, (MR_Integer) 0, CommandString_37, &PreLinkSucceeded_52);
    switch (PreLinkSucceeded_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_32 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
        }
        break;
      case (MR_Integer) 1:
        make__program_target__build_linked_target_2_18_p_0(Globals_30, MainModuleName_19, FileType_20, FullMainModuleLinkedFileName_21, CurDirMainModuleLinkedFileName_22, MaybeTimestamp_23, AllModules_24, ObjModules_25, CompilationTarget_26, PIC_27, DepsSucceeded_28, BuildDepsResult_29, ErrorStream_31, Succeeded_32, STATE_VARIABLE_Info_0_41, STATE_VARIABLE_Info_42);
        break;
    }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_HeadVar__7_7;

  backend_libs__compile_target_code__link_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &conv15_HeadVar__7_7);
  *wrapper_arg_1 = ((MR_Box) (conv15_HeadVar__7_7));
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv14_HeadVar__5_5;

  parse_tree__file_names__module_name_to_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv14_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_ForeignObjectFiles_14;
  MR_Word conv10_STATE_VARIABLE_MakeInfo_24;

  make__program_target__get_module_foreign_object_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv11_ForeignObjectFiles_14, ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_MakeInfo_24);
  *wrapper_arg_2 = ((MR_Box) (conv11_ForeignObjectFiles_14));
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_MakeInfo_24));
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_7(
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
make__program_target__build_linked_target_2_18_p_0_2(
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

  make__dependencies__get_dependency_status_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__6_6));
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_91;

  conv0_LambdaHeadVar__2_91 = make__program_target__IntroducedFrom__func__build_linked_target_2__545__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_91));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_3(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_2_18_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_2_18_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_5(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_2_18_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_2_18_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuple_129 = ((MR_Word) ((env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__conv5_ExtraObjTuple_129));
  make__program_target__build_linked_target_2_18_p_0_4(env_ptr);
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_4(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_2_18_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_2_18_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuple_129, (MR_Integer) 0))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuple_129, (MR_Integer) 1))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuple_129, (MR_Integer) 2)));

    (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__Var_95 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuple_129, (MR_Integer) 2))) & (MR_Integer) 3);
    (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__succeeded = ((env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__Var_95 == (MR_Integer) 3);
    if ((env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__succeeded)
      make__program_target__build_linked_target_2_18_p_0_3(env_ptr);
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0_6(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_2_18_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_2_18_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_status_result_0), &(env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__conv5_ExtraObjTuple_129, (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuples_50, make__program_target__build_linked_target_2_18_p_0_5, env_ptr);
      (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__program_target__build_linked_target_2_18_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__program_target__build_linked_target_2_18_p_0(
  MR_Word Globals_19,
  MR_Word MainModuleName_20,
  MR_Word FileType_21,
  MR_String FullMainModuleLinkedFileName_22,
  MR_String CurDirMainModuleLinkedFileName_23,
  MR_Word MaybeTimestamp_24,
  MR_Word AllModules_25,
  MR_Word ObjModules_26,
  MR_Word CompilationTarget_27,
  MR_Word PIC_28,
  MR_Word DepsSucceeded_29,
  MR_Word BuildDepsResult_30,
  MR_Word ErrorStream_31,
  MR_Word * Succeeded_32,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78)
{
  struct make__program_target__build_linked_target_2_18_p_0_env_0_s env;

  {
    MR_Word LinkObjects_35;
    MR_Word NoLinkObjsGlobals_36;
    MR_Word ProgressStream_37;
    MR_Word AllModulesList_38;
    MR_Word InitObjects_45;
    MR_Word DepsResult2_46;
    MR_Word ObjectsToCheck_47;
    MR_Word ObjectsToCheckDepFiles_48;
    MR_Word DepsResult3_54;
    MR_Word BuildDepsSucceeded_55;
    MR_Word ExtraObjectTimestamps_56;
    MR_Word ExtraObjectDepsResult_57;
    MR_Word STATE_VARIABLE_Info_87_87;
    MR_Word Var_92;
    MR_Word STATE_VARIABLE_Info_93_93;
    MR_Word Var_96;
    MR_Word STATE_VARIABLE_Info_97_97;
    MR_Word Var_99;
    MR_String Var_100;
    MR_Box conv4_STATE_VARIABLE_Info_93_93;
    MR_Box conv3_STATE_VARIABLE_IO_94_94;
    MR_Box conv9_STATE_VARIABLE_Info_97_97;
    MR_Box conv8_STATE_VARIABLE_IO_98_98;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_19, (MR_Integer) 584, &LinkObjects_35);
    libs__globals__set_option_4_p_0((MR_Integer) 584, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[9])), Globals_19, &NoLinkObjsGlobals_36);
    mercury__io__output_stream_3_p_0(&ProgressStream_37);
    AllModulesList_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_25);
    switch (FileType_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          DepsResult2_46 = BuildDepsResult_30;
          InitObjects_45 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_87_87 = STATE_VARIABLE_Info_0_77;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word InitObjectResult1_41;

          backend_libs__compile_target_code__make_init_obj_file_8_p_0(NoLinkObjsGlobals_36, ProgressStream_37, ErrorStream_31, MainModuleName_20, AllModulesList_38, &InitObjectResult1_41);
          if ((InitObjectResult1_41 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            DepsResult2_46 = (MR_Integer) 2;
            InitObjects_45 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_87_87 = STATE_VARIABLE_Info_0_77;
          }
          else
          {
            MR_String InitObject_42 = ((MR_String) ((MR_hl_field(1, InitObjectResult1_41, (MR_Integer) 0))));
            MR_Word FileTimestamps0_43;
            MR_Word FileTimestamps1_44;

            FileTimestamps0_43 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_77);
            mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (InitObject_42)), FileTimestamps0_43, &FileTimestamps1_44);
            make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps1_44, STATE_VARIABLE_Info_0_77, &STATE_VARIABLE_Info_87_87);
            {
              InitObjects_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InitObjects_45, 0) = ((MR_Box) (InitObject_42));
              MR_hl_field(1, InitObjects_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            DepsResult2_46 = BuildDepsResult_30;
          }
        }
        break;
    }
    ObjectsToCheck_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_45, LinkObjects_35);
    ObjectsToCheckDepFiles_48 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__program_target_scalar_common_2[5]), ObjectsToCheck_47);
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_92, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
      MR_hl_field(0, Var_92, 1) = ((MR_Box) (make__program_target__build_linked_target_2_18_p_0_2));
      MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_92, 3) = ((MR_Box) (ProgressStream_37));
      MR_hl_field(0, Var_92, 4) = ((MR_Box) (NoLinkObjsGlobals_36));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_status_result_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_92, ObjectsToCheckDepFiles_48, &(env).make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuples_50, ((MR_Box) (STATE_VARIABLE_Info_87_87)), &conv4_STATE_VARIABLE_Info_93_93, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_94_94);
    STATE_VARIABLE_Info_93_93 = ((MR_Word) (conv4_STATE_VARIABLE_Info_93_93));
    make__program_target__build_linked_target_2_18_p_0_6(&env);
    if ((env).make__program_target__build_linked_target_2_18_p_0_env_0__succeeded)
      DepsResult3_54 = (MR_Integer) 2;
    else
      DepsResult3_54 = DepsResult2_46;
    (env).make__program_target__build_linked_target_2_18_p_0_env_0__succeeded = (DepsResult3_54 == (MR_Integer) 2);
    if ((env).make__program_target__build_linked_target_2_18_p_0_env_0__succeeded)
      BuildDepsSucceeded_55 = (MR_Integer) 0;
    else
      BuildDepsSucceeded_55 = (MR_Integer) 1;
    Var_100 = mercury__dir__this_directory_0_f_0();
    {
      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
      MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_96, 0) = ((MR_Box) (&make__program_target_scalar_common_5[1]));
      MR_hl_field(0, Var_96, 1) = ((MR_Box) (make__program_target__build_linked_target_2_18_p_0_7));
      MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_96, 3) = ((MR_Box) (Var_99));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, ObjectsToCheck_47, &ExtraObjectTimestamps_56, ((MR_Box) (STATE_VARIABLE_Info_93_93)), &conv9_STATE_VARIABLE_Info_97_97, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_98_98);
    STATE_VARIABLE_Info_97_97 = ((MR_Word) (conv9_STATE_VARIABLE_Info_97_97));
    make__dependencies__check_dependency_timestamps_9_p_0(NoLinkObjsGlobals_36, FullMainModuleLinkedFileName_22, MaybeTimestamp_24, BuildDepsSucceeded_55, (env).make__program_target__build_linked_target_2_18_p_0_env_0__ExtraObjTuples_50, ExtraObjectTimestamps_56, &ExtraObjectDepsResult_57);
    switch (DepsSucceeded_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ErrorMsg_60;

          make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_22, &ErrorMsg_60);
          make__util__maybe_write_msg_locked_5_p_0(ProgressStream_37, STATE_VARIABLE_Info_97_97, ErrorMsg_60);
          *Succeeded_32 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_97_97;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DepsResult_173;

          switch (DepsResult3_54) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              DepsResult_173 = DepsResult3_54;
              break;
            case (MR_Integer) 1:
              DepsResult_173 = DepsResult3_54;
              break;
            case (MR_Integer) 0:
              DepsResult_173 = ExtraObjectDepsResult_57;
              break;
          }
          switch (DepsResult_173) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_String ErrorMsg_171;

                make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_22, &ErrorMsg_171);
                make__util__maybe_write_msg_locked_5_p_0(ProgressStream_37, STATE_VARIABLE_Info_97_97, ErrorMsg_171);
                *Succeeded_32 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_97_97;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String MakingMsg_65;
                MR_Word ForeignObjectFileLists_66;
                MR_Word ForeignObjects_67;
                MR_Word Ext_70;
                MR_Word ObjList_71;
                MR_Word AllObjects_72;
                MR_Word CmdLineTargets0_73;
                MR_Word CmdLineTargets_74;
                MR_Word Var_112;
                MR_Word STATE_VARIABLE_Info_113_113;
                MR_Word Var_117;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_121;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word STATE_VARIABLE_Info_125_125;
                MR_Box conv13_STATE_VARIABLE_Info_113_113;
                MR_Box conv12_STATE_VARIABLE_IO_114_114;

                make__util__maybe_making_filename_msg_3_p_0(NoLinkObjsGlobals_36, FullMainModuleLinkedFileName_22, &MakingMsg_65);
                make__util__maybe_write_msg_4_p_0(ProgressStream_37, MakingMsg_65);
                {
                  Var_112 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_112, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
                  MR_hl_field(0, Var_112, 1) = ((MR_Box) (make__program_target__build_linked_target_2_18_p_0_8));
                  MR_hl_field(0, Var_112, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_112, 3) = ((MR_Box) (ProgressStream_37));
                  MR_hl_field(0, Var_112, 4) = ((MR_Box) (Globals_19));
                  MR_hl_field(0, Var_112, 5) = ((MR_Box) (PIC_28));
                }
                mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, AllModulesList_38, &ForeignObjectFileLists_66, ((MR_Box) (STATE_VARIABLE_Info_97_97)), &conv13_STATE_VARIABLE_Info_113_113, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_114_114);
                STATE_VARIABLE_Info_113_113 = ((MR_Word) (conv13_STATE_VARIABLE_Info_113_113));
                ForeignObjects_67 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjectFileLists_66);
                switch (CompilationTarget_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ObjExt_68;
                      MR_Word Var_69;

                      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_28, &ObjExt_68, &Var_69);
                      {
                        Ext_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Ext_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, Ext_70, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_68));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    Ext_70 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[10]));
                    break;
                  case (MR_Integer) 2:
                    Ext_70 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[11]));
                    break;
                }
                {
                  Var_117 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_117, 0) = ((MR_Box) (&make__program_target_scalar_common_10[0]));
                  MR_hl_field(0, Var_117, 1) = ((MR_Box) (make__program_target__build_linked_target_2_18_p_0_9));
                  MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_117, 3) = ((MR_Box) (NoLinkObjsGlobals_36));
                  MR_hl_field(0, Var_117, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_linked_target_2\'/18"));
                  MR_hl_field(0, Var_117, 5) = ((MR_Box) (Ext_70));
                }
                mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_117, ObjModules_26, &ObjList_71);
                Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjects_67, LinkObjects_35);
                Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjList_71, Var_120);
                AllObjects_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_45, Var_119);
                {
                  Var_121 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_121, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
                  MR_hl_field(0, Var_121, 1) = ((MR_Box) (make__program_target__build_linked_target_2_18_p_0_10));
                  MR_hl_field(0, Var_121, 2) = ((MR_Box) ((MR_Integer) 6));
                  MR_hl_field(0, Var_121, 3) = ((MR_Box) (NoLinkObjsGlobals_36));
                  MR_hl_field(0, Var_121, 4) = ((MR_Box) (ProgressStream_37));
                  MR_hl_field(0, Var_121, 5) = ((MR_Box) (ErrorStream_31));
                  MR_hl_field(0, Var_121, 6) = ((MR_Box) (FileType_21));
                  MR_hl_field(0, Var_121, 7) = ((MR_Box) (MainModuleName_20));
                  MR_hl_field(0, Var_121, 8) = ((MR_Box) (AllObjects_72));
                }
                libs__process_util__call_in_forked_process_4_p_0(Var_121, Succeeded_32);
                CmdLineTargets0_73 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_113_113);
                {
                  Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_124, 0) = (MR_Box) ((MR_Unsigned) (FileType_21));
                }
                {
                  Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_123, 0) = ((MR_Box) (MainModuleName_20));
                  MR_hl_field(0, Var_123, 1) = ((MR_Box) (Var_124));
                }
                mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_123)), CmdLineTargets0_73, &CmdLineTargets_74);
                make__make_info__make_info_set_command_line_targets_3_p_0(CmdLineTargets_74, STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_125_125);
                switch (*Succeeded_32) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ErrorMsg_133;

                      make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_22, &ErrorMsg_133);
                      make__util__maybe_write_msg_locked_5_p_0(ProgressStream_37, STATE_VARIABLE_Info_125_125, ErrorMsg_133);
                      *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_125_125;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FileTimestamps2_75;
                      MR_Word FileTimestamps_76;

                      FileTimestamps2_75 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_125_125);
                      mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (FullMainModuleLinkedFileName_22)), FileTimestamps2_75, &FileTimestamps_76);
                      make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_76, STATE_VARIABLE_Info_125_125, STATE_VARIABLE_Info_78);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word MainModuleLinkedTarget_61;
                MR_Word Var_104;

                {
                  Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_104, 0) = (MR_Box) ((MR_Unsigned) (FileType_21));
                }
                {
                  MainModuleLinkedTarget_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MainModuleLinkedTarget_61, 0) = ((MR_Box) (MainModuleName_20));
                  MR_hl_field(0, MainModuleLinkedTarget_61, 1) = ((MR_Box) (Var_104));
                }
                (env).make__program_target__build_linked_target_2_18_p_0_env_0__succeeded = (strcmp(FullMainModuleLinkedFileName_22, CurDirMainModuleLinkedFileName_23) == 0);
                if ((env).make__program_target__build_linked_target_2_18_p_0_env_0__succeeded)
                {
                  MR_String UpToDateMsg_62;

                  make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_36, MainModuleLinkedTarget_61, FullMainModuleLinkedFileName_22, STATE_VARIABLE_Info_97_97, STATE_VARIABLE_Info_78, &UpToDateMsg_62);
                  make__util__maybe_write_msg_4_p_0(ProgressStream_37, UpToDateMsg_62);
                  *Succeeded_32 = (MR_Integer) 1;
                }
                else
                {
                  MR_Word MadeSymlinkOrCopy_63;

                  backend_libs__compile_target_code__post_link_maybe_make_symlink_or_copy_11_p_0(NoLinkObjsGlobals_36, ProgressStream_37, ErrorStream_31, FullMainModuleLinkedFileName_22, CurDirMainModuleLinkedFileName_23, MainModuleName_20, FileType_21, Succeeded_32, &MadeSymlinkOrCopy_63);
                  switch (MadeSymlinkOrCopy_63) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String UpToDateMsg_130;

                        make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_36, MainModuleLinkedTarget_61, FullMainModuleLinkedFileName_22, STATE_VARIABLE_Info_97_97, STATE_VARIABLE_Info_78, &UpToDateMsg_130);
                        make__util__maybe_write_msg_4_p_0(ProgressStream_37, UpToDateMsg_130);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String LinkMsg_64;

                        make__util__maybe_symlink_or_copy_linked_target_msg_3_p_0(NoLinkObjsGlobals_36, FullMainModuleLinkedFileName_22, &LinkMsg_64);
                        make__util__maybe_write_msg_4_p_0(ProgressStream_37, LinkMsg_64);
                        *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_97_97;
                      }
                      break;
                  }
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_40;

  make__program_target__IntroducedFrom__pred__order_target_modules__358__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_40);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_40));
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Res_8;

  make__program_target__compare_paired_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Res_8);
  *wrapper_arg_3 = ((MR_Box) (conv4_Res_8));
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_1(
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
  MR_Word conv0_STATE_VARIABLE_Info_19;

  make__program_target__pair_module_with_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_19);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_19));
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word Modules_9,
  MR_Word * OrderedModules_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word OrderByTimestamp_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 691, &OrderByTimestamp_13);
  switch (OrderByTimestamp_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *OrderedModules_10 = Modules_9;
        *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PairedModules_14;
        MR_Word OrderedPairs_15;
        MR_Word Var_21;
        MR_Box conv3_STATE_VARIABLE_Info_17;
        MR_Box conv2_STATE_VARIABLE_IO_19;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_5[0]));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (make__program_target__order_target_modules_7_p_0_1));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_21, 3) = ((MR_Box) (Globals_8));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Modules_9, &PairedModules_14, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv3_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_19);
        *STATE_VARIABLE_Info_17 = ((MR_Word) (conv3_STATE_VARIABLE_Info_17));
        mercury__list__sort_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__program_target_scalar_common_2[3]), PairedModules_14, &OrderedPairs_15);
        mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[4]), OrderedPairs_15, OrderedModules_10);
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
