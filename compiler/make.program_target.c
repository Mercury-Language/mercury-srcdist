/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2021-12-26
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
#include "bimap.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "libs.check_libgrades.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.md5.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_maybe_module_dep_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_dep_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct5 make__program_target____vpti_pred_5__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_realclean__2081__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_clean__1999__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_main_module_realclean__1947__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_grade_clean__1932__1_4_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__generate_archive_index__1894__1_5_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__1821__1_5_p_0(
  MR_String IntsSubdir_14,
  MR_String LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_directory__1788__1_5_p_0(
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_file__1768__1_5_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_3_p_0(
  MR_String Grade_15);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1167__1_2_p_0(
  MR_Word HeadVar__1_27,
  MR_Word * HeadVar__2_28);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1098__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word LambdaHeadVar__1_30);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__931__1_9_p_0(
  MR_Word KeepGoing_20,
  MR_Word HeadVar__2_47,
  MR_Word HeadVar__3_99,
  MR_Word HeadVar__4_100,
  MR_Word * HeadVar__5_101,
  MR_Word HeadVar__6_102,
  MR_Word * HeadVar__7_103);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__926__1_9_p_0(
  MR_Word KeepGoing_20,
  MR_Word HeadVar__2_40,
  MR_Word HeadVar__3_81,
  MR_Word HeadVar__4_82,
  MR_Word * HeadVar__5_83,
  MR_Word HeadVar__6_84,
  MR_Word * HeadVar__7_85);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__847__1_9_p_0(
  MR_Word Globals_9,
  MR_Word KeepGoing_21,
  MR_Word HeadVar__3_64,
  MR_Word HeadVar__4_65,
  MR_Word * HeadVar__5_200,
  MR_Word HeadVar__6_201,
  MR_Word * HeadVar__7_202);

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__595__1_1_f_0(
  MR_Word LambdaHeadVar__1_122);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__579__1_8_p_0(
  MR_Word Globals_18,
  MR_Word PIC_26,
  MR_Word LambdaHeadVar__1_109,
  MR_Word * LambdaHeadVar__2_110,
  MR_Word LambdaHeadVar__3_111,
  MR_Word * LambdaHeadVar__4_112);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__527__1_3_p_0(
  MR_String HeadVar__1_306);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__515__1_1_f_0(
  MR_String LambdaHeadVar__1_94);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__399__1_3_f_0(
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_String LambdaHeadVar__1_30);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__335__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word * HeadVar__2_40);

static void MR_CALL 
make__program_target____Compare____build0_1_0(
  MR_Word TypeInfo_for_Info_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_48_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____build0_1_0(
  MR_Word TypeInfo_for_Info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_48_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

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
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

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
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word PIC_11,
  MR_Word FactTableFiles_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__install_directory_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Box * wrapper_arg_2);

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
make__program_target__install_library_grade_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Globals_14,
  MR_String Grade_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1513__1_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1513__1_9_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word CleanAfter_20,
  MR_Word LibGlobals_31,
  MR_Word * LambdaHeadVar__1_77,
  MR_Word LambdaHeadVar__2_78);

static void MR_CALL 
make__program_target__install_extra_header_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_String InstallDir_11,
  MR_Word ModuleName_12,
  MR_Tuple HeadVar__5_5,
  MR_Word * Succeeded_15);

static void MR_CALL 
make__program_target__build_library_8_p_0(
  MR_Word MainModuleName_9,
  MR_Word AllModules_10,
  MR_Word Globals_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

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
make__program_target__build_analysis_files_9_p_0(
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word AllModules_12,
  MR_Word Succeeded0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static MR_bool MR_CALL 
make__program_target__build_analysis_files_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_1_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word AllModules_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetModules_13,
  MR_Word LocalModulesOpts_14,
  MR_Word Succeeded0_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0(
  MR_Word ModuleDeps_4,
  MR_Word Modules0_5,
  MR_Word * Modules_6);

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
make__program_target__linked_target_cleanup_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word FileType_11,
  MR_String OutputFileName_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

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
make__program_target__get_target_modules_2_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_TargetModules_0_17,
  MR_Word * STATE_VARIABLE_TargetModules_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0(
  MR_Word Globals_9,
  MR_Word LinkedTargetFile_10,
  MR_Word ExtraOptions_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

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
make__program_target__make_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
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
make__program_target__build_java_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_java_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__build_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__build_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word ModuleNames_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

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
make__program_target__build_linked_target_2_17_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_3(
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
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76);

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

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word TargetType_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__remove_init_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__remove_init_files_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__install_library_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__install_library_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0(
  MR_Word Globals_6,
  MR_Word * Result_7,
  MR_Word * LinkResult_8);

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
make__program_target__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__print_mkdir_errors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
make__program_target__install_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_file_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0(
  MR_Word Globals_8,
  MR_String Linkage_9,
  MR_String FileName_10,
  MR_String InstallDir_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
make__program_target__generate_archive_index_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__generate_archive_index_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__install_grade_init_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_grade_init_6_p_0(
  MR_Word Globals_7,
  MR_String GradeDir_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__install_extra_headers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__install_extra_headers_4_p_0(
  MR_Word Globals_5,
  MR_Word * ExtraHdrsSucceeded_6);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

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
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__get_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__get_target_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word TargetType_10,
  MR_Word AllModules_11,
  MR_Word * TargetModules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__make_linked_target_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir_7_p_0(
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word Globals_7,
  MR_String CacheDir_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0(
  MR_Word Globals_6,
  MR_Word * Succeeded_7,
  MR_String * CacheDir_8);

static MR_bool MR_CALL 
make__program_target____Unify____build0_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__program_target____Compare____build0_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box make__program_target_scalar_common_1[55][2];

static /* final */ const MR_Box make__program_target_scalar_common_2[22][3];

static /* final */ const MR_Box make__program_target_scalar_common_3[2][4];

static /* final */ const MR_Box make__program_target_scalar_common_4[10][1];

static /* final */ const MR_Box make__program_target_scalar_common_5[4][7];

static /* final */ const MR_Box make__program_target_scalar_common_6[5][9];

static /* final */ const MR_Box make__program_target_scalar_common_8[15][11];

static /* final */ const MR_Box make__program_target_scalar_common_9[6][10];

static /* final */ const MR_Box make__program_target_scalar_common_10[6][12];

static /* final */ const MR_Box make__program_target_scalar_common_11[2][8];

static /* final */ const MR_Box make__program_target_scalar_common_12[1][13];

static /* final */ const MR_Box make__program_target_scalar_common_13[5][6];

static /* final */ const MR_Box make__program_target_scalar_common_14[6][5];


/* sealed */ struct make__program_target__vector_common_type_7_0_s {
  const MR_Word make__program_target__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_7_0_s make__program_target_vector_common_7[7];



static /* final */ const MR_Box make__program_target_scalar_common_1[55][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "--compile-to-shared-lib")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "analysis_cache")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "Mercury")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".opt")))),
    ((MR_Box) ((MR_String) "opts"))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__program_target_scalar_common_1[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int0")))),
    ((MR_Box) ((MR_String) "int0s"))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__program_target_scalar_common_1[12])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int")))),
    ((MR_Box) ((MR_String) "ints"))
  },
  /* row 15 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int2")))),
    ((MR_Box) ((MR_String) "int2s"))
  },
  /* row 16 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int3")))),
    ((MR_Box) ((MR_String) "int3s"))
  },
  /* row 17 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".module_dep")))),
    ((MR_Box) ((MR_String) "module_deps"))
  },
  /* row 18 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mh")))),
    ((MR_Box) ((MR_String) "mhs"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "--use-grade-subdirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mih")))),
    ((MR_Box) ((MR_String) "mihs"))
  },
  /* row 21 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".analysis")))),
    ((MR_Box) ((MR_String) "analysiss"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "module_dep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "mih")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "mh")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "int3")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "int2")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "analysis")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 48U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 44U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 40U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[53])))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_2[22][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[0])),
    ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[0])),
    ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[0])),
    ((MR_Box) (make__program_target__make_misc_target_builder_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[0])),
    ((MR_Box) (make__program_target__make_misc_target_builder_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__program_target_scalar_common_13[1])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__program_target_scalar_common_14[0])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__program_target_scalar_common_14[1])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__program_target_scalar_common_13[2])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__program_target_scalar_common_14[2])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[1])),
    ((MR_Box) (make__program_target__make_java_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[0])),
    ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[0])),
    ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[0])),
    ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[0])),
    ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__program_target_scalar_common_14[3])),
    ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__program_target_scalar_common_13[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&make__program_target_scalar_common_13[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__program_target_scalar_common_14[5])),
    ((MR_Box) (make__program_target__install_library_grade_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__program_target_scalar_common_13[2])),
    ((MR_Box) (make__program_target__build_java_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "Making Java class files\n"))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_4[10][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java"))))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mh"))))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".init"))))
  },
  /* row 4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "_init.c"))))
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".used"))))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".prof"))))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".imdg"))))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".request"))))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_5[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_6[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_8[15][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_linked_target_file_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_9[6][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_10[6][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&make__make__type_ctor_info_maybe_keep_going_0)),
    ((MR_Box) (&make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_maybe_keep_going_0)),
    ((MR_Box) (&make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_11[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box make__program_target_scalar_common_12[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_13[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_14[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct make__program_target__vector_common_type_7_0_s make__program_target_vector_common_7[7] = {
  /* row 0 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 1 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[6])) },
  /* row 3 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 4 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 5 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 6 */   {     (MR_Word) ((MR_Unsigned) 0U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.build.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)
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

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_maybe_module_dep_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_maybe_module_dep_info_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_dep_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 make__program_target____vpti_pred_5__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_build0_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__program_target____Unify____build0_1_0_10001)),
  ((MR_Box) (make__program_target____Compare____build0_1_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "build0",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&make__program_target____vpti_pred_5__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_realclean__2081__1_3_p_0(
  MR_Word ModuleName_8)
{
  {
    MR_Word Var_26;
    MR_Word Var_28;
    MR_String Var_29;

    Var_29 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_8);
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__io__format_4_p_0((MR_String) "Cleaning up interface files for module \140%s\'\n", Var_26);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_clean__1999__1_3_p_0(
  MR_Word ModuleName_8)
{
  {
    MR_Word Var_28;
    MR_Word Var_30;
    MR_String Var_31;

    Var_31 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_8);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__io__format_4_p_0((MR_String) "Cleaning up target files for module \140%s\'.\n", Var_28);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_main_module_realclean__1947__1_3_p_0(
  MR_Word ModuleName_8)
{
  {
    MR_Word Var_27;
    MR_Word Var_29;
    MR_String Var_30;

    Var_30 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_8);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__io__format_4_p_0((MR_String) "Removing executable and library files for \140%s\'.\n", Var_27);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_grade_clean__1932__1_4_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9)
{
  {
    MR_String Grade_13;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &Grade_13);
    Var_28 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_9);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Grade_13));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_29));
    }
    mercury__io__format_4_p_0((MR_String) "Cleaning up grade-dependent files for \140%s\' in grade %s.\n", Var_25);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__generate_archive_index__1894__1_5_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14)
{
  {
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (FileName_8));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (InstallDir_9));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    mercury__io__format_5_p_0(ErrorStream_14, (MR_String) "Generating archive index for file %s in %s\n", Var_28);
    mercury__io__flush_output_3_p_0(ErrorStream_14);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__1821__1_5_p_0(
  MR_String IntsSubdir_14,
  MR_String LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65)
{
  {
    MR_String Var_70;
    MR_String Var_72;

    Var_72 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_64, (MR_String) "s");
    Var_70 = mercury__dir__f_slash_2_f_0(IntsSubdir_14, Var_72);
    mercury__dir__make_directory_4_p_0(Var_70, LambdaHeadVar__2_65);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_directory__1788__1_5_p_0(
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14)
{
  {
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (SourceDirName_8));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (InstallDir_9));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    mercury__io__format_5_p_0(ErrorStream_14, (MR_String) "Installing directory %s in %s\n", Var_26);
    mercury__io__flush_output_3_p_0(ErrorStream_14);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_file__1768__1_5_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14)
{
  {
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (FileName_8));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (InstallDir_9));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    mercury__io__format_5_p_0(ErrorStream_14, (MR_String) "Installing file %s in %s\n", Var_26);
    mercury__io__flush_output_3_p_0(ErrorStream_14);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_3_p_0(
  MR_String Grade_15)
{
  {
    MR_Word Var_62;
    MR_Word Var_64;

    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Grade_15));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__io__format_4_p_0((MR_String) "Installing grade %s\n", Var_62);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1167__1_2_p_0(
  MR_Word HeadVar__1_27,
  MR_Word * HeadVar__2_28)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_27, HeadVar__2_28);
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1098__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word LambdaHeadVar__1_30)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (LambdaHeadVar__1_30)), AllModules_11);
    return succeeded;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__931__1_9_p_0(
  MR_Word KeepGoing_20,
  MR_Word HeadVar__2_47,
  MR_Word HeadVar__3_99,
  MR_Word HeadVar__4_100,
  MR_Word * HeadVar__5_101,
  MR_Word HeadVar__6_102,
  MR_Word * HeadVar__7_103)
{
  make__build__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_20, HeadVar__2_47, HeadVar__3_99, HeadVar__4_100, HeadVar__5_101, HeadVar__6_102, HeadVar__7_103);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__926__1_9_p_0(
  MR_Word KeepGoing_20,
  MR_Word HeadVar__2_40,
  MR_Word HeadVar__3_81,
  MR_Word HeadVar__4_82,
  MR_Word * HeadVar__5_83,
  MR_Word HeadVar__6_84,
  MR_Word * HeadVar__7_85)
{
  {
    MR_Box conv1_HeadVar__7_85;
    MR_Box conv0_HeadVar__9_87;

    make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_20, HeadVar__2_40, HeadVar__3_81, HeadVar__4_82, HeadVar__5_83, ((MR_Box) (HeadVar__6_84)), &conv1_HeadVar__7_85, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__9_87);
    *HeadVar__7_85 = ((MR_Word) (conv1_HeadVar__7_85));
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__847__1_9_p_0(
  MR_Word Globals_9,
  MR_Word KeepGoing_21,
  MR_Word HeadVar__3_64,
  MR_Word HeadVar__4_65,
  MR_Word * HeadVar__5_200,
  MR_Word HeadVar__6_201,
  MR_Word * HeadVar__7_202)
{
  make__build__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_21, HeadVar__3_64, Globals_9, HeadVar__4_65, HeadVar__5_200, HeadVar__6_201, HeadVar__7_202);
}

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__595__1_1_f_0(
  MR_Word LambdaHeadVar__1_122)
{
  {
    MR_String LambdaHeadVar__2_123 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_122, (MR_Integer) 2))));

    return LambdaHeadVar__2_123;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__579__1_8_p_0(
  MR_Word Globals_18,
  MR_Word PIC_26,
  MR_Word LambdaHeadVar__1_109,
  MR_Word * LambdaHeadVar__2_110,
  MR_Word LambdaHeadVar__3_111,
  MR_Word * LambdaHeadVar__4_112)
{
  {
    MR_Word MaybeModuleDepInfo_60;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_18, LambdaHeadVar__1_109, &MaybeModuleDepInfo_60, LambdaHeadVar__3_111, LambdaHeadVar__4_112);
    if ((MaybeModuleDepInfo_60 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.build_linked_target_2\'/17", (MR_String) "error in dependencies");
        return;
      }
    else
    {
      MR_Word ModuleDepInfo_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_60, (MR_Integer) 0))));

      make__module_target__external_foreign_code_files_6_p_0(Globals_18, PIC_26, ModuleDepInfo_61, LambdaHeadVar__2_110);
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__527__1_3_p_0(
  MR_String HeadVar__1_306)
{
  mercury__io__write_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadVar__1_306)));
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__515__1_1_f_0(
  MR_String LambdaHeadVar__1_94)
{
  {
    MR_Word LambdaHeadVar__2_95;

    {
      LambdaHeadVar__2_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_95, 0) = ((MR_Box) (LambdaHeadVar__1_94));
    }
    return LambdaHeadVar__2_95;
  }
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__399__1_3_f_0(
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_String LambdaHeadVar__1_30)
{
  {
    MR_Word LambdaHeadVar__2_31;
    MR_Word Var_32;
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = (MR_Box) ((MR_Unsigned) (PIC_10));
      MR_hl_field(MR_mktag(3), Var_33, 2) = ((MR_Box) (LambdaHeadVar__1_30));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      LambdaHeadVar__2_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_31, 0) = ((MR_Box) (Var_32));
    }
    return LambdaHeadVar__2_31;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__335__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word * HeadVar__2_40)
{
  {
    MR_Box conv0_HeadVar__2_40;

    mercury__pair__snd_2_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_39, &conv0_HeadVar__2_40);
    *HeadVar__2_40 = ((MR_Word) (conv0_HeadVar__2_40));
  }
}

