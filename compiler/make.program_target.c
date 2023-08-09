/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2023-08-09
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



struct make__program_target__build_linked_target_2_17_p_0_env_0_s {
  MR_bool make__program_target__build_linked_target_2_17_p_0_env_0__succeeded;
  MR_Word make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuples_48;
  jmp_buf make__program_target__build_linked_target_2_17_p_0_env_0__commit_0;
  MR_Word make__program_target__build_linked_target_2_17_p_0_env_0__Var_97;
  MR_Tuple make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuple_132;
  MR_Box make__program_target__build_linked_target_2_17_p_0_env_0__conv5_ExtraObjTuple_132;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 make__program_target__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct3 make__program_target____vpti_tuple_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0__plain_make__make_info__type_ctor_info_dependency_status_0;

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
make__program_target__IntroducedFrom__pred__make_install_dirs__2014__1_5_p_0(
  MR_String IntsSubdir_14,
  MR_String LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1358__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1251__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word HeadVar__2_31);

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__694__1_1_f_0(
  MR_Word LambdaHeadVar__1_29);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__535__1_1_f_0(
  MR_String LambdaHeadVar__1_95);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__415__1_3_f_0(
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_String LambdaHeadVar__1_30);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__351__1_2_p_0(
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
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word PIC_11,
  MR_String FactTableFile_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__remove_fact_table_c_file_6_p_0(
  MR_Word Globals_7,
  MR_String FactTableFile_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

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
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

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
make__program_target__install_grade_ints_and_headers_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkSucceeded_11,
  MR_String GradeDir_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

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
make__program_target__install_ints_and_headers_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

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
make__program_target__get_non_nested_target_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_TargetModulesCord_0_17,
  MR_Word * STATE_VARIABLE_TargetModulesCord_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__collect_modules_with_children_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_ParentModules_0_17,
  MR_Word * STATE_VARIABLE_ParentModules_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__delete_java_class_timestamps_4_p_0(
  MR_String FileName_5,
  MR_Word MaybeTimestamp_6,
  MR_Word STATE_VARIABLE_Timestamps_0_8,
  MR_Word * STATE_VARIABLE_Timestamps_9);

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word FileType_11,
  MR_String OutputFileName_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static MR_Box MR_CALL 
make__program_target__get_module_foreign_object_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_module_foreign_object_files_8_p_0(
  MR_Word Globals_9,
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_Word * ForeignObjectFiles_12,
  MR_Word STATE_VARIABLE_MakeInfo_0_21,
  MR_Word * STATE_VARIABLE_MakeInfo_22);

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0(
  MR_Word Globals_9,
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_Word * ObjectTargets_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

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
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

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
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

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
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

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
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

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
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__install_library_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__install_library_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

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
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

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
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

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
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word MainModuleName_18,
  MR_Word FileType_19,
  MR_String OutputFileName_20,
  MR_Word MaybeTimestamp_21,
  MR_Word AllModules_22,
  MR_Word ObjModules_23,
  MR_Word CompilationTarget_24,
  MR_Word PIC_25,
  MR_Word DepsSucceeded_26,
  MR_Word BuildDepsResult_27,
  MR_Word Globals_28,
  MR_Word ErrorStream_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0(
  MR_Word Globals_18,
  MR_Word MainModuleName_19,
  MR_Word FileType_20,
  MR_String OutputFileName_21,
  MR_Word MaybeTimestamp_22,
  MR_Word AllModules_23,
  MR_Word ObjModules_24,
  MR_Word CompilationTarget_25,
  MR_Word PIC_26,
  MR_Word DepsSucceeded_27,
  MR_Word BuildDepsResult_28,
  MR_Word ErrorStream_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_78,
  MR_Word * STATE_VARIABLE_Info_79);

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


static /* final */ const MR_Box make__program_target_scalar_common_1[73][2];

static /* final */ const MR_Box make__program_target_scalar_common_2[12][3];

static /* final */ const MR_Box make__program_target_scalar_common_3[7][5];

static /* final */ const MR_Box make__program_target_scalar_common_4[1][4];

static /* final */ const MR_Box make__program_target_scalar_common_5[5][1];

static /* final */ const MR_Box make__program_target_scalar_common_6[7][10];

static /* final */ const MR_Box make__program_target_scalar_common_7[3][6];

static /* final */ const MR_Box make__program_target_scalar_common_8[10][11];

static /* final */ const MR_Box make__program_target_scalar_common_9[2][8];

static /* final */ const MR_Box make__program_target_scalar_common_10[4][12];

static /* final */ const MR_Box make__program_target_scalar_common_11[2][7];

static /* final */ const MR_Box make__program_target_scalar_common_12[4][9];


struct make__program_target__vector_common_type_13_0_s {
  const MR_Word make__program_target__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_13_0_s make__program_target_vector_common_13[7];



static /* final */ const MR_Box make__program_target_scalar_common_1[73][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "--compile-to-shared-lib")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "--use-grade-subdirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "analysis_cache")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "Mercury")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_5[0]))),
    ((MR_Box) ((MR_String) "int0s"))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__program_target_scalar_common_1[16])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(2, &make__program_target_scalar_common_5[0]))),
    ((MR_Box) ((MR_String) "opts"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_5[1]))),
    ((MR_Box) ((MR_String) "ints"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_5[2]))),
    ((MR_Box) ((MR_String) "int2s"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_5[3]))),
    ((MR_Box) ((MR_String) "int3s"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[22]))),
    ((MR_Box) ((MR_String) "module_deps"))
  },
  /* row  24 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[4])),
    ((MR_Box) ((MR_String) "mhs"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[26]))),
    ((MR_Box) ((MR_String) "mihs"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[28]))),
    ((MR_Box) ((MR_String) "analysiss"))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "module_dep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "mih")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "mh")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "int3")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "int2")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "analysis")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Unsigned) 48U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 44U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Unsigned) 40U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_5[1]))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) (((MR_Unsigned) 0U << 2))
  },
  /* row  72 */
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
    ((MR_Box) (&make__program_target_scalar_common_7[0])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[1])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[2])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_2)),
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
    ((MR_Box) (&make__program_target_scalar_common_7[1])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[1])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[3])),
    ((MR_Box) (make__program_target__build_analysis_files_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[5])),
    ((MR_Box) (make__program_target__install_library_grade_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[6])),
    ((MR_Box) (make__program_target__get_module_foreign_object_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_3[7][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__program_target_scalar_common_1[1])),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_5[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 4U) },
};

static /* final */ const MR_Box make__program_target_scalar_common_6[7][10] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__program_target____vpti_tuple_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0__plain_make__make_info__type_ctor_info_dependency_status_0)),
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
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
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
  /* row   5 */
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
  /* row   6 */
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

static /* final */ const MR_Box make__program_target_scalar_common_7[3][6] = {
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

static /* final */ const MR_Box make__program_target_scalar_common_8[10][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
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
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   7 */
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
  /* row   8 */
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
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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

static /* final */ const MR_Box make__program_target_scalar_common_10[4][12] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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

static /* final */ const MR_Box make__program_target_scalar_common_12[4][9] = {
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


static /* final */ const struct make__program_target__vector_common_type_13_0_s make__program_target_vector_common_13[7] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[8])) },
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

static const MR_FA_TypeInfo_Struct1 make__program_target__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_VA_PseudoTypeInfo_Struct3 make__program_target____vpti_tuple_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0__plain_make__make_info__type_ctor_info_dependency_status_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&make__program_target__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)
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
make__program_target__IntroducedFrom__pred__make_install_dirs__2014__1_5_p_0(
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
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1358__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_25, HeadVar__2_26);
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1251__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word HeadVar__2_31)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_11, ((MR_Box) (HeadVar__2_31)));
  return succeeded;
}

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__694__1_1_f_0(
  MR_Word LambdaHeadVar__1_29)
{
  MR_String LambdaHeadVar__2_30 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 2))));

  return LambdaHeadVar__2_30;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__535__1_1_f_0(
  MR_String LambdaHeadVar__1_95)
{
  MR_Word LambdaHeadVar__2_96;

  {
    LambdaHeadVar__2_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_96, 0) = ((MR_Box) (LambdaHeadVar__1_95));
  }
  return LambdaHeadVar__2_96;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__415__1_3_f_0(
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_String LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31;
  MR_Word Var_32;
  MR_Word Var_33;

  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_33, 1) = (MR_Box) ((MR_Unsigned) (PIC_10));
    MR_hl_field(3, Var_33, 2) = ((MR_Box) (LambdaHeadVar__1_30));
  }
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (Var_33));
  }
  {
    LambdaHeadVar__2_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_31, 0) = ((MR_Box) (Var_32));
  }
  return LambdaHeadVar__2_31;
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__351__1_2_p_0(
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
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  make__util__remove_make_target_file_by_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_String Part1_11;
  MR_String CleaningMsg_12;
  MR_Word STATE_VARIABLE_Info_18_18;
  MR_String Var_23;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word STATE_VARIABLE_Info_50_50;
  MR_Word STATE_VARIABLE_Info_55_55;
  MR_String Var_72;
  MR_Box conv2_STATE_VARIABLE_Info_44_44;
  MR_Box conv1_STATE_VARIABLE_IO_45_45;

  make__program_target__make_module_clean_6_p_0(Globals_7, ModuleName_8, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_18_18);
  Var_23 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_8);
  Var_72 = mercury__string__f_43_43_2_f_0(Var_23, (MR_String) "\'");
  Part1_11 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up interface files for module \140", Var_72);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_7, Part1_11, &CleaningMsg_12);
  make__util__maybe_write_msg_3_p_0(CleaningMsg_12);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&make__program_target_scalar_common_10[3]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_43, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.make_module_realclean\'/6"));
    MR_hl_field(0, Var_43, 5) = ((MR_Box) ((MR_Integer) 73));
    MR_hl_field(0, Var_43, 6) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[68])), ((MR_Box) (STATE_VARIABLE_Info_18_18)), &conv2_STATE_VARIABLE_Info_44_44, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_45_45);
  STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv2_STATE_VARIABLE_Info_44_44));
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[22])), STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_50_50);
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[69])), STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_55_55);
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[70])), STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_15);
}