static void MR_CALL 
make__program_target____Compare____build0_1_0(
  MR_Word TypeInfo_for_Info_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_48_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_48_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
make__program_target____Unify____build0_1_0(
  MR_Word TypeInfo_for_Info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_48_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_48_95_49_95_95_91_49_93_95_48_2_p_0(
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
make__program_target__make_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    make__util__make_remove_target_file_by_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__make_module_realclean__2081__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_Word STATE_VARIABLE_Info_16_16;
    MR_Word Var_19;
    MR_Word Var_48;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Box conv2_STATE_VARIABLE_Info_49_49;
    MR_Box conv1_STATE_VARIABLE_IO_50_50;

    make__program_target__make_module_clean_6_p_0(Globals_7, ModuleName_8, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_16_16);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleName_8));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 74, Var_19);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_8[14]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Integer) 70));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__make__type_ctor_info_module_target_type_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[54])), ((MR_Box) (STATE_VARIABLE_Info_16_16)), &conv2_STATE_VARIABLE_Info_49_49, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_50_50);
    STATE_VARIABLE_Info_49_49 = ((MR_Word) (conv2_STATE_VARIABLE_Info_49_49));
    Var_56 = make__make_module_dep_file_extension_0_f_0();
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_56));
    }
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 70, ModuleName_8, Var_53, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_54_54);
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 70, ModuleName_8, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[8])), STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_59_59);
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 70, ModuleName_8, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[9])), STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_13);
  }
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
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = (MR_Box) ((MR_Unsigned) (PIC_11));
      MR_hl_field(MR_mktag(3), Var_20, 2) = ((MR_Box) (FactTableFile_12));
    }
    make__util__make_remove_target_file_by_name_8_p_0(Globals_9, (MR_Integer) 70, ModuleName_10, Var_20, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
make__program_target__remove_fact_table_c_file_6_p_0(
  MR_Word Globals_7,
  MR_String FactTableFile_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_String FactTableCFile_11;

    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_fact_table_c_file\'/6", (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".c"))), FactTableFile_8, &FactTableCFile_11);
    make__util__make_remove_file_7_p_0(Globals_7, (MR_Integer) 70, FactTableCFile_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Info_13;

    make__program_target__remove_fact_table_c_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_13);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_13));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    make__util__make_remove_target_file_by_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__make_module_clean__1999__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word MaybeModuleDepInfo_11;
    MR_Word FactTableFiles_14;
    MR_Word CCodeModule_15;
    MR_Word Var_21;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Word STATE_VARIABLE_Info_63_63;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_71_71;
    MR_Word STATE_VARIABLE_Info_74_74;
    MR_Box conv2_STATE_VARIABLE_Info_35_35;
    MR_Box conv1_STATE_VARIABLE_IO_36_36;
    MR_Box conv5_STATE_VARIABLE_Info_66_66;
    MR_Box conv4_STATE_VARIABLE_IO_67_67;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleName_8));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 74, Var_21);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&make__program_target_scalar_common_8[14]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 70));
      MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__make__type_ctor_info_module_target_type_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[46])), ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv2_STATE_VARIABLE_Info_35_35, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36_36);
    STATE_VARIABLE_Info_35_35 = ((MR_Word) (conv2_STATE_VARIABLE_Info_35_35));
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 70, ModuleName_8, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[6])), STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_53_53);
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 70, ModuleName_8, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[7])), STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_59_59);
    make__module_dep_file__get_module_dependencies_7_p_0(Globals_7, ModuleName_8, &MaybeModuleDepInfo_11, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_63_63);
    if ((MaybeModuleDepInfo_11 == (MR_Word) ((MR_Unsigned) 0U)))
      FactTableFiles_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ModuleDepInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_11, (MR_Integer) 0))));
      MR_Word FactTableFilesSet_13;

      parse_tree__module_imports__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_12, &FactTableFilesSet_13);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_13, &FactTableFiles_14);
    }
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&make__program_target_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Globals_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, FactTableFiles_14, ((MR_Box) (STATE_VARIABLE_Info_63_63)), &conv5_STATE_VARIABLE_Info_66_66, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_67_67);
    STATE_VARIABLE_Info_66_66 = ((MR_Word) (conv5_STATE_VARIABLE_Info_66_66));
    CCodeModule_15 = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(ModuleName_8, (MR_Integer) 0);
    make__util__make_remove_target_file_by_name_8_p_0(Globals_7, (MR_Integer) 70, CCodeModule_15, (MR_Word) ((MR_Unsigned) 36U), STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_71_71);
    make__program_target__remove_object_and_assembler_files_8_p_0(Globals_7, ModuleName_8, (MR_Integer) 0, FactTableFiles_14, STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_74_74);
    make__program_target__remove_object_and_assembler_files_8_p_0(Globals_7, ModuleName_8, (MR_Integer) 1, FactTableFiles_14, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_16;

    make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word PIC_11,
  MR_Word FactTableFiles_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Word Var_28;
    MR_Box conv2_STATE_VARIABLE_Info_16;
    MR_Box conv1_STATE_VARIABLE_IO_18;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_20, 0) = (MR_Box) ((MR_Unsigned) (PIC_11));
    }
    make__util__make_remove_target_file_by_name_8_p_0(Globals_9, (MR_Integer) 70, ModuleName_10, Var_20, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_21_21);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = (MR_Box) (((((MR_Unsigned) (PIC_11) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    make__util__make_remove_target_file_by_name_8_p_0(Globals_9, (MR_Integer) 70, ModuleName_10, Var_24, STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_Info_25_25);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_8[13]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__program_target__remove_object_and_assembler_files_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (PIC_11));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, FactTableFiles_12, ((MR_Box) (STATE_VARIABLE_Info_25_25)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
    *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__install_directory_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_directory__1788__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

static void MR_CALL 
make__program_target__install_directory_6_p_0(
  MR_Word Globals_7,
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word ErrorStream_14;
    MR_String Command_15;
    MR_Word Var_19;

    mercury__io__output_stream_3_p_0(&ErrorStream_14);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__program_target__install_directory_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (SourceDirName_8));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (InstallDir_9));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (ErrorStream_14));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_19);
    Command_15 = libs__file_util__make_install_dir_command_3_f_0(Globals_7, SourceDirName_8, InstallDir_9);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_7, ErrorStream_14, ErrorStream_14, ErrorStream_14, (MR_Integer) 0, Command_15, Succeeded_10);
  }
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
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 301, &HighLevelCode_22);
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
        make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIncDir_23, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[20]), &HeaderSucceeded1_24);
        IntDir_25 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
        make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, IntDir_25, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[20]), &HeaderSucceeded2_26);
        HeaderSucceeded_27 = libs__maybe_succeeded__and_2_f_0(HeaderSucceeded1_24, HeaderSucceeded2_26);
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
          make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIntDir_28, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[10]), &OptSucceeded_30);
          break;
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 498, &IntermodAnalysis_31);
      switch (IntermodAnalysis_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          IntermodAnalysisSucceeded_32 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIntDir_28, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_1[21]), &IntermodAnalysisSucceeded_32);
          break;
      }
      Var_72 = libs__maybe_succeeded__and_2_f_0(HeaderSucceeded_27, OptSucceeded_30);
      *Succeeded_14 = libs__maybe_succeeded__and_2_f_0(Var_72, IntermodAnalysisSucceeded_32);
    }
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
  {
    MR_Word LibSucceeded_18;
    MR_Word Info1_19;
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
    }
    make__program_target__make_misc_target_7_p_0(Globals_10, Var_25, &LibSucceeded_18, Info0_14, &Info1_19);
    switch (LibSucceeded_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String GradeDir_20;
          MR_Word Info2_21;
          MR_Word _Info_22;

          libs__compute_grade__grade_directory_component_2_p_0(Globals_10, &GradeDir_20);
          make__program_target__install_library_grade_files_10_p_0(Globals_10, LinkSucceeded0_11, GradeDir_20, ModuleName_12, AllModules_13, Succeeded_16, Info1_19, &Info2_21);
          make__program_target__maybe_make_grade_clean_8_p_0(Globals_10, CleanAfter_15, ModuleName_12, AllModules_13, Info2_21, &_Info_22);
        }
        break;
    }
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__make_grade_clean__1932__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
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
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_Info_32_45;
        MR_Word Var_47;
        MR_Box conv2_STATE_VARIABLE_Info_16;
        MR_Box conv1_STATE_VARIABLE_IO_18;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&make__program_target_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Globals_9));
          MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (ModuleName_11));
        }
        make__util__verbose_make_msg_4_p_0(Globals_9, Var_31);
        make__program_target__make_main_module_realclean_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_32_45);
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_2));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Globals_9));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, AllModules_12, ((MR_Box) (STATE_VARIABLE_Info_32_45)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
        *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
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
  {
    MR_Word StatusMap_8;

    StatusMap_8 = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(File_5, StatusMap0_7);
    return StatusMap_8;
  }
}

static MR_Word MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(
  MR_Word File_5,
  MR_Word StatusMap0_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) File_5)) == (MR_Integer) 0);
    MR_Word StatusMap_8;
    MR_Word Target_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), File_5, (MR_Integer) 0))));
      Target_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      succeeded = make__util__target_is_grade_or_arch_dependent_1_p_0(Target_10);
    }
    if (succeeded)
      StatusMap_8 = mercury__version_hash_table__delete_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), StatusMap0_7, ((MR_Box) (File_5)));
    else
      StatusMap_8 = StatusMap0_7;
    return StatusMap_8;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Info_16;

    make__program_target__maybe_make_grade_clean_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Info_16);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
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
  {
    MR_Word UseGradeSubdirs_19;
    MR_Word CleanAfter_20;
    MR_Word OptionArgs0_21;
    MR_Word OptionArgs_22;
    MR_Word MCFlags_23;
    MR_Word LookupSpecs_24;
    MR_Word LookupErrors_25;
    MR_Word OptionsSpecs_30;
    MR_Word LibGlobals_31;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_55;
    MR_Word Var_66;

    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 686, &UseGradeSubdirs_19);
    CleanAfter_20 = mercury__bool__not_1_f_0(UseGradeSubdirs_19);
    OptionArgs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 4))));
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Grade_15));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[19])));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_String) "--grade"));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
    }
    OptionArgs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs0_21, Var_49);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_13[2]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Grade_15));
    }
    make__util__verbose_make_msg_4_p_0(Globals_14, Var_55);
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 5))));
    make__options_file__lookup_mmc_options_3_p_0(Var_66, &MCFlags_23, &LookupSpecs_24);
    parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_14, LookupSpecs_24);
    LookupErrors_25 = parse_tree__error_util__contains_errors_2_f_0(Globals_14, LookupSpecs_24);
    switch (LookupErrors_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetectedGradeFlags_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 3))));
          MR_Word AllFlags_27;
          MR_Word Var_70;
          MR_Word Var_28;
          MR_Word Var_29;

          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_23, OptionArgs_22);
          AllFlags_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_26, Var_70);
          libs__handle_options__handle_given_options_7_p_0(AllFlags_27, &Var_28, &Var_29, &OptionsSpecs_30, &LibGlobals_31);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.install_library_grade\'/10", (MR_String) "bad DEFAULT_MCFLAGS");
          return;
        }
        break;
    }
    if ((OptionsSpecs_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word StatusMap_35;
      MR_Word VeryVerbose_36;
      MR_Box Cookie_37;
      MR_Word Succeeded0_42;
      MR_Word Cleanup_43;
      MR_Word STATE_VARIABLE_Info_74_74;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_Word Var_180;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Integer Var_183;
      MR_Word Var_184;
      MR_Word Var_185;
      MR_Unsigned packed_word_3;
      MR_Box conv2_STATE_VARIABLE_Info_45;

      StatusMap_35 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), (MR_Word) (&make__program_target_scalar_common_2[21]));
      Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 0))));
      Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 1))));
      Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 2))));
      Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 3))));
      Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 5))));
      Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 6))));
      Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 7))));
      Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 9))));
      Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 10))));
      Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 11))));
      Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 12))));
      packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 13)));
      Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 14))));
      Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 15))));
      Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 16))));
      Var_183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 17))));
      Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 18))));
      Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 19))));
      {
        STATE_VARIABLE_Info_74_74 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 0) = ((MR_Box) (Var_165));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 1) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 2) = ((MR_Box) (Var_167));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 3) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 4) = ((MR_Box) (OptionArgs_22));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 5) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 6) = ((MR_Box) (Var_171));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 7) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 8) = ((MR_Box) (StatusMap_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 9) = ((MR_Box) (Var_174));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 10) = ((MR_Box) (Var_175));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 11) = ((MR_Box) (Var_176));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 12) = ((MR_Box) (Var_177));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 13) = (MR_Box) (packed_word_3);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 14) = ((MR_Box) (Var_180));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 15) = ((MR_Box) (Var_181));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 16) = ((MR_Box) (Var_182));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 17) = ((MR_Box) (Var_183));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 18) = ((MR_Box) (Var_184));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 19) = ((MR_Box) (Var_185));
      }
      libs__globals__lookup_bool_option_3_p_0(LibGlobals_31, (MR_Integer) 70, &VeryVerbose_36);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_37);
      make__program_target__IntroducedFrom__pred__install_library_grade__1513__1_9_p_0(LinkSucceeded0_11, ModuleName_12, AllModules_13, CleanAfter_20, LibGlobals_31, &Succeeded0_42, STATE_VARIABLE_Info_74_74);
      {
        Cleanup_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Cleanup_43, 0) = ((MR_Box) (&make__program_target_scalar_common_8[12]));
        MR_hl_field(MR_mktag(0), Cleanup_43, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_3));
        MR_hl_field(MR_mktag(0), Cleanup_43, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Cleanup_43, 3) = ((MR_Box) (LibGlobals_31));
        MR_hl_field(MR_mktag(0), Cleanup_43, 4) = ((MR_Box) (CleanAfter_20));
        MR_hl_field(MR_mktag(0), Cleanup_43, 5) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(0), Cleanup_43, 6) = ((MR_Box) (AllModules_13));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_36, Cookie_37, Cleanup_43, Succeeded0_42, Succeeded_16, ((MR_Box) (STATE_VARIABLE_Info_74_74)), &conv2_STATE_VARIABLE_Info_45);
      *STATE_VARIABLE_Info_45 = ((MR_Word) (conv2_STATE_VARIABLE_Info_45));
    }
    else
    {
      MR_Word ErrorStream_34;

      libs__globals__get_error_output_stream_5_p_0(Globals_14, ModuleName_12, &ErrorStream_34);
      libs__handle_options__usage_errors_5_p_0(ErrorStream_34, Globals_14, OptionsSpecs_30);
      *Succeeded_16 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1513__1_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_16;

    make__program_target__install_library_grade_2_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), &conv0_Succeeded_16);
    *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_16));
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1513__1_9_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word CleanAfter_20,
  MR_Word LibGlobals_31,
  MR_Word * LambdaHeadVar__1_77,
  MR_Word LambdaHeadVar__2_78)
{
  {
    MR_Word Var_83;

    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&make__program_target_scalar_common_10[5]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (make__program_target__IntroducedFrom__pred__install_library_grade__1513__1_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (LibGlobals_31));
      MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (LinkSucceeded0_11));
      MR_hl_field(MR_mktag(0), Var_83, 5) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(0), Var_83, 6) = ((MR_Box) (AllModules_13));
      MR_hl_field(MR_mktag(0), Var_83, 7) = ((MR_Box) (LambdaHeadVar__2_78));
      MR_hl_field(MR_mktag(0), Var_83, 8) = ((MR_Box) (CleanAfter_20));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_83, LambdaHeadVar__1_77);
  }
}

static void MR_CALL 
make__program_target__install_extra_header_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1768__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

static void MR_CALL 
make__program_target__install_extra_header_7_p_0(
  MR_Word Globals_8,
  MR_String IncDir_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Succeeded_0_14,
  MR_Word * STATE_VARIABLE_Succeeded_15)
{
  {
    MR_Word InstallSucceeded_13;
    MR_Word ErrorStream_29;
    MR_String Command_30;
    MR_Word Var_32;

    mercury__io__output_stream_3_p_0(&ErrorStream_29);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (make__program_target__install_extra_header_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (FileName_10));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (IncDir_9));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (ErrorStream_29));
    }
    make__util__verbose_make_msg_4_p_0(Globals_8, Var_32);
    Command_30 = libs__file_util__make_install_file_command_3_f_0(Globals_8, FileName_10, IncDir_9);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_8, ErrorStream_29, ErrorStream_29, ErrorStream_29, (MR_Integer) 0, Command_30, &InstallSucceeded_13);
    *STATE_VARIABLE_Succeeded_15 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_14, InstallSucceeded_13);
  }
}

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_15;

    make__program_target__install_subdir_file_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_Succeeded_15);
    *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_15));
  }
}

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;
    MR_Word MaybeModuleDepInfo_15;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_11, &MaybeModuleDepInfo_15, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
    if ((MaybeModuleDepInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_12 = (MR_Integer) 0;
    else
    {
      MR_Word ModuleDepInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_15, (MR_Integer) 0))));
      MR_Word AnyIntermod_17;
      MR_Word Exts0_19;
      MR_Word Exts_20;
      MR_String Prefix_21;
      MR_String LibDir_22;
      MR_Word Results_23;
      MR_Word Target_24;
      MR_Word HeaderSucceeded_28;
      MR_Word Var_54;
      MR_Word Var_59;
      MR_Word Var_64;
      MR_String Var_70;
      MR_Word Var_73;
      MR_String Var_75;
      MR_Word Var_93;
      MR_Box conv1_STATE_VARIABLE_IO_74_74;

      libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_17);
      switch (AnyIntermod_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Exts0_19 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Children_18;

            parse_tree__module_imports__module_dep_info_get_children_2_p_0(ModuleDepInfo_16, &Children_18);
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_18);
            if (succeeded)
              Exts0_19 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[11]));
            else
              Exts0_19 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[13]));
          }
          break;
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (&make__program_target_scalar_common_1[17]));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Exts0_19));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (&make__program_target_scalar_common_1[16]));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_1[15]));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_59));
      }
      {
        Exts_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Exts_20, 0) = ((MR_Box) (&make__program_target_scalar_common_1[14]));
        MR_hl_field(MR_mktag(1), Exts_20, 1) = ((MR_Box) (Var_54));
      }
      libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 670, &Prefix_21);
      Var_70 = mercury__dir__f_slash_2_f_0(Prefix_21, (MR_String) "lib");
      LibDir_22 = mercury__dir__f_slash_2_f_0(Var_70, (MR_String) "mercury");
      Var_75 = mercury__dir__f_slash_2_f_0(LibDir_22, (MR_String) "ints");
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&make__program_target_scalar_common_8[11]));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (make__program_target__install_ints_and_headers_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (SubdirLinkSucceeded_10));
        MR_hl_field(MR_mktag(0), Var_73, 5) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), Var_73, 6) = ((MR_Box) (ModuleName_11));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&make__program_target_scalar_common_3[0]), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Exts_20, &Results_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_74_74);
      libs__globals__get_target_2_p_0(Globals_9, &Target_24);
      switch (Target_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String FileName_25;
            MR_Word HeaderSucceeded1_26;
            MR_Word HeaderSucceeded2_27;
            MR_String Var_83;
            MR_String Var_86;

            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.program_target.install_ints_and_headers\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[2])), ModuleName_11, &FileName_25);
            Var_83 = mercury__dir__f_slash_2_f_0(LibDir_22, (MR_String) "inc");
            make__program_target__install_file_6_p_0(Globals_9, FileName_25, Var_83, &HeaderSucceeded1_26);
            Var_86 = mercury__dir__f_slash_2_f_0(LibDir_22, (MR_String) "ints");
            make__program_target__install_subdir_file_8_p_0(Globals_9, SubdirLinkSucceeded_10, Var_86, ModuleName_11, (MR_Tuple) (&make__program_target_scalar_common_1[18]), &HeaderSucceeded2_27);
            HeaderSucceeded_28 = libs__maybe_succeeded__and_2_f_0(HeaderSucceeded1_26, HeaderSucceeded2_27);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          HeaderSucceeded_28 = (MR_Integer) 1;
          break;
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (HeaderSucceeded_28));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Results_23));
      }
      *Succeeded_12 = libs__maybe_succeeded__and_list_1_f_0(Var_93);
    }
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1768__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
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
  {
    MR_Word Ext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_String Exts_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
    MR_String FileName_17;
    MR_Word Succeeded1_18;
    MR_Word Var_24;
    MR_Word ErrorStream_40;
    MR_String Command_41;
    MR_Word Var_43;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Ext_13));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.program_target.install_subdir_file\'/8", (MR_Integer) 1, Var_24, ModuleName_12, &FileName_17);
    mercury__io__output_stream_3_p_0(&ErrorStream_40);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (make__program_target__install_subdir_file_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (FileName_17));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (InstallDir_11));
      MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (ErrorStream_40));
    }
    make__util__verbose_make_msg_4_p_0(Globals_9, Var_43);
    Command_41 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_17, InstallDir_11);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ErrorStream_40, ErrorStream_40, ErrorStream_40, (MR_Integer) 0, Command_41, &Succeeded1_18);
    switch (SubdirLinkSucceeded_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Succeeded2_19;
          MR_String Var_27;
          MR_String Var_29;

          Var_29 = mercury__dir__f_slash_2_f_0(InstallDir_11, (MR_String) "Mercury");
          Var_27 = mercury__dir__f_slash_2_f_0(Var_29, Exts_14);
          make__program_target__install_file_6_p_0(Globals_9, FileName_17, Var_27, &Succeeded2_19);
          *Succeeded_15 = libs__maybe_succeeded__and_2_f_0(Succeeded1_18, Succeeded2_19);
        }
        break;
      case (MR_Integer) 1:
        *Succeeded_15 = Succeeded1_18;
        break;
    }
  }
}

static void MR_CALL 
make__program_target__build_library_8_p_0(
  MR_Word MainModuleName_9,
  MR_Word AllModules_10,
  MR_Word Globals_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word Target_15;

    libs__globals__get_target_2_p_0(Globals_11, &Target_15);
    switch (Target_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StaticSucceeded_36;
          MR_Word SharedLibsSupported_37;
          MR_Word Var_42;
          MR_Word STATE_VARIABLE_Info_26_43;

          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (MainModuleName_9));
            MR_hl_field(MR_mktag(0), Var_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          make__program_target__make_linked_target_7_p_0(Globals_11, Var_42, &StaticSucceeded_36, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_26_43);
          backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Globals_11, &SharedLibsSupported_37);
          switch (StaticSucceeded_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Succeeded_12 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_26_43;
              }
              break;
            case (MR_Integer) 1:
              switch (SharedLibsSupported_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ErrorStream_41;

                    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_26_43;
                    mercury__io__output_stream_3_p_0(&ErrorStream_41);
                    backend_libs__compile_target_code__make_library_init_file_8_p_0(Globals_11, ErrorStream_41, ErrorStream_41, MainModuleName_9, AllModules_10, Succeeded_12);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_46;
                    MR_Word SharedLibsSucceeded_82;

                    {
                      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (MainModuleName_9));
                      MR_hl_field(MR_mktag(0), Var_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    }
                    make__program_target__make_linked_target_7_p_0(Globals_11, Var_46, &SharedLibsSucceeded_82, STATE_VARIABLE_Info_26_43, STATE_VARIABLE_Info_17);
                    switch (SharedLibsSucceeded_82) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Succeeded_12 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ErrorStream_78;

                          mercury__io__output_stream_3_p_0(&ErrorStream_78);
                          backend_libs__compile_target_code__make_library_init_file_8_p_0(Globals_11, ErrorStream_78, ErrorStream_78, MainModuleName_9, AllModules_10, Succeeded_12);
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
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (MainModuleName_9));
            MR_hl_field(MR_mktag(0), Var_61, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
          }
          make__program_target__make_linked_target_7_p_0(Globals_11, Var_61, Succeeded_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_74;

          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (MainModuleName_9));
            MR_hl_field(MR_mktag(0), Var_74, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
          }
          make__program_target__make_linked_target_7_p_0(Globals_11, Var_74, Succeeded_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_Word Dep_6;
    MR_Word DepStatusMap0_7;
    MR_Word DepStatusMap_8;
    MR_Word Var_11;
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
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Integer Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Unsigned packed_word_1;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 28U));
    }
    {
      Dep_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Dep_6, 0) = ((MR_Box) (Var_11));
    }
    DepStatusMap0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 8))));
    mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_6)), ((MR_Box) ((MR_Integer) 0)), DepStatusMap0_7, &DepStatusMap_8);
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 2))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 3))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 4))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 5))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 7))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 9))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 10))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 11))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 13)));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 14))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 15))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 16))));
    Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 17))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 18))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (DepStatusMap_8));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_55));
    }
  }
}

static MR_Word MR_CALL 
make__program_target__lookup_module_dep_info_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5)
{
  {
    MR_Word ModuleDepInfo_6;
    MR_Word MaybeModuleDepInfo_7;
    MR_Box conv0_MaybeModuleDepInfo_7;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ModuleDeps_4, ((MR_Box) (ModuleName_5)), &conv0_MaybeModuleDepInfo_7);
    MaybeModuleDepInfo_7 = ((MR_Word) (conv0_MaybeModuleDepInfo_7));
    if ((MaybeModuleDepInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140make.program_target.lookup_module_dep_info_in_maybe_map\'/2", (MR_String) "MaybeModuleDepInfo = no");
    else
      ModuleDepInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_7, (MR_Integer) 0))));
    return ModuleDepInfo_6;
  }
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
  {
    MR_Word ModuleDepInfo_11;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), LookupModuleImports_7, (MR_Integer) 1))));
    MR_Box conv1_ModuleDepInfo_11;

    conv1_ModuleDepInfo_11 = func_0(((MR_Box) (LookupModuleImports_7)), ((MR_Box) (ModuleName_8)));
    ModuleDepInfo_11 = ((MR_Word) (conv1_ModuleDepInfo_11));
    parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0(ModuleDepInfo_11, LookupModuleImports_7, STATE_VARIABLE_IntDepsGraph_0_12, STATE_VARIABLE_IntDepsGraph_13, STATE_VARIABLE_ImplDepsGraph_0_14, STATE_VARIABLE_ImplDepsGraph_15);
  }
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
  {
    MR_bool succeeded = (Succeeded0_13 == (MR_Integer) 0);
    MR_Word KeepGoing_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 13))) & (MR_Integer) 1);

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
        make__program_target__build_analysis_files_1_8_p_0(Globals_10, MainModuleName_11, AllModules_12, Succeeded_14, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
    }
  }
}

static MR_bool MR_CALL 
make__program_target__build_analysis_files_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__program_target__IntroducedFrom__pred__build_analysis_files_1__1098__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
make__program_target__build_analysis_files_1_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word AllModules_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word TargetModules1_16;
    MR_Word TargetModules_18;
    MR_Word Succeeded0_19;
    MR_Word LocalModulesOpts_20;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_31_31;

    make__program_target__reverse_ordered_modules_3_p_0(Var_28, AllModules_11, &TargetModules1_16);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&make__program_target_scalar_common_14[4]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (make__program_target__build_analysis_files_1_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (AllModules_11));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_29, TargetModules1_16, &TargetModules_18);
    make__dependencies__make_local_module_id_options_8_p_0(Globals_9, MainModuleName_10, &Succeeded0_19, &LocalModulesOpts_20, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_31_31);
    switch (Succeeded0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_12 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_31_31;
        }
        break;
      case (MR_Integer) 1:
        make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(Globals_9, TargetModules_18, LocalModulesOpts_20, Succeeded0_19, Succeeded_12, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_22);
        break;
    }
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Info_10;

    make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_10;

    make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1(
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
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    make__module_target__make_module_target_extra_options_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetModules_13,
  MR_Word LocalModulesOpts_14,
  MR_Word Succeeded0_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 13))) & (MR_Integer) 1);
    MR_Word Succeeded1_20;
    MR_Integer ReanalysisPasses_21;
    MR_Word ReanalyseSuboptimal_22;
    MR_Word InvalidModules_23;
    MR_Word SuboptimalModules_24;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Box conv3_STATE_VARIABLE_Info_31_31;
    MR_Box conv2_STATE_VARIABLE_IO_32_32;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&make__program_target_scalar_common_8[10]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (LocalModulesOpts_14));
    }
    Var_30 = make__util__make_dependency_list_2_f_0(TargetModules_13, (MR_Word) ((MR_Unsigned) 28U));
    make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_19, Var_29, Globals_11, Var_30, &Succeeded1_20, ((MR_Box) (STATE_VARIABLE_Info_0_25)), &conv3_STATE_VARIABLE_Info_31_31, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_32_32);
    STATE_VARIABLE_Info_31_31 = ((MR_Word) (conv3_STATE_VARIABLE_Info_31_31));
    ReanalysisPasses_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 17))));
    succeeded = (ReanalysisPasses_21 > (MR_Integer) 1);
    if (succeeded)
      ReanalyseSuboptimal_22 = (MR_Integer) 1;
    else
      ReanalyseSuboptimal_22 = (MR_Integer) 0;
    make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_22, Globals_11, TargetModules_13, &InvalidModules_23, &SuboptimalModules_24);
    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidModules_23);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Box conv5_STATE_VARIABLE_Info_38_38;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_25;

      make__util__maybe_reanalyse_modules_message_3_p_0(Globals_11);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[19]), InvalidModules_23, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv5_STATE_VARIABLE_Info_38_38);
      STATE_VARIABLE_Info_38_38 = ((MR_Word) (conv5_STATE_VARIABLE_Info_38_38));
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Info_0_25 = STATE_VARIABLE_Info_38_38;
      STATE_VARIABLE_Info_0_25 = next_value_of_STATE_VARIABLE_Info_0_25;
      continue;
    }
    else
    {
      succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SuboptimalModules_24);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_42_42;
        MR_Word STATE_VARIABLE_Info_43_43;
        MR_Integer Var_44;
        MR_Box conv7_STATE_VARIABLE_Info_42_42;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Unsigned packed_word_2;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_25;

        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[20]), SuboptimalModules_24, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv7_STATE_VARIABLE_Info_42_42);
        STATE_VARIABLE_Info_42_42 = ((MR_Word) (conv7_STATE_VARIABLE_Info_42_42));
        Var_44 = (MR_Integer) ((MR_Unsigned) ReanalysisPasses_21 - (MR_Unsigned) 1);
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 0))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 1))));
        Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 2))));
        Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 3))));
        Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 4))));
        Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 5))));
        Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 6))));
        Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 7))));
        Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 8))));
        Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 9))));
        Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 10))));
        Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 11))));
        Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 12))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 13)));
        Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 14))));
        Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 15))));
        Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 16))));
        Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 18))));
        Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 19))));
        {
          STATE_VARIABLE_Info_43_43 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 1) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 2) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 3) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 4) = ((MR_Box) (Var_93));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 5) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 6) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 7) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 8) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 9) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 10) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 11) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 12) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 13) = (MR_Box) (packed_word_2);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 14) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 15) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 16) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 17) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 18) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 19) = ((MR_Box) (Var_109));
        }
        make__util__maybe_reanalyse_modules_message_3_p_0(Globals_11);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Info_0_25 = STATE_VARIABLE_Info_43_43;
        STATE_VARIABLE_Info_0_25 = next_value_of_STATE_VARIABLE_Info_0_25;
        continue;
      }
      else
      {
        *Succeeded_16 = libs__maybe_succeeded__and_2_f_0(Succeeded0_15, Succeeded1_20);
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_31_31;
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
      MR_Word Module_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modules_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ModuleStatus_20;

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__program_target_scalar_common_1[5]), ((MR_Box) ((MR_Integer) 0)), Globals_2, Module_15, &ModuleStatus_20);
      switch (ModuleStatus_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InvalidModules0_22;

            make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, &InvalidModules0_22, HeadVar__5_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InvalidModules0_22));
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
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_15));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SuboptimalModules0_21));
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
make__program_target__reverse_ordered_modules_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_28;

    make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1167__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_28);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_28));
  }
}

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_IntDepsGraph_13;
    MR_Word conv1_STATE_VARIABLE_ImplDepsGraph_15;

    make__program_target__add_module_relations_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IntDepsGraph_13, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ImplDepsGraph_15);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IntDepsGraph_13));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ImplDepsGraph_15));
  }
}