static void MR_CALL 
make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word PIC_11,
  MR_String FactTableFile_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word Var_21;

  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_21, 1) = (MR_Box) ((MR_Unsigned) (PIC_11));
    MR_hl_field(3, Var_21, 2) = ((MR_Box) (FactTableFile_12));
  }
  make__util__remove_make_target_file_by_name_9_p_0(Globals_9, (MR_String) "predicate \140make.program_target.remove_fact_table_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_10, Var_21, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
make__program_target__remove_fact_table_c_file_6_p_0(
  MR_Word Globals_7,
  MR_String FactTableFile_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_String FactTableCFile_12;
  MR_Word _FactTableDirs_11;

  parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_fact_table_c_file\'/6", (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[60])), FactTableFile_8, &_FactTableDirs_11, &FactTableCFile_12);
  make__util__make_remove_file_7_p_0(Globals_7, (MR_Integer) 73, FactTableCFile_12, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
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
  MR_Word conv9_STATE_VARIABLE_Info_16;

  make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Info_16));
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
  MR_Word conv6_STATE_VARIABLE_Info_16;

  make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_16));
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
  MR_Word conv3_STATE_VARIABLE_Info_14;

  make__program_target__remove_fact_table_c_file_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_14));
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
  MR_Word conv0_HeadVar__7_7;

  make__util__remove_make_target_file_by_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_String Part1_11;
  MR_String CleaningMsg_12;
  MR_Word MaybeModuleDepInfo_13;
  MR_Word FactTableFiles_16;
  MR_Word CCodeModule_17;
  MR_String Var_25;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Info_49_49;
  MR_Word STATE_VARIABLE_Info_54_54;
  MR_Word STATE_VARIABLE_Info_57_57;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_Info_60_60;
  MR_Word STATE_VARIABLE_Info_66_66;
  MR_Word STATE_VARIABLE_Info_69_69;
  MR_String Var_88;
  MR_Word STATE_VARIABLE_Info_22_93;
  MR_Word STATE_VARIABLE_Info_27_98;
  MR_Word Var_101;
  MR_Word STATE_VARIABLE_Info_22_108;
  MR_Word STATE_VARIABLE_Info_27_113;
  MR_Word Var_116;
  MR_Box conv2_STATE_VARIABLE_Info_30_30;
  MR_Box conv1_STATE_VARIABLE_IO_31_31;
  MR_Box conv5_STATE_VARIABLE_Info_60_60;
  MR_Box conv4_STATE_VARIABLE_IO_61_61;
  MR_Box conv8_STATE_VARIABLE_Info_69_69;
  MR_Box conv7_STATE_VARIABLE_IO_70_70;
  MR_Box conv11_STATE_VARIABLE_Info_19;
  MR_Box conv10_STATE_VARIABLE_IO_21;

  Var_25 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_8);
  Var_88 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) "\'.");
  Part1_11 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up target files for module \140", Var_88);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_7, Part1_11, &CleaningMsg_12);
  make__util__maybe_write_msg_3_p_0(CleaningMsg_12);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_10[3]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.make_module_clean\'/6"));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) ((MR_Integer) 73));
    MR_hl_field(0, Var_28, 6) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[57])), ((MR_Box) (STATE_VARIABLE_Info_0_18)), &conv2_STATE_VARIABLE_Info_30_30, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
  STATE_VARIABLE_Info_30_30 = ((MR_Word) (conv2_STATE_VARIABLE_Info_30_30));
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[58])), STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_49_49);
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[59])), STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_54_54);
  make__module_dep_file__get_module_dependencies_7_p_0(Globals_7, ModuleName_8, &MaybeModuleDepInfo_13, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_57_57);
  if ((MaybeModuleDepInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
    FactTableFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleDepInfo_14 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_13, (MR_Integer) 0))));
    MR_Word FactTableFilesSet_15;

    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_14, &FactTableFilesSet_15);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_15, &FactTableFiles_16);
  }
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_2));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (Globals_7));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, FactTableFiles_16, ((MR_Box) (STATE_VARIABLE_Info_57_57)), &conv5_STATE_VARIABLE_Info_60_60, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_61_61);
  STATE_VARIABLE_Info_60_60 = ((MR_Word) (conv5_STATE_VARIABLE_Info_60_60));
  parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_8, (MR_Integer) 0, &CCodeModule_17);
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.make_module_clean\'/6", (MR_Integer) 73, CCodeModule_17, (MR_Word) ((MR_Unsigned) 36U), STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_66_66);
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_5[0])), STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_22_93);
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[71])), STATE_VARIABLE_Info_22_93, &STATE_VARIABLE_Info_27_98);
  {
    Var_101 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_101, 0) = ((MR_Box) (&make__program_target_scalar_common_8[9]));
    MR_hl_field(0, Var_101, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_3));
    MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_101, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_101, 4) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, Var_101, 5) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_101, FactTableFiles_16, ((MR_Box) (STATE_VARIABLE_Info_27_98)), &conv8_STATE_VARIABLE_Info_69_69, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_70_70);
  STATE_VARIABLE_Info_69_69 = ((MR_Word) (conv8_STATE_VARIABLE_Info_69_69));
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_5[1])), STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_22_108);
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[72])), STATE_VARIABLE_Info_22_108, &STATE_VARIABLE_Info_27_113);
  {
    Var_116 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_116, 0) = ((MR_Box) (&make__program_target_scalar_common_8[9]));
    MR_hl_field(0, Var_116, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_4));
    MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_116, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_116, 4) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, Var_116, 5) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, FactTableFiles_16, ((MR_Box) (STATE_VARIABLE_Info_27_113)), &conv11_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_21);
  *STATE_VARIABLE_Info_19 = ((MR_Word) (conv11_STATE_VARIABLE_Info_19));
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
make__program_target__install_grade_ints_and_headers_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkSucceeded_11,
  MR_String GradeDir_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_17;

  make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_13, &MaybeModuleDepInfo_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *Succeeded_14 = (MR_Integer) 0;
  else
  {
    MR_String Prefix_19;
    MR_String LibDir_20;
    MR_Word Target_21;
    MR_Word HighLevelCode_22;
    MR_Word HeaderSucceeded_27;
    MR_String GradeIntDir_28;
    MR_Word AnyIntermod_29;
    MR_Word OptSucceeded_30;
    MR_Word IntermodAnalysis_31;
    MR_Word IntermodAnalysisSucceeded_32;
    MR_String Var_40;
    MR_String Var_59;
    MR_Word Var_72;

    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 670, &Prefix_19);
    Var_40 = mercury__dir__f_slash_2_f_0(Prefix_19, (MR_String) "lib");
    LibDir_20 = mercury__dir__f_slash_2_f_0(Var_40, (MR_String) "mercury");
    libs__globals__get_target_2_p_0(Globals_10, &Target_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 310, &HighLevelCode_22);
    succeeded = (Target_21 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (HighLevelCode_22 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String GradeIncDir_23;
      MR_Word HeaderSucceeded1_24;
      MR_String IntDir_25;
      MR_Word HeaderSucceeded2_26;
      MR_String Var_44;
      MR_String Var_45;

      Var_45 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "lib");
      Var_44 = mercury__dir__f_slash_2_f_0(Var_45, GradeDir_12);
      GradeIncDir_23 = mercury__dir__f_slash_2_f_0(Var_44, (MR_String) "inc");
      make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIncDir_23, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[27]), &HeaderSucceeded1_24);
      IntDir_25 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
      make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, IntDir_25, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[27]), &HeaderSucceeded2_26);
      HeaderSucceeded_27 = libs__maybe_util__and_2_f_0(HeaderSucceeded1_24, HeaderSucceeded2_26);
    }
    else
      HeaderSucceeded_27 = (MR_Integer) 1;
    Var_59 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
    GradeIntDir_28 = mercury__dir__f_slash_2_f_0(Var_59, GradeDir_12);
    libs__globals__get_any_intermod_2_p_0(Globals_10, &AnyIntermod_29);
    switch (AnyIntermod_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OptSucceeded_30 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIntDir_28, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[18]), &OptSucceeded_30);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 505, &IntermodAnalysis_31);
    switch (IntermodAnalysis_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IntermodAnalysisSucceeded_32 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIntDir_28, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[29]), &IntermodAnalysisSucceeded_32);
        break;
    }
    Var_72 = libs__maybe_util__and_2_f_0(HeaderSucceeded_27, OptSucceeded_30);
    *Succeeded_14 = libs__maybe_util__and_2_f_0(Var_72, IntermodAnalysisSucceeded_32);
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
  MR_Word conv6_STATE_VARIABLE_Info_19;

  make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_19);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_19));
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
  MR_Word conv3_HeadVar__5_5;

  make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
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
        MR_String Grade_19;
        MR_String Part1_20;
        MR_String CleaningMsg_21;
        MR_String Var_22;
        MR_Word STATE_VARIABLE_Info_28_24;
        MR_Word Var_26;
        MR_String Var_31;
        MR_String Var_33;
        MR_String Var_34;
        MR_String Part1_36;
        MR_String CleaningMsg_37;
        MR_Word FileNames_39;
        MR_Word ThisDirFileNames_40;
        MR_String FullInitFileName_41;
        MR_String ThisDirInitFileName_42;
        MR_Word FilesToRemove_43;
        MR_String Var_44;
        MR_Word Var_46;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_54;
        MR_Word STATE_VARIABLE_Info_53_55;
        MR_String Var_64;
        MR_Word STATE_VARIABLE_Info_18_67;
        MR_Word STATE_VARIABLE_Info_22_71;
        MR_Box conv2_STATE_VARIABLE_IO_44_47;
        MR_Box conv5_STATE_VARIABLE_Info_53_55;
        MR_Box conv4_STATE_VARIABLE_IO_54_56;
        MR_Box conv8_STATE_VARIABLE_Info_16;
        MR_Box conv7_STATE_VARIABLE_IO_18;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_9, &Grade_19);
        Var_22 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_11);
        Var_31 = mercury__string__f_43_43_2_f_0(Grade_19, (MR_String) ".");
        Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\' in grade ", Var_31);
        Var_34 = mercury__string__f_43_43_2_f_0(Var_22, Var_33);
        Part1_20 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up grade-dependent files for \140", Var_34);
        make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_20, &CleaningMsg_21);
        make__util__maybe_write_msg_3_p_0(CleaningMsg_21);
        Var_44 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_11);
        Var_64 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "\'.");
        Part1_36 = mercury__string__f_43_43_2_f_0((MR_String) "Removing executable and library files for \140", Var_64);
        make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_36, &CleaningMsg_37);
        make__util__maybe_write_msg_3_p_0(CleaningMsg_37);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&make__program_target_scalar_common_6[5]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_1));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (Globals_9));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) (ModuleName_11));
        }
        mercury__list__map2_foldl_6_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[48])), &FileNames_39, &ThisDirFileNames_40, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_44_47);
        parse_tree__file_names__module_name_to_file_name_full_curdir_6_p_0(Globals_9, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/6", (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[25])), ModuleName_11, &FullInitFileName_41, &ThisDirInitFileName_42);
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (ThisDirInitFileName_42));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (FullInitFileName_41));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
        }
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_40, Var_51);
        FilesToRemove_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_39, Var_50);
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_6[6]));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_2));
          MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_54, 3) = ((MR_Box) (Globals_9));
          MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Integer) 73));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, FilesToRemove_43, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv5_STATE_VARIABLE_Info_53_55, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_54_56);
        STATE_VARIABLE_Info_53_55 = ((MR_Word) (conv5_STATE_VARIABLE_Info_53_55));
        make__util__remove_make_module_file_8_p_0(Globals_9, (MR_Integer) 73, ModuleName_11, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[49])), STATE_VARIABLE_Info_53_55, &STATE_VARIABLE_Info_18_67);
        make__util__remove_make_module_file_8_p_0(Globals_9, (MR_Integer) 73, ModuleName_11, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[50])), STATE_VARIABLE_Info_18_67, &STATE_VARIABLE_Info_22_71);
        make__util__remove_make_module_file_8_p_0(Globals_9, (MR_Integer) 73, ModuleName_11, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[51])), STATE_VARIABLE_Info_22_71, &STATE_VARIABLE_Info_28_24);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_3));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (Globals_9));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, AllModules_12, ((MR_Box) (STATE_VARIABLE_Info_28_24)), &conv8_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_18);
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
make__program_target__install_ints_and_headers_8_p_0_1(
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
make__program_target__install_ints_and_headers_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_15;

  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_11, &MaybeModuleDepInfo_15, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
  if ((MaybeModuleDepInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *Succeeded_12 = (MR_Integer) 0;
  else
  {
    MR_Word ModuleDepInfo_16 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_15, (MR_Integer) 0))));
    MR_Word Children_17;
    MR_Word Exts0_18;
    MR_Word AnyIntermod_19;
    MR_Word Exts1_20;
    MR_Word Exts_21;
    MR_String Prefix_22;
    MR_String LibDir_23;
    MR_Word Results_24;
    MR_Word Target_25;
    MR_Word HeaderSucceeded_29;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_String Var_65;
    MR_Word Var_68;
    MR_String Var_70;
    MR_Word Var_85;
    MR_Box conv1_STATE_VARIABLE_IO_69_69;

    parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_16, &Children_17);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_17);
    if (succeeded)
      Exts0_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
      Exts0_18 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[17]));
    libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_19);
    switch (AnyIntermod_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Exts1_20 = Exts0_18;
        break;
      case (MR_Integer) 1:
        {
          Exts1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Exts1_20, 0) = ((MR_Box) (&make__program_target_scalar_common_1[18]));
          MR_hl_field(1, Exts1_20, 1) = ((MR_Box) (Exts0_18));
        }
        break;
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (&make__program_target_scalar_common_1[23]));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Exts1_20));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_1[21]));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (&make__program_target_scalar_common_1[20]));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_54));
    }
    {
      Exts_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Exts_21, 0) = ((MR_Box) (&make__program_target_scalar_common_1[19]));
      MR_hl_field(1, Exts_21, 1) = ((MR_Box) (Var_49));
    }
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 670, &Prefix_22);
    Var_65 = mercury__dir__f_slash_2_f_0(Prefix_22, (MR_String) "lib");
    LibDir_23 = mercury__dir__f_slash_2_f_0(Var_65, (MR_String) "mercury");
    Var_70 = mercury__dir__f_slash_2_f_0(LibDir_23, (MR_String) "ints");
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (&make__program_target_scalar_common_8[8]));
      MR_hl_field(0, Var_68, 1) = ((MR_Box) (make__program_target__install_ints_and_headers_8_p_0_1));
      MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_68, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(0, Var_68, 4) = ((MR_Box) (SubdirLinkSucceeded_10));
      MR_hl_field(0, Var_68, 5) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_68, 6) = ((MR_Box) (ModuleName_11));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&make__program_target_scalar_common_4[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, Exts_21, &Results_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_69_69);
    libs__globals__get_target_2_p_0(Globals_9, &Target_25);
    switch (Target_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String FileName_26;
          MR_Word HeaderSucceeded1_27;
          MR_Word HeaderSucceeded2_28;
          MR_String Var_75;
          MR_String Var_78;
          MR_Word ErrorStream_96;
          MR_String InstallMsg_97;
          MR_String Command_98;

          parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_9, (MR_String) "predicate \140make.program_target.install_ints_and_headers\'/8", (MR_Word) (&make__program_target_scalar_common_5[4]), ModuleName_11, &FileName_26);
          Var_75 = mercury__dir__f_slash_2_f_0(LibDir_23, (MR_String) "inc");
          mercury__io__output_stream_3_p_0(&ErrorStream_96);
          make__util__verbose_make_four_part_msg_6_p_0(Globals_9, (MR_String) "Installing file", FileName_26, (MR_String) "in", Var_75, &InstallMsg_97);
          make__util__maybe_write_msg_4_p_0(ErrorStream_96, InstallMsg_97);
          Command_98 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_26, Var_75);
          parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ErrorStream_96, ErrorStream_96, ErrorStream_96, (MR_Integer) 0, Command_98, &HeaderSucceeded1_27);
          Var_78 = mercury__dir__f_slash_2_f_0(LibDir_23, (MR_String) "ints");
          make__program_target__install_subdir_file_8_p_0(Globals_9, SubdirLinkSucceeded_10, Var_78, ModuleName_11, (MR_Tuple) (&make__program_target_scalar_common_1[24]), &HeaderSucceeded2_28);
          HeaderSucceeded_29 = libs__maybe_util__and_2_f_0(HeaderSucceeded1_27, HeaderSucceeded2_28);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        HeaderSucceeded_29 = (MR_Integer) 1;
        break;
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (HeaderSucceeded_29));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Results_24));
    }
    *Succeeded_12 = libs__maybe_util__and_list_1_f_0(Var_85);
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
make__program_target__get_non_nested_target_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_TargetModulesCord_0_17,
  MR_Word * STATE_VARIABLE_TargetModulesCord_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_14;
  MR_Word ModuleDepInfo_15;
  MR_Word SourceFileModuleName_16;

  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_10, &MaybeModuleDepInfo_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  succeeded = (MaybeModuleDepInfo_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ModuleDepInfo_15 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_14, (MR_Integer) 0))));
    parse_tree__module_dep_info__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_15, &SourceFileModuleName_16);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, SourceFileModuleName_16);
  }
  if (succeeded)
    mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_10)), STATE_VARIABLE_TargetModulesCord_0_17, STATE_VARIABLE_TargetModulesCord_18);
  else
    *STATE_VARIABLE_TargetModulesCord_18 = STATE_VARIABLE_TargetModulesCord_0_17;
}

static void MR_CALL 
make__program_target__collect_modules_with_children_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_ParentModules_0_17,
  MR_Word * STATE_VARIABLE_ParentModules_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_14;

  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_10, &MaybeModuleDepInfo_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  if ((MaybeModuleDepInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ParentModules_18 = STATE_VARIABLE_ParentModules_0_17;
  else
  {
    MR_Word ModuleDepInfo_15 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_14, (MR_Integer) 0))));
    MR_Word Children_16;

    parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_15, &Children_16);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_16);
    if (succeeded)
      *STATE_VARIABLE_ParentModules_18 = STATE_VARIABLE_ParentModules_0_17;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ParentModules_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParentModules_0_17));
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
make__program_target__linked_target_cleanup_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word FileType_11,
  MR_String OutputFileName_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word STATE_VARIABLE_Info_20_20;

  make__util__make_remove_file_7_p_0(Globals_9, (MR_Integer) 77, OutputFileName_12, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_20_20);
  switch (FileType_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
      break;
    case (MR_Integer) 4:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_Info_18_24;
        MR_Word STATE_VARIABLE_Info_22_28;

        make__util__remove_make_module_file_8_p_0(Globals_9, (MR_Integer) 77, MainModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[49])), STATE_VARIABLE_Info_20_20, &STATE_VARIABLE_Info_18_24);
        make__util__remove_make_module_file_8_p_0(Globals_9, (MR_Integer) 77, MainModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[50])), STATE_VARIABLE_Info_18_24, &STATE_VARIABLE_Info_22_28);
        make__util__remove_make_module_file_8_p_0(Globals_9, (MR_Integer) 77, MainModuleName_10, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[51])), STATE_VARIABLE_Info_22_28, STATE_VARIABLE_Info_16);
      }
      break;
    case (MR_Integer) 6:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
      break;
    case (MR_Integer) 5:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
      break;
  }
}