static MR_Box MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ModuleDepInfo_6;

    conv0_ModuleDepInfo_6 = make__program_target__lookup_module_dep_info_in_maybe_map_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ModuleDepInfo_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0(
  MR_Word ModuleDeps_4,
  MR_Word Modules0_5,
  MR_Word * Modules_6)
{
  {
    MR_Word ImpDepsGraph_8;
    MR_Word Order0_9;
    MR_Word Order1_10;
    MR_Word Order2_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box conv4__IntDepsGraph_7;
    MR_Box conv3_ImpDepsGraph_8;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__program_target_scalar_common_13[3]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleDeps_4));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&make__program_target_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_15));
    }
    Var_13 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_14 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__program_target_scalar_common_1[3]), Var_12, Modules0_5, ((MR_Box) (Var_13)), &conv4__IntDepsGraph_7, ((MR_Box) (Var_14)), &conv3_ImpDepsGraph_8);
    ImpDepsGraph_8 = ((MR_Word) (conv3_ImpDepsGraph_8));
    mercury__digraph__atsort_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_8, &Order0_9);
    mercury__list__reverse_2_p_0((MR_Word) (&make__program_target_scalar_common_1[4]), Order0_9, &Order1_10);
    mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_1[4]), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__program_target_scalar_common_2[18]), Order1_10, &Order2_11);
    mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Order2_11, Modules_6);
  }
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
  {
    MR_bool succeeded;
    MR_Word MaybeModuleDepInfo_14;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_10, &MaybeModuleDepInfo_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
    if ((MaybeModuleDepInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ParentModules_18 = STATE_VARIABLE_ParentModules_0_17;
    else
    {
      MR_Word ModuleDepInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_14, (MR_Integer) 0))));
      MR_Word Children_16;

      parse_tree__module_imports__module_dep_info_get_children_2_p_0(ModuleDepInfo_15, &Children_16);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_16);
      if (succeeded)
        *STATE_VARIABLE_ParentModules_18 = STATE_VARIABLE_ParentModules_0_17;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParentModules_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParentModules_0_17));
        }
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
  {
    MR_bool succeeded;

    succeeded = mercury__string__suffix_2_p_0(FileName_5, (MR_String) ".class");
    if (succeeded)
      *STATE_VARIABLE_Timestamps_9 = STATE_VARIABLE_Timestamps_0_8;
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (FileName_5)), ((MR_Box) (MaybeTimestamp_6)), STATE_VARIABLE_Timestamps_0_8, STATE_VARIABLE_Timestamps_9);
  }
}

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    make__util__make_remove_module_file_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
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
  {
    MR_Word STATE_VARIABLE_Info_20_20;

    make__util__make_remove_file_7_p_0(Globals_9, (MR_Integer) 74, OutputFileName_12, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_20_20);
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
          MR_String ObjExt_34;
          MR_String PicObjExt_35;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_String Var_48;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_String Var_53;
          MR_Box conv2_STATE_VARIABLE_Info_16;
          MR_Box conv1_STATE_VARIABLE_IO_18;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 553, &ObjExt_34);
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 554, &PicObjExt_35);
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__program_target__linked_target_cleanup_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Globals_9));
            MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 74));
            MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (MainModuleName_10));
          }
          Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_34);
          Var_47 = (MR_Word) (Var_48);
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          }
          Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "_init", PicObjExt_35);
          Var_52 = (MR_Word) (Var_53);
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[4])));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_45));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, Var_39, ((MR_Box) (STATE_VARIABLE_Info_20_20)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
          *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
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
}

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_31;

    conv0_LambdaHeadVar__2_31 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__399__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
    return wrapper_arg_2;
  }
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
      ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_16, (MR_Integer) 0))));
    switch (CompilationTarget_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FactFileToTarget_18;
          MR_Word FactTableFiles_20;
          MR_Word Var_34;

          {
            FactFileToTarget_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FactFileToTarget_18, 0) = ((MR_Box) (&make__program_target_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), FactFileToTarget_18, 1) = ((MR_Box) (make__program_target__get_foreign_object_targets_8_p_0_1));
            MR_hl_field(MR_mktag(0), FactFileToTarget_18, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), FactFileToTarget_18, 3) = ((MR_Box) (PIC_10));
            MR_hl_field(MR_mktag(0), FactFileToTarget_18, 4) = ((MR_Box) (ModuleName_11));
          }
          parse_tree__module_imports__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_17, &FactTableFiles_20);
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
}

static void MR_CALL 
make__program_target__compare_paired_modules_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Res_8)
{
  {
    MR_Word TimeA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ModuleA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TimeB_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ModuleB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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
}

static void MR_CALL 
make__program_target__pair_module_with_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word Module_9,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word Timestamp_10;
    MR_Word Target_14;
    MR_Word MaybeTimestamp_15;

    {
      Target_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Target_14, 0) = ((MR_Box) (Module_9));
      MR_hl_field(MR_mktag(0), Target_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, Target_14, &MaybeTimestamp_15, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    if (((MR_tag((MR_Word) MaybeTimestamp_15)) == (MR_Integer) 1))
      Timestamp_10 = libs__timestamp__oldest_timestamp_0_f_0();
    else
      Timestamp_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTimestamp_15, (MR_Integer) 0))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Timestamp_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Module_9));
    }
  }
}

static void MR_CALL 
make__program_target__get_target_modules_2_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_TargetModules_0_17,
  MR_Word * STATE_VARIABLE_TargetModules_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word MaybeModuleDepInfo_14;
    MR_Word ModuleDepInfo_15;
    MR_Word SourceFileModuleName_16;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_10, &MaybeModuleDepInfo_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
    succeeded = (MaybeModuleDepInfo_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ModuleDepInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_14, (MR_Integer) 0))));
      parse_tree__module_imports__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_15, &SourceFileModuleName_16);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, SourceFileModuleName_16);
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TargetModules_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TargetModules_0_17));
      }
    else
      *STATE_VARIABLE_TargetModules_18 = STATE_VARIABLE_TargetModules_0_17;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0(
  MR_Word Globals_9,
  MR_Word LinkedTargetFile_10,
  MR_Word ExtraOptions_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_Word MainModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LinkedTargetFile_10, (MR_Integer) 0))));
    MR_Word IntermodAnalysis_17;
    MR_Word IntermodAnalysisSucceeded_18;
    MR_Word STATE_VARIABLE_Info_34_34;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 498, &IntermodAnalysis_17);
    switch (IntermodAnalysis_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          IntermodAnalysisSucceeded_18 = (MR_Integer) 1;
          STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_0_28;
        }
        break;
      case (MR_Integer) 1:
        make__program_target__make_misc_target_builder_8_p_0(Globals_9, MainModuleName_15, (MR_Word) ((MR_Unsigned) 8U), &IntermodAnalysisSucceeded_18, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_34_34);
        break;
    }
    switch (IntermodAnalysisSucceeded_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_12 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_34_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetectedGradeFlags_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 3))));
          MR_Word OptionVariables_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 5))));
          MR_Word OptionArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 4))));
          MR_Word MayBuild_22;

          make__build__setup_for_build_with_module_options_10_p_0(Globals_9, (MR_Integer) 1, MainModuleName_15, DetectedGradeFlags_19, OptionVariables_20, OptionArgs_21, ExtraOptions_11, &MayBuild_22);
          if (((MR_tag((MR_Word) MayBuild_22)) == (MR_Integer) 1))
          {
            MR_Word BuildGlobals_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_22, (MR_Integer) 1))));

            make__program_target__make_linked_target_2_7_p_0(BuildGlobals_24, LinkedTargetFile_10, Succeeded_12, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_29);
          }
          else
          {
            MR_Word Specs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_22, (MR_Integer) 0))));
            MR_Word ErrorStream_27;

            libs__globals__get_error_output_stream_5_p_0(Globals_9, MainModuleName_15, &ErrorStream_27);
            parse_tree__error_util__write_error_specs_ignore_5_p_0(ErrorStream_27, Globals_9, Specs_26);
            *Succeeded_12 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_34_34;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_Info_16;

    make__program_target__linked_target_cleanup_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv14_STATE_VARIABLE_Info_16);
    *wrapper_arg_2 = ((MR_Box) (conv14_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_5(
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
    MR_Word conv11_HeadVar__3_3;
    MR_Word conv10_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv10_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv10_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_4(
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
    MR_Word conv9_HeadVar__3_3;
    MR_Word conv8_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv8_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_3(
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
    MR_Word conv7_HeadVar__3_3;
    MR_Word conv6_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv6_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv6_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0_2(
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
    MR_Word conv5_HeadVar__3_3;
    MR_Word conv4_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv4_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv4_HeadVar__5_5));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ObjectTargets_12;
    MR_Word conv0_STATE_VARIABLE_Info_23;

    make__program_target__get_foreign_object_targets_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_ObjectTargets_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_ObjectTargets_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_7_p_0(
  MR_Word Globals_8,
  MR_Word LinkedTargetFile_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  {
    MR_bool succeeded;
    MR_Word MainModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LinkedTargetFile_9, (MR_Integer) 0))));
    MR_Word FileType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LinkedTargetFile_9, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word DepsSucceeded_15;
    MR_Word AllModules_16;
    MR_Word KeepGoing_17;
    MR_Word STATE_VARIABLE_Info_49_49;

    make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, MainModuleName_13, &DepsSucceeded_15, &AllModules_16, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_49_49);
    KeepGoing_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 13))) & (MR_Integer) 1);
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
      MR_Word AllModulesList_22;
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
      MR_Word STATE_VARIABLE_Info_55_55;
      MR_Word Var_57;
      MR_Word STATE_VARIABLE_Info_58_58;
      MR_Word STATE_VARIABLE_Info_60_60;
      MR_Word STATE_VARIABLE_Info_77_77;
      MR_Word Var_80;
      MR_Word STATE_VARIABLE_Info_81_81;
      MR_String Var_83;
      MR_Word STATE_VARIABLE_Info_85_85;
      MR_Box conv3_STATE_VARIABLE_Info_58_58;
      MR_Box conv2_STATE_VARIABLE_IO_59_59;

      backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_8, FileType_14, &PIC_18);
      libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_19);
      switch (CompilationTarget_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            IntermediateTargetType_20 = (MR_Word) ((MR_Unsigned) 36U);
            {
              ObjectTargetType_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ObjectTargetType_21, 0) = (MR_Box) ((MR_Unsigned) (PIC_18));
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
      AllModulesList_22 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_16);
      make__program_target__get_target_modules_8_p_0(Globals_8, IntermediateTargetType_20, AllModulesList_22, &ObjModulesAlpha_23, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_51_51);
      make__program_target__order_target_modules_7_p_0(Globals_8, ObjModulesAlpha_23, &ObjModules_24, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
      make__dependencies__remove_nested_modules_7_p_0(Globals_8, ObjModules_24, &ObjModulesNonnested_25, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
      IntermediateTargetsNonnested_26 = make__util__make_dependency_list_2_f_0(ObjModulesNonnested_25, IntermediateTargetType_20);
      ObjTargets_27 = make__util__make_dependency_list_2_f_0(ObjModules_24, ObjectTargetType_21);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&make__program_target_scalar_common_8[8]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Globals_8));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (PIC_18));
      }
      mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, ObjModules_24, &ForeignObjTargetsList_28, ((MR_Box) (STATE_VARIABLE_Info_55_55)), &conv3_STATE_VARIABLE_Info_58_58, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_59_59);
      STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv3_STATE_VARIABLE_Info_58_58));
      ForeignObjTargets_29 = mercury__list__condense_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), ForeignObjTargetsList_28);
      make__program_target__make_all_interface_files_7_p_0(Globals_8, AllModulesList_22, &IntsSucceeded_30, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_60_60);
      succeeded = (IntsSucceeded_30 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_17 == (MR_Integer) 0);
      if (succeeded)
      {
        BuildDepsSucceeded_31 = (MR_Integer) 0;
        STATE_VARIABLE_Info_77_77 = STATE_VARIABLE_Info_60_60;
      }
      else
      {
        MR_Word BuildDepsSucceeded0_32;
        MR_Word BuildDepsSucceeded1_35;
        MR_Word STATE_VARIABLE_Info_63_63;
        MR_Word STATE_VARIABLE_Info_71_71;

        make__build__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_17, (MR_Word) (&make__program_target_scalar_common_2[14]), Globals_8, IntermediateTargetsNonnested_26, &BuildDepsSucceeded0_32, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_63_63);
        switch (BuildDepsSucceeded0_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              BuildDepsSucceeded1_35 = (MR_Integer) 0;
              STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_63_63;
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = (ObjectTargetType_21 == (MR_Word) ((MR_Unsigned) 48U));
              if (succeeded)
              {
                MR_Word BuildJavaSucceeded_33;
                MR_Word STATE_VARIABLE_Info_65_65;

                make__program_target__make_java_files_8_p_0(Globals_8, MainModuleName_13, ObjModules_24, &BuildJavaSucceeded_33, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_65_65);
                switch (BuildJavaSucceeded_33) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      BuildDepsSucceeded1_35 = (MR_Integer) 0;
                      STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_65_65;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NoRebuildGlobals_34;

                      libs__globals__set_option_4_p_0((MR_Integer) 663, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[0])), Globals_8, &NoRebuildGlobals_34);
                      make__build__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_17, (MR_Word) (&make__program_target_scalar_common_2[15]), NoRebuildGlobals_34, ObjTargets_27, &BuildDepsSucceeded1_35, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_71_71);
                    }
                    break;
                }
              }
              else
                make__build__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_17, (MR_Word) (&make__program_target_scalar_common_2[16]), Globals_8, ObjTargets_27, &BuildDepsSucceeded1_35, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_71_71);
            }
            break;
        }
        switch (BuildDepsSucceeded1_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              BuildDepsSucceeded_31 = (MR_Integer) 0;
              STATE_VARIABLE_Info_77_77 = STATE_VARIABLE_Info_71_71;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box conv13_STATE_VARIABLE_Info_77_77;
              MR_Box conv12_STATE_VARIABLE_IO_78_78;

              make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_17, (MR_Word) (&make__program_target_scalar_common_2[17]), Globals_8, ForeignObjTargets_29, &BuildDepsSucceeded_31, ((MR_Box) (STATE_VARIABLE_Info_71_71)), &conv13_STATE_VARIABLE_Info_77_77, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_78_78);
              STATE_VARIABLE_Info_77_77 = ((MR_Word) (conv13_STATE_VARIABLE_Info_77_77));
            }
            break;
        }
      }
      make__util__linked_target_file_name_6_p_0(Globals_8, MainModuleName_13, FileType_14, &OutputFileName_36);
      Var_83 = mercury__dir__this_directory_0_f_0();
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      make__util__get_file_timestamp_7_p_0(Var_80, OutputFileName_36, &MaybeTimestamp_37, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_81_81);
      make__dependencies__check_dependencies_10_p_0(Globals_8, OutputFileName_36, MaybeTimestamp_37, BuildDepsSucceeded_31, ObjTargets_27, &BuildDepsResult_38, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_85_85);
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
        MR_Word STATE_VARIABLE_Info_89_89;
        MR_Word STATE_VARIABLE_Info_93_93;
        MR_Box conv15_STATE_VARIABLE_Info_46;

        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 70, &VeryVerbose_39);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_40);
        make__build__prepare_to_redirect_output_6_p_0(MainModuleName_13, &RedirectResult_41, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_89_89);
        if ((RedirectResult_41 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Succeeded0_42 = (MR_Integer) 0;
          STATE_VARIABLE_Info_93_93 = STATE_VARIABLE_Info_89_89;
        }
        else
        {
          MR_Word ErrorStream_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RedirectResult_41, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Info_91_91;

          make__program_target__build_linked_target_17_p_0(MainModuleName_13, FileType_14, OutputFileName_36, MaybeTimestamp_37, AllModules_16, ObjModules_24, CompilationTarget_19, PIC_18, DepsSucceeded_15, BuildDepsResult_38, Globals_8, ErrorStream_43, &Succeeded0_42, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_91_91);
          make__build__unredirect_output_7_p_0(Globals_8, MainModuleName_13, ErrorStream_43, STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_93_93);
        }
        {
          Cleanup_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Cleanup_44, 0) = ((MR_Box) (&make__program_target_scalar_common_8[9]));
          MR_hl_field(MR_mktag(0), Cleanup_44, 1) = ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_6));
          MR_hl_field(MR_mktag(0), Cleanup_44, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Cleanup_44, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(MR_mktag(0), Cleanup_44, 4) = ((MR_Box) (MainModuleName_13));
          MR_hl_field(MR_mktag(0), Cleanup_44, 5) = ((MR_Box) (FileType_14));
          MR_hl_field(MR_mktag(0), Cleanup_44, 6) = ((MR_Box) (OutputFileName_36));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_39, Cookie_40, Cleanup_44, Succeeded0_42, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_93_93)), &conv15_STATE_VARIABLE_Info_46);
        *STATE_VARIABLE_Info_46 = ((MR_Word) (conv15_STATE_VARIABLE_Info_46));
      }
      else
      {
        *Succeeded_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_85_85;
      }
    }
  }
}

static void MR_CALL 
make__program_target__make_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Timestamps_9;

    make__program_target__delete_java_class_timestamps_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Timestamps_9);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Timestamps_9));
  }
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
      MR_Box conv1_Timestamps_19;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Integer Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Unsigned packed_word_1;

      make__program_target__build_java_files_8_p_0(Globals_9, MainModuleName_10, OutOfDateModules_15, Succeeded_12, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_26_26);
      Timestamps0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 1))));
      Var_29 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]));
      mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__program_target_scalar_common_2[3]), (MR_Word) (&make__program_target_scalar_common_2[13]), Timestamps0_18, ((MR_Box) (Var_29)), &conv1_Timestamps_19);
      Timestamps_19 = ((MR_Word) (conv1_Timestamps_19));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 0))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 2))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 4))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 5))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 6))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 7))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 8))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 9))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 10))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 11))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 12))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 13)));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 14))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 15))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 16))));
      Var_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 17))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 18))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 19))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_21 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Timestamps_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_71));
      }
    }
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__6_6;

    backend_libs__compile_target_code__compile_java_files_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &conv3_HeadVar__6_6);
    *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__6_6;

    parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word ModuleNames_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word JavaFiles_15;
    MR_Word RedirectResult_16;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Box conv1_STATE_VARIABLE_IO_26_26;

    make__util__verbose_make_msg_4_p_0(Globals_9, (MR_Word) (&make__program_target_scalar_common_3[1]));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&make__program_target_scalar_common_8[6]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (make__program_target__build_java_files_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_java_files\'/8"));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[1])));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, ModuleNames_11, &JavaFiles_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
    make__build__prepare_to_redirect_output_6_p_0(MainModuleName_10, &RedirectResult_16, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_32_32);
    if ((RedirectResult_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_32_32;
    }
    else
    {
      MR_Word ErrorStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RedirectResult_16, (MR_Integer) 0))));
      MR_String HeadJavaFile_57;
      MR_Word TailJavaFiles_58;
      MR_Word ProgressStream_60;
      MR_Word Var_62;
      MR_Box conv2_HeadJavaFile_57;

      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), JavaFiles_15, &conv2_HeadJavaFile_57, &TailJavaFiles_58);
      HeadJavaFile_57 = ((MR_String) (conv2_HeadJavaFile_57));
      mercury__io__output_stream_3_p_0(&ProgressStream_60);
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&make__program_target_scalar_common_8[7]));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (make__program_target__build_java_files_8_p_0_3));
        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (ProgressStream_60));
        MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (ErrorStream_17));
        MR_hl_field(MR_mktag(0), Var_62, 6) = ((MR_Box) (HeadJavaFile_57));
        MR_hl_field(MR_mktag(0), Var_62, 7) = ((MR_Box) (TailJavaFiles_58));
      }
      libs__process_util__call_in_forked_process_4_p_0(Var_62, Succeeded_12);
      make__build__unredirect_output_7_p_0(Globals_9, MainModuleName_10, ErrorStream_17, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_19);
    }
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
  {
    MR_bool succeeded;

    if ((ObjModules_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *OutOfDateModules_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ObjModules_9, (MR_Integer) 0))));
      MR_Word ModuleNames_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ObjModules_9, (MR_Integer) 1))));
      MR_Word OutOfDateModules0_15;
      MR_Word JavaTarget_16;
      MR_Word ClassTarget_17;
      MR_Word MaybeJavaTimestamp_18;
      MR_Word MaybeClassTimestamp_19;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Word JavaTimestamp_20;
      MR_Word ClassTimestamp_21;
      MR_Word Var_37;

      make__program_target__out_of_date_java_modules_7_p_0(Globals_8, ModuleNames_14, &OutOfDateModules0_15, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
      {
        JavaTarget_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), JavaTarget_16, 0) = ((MR_Box) (ModuleName_13));
        MR_hl_field(MR_mktag(0), JavaTarget_16, 1) = ((MR_Box) ((MR_Unsigned) 44U));
      }
      {
        ClassTarget_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassTarget_17, 0) = ((MR_Box) (ModuleName_13));
        MR_hl_field(MR_mktag(0), ClassTarget_17, 1) = ((MR_Box) ((MR_Unsigned) 48U));
      }
      make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, JavaTarget_16, &MaybeJavaTimestamp_18, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_31_31);
      make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, ClassTarget_17, &MaybeClassTimestamp_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_23);
      succeeded = ((MR_tag((MR_Word) MaybeJavaTimestamp_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        JavaTimestamp_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeJavaTimestamp_18, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeClassTimestamp_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          ClassTimestamp_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeClassTimestamp_19, (MR_Integer) 0))));
          libs__timestamp____Compare____timestamp_0_0(&Var_37, ClassTimestamp_21, JavaTimestamp_20);
          succeeded = (Var_37 != (MR_Integer) 1);
        }
      }
      if (succeeded)
        *OutOfDateModules_10 = OutOfDateModules0_15;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *OutOfDateModules_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutOfDateModules0_15));
        }
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
  {
    MR_Word MaybePreLinkCommand_33;

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_28, (MR_Integer) 669, &MaybePreLinkCommand_33);
    if ((MaybePreLinkCommand_33 == (MR_Word) ((MR_Unsigned) 0U)))
      make__program_target__build_linked_target_2_17_p_0(Globals_28, MainModuleName_18, FileType_19, OutputFileName_20, MaybeTimestamp_21, AllModules_22, ObjModules_23, CompilationTarget_24, PIC_25, DepsSucceeded_26, BuildDepsResult_27, ErrorStream_29, Succeeded_30, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
    else
    {
      MR_String PreLinkCommand_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePreLinkCommand_33, (MR_Integer) 0))));
      MR_String CommandString_35;
      MR_Word ProgressStream_37;
      MR_Word Var_44;
      MR_Word PreLinkSucceeded_52;

      Var_44 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_22);
      backend_libs__compile_target_code__make_all_module_command_6_p_0(PreLinkCommand_34, MainModuleName_18, Var_44, &CommandString_35);
      mercury__io__output_stream_3_p_0(&ProgressStream_37);
      parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_28, ProgressStream_37, ErrorStream_29, ProgressStream_37, (MR_Integer) 0, CommandString_35, &PreLinkSucceeded_52);
      switch (PreLinkSucceeded_52) {
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
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_HeadVar__7_7;

    backend_libs__compile_target_code__link_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), &conv16_HeadVar__7_7);
    *wrapper_arg_1 = ((MR_Box) (conv16_HeadVar__7_7));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv14_HeadVar__6_6;

    parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv14_HeadVar__6_6);
    *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__6_6));
  }
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv13_LambdaHeadVar__2_123;

    conv13_LambdaHeadVar__2_123 = make__program_target__IntroducedFrom__func__build_linked_target_2__595__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv13_LambdaHeadVar__2_123));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_5(
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
    MR_Word conv10_LambdaHeadVar__2_110;
    MR_Word conv9_LambdaHeadVar__4_112;

    make__program_target__IntroducedFrom__pred__build_linked_target_2__579__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_LambdaHeadVar__2_110, ((MR_Word) (wrapper_arg_3)), &conv9_LambdaHeadVar__4_112);
    *wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_110));
    *wrapper_arg_4 = ((MR_Box) (conv9_LambdaHeadVar__4_112));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__build_linked_target_2__527__1_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_3(
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
    MR_Word conv6_HeadVar__3_3;
    MR_Word conv5_HeadVar__5_5;

    make__util__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv6_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv5_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv5_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_95;

    conv2_LambdaHeadVar__2_95 = make__program_target__IntroducedFrom__func__build_linked_target_2__515__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_95));
    return wrapper_arg_2;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    make__dependencies__dependency_status_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
  }
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
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76)
{
  {
    MR_bool succeeded;
    MR_Word LinkObjects_33;
    MR_Word NoLinkObjsGlobals_34;
    MR_Word ProgressStream_36;
    MR_Word AllModulesList_37;
    MR_Word InitObjects_42;
    MR_Word DepsResult2_43;
    MR_Word ObjectsToCheck_44;
    MR_Word ExtraObjStatus_46;
    MR_Word DepsResult3_47;
    MR_Word BuildDepsSucceeded_48;
    MR_Word ExtraObjectTimestamps_49;
    MR_Word ExtraObjectDepsResult_50;
    MR_Word STATE_VARIABLE_Info_85_85;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word STATE_VARIABLE_Info_91_91;
    MR_Word Var_97;
    MR_Word STATE_VARIABLE_Info_98_98;
    MR_Word Var_100;
    MR_String Var_101;
    MR_Box conv4_STATE_VARIABLE_Info_91_91;
    MR_Box conv3_STATE_VARIABLE_IO_92_92;
    MR_Box conv8_STATE_VARIABLE_Info_98_98;
    MR_Box conv7_STATE_VARIABLE_IO_99_99;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_18, (MR_Integer) 584, &LinkObjects_33);
    libs__globals__set_option_4_p_0((MR_Integer) 584, (MR_Word) (MR_mkword(MR_mktag(3), &make__program_target_scalar_common_1[7])), Globals_18, &NoLinkObjsGlobals_34);
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
          DepsResult2_43 = BuildDepsResult_28;
          InitObjects_42 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_85_85 = STATE_VARIABLE_Info_0_75;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word InitObjectResult1_40;

          backend_libs__compile_target_code__make_init_obj_file_8_p_0(NoLinkObjsGlobals_34, ProgressStream_36, ErrorStream_29, MainModuleName_19, AllModulesList_37, &InitObjectResult1_40);
          if ((InitObjectResult1_40 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            DepsResult2_43 = (MR_Integer) 2;
            InitObjects_42 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_85_85 = STATE_VARIABLE_Info_0_75;
          }
          else
          {
            MR_String InitObject_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), InitObjectResult1_40, (MR_Integer) 0))));
            MR_Word Var_86;
            MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 1))));
            MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 0))));
            MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 2))));
            MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 3))));
            MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 4))));
            MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 5))));
            MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 6))));
            MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 7))));
            MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 8))));
            MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 9))));
            MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 10))));
            MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 11))));
            MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 12))));
            MR_Word Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 14))));
            MR_Word Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 15))));
            MR_Word Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 16))));
            MR_Integer Var_179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 17))));
            MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 18))));
            MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 19))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_75, (MR_Integer) 13)));

            Var_86 = mercury__map__delete_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), Var_87, ((MR_Box) (InitObject_41)));
            {
              STATE_VARIABLE_Info_85_85 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 0) = ((MR_Box) (Var_162));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 1) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 2) = ((MR_Box) (Var_163));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 3) = ((MR_Box) (Var_164));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 4) = ((MR_Box) (Var_165));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 5) = ((MR_Box) (Var_166));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 6) = ((MR_Box) (Var_167));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 7) = ((MR_Box) (Var_168));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 8) = ((MR_Box) (Var_169));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 9) = ((MR_Box) (Var_170));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 10) = ((MR_Box) (Var_171));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 11) = ((MR_Box) (Var_172));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 12) = ((MR_Box) (Var_173));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 13) = (MR_Box) (packed_word_0);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 14) = ((MR_Box) (Var_176));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 15) = ((MR_Box) (Var_177));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 16) = ((MR_Box) (Var_178));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 17) = ((MR_Box) (Var_179));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 18) = ((MR_Box) (Var_180));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_85_85, 19) = ((MR_Box) (Var_181));
            }
            {
              InitObjects_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InitObjects_42, 0) = ((MR_Box) (InitObject_41));
              MR_hl_field(MR_mktag(1), InitObjects_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            DepsResult2_43 = BuildDepsResult_28;
          }
        }
        break;
    }
    ObjectsToCheck_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_42, LinkObjects_33);
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&make__program_target_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
    }
    Var_90 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__program_target_scalar_common_2[10]), ObjectsToCheck_44);
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_89, Var_90, &ExtraObjStatus_46, ((MR_Box) (STATE_VARIABLE_Info_85_85)), &conv4_STATE_VARIABLE_Info_91_91, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_92_92);
    STATE_VARIABLE_Info_91_91 = ((MR_Word) (conv4_STATE_VARIABLE_Info_91_91));
    succeeded = mercury__list__member_2_p_0((MR_Word) (&make__make__type_ctor_info_dependency_status_0), ((MR_Box) ((MR_Integer) 3)), ExtraObjStatus_46);
    if (succeeded)
      DepsResult3_47 = (MR_Integer) 2;
    else
      DepsResult3_47 = DepsResult2_43;
    succeeded = (DepsResult3_47 == (MR_Integer) 2);
    if (succeeded)
      BuildDepsSucceeded_48 = (MR_Integer) 0;
    else
      BuildDepsSucceeded_48 = (MR_Integer) 1;
    Var_101 = mercury__dir__this_directory_0_f_0();
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&make__program_target_scalar_common_9[5]));
      MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_3));
      MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Var_100));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, ObjectsToCheck_44, &ExtraObjectTimestamps_49, ((MR_Box) (STATE_VARIABLE_Info_91_91)), &conv8_STATE_VARIABLE_Info_98_98, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_99_99);
    STATE_VARIABLE_Info_98_98 = ((MR_Word) (conv8_STATE_VARIABLE_Info_98_98));
    make__dependencies__check_dependency_timestamps_10_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NoLinkObjsGlobals_34, OutputFileName_21, MaybeTimestamp_22, BuildDepsSucceeded_48, ObjectsToCheck_44, (MR_Word) (&make__program_target_scalar_common_2[11]), ExtraObjectTimestamps_49, &ExtraObjectDepsResult_50);
    switch (DepsSucceeded_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          make__util__file_error_4_p_0(STATE_VARIABLE_Info_98_98, OutputFileName_21);
          *Succeeded_30 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_98_98;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DepsResult_323;

          switch (DepsResult3_47) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              DepsResult_323 = DepsResult3_47;
              break;
            case (MR_Integer) 1:
              DepsResult_323 = DepsResult3_47;
              break;
            case (MR_Integer) 0:
              DepsResult_323 = ExtraObjectDepsResult_50;
              break;
          }
          switch (DepsResult_323) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                make__util__file_error_4_p_0(STATE_VARIABLE_Info_98_98, OutputFileName_21);
                *Succeeded_30 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_98_98;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ExtraForeignFiles_62;
                MR_Word ForeignObjects_63;
                MR_Word ObjOtherExtToUse_67;
                MR_Word ObjList_69;
                MR_Word AllObjects_70;
                MR_Word CmdLineTargets0_71;
                MR_Word CmdLineTargets_72;
                MR_Word Var_106;
                MR_Word STATE_VARIABLE_Info_107_107;
                MR_Word Var_124;
                MR_Word Var_127;
                MR_Word Var_131;
                MR_Word Var_132;
                MR_Word Var_133;
                MR_Word Var_134;
                MR_Word Var_136;
                MR_Word Var_137;
                MR_Word STATE_VARIABLE_Info_138_138;
                MR_Word Var_203;
                MR_Word Var_204;
                MR_Word Var_205;
                MR_Word Var_206;
                MR_Word Var_207;
                MR_Word Var_208;
                MR_Word Var_209;
                MR_Word Var_210;
                MR_Word Var_211;
                MR_Word Var_212;
                MR_Word Var_213;
                MR_Word Var_214;
                MR_Word Var_215;
                MR_Word Var_218;
                MR_Word Var_219;
                MR_Integer Var_220;
                MR_Word Var_221;
                MR_Word Var_222;
                MR_Word Var_224;
                MR_Box conv12_STATE_VARIABLE_Info_107_107;
                MR_Box conv11_STATE_VARIABLE_IO_108_108;
                MR_Box conv15_STATE_VARIABLE_IO_128_128;
                MR_Unsigned packed_word_1;

                make__util__maybe_make_linked_target_message_4_p_0(NoLinkObjsGlobals_34, OutputFileName_21);
                {
                  Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&make__program_target_scalar_common_8[5]));
                  MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (Globals_18));
                  MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (PIC_26));
                }
                mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, AllModulesList_37, &ExtraForeignFiles_62, ((MR_Box) (STATE_VARIABLE_Info_98_98)), &conv12_STATE_VARIABLE_Info_107_107, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_108_108);
                STATE_VARIABLE_Info_107_107 = ((MR_Word) (conv12_STATE_VARIABLE_Info_107_107));
                Var_124 = mercury__list__condense_1_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), ExtraForeignFiles_62);
                ForeignObjects_63 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[12]), Var_124);
                switch (CompilationTarget_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    backend_libs__compile_target_code__pic_object_file_extension_3_p_0(NoLinkObjsGlobals_34, PIC_26, &ObjOtherExtToUse_67);
                    break;
                  case (MR_Integer) 1:
                    ObjOtherExtToUse_67 = (MR_Word) (((MR_Box) ((MR_String) ".cs")));
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String ObjExtToUseStr_68;

                      libs__globals__lookup_string_option_3_p_0(NoLinkObjsGlobals_34, (MR_Integer) 562, &ObjExtToUseStr_68);
                      ObjOtherExtToUse_67 = (MR_Word) (ObjExtToUseStr_68);
                    }
                    break;
                }
                {
                  Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (ObjOtherExtToUse_67));
                }
                {
                  Var_127 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (&make__program_target_scalar_common_8[6]));
                  MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_7));
                  MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
                  MR_hl_field(MR_mktag(0), Var_127, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_linked_target_2\'/17"));
                  MR_hl_field(MR_mktag(0), Var_127, 5) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_127, 6) = ((MR_Box) (Var_131));
                }
                mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_127, ObjModules_24, &ObjList_69, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_128_128);
                Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjects_63, LinkObjects_33);
                Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjList_69, Var_133);
                AllObjects_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_42, Var_132);
                {
                  Var_134 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&make__program_target_scalar_common_10[4]));
                  MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_8));
                  MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
                  MR_hl_field(MR_mktag(0), Var_134, 4) = ((MR_Box) (ProgressStream_36));
                  MR_hl_field(MR_mktag(0), Var_134, 5) = ((MR_Box) (ErrorStream_29));
                  MR_hl_field(MR_mktag(0), Var_134, 6) = ((MR_Box) (FileType_20));
                  MR_hl_field(MR_mktag(0), Var_134, 7) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(MR_mktag(0), Var_134, 8) = ((MR_Box) (AllObjects_70));
                }
                libs__process_util__call_in_forked_process_4_p_0(Var_134, Succeeded_30);
                Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 0))));
                Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 1))));
                Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 2))));
                Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 3))));
                Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 4))));
                Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 5))));
                Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 6))));
                Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 7))));
                Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 8))));
                Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 9))));
                Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 10))));
                Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 11))));
                Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 12))));
                packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 13)));
                Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 14))));
                Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 15))));
                CmdLineTargets0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 16))));
                Var_220 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 17))));
                Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 18))));
                Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_107_107, (MR_Integer) 19))));
                {
                  Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_137, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
                }
                {
                  Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (Var_137));
                }
                mercury__set__delete_3_p_0((MR_Word) (&make__program_target_scalar_common_2[2]), ((MR_Box) (Var_136)), CmdLineTargets0_71, &CmdLineTargets_72);
                Var_224 = Var_204;
                {
                  STATE_VARIABLE_Info_138_138 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 0) = ((MR_Box) (Var_203));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 1) = ((MR_Box) (Var_204));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 2) = ((MR_Box) (Var_205));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 3) = ((MR_Box) (Var_206));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 4) = ((MR_Box) (Var_207));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 5) = ((MR_Box) (Var_208));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 6) = ((MR_Box) (Var_209));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 7) = ((MR_Box) (Var_210));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 8) = ((MR_Box) (Var_211));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 9) = ((MR_Box) (Var_212));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 10) = ((MR_Box) (Var_213));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 11) = ((MR_Box) (Var_214));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 12) = ((MR_Box) (Var_215));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 13) = (MR_Box) (packed_word_1);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 14) = ((MR_Box) (Var_218));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 15) = ((MR_Box) (Var_219));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 16) = ((MR_Box) (CmdLineTargets_72));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 17) = ((MR_Box) (Var_220));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 18) = ((MR_Box) (Var_221));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 19) = ((MR_Box) (Var_222));
                }
                switch (*Succeeded_30) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      make__util__file_error_4_p_0(STATE_VARIABLE_Info_138_138, OutputFileName_21);
                      *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_138_138;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FileTimestamps_74;

                      mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (OutputFileName_21)), Var_224, &FileTimestamps_74);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
                        *STATE_VARIABLE_Info_76 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_203));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileTimestamps_74));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_205));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_206));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_207));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_208));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_209));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_210));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_211));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_212));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_213));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_214));
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_215));
                        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_218));
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_219));
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (CmdLineTargets_72));
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_220));
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_221));
                        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_222));
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word MsgTarget_53;
                MR_Word UseGradeSubdirs_54;
                MR_Word Var_141;

                {
                  Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_141, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
                }
                {
                  MsgTarget_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MsgTarget_53, 0) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(MR_mktag(0), MsgTarget_53, 1) = ((MR_Box) (Var_141));
                }
                libs__globals__lookup_bool_option_3_p_0(NoLinkObjsGlobals_34, (MR_Integer) 686, &UseGradeSubdirs_54);
                switch (UseGradeSubdirs_54) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      make__util__maybe_warn_up_to_date_target_6_p_0(NoLinkObjsGlobals_34, MsgTarget_53, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_76);
                      *Succeeded_30 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MadeSymlinkOrCopy_55;

                      backend_libs__compile_target_code__post_link_make_symlink_or_copy_9_p_0(NoLinkObjsGlobals_34, ProgressStream_36, ErrorStream_29, FileType_20, MainModuleName_19, Succeeded_30, &MadeSymlinkOrCopy_55);
                      switch (MadeSymlinkOrCopy_55) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          make__util__maybe_warn_up_to_date_target_6_p_0(NoLinkObjsGlobals_34, MsgTarget_53, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_76);
                          break;
                        case (MR_Integer) 1:
                          {
                            make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(NoLinkObjsGlobals_34, MsgTarget_53);
                            *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_98_98;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_40;

    make__program_target__IntroducedFrom__pred__order_target_modules__335__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_40);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_40));
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Res_8;

    make__program_target__compare_paired_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Res_8);
    *wrapper_arg_3 = ((MR_Box) (conv4_Res_8));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_STATE_VARIABLE_Info_18;

    make__program_target__pair_module_with_timestamp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_18);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word Modules_9,
  MR_Word * OrderedModules_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
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
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (make__program_target__order_target_modules_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Globals_8));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Modules_9, &PairedModules_14, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv3_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_19);
          *STATE_VARIABLE_Info_17 = ((MR_Word) (conv3_STATE_VARIABLE_Info_17));
          mercury__list__sort_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__program_target_scalar_common_2[8]), PairedModules_14, &OrderedPairs_15);
          mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[9]), OrderedPairs_15, OrderedModules_10);
        }
        break;
    }
  }
}