static MR_Box MR_CALL 
make__program_target__get_module_foreign_object_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_30;

  conv0_LambdaHeadVar__2_30 = make__program_target__IntroducedFrom__func__get_module_foreign_object_files__694__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_30));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__get_module_foreign_object_files_8_p_0(
  MR_Word Globals_9,
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_Word * ForeignObjectFiles_12,
  MR_Word STATE_VARIABLE_MakeInfo_0_21,
  MR_Word * STATE_VARIABLE_MakeInfo_22)
{
  MR_Word MaybeModuleDepInfo_15;

  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_11, &MaybeModuleDepInfo_15, STATE_VARIABLE_MakeInfo_0_21, STATE_VARIABLE_MakeInfo_22);
  if ((MaybeModuleDepInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_module_foreign_object_files\'/8", (MR_String) "error in dependencies");
      return;
    }
  else
  {
    MR_Word ModuleDepInfo_16 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_15, (MR_Integer) 0))));
    MR_Word ForeignFiles_17;

    make__module_target__external_foreign_code_files_6_p_0(Globals_9, PIC_10, ModuleDepInfo_16, &ForeignFiles_17);
    *ForeignObjectFiles_12 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[11]), ForeignFiles_17);
  }
}

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_31;

  conv0_LambdaHeadVar__2_31 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__415__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0(
  MR_Word Globals_9,
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_Word * ObjectTargets_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word CompilationTarget_15;
  MR_Word MaybeModuleDepInfo_16;
  MR_Word ModuleDepInfo_17;

  libs__globals__get_target_2_p_0(Globals_9, &CompilationTarget_15);
  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_11, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  if ((MaybeModuleDepInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_foreign_object_targets\'/8", (MR_String) "unknown imports");
      return;
    }
  else
    ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, (MR_Integer) 0))));
  switch (CompilationTarget_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FactFileToTarget_18;
        MR_Word FactTableFiles_20;
        MR_Word Var_34;

        {
          FactFileToTarget_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FactFileToTarget_18, 0) = ((MR_Box) (&make__program_target_scalar_common_11[1]));
          MR_hl_field(0, FactFileToTarget_18, 1) = ((MR_Box) (make__program_target__get_foreign_object_targets_8_p_0_1));
          MR_hl_field(0, FactFileToTarget_18, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FactFileToTarget_18, 3) = ((MR_Box) (PIC_10));
          MR_hl_field(0, FactFileToTarget_18, 4) = ((MR_Box) (ModuleName_11));
        }
        parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_17, &FactTableFiles_20);
        Var_34 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_20);
        *ObjectTargets_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), FactFileToTarget_18, Var_34);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ObjectTargets_12 = (MR_Word) ((MR_Unsigned) 0U);
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
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Timestamp_10;
  MR_Word Target_14;
  MR_Word MaybeTimestamp_15;

  {
    Target_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Target_14, 0) = ((MR_Box) (Module_9));
    MR_hl_field(0, Target_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__timestamp__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 0, Target_14, &MaybeTimestamp_15, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  if (((MR_tag((MR_Word) MaybeTimestamp_15)) == (MR_Integer) 1))
    Timestamp_10 = libs__timestamp__oldest_timestamp_0_f_0();
  else
    Timestamp_10 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_15, (MR_Integer) 0))));
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
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  MR_Word SubdirSetting_19;
  MR_Word CleanAfter_20;
  MR_Word OptionArgs0_21;
  MR_Word OptionArgs_22;
  MR_String InstallMsg_23;
  MR_Word MaybeMCFlags_24;
  MR_Word OptionsSpecs_33;
  MR_Word LibGlobals_34;
  MR_Word Var_48;
  MR_Word Var_50;
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
  OptionArgs0_21 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_44);
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Grade_15));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[9])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) ((MR_String) "--grade"));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
  }
  OptionArgs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs0_21, Var_48);
  make__util__verbose_make_two_part_msg_4_p_0(Globals_14, (MR_String) "Installing grade", Grade_15, &InstallMsg_23);
  make__util__maybe_write_msg_3_p_0(InstallMsg_23);
  Var_56 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_0_44);
  make__options_file__lookup_mmc_options_2_p_0(Var_56, &MaybeMCFlags_24);
  if (((MR_tag((MR_Word) MaybeMCFlags_24)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_35 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags_24, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_4_p_0(Globals_14, LookupSpecs_35);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.install_library_grade\'/10", (MR_String) "bad DEFAULT_MCFLAGS");
      return;
    }
  }
  else
  {
    MR_Word MCFlags_25 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags_24, (MR_Integer) 0))));
    MR_Word DefaultOptionTable_26;
    MR_Word DetectedGradeFlags_27;
    MR_Word AllFlags_28;
    MR_Word ProgressStream_30;
    MR_Word Var_57;
    MR_Word Var_31;
    MR_Word Var_32;

    libs__globals__get_default_options_2_p_0(Globals_14, &DefaultOptionTable_26);
    DetectedGradeFlags_27 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_0_44);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_25, OptionArgs_22);
    AllFlags_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_27, Var_57);
    mercury__io__output_stream_3_p_0(&ProgressStream_30);
    libs__handle_options__handle_given_options_9_p_0(ProgressStream_30, DefaultOptionTable_26, AllFlags_28, &Var_31, &Var_32, &OptionsSpecs_33, &LibGlobals_34);
  }
  if ((OptionsSpecs_33 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StatusMap_39;
    MR_Word VeryVerbose_40;
    MR_Box Cookie_41;
    MR_Word Succeeded0_42;
    MR_Word Cleanup_43;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word Var_70;
    MR_Box conv3_STATE_VARIABLE_Info_45;

    StatusMap_39 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__program_target_scalar_common_2[10]));
    make__make_info__make_info_set_dependency_status_3_p_0(StatusMap_39, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_66_66);
    make__make_info__make_info_set_option_args_3_p_0(OptionArgs_22, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_67_67);
    libs__globals__lookup_bool_option_3_p_0(LibGlobals_34, (MR_Integer) 73, &VeryVerbose_40);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_41);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (&make__program_target_scalar_common_10[2]));
      MR_hl_field(0, Var_70, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_2));
      MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(0, Var_70, 3) = ((MR_Box) (LibGlobals_34));
      MR_hl_field(0, Var_70, 4) = ((MR_Box) (LinkSucceeded0_11));
      MR_hl_field(0, Var_70, 5) = ((MR_Box) (ModuleName_12));
      MR_hl_field(0, Var_70, 6) = ((MR_Box) (AllModules_13));
      MR_hl_field(0, Var_70, 7) = ((MR_Box) (STATE_VARIABLE_Info_67_67));
      MR_hl_field(0, Var_70, 8) = ((MR_Box) (CleanAfter_20));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_70, &Succeeded0_42);
    {
      Cleanup_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_43, 0) = ((MR_Box) (&make__program_target_scalar_common_8[7]));
      MR_hl_field(0, Cleanup_43, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_3));
      MR_hl_field(0, Cleanup_43, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Cleanup_43, 3) = ((MR_Box) (LibGlobals_34));
      MR_hl_field(0, Cleanup_43, 4) = ((MR_Box) (CleanAfter_20));
      MR_hl_field(0, Cleanup_43, 5) = ((MR_Box) (ModuleName_12));
      MR_hl_field(0, Cleanup_43, 6) = ((MR_Box) (AllModules_13));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_40, Cookie_41, Cleanup_43, Succeeded0_42, Succeeded_16, ((MR_Box) (STATE_VARIABLE_Info_67_67)), &conv3_STATE_VARIABLE_Info_45);
    *STATE_VARIABLE_Info_45 = ((MR_Word) (conv3_STATE_VARIABLE_Info_45));
  }
  else
  {
    MR_Word ErrorStream_38;

    libs__globals__get_error_output_stream_5_p_0(Globals_14, ModuleName_12, &ErrorStream_38);
    libs__handle_options__usage_errors_5_p_0(ErrorStream_38, Globals_14, OptionsSpecs_33);
    *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
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
  MR_Word conv8_STATE_VARIABLE_Info_15;

  make__program_target__make_module_realclean_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_15);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_15));
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
  MR_Word conv5_STATE_VARIABLE_Info_19;

  make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Info_19);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Info_19));
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
  MR_Word conv1_STATE_VARIABLE_TargetModulesCord_18;
  MR_Word conv0_STATE_VARIABLE_Info_20;

  make__program_target__get_non_nested_target_modules_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetModulesCord_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetModulesCord_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_10_p_0(
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word TargetType_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word RebuildModuleDeps_18;
  MR_Word Succeeded0_19;
  MR_Word AllModulesSet_20;
  MR_Word AllModules_21;
  MR_Word STATE_VARIABLE_Info_36_36;
  MR_Word STATE_VARIABLE_Info_37_37;
  MR_Word STATE_VARIABLE_Info_39_39;

  RebuildModuleDeps_18 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(STATE_VARIABLE_Info_0_29);
  if ((TargetType_13 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if ((TargetType_13 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
    make__make_info__make_info_set_rebuild_module_deps_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_36_36);
  else
    STATE_VARIABLE_Info_36_36 = STATE_VARIABLE_Info_0_29;
  make__dependencies__find_reachable_local_modules_8_p_0(Globals_11, MainModuleName_12, &Succeeded0_19, &AllModulesSet_20, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_37_37);
  make__make_info__make_info_set_rebuild_module_deps_3_p_0(RebuildModuleDeps_18, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_39_39);
  AllModules_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModulesSet_20);
  switch (MR_tag((MR_Word) TargetType_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_40;
            MR_Word STATE_VARIABLE_Info_41_41;
            MR_Word STATE_VARIABLE_Info_18_119;
            MR_Word STATE_VARIABLE_Info_22_123;
            MR_Box conv7_STATE_VARIABLE_Info_41_41;
            MR_Box conv6_STATE_VARIABLE_IO_42_42;

            *Succeeded_14 = (MR_Integer) 1;
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_40, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
              MR_hl_field(0, Var_40, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_10_p_0_2));
              MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_40, 3) = ((MR_Box) (Globals_11));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, AllModules_21, ((MR_Box) (STATE_VARIABLE_Info_39_39)), &conv7_STATE_VARIABLE_Info_41_41, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_42_42);
            STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv7_STATE_VARIABLE_Info_41_41));
            make__util__remove_make_module_file_8_p_0(Globals_11, (MR_Integer) 73, MainModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[49])), STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_18_119);
            make__util__remove_make_module_file_8_p_0(Globals_11, (MR_Integer) 73, MainModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[50])), STATE_VARIABLE_Info_18_119, &STATE_VARIABLE_Info_22_123);
            make__util__remove_make_module_file_8_p_0(Globals_11, (MR_Integer) 73, MainModuleName_12, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[51])), STATE_VARIABLE_Info_22_123, STATE_VARIABLE_Info_30);
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_46_46;
            MR_Word Var_48;
            MR_Box conv10_STATE_VARIABLE_Info_30;
            MR_Box conv9_STATE_VARIABLE_IO_34;

            *Succeeded_14 = (MR_Integer) 1;
            make__program_target__make_main_module_realclean_6_p_0(Globals_11, MainModuleName_12, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_46_46);
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
              MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_10_p_0_3));
              MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_48, 3) = ((MR_Box) (Globals_11));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, AllModules_21, ((MR_Box) (STATE_VARIABLE_Info_46_46)), &conv10_STATE_VARIABLE_Info_30, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_34);
            *STATE_VARIABLE_Info_30 = ((MR_Word) (conv10_STATE_VARIABLE_Info_30));
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
          break;
        case (MR_Integer) 2:
          {
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0(Globals_11, MainModuleName_12, AllModules_21, Succeeded0_19, Globals_11, Succeeded_14, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_30);
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntSucceeded_27;
            MR_Word STATE_VARIABLE_Info_64_64;

            make__program_target__make_all_interface_files_7_p_0(Globals_11, AllModules_21, &IntSucceeded_27, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_64_64);
            switch (IntSucceeded_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_14 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_64_64;
                  *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
                }
                break;
              case (MR_Integer) 1:
                make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0(MainModuleName_12, AllModules_21, Globals_11, Globals_11, Succeeded_14, STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Info_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word LibSucceeded_28;
            MR_Word Var_70;
            MR_Word STATE_VARIABLE_Info_71_71;

            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_70, 0) = ((MR_Box) (MainModuleName_12));
              MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            make__program_target__make_misc_target_9_p_0(Globals_11, Var_70, &LibSucceeded_28, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_71_71, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
            switch (LibSucceeded_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_14 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_71_71;
                }
                break;
              case (MR_Integer) 1:
                make__program_target__install_library_7_p_0(Globals_11, MainModuleName_12, Succeeded_14, STATE_VARIABLE_Info_71_71, STATE_VARIABLE_Info_30);
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word KeepGoing_88;

            KeepGoing_88 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_39_39);
            succeeded = (Succeeded0_19 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (KeepGoing_88 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_14 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_39_39;
            }
            else
            {
              MR_Word Var_81;
              MR_Word Succeeded1_85;

              Var_81 = make__util__make_dependency_list_2_f_0(AllModules_21, (MR_Word) ((MR_Unsigned) 52U));
              make__build__foldl2_make_module_targets_9_p_0(KeepGoing_88, (MR_Word) ((MR_Unsigned) 0U), Globals_11, Var_81, &Succeeded1_85, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_30);
              *Succeeded_14 = libs__maybe_util__and_2_f_0(Succeeded0_19, Succeeded1_85);
            }
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleTargetType_22 = ((MR_Word) ((MR_hl_field(1, TargetType_13, (MR_Integer) 0))));
        MR_Word TargetModules_23;
        MR_Word KeepGoing_24;
        MR_Word STATE_VARIABLE_Info_51_51;

        succeeded = (ModuleTargetType_22 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          MR_Word TargetModulesCord_104;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Box conv4_TargetModulesCord_104;
          MR_Box conv3_STATE_VARIABLE_Info_51_51;
          MR_Box conv2_STATE_VARIABLE_IO_52_52;

          {
            Var_105 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_105, 0) = ((MR_Box) (&make__program_target_scalar_common_8[6]));
            MR_hl_field(0, Var_105, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_10_p_0_1));
            MR_hl_field(0, Var_105, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_105, 3) = ((MR_Box) (Globals_11));
          }
          Var_106 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[4]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_105, AllModules_21, ((MR_Box) (Var_106)), &conv4_TargetModulesCord_104, ((MR_Box) (STATE_VARIABLE_Info_39_39)), &conv3_STATE_VARIABLE_Info_51_51, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_52_52);
          TargetModulesCord_104 = ((MR_Word) (conv4_TargetModulesCord_104));
          STATE_VARIABLE_Info_51_51 = ((MR_Word) (conv3_STATE_VARIABLE_Info_51_51));
          TargetModules_23 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TargetModulesCord_104);
        }
        else
        {
          TargetModules_23 = AllModules_21;
          STATE_VARIABLE_Info_51_51 = STATE_VARIABLE_Info_39_39;
        }
        KeepGoing_24 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_51_51);
        succeeded = (Succeeded0_19 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_24 == (MR_Integer) 0);
        if (succeeded)
        {
          *Succeeded_14 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_51_51;
        }
        else
        {
          MR_Word Succeeded1_25;
          MR_Word STATE_VARIABLE_Info_53_53;

          make__program_target__make_all_interface_files_7_p_0(Globals_11, AllModules_21, &Succeeded1_25, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
          succeeded = (Succeeded1_25 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (KeepGoing_24 == (MR_Integer) 0);
          if (succeeded)
          {
            *Succeeded_14 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_53_53;
          }
          else
          {
            MR_Word Succeeded2_26;
            MR_Word Var_59;
            MR_Word Var_60;

            Var_59 = make__util__make_dependency_list_2_f_0(TargetModules_23, ModuleTargetType_22);
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), Globals_11, Var_59, Globals_11, &Succeeded2_26, STATE_VARIABLE_Info_53_53, STATE_VARIABLE_Info_30);
            Var_60 = libs__maybe_util__and_2_f_0(Succeeded0_19, Succeeded1_25);
            *Succeeded_14 = libs__maybe_util__and_2_f_0(Var_60, Succeeded2_26);
          }
        }
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
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
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
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
                            MR_Word SharedLibsSucceeded_104;

                            {
                              Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_53));
                              MR_hl_field(0, Var_68, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            }
                            make__program_target__make_linked_target_9_p_0(Var_55, Var_68, &SharedLibsSucceeded_104, STATE_VARIABLE_Info_31_64, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_32_65, STATE_VARIABLE_Specs_27);
                            switch (SharedLibsSucceeded_104) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *Succeeded_12 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word ErrorStream_100;

                                  mercury__io__output_stream_3_p_0(&ErrorStream_100);
                                  backend_libs__compile_target_code__make_library_init_file_8_p_0(Var_55, ErrorStream_100, ErrorStream_100, Var_53, Var_54, Succeeded_12);
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
        MR_String RemovingMsg_96;
        MR_Box conv1_STATE_VARIABLE_Info_46_46;
        MR_Word Var_97;

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
                        MR_Word SharedLibsSucceeded_112;

                        {
                          Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_53));
                          MR_hl_field(0, Var_88, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                        }
                        make__program_target__make_linked_target_9_p_0(Var_55, Var_88, &SharedLibsSucceeded_112, STATE_VARIABLE_Info_31_84, &STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Specs_32_85, STATE_VARIABLE_Specs_27);
                        switch (SharedLibsSucceeded_112) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            Succeeded1_22 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ErrorStream_108;

                              mercury__io__output_stream_3_p_0(&ErrorStream_108);
                              backend_libs__compile_target_code__make_library_init_file_8_p_0(Var_55, ErrorStream_108, ErrorStream_108, Var_53, Var_54, &Succeeded1_22);
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
          MR_hl_field(0, Cleanup_23, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
          MR_hl_field(0, Cleanup_23, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0_1));
          MR_hl_field(0, Cleanup_23, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_23, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Cleanup_23, 4) = ((MR_Box) (CacheDir_17));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_20, Cookie_21, Cleanup_23, Succeeded1_22, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_41_41)), &conv1_STATE_VARIABLE_Info_46_46);
        STATE_VARIABLE_Info_46_46 = ((MR_Word) (conv1_STATE_VARIABLE_Info_46_46));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_10, (MR_String) "Removing", CacheDir_17, &RemovingMsg_96);
        make__util__maybe_write_msg_3_p_0(RemovingMsg_96);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_17, &Var_97);
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
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
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
  MR_Word ExtraOptions_18 = ((&make__program_target_vector_common_13[0 + FileType_17]))->make__program_target__vector_common_type_13_0__vct_13_f_0;
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
              MR_hl_field(0, Cleanup_53, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
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
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_String RemovingMsg_11;
  MR_Word Var_12;

  make__util__verbose_make_two_part_msg_4_p_0(Globals_7, (MR_String) "Removing", CacheDir_8, &RemovingMsg_11);
  make__util__maybe_write_msg_3_p_0(RemovingMsg_11);
  mercury__io__file__remove_file_recursively_4_p_0(CacheDir_8, &Var_12);
  *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
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
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
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
        MR_String RemovingMsg_50;
        MR_Box conv1_STATE_VARIABLE_Info_39_39;
        MR_Word Var_51;

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
          MR_hl_field(0, Cleanup_20, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
          MR_hl_field(0, Cleanup_20, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0_1));
          MR_hl_field(0, Cleanup_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_20, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Cleanup_20, 4) = ((MR_Box) (CacheDir_14));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_17, Cookie_18, Cleanup_20, Succeeded1_19, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv1_STATE_VARIABLE_Info_39_39);
        STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv1_STATE_VARIABLE_Info_39_39));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_8, (MR_String) "Removing", CacheDir_14, &RemovingMsg_50);
        make__util__maybe_write_msg_3_p_0(RemovingMsg_50);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_14, &Var_51);
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
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
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
        MR_String RemovingMsg_50;
        MR_Box conv1_STATE_VARIABLE_Info_39_39;
        MR_Word Var_51;

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
          MR_hl_field(0, Cleanup_20, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
          MR_hl_field(0, Cleanup_20, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0_1));
          MR_hl_field(0, Cleanup_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_20, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Cleanup_20, 4) = ((MR_Box) (CacheDir_14));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_17, Cookie_18, Cleanup_20, Succeeded1_19, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv1_STATE_VARIABLE_Info_39_39);
        STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv1_STATE_VARIABLE_Info_39_39));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_8, (MR_String) "Removing", CacheDir_14, &RemovingMsg_50);
        make__util__maybe_write_msg_3_p_0(RemovingMsg_50);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_14, &Var_51);
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

  succeeded = make__program_target__IntroducedFrom__pred__build_analysis_files_1__1251__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

  make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1358__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_26);
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
      MR_Word TargetModules1_26;
      MR_Word TargetModules_27;
      MR_Word Succeeded0_28;
      MR_Word LocalModulesOpts_29;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word STATE_VARIABLE_Info_29_35;
      MR_Word ImpDepsGraph_46;
      MR_Word SccSets_47;
      MR_Word SccLists_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Box conv4__IntDepsGraph_45;
      MR_Box conv3_ImpDepsGraph_46;

      Var_33 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_23_23);
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
        MR_hl_field(0, Var_52, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_1));
        MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_52, 3) = ((MR_Box) (Var_33));
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__program_target_scalar_common_12[1]));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_2));
        MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_49, 3) = ((MR_Box) (Var_52));
      }
      Var_50 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      Var_51 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[5]), (MR_Word) (&make__program_target_scalar_common_1[5]), Var_49, AllModules_12, ((MR_Box) (Var_50)), &conv4__IntDepsGraph_45, ((MR_Box) (Var_51)), &conv3_ImpDepsGraph_46);
      ImpDepsGraph_46 = ((MR_Word) (conv3_ImpDepsGraph_46));
      SccSets_47 = mercury__digraph__return_sccs_in_to_from_order_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_46);
      mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_1[6]), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__program_target_scalar_common_2[9]), SccSets_47, &SccLists_48);
      mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SccLists_48, &TargetModules1_26);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__program_target_scalar_common_3[4]));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_4));
        MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_34, 3) = ((MR_Box) (AllModules_12));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_34, TargetModules1_26, &TargetModules_27);
      make__dependencies__make_local_module_id_options_8_p_0(Globals_10, MainModuleName_11, &Succeeded0_28, &LocalModulesOpts_29, STATE_VARIABLE_Info_23_23, &STATE_VARIABLE_Info_29_35);
      switch (Succeeded0_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_14 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_29_35;
          }
          break;
        case (MR_Integer) 1:
          make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(Globals_10, TargetModules_27, LocalModulesOpts_29, Succeeded0_28, Succeeded_14, STATE_VARIABLE_Info_29_35, STATE_VARIABLE_Info_20);
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
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word KeepGoing_19;
    MR_Word Succeeded1_20;
    MR_Integer ReanalysisPasses_21;
    MR_Word ReanalyseSuboptimal_22;
    MR_Word InvalidModules_23;
    MR_Word SuboptimalModules_24;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Info_31_31;

    // setup for model_det tailcalls optimized into a loop
    ;
    KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_26);
    Var_30 = make__util__make_dependency_list_2_f_0(TargetModules_13, (MR_Word) ((MR_Unsigned) 28U));
    make__build__foldl2_make_module_targets_9_p_0(KeepGoing_19, LocalModulesOpts_14, Globals_11, Var_30, &Succeeded1_20, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_31_31);
    ReanalysisPasses_21 = make__make_info__make_info_get_reanalysis_passes_1_f_0(STATE_VARIABLE_Info_31_31);
    succeeded = (ReanalysisPasses_21 > (MR_Integer) 1);
    if (succeeded)
      ReanalyseSuboptimal_22 = (MR_Integer) 1;
    else
      ReanalyseSuboptimal_22 = (MR_Integer) 0;
    make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_22, Globals_11, TargetModules_13, &InvalidModules_23, &SuboptimalModules_24);
    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidModules_23);
    if (succeeded)
    {
      MR_String ReanalysingMsg_25;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Box conv1_STATE_VARIABLE_Info_38_38;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_26;

      make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_11, &ReanalysingMsg_25);
      make__util__maybe_write_msg_3_p_0(ReanalysingMsg_25);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[7]), InvalidModules_23, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv1_STATE_VARIABLE_Info_38_38);
      STATE_VARIABLE_Info_38_38 = ((MR_Word) (conv1_STATE_VARIABLE_Info_38_38));
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Info_0_26 = STATE_VARIABLE_Info_38_38;
      STATE_VARIABLE_Info_0_26 = next_value_of_STATE_VARIABLE_Info_0_26;
      continue;
    }
    else
    {
      succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SuboptimalModules_24);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_42_42;
        MR_Integer Var_43;
        MR_Word STATE_VARIABLE_Info_44_44;
        MR_String ReanalysingMsg_49;
        MR_Box conv3_STATE_VARIABLE_Info_42_42;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_26;

        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[8]), SuboptimalModules_24, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv3_STATE_VARIABLE_Info_42_42);
        STATE_VARIABLE_Info_42_42 = ((MR_Word) (conv3_STATE_VARIABLE_Info_42_42));
        Var_43 = (MR_Integer) ((MR_Unsigned) ReanalysisPasses_21 - (MR_Unsigned) 1);
        make__make_info__make_info_set_reanalysis_passes_3_p_0(Var_43, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_44_44);
        make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_11, &ReanalysingMsg_49);
        make__util__maybe_write_msg_3_p_0(ReanalysingMsg_49);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Info_0_26 = STATE_VARIABLE_Info_44_44;
        STATE_VARIABLE_Info_0_26 = next_value_of_STATE_VARIABLE_Info_0_26;
        continue;
      }
      else
      {
        *Succeeded_16 = libs__maybe_util__and_2_f_0(Succeeded0_15, Succeeded1_20);
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_31_31;
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

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__program_target_scalar_common_1[7]), ((MR_Box) ((MR_Integer) 0)), Globals_2, Module_15, &ModuleStatus_20);
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
    MR_String CreatingMsg_23;
    MR_Word MakeRes_24;
    MR_Word SubdirSetting_43;
    MR_Word DirComponents_44;

    libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_43);
    switch (SubdirSetting_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        DirComponents_44 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[15]));
        break;
      case (MR_Integer) 2:
        {
          MR_String Grade_45;
          MR_String TargetArch_46;
          MR_Word Var_49;
          MR_Word Var_50;

          libs__compute_grade__grade_directory_component_2_p_0(Globals_6, &Grade_45);
          libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 704, &TargetArch_46);
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (TargetArch_46));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[15])));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (Grade_45));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
          }
          {
            DirComponents_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DirComponents_44, 0) = ((MR_Box) ((MR_String) "Mercury"));
            MR_hl_field(1, DirComponents_44, 1) = ((MR_Box) (Var_49));
          }
        }
        break;
    }
    CacheDir_15 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_44);
    make__util__verbose_make_two_part_msg_4_p_0(Globals_6, (MR_String) "Creating", CacheDir_15, &CreatingMsg_23);
    make__util__maybe_write_msg_3_p_0(CreatingMsg_23);
    mercury__dir__make_directory_4_p_0(CacheDir_15, &MakeRes_24);
    if ((MakeRes_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *UseAnalysisCacheDir_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CacheDir_15));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
      }
    else
    {
      MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, MakeRes_24, (MR_Integer) 0))));
      MR_String Var_34;

      Var_34 = mercury__io__error_message_1_f_0(Error_25);
      mercury__io__write_string_3_p_0((MR_String) "Error: making directory ");
      mercury__io__write_string_3_p_0(CacheDir_15);
      mercury__io__write_string_3_p_0((MR_String) ": ");
      mercury__io__write_string_3_p_0(Var_34);
      mercury__io__write_string_3_p_0((MR_String) "\n");
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
  MR_Word conv3_HeadVar__5_5;

  make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
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
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_String Part1_11;
  MR_String CleaningMsg_12;
  MR_Word FileNames_14;
  MR_Word ThisDirFileNames_15;
  MR_String FullInitFileName_16;
  MR_String ThisDirInitFileName_17;
  MR_Word FilesToRemove_18;
  MR_String Var_26;
  MR_Word Var_43;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_Info_53_53;
  MR_String Var_72;
  MR_Word STATE_VARIABLE_Info_18_75;
  MR_Word STATE_VARIABLE_Info_22_79;
  MR_Box conv2_STATE_VARIABLE_IO_44_44;
  MR_Box conv5_STATE_VARIABLE_Info_53_53;
  MR_Box conv4_STATE_VARIABLE_IO_54_54;

  Var_26 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_8);
  Var_72 = mercury__string__f_43_43_2_f_0(Var_26, (MR_String) "\'.");
  Part1_11 = mercury__string__f_43_43_2_f_0((MR_String) "Removing executable and library files for \140", Var_72);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_7, Part1_11, &CleaningMsg_12);
  make__util__maybe_write_msg_3_p_0(CleaningMsg_12);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&make__program_target_scalar_common_6[5]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_43, 4) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__map2_foldl_6_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[48])), &FileNames_14, &ThisDirFileNames_15, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_44_44);
  parse_tree__file_names__module_name_to_file_name_full_curdir_6_p_0(Globals_7, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/6", (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[25])), ModuleName_8, &FullInitFileName_16, &ThisDirInitFileName_17);
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (ThisDirInitFileName_17));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (FullInitFileName_16));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
  }
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_15, Var_49);
  FilesToRemove_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_14, Var_48);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&make__program_target_scalar_common_6[6]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_2));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) ((MR_Integer) 73));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, FilesToRemove_18, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv5_STATE_VARIABLE_Info_53_53, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_54_54);
  STATE_VARIABLE_Info_53_53 = ((MR_Word) (conv5_STATE_VARIABLE_Info_53_53));
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[49])), STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_18_75);
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[50])), STATE_VARIABLE_Info_18_75, &STATE_VARIABLE_Info_22_79);
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[51])), STATE_VARIABLE_Info_22_79, STATE_VARIABLE_Info_20);
}