void MR_CALL 
make__program_target__make_misc_target_7_p_0(
  MR_Word Globals_8,
  MR_Word HeadVar__2_2,
  MR_Word * Succeeded_11,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word MainModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TargetType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word DetectedGradeFlags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 3))));
    MR_Word OptionVariables_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 5))));
    MR_Word OptionArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 4))));
    MR_Word MayBuild_18;

    make__build__setup_for_build_with_module_options_10_p_0(Globals_8, (MR_Integer) 1, MainModuleName_9, DetectedGradeFlags_14, OptionVariables_15, OptionArgs_16, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_18);
    if (((MR_tag((MR_Word) MayBuild_18)) == (MR_Integer) 1))
    {
      MR_Word BuildGlobals_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_18, (MR_Integer) 1))));

      make__program_target__make_misc_target_builder_8_p_0(BuildGlobals_20, MainModuleName_9, TargetType_10, Succeeded_11, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
    }
    else
    {
      MR_Word Specs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_18, (MR_Integer) 0))));
      MR_Word ErrorStream_23;

      libs__globals__get_error_output_stream_5_p_0(Globals_8, MainModuleName_9, &ErrorStream_23);
      parse_tree__error_util__write_error_specs_ignore_5_p_0(ErrorStream_23, Globals_8, Specs_22);
      *Succeeded_11 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
    }
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_Info_13;

    make__program_target__make_module_realclean_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_Info_13);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Info_17;

    make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_5(
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
    MR_Word conv9_HeadVar__3_3;
    MR_Word conv8_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv8_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Succeeded_12;
    MR_Word conv6_STATE_VARIABLE_Info_17;

    make__program_target__build_library_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv7_Succeeded_12, ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_17);
    *wrapper_arg_1 = ((MR_Box) (conv7_Succeeded_12));
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Succeeded_14;
    MR_Word conv4_STATE_VARIABLE_Info_20;

    make__program_target__build_analysis_files_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv5_Succeeded_14, ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_20);
    *wrapper_arg_1 = ((MR_Box) (conv5_Succeeded_14));
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__5_200;
    MR_Word conv2_HeadVar__7_202;

    make__program_target__IntroducedFrom__pred__make_misc_target_builder__847__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv3_HeadVar__5_200, ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__7_202);
    *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__5_200));
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__7_202));
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0_1(
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
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word TargetType_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_bool succeeded;
    MR_Word RebuildModuleDeps_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
    MR_Word Succeeded0_16;
    MR_Word AllModulesSet_17;
    MR_Word AllModules_18;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_34_34;
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
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Integer Var_142;
    MR_Word Var_143;
    MR_Word Var_144;

    if ((TargetType_11 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if ((TargetType_11 == (MR_Word) ((MR_Unsigned) 4U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 0))));
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 1))));
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 2))));
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 3))));
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 4))));
      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 5))));
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 6))));
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 7))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 8))));
      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 9))));
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 10))));
      MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 11))));
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 12))));
      MR_Word Var_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 13))) & (MR_Integer) 1);
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 14))));
      MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 15))));
      MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 16))));
      MR_Integer Var_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 17))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 18))));
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 19))));

      {
        STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 11) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 12) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 13) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_117)));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 14) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 15) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 16) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 17) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 18) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 19) = ((MR_Box) (Var_123));
      }
    }
    else
      STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_26;
    make__dependencies__find_reachable_local_modules_8_p_0(Globals_9, MainModuleName_10, &Succeeded0_16, &AllModulesSet_17, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_32_32);
    Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 0))));
    Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 1))));
    Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 2))));
    Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 3))));
    Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 4))));
    Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 5))));
    Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 6))));
    Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 7))));
    Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 8))));
    Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 9))));
    Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 10))));
    Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 11))));
    Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 12))));
    Var_138 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 13))) & (MR_Integer) 1);
    Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 14))));
    Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 15))));
    Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 16))));
    Var_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 17))));
    Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 18))));
    Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 19))));
    {
      STATE_VARIABLE_Info_34_34 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 0) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 1) = ((MR_Box) (Var_125));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 2) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 3) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 4) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 5) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 6) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 7) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 8) = ((MR_Box) (Var_132));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 9) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 10) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 11) = ((MR_Box) (Var_135));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 12) = ((MR_Box) (Var_136));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 13) = (MR_Box) (((((MR_Unsigned) (RebuildModuleDeps_15) << 1)) | (MR_Unsigned) (Var_138)));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 14) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 15) = ((MR_Box) (Var_140));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 16) = ((MR_Box) (Var_141));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 17) = ((MR_Box) (Var_142));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 18) = ((MR_Box) (Var_143));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 19) = ((MR_Box) (Var_144));
    }
    AllModules_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModulesSet_17);
    switch (MR_tag((MR_Word) TargetType_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_72;
              MR_Word STATE_VARIABLE_Info_73_73;
              MR_Box conv14_STATE_VARIABLE_Info_73_73;
              MR_Box conv13_STATE_VARIABLE_IO_74_74;

              *Succeeded_12 = (MR_Integer) 1;
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_8_p_0_6));
                MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Globals_9));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, AllModules_18, ((MR_Box) (STATE_VARIABLE_Info_34_34)), &conv14_STATE_VARIABLE_Info_73_73, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_74_74);
              STATE_VARIABLE_Info_73_73 = ((MR_Word) (conv14_STATE_VARIABLE_Info_73_73));
              make__program_target__remove_init_files_7_p_0(Globals_9, (MR_Integer) 70, MainModuleName_10, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_27);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Info_67_67;
              MR_Word Var_69;
              MR_Box conv17_STATE_VARIABLE_Info_27;
              MR_Box conv16_STATE_VARIABLE_IO_29;

              *Succeeded_12 = (MR_Integer) 1;
              make__program_target__make_main_module_realclean_6_p_0(Globals_9, MainModuleName_10, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_67_67);
              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
                MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_8_p_0_7));
                MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Globals_9));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, AllModules_18, ((MR_Box) (STATE_VARIABLE_Info_67_67)), &conv17_STATE_VARIABLE_Info_27, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_29);
              *STATE_VARIABLE_Info_27 = ((MR_Word) (conv17_STATE_VARIABLE_Info_27));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_54;

              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_10[3]));
                MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Globals_9));
                MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (MainModuleName_10));
                MR_hl_field(MR_mktag(0), Var_54, 5) = ((MR_Box) (AllModules_18));
                MR_hl_field(MR_mktag(0), Var_54, 6) = ((MR_Box) (Succeeded0_16));
              }
              make__program_target__maybe_with_analysis_cache_dir_7_p_0(Globals_9, Var_54, Succeeded_12, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_27);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word IntSucceeded_24;
              MR_Word STATE_VARIABLE_Info_49_49;

              make__program_target__make_all_interface_files_7_p_0(Globals_9, AllModules_18, &IntSucceeded_24, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_49_49);
              switch (IntSucceeded_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *Succeeded_12 = (MR_Integer) 0;
                    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_49_49;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_51;

                    {
                      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&make__program_target_scalar_common_8[4]));
                      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_8_p_0_4));
                      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (MainModuleName_10));
                      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (AllModules_18));
                      MR_hl_field(MR_mktag(0), Var_51, 5) = ((MR_Box) (Globals_9));
                    }
                    make__program_target__maybe_with_analysis_cache_dir_7_p_0(Globals_9, Var_51, Succeeded_12, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_27);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word LibSucceeded_25;
              MR_Word Var_43;
              MR_Word STATE_VARIABLE_Info_44_44;

              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (MainModuleName_10));
                MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              make__program_target__make_misc_target_7_p_0(Globals_9, Var_43, &LibSucceeded_25, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_44_44);
              switch (LibSucceeded_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *Succeeded_12 = (MR_Integer) 0;
                    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_44_44;
                  }
                  break;
                case (MR_Integer) 1:
                  make__program_target__install_library_7_p_0(Globals_9, MainModuleName_10, Succeeded_12, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_27);
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_Info_36_36;
              MR_Word TargetModules_80;
              MR_Word KeepGoing_81;

              make__program_target__get_target_modules_8_p_0(Globals_9, (MR_Word) ((MR_Unsigned) 52U), AllModules_18, &TargetModules_80, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_36_36);
              KeepGoing_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, (MR_Integer) 13))) & (MR_Integer) 1);
              succeeded = (Succeeded0_16 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (KeepGoing_81 == (MR_Integer) 0);
              if (succeeded)
              {
                *Succeeded_12 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_36_36;
              }
              else
              {
                MR_Word Var_39;
                MR_Word Succeeded1_78;
                MR_Box conv11_STATE_VARIABLE_Info_27;
                MR_Box conv10_STATE_VARIABLE_IO_29;

                Var_39 = make__util__make_dependency_list_2_f_0(TargetModules_80, (MR_Word) ((MR_Unsigned) 52U));
                make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_81, (MR_Word) (&make__program_target_scalar_common_2[7]), Globals_9, Var_39, &Succeeded1_78, ((MR_Box) (STATE_VARIABLE_Info_36_36)), &conv11_STATE_VARIABLE_Info_27, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_29);
                *STATE_VARIABLE_Info_27 = ((MR_Word) (conv11_STATE_VARIABLE_Info_27));
                *Succeeded_12 = libs__maybe_succeeded__and_2_f_0(Succeeded0_16, Succeeded1_78);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleTargetType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetType_11, (MR_Integer) 0))));
          MR_Word TargetModules_20;
          MR_Word KeepGoing_21;
          MR_Word STATE_VARIABLE_Info_57_57;

          make__program_target__get_target_modules_8_p_0(Globals_9, ModuleTargetType_19, AllModules_18, &TargetModules_20, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_57_57);
          KeepGoing_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 13))) & (MR_Integer) 1);
          succeeded = (Succeeded0_16 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (KeepGoing_21 == (MR_Integer) 0);
          if (succeeded)
          {
            *Succeeded_12 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_57_57;
          }
          else
          {
            MR_Word Succeeded1_22;
            MR_Word STATE_VARIABLE_Info_59_59;

            make__program_target__make_all_interface_files_7_p_0(Globals_9, AllModules_18, &Succeeded1_22, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_59_59);
            succeeded = (Succeeded1_22 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (KeepGoing_21 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_12 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_59_59;
            }
            else
            {
              MR_Word Succeeded2_23;
              MR_Word Var_61;
              MR_Word Var_65;
              MR_Word Var_66;

              Var_65 = make__util__make_dependency_list_2_f_0(TargetModules_20, ModuleTargetType_19);
              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_10[2]));
                MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_8_p_0_2));
                MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Globals_9));
                MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (KeepGoing_21));
                MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (&make__program_target_scalar_common_2[6]));
                MR_hl_field(MR_mktag(0), Var_61, 6) = ((MR_Box) (Var_65));
              }
              make__program_target__maybe_with_analysis_cache_dir_7_p_0(Globals_9, Var_61, &Succeeded2_23, STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_27);
              Var_66 = libs__maybe_succeeded__and_2_f_0(Succeeded0_16, Succeeded1_22);
              *Succeeded_12 = libs__maybe_succeeded__and_2_f_0(Var_66, Succeeded2_23);
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__5_5;

    make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__4_4;

    make__util__linked_target_file_name_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__4_4;

    make__util__linked_target_file_name_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__make_main_module_realclean__1947__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word LinkedTargetTypes_11;
    MR_Word FileNames_12;
    MR_Word NoSubdirGlobals_13;
    MR_Word ThisDirFileNames_14;
    MR_String ThisDirInitFileName_15;
    MR_Word Var_20;
    MR_Word Var_46;
    MR_Word Var_51;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_Info_61_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Info_69_69;
    MR_Box conv1_STATE_VARIABLE_IO_47_47;
    MR_Box conv3_STATE_VARIABLE_IO_52_52;
    MR_Box conv6_STATE_VARIABLE_Info_61_61;
    MR_Box conv5_STATE_VARIABLE_IO_62_62;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleName_8));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_20);
    LinkedTargetTypes_11 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[40]));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&make__program_target_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, LinkedTargetTypes_11, &FileNames_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
    libs__globals__set_option_4_p_0((MR_Integer) 686, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[0])), Globals_7, &NoSubdirGlobals_13);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&make__program_target_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (NoSubdirGlobals_13));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, LinkedTargetTypes_11, &ThisDirFileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_52_52);
    parse_tree__file_names__module_name_to_file_name_8_p_0(NoSubdirGlobals_13, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[3])), ModuleName_8, &ThisDirInitFileName_15);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_4));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) ((MR_Integer) 70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ThisDirInitFileName_15));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_14, Var_65);
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_12, Var_64);
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, Var_60, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv6_STATE_VARIABLE_Info_61_61, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_62_62);
    STATE_VARIABLE_Info_61_61 = ((MR_Word) (conv6_STATE_VARIABLE_Info_61_61));
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 70, ModuleName_8, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[3])), STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_69_69);
    make__program_target__remove_init_files_7_p_0(Globals_7, (MR_Integer) 70, ModuleName_8, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
make__program_target__remove_init_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    make__util__make_remove_module_file_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__remove_init_files_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_String ObjExt_13;
    MR_String PicObjExt_14;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_String Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_String Var_36;
    MR_Box conv2_STATE_VARIABLE_Info_16;
    MR_Box conv1_STATE_VARIABLE_IO_18;

    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 553, &ObjExt_13);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 554, &PicObjExt_14);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (make__program_target__remove_init_files_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Verbose_9));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (ModuleName_10));
    }
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_13);
    Var_30 = (MR_Word) (Var_31);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
    }
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "_init", PicObjExt_14);
    Var_35 = (MR_Word) (Var_36);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[4])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_28));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Var_22, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
    *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0_2(
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
    MR_Word conv5_Succeeded_16;
    MR_Word conv4_STATE_VARIABLE_Info_45;

    make__program_target__install_library_grade_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), &conv5_Succeeded_16, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Info_45);
    *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_16));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_45));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0_1(
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
    MR_Word conv1_Succeeded_12;
    MR_Word conv0_STATE_VARIABLE_Info_30;

    make__program_target__install_ints_and_headers_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Succeeded_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_30);
    *wrapper_arg_2 = ((MR_Box) (conv1_Succeeded_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_30));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word DepsSucceeded_13;
    MR_Word AllModules0_14;
    MR_Word AllModules_15;
    MR_Word DirSucceeded_16;
    MR_Word LinkSucceeded_17;
    MR_Word STATE_VARIABLE_Info_29_29;

    make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, MainModuleName_9, &DepsSucceeded_13, &AllModules0_14, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
    AllModules_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules0_14);
    make__program_target__make_install_dirs_5_p_0(Globals_8, &DirSucceeded_16, &LinkSucceeded_17);
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
      MR_Box conv3_STATE_VARIABLE_Info_33_33;
      MR_Box conv2_STATE_VARIABLE_IO_34_34;
      MR_Word Var_38;
      MR_Word Var_39;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_8[2]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Globals_8));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (LinkSucceeded_17));
      }
      mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, AllModules_15, &IntsSucceeded_18, ((MR_Box) (STATE_VARIABLE_Info_29_29)), &conv3_STATE_VARIABLE_Info_33_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_34_34);
      STATE_VARIABLE_Info_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Info_33_33));
      make__program_target__install_extra_headers_4_p_0(Globals_8, &ExtraHdrsSucceeded_19);
      libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &Grade_20);
      make__program_target__install_library_grade_files_10_p_0(Globals_8, LinkSucceeded_17, Grade_20, MainModuleName_9, AllModules_15, &GradeSucceeded_21, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_36_36);
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ExtraHdrsSucceeded_19));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (IntsSucceeded_18));
      }
      Var_38 = libs__maybe_succeeded__and_list_1_f_0(Var_39);
      succeeded = (Var_38 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (GradeSucceeded_21 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word KeepGoing_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, (MR_Integer) 13))) & (MR_Integer) 1);
        MR_Word LibGrades0_23;
        MR_Word LibGrades_24;
        MR_Word Var_41;
        MR_Box conv7_STATE_VARIABLE_Info_26;
        MR_Box conv6_STATE_VARIABLE_IO_28;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 677, &LibGrades0_23);
        LibGrades_24 = mercury__list__delete_all_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibGrades0_23, ((MR_Box) (Grade_20)));
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (LinkSucceeded_17));
          MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (MainModuleName_9));
          MR_hl_field(MR_mktag(0), Var_41, 5) = ((MR_Box) (AllModules_15));
        }
        make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_22, Var_41, Globals_8, LibGrades_24, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_36_36)), &conv7_STATE_VARIABLE_Info_26, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_28);
        *STATE_VARIABLE_Info_26 = ((MR_Word) (conv7_STATE_VARIABLE_Info_26));
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
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_65;

    make__program_target__IntroducedFrom__pred__make_install_dirs__1821__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_65);
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_65));
  }
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_10;

    make__program_target__make_install_symlink_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_10));
  }
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0(
  MR_Word Globals_6,
  MR_Word * Result_7,
  MR_Word * LinkResult_8)
{
  {
    MR_String Prefix_10;
    MR_String LibDir_11;
    MR_Word Result1_12;
    MR_Word Result2_13;
    MR_String IntsSubdir_14;
    MR_Word Result3_15;
    MR_Word Results0_16;
    MR_Word Subdirs_17;
    MR_Word LinkResults_18;
    MR_Word Results_19;
    MR_String Var_26;
    MR_String Var_29;
    MR_String Var_32;
    MR_String Var_35;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_60;
    MR_Box conv1_STATE_VARIABLE_IO_61_61;

    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 670, &Prefix_10);
    Var_26 = mercury__dir__f_slash_2_f_0(Prefix_10, (MR_String) "lib");
    LibDir_11 = mercury__dir__f_slash_2_f_0(Var_26, (MR_String) "mercury");
    Var_29 = mercury__dir__f_slash_2_f_0(LibDir_11, (MR_String) "inc");
    mercury__dir__make_directory_4_p_0(Var_29, &Result1_12);
    Var_32 = mercury__dir__f_slash_2_f_0(LibDir_11, (MR_String) "modules");
    mercury__dir__make_directory_4_p_0(Var_32, &Result2_13);
    Var_35 = mercury__dir__f_slash_2_f_0(LibDir_11, (MR_String) "ints");
    IntsSubdir_14 = mercury__dir__f_slash_2_f_0(Var_35, (MR_String) "Mercury");
    mercury__dir__make_directory_4_p_0(IntsSubdir_14, &Result3_15);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Result3_15));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Result2_13));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Results0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Results0_16, 0) = ((MR_Box) (Result1_12));
      MR_hl_field(MR_mktag(1), Results0_16, 1) = ((MR_Box) (Var_39));
    }
    Subdirs_17 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[30]));
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&make__program_target_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (make__program_target__make_install_dirs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Globals_6));
      MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (IntsSubdir_14));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, Subdirs_17, &LinkResults_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_61_61);
    *LinkResult_8 = libs__maybe_succeeded__and_list_1_f_0(LinkResults_18);
    switch (*LinkResult_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MkDirResults_22;
          MR_Word Var_62;
          MR_Box conv3_STATE_VARIABLE_IO_63_63;

          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&make__program_target_scalar_common_11[1]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (make__program_target__make_install_dirs_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (IntsSubdir_14));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Subdirs_17, &MkDirResults_22, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_63_63);
          Results_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), Results0_16, MkDirResults_22);
        }
        break;
      case (MR_Integer) 1:
        Results_19 = Results0_16;
        break;
    }
    make__program_target__print_mkdir_errors_4_p_0(Results_19, Result_7);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_14;
    MR_Word conv0_STATE_VARIABLE_Info_34;

    make__program_target__install_grade_ints_and_headers_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Succeeded_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_34);
    *wrapper_arg_2 = ((MR_Box) (conv1_Succeeded_14));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_34));
  }
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
  {
    MR_bool succeeded;
    MR_Word DirResult_19;
    MR_Word LinkSucceeded1_20;
    MR_Word LinkSucceeded_21;

    make__program_target__make_grade_install_dirs_6_p_0(Globals_11, GradeDir_13, &DirResult_19, &LinkSucceeded1_20);
    LinkSucceeded_21 = libs__maybe_succeeded__and_2_f_0(LinkSucceeded0_12, LinkSucceeded1_20);
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

          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 1, &LibFileName_22);
          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 2, &SharedLibFileName_23);
          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 4, &DllFileName_24);
          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 6, &JarFileName_25);
          libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 670, &Prefix_26);
          succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "csharp");
          if (succeeded)
          {
            MR_String GradeLibDir_27;
            MR_String Var_48;
            MR_String Var_49;
            MR_String Var_50;

            Var_50 = mercury__dir__f_slash_2_f_0(Prefix_26, (MR_String) "lib");
            Var_49 = mercury__dir__f_slash_2_f_0(Var_50, (MR_String) "mercury");
            Var_48 = mercury__dir__f_slash_2_f_0(Var_49, (MR_String) "lib");
            GradeLibDir_27 = mercury__dir__f_slash_2_f_0(Var_48, GradeDir_13);
            make__program_target__install_file_6_p_0(Globals_11, DllFileName_24, GradeLibDir_27, &LibsSucceeded_28);
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

              Var_58 = mercury__dir__f_slash_2_f_0(Prefix_26, (MR_String) "lib");
              Var_57 = mercury__dir__f_slash_2_f_0(Var_58, (MR_String) "mercury");
              Var_56 = mercury__dir__f_slash_2_f_0(Var_57, (MR_String) "lib");
              GradeLibDir_79 = mercury__dir__f_slash_2_f_0(Var_56, GradeDir_13);
              make__program_target__install_file_6_p_0(Globals_11, JarFileName_25, GradeLibDir_79, &LibsSucceeded_28);
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
                LibsSucceeded_28 = libs__maybe_succeeded__and_2_f_0(LibSucceeded0_30, SharedLibSucceeded_31);
              }
              make__program_target__install_grade_init_6_p_0(Globals_11, GradeDir_13, ModuleName_14, &InitSucceeded_29);
            }
          }
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&make__program_target_scalar_common_10[1]));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (make__program_target__install_library_grade_files_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Globals_11));
            MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (LinkSucceeded_21));
            MR_hl_field(MR_mktag(0), Var_74, 5) = ((MR_Box) (GradeDir_13));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, AllModules_15, &IntsHeadersSucceeded_32, ((MR_Box) (STATE_VARIABLE_Info_0_33)), &conv3_STATE_VARIABLE_Info_34, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_36);
          *STATE_VARIABLE_Info_34 = ((MR_Word) (conv3_STATE_VARIABLE_Info_34));
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (InitSucceeded_29));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (IntsHeadersSucceeded_32));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (LibsSucceeded_28));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
          }
          *Succeeded_16 = libs__maybe_succeeded__and_list_1_f_0(Var_77);
        }
        break;
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_10;

    make__program_target__make_install_symlink_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_10));
  }
}

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0(
  MR_Word Globals_7,
  MR_String Grade_8,
  MR_Word * Result_9,
  MR_Word * LinkResult_10)
{
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
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Result3_19));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Result2_17));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      Results0_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Results0_20, 0) = ((MR_Box) (Result1_15));
      MR_hl_field(MR_mktag(1), Results0_20, 1) = ((MR_Box) (Var_49));
    }
    make__program_target__make_install_symlink_6_p_0(Globals_7, GradeIncSubdir_16, (MR_String) "mih", &LinkResult0_21);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (make__program_target__make_grade_install_dirs_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (GradeIntsSubdir_14));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[33])), &LinkResults_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_56_56);
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (LinkResult0_21));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (LinkResults_22));
    }
    *LinkResult_10 = libs__maybe_succeeded__and_list_1_f_0(Var_63);
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
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Result7_27));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Results0_20));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Result6_26));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Result5_25));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
          }
          {
            Results_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Results_23, 0) = ((MR_Box) (Result4_24));
            MR_hl_field(MR_mktag(1), Results_23, 1) = ((MR_Box) (Var_76));
          }
        }
        break;
      case (MR_Integer) 1:
        Results_23 = Results0_20;
        break;
    }
    make__program_target__print_mkdir_errors_4_p_0(Results_23, Result_9);
  }
}

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10)
{
  {
    MR_String LinkName_12;
    MR_String Var_15;

    Var_15 = mercury__string__f_43_43_2_f_0(Ext_9, (MR_String) "s");
    LinkName_12 = mercury__dir__f_slash_2_f_0(Subdir_8, Var_15);
    parse_tree__module_cmds__maybe_make_symlink_6_p_0(Globals_7, (MR_String) "..", LinkName_12, Succeeded_10);
  }
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
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = Var_29;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
        MR_String Var_26;
        MR_Word Var_18;

        *HeadVar__2_2 = (MR_Integer) 0;
        Var_26 = mercury__io__error_message_1_f_0(Error_15);
        mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
        mercury__io__write_string_3_p_0(Var_26);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        make__program_target__print_mkdir_errors_4_p_0(Var_29, &Var_18);
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__install_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1768__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

static void MR_CALL 
make__program_target__install_file_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word ErrorStream_14;
    MR_String Command_15;
    MR_Word Var_19;

    mercury__io__output_stream_3_p_0(&ErrorStream_14);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__program_target__install_file_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (FileName_8));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (InstallDir_9));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (ErrorStream_14));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_19);
    Command_15 = libs__file_util__make_install_file_command_3_f_0(Globals_7, FileName_8, InstallDir_9);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_7, ErrorStream_14, ErrorStream_14, ErrorStream_14, (MR_Integer) 0, Command_15, Succeeded_10);
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1768__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
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
  {
    MR_bool succeeded;
    MR_Word LibLinkages_14;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 680, &LibLinkages_14);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Linkage_9)), LibLinkages_14);
    if (succeeded)
    {
      MR_Word Succeeded0_15;
      MR_Word ErrorStream_32;
      MR_String Command_33;
      MR_Word Var_35;

      mercury__io__output_stream_3_p_0(&ErrorStream_32);
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (make__program_target__maybe_install_library_file_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (FileName_10));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (InstallDir_11));
        MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (ErrorStream_32));
      }
      make__util__verbose_make_msg_4_p_0(Globals_8, Var_35);
      Command_33 = libs__file_util__make_install_file_command_3_f_0(Globals_8, FileName_10, InstallDir_11);
      parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_8, ErrorStream_32, ErrorStream_32, ErrorStream_32, (MR_Integer) 0, Command_33, &Succeeded0_15);
      succeeded = (strcmp(Linkage_9, (MR_String) "static") == 0);
      if (succeeded)
        succeeded = (Succeeded0_15 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_String BaseFileName_16;

        BaseFileName_16 = mercury__dir__det_basename_1_f_0(FileName_10);
        make__program_target__generate_archive_index_6_p_0(Globals_8, BaseFileName_16, InstallDir_11, Succeeded_12);
      }
      else
        *Succeeded_12 = Succeeded0_15;
    }
    else
      *Succeeded_12 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__program_target__generate_archive_index_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__generate_archive_index__1894__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

static void MR_CALL 
make__program_target__generate_archive_index_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word ErrorStream_14;
    MR_String RanLibCommand_15;
    MR_String RanLibFlags_16;
    MR_String Command_17;
    MR_Word Var_21;
    MR_Word Var_38;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_String Var_42;
    MR_String Var_43;

    mercury__io__output_stream_3_p_0(&ErrorStream_14);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (make__program_target__generate_archive_index_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (FileName_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (InstallDir_9));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (ErrorStream_14));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_21);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 619, &RanLibCommand_15);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 620, &RanLibFlags_16);
    Var_39 = libs__options__quote_arg_1_f_0(RanLibCommand_15);
    Var_43 = mercury__dir__f_slash_2_f_0(InstallDir_9, FileName_8);
    Var_42 = libs__options__quote_arg_1_f_0(Var_43);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (RanLibFlags_16));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    Command_17 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_38);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_7, ErrorStream_14, ErrorStream_14, ErrorStream_14, (MR_Integer) 0, Command_17, Succeeded_10);
  }
}

static void MR_CALL 
make__program_target__install_grade_init_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1768__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

static void MR_CALL 
make__program_target__install_grade_init_6_p_0(
  MR_Word Globals_7,
  MR_String GradeDir_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10)
{
  {
    MR_String Prefix_12;
    MR_String GradeModulesDir_13;
    MR_String InitFileName_14;
    MR_String Var_18;
    MR_String Var_19;
    MR_String Var_20;
    MR_Word ErrorStream_40;
    MR_String Command_41;
    MR_Word Var_43;

    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 670, &Prefix_12);
    Var_20 = mercury__dir__f_slash_2_f_0(Prefix_12, (MR_String) "lib");
    Var_19 = mercury__dir__f_slash_2_f_0(Var_20, (MR_String) "mercury");
    Var_18 = mercury__dir__f_slash_2_f_0(Var_19, (MR_String) "modules");
    GradeModulesDir_13 = mercury__dir__f_slash_2_f_0(Var_18, GradeDir_8);
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.program_target.install_grade_init\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_4[3])), ModuleName_9, &InitFileName_14);
    mercury__io__output_stream_3_p_0(&ErrorStream_40);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (make__program_target__install_grade_init_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (InitFileName_14));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (GradeModulesDir_13));
      MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (ErrorStream_40));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_43);
    Command_41 = libs__file_util__make_install_file_command_3_f_0(Globals_7, InitFileName_14, GradeModulesDir_13);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_7, ErrorStream_40, ErrorStream_40, ErrorStream_40, (MR_Integer) 0, Command_41, Succeeded_10);
  }
}