static void MR_CALL 
make__program_target__install_library_7_p_0_4(
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
make__program_target__install_library_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_12;
  MR_Word conv4_STATE_VARIABLE_Info_31;

  make__program_target__install_ints_and_headers_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_Succeeded_12, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Info_31);
  *wrapper_arg_2 = ((MR_Box) (conv5_Succeeded_12));
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Info_31));
}

static void MR_CALL 
make__program_target__install_library_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_65;

  make__program_target__IntroducedFrom__pred__make_install_dirs__2014__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_65);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_65));
}

static void MR_CALL 
make__program_target__install_library_7_p_0_1(
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
make__program_target__install_library_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word DepsSucceeded_13;
  MR_Word AllModules0_14;
  MR_Word AllModules_15;
  MR_Word DirSucceeded_16;
  MR_Word LinkSucceeded_17;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_String Prefix_52;
  MR_String LibDir_53;
  MR_Word Result1_54;
  MR_Word Result2_55;
  MR_String IntsSubdir_56;
  MR_Word Result3_57;
  MR_Word Results0_58;
  MR_Word Subdirs_59;
  MR_Word LinkResults_60;
  MR_Word Results_61;
  MR_String Var_64;
  MR_String Var_67;
  MR_String Var_70;
  MR_String Var_73;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Box conv1_STATE_VARIABLE_IO_61_81;

  make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, MainModuleName_9, &DepsSucceeded_13, &AllModules0_14, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
  AllModules_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules0_14);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 670, &Prefix_52);
  Var_64 = mercury__dir__f_slash_2_f_0(Prefix_52, (MR_String) "lib");
  LibDir_53 = mercury__dir__f_slash_2_f_0(Var_64, (MR_String) "mercury");
  Var_67 = mercury__dir__f_slash_2_f_0(LibDir_53, (MR_String) "inc");
  mercury__dir__make_directory_4_p_0(Var_67, &Result1_54);
  Var_70 = mercury__dir__f_slash_2_f_0(LibDir_53, (MR_String) "modules");
  mercury__dir__make_directory_4_p_0(Var_70, &Result2_55);
  Var_73 = mercury__dir__f_slash_2_f_0(LibDir_53, (MR_String) "ints");
  IntsSubdir_56 = mercury__dir__f_slash_2_f_0(Var_73, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(IntsSubdir_56, &Result3_57);
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Result3_57));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Result2_55));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
  }
  {
    Results0_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Results0_58, 0) = ((MR_Box) (Result1_54));
    MR_hl_field(1, Results0_58, 1) = ((MR_Box) (Var_77));
  }
  Subdirs_59 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[38]));
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_1));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (Globals_8));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (IntsSubdir_56));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_80, Subdirs_59, &LinkResults_60, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_61_81);
  LinkSucceeded_17 = libs__maybe_util__and_list_1_f_0(LinkResults_60);
  switch (LinkSucceeded_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MkDirResults_62;
        MR_Word Var_82;
        MR_Box conv3_STATE_VARIABLE_IO_63_83;

        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_82, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
          MR_hl_field(0, Var_82, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_2));
          MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_82, 3) = ((MR_Box) (IntsSubdir_56));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Subdirs_59, &MkDirResults_62, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_63_83);
        Results_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), Results0_58, MkDirResults_62);
      }
      break;
    case (MR_Integer) 1:
      Results_61 = Results0_58;
      break;
  }
  make__program_target__print_mkdir_errors_4_p_0(Results_61, &DirSucceeded_16);
  succeeded = (DepsSucceeded_13 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DirSucceeded_16 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word IntsSucceeded_18;
    MR_Word ExtraHdrsSucceeded_19;
    MR_String Grade_20;
    MR_Word GradeSucceeded_21;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word ExtraHdrs_88;
    MR_String Prefix_89;
    MR_String IncDir_90;
    MR_String Var_93;
    MR_String Var_94;
    MR_Word Var_98;
    MR_Box conv7_STATE_VARIABLE_Info_33_33;
    MR_Box conv6_STATE_VARIABLE_IO_34_34;
    MR_Box conv10_ExtraHdrsSucceeded_19;
    MR_Box conv9_STATE_VARIABLE_IO_35_35;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_8[5]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_3));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(0, Var_32, 4) = ((MR_Box) (LinkSucceeded_17));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, AllModules_15, &IntsSucceeded_18, ((MR_Box) (STATE_VARIABLE_Info_29_29)), &conv7_STATE_VARIABLE_Info_33_33, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_34_34);
    STATE_VARIABLE_Info_33_33 = ((MR_Word) (conv7_STATE_VARIABLE_Info_33_33));
    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 693, &ExtraHdrs_88);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 670, &Prefix_89);
    Var_94 = mercury__dir__f_slash_2_f_0(Prefix_89, (MR_String) "lib");
    Var_93 = mercury__dir__f_slash_2_f_0(Var_94, (MR_String) "mercury");
    IncDir_90 = mercury__dir__f_slash_2_f_0(Var_93, (MR_String) "inc");
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_98, 0) = ((MR_Box) (&make__program_target_scalar_common_6[4]));
      MR_hl_field(0, Var_98, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_4));
      MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_98, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(0, Var_98, 4) = ((MR_Box) (IncDir_90));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, ExtraHdrs_88, ((MR_Box) ((MR_Integer) 1)), &conv10_ExtraHdrsSucceeded_19, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_35_35);
    ExtraHdrsSucceeded_19 = ((MR_Word) (conv10_ExtraHdrsSucceeded_19));
    libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &Grade_20);
    make__program_target__install_library_grade_files_10_p_0(Globals_8, LinkSucceeded_17, Grade_20, MainModuleName_9, AllModules_15, &GradeSucceeded_21, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_36_36);
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (ExtraHdrsSucceeded_19));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (IntsSucceeded_18));
    }
    Var_38 = libs__maybe_util__and_list_1_f_0(Var_39);
    succeeded = (Var_38 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (GradeSucceeded_21 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word KeepGoing_22;
      MR_Word LibGrades0_23;
      MR_Word LibGrades_24;

      KeepGoing_22 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_36_36);
      libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 677, &LibGrades0_23);
      LibGrades_24 = mercury__list__delete_all_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibGrades0_23, ((MR_Box) (Grade_20)));
      make__build__foldl2_install_library_grades_11_p_0(KeepGoing_22, LinkSucceeded_17, MainModuleName_9, AllModules_15, Globals_8, LibGrades_24, Succeeded_10, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_26);
    }
    else
    {
      *Succeeded_10 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_36_36;
    }
  }
  else
  {
    *Succeeded_10 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_29_29;
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
  MR_Word conv1_Succeeded_14;
  MR_Word conv0_STATE_VARIABLE_Info_34;

  make__program_target__install_grade_ints_and_headers_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Succeeded_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_34);
  *wrapper_arg_2 = ((MR_Box) (conv1_Succeeded_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_34));
}

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkSucceeded0_12,
  MR_String GradeDir_13,
  MR_Word ModuleName_14,
  MR_Word AllModules_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_bool succeeded;
  MR_Word DirResult_19;
  MR_Word LinkSucceeded1_20;
  MR_Word LinkSucceeded_21;

  make__program_target__make_grade_install_dirs_6_p_0(Globals_11, GradeDir_13, &DirResult_19, &LinkSucceeded1_20);
  LinkSucceeded_21 = libs__maybe_util__and_2_f_0(LinkSucceeded0_12, LinkSucceeded1_20);
  switch (DirResult_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_16 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LibFileName_22;
        MR_String SharedLibFileName_23;
        MR_String DllFileName_24;
        MR_String JarFileName_25;
        MR_String Prefix_26;
        MR_Word LibsSucceeded_28;
        MR_Word InitSucceeded_29;
        MR_Word IntsHeadersSucceeded_32;
        MR_Word Var_74;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Box conv3_STATE_VARIABLE_Info_34;
        MR_Box conv2_STATE_VARIABLE_IO_36;

        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 1, &LibFileName_22);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 2, &SharedLibFileName_23);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 4, &DllFileName_24);
        backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 6, &JarFileName_25);
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 670, &Prefix_26);
        succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "csharp");
        if (succeeded)
        {
          MR_String GradeLibDir_27;
          MR_String Var_48;
          MR_String Var_49;
          MR_String Var_50;
          MR_Word ErrorStream_93;
          MR_String InstallMsg_94;
          MR_String Command_95;

          Var_50 = mercury__dir__f_slash_2_f_0(Prefix_26, (MR_String) "lib");
          Var_49 = mercury__dir__f_slash_2_f_0(Var_50, (MR_String) "mercury");
          Var_48 = mercury__dir__f_slash_2_f_0(Var_49, (MR_String) "lib");
          GradeLibDir_27 = mercury__dir__f_slash_2_f_0(Var_48, GradeDir_13);
          mercury__io__output_stream_3_p_0(&ErrorStream_93);
          make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", DllFileName_24, (MR_String) "in", GradeLibDir_27, &InstallMsg_94);
          make__util__maybe_write_msg_4_p_0(ErrorStream_93, InstallMsg_94);
          Command_95 = libs__file_util__make_install_file_command_3_f_0(Globals_11, DllFileName_24, GradeLibDir_27);
          parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ErrorStream_93, ErrorStream_93, ErrorStream_93, (MR_Integer) 0, Command_95, &LibsSucceeded_28);
          InitSucceeded_29 = (MR_Integer) 1;
        }
        else
        {
          succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "java");
          if (succeeded)
          {
            MR_String Var_56;
            MR_String Var_57;
            MR_String Var_58;
            MR_String GradeLibDir_79;
            MR_Word ErrorStream_103;
            MR_String InstallMsg_104;
            MR_String Command_105;

            Var_58 = mercury__dir__f_slash_2_f_0(Prefix_26, (MR_String) "lib");
            Var_57 = mercury__dir__f_slash_2_f_0(Var_58, (MR_String) "mercury");
            Var_56 = mercury__dir__f_slash_2_f_0(Var_57, (MR_String) "lib");
            GradeLibDir_79 = mercury__dir__f_slash_2_f_0(Var_56, GradeDir_13);
            mercury__io__output_stream_3_p_0(&ErrorStream_103);
            make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", JarFileName_25, (MR_String) "in", GradeLibDir_79, &InstallMsg_104);
            make__util__maybe_write_msg_4_p_0(ErrorStream_103, InstallMsg_104);
            Command_105 = libs__file_util__make_install_file_command_3_f_0(Globals_11, JarFileName_25, GradeLibDir_79);
            parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ErrorStream_103, ErrorStream_103, ErrorStream_103, (MR_Integer) 0, Command_105, &LibsSucceeded_28);
            InitSucceeded_29 = (MR_Integer) 1;
          }
          else
          {
            MR_Word LibSucceeded0_30;
            MR_String Var_63;
            MR_String Var_64;
            MR_String Var_65;
            MR_String GradeLibDir_80;

            Var_65 = mercury__dir__f_slash_2_f_0(Prefix_26, (MR_String) "lib");
            Var_64 = mercury__dir__f_slash_2_f_0(Var_65, (MR_String) "mercury");
            Var_63 = mercury__dir__f_slash_2_f_0(Var_64, (MR_String) "lib");
            GradeLibDir_80 = mercury__dir__f_slash_2_f_0(Var_63, GradeDir_13);
            make__program_target__maybe_install_library_file_7_p_0(Globals_11, (MR_String) "static", LibFileName_22, GradeLibDir_80, &LibSucceeded0_30);
            succeeded = (strcmp(LibFileName_22, SharedLibFileName_23) == 0);
            if (succeeded)
              LibsSucceeded_28 = LibSucceeded0_30;
            else
            {
              MR_Word SharedLibSucceeded_31;

              make__program_target__maybe_install_library_file_7_p_0(Globals_11, (MR_String) "shared", SharedLibFileName_23, GradeLibDir_80, &SharedLibSucceeded_31);
              LibsSucceeded_28 = libs__maybe_util__and_2_f_0(LibSucceeded0_30, SharedLibSucceeded_31);
            }
            make__program_target__install_grade_init_6_p_0(Globals_11, GradeDir_13, ModuleName_14, &InitSucceeded_29);
          }
        }
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (&make__program_target_scalar_common_10[1]));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) (make__program_target__install_library_grade_files_10_p_0_1));
          MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_74, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_74, 4) = ((MR_Box) (LinkSucceeded_21));
          MR_hl_field(0, Var_74, 5) = ((MR_Box) (GradeDir_13));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, AllModules_15, &IntsHeadersSucceeded_32, ((MR_Box) (STATE_VARIABLE_Info_0_33)), &conv3_STATE_VARIABLE_Info_34, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_36);
        *STATE_VARIABLE_Info_34 = ((MR_Word) (conv3_STATE_VARIABLE_Info_34));
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (InitSucceeded_29));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (IntsHeadersSucceeded_32));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (LibsSucceeded_28));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
        }
        *Succeeded_16 = libs__maybe_util__and_list_1_f_0(Var_77);
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
  MR_String Var_87;
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
  Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "mih", (MR_String) "s");
  LinkName_86 = mercury__dir__f_slash_2_f_0(GradeIncSubdir_16, Var_87);
  parse_tree__module_cmds__maybe_make_symlink_6_p_0(Globals_7, (MR_String) "..", LinkName_86, &LinkResult0_21);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__program_target__make_grade_install_dirs_6_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (GradeIntsSubdir_14));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[41])), &LinkResults_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_56_56);
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
        Var_73 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_14, (MR_String) "analysiss");
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
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_7, (MR_String) "predicate \140make.program_target.install_grade_init\'/6", (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[25])), ModuleName_9, &InitFileName_14);
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
  MR_Word conv4_STATE_VARIABLE_Info_16;

  make__program_target__linked_target_cleanup_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Info_16);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Info_16));
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
  MR_Word conv1_ObjectTargets_12;
  MR_Word conv0_STATE_VARIABLE_Info_23;

  make__program_target__get_foreign_object_targets_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_ObjectTargets_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_ObjectTargets_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_23));
}

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0(
  MR_Word Globals_8,
  MR_Word LinkedTargetFile_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  MR_bool succeeded;
  MR_Word MainModuleName_13 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_9, (MR_Integer) 0))));
  MR_Word FileType_14 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_9, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word DepsSucceeded_15;
  MR_Word AllModules_16;
  MR_Word KeepGoing_17;
  MR_Word STATE_VARIABLE_Info_49_49;

  make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, MainModuleName_13, &DepsSucceeded_15, &AllModules_16, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_49_49);
  KeepGoing_17 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_49_49);
  succeeded = (DepsSucceeded_15 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_17 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_10 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_49_49;
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
    MR_Word ForeignObjTargetsList_28;
    MR_Word ForeignObjTargets_29;
    MR_Word IntsSucceeded_30;
    MR_Word BuildDepsSucceeded_31;
    MR_String OutputFileName_36;
    MR_Word MaybeTimestamp_37;
    MR_Word BuildDepsResult_38;
    MR_Word STATE_VARIABLE_Info_51_51;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word STATE_VARIABLE_Info_75_75;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_Info_79_79;
    MR_String Var_81;
    MR_Word STATE_VARIABLE_Info_83_83;
    MR_Box conv3_STATE_VARIABLE_Info_56_56;
    MR_Box conv2_STATE_VARIABLE_IO_57_57;

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
    make__program_target__order_target_modules_7_p_0(Globals_8, ObjModulesAlpha_23, &ObjModules_24, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_51_51);
    make__dependencies__remove_nested_modules_7_p_0(Globals_8, ObjModules_24, &ObjModulesNonnested_25, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
    IntermediateTargetsNonnested_26 = make__util__make_dependency_list_2_f_0(ObjModulesNonnested_25, IntermediateTargetType_20);
    ObjTargets_27 = make__util__make_dependency_list_2_f_0(ObjModules_24, ObjectTargetType_21);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_1));
      MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_55, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(0, Var_55, 4) = ((MR_Box) (PIC_18));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, ObjModules_24, &ForeignObjTargetsList_28, ((MR_Box) (STATE_VARIABLE_Info_53_53)), &conv3_STATE_VARIABLE_Info_56_56, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_57_57);
    STATE_VARIABLE_Info_56_56 = ((MR_Word) (conv3_STATE_VARIABLE_Info_56_56));
    ForeignObjTargets_29 = mercury__list__condense_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), ForeignObjTargetsList_28);
    make__program_target__make_all_interface_files_7_p_0(Globals_8, ObjModulesAlpha_23, &IntsSucceeded_30, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
    succeeded = (IntsSucceeded_30 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_17 == (MR_Integer) 0);
    if (succeeded)
    {
      BuildDepsSucceeded_31 = (MR_Integer) 0;
      STATE_VARIABLE_Info_75_75 = STATE_VARIABLE_Info_58_58;
    }
    else
    {
      MR_Word BuildDepsSucceeded0_32;
      MR_Word BuildDepsSucceeded1_35;
      MR_Word STATE_VARIABLE_Info_61_61;
      MR_Word STATE_VARIABLE_Info_69_69;

      make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, IntermediateTargetsNonnested_26, &BuildDepsSucceeded0_32, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_61_61);
      switch (BuildDepsSucceeded0_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded1_35 = (MR_Integer) 0;
            STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_61_61;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = (ObjectTargetType_21 == (MR_Word) ((MR_Unsigned) 48U));
            if (succeeded)
            {
              MR_Word BuildJavaSucceeded_33;
              MR_Word STATE_VARIABLE_Info_63_63;

              make__program_target__make_java_files_8_p_0(Globals_8, MainModuleName_13, ObjModules_24, &BuildJavaSucceeded_33, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_63_63);
              switch (BuildJavaSucceeded_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    BuildDepsSucceeded1_35 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_63_63;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NoRebuildGlobals_34;

                    libs__globals__set_option_4_p_0((MR_Integer) 664, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_5[0])), Globals_8, &NoRebuildGlobals_34);
                    make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), NoRebuildGlobals_34, ObjTargets_27, &BuildDepsSucceeded1_35, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_69_69);
                  }
                  break;
              }
            }
            else
              make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, ObjTargets_27, &BuildDepsSucceeded1_35, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_69_69);
          }
          break;
      }
      switch (BuildDepsSucceeded1_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded_31 = (MR_Integer) 0;
            STATE_VARIABLE_Info_75_75 = STATE_VARIABLE_Info_69_69;
          }
          break;
        case (MR_Integer) 1:
          make__build__foldl2_make_module_targets_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, ForeignObjTargets_29, &BuildDepsSucceeded_31, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_75_75);
          break;
      }
    }
    backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_8, MainModuleName_13, FileType_14, &OutputFileName_36);
    Var_81 = mercury__dir__this_directory_0_f_0();
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_81));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__timestamp__get_file_timestamp_7_p_0(Var_78, OutputFileName_36, &MaybeTimestamp_37, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_79_79);
    make__dependencies__check_dependencies_10_p_0(Globals_8, OutputFileName_36, MaybeTimestamp_37, BuildDepsSucceeded_31, ObjTargets_27, &BuildDepsResult_38, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_83_83);
    succeeded = (DepsSucceeded_15 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (BuildDepsResult_38 != (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word VeryVerbose_39;
      MR_Box Cookie_40;
      MR_Word RedirectResult_41;
      MR_Word Succeeded0_42;
      MR_Word Cleanup_44;
      MR_Word STATE_VARIABLE_Info_87_87;
      MR_Word STATE_VARIABLE_Info_91_91;
      MR_Box conv5_STATE_VARIABLE_Info_46;

      libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &VeryVerbose_39);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_40);
      make__build__prepare_to_redirect_output_6_p_0(MainModuleName_13, &RedirectResult_41, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_87_87);
      if ((RedirectResult_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_42 = (MR_Integer) 0;
        STATE_VARIABLE_Info_91_91 = STATE_VARIABLE_Info_87_87;
      }
      else
      {
        MR_Word ErrorStream_43 = ((MR_Word) ((MR_hl_field(1, RedirectResult_41, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Info_89_89;

        make__program_target__build_linked_target_17_p_0(MainModuleName_13, FileType_14, OutputFileName_36, MaybeTimestamp_37, AllModules_16, ObjModules_24, CompilationTarget_19, PIC_18, DepsSucceeded_15, BuildDepsResult_38, Globals_8, ErrorStream_43, &Succeeded0_42, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_89_89);
        make__build__unredirect_output_7_p_0(Globals_8, MainModuleName_13, ErrorStream_43, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_91_91);
      }
      {
        Cleanup_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Cleanup_44, 0) = ((MR_Box) (&make__program_target_scalar_common_8[4]));
        MR_hl_field(0, Cleanup_44, 1) = ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_2));
        MR_hl_field(0, Cleanup_44, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Cleanup_44, 3) = ((MR_Box) (Globals_8));
        MR_hl_field(0, Cleanup_44, 4) = ((MR_Box) (MainModuleName_13));
        MR_hl_field(0, Cleanup_44, 5) = ((MR_Box) (FileType_14));
        MR_hl_field(0, Cleanup_44, 6) = ((MR_Box) (OutputFileName_36));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_39, Cookie_40, Cleanup_44, Succeeded0_42, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_91_91)), &conv5_STATE_VARIABLE_Info_46);
      *STATE_VARIABLE_Info_46 = ((MR_Word) (conv5_STATE_VARIABLE_Info_46));
    }
    else
    {
      *Succeeded_10 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_83_83;
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
  MR_Word conv1_STATE_VARIABLE_ParentModules_18;
  MR_Word conv0_STATE_VARIABLE_Info_20;

  make__program_target__collect_modules_with_children_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ParentModules_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ParentModules_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
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
  mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, NonnestedModules_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ParentModules_14, ((MR_Box) (STATE_VARIABLE_Info_28_28)), &conv3_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33_33);
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
    MR_Word JavaFiles_40;
    MR_Word RedirectResult_41;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_Info_30_49;
    MR_Box conv1_STATE_VARIABLE_IO_26_46;
    MR_Box conv5_Timestamps_19;

    make__util__verbose_make_one_part_msg_3_p_0(Globals_9, (MR_String) "Making Java class files", &MakingMsg_39);
    make__util__maybe_write_msg_3_p_0(MakingMsg_39);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__program_target__make_java_files_8_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_java_files\'/8"));
      MR_hl_field(0, Var_45, 5) = ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[13])));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, OutOfDateModules_15, &JavaFiles_40, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_46);
    make__build__prepare_to_redirect_output_6_p_0(MainModuleName_10, &RedirectResult_41, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_30_49);
    if ((RedirectResult_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_12 = (MR_Integer) 0;
      STATE_VARIABLE_Info_26_26 = STATE_VARIABLE_Info_30_49;
    }
    else
    {
      MR_Word ErrorStream_42 = ((MR_Word) ((MR_hl_field(1, RedirectResult_41, (MR_Integer) 0))));
      MR_String HeadJavaFile_56;
      MR_Word TailJavaFiles_57;
      MR_Word ProgressStream_58;
      MR_Word Var_60;
      MR_Box conv2_HeadJavaFile_56;

      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), JavaFiles_40, &conv2_HeadJavaFile_56, &TailJavaFiles_57);
      HeadJavaFile_56 = ((MR_String) (conv2_HeadJavaFile_56));
      mercury__io__output_stream_3_p_0(&ProgressStream_58);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (make__program_target__make_java_files_8_p_0_2));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(0, Var_60, 4) = ((MR_Box) (ProgressStream_58));
        MR_hl_field(0, Var_60, 5) = ((MR_Box) (ErrorStream_42));
        MR_hl_field(0, Var_60, 6) = ((MR_Box) (HeadJavaFile_56));
        MR_hl_field(0, Var_60, 7) = ((MR_Box) (TailJavaFiles_57));
      }
      libs__process_util__call_in_forked_process_4_p_0(Var_60, Succeeded_12);
      make__build__unredirect_output_7_p_0(Globals_9, MainModuleName_10, ErrorStream_42, STATE_VARIABLE_Info_30_49, &STATE_VARIABLE_Info_26_26);
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
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;

  if ((ObjModules_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *OutOfDateModules_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
  else
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(1, ObjModules_9, (MR_Integer) 0))));
    MR_Word ModuleNames_14 = ((MR_Word) ((MR_hl_field(1, ObjModules_9, (MR_Integer) 1))));
    MR_Word OutOfDateModules0_15;
    MR_Word JavaTarget_16;
    MR_Word ClassTarget_17;
    MR_Word MaybeJavaTimestamp_18;
    MR_Word MaybeClassTimestamp_19;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word JavaTimestamp_20;
    MR_Word ClassTimestamp_21;
    MR_Word Var_35;

    make__program_target__out_of_date_java_modules_7_p_0(Globals_8, ModuleNames_14, &OutOfDateModules0_15, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
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
    make__timestamp__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 0, JavaTarget_16, &MaybeJavaTimestamp_18, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_31_31);
    make__timestamp__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 0, ClassTarget_17, &MaybeClassTimestamp_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_23);
    succeeded = ((MR_tag((MR_Word) MaybeJavaTimestamp_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      JavaTimestamp_20 = ((MR_Word) ((MR_hl_field(0, MaybeJavaTimestamp_18, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeClassTimestamp_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        ClassTimestamp_21 = ((MR_Word) ((MR_hl_field(0, MaybeClassTimestamp_19, (MR_Integer) 0))));
        libs__timestamp____Compare____timestamp_0_0(&Var_35, ClassTimestamp_21, JavaTimestamp_20);
        succeeded = (Var_35 != (MR_Integer) 1);
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
make__program_target__build_linked_target_17_p_0(
  MR_Word MainModuleName_18,
  MR_Word FileType_19,
  MR_String OutputFileName_20,
  MR_Word MaybeTimestamp_21,
  MR_Word AllModules_22,
  MR_Word ObjModules_23,
  MR_Word CompilationTarget_24,
  MR_Word PIC_25,
  MR_Word DepsSucceeded_26,
  MR_Word BuildDepsResult_27,
  MR_Word Globals_28,
  MR_Word ErrorStream_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40)
{
  MR_Word MaybePreLinkCommand_33;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_28, (MR_Integer) 669, &MaybePreLinkCommand_33);
  if ((MaybePreLinkCommand_33 == (MR_Word) ((MR_Unsigned) 0U)))
    make__program_target__build_linked_target_2_17_p_0(Globals_28, MainModuleName_18, FileType_19, OutputFileName_20, MaybeTimestamp_21, AllModules_22, ObjModules_23, CompilationTarget_24, PIC_25, DepsSucceeded_26, BuildDepsResult_27, ErrorStream_29, Succeeded_30, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
  else
  {
    MR_String PreLinkCommand_34 = ((MR_String) ((MR_hl_field(1, MaybePreLinkCommand_33, (MR_Integer) 0))));
    MR_String CommandString_35;
    MR_Word ProgressStream_37;
    MR_Word Var_44;
    MR_Word PreLinkSucceeded_50;

    Var_44 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_22);
    backend_libs__compile_target_code__make_all_module_command_6_p_0(PreLinkCommand_34, MainModuleName_18, Var_44, &CommandString_35);
    mercury__io__output_stream_3_p_0(&ProgressStream_37);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_28, ProgressStream_37, ErrorStream_29, ProgressStream_37, (MR_Integer) 0, CommandString_35, &PreLinkSucceeded_50);
    switch (PreLinkSucceeded_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_30 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
        }
        break;
      case (MR_Integer) 1:
        make__program_target__build_linked_target_2_17_p_0(Globals_28, MainModuleName_18, FileType_19, OutputFileName_20, MaybeTimestamp_21, AllModules_22, ObjModules_23, CompilationTarget_24, PIC_25, DepsSucceeded_26, BuildDepsResult_27, ErrorStream_29, Succeeded_30, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
        break;
    }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_10(
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
make__program_target__build_linked_target_2_17_p_0_9(
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
make__program_target__build_linked_target_2_17_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_ForeignObjectFiles_12;
  MR_Word conv10_STATE_VARIABLE_MakeInfo_22;

  make__program_target__get_module_foreign_object_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv11_ForeignObjectFiles_12, ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_MakeInfo_22);
  *wrapper_arg_2 = ((MR_Box) (conv11_ForeignObjectFiles_12));
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_MakeInfo_22));
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_7(
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

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_96;

  conv2_LambdaHeadVar__2_96 = make__program_target__IntroducedFrom__func__build_linked_target_2__535__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_96));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__5_5;

  make__dependencies__get_dependency_status_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_3(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_2_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_2_17_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_5(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_2_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_2_17_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuple_132 = ((MR_Tuple) ((env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__conv5_ExtraObjTuple_132));
  make__program_target__build_linked_target_2_17_p_0_4(env_ptr);
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_2_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_2_17_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuple_132, (MR_Integer) 0))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuple_132, (MR_Integer) 1))));

    (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__Var_97 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuple_132, (MR_Integer) 2))));
    (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__succeeded = ((env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__Var_97 == (MR_Integer) 3);
    if ((env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__succeeded)
      make__program_target__build_linked_target_2_17_p_0_3(env_ptr);
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_2_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_2_17_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__program_target_scalar_common_3[0]), &(env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__conv5_ExtraObjTuple_132, (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuples_48, make__program_target__build_linked_target_2_17_p_0_5, env_ptr);
      (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__program_target__build_linked_target_2_17_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0(
  MR_Word Globals_18,
  MR_Word MainModuleName_19,
  MR_Word FileType_20,
  MR_String OutputFileName_21,
  MR_Word MaybeTimestamp_22,
  MR_Word AllModules_23,
  MR_Word ObjModules_24,
  MR_Word CompilationTarget_25,
  MR_Word PIC_26,
  MR_Word DepsSucceeded_27,
  MR_Word BuildDepsResult_28,
  MR_Word ErrorStream_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_78,
  MR_Word * STATE_VARIABLE_Info_79)
{
  struct make__program_target__build_linked_target_2_17_p_0_env_0_s env;

  {
    MR_Word LinkObjects_33;
    MR_Word NoLinkObjsGlobals_34;
    MR_Word ProgressStream_36;
    MR_Word AllModulesList_37;
    MR_Word InitObjects_44;
    MR_Word DepsResult2_45;
    MR_Word ObjectsToCheck_46;
    MR_Word DepsResult3_52;
    MR_Word BuildDepsSucceeded_53;
    MR_Word ExtraObjectTimestamps_54;
    MR_Word ExtraObjectDepsResult_55;
    MR_Word STATE_VARIABLE_Info_88_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word STATE_VARIABLE_Info_92_92;
    MR_Word Var_98;
    MR_Word STATE_VARIABLE_Info_99_99;
    MR_Word Var_101;
    MR_String Var_102;
    MR_Box conv4_STATE_VARIABLE_Info_92_92;
    MR_Box conv3_STATE_VARIABLE_IO_93_93;
    MR_Box conv9_STATE_VARIABLE_Info_99_99;
    MR_Box conv8_STATE_VARIABLE_IO_100_100;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_18, (MR_Integer) 584, &LinkObjects_33);
    libs__globals__set_option_4_p_0((MR_Integer) 584, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[10])), Globals_18, &NoLinkObjsGlobals_34);
    mercury__io__output_stream_3_p_0(&ProgressStream_36);
    AllModulesList_37 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_23);
    switch (FileType_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          DepsResult2_45 = BuildDepsResult_28;
          InitObjects_44 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_88_88 = STATE_VARIABLE_Info_0_78;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word InitObjectResult1_40;

          backend_libs__compile_target_code__make_init_obj_file_8_p_0(NoLinkObjsGlobals_34, ProgressStream_36, ErrorStream_29, MainModuleName_19, AllModulesList_37, &InitObjectResult1_40);
          if ((InitObjectResult1_40 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            DepsResult2_45 = (MR_Integer) 2;
            InitObjects_44 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_88_88 = STATE_VARIABLE_Info_0_78;
          }
          else
          {
            MR_String InitObject_41 = ((MR_String) ((MR_hl_field(1, InitObjectResult1_40, (MR_Integer) 0))));
            MR_Word FileTimestamps0_42;
            MR_Word FileTimestamps1_43;

            FileTimestamps0_42 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_78);
            mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (InitObject_41)), FileTimestamps0_42, &FileTimestamps1_43);
            make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps1_43, STATE_VARIABLE_Info_0_78, &STATE_VARIABLE_Info_88_88);
            {
              InitObjects_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InitObjects_44, 0) = ((MR_Box) (InitObject_41));
              MR_hl_field(1, InitObjects_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            DepsResult2_45 = BuildDepsResult_28;
          }
        }
        break;
    }
    ObjectsToCheck_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_44, LinkObjects_33);
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_90, 0) = ((MR_Box) (&make__program_target_scalar_common_6[1]));
      MR_hl_field(0, Var_90, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_1));
      MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_90, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
    }
    Var_91 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__program_target_scalar_common_2[5]), ObjectsToCheck_46);
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__program_target_scalar_common_3[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, Var_91, &(env).make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuples_48, ((MR_Box) (STATE_VARIABLE_Info_88_88)), &conv4_STATE_VARIABLE_Info_92_92, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_93_93);
    STATE_VARIABLE_Info_92_92 = ((MR_Word) (conv4_STATE_VARIABLE_Info_92_92));
    make__program_target__build_linked_target_2_17_p_0_6(&env);
    if ((env).make__program_target__build_linked_target_2_17_p_0_env_0__succeeded)
      DepsResult3_52 = (MR_Integer) 2;
    else
      DepsResult3_52 = DepsResult2_45;
    (env).make__program_target__build_linked_target_2_17_p_0_env_0__succeeded = (DepsResult3_52 == (MR_Integer) 2);
    if ((env).make__program_target__build_linked_target_2_17_p_0_env_0__succeeded)
      BuildDepsSucceeded_53 = (MR_Integer) 0;
    else
      BuildDepsSucceeded_53 = (MR_Integer) 1;
    Var_102 = mercury__dir__this_directory_0_f_0();
    {
      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_98, 0) = ((MR_Box) (&make__program_target_scalar_common_6[2]));
      MR_hl_field(0, Var_98, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_7));
      MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_98, 3) = ((MR_Box) (Var_101));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, ObjectsToCheck_46, &ExtraObjectTimestamps_54, ((MR_Box) (STATE_VARIABLE_Info_92_92)), &conv9_STATE_VARIABLE_Info_99_99, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_100_100);
    STATE_VARIABLE_Info_99_99 = ((MR_Word) (conv9_STATE_VARIABLE_Info_99_99));
    make__dependencies__check_dependency_timestamps_9_p_0(NoLinkObjsGlobals_34, OutputFileName_21, MaybeTimestamp_22, BuildDepsSucceeded_53, (env).make__program_target__build_linked_target_2_17_p_0_env_0__ExtraObjTuples_48, ExtraObjectTimestamps_54, &ExtraObjectDepsResult_55);
    switch (DepsSucceeded_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ErrorMsg_58;

          make__util__file_error_msg_2_p_0(OutputFileName_21, &ErrorMsg_58);
          make__util__maybe_write_msg_locked_4_p_0(STATE_VARIABLE_Info_99_99, ErrorMsg_58);
          *Succeeded_30 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_79 = STATE_VARIABLE_Info_99_99;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DepsResult_176;

          switch (DepsResult3_52) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              DepsResult_176 = DepsResult3_52;
              break;
            case (MR_Integer) 1:
              DepsResult_176 = DepsResult3_52;
              break;
            case (MR_Integer) 0:
              DepsResult_176 = ExtraObjectDepsResult_55;
              break;
          }
          switch (DepsResult_176) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_String ErrorMsg_174;

                make__util__file_error_msg_2_p_0(OutputFileName_21, &ErrorMsg_174);
                make__util__maybe_write_msg_locked_4_p_0(STATE_VARIABLE_Info_99_99, ErrorMsg_174);
                *Succeeded_30 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_79 = STATE_VARIABLE_Info_99_99;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String MakingMsg_66;
                MR_Word ForeignObjectFileLists_67;
                MR_Word ForeignObjects_68;
                MR_Word Ext_71;
                MR_Word ObjList_72;
                MR_Word AllObjects_73;
                MR_Word CmdLineTargets0_74;
                MR_Word CmdLineTargets_75;
                MR_Word Var_115;
                MR_Word STATE_VARIABLE_Info_116_116;
                MR_Word Var_120;
                MR_Word Var_122;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_126;
                MR_Word Var_127;
                MR_Word STATE_VARIABLE_Info_128_128;
                MR_Box conv13_STATE_VARIABLE_Info_116_116;
                MR_Box conv12_STATE_VARIABLE_IO_117_117;

                make__util__maybe_making_filename_msg_3_p_0(NoLinkObjsGlobals_34, OutputFileName_21, &MakingMsg_66);
                make__util__maybe_write_msg_3_p_0(MakingMsg_66);
                {
                  Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_115, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
                  MR_hl_field(0, Var_115, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_8));
                  MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_115, 3) = ((MR_Box) (Globals_18));
                  MR_hl_field(0, Var_115, 4) = ((MR_Box) (PIC_26));
                }
                mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_115, AllModulesList_37, &ForeignObjectFileLists_67, ((MR_Box) (STATE_VARIABLE_Info_99_99)), &conv13_STATE_VARIABLE_Info_116_116, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_117_117);
                STATE_VARIABLE_Info_116_116 = ((MR_Word) (conv13_STATE_VARIABLE_Info_116_116));
                ForeignObjects_68 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjectFileLists_67);
                switch (CompilationTarget_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ObjExt_69;
                      MR_Word Var_70;

                      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_26, &ObjExt_69, &Var_70);
                      {
                        Ext_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Ext_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, Ext_71, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_69));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    Ext_71 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[11]));
                    break;
                  case (MR_Integer) 2:
                    Ext_71 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[12]));
                    break;
                }
                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_120, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
                  MR_hl_field(0, Var_120, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_9));
                  MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_120, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
                  MR_hl_field(0, Var_120, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_linked_target_2\'/17"));
                  MR_hl_field(0, Var_120, 5) = ((MR_Box) (Ext_71));
                }
                mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_120, ObjModules_24, &ObjList_72);
                Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjects_68, LinkObjects_33);
                Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjList_72, Var_123);
                AllObjects_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_44, Var_122);
                {
                  Var_124 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_124, 0) = ((MR_Box) (&make__program_target_scalar_common_10[0]));
                  MR_hl_field(0, Var_124, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_10));
                  MR_hl_field(0, Var_124, 2) = ((MR_Box) ((MR_Integer) 6));
                  MR_hl_field(0, Var_124, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
                  MR_hl_field(0, Var_124, 4) = ((MR_Box) (ProgressStream_36));
                  MR_hl_field(0, Var_124, 5) = ((MR_Box) (ErrorStream_29));
                  MR_hl_field(0, Var_124, 6) = ((MR_Box) (FileType_20));
                  MR_hl_field(0, Var_124, 7) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(0, Var_124, 8) = ((MR_Box) (AllObjects_73));
                }
                libs__process_util__call_in_forked_process_4_p_0(Var_124, Succeeded_30);
                CmdLineTargets0_74 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_116_116);
                {
                  Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_127, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
                }
                {
                  Var_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_126, 0) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(0, Var_126, 1) = ((MR_Box) (Var_127));
                }
                mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_126)), CmdLineTargets0_74, &CmdLineTargets_75);
                make__make_info__make_info_set_command_line_targets_3_p_0(CmdLineTargets_75, STATE_VARIABLE_Info_116_116, &STATE_VARIABLE_Info_128_128);
                switch (*Succeeded_30) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ErrorMsg_136;

                      make__util__file_error_msg_2_p_0(OutputFileName_21, &ErrorMsg_136);
                      make__util__maybe_write_msg_locked_4_p_0(STATE_VARIABLE_Info_128_128, ErrorMsg_136);
                      *STATE_VARIABLE_Info_79 = STATE_VARIABLE_Info_128_128;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FileTimestamps2_76;
                      MR_Word FileTimestamps_77;

                      FileTimestamps2_76 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_128_128);
                      mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (OutputFileName_21)), FileTimestamps2_76, &FileTimestamps_77);
                      make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_77, STATE_VARIABLE_Info_128_128, STATE_VARIABLE_Info_79);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word MainModuleLinkedTarget_59;
                MR_String FullMainModuleLinkedFileName_60;
                MR_String CurDirMainModuleLinkedFileName_61;
                MR_Word SubdirSetting_62;
                MR_Word Var_106;

                {
                  Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_106, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
                }
                {
                  MainModuleLinkedTarget_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MainModuleLinkedTarget_59, 0) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(0, MainModuleLinkedTarget_59, 1) = ((MR_Box) (Var_106));
                }
                backend_libs__compile_target_code__linked_target_file_name_full_curdir_7_p_0(Globals_18, MainModuleName_19, FileType_20, &FullMainModuleLinkedFileName_60, &CurDirMainModuleLinkedFileName_61);
                libs__globals__get_subdir_setting_2_p_0(NoLinkObjsGlobals_34, &SubdirSetting_62);
                switch (SubdirSetting_62) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_String UpToDateMsg_63;

                      make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_34, MainModuleLinkedTarget_59, FullMainModuleLinkedFileName_60, STATE_VARIABLE_Info_99_99, STATE_VARIABLE_Info_79, &UpToDateMsg_63);
                      make__util__maybe_write_msg_3_p_0(UpToDateMsg_63);
                      *Succeeded_30 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word MadeSymlinkOrCopy_64;

                      backend_libs__compile_target_code__post_link_maybe_make_symlink_or_copy_11_p_0(NoLinkObjsGlobals_34, ProgressStream_36, ErrorStream_29, FullMainModuleLinkedFileName_60, CurDirMainModuleLinkedFileName_61, MainModuleName_19, FileType_20, Succeeded_30, &MadeSymlinkOrCopy_64);
                      switch (MadeSymlinkOrCopy_64) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_String UpToDateMsg_133;

                            make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_34, MainModuleLinkedTarget_59, FullMainModuleLinkedFileName_60, STATE_VARIABLE_Info_99_99, STATE_VARIABLE_Info_79, &UpToDateMsg_133);
                            make__util__maybe_write_msg_3_p_0(UpToDateMsg_133);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_String LinkMsg_65;

                            make__util__maybe_symlink_or_copy_linked_target_msg_3_p_0(NoLinkObjsGlobals_34, FullMainModuleLinkedFileName_60, &LinkMsg_65);
                            make__util__maybe_write_msg_3_p_0(LinkMsg_65);
                            *STATE_VARIABLE_Info_79 = STATE_VARIABLE_Info_99_99;
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

  make__program_target__IntroducedFrom__pred__order_target_modules__351__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_40);
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
  MR_Word conv0_STATE_VARIABLE_Info_18;

  make__program_target__pair_module_with_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_18);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
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
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_6[0]));
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