static void MR_CALL 
make__program_target__install_extra_headers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Succeeded_15;

    make__program_target__install_extra_header_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Succeeded_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Succeeded_15));
  }
}

static void MR_CALL 
make__program_target__install_extra_headers_4_p_0(
  MR_Word Globals_5,
  MR_Word * ExtraHdrsSucceeded_6)
{
  {
    MR_Word ExtraHdrs_8;
    MR_String Prefix_9;
    MR_String IncDir_10;
    MR_String Var_15;
    MR_String Var_16;
    MR_Word Var_20;
    MR_Box conv2_ExtraHdrsSucceeded_6;
    MR_Box conv1_STATE_VARIABLE_IO_12;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 693, &ExtraHdrs_8);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 670, &Prefix_9);
    Var_16 = mercury__dir__f_slash_2_f_0(Prefix_9, (MR_String) "lib");
    Var_15 = mercury__dir__f_slash_2_f_0(Var_16, (MR_String) "mercury");
    IncDir_10 = mercury__dir__f_slash_2_f_0(Var_15, (MR_String) "inc");
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (make__program_target__install_extra_headers_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Globals_5));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (IncDir_10));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, ExtraHdrs_8, ((MR_Box) ((MR_Integer) 1)), &conv2_ExtraHdrsSucceeded_6, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12);
    *ExtraHdrsSucceeded_6 = ((MR_Word) (conv2_ExtraHdrsSucceeded_6));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_5(
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
    MR_Word conv14_HeadVar__5_101;
    MR_Word conv13_HeadVar__7_103;

    make__program_target__IntroducedFrom__pred__make_all_interface_files__931__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__5_101, ((MR_Word) (wrapper_arg_4)), &conv13_HeadVar__7_103);
    *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__5_101));
    *wrapper_arg_5 = ((MR_Box) (conv13_HeadVar__7_103));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_4(
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
    MR_Word conv12_HeadVar__3_3;
    MR_Word conv11_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv11_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv11_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_3(
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
    MR_Word conv8_HeadVar__5_83;
    MR_Word conv7_HeadVar__7_85;

    make__program_target__IntroducedFrom__pred__make_all_interface_files__926__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__5_83, ((MR_Word) (wrapper_arg_4)), &conv7_HeadVar__7_85);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__5_83));
    *wrapper_arg_5 = ((MR_Box) (conv7_HeadVar__7_85));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_2(
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
    MR_Word conv6_HeadVar__3_3;
    MR_Word conv5_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv5_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv5_HeadVar__5_5));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ParentModules_18;
    MR_Word conv0_STATE_VARIABLE_Info_20;

    make__program_target__collect_modules_with_children_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ParentModules_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ParentModules_18));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0(
  MR_Word Globals_8,
  MR_Word AllModules0_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
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
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word Var_41;
    MR_Box conv4_ParentModules_14;
    MR_Box conv3_STATE_VARIABLE_Info_30_30;
    MR_Box conv2_STATE_VARIABLE_IO_31_31;
    MR_Box conv10_STATE_VARIABLE_Info_38_38;
    MR_Box conv9_STATE_VARIABLE_IO_39_39;

    make__dependencies__remove_nested_modules_7_p_0(Globals_8, AllModules0_9, &NonnestedModules_13, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_8));
    }
    mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, NonnestedModules_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ParentModules_14, ((MR_Box) (STATE_VARIABLE_Info_26_26)), &conv3_STATE_VARIABLE_Info_30_30, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31_31);
    ParentModules_14 = ((MR_Word) (conv4_ParentModules_14));
    STATE_VARIABLE_Info_30_30 = ((MR_Word) (conv3_STATE_VARIABLE_Info_30_30));
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
    KeepGoing_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 13))) & (MR_Integer) 1);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&make__program_target_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (KeepGoing_20));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (&make__program_target_scalar_common_2[4]));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Int0s_16));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Int3s_15));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_41));
    }
    make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_20, Var_36, Globals_8, Var_37, &Succeeded0_21, ((MR_Box) (STATE_VARIABLE_Info_30_30)), &conv10_STATE_VARIABLE_Info_38_38, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_39_39);
    STATE_VARIABLE_Info_38_38 = ((MR_Word) (conv10_STATE_VARIABLE_Info_38_38));
    switch (Succeeded0_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_38_38;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_48;
          MR_Box conv16_STATE_VARIABLE_Info_23;
          MR_Box conv15_STATE_VARIABLE_IO_25;

          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&make__program_target_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_5));
            MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (KeepGoing_20));
            MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (&make__program_target_scalar_common_2[5]));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Opts_19));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Int1s_17));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_48));
          }
          make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_20, Var_43, Globals_8, Var_44, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_38_38)), &conv16_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_25);
          *STATE_VARIABLE_Info_23 = ((MR_Word) (conv16_STATE_VARIABLE_Info_23));
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__get_target_modules_8_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_TargetModules_18;
    MR_Word conv0_STATE_VARIABLE_Info_20;

    make__program_target__get_target_modules_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetModules_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetModules_18));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
make__program_target__get_target_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word TargetType_10,
  MR_Word AllModules_11,
  MR_Word * TargetModules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_bool succeeded = (TargetType_10 == (MR_Word) ((MR_Unsigned) 4U));

    if (succeeded)
    {
      MR_Word Var_19;
      MR_Box conv4_TargetModules_12;
      MR_Box conv3_STATE_VARIABLE_Info_16;
      MR_Box conv2_STATE_VARIABLE_IO_18;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__program_target__get_target_modules_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Globals_9));
      }
      mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, AllModules_11, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_TargetModules_12, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv3_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
      *TargetModules_12 = ((MR_Word) (conv4_TargetModules_12));
      *STATE_VARIABLE_Info_16 = ((MR_Word) (conv3_STATE_VARIABLE_Info_16));
    }
    else
    {
      *TargetModules_12 = AllModules_11;
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_12;
    MR_Word conv0_STATE_VARIABLE_Info_29;

    make__program_target__make_linked_target_1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv1_Succeeded_12, ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_29);
    *wrapper_arg_1 = ((MR_Box) (conv1_Succeeded_12));
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_29));
  }
}

void MR_CALL 
make__program_target__make_linked_target_7_p_0(
  MR_Word Globals_8,
  MR_Word LinkedTargetFile_9,
  MR_Word * LinkedTargetSucceeded_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word FileType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LinkedTargetFile_9, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word ExtraOptions_15 = ((&make__program_target_vector_common_7[0 + FileType_14]))->make__program_target__vector_common_type_7_0__vct_7_f_0;
    MR_Word LibLinkages_16;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 680, &LibLinkages_16);
    switch (FileType_14) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "shared")), LibLinkages_16);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "static")), LibLinkages_16);
          succeeded = !(succeeded);
        }
        break;
    }
    if (succeeded)
    {
      *LinkedTargetSucceeded_10 = (MR_Integer) 1;
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    }
    else
    {
      MR_Word LibgradeCheckSucceeded_17;

      libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_8, &LibgradeCheckSucceeded_17);
      switch (LibgradeCheckSucceeded_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *LinkedTargetSucceeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_28;

            {
              Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__program_target__make_linked_target_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_8));
              MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (LinkedTargetFile_9));
              MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (ExtraOptions_15));
            }
            make__program_target__maybe_with_analysis_cache_dir_7_p_0(Globals_8, Var_28, LinkedTargetSucceeded_10, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Info_13;

    make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv8_STATE_VARIABLE_Info_13);
    *wrapper_arg_2 = ((MR_Box) (conv8_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir_7_p_0(
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_bool succeeded;
    MR_Word IntermodAnalysis_13;
    MR_Word Caching_14;
    MR_String CacheDir0_15;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 498, &IntermodAnalysis_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 500, &Caching_14);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 707, &CacheDir0_15);
    succeeded = (IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (Caching_14 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (strcmp(CacheDir0_15, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (!(succeeded))
        {
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 4))));

          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_31);
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      MR_Box conv3_Succeeded_10;
      MR_Box conv2_STATE_VARIABLE_Info_25;
      MR_Box conv1_STATE_VARIABLE_IO_27;

      func_0(((MR_Box) (P_9)), &conv3_Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv2_STATE_VARIABLE_Info_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27);
      *Succeeded_10 = ((MR_Word) (conv3_Succeeded_10));
      *STATE_VARIABLE_Info_25 = ((MR_Word) (conv2_STATE_VARIABLE_Info_25));
    }
    else
    {
      MR_Word Succeeded0_17;
      MR_String CacheDir_18;

      make__program_target__create_analysis_cache_dir_5_p_0(Globals_8, &Succeeded0_17, &CacheDir_18);
      switch (Succeeded0_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OrigOptionArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 4))));
            MR_Word VeryVerbose_20;
            MR_Box Cookie_21;
            MR_Word Succeeded1_22;
            MR_Word Cleanup_23;
            MR_Word STATE_VARIABLE_Info_35_35;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word STATE_VARIABLE_Info_42_42;
            MR_Word STATE_VARIABLE_Info_44_44;
            MR_Word STATE_VARIABLE_Info_46_46;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Integer Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Unsigned packed_word_2;
            void MR_CALL (* func_4)(MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv7_Succeeded1_22;
            MR_Box conv6_STATE_VARIABLE_Info_42_42;
            MR_Box conv5_STATE_VARIABLE_IO_43_43;
            MR_Box conv9_STATE_VARIABLE_Info_44_44;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Integer Var_128;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Unsigned packed_word_3;

            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (CacheDir_18));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
            }
            Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_37);
            Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
            Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 1))));
            Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 2))));
            Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 3))));
            Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 5))));
            Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 6))));
            Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 7))));
            Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 8))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 9))));
            Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 10))));
            Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 11))));
            Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 12))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 13)));
            Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 14))));
            Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 15))));
            Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 16))));
            Var_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 17))));
            Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 18))));
            Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 19))));
            {
              STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (Var_96));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 9) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 10) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 11) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 12) = ((MR_Box) (Var_101));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 13) = (MR_Box) (packed_word_2);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 14) = ((MR_Box) (Var_104));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 15) = ((MR_Box) (Var_105));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 16) = ((MR_Box) (Var_106));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 17) = ((MR_Box) (Var_107));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 18) = ((MR_Box) (Var_108));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 19) = ((MR_Box) (Var_109));
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 70, &VeryVerbose_20);
            libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_21);
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
            func_4(((MR_Box) (P_9)), &conv7_Succeeded1_22, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv6_STATE_VARIABLE_Info_42_42, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_43_43);
            Succeeded1_22 = ((MR_Word) (conv7_Succeeded1_22));
            STATE_VARIABLE_Info_42_42 = ((MR_Word) (conv6_STATE_VARIABLE_Info_42_42));
            {
              Cleanup_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Cleanup_23, 0) = ((MR_Box) (&make__program_target_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Cleanup_23, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir_7_p_0_1));
              MR_hl_field(MR_mktag(0), Cleanup_23, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Cleanup_23, 3) = ((MR_Box) (Globals_8));
              MR_hl_field(MR_mktag(0), Cleanup_23, 4) = ((MR_Box) (CacheDir_18));
            }
            libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_20, Cookie_21, Cleanup_23, Succeeded1_22, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_42_42)), &conv9_STATE_VARIABLE_Info_44_44);
            STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv9_STATE_VARIABLE_Info_44_44));
            make__program_target__remove_cache_dir_6_p_0(Globals_8, CacheDir_18, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
            Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 0))));
            Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 1))));
            Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 2))));
            Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 3))));
            Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 5))));
            Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 6))));
            Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 7))));
            Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 8))));
            Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 9))));
            Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 10))));
            Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 11))));
            Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 12))));
            packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 13)));
            Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 14))));
            Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 15))));
            Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 16))));
            Var_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 17))));
            Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 18))));
            Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 19))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_25 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_112));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigOptionArgs_19));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_115));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_116));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_117));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_3);
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_125));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_127));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_130));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word Globals_7,
  MR_String CacheDir_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_11;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (CacheDir_8));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&make__program_target_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (make__program_target__remove_cache_dir_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) ((MR_String) "Removing %s\n"));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Var_20));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 74, Var_17);
    mercury__io__remove_file_recursively_4_p_0(CacheDir_8, &Var_11);
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  }
}

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0(
  MR_Word Globals_6,
  MR_Word * Succeeded_7,
  MR_String * CacheDir_8)
{
  {
    MR_Word MakeRes_10;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word UseGradeSubdirs_49;
    MR_String TargetArch_50;
    MR_Word DirComponents_52;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 686, &UseGradeSubdirs_49);
    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 704, &TargetArch_50);
    switch (UseGradeSubdirs_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DirComponents_52 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[9]));
        break;
      case (MR_Integer) 1:
        {
          MR_String Grade_51;
          MR_Word Var_60;
          MR_Word Var_61;

          libs__compute_grade__grade_directory_component_2_p_0(Globals_6, &Grade_51);
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (TargetArch_50));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[9])));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Grade_51));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            DirComponents_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirComponents_52, 0) = ((MR_Box) ((MR_String) "Mercury"));
            MR_hl_field(MR_mktag(1), DirComponents_52, 1) = ((MR_Box) (Var_60));
          }
        }
        break;
    }
    *CacheDir_8 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_52);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (*CacheDir_8));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__program_target_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__program_target__create_analysis_cache_dir_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) ((MR_String) "Creating %s\n"));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Var_19));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_6, (MR_Integer) 74, Var_16);
    mercury__dir__make_directory_4_p_0(*CacheDir_8, &MakeRes_10);
    if ((MakeRes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_7 = (MR_Integer) 1;
    else
    {
      MR_Word Error_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MakeRes_10, (MR_Integer) 0))));
      MR_String Var_29;

      Var_29 = mercury__io__error_message_1_f_0(Error_11);
      mercury__io__write_string_3_p_0((MR_String) "Error: making directory ");
      mercury__io__write_string_3_p_0(*CacheDir_8);
      mercury__io__write_string_3_p_0((MR_String) ": ");
      mercury__io__write_string_3_p_0(Var_29);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      *Succeeded_7 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
make__program_target____Unify____build0_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__program_target____Unify____build0_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
make__program_target____Compare____build0_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__program_target____Compare____build0_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__make__program_target__init(void)
{
}

void mercury__make__program_target__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_build0_1);
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
