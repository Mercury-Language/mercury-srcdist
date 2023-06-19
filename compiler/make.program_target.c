/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2023-06-19
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
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct3 make__program_target____vpti_tuple_3__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0__plain_builtin__type_ctor_info_string_0;

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
make__program_target__IntroducedFrom__pred__make_module_realclean__2248__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_clean__2162__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_main_module_realclean__2104__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_grade_clean__2089__1_4_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__generate_archive_index__2051__1_5_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__1978__1_5_p_0(
  MR_String IntsSubdir_14,
  MR_String LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_directory__1945__1_5_p_0(
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1316__1_2_p_0(
  MR_Word HeadVar__1_27,
  MR_Word * HeadVar__2_28);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1249__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word HeadVar__2_53);

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__704__1_1_f_0(
  MR_Word LambdaHeadVar__1_29);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__572__1_4_p_0(
  MR_String LambdaHeadVar__1_99,
  MR_String * LambdaHeadVar__2_100);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__561__1_1_f_0(
  MR_String LambdaHeadVar__1_90);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__441__1_3_f_0(
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_String LambdaHeadVar__1_30);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__377__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word * HeadVar__2_40);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1624__1_3_p_0(
  MR_String Grade_15);

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
make__program_target__make_module_clean_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10);

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
make__program_target__maybe_make_grade_clean_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
make__program_target__install_ints_and_headers_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
make__program_target__install_subdir_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word * Succeeded_16);

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
make__program_target__get_target_modules_2_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_TargetModules_0_17,
  MR_Word * STATE_VARIABLE_TargetModules_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Box * wrapper_arg_5);

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
  MR_Word Var_121,
  MR_Word Var_122,
  MR_Word Var_123,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
make__program_target__build_library_10_p_0(
  MR_Word MainModuleName_11,
  MR_Word AllModules_12,
  MR_Word Globals_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_52_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_52_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_121,
  MR_Word Var_122,
  MR_Word Var_123,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
make__program_target__make_linked_target_1_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkedTargetFile_12,
  MR_Word ExtraOptions_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0(
  MR_Word Var_114,
  MR_Word Var_115,
  MR_Word Var_116,
  MR_Word Var_117,
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
  MR_Word Var_114,
  MR_Word Var_115,
  MR_Word Var_116,
  MR_Word Var_117,
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
make__program_target__should_we_use_analysis_cache_dir_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__should_we_use_analysis_cache_dir_5_p_0(
  MR_Word Globals_6,
  MR_Word Info_7,
  MR_Word * UseAnalysisCacheDir_8);

static void MR_CALL 
make__program_target__remove_init_files_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

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
make__program_target__install_library_grade_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
make__program_target__maybe_install_library_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74);

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


static /* final */ const MR_Box make__program_target_scalar_common_1[63][2];

static /* final */ const MR_Box make__program_target_scalar_common_2[22][3];

static /* final */ const MR_Box make__program_target_scalar_common_3[7][5];

static /* final */ const MR_Box make__program_target_scalar_common_4[12][1];

static /* final */ const MR_Box make__program_target_scalar_common_5[9][11];

static /* final */ const MR_Box make__program_target_scalar_common_6[5][10];

static /* final */ const MR_Box make__program_target_scalar_common_7[5][6];

static /* final */ const MR_Box make__program_target_scalar_common_8[5][7];

static /* final */ const MR_Box make__program_target_scalar_common_9[5][12];

static /* final */ const MR_Box make__program_target_scalar_common_10[1][4];

static /* final */ const MR_Box make__program_target_scalar_common_11[2][8];

static /* final */ const MR_Box make__program_target_scalar_common_12[5][9];


struct make__program_target__vector_common_type_13_0_s {
  const MR_Word make__program_target__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_13_0_s make__program_target_vector_common_13[7];



static /* final */ const MR_Box make__program_target_scalar_common_1[63][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "--compile-to-shared-lib")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "--use-grade-subdirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "analysis_cache")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "Mercury")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__program_target_scalar_common_2[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "module_dep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "mih")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "mh")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "int3")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "int2")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "analysis")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Unsigned) 48U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 44U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Unsigned) 40U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[2]))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) (((MR_Unsigned) 0U << 2))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) (((MR_Unsigned) 1U << 2))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_2[22][3] = {
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
    ((MR_Box) (((MR_Box) ((MR_String) ".int0")))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[0]))),
    ((MR_Box) ((MR_String) "int0s"))
  },
  /* row   4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".opt")))),
    ((MR_Box) (MR_mkword(2, &make__program_target_scalar_common_4[0]))),
    ((MR_Box) ((MR_String) "opts"))
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int")))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[2]))),
    ((MR_Box) ((MR_String) "ints"))
  },
  /* row   6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int2")))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[3]))),
    ((MR_Box) ((MR_String) "int2s"))
  },
  /* row   7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int3")))),
    ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[4]))),
    ((MR_Box) ((MR_String) "int3s"))
  },
  /* row   8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".module_dep")))),
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[15]))),
    ((MR_Box) ((MR_String) "module_deps"))
  },
  /* row   9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mh")))),
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[16]))),
    ((MR_Box) ((MR_String) "mhs"))
  },
  /* row  10 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mih")))),
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[18]))),
    ((MR_Box) ((MR_String) "mihs"))
  },
  /* row  11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".analysis")))),
    ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[19]))),
    ((MR_Box) ((MR_String) "analysiss"))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[0])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[1])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[2])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__program_target_scalar_common_8[0])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__program_target_scalar_common_8[1])),
    ((MR_Box) (make__program_target__make_java_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[3])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[3])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[3])),
    ((MR_Box) (make__program_target__build_analysis_files_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__program_target_scalar_common_3[5])),
    ((MR_Box) (make__program_target__install_library_grade_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
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
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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

static /* final */ const MR_Box make__program_target_scalar_common_4[12][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".java")))) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   5 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".mh")))) },
  /* row   6 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".init")))) },
  /* row   7 */
  { ((MR_Box) (((MR_Box) ((MR_String) "_init.c")))) },
  /* row   8 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".used")))) },
  /* row   9 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".prof")))) },
  /* row  10 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".imdg")))) },
  /* row  11 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".request")))) },
};

static /* final */ const MR_Box make__program_target_scalar_common_5[9][11] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
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
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target____vpti_tuple_3__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   8 */
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

static /* final */ const MR_Box make__program_target_scalar_common_6[5][10] = {
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)),
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
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_7[5][6] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_8[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   4 */
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

static /* final */ const MR_Box make__program_target_scalar_common_9[5][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
  /* row   3 */
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
  /* row   4 */
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

static /* final */ const MR_Box make__program_target_scalar_common_10[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[1])),
    ((MR_Box) (make__program_target__build_java_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "Making Java class files\n"))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_11[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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

static /* final */ const MR_Box make__program_target_scalar_common_12[5][9] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
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
  /* row   3 */
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
  /* row   4 */
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
  /* row   2 */   { (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[6])) },
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


static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

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

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0) }
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

static const MR_VA_PseudoTypeInfo_Struct3 make__program_target____vpti_tuple_3__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0),
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
make__program_target__IntroducedFrom__pred__make_module_realclean__2248__1_3_p_0(
  MR_Word ModuleName_8)
{
  MR_Word Var_26;
  MR_Word Var_28;
  MR_String Var_29;

  Var_29 = parse_tree__parse_tree_out_sym_name__sym_name_to_escaped_string_1_f_0(ModuleName_8);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "Cleaning up interface files for module \140%s\'\n", Var_26);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_clean__2162__1_3_p_0(
  MR_Word ModuleName_8)
{
  MR_Word Var_28;
  MR_Word Var_30;
  MR_String Var_31;

  Var_31 = parse_tree__parse_tree_out_sym_name__sym_name_to_escaped_string_1_f_0(ModuleName_8);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "Cleaning up target files for module \140%s\'.\n", Var_28);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_main_module_realclean__2104__1_3_p_0(
  MR_Word ModuleName_8)
{
  MR_Word Var_27;
  MR_Word Var_29;
  MR_String Var_30;

  Var_30 = parse_tree__parse_tree_out_sym_name__sym_name_to_escaped_string_1_f_0(ModuleName_8);
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "Removing executable and library files for \140%s\'.\n", Var_27);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_grade_clean__2089__1_4_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9)
{
  MR_String Grade_13;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_String Var_28;
  MR_Word Var_29;
  MR_Word Var_30;

  libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &Grade_13);
  Var_28 = parse_tree__parse_tree_out_sym_name__sym_name_to_escaped_string_1_f_0(ModuleName_9);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (Grade_13));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_29));
  }
  mercury__io__format_4_p_0((MR_String) "Cleaning up grade-dependent files for \140%s\' in grade %s.\n", Var_25);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__generate_archive_index__2051__1_5_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14)
{
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (FileName_8));
  }
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (InstallDir_9));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  mercury__io__format_5_p_0(ErrorStream_14, (MR_String) "Generating archive index for file %s in %s\n", Var_28);
  mercury__io__flush_output_3_p_0(ErrorStream_14);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__1978__1_5_p_0(
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
make__program_target__IntroducedFrom__pred__install_directory__1945__1_5_p_0(
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14)
{
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;

  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (SourceDirName_8));
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (InstallDir_9));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  mercury__io__format_5_p_0(ErrorStream_14, (MR_String) "Installing directory %s in %s\n", Var_26);
  mercury__io__flush_output_3_p_0(ErrorStream_14);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word ErrorStream_14)
{
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;

  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (FileName_8));
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (InstallDir_9));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  mercury__io__format_5_p_0(ErrorStream_14, (MR_String) "Installing file %s in %s\n", Var_26);
  mercury__io__flush_output_3_p_0(ErrorStream_14);
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1316__1_2_p_0(
  MR_Word HeadVar__1_27,
  MR_Word * HeadVar__2_28)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_27, HeadVar__2_28);
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1249__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word HeadVar__2_53)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_11, ((MR_Box) (HeadVar__2_53)));
  return succeeded;
}

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__704__1_1_f_0(
  MR_Word LambdaHeadVar__1_29)
{
  MR_String LambdaHeadVar__2_30 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 2))));

  return LambdaHeadVar__2_30;
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__572__1_4_p_0(
  MR_String LambdaHeadVar__1_99,
  MR_String * LambdaHeadVar__2_100)
{
  *LambdaHeadVar__2_100 = LambdaHeadVar__1_99;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__561__1_1_f_0(
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
make__program_target__IntroducedFrom__func__get_foreign_object_targets__441__1_3_f_0(
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
make__program_target__IntroducedFrom__pred__order_target_modules__377__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word * HeadVar__2_40)
{
  MR_Box conv0_HeadVar__2_40;

  mercury__pair__snd_2_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_39, &conv0_HeadVar__2_40);
  *HeadVar__2_40 = ((MR_Word) (conv0_HeadVar__2_40));
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1624__1_3_p_0(
  MR_String Grade_15)
{
  MR_Word Var_59;
  MR_Word Var_61;

  {
    Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_61, 1) = ((MR_Box) (Grade_15));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_61));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "Installing grade %s\n", Var_59);
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
make__program_target__make_module_realclean_6_p_0_2(
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
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__make_module_realclean__2248__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_Word STATE_VARIABLE_Info_16_16;
  MR_Word Var_19;
  MR_Word Var_48;
  MR_Word STATE_VARIABLE_Info_49_49;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_Info_63_63;
  MR_Box conv2_STATE_VARIABLE_Info_49_49;
  MR_Box conv1_STATE_VARIABLE_IO_50_50;

  make__program_target__make_module_clean_6_p_0(Globals_7, ModuleName_8, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_16_16);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (ModuleName_8));
  }
  make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 77, Var_19);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_9[4]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_2));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.make_module_realclean\'/6"));
    MR_hl_field(0, Var_48, 5) = ((MR_Box) ((MR_Integer) 73));
    MR_hl_field(0, Var_48, 6) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[58])), ((MR_Box) (STATE_VARIABLE_Info_16_16)), &conv2_STATE_VARIABLE_Info_49_49, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_50_50);
  STATE_VARIABLE_Info_49_49 = ((MR_Word) (conv2_STATE_VARIABLE_Info_49_49));
  Var_58 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_58));
  }
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, Var_54, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[15])), STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_56_56);
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[10])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[59])), STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_63_63);
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[11])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[60])), STATE_VARIABLE_Info_63_63, STATE_VARIABLE_Info_13);
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
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_String FactTableCFile_11;

  parse_tree__file_names__fact_table_file_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_fact_table_c_file\'/6", (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".c"))), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[50])), FactTableFile_8, &FactTableCFile_11);
  make__util__make_remove_file_7_p_0(Globals_7, (MR_Integer) 73, FactTableCFile_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_5(
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
make__program_target__make_module_clean_6_p_0_4(
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
make__program_target__make_module_clean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_13;

  make__program_target__remove_fact_table_c_file_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_13);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_13));
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
  MR_Word conv0_HeadVar__7_7;

  make__util__remove_make_target_file_by_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__make_module_clean__2162__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word MaybeModuleDepInfo_11;
  MR_Word FactTableFiles_14;
  MR_Word CCodeModule_15;
  MR_Word Var_21;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word STATE_VARIABLE_Info_55_55;
  MR_Word STATE_VARIABLE_Info_63_63;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word Var_70;
  MR_Word STATE_VARIABLE_Info_71_71;
  MR_Word STATE_VARIABLE_Info_77_77;
  MR_Word STATE_VARIABLE_Info_80_80;
  MR_Word STATE_VARIABLE_Info_22_105;
  MR_Word STATE_VARIABLE_Info_27_110;
  MR_Word Var_113;
  MR_Word STATE_VARIABLE_Info_22_120;
  MR_Word STATE_VARIABLE_Info_27_125;
  MR_Word Var_128;
  MR_Box conv2_STATE_VARIABLE_Info_35_35;
  MR_Box conv1_STATE_VARIABLE_IO_36_36;
  MR_Box conv5_STATE_VARIABLE_Info_71_71;
  MR_Box conv4_STATE_VARIABLE_IO_72_72;
  MR_Box conv8_STATE_VARIABLE_Info_80_80;
  MR_Box conv7_STATE_VARIABLE_IO_81_81;
  MR_Box conv11_STATE_VARIABLE_Info_17;
  MR_Box conv10_STATE_VARIABLE_IO_19;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleName_8));
  }
  make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 77, Var_21);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&make__program_target_scalar_common_9[4]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.make_module_clean\'/6"));
    MR_hl_field(0, Var_33, 5) = ((MR_Box) ((MR_Integer) 73));
    MR_hl_field(0, Var_33, 6) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[47])), ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv2_STATE_VARIABLE_Info_35_35, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36_36);
  STATE_VARIABLE_Info_35_35 = ((MR_Word) (conv2_STATE_VARIABLE_Info_35_35));
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[8])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[48])), STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_55_55);
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[9])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[49])), STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_63_63);
  make__module_dep_file__get_module_dependencies_7_p_0(Globals_7, ModuleName_8, &MaybeModuleDepInfo_11, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_68_68);
  if ((MaybeModuleDepInfo_11 == (MR_Word) ((MR_Unsigned) 0U)))
    FactTableFiles_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleDepInfo_12 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_11, (MR_Integer) 0))));
    MR_Word FactTableFilesSet_13;

    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_12, &FactTableFilesSet_13);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_13, &FactTableFiles_14);
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_3));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (Globals_7));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, FactTableFiles_14, ((MR_Box) (STATE_VARIABLE_Info_68_68)), &conv5_STATE_VARIABLE_Info_71_71, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_72_72);
  STATE_VARIABLE_Info_71_71 = ((MR_Word) (conv5_STATE_VARIABLE_Info_71_71));
  parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_8, (MR_Integer) 0, &CCodeModule_15);
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.make_module_clean\'/6", (MR_Integer) 73, CCodeModule_15, (MR_Word) ((MR_Unsigned) 36U), STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_77_77);
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[0])), STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_22_105);
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[61])), STATE_VARIABLE_Info_22_105, &STATE_VARIABLE_Info_27_110);
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (&make__program_target_scalar_common_5[8]));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_4));
    MR_hl_field(0, Var_113, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_113, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_113, 4) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, Var_113, 5) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_113, FactTableFiles_14, ((MR_Box) (STATE_VARIABLE_Info_27_110)), &conv8_STATE_VARIABLE_Info_80_80, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_81_81);
  STATE_VARIABLE_Info_80_80 = ((MR_Word) (conv8_STATE_VARIABLE_Info_80_80));
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(2, &make__program_target_scalar_common_4[2])), STATE_VARIABLE_Info_80_80, &STATE_VARIABLE_Info_22_120);
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.remove_object_and_assembler_files\'/8", (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[62])), STATE_VARIABLE_Info_22_120, &STATE_VARIABLE_Info_27_125);
  {
    Var_128 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_128, 0) = ((MR_Box) (&make__program_target_scalar_common_5[8]));
    MR_hl_field(0, Var_128, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_5));
    MR_hl_field(0, Var_128, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_128, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_128, 4) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, Var_128, 5) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_128, FactTableFiles_14, ((MR_Box) (STATE_VARIABLE_Info_27_125)), &conv11_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_19);
  *STATE_VARIABLE_Info_17 = ((MR_Word) (conv11_STATE_VARIABLE_Info_17));
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
make__program_target__install_directory_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_directory__1945__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
}

static void MR_CALL 
make__program_target__install_directory_6_p_0(
  MR_Word Globals_7,
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10)
{
  MR_Word ErrorStream_14;
  MR_String Command_15;
  MR_Word Var_19;

  mercury__io__output_stream_3_p_0(&ErrorStream_14);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__program_target__install_directory_6_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (SourceDirName_8));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (InstallDir_9));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (ErrorStream_14));
  }
  make__util__verbose_make_msg_4_p_0(Globals_7, Var_19);
  Command_15 = libs__file_util__make_install_dir_command_3_f_0(Globals_7, SourceDirName_8, InstallDir_9);
  parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_7, ErrorStream_14, ErrorStream_14, ErrorStream_14, (MR_Integer) 0, Command_15, Succeeded_10);
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
    MR_String Var_63;
    MR_Word Var_80;

    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 669, &Prefix_19);
    Var_40 = mercury__dir__f_slash_2_f_0(Prefix_19, (MR_String) "lib");
    LibDir_20 = mercury__dir__f_slash_2_f_0(Var_40, (MR_String) "mercury");
    libs__globals__get_target_2_p_0(Globals_10, &Target_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 309, &HighLevelCode_22);
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
      make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIncDir_23, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_2[10]), &HeaderSucceeded1_24);
      IntDir_25 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
      make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, IntDir_25, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_2[10]), &HeaderSucceeded2_26);
      HeaderSucceeded_27 = libs__maybe_util__and_2_f_0(HeaderSucceeded1_24, HeaderSucceeded2_26);
    }
    else
      HeaderSucceeded_27 = (MR_Integer) 1;
    Var_63 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
    GradeIntDir_28 = mercury__dir__f_slash_2_f_0(Var_63, GradeDir_12);
    libs__globals__get_any_intermod_2_p_0(Globals_10, &AnyIntermod_29);
    switch (AnyIntermod_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OptSucceeded_30 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIntDir_28, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_2[4]), &OptSucceeded_30);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 504, &IntermodAnalysis_31);
    switch (IntermodAnalysis_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IntermodAnalysisSucceeded_32 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIntDir_28, ModuleName_13, (MR_Tuple) (&make__program_target_scalar_common_2[11]), &IntermodAnalysisSucceeded_32);
        break;
    }
    Var_80 = libs__maybe_util__and_2_f_0(HeaderSucceeded_27, OptSucceeded_30);
    *Succeeded_14 = libs__maybe_util__and_2_f_0(Var_80, IntermodAnalysisSucceeded_32);
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
make__program_target__maybe_make_grade_clean_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Info_17;

  make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__5_5;

  make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__4_4;

  make__util__linked_target_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  make__util__linked_target_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__make_main_module_realclean__2104__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__make_grade_clean__2089__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
        MR_Word Var_19;
        MR_Word STATE_VARIABLE_Info_32_21;
        MR_Word Var_23;
        MR_Word LinkedTargetTypes_27;
        MR_Word FileNames_28;
        MR_Word NoSubdirGlobals_29;
        MR_Word ThisDirFileNames_30;
        MR_String ThisDirInitFileName_31;
        MR_Word Var_32;
        MR_Word Var_34;
        MR_Word Var_38;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word STATE_VARIABLE_Info_63_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_Info_72_56;
        MR_String ObjExt_63;
        MR_String PicObjExt_64;
        MR_Word STATE_VARIABLE_Info_23_69;
        MR_Word Var_74;
        MR_Word STATE_VARIABLE_Info_30_76;
        MR_Word Var_78;
        MR_String Var_79;
        MR_Word Var_82;
        MR_Word Var_84;
        MR_String Var_85;
        MR_Box conv1_STATE_VARIABLE_IO_47_35;
        MR_Box conv3_STATE_VARIABLE_IO_52_39;
        MR_Box conv6_STATE_VARIABLE_Info_63_47;
        MR_Box conv5_STATE_VARIABLE_IO_64_48;
        MR_Box conv9_STATE_VARIABLE_Info_16;
        MR_Box conv8_STATE_VARIABLE_IO_18;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_8[4]));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_1));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_19, 3) = ((MR_Box) (Globals_9));
          MR_hl_field(0, Var_19, 4) = ((MR_Box) (ModuleName_11));
        }
        make__util__verbose_make_msg_4_p_0(Globals_9, Var_19);
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
          MR_hl_field(0, Var_32, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_2));
          MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_32, 3) = ((MR_Box) (ModuleName_11));
        }
        make__util__verbose_make_msg_4_p_0(Globals_9, Var_32);
        LinkedTargetTypes_27 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[38]));
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__program_target_scalar_common_12[1]));
          MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_3));
          MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_34, 3) = ((MR_Box) (Globals_9));
          MR_hl_field(0, Var_34, 4) = ((MR_Box) (ModuleName_11));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, LinkedTargetTypes_27, &FileNames_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_35);
        libs__globals__set_option_4_p_0((MR_Integer) 685, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[0])), Globals_9, &NoSubdirGlobals_29);
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_12[1]));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_4));
          MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_38, 3) = ((MR_Box) (NoSubdirGlobals_29));
          MR_hl_field(0, Var_38, 4) = ((MR_Box) (ModuleName_11));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, LinkedTargetTypes_27, &ThisDirFileNames_30, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_52_39);
        parse_tree__file_names__module_name_to_file_name_9_p_0(NoSubdirGlobals_29, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[6])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[17])), ModuleName_11, &ThisDirInitFileName_31);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__program_target_scalar_common_6[4]));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_5));
          MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_45, 3) = ((MR_Box) (Globals_9));
          MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_Integer) 73));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (ThisDirInitFileName_31));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_30, Var_51);
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_28, Var_50);
        mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, Var_46, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv6_STATE_VARIABLE_Info_63_47, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_64_48);
        STATE_VARIABLE_Info_63_47 = ((MR_Word) (conv6_STATE_VARIABLE_Info_63_47));
        make__util__remove_make_module_file_9_p_0(Globals_9, (MR_Integer) 73, ModuleName_11, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[6])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[17])), STATE_VARIABLE_Info_63_47, &STATE_VARIABLE_Info_72_56);
        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 559, &ObjExt_63);
        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 560, &PicObjExt_64);
        make__util__remove_make_module_file_9_p_0(Globals_9, (MR_Integer) 73, ModuleName_11, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[7])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[39])), STATE_VARIABLE_Info_72_56, &STATE_VARIABLE_Info_23_69);
        Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_63);
        Var_78 = (MR_Word) (Var_79);
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_78));
        }
        make__util__remove_make_module_file_9_p_0(Globals_9, (MR_Integer) 73, ModuleName_11, Var_74, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[40])), STATE_VARIABLE_Info_23_69, &STATE_VARIABLE_Info_30_76);
        Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "_init", PicObjExt_64);
        Var_84 = (MR_Word) (Var_85);
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_84));
        }
        make__util__remove_make_module_file_9_p_0(Globals_9, (MR_Integer) 73, ModuleName_11, Var_82, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[41])), STATE_VARIABLE_Info_30_76, &STATE_VARIABLE_Info_32_21);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (&make__program_target_scalar_common_12[4]));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_6));
          MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_23, 3) = ((MR_Box) (Globals_9));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, AllModules_12, ((MR_Box) (STATE_VARIABLE_Info_32_21)), &conv9_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_18);
        *STATE_VARIABLE_Info_16 = ((MR_Word) (conv9_STATE_VARIABLE_Info_16));
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
make__program_target__install_extra_header_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
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
  MR_Word ErrorStream_18;
  MR_String Command_19;
  MR_Word Var_21;

  mercury__io__output_stream_3_p_0(&ErrorStream_18);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (make__program_target__install_extra_header_7_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (FileName_10));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (IncDir_9));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (ErrorStream_18));
  }
  make__util__verbose_make_msg_4_p_0(Globals_8, Var_21);
  Command_19 = libs__file_util__make_install_file_command_3_f_0(Globals_8, FileName_10, IncDir_9);
  parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_8, ErrorStream_18, ErrorStream_18, ErrorStream_18, (MR_Integer) 0, Command_19, &InstallSucceeded_13);
  *STATE_VARIABLE_Succeeded_15 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_14, InstallSucceeded_13);
}

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
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
  MR_Word conv0_Succeeded_16;

  make__program_target__install_subdir_file_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_Succeeded_16);
  *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_16));
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
    MR_Word Var_55;
    MR_Word Var_62;
    MR_Word Var_69;
    MR_String Var_77;
    MR_Word Var_80;
    MR_String Var_82;
    MR_Word Var_104;
    MR_Box conv1_STATE_VARIABLE_IO_81_81;

    parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_16, &Children_17);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_17);
    if (succeeded)
      Exts0_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
      Exts0_18 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[14]));
    libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_19);
    switch (AnyIntermod_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Exts1_20 = Exts0_18;
        break;
      case (MR_Integer) 1:
        {
          Exts1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Exts1_20, 0) = ((MR_Box) (&make__program_target_scalar_common_2[4]));
          MR_hl_field(1, Exts1_20, 1) = ((MR_Box) (Exts0_18));
        }
        break;
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (&make__program_target_scalar_common_2[8]));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Exts1_20));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (&make__program_target_scalar_common_2[7]));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_2[6]));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_62));
    }
    {
      Exts_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Exts_21, 0) = ((MR_Box) (&make__program_target_scalar_common_2[5]));
      MR_hl_field(1, Exts_21, 1) = ((MR_Box) (Var_55));
    }
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 669, &Prefix_22);
    Var_77 = mercury__dir__f_slash_2_f_0(Prefix_22, (MR_String) "lib");
    LibDir_23 = mercury__dir__f_slash_2_f_0(Var_77, (MR_String) "mercury");
    Var_82 = mercury__dir__f_slash_2_f_0(LibDir_23, (MR_String) "ints");
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_80, 0) = ((MR_Box) (&make__program_target_scalar_common_5[7]));
      MR_hl_field(0, Var_80, 1) = ((MR_Box) (make__program_target__install_ints_and_headers_8_p_0_1));
      MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_80, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(0, Var_80, 4) = ((MR_Box) (SubdirLinkSucceeded_10));
      MR_hl_field(0, Var_80, 5) = ((MR_Box) (Var_82));
      MR_hl_field(0, Var_80, 6) = ((MR_Box) (ModuleName_11));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&make__program_target_scalar_common_3[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_80, Exts_21, &Results_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_81_81);
    libs__globals__get_target_2_p_0(Globals_9, &Target_25);
    switch (Target_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String FileName_26;
          MR_Word HeaderSucceeded1_27;
          MR_Word HeaderSucceeded2_28;
          MR_String Var_92;
          MR_String Var_95;
          MR_Word ErrorStream_113;
          MR_String Command_114;
          MR_Word Var_116;

          parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_9, (MR_String) "predicate \140make.program_target.install_ints_and_headers\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[5])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[16])), ModuleName_11, &FileName_26);
          Var_92 = mercury__dir__f_slash_2_f_0(LibDir_23, (MR_String) "inc");
          mercury__io__output_stream_3_p_0(&ErrorStream_113);
          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_116, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
            MR_hl_field(0, Var_116, 1) = ((MR_Box) (make__program_target__install_ints_and_headers_8_p_0_2));
            MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_116, 3) = ((MR_Box) (FileName_26));
            MR_hl_field(0, Var_116, 4) = ((MR_Box) (Var_92));
            MR_hl_field(0, Var_116, 5) = ((MR_Box) (ErrorStream_113));
          }
          make__util__verbose_make_msg_4_p_0(Globals_9, Var_116);
          Command_114 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_26, Var_92);
          parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ErrorStream_113, ErrorStream_113, ErrorStream_113, (MR_Integer) 0, Command_114, &HeaderSucceeded1_27);
          Var_95 = mercury__dir__f_slash_2_f_0(LibDir_23, (MR_String) "ints");
          make__program_target__install_subdir_file_8_p_0(Globals_9, SubdirLinkSucceeded_10, Var_95, ModuleName_11, (MR_Tuple) (&make__program_target_scalar_common_2[9]), &HeaderSucceeded2_28);
          HeaderSucceeded_29 = libs__maybe_util__and_2_f_0(HeaderSucceeded1_27, HeaderSucceeded2_28);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        HeaderSucceeded_29 = (MR_Integer) 1;
        break;
    }
    {
      Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_104, 0) = ((MR_Box) (HeaderSucceeded_29));
      MR_hl_field(1, Var_104, 1) = ((MR_Box) (Results_24));
    }
    *Succeeded_12 = libs__maybe_util__and_list_1_f_0(Var_104);
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_String InstallDir_11,
  MR_Word ModuleName_12,
  MR_Tuple HeadVar__5_5,
  MR_Word * Succeeded_16)
{
  MR_Word Ext_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 0))));
  MR_Word NewExt_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 1))));
  MR_String Exts_15 = ((MR_String) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 2))));
  MR_String FileName_18;
  MR_Word Succeeded1_19;
  MR_Word Var_25;
  MR_Word ErrorStream_32;
  MR_String Command_33;
  MR_Word Var_35;

  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Ext_13));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_9, (MR_String) "predicate \140make.program_target.install_subdir_file\'/8", (MR_Integer) 1, Var_25, NewExt_14, ModuleName_12, &FileName_18);
  mercury__io__output_stream_3_p_0(&ErrorStream_32);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (make__program_target__install_subdir_file_8_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (FileName_18));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (InstallDir_11));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (ErrorStream_32));
  }
  make__util__verbose_make_msg_4_p_0(Globals_9, Var_35);
  Command_33 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_18, InstallDir_11);
  parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ErrorStream_32, ErrorStream_32, ErrorStream_32, (MR_Integer) 0, Command_33, &Succeeded1_19);
  switch (SubdirLinkSucceeded_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Succeeded2_20;
        MR_String Var_28;
        MR_String Var_30;
        MR_Word ErrorStream_38;
        MR_String Command_39;
        MR_Word Var_41;

        Var_30 = mercury__dir__f_slash_2_f_0(InstallDir_11, (MR_String) "Mercury");
        Var_28 = mercury__dir__f_slash_2_f_0(Var_30, Exts_15);
        mercury__io__output_stream_3_p_0(&ErrorStream_38);
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (make__program_target__install_subdir_file_8_p_0_2));
          MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_41, 3) = ((MR_Box) (FileName_18));
          MR_hl_field(0, Var_41, 4) = ((MR_Box) (Var_28));
          MR_hl_field(0, Var_41, 5) = ((MR_Box) (ErrorStream_38));
        }
        make__util__verbose_make_msg_4_p_0(Globals_9, Var_41);
        Command_39 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_18, Var_28);
        parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ErrorStream_38, ErrorStream_38, ErrorStream_38, (MR_Integer) 0, Command_39, &Succeeded2_20);
        *Succeeded_16 = libs__maybe_util__and_2_f_0(Succeeded1_19, Succeeded2_20);
      }
      break;
    case (MR_Integer) 1:
      *Succeeded_16 = Succeeded1_19;
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
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Integer Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Unsigned packed_word_1;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (ModuleName_4));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 28U));
  }
  {
    Dep_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Dep_6, 0) = ((MR_Box) (Var_11));
  }
  DepStatusMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 8))));
  mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_6)), ((MR_Box) ((MR_Integer) 0)), DepStatusMap0_7, &DepStatusMap_8);
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 1))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 2))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 3))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 4))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 5))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 7))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 9))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 10))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 11))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 12))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 13))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 14))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 15)));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 16))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 17))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 18))));
  Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 19))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 20))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 21))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 8) = ((MR_Box) (DepStatusMap_8));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 15) = (MR_Box) (packed_word_1);
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_58));
  }
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
        MR_String ObjExt_23;
        MR_String PicObjExt_24;
        MR_Word STATE_VARIABLE_Info_23_29;
        MR_Word Var_34;
        MR_Word STATE_VARIABLE_Info_30_36;
        MR_Word Var_38;
        MR_String Var_39;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_String Var_45;

        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 559, &ObjExt_23);
        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 560, &PicObjExt_24);
        make__util__remove_make_module_file_9_p_0(Globals_9, (MR_Integer) 77, MainModuleName_10, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[7])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[39])), STATE_VARIABLE_Info_20_20, &STATE_VARIABLE_Info_23_29);
        Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_23);
        Var_38 = (MR_Word) (Var_39);
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_38));
        }
        make__util__remove_make_module_file_9_p_0(Globals_9, (MR_Integer) 77, MainModuleName_10, Var_34, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[40])), STATE_VARIABLE_Info_23_29, &STATE_VARIABLE_Info_30_36);
        Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_init", PicObjExt_24);
        Var_44 = (MR_Word) (Var_45);
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_44));
        }
        make__util__remove_make_module_file_9_p_0(Globals_9, (MR_Integer) 77, MainModuleName_10, Var_42, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[41])), STATE_VARIABLE_Info_30_36, STATE_VARIABLE_Info_16);
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

  conv0_LambdaHeadVar__2_30 = make__program_target__IntroducedFrom__func__get_module_foreign_object_files__704__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    *ForeignObjectFiles_12 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[21]), ForeignFiles_17);
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

  conv0_LambdaHeadVar__2_31 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__441__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
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
          MR_hl_field(0, FactFileToTarget_18, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
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
  make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, Target_14, &MaybeTimestamp_15, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
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
make__program_target__get_target_modules_2_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_TargetModules_0_17,
  MR_Word * STATE_VARIABLE_TargetModules_18,
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
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TargetModules_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TargetModules_0_17));
    }
  else
    *STATE_VARIABLE_TargetModules_18 = STATE_VARIABLE_TargetModules_0_17;
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_4(
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
make__program_target__install_library_grade_10_p_0_3(
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
make__program_target__install_library_grade_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_library_grade__1624__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

void MR_CALL 
make__program_target__install_library_grade_10_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Globals_14,
  MR_String Grade_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_Word UseGradeSubdirs_19;
  MR_Word CleanAfter_20;
  MR_Word OptionArgs0_21;
  MR_Word OptionArgs_22;
  MR_Word MaybeMCFlags_23;
  MR_Word OptionsSpecs_30;
  MR_Word LibGlobals_31;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_52;
  MR_Word Var_63;

  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 685, &UseGradeSubdirs_19);
  CleanAfter_20 = mercury__bool__not_1_f_0(UseGradeSubdirs_19);
  OptionArgs0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 4))));
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Grade_15));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[7])));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_String) "--grade"));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  OptionArgs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs0_21, Var_46);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&make__program_target_scalar_common_7[1]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_1));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Grade_15));
  }
  make__util__verbose_make_msg_4_p_0(Globals_14, Var_52);
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 5))));
  make__options_file__lookup_mmc_options_2_p_0(Var_63, &MaybeMCFlags_23);
  if (((MR_tag((MR_Word) MaybeMCFlags_23)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_32 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags_23, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_4_p_0(Globals_14, LookupSpecs_32);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.install_library_grade\'/10", (MR_String) "bad DEFAULT_MCFLAGS");
      return;
    }
  }
  else
  {
    MR_Word MCFlags_24 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags_23, (MR_Integer) 0))));
    MR_Word DetectedGradeFlags_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 3))));
    MR_Word AllFlags_26;
    MR_Word CurStream_27;
    MR_Word Var_64;
    MR_Word Var_28;
    MR_Word Var_29;

    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_24, OptionArgs_22);
    AllFlags_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_25, Var_64);
    mercury__io__output_stream_3_p_0(&CurStream_27);
    libs__handle_options__handle_given_options_8_p_0(CurStream_27, AllFlags_26, &Var_28, &Var_29, &OptionsSpecs_30, &LibGlobals_31);
  }
  if ((OptionsSpecs_30 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StatusMap_36;
    MR_Word VeryVerbose_37;
    MR_Box Cookie_38;
    MR_Word Succeeded0_39;
    MR_Word Cleanup_40;
    MR_Word STATE_VARIABLE_Info_74_74;
    MR_Word Var_77;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Integer Var_169;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Unsigned packed_word_3;
    MR_Box conv3_STATE_VARIABLE_Info_42;

    StatusMap_36 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__program_target_scalar_common_2[20]));
    Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
    Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 1))));
    Var_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 2))));
    Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 3))));
    Var_154 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 5))));
    Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 6))));
    Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 7))));
    Var_158 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 9))));
    Var_159 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 10))));
    Var_160 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 11))));
    Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 12))));
    Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 13))));
    Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 14))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 15)));
    Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 16))));
    Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 17))));
    Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 18))));
    Var_169 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 19))));
    Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 20))));
    Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 21))));
    {
      STATE_VARIABLE_Info_74_74 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 0) = ((MR_Box) (Var_149));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 1) = ((MR_Box) (Var_150));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 2) = ((MR_Box) (Var_151));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 3) = ((MR_Box) (Var_152));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 4) = ((MR_Box) (OptionArgs_22));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 5) = ((MR_Box) (Var_154));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 6) = ((MR_Box) (Var_155));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 7) = ((MR_Box) (Var_156));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 8) = ((MR_Box) (StatusMap_36));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 9) = ((MR_Box) (Var_158));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 10) = ((MR_Box) (Var_159));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 11) = ((MR_Box) (Var_160));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 12) = ((MR_Box) (Var_161));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 13) = ((MR_Box) (Var_162));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 14) = ((MR_Box) (Var_163));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 15) = (MR_Box) (packed_word_3);
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 16) = ((MR_Box) (Var_166));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 17) = ((MR_Box) (Var_167));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 18) = ((MR_Box) (Var_168));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 19) = ((MR_Box) (Var_169));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 20) = ((MR_Box) (Var_170));
      MR_hl_field(0, STATE_VARIABLE_Info_74_74, 21) = ((MR_Box) (Var_171));
    }
    libs__globals__lookup_bool_option_3_p_0(LibGlobals_31, (MR_Integer) 73, &VeryVerbose_37);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_38);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(0, Var_77, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_3));
      MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(0, Var_77, 3) = ((MR_Box) (LibGlobals_31));
      MR_hl_field(0, Var_77, 4) = ((MR_Box) (LinkSucceeded0_11));
      MR_hl_field(0, Var_77, 5) = ((MR_Box) (ModuleName_12));
      MR_hl_field(0, Var_77, 6) = ((MR_Box) (AllModules_13));
      MR_hl_field(0, Var_77, 7) = ((MR_Box) (STATE_VARIABLE_Info_74_74));
      MR_hl_field(0, Var_77, 8) = ((MR_Box) (CleanAfter_20));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_77, &Succeeded0_39);
    {
      Cleanup_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_40, 0) = ((MR_Box) (&make__program_target_scalar_common_5[6]));
      MR_hl_field(0, Cleanup_40, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_4));
      MR_hl_field(0, Cleanup_40, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Cleanup_40, 3) = ((MR_Box) (LibGlobals_31));
      MR_hl_field(0, Cleanup_40, 4) = ((MR_Box) (CleanAfter_20));
      MR_hl_field(0, Cleanup_40, 5) = ((MR_Box) (ModuleName_12));
      MR_hl_field(0, Cleanup_40, 6) = ((MR_Box) (AllModules_13));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_37, Cookie_38, Cleanup_40, Succeeded0_39, Succeeded_16, ((MR_Box) (STATE_VARIABLE_Info_74_74)), &conv3_STATE_VARIABLE_Info_42);
    *STATE_VARIABLE_Info_42 = ((MR_Word) (conv3_STATE_VARIABLE_Info_42));
  }
  else
  {
    MR_Word ErrorStream_35;

    libs__globals__get_error_output_stream_5_p_0(Globals_14, ModuleName_12, &ErrorStream_35);
    libs__handle_options__usage_errors_5_p_0(ErrorStream_35, Globals_14, OptionsSpecs_30);
    *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
  }
}

void MR_CALL 
make__program_target__make_misc_target_9_p_0(
  MR_Word Globals_10,
  MR_Word HeadVar__2_2,
  MR_Word * Succeeded_13,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word MainModuleName_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TargetType_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word DetectedGradeFlags_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
  MR_Word OptionVariables_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 5))));
  MR_Word OptionArgs_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 4))));
  MR_Word MayBuild_21;

  make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 1, MainModuleName_11, DetectedGradeFlags_17, OptionVariables_18, OptionArgs_19, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_21);
  if (((MR_tag((MR_Word) MayBuild_21)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_23 = ((MR_Word) ((MR_hl_field(1, MayBuild_21, (MR_Integer) 1))));

    make__program_target__make_misc_target_builder_10_p_0(BuildGlobals_23, MainModuleName_11, TargetType_12, Succeeded_13, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  }
  else
  {
    MR_Word Specs_15 = ((MR_Word) ((MR_hl_field(0, MayBuild_21, (MR_Integer) 0))));
    MR_Word ErrorStream_24;

    libs__globals__get_error_output_stream_5_p_0(Globals_10, MainModuleName_11, &ErrorStream_24);
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_24, Globals_10, Specs_15);
    *Succeeded_13 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
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
  MR_Word conv3_STATE_VARIABLE_Info_13;

  make__program_target__make_module_realclean_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_13);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
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
  MR_Word RebuildModuleDeps_18 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 15))) >> 1)) & (MR_Integer) 1);
  MR_Word Succeeded0_19;
  MR_Word AllModulesSet_20;
  MR_Word AllModules_21;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word STATE_VARIABLE_Info_37_37;
  MR_Word STATE_VARIABLE_Info_39_39;
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
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Integer Var_154;
  MR_Word Var_155;
  MR_Word Var_156;

  if ((TargetType_13 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if ((TargetType_13 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 1))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 2))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 3))));
    MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 4))));
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 5))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 6))));
    MR_Word Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 7))));
    MR_Word Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 8))));
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 9))));
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 10))));
    MR_Word Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 11))));
    MR_Word Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 12))));
    MR_Word Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 13))));
    MR_Word Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 14))));
    MR_Word Var_127 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 15))) & (MR_Integer) 1);
    MR_Word Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 16))));
    MR_Word Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 17))));
    MR_Word Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 18))));
    MR_Integer Var_131 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 19))));
    MR_Word Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 20))));
    MR_Word Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 21))));

    {
      STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (Var_111));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (Var_112));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (Var_113));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (Var_114));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (Var_115));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (Var_116));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) (Var_117));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (Var_118));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (Var_119));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 9) = ((MR_Box) (Var_120));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 10) = ((MR_Box) (Var_121));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 11) = ((MR_Box) (Var_122));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 12) = ((MR_Box) (Var_123));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 13) = ((MR_Box) (Var_124));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 14) = ((MR_Box) (Var_125));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 15) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_127)));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 16) = ((MR_Box) (Var_128));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 17) = ((MR_Box) (Var_129));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 18) = ((MR_Box) (Var_130));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 19) = ((MR_Box) (Var_131));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 20) = ((MR_Box) (Var_132));
      MR_hl_field(0, STATE_VARIABLE_Info_35_35, 21) = ((MR_Box) (Var_133));
    }
  }
  else
    STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_29;
  make__dependencies__find_reachable_local_modules_8_p_0(Globals_11, MainModuleName_12, &Succeeded0_19, &AllModulesSet_20, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_37_37);
  Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 0))));
  Var_135 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 1))));
  Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 2))));
  Var_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 3))));
  Var_138 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 4))));
  Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 5))));
  Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 6))));
  Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 7))));
  Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 8))));
  Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 9))));
  Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 10))));
  Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 11))));
  Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 12))));
  Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 13))));
  Var_148 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 14))));
  Var_150 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 15))) & (MR_Integer) 1);
  Var_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 16))));
  Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 17))));
  Var_153 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 18))));
  Var_154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 19))));
  Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 20))));
  Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 21))));
  {
    STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (Var_134));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_135));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_136));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_137));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_138));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_139));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_140));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_141));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 8) = ((MR_Box) (Var_142));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 9) = ((MR_Box) (Var_143));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 10) = ((MR_Box) (Var_144));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 11) = ((MR_Box) (Var_145));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 12) = ((MR_Box) (Var_146));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 13) = ((MR_Box) (Var_147));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 14) = ((MR_Box) (Var_148));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 15) = (MR_Box) (((((MR_Unsigned) (RebuildModuleDeps_18) << 1)) | (MR_Unsigned) (Var_150)));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 16) = ((MR_Box) (Var_151));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 17) = ((MR_Box) (Var_152));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 18) = ((MR_Box) (Var_153));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 19) = ((MR_Box) (Var_154));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 20) = ((MR_Box) (Var_155));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 21) = ((MR_Box) (Var_156));
  }
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
            MR_Box conv2_STATE_VARIABLE_Info_41_41;
            MR_Box conv1_STATE_VARIABLE_IO_42_42;

            *Succeeded_14 = (MR_Integer) 1;
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_40, 0) = ((MR_Box) (&make__program_target_scalar_common_12[4]));
              MR_hl_field(0, Var_40, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_10_p_0_1));
              MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_40, 3) = ((MR_Box) (Globals_11));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, AllModules_21, ((MR_Box) (STATE_VARIABLE_Info_39_39)), &conv2_STATE_VARIABLE_Info_41_41, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_42_42);
            STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv2_STATE_VARIABLE_Info_41_41));
            make__program_target__remove_init_files_7_p_0(Globals_11, (MR_Integer) 73, MainModuleName_12, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_30);
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_46_46;
            MR_Word Var_48;
            MR_Box conv5_STATE_VARIABLE_Info_30;
            MR_Box conv4_STATE_VARIABLE_IO_34;

            *Succeeded_14 = (MR_Integer) 1;
            make__program_target__make_main_module_realclean_6_p_0(Globals_11, MainModuleName_12, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_46_46);
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_12[4]));
              MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_10_p_0_2));
              MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_48, 3) = ((MR_Box) (Globals_11));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, AllModules_21, ((MR_Box) (STATE_VARIABLE_Info_46_46)), &conv5_STATE_VARIABLE_Info_30, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_34);
            *STATE_VARIABLE_Info_30 = ((MR_Word) (conv5_STATE_VARIABLE_Info_30));
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
            MR_Word STATE_VARIABLE_Info_78_78;
            MR_Word TargetModules_87;
            MR_Word KeepGoing_88;

            make__program_target__get_target_modules_8_p_0(Globals_11, (MR_Word) ((MR_Unsigned) 52U), AllModules_21, &TargetModules_87, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_78_78);
            KeepGoing_88 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 15))) & (MR_Integer) 1);
            succeeded = (Succeeded0_19 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (KeepGoing_88 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_14 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_78_78;
            }
            else
            {
              MR_Word Var_81;
              MR_Word Succeeded1_85;

              Var_81 = make__util__make_dependency_list_2_f_0(TargetModules_87, (MR_Word) ((MR_Unsigned) 52U));
              make__build__foldl2_make_module_targets_9_p_0(KeepGoing_88, (MR_Word) ((MR_Unsigned) 0U), Globals_11, Var_81, &Succeeded1_85, STATE_VARIABLE_Info_78_78, STATE_VARIABLE_Info_30);
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

        make__program_target__get_target_modules_8_p_0(Globals_11, ModuleTargetType_22, AllModules_21, &TargetModules_23, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_51_51);
        KeepGoing_24 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 15))) & (MR_Integer) 1);
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
  MR_Word conv0_STATE_VARIABLE_Info_13;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_121,
  MR_Word Var_122,
  MR_Word Var_123,
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
          make__program_target__build_library_10_p_0(Var_121, Var_122, Var_123, Succeeded_12, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
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
        MR_Word OrigOptionArgs_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 4))));
        MR_Word VeryVerbose_20;
        MR_Box Cookie_21;
        MR_Word Succeeded1_22;
        MR_Word Cleanup_23;
        MR_Word STATE_VARIABLE_Info_34_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word STATE_VARIABLE_Info_41_41;
        MR_Word STATE_VARIABLE_Info_44_44;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
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
        MR_Box conv1_STATE_VARIABLE_Info_44_44;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Integer Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Unsigned packed_word_2;

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
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_36);
        Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
        Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 1))));
        Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 2))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 3))));
        Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 5))));
        Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 6))));
        Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 7))));
        Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 8))));
        Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 9))));
        Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 10))));
        Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 11))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 12))));
        Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 13))));
        Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 14))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 15)));
        Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 16))));
        Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 17))));
        Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 18))));
        Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 19))));
        Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 20))));
        Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 21))));
        {
          STATE_VARIABLE_Info_34_34 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 1) = ((MR_Box) (Var_70));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 2) = ((MR_Box) (Var_71));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 3) = ((MR_Box) (Var_72));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 4) = ((MR_Box) (Var_35));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 5) = ((MR_Box) (Var_74));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 6) = ((MR_Box) (Var_75));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 7) = ((MR_Box) (Var_76));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 8) = ((MR_Box) (Var_77));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 9) = ((MR_Box) (Var_78));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 10) = ((MR_Box) (Var_79));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 11) = ((MR_Box) (Var_80));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 12) = ((MR_Box) (Var_81));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 13) = ((MR_Box) (Var_82));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 14) = ((MR_Box) (Var_83));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 15) = (MR_Box) (packed_word_1);
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 16) = ((MR_Box) (Var_86));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 17) = ((MR_Box) (Var_87));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 18) = ((MR_Box) (Var_88));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 19) = ((MR_Box) (Var_89));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 20) = ((MR_Box) (Var_90));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 21) = ((MR_Box) (Var_91));
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 73, &VeryVerbose_20);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_21);
        make__program_target__build_library_10_p_0(Var_121, Var_122, Var_123, &Succeeded1_22, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
        {
          Cleanup_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_23, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
          MR_hl_field(0, Cleanup_23, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_53_93_95_48_9_p_0_1));
          MR_hl_field(0, Cleanup_23, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_23, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Cleanup_23, 4) = ((MR_Box) (CacheDir_17));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_20, Cookie_21, Cleanup_23, Succeeded1_22, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_41_41)), &conv1_STATE_VARIABLE_Info_44_44);
        STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv1_STATE_VARIABLE_Info_44_44));
        make__program_target__remove_cache_dir_6_p_0(Globals_10, CacheDir_17, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
        Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 1))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 2))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 3))));
        Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 5))));
        Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 6))));
        Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 7))));
        Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 8))));
        Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 9))));
        Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 10))));
        Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 11))));
        Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 12))));
        Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 13))));
        Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 14))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 15)));
        Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 16))));
        Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 17))));
        Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 18))));
        Var_112 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 19))));
        Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 20))));
        Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 21))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_25 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_93));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_94));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_95));
          MR_hl_field(0, base, 4) = ((MR_Box) (OrigOptionArgs_19));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_97));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_98));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_99));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_100));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_101));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_102));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_103));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_104));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_105));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_106));
          MR_hl_field(0, base, 15) = (MR_Box) (packed_word_2);
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_109));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_110));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_111));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_112));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_113));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_114));
        }
      }
      break;
  }
}

static void MR_CALL 
make__program_target__build_library_10_p_0(
  MR_Word MainModuleName_11,
  MR_Word AllModules_12,
  MR_Word Globals_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Target_18;

  libs__globals__get_target_2_p_0(Globals_13, &Target_18);
  switch (Target_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word StaticSucceeded_25;
        MR_Word SharedLibsSupported_26;
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_Info_31_32;
        MR_Word STATE_VARIABLE_Specs_32_33;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (MainModuleName_11));
          MR_hl_field(0, Var_31, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        make__program_target__make_linked_target_9_p_0(Globals_13, Var_31, &StaticSucceeded_25, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_31_32, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_32_33);
        backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Globals_13, &SharedLibsSupported_26);
        switch (StaticSucceeded_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Succeeded_14 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_31_32;
              *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_32_33;
            }
            break;
          case (MR_Integer) 1:
            switch (SharedLibsSupported_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ErrorStream_30;

                  *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_31_32;
                  *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_32_33;
                  mercury__io__output_stream_3_p_0(&ErrorStream_30);
                  backend_libs__compile_target_code__make_library_init_file_8_p_0(Globals_13, ErrorStream_30, ErrorStream_30, MainModuleName_11, AllModules_12, Succeeded_14);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_36;
                  MR_Word SharedLibsSucceeded_48;

                  {
                    Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_36, 0) = ((MR_Box) (MainModuleName_11));
                    MR_hl_field(0, Var_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  }
                  make__program_target__make_linked_target_9_p_0(Globals_13, Var_36, &SharedLibsSucceeded_48, STATE_VARIABLE_Info_31_32, STATE_VARIABLE_Info_20, STATE_VARIABLE_Specs_32_33, STATE_VARIABLE_Specs_22);
                  switch (SharedLibsSucceeded_48) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *Succeeded_14 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ErrorStream_44;

                        mercury__io__output_stream_3_p_0(&ErrorStream_44);
                        backend_libs__compile_target_code__make_library_init_file_8_p_0(Globals_13, ErrorStream_44, ErrorStream_44, MainModuleName_11, AllModules_12, Succeeded_14);
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
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (MainModuleName_11));
          MR_hl_field(0, Var_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
        }
        make__program_target__make_linked_target_9_p_0(Globals_13, Var_40, Succeeded_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (MainModuleName_11));
          MR_hl_field(0, Var_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
        }
        make__program_target__make_linked_target_9_p_0(Globals_13, Var_42, Succeeded_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
      }
      break;
  }
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

  libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 679, &LibLinkages_19);
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
      make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_52_95_95_91_53_93_95_48_9_p_0(Globals_10, LinkedTargetFile_11, ExtraOptions_18, Globals_10, LinkedTargetSucceeded_12, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
    else
    {
      *STATE_VARIABLE_Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_20, STATE_VARIABLE_Specs_0_25);
      *LinkedTargetSucceeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_52_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_13;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_52_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_121,
  MR_Word Var_122,
  MR_Word Var_123,
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
          make__program_target__make_linked_target_1_10_p_0(Var_121, Var_122, Var_123, Succeeded_12, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
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
        MR_Word OrigOptionArgs_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 4))));
        MR_Word VeryVerbose_20;
        MR_Box Cookie_21;
        MR_Word Succeeded1_22;
        MR_Word Cleanup_23;
        MR_Word STATE_VARIABLE_Info_34_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word STATE_VARIABLE_Info_41_41;
        MR_Word STATE_VARIABLE_Info_44_44;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
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
        MR_Box conv1_STATE_VARIABLE_Info_44_44;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Integer Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Unsigned packed_word_2;

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
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_36);
        Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
        Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 1))));
        Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 2))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 3))));
        Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 5))));
        Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 6))));
        Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 7))));
        Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 8))));
        Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 9))));
        Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 10))));
        Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 11))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 12))));
        Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 13))));
        Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 14))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 15)));
        Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 16))));
        Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 17))));
        Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 18))));
        Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 19))));
        Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 20))));
        Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 21))));
        {
          STATE_VARIABLE_Info_34_34 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 1) = ((MR_Box) (Var_70));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 2) = ((MR_Box) (Var_71));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 3) = ((MR_Box) (Var_72));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 4) = ((MR_Box) (Var_35));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 5) = ((MR_Box) (Var_74));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 6) = ((MR_Box) (Var_75));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 7) = ((MR_Box) (Var_76));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 8) = ((MR_Box) (Var_77));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 9) = ((MR_Box) (Var_78));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 10) = ((MR_Box) (Var_79));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 11) = ((MR_Box) (Var_80));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 12) = ((MR_Box) (Var_81));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 13) = ((MR_Box) (Var_82));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 14) = ((MR_Box) (Var_83));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 15) = (MR_Box) (packed_word_1);
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 16) = ((MR_Box) (Var_86));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 17) = ((MR_Box) (Var_87));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 18) = ((MR_Box) (Var_88));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 19) = ((MR_Box) (Var_89));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 20) = ((MR_Box) (Var_90));
          MR_hl_field(0, STATE_VARIABLE_Info_34_34, 21) = ((MR_Box) (Var_91));
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 73, &VeryVerbose_20);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_21);
        make__program_target__make_linked_target_1_10_p_0(Var_121, Var_122, Var_123, &Succeeded1_22, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
        {
          Cleanup_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_23, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
          MR_hl_field(0, Cleanup_23, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_52_95_95_91_53_93_95_48_9_p_0_1));
          MR_hl_field(0, Cleanup_23, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_23, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Cleanup_23, 4) = ((MR_Box) (CacheDir_17));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_20, Cookie_21, Cleanup_23, Succeeded1_22, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_41_41)), &conv1_STATE_VARIABLE_Info_44_44);
        STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv1_STATE_VARIABLE_Info_44_44));
        make__program_target__remove_cache_dir_6_p_0(Globals_10, CacheDir_17, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
        Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 1))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 2))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 3))));
        Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 5))));
        Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 6))));
        Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 7))));
        Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 8))));
        Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 9))));
        Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 10))));
        Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 11))));
        Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 12))));
        Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 13))));
        Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 14))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 15)));
        Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 16))));
        Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 17))));
        Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 18))));
        Var_112 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 19))));
        Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 20))));
        Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 21))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_25 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_93));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_94));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_95));
          MR_hl_field(0, base, 4) = ((MR_Box) (OrigOptionArgs_19));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_97));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_98));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_99));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_100));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_101));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_102));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_103));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_104));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_105));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_106));
          MR_hl_field(0, base, 15) = (MR_Box) (packed_word_2);
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_109));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_110));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_111));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_112));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_113));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_114));
        }
      }
      break;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkedTargetFile_12,
  MR_Word ExtraOptions_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word MainModuleName_18 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_12, (MR_Integer) 0))));
  MR_Word IntermodAnalysis_20;
  MR_Word IntermodAnalysisSucceeded_21;
  MR_Word STATE_VARIABLE_Info_37_37;

  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 504, &IntermodAnalysis_20);
  switch (IntermodAnalysis_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodAnalysisSucceeded_21 = (MR_Integer) 1;
        STATE_VARIABLE_Info_37_37 = STATE_VARIABLE_Info_0_29;
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
      }
      break;
    case (MR_Integer) 1:
      make__program_target__make_misc_target_builder_10_p_0(Globals_11, MainModuleName_18, (MR_Word) ((MR_Unsigned) 8U), &IntermodAnalysisSucceeded_21, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
      break;
  }
  switch (IntermodAnalysisSucceeded_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_14 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_37_37;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetectedGradeFlags_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 3))));
        MR_Word OptionVariables_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 5))));
        MR_Word OptionArgs_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 4))));
        MR_Word MayBuild_25;

        make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 1, MainModuleName_18, DetectedGradeFlags_22, OptionVariables_23, OptionArgs_24, ExtraOptions_13, &MayBuild_25);
        if (((MR_tag((MR_Word) MayBuild_25)) == (MR_Integer) 1))
        {
          MR_Word BuildGlobals_27 = ((MR_Word) ((MR_hl_field(1, MayBuild_25, (MR_Integer) 1))));

          make__program_target__make_linked_target_2_7_p_0(BuildGlobals_27, LinkedTargetFile_12, Succeeded_14, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_30);
        }
        else
        {
          MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(0, MayBuild_25, (MR_Integer) 0))));
          MR_Word ErrorStream_28;

          libs__globals__get_error_output_stream_5_p_0(Globals_11, MainModuleName_18, &ErrorStream_28);
          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_28, Globals_11, Specs_16);
          *Succeeded_14 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_37_37;
        }
      }
      break;
  }
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
  MR_Word conv0_STATE_VARIABLE_Info_13;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0(
  MR_Word Var_114,
  MR_Word Var_115,
  MR_Word Var_116,
  MR_Word Var_117,
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
          make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(Var_114, Var_115, Var_116, Var_117, Succeeded_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
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
        MR_Word OrigOptionArgs_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
        MR_Word VeryVerbose_17;
        MR_Box Cookie_18;
        MR_Word Succeeded1_19;
        MR_Word Cleanup_20;
        MR_Word STATE_VARIABLE_Info_28_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_Info_35_35;
        MR_Word STATE_VARIABLE_Info_37_37;
        MR_Word STATE_VARIABLE_Info_39_39;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Integer Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Unsigned packed_word_1;
        MR_Box conv1_STATE_VARIABLE_Info_37_37;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
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
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Integer Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Unsigned packed_word_2;

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
        Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_16, Var_30);
        Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
        Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
        Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
        Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
        Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
        Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
        Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
        Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
        Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 10))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 11))));
        Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
        Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 13))));
        Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 14))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
        Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 16))));
        Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 17))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 18))));
        Var_82 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 19))));
        Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 20))));
        Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 21))));
        {
          STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (Var_62));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (Var_63));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (Var_64));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (Var_65));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (Var_29));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 5) = ((MR_Box) (Var_67));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 6) = ((MR_Box) (Var_68));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 7) = ((MR_Box) (Var_69));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 8) = ((MR_Box) (Var_70));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 9) = ((MR_Box) (Var_71));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 10) = ((MR_Box) (Var_72));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 11) = ((MR_Box) (Var_73));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 12) = ((MR_Box) (Var_74));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 13) = ((MR_Box) (Var_75));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 14) = ((MR_Box) (Var_76));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 15) = (MR_Box) (packed_word_1);
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 16) = ((MR_Box) (Var_79));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 17) = ((MR_Box) (Var_80));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 18) = ((MR_Box) (Var_81));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 19) = ((MR_Box) (Var_82));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 20) = ((MR_Box) (Var_83));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 21) = ((MR_Box) (Var_84));
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &VeryVerbose_17);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_18);
        make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(Var_114, Var_115, Var_116, Var_117, &Succeeded1_19, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_35_35);
        {
          Cleanup_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_20, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
          MR_hl_field(0, Cleanup_20, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_54_93_95_48_7_p_0_1));
          MR_hl_field(0, Cleanup_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_20, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Cleanup_20, 4) = ((MR_Box) (CacheDir_14));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_17, Cookie_18, Cleanup_20, Succeeded1_19, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv1_STATE_VARIABLE_Info_37_37);
        STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_Info_37_37));
        make__program_target__remove_cache_dir_6_p_0(Globals_8, CacheDir_14, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_39_39);
        Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 0))));
        Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 1))));
        Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 2))));
        Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 3))));
        Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 5))));
        Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 6))));
        Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 7))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 8))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 9))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 10))));
        Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 11))));
        Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 12))));
        Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 13))));
        Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 14))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 15)));
        Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 16))));
        Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 17))));
        Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 18))));
        Var_105 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 19))));
        Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 20))));
        Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 21))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_86));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_87));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_88));
          MR_hl_field(0, base, 4) = ((MR_Box) (OrigOptionArgs_16));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_90));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_91));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_92));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_93));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_94));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_95));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_96));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_97));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_98));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_99));
          MR_hl_field(0, base, 15) = (MR_Box) (packed_word_2);
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_102));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_103));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_104));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_105));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_106));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_107));
        }
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
  MR_Word conv0_STATE_VARIABLE_Info_13;

  make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0(
  MR_Word Var_114,
  MR_Word Var_115,
  MR_Word Var_116,
  MR_Word Var_117,
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
          make__program_target__build_analysis_files_9_p_0(Var_114, Var_115, Var_116, Var_117, Succeeded_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
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
        MR_Word OrigOptionArgs_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
        MR_Word VeryVerbose_17;
        MR_Box Cookie_18;
        MR_Word Succeeded1_19;
        MR_Word Cleanup_20;
        MR_Word STATE_VARIABLE_Info_28_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_Info_35_35;
        MR_Word STATE_VARIABLE_Info_37_37;
        MR_Word STATE_VARIABLE_Info_39_39;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Integer Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Unsigned packed_word_1;
        MR_Box conv1_STATE_VARIABLE_Info_37_37;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
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
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Integer Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Unsigned packed_word_2;

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
        Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_16, Var_30);
        Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
        Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
        Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
        Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
        Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
        Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
        Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
        Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
        Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 10))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 11))));
        Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
        Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 13))));
        Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 14))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
        Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 16))));
        Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 17))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 18))));
        Var_82 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 19))));
        Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 20))));
        Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 21))));
        {
          STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (Var_62));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (Var_63));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (Var_64));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (Var_65));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (Var_29));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 5) = ((MR_Box) (Var_67));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 6) = ((MR_Box) (Var_68));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 7) = ((MR_Box) (Var_69));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 8) = ((MR_Box) (Var_70));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 9) = ((MR_Box) (Var_71));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 10) = ((MR_Box) (Var_72));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 11) = ((MR_Box) (Var_73));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 12) = ((MR_Box) (Var_74));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 13) = ((MR_Box) (Var_75));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 14) = ((MR_Box) (Var_76));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 15) = (MR_Box) (packed_word_1);
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 16) = ((MR_Box) (Var_79));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 17) = ((MR_Box) (Var_80));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 18) = ((MR_Box) (Var_81));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 19) = ((MR_Box) (Var_82));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 20) = ((MR_Box) (Var_83));
          MR_hl_field(0, STATE_VARIABLE_Info_28_28, 21) = ((MR_Box) (Var_84));
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &VeryVerbose_17);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_18);
        make__program_target__build_analysis_files_9_p_0(Var_114, Var_115, Var_116, Var_117, &Succeeded1_19, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_35_35);
        {
          Cleanup_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Cleanup_20, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
          MR_hl_field(0, Cleanup_20, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_54_93_95_48_7_p_0_1));
          MR_hl_field(0, Cleanup_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Cleanup_20, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Cleanup_20, 4) = ((MR_Box) (CacheDir_14));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_17, Cookie_18, Cleanup_20, Succeeded1_19, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv1_STATE_VARIABLE_Info_37_37);
        STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_Info_37_37));
        make__program_target__remove_cache_dir_6_p_0(Globals_8, CacheDir_14, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_39_39);
        Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 0))));
        Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 1))));
        Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 2))));
        Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 3))));
        Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 5))));
        Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 6))));
        Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 7))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 8))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 9))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 10))));
        Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 11))));
        Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 12))));
        Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 13))));
        Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 14))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 15)));
        Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 16))));
        Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 17))));
        Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 18))));
        Var_105 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 19))));
        Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 20))));
        Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 21))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_86));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_87));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_88));
          MR_hl_field(0, base, 4) = ((MR_Box) (OrigOptionArgs_16));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_90));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_91));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_92));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_93));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_94));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_95));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_96));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_97));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_98));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_99));
          MR_hl_field(0, base, 15) = (MR_Box) (packed_word_2);
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_102));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_103));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_104));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_105));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_106));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_107));
        }
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

  succeeded = make__program_target__IntroducedFrom__pred__build_analysis_files_1__1249__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_28;

  make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1316__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_28);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_28));
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
  MR_bool succeeded = (Succeeded0_13 == (MR_Integer) 0);
  MR_Word KeepGoing_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 15))) & (MR_Integer) 1);

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
      MR_Word TargetModules1_48;
      MR_Word TargetModules_49;
      MR_Word Succeeded0_50;
      MR_Word LocalModulesOpts_51;
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 0))));
      MR_Word Var_56;
      MR_Word STATE_VARIABLE_Info_29_57;
      MR_Word ImpDepsGraph_89;
      MR_Word Order0_90;
      MR_Word Order1_91;
      MR_Word Order2_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Box conv4__IntDepsGraph_88;
      MR_Box conv3_ImpDepsGraph_89;

      {
        Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_96, 0) = ((MR_Box) (&make__program_target_scalar_common_7[4]));
        MR_hl_field(0, Var_96, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_1));
        MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_96, 3) = ((MR_Box) (Var_55));
      }
      {
        Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_93, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
        MR_hl_field(0, Var_93, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_2));
        MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_93, 3) = ((MR_Box) (Var_96));
      }
      Var_94 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      Var_95 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__program_target_scalar_common_1[3]), Var_93, AllModules_12, ((MR_Box) (Var_94)), &conv4__IntDepsGraph_88, ((MR_Box) (Var_95)), &conv3_ImpDepsGraph_89);
      ImpDepsGraph_89 = ((MR_Word) (conv3_ImpDepsGraph_89));
      mercury__digraph__atsort_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_89, &Order0_90);
      mercury__list__reverse_2_p_0((MR_Word) (&make__program_target_scalar_common_1[4]), Order0_90, &Order1_91);
      mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_1[4]), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__program_target_scalar_common_2[19]), Order1_91, &Order2_92);
      mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Order2_92, &TargetModules1_48);
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_3[4]));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__program_target__build_analysis_files_9_p_0_4));
        MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_56, 3) = ((MR_Box) (AllModules_12));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_56, TargetModules1_48, &TargetModules_49);
      make__dependencies__make_local_module_id_options_8_p_0(Globals_10, MainModuleName_11, &Succeeded0_50, &LocalModulesOpts_51, STATE_VARIABLE_Info_23_23, &STATE_VARIABLE_Info_29_57);
      switch (Succeeded0_50) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_14 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_29_57;
          }
          break;
        case (MR_Integer) 1:
          make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(Globals_10, TargetModules_49, LocalModulesOpts_51, Succeeded0_50, Succeeded_14, STATE_VARIABLE_Info_29_57, STATE_VARIABLE_Info_20);
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
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 15))) & (MR_Integer) 1);
    MR_Word Succeeded1_20;
    MR_Integer ReanalysisPasses_21;
    MR_Word ReanalyseSuboptimal_22;
    MR_Word InvalidModules_23;
    MR_Word SuboptimalModules_24;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_30_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_29 = make__util__make_dependency_list_2_f_0(TargetModules_13, (MR_Word) ((MR_Unsigned) 28U));
    make__build__foldl2_make_module_targets_9_p_0(KeepGoing_19, LocalModulesOpts_14, Globals_11, Var_29, &Succeeded1_20, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_30_30);
    ReanalysisPasses_21 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 19))));
    succeeded = (ReanalysisPasses_21 > (MR_Integer) 1);
    if (succeeded)
      ReanalyseSuboptimal_22 = (MR_Integer) 1;
    else
      ReanalyseSuboptimal_22 = (MR_Integer) 0;
    make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_22, Globals_11, TargetModules_13, &InvalidModules_23, &SuboptimalModules_24);
    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidModules_23);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Box conv1_STATE_VARIABLE_Info_37_37;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_25;

      make__util__maybe_reanalyse_modules_message_3_p_0(Globals_11);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[17]), InvalidModules_23, ((MR_Box) (STATE_VARIABLE_Info_30_30)), &conv1_STATE_VARIABLE_Info_37_37);
      STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_Info_37_37));
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Info_0_25 = STATE_VARIABLE_Info_37_37;
      STATE_VARIABLE_Info_0_25 = next_value_of_STATE_VARIABLE_Info_0_25;
      continue;
    }
    else
    {
      succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SuboptimalModules_24);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_41_41;
        MR_Word STATE_VARIABLE_Info_42_42;
        MR_Integer Var_43;
        MR_Box conv3_STATE_VARIABLE_Info_41_41;
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
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Unsigned packed_word_2;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_25;

        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[18]), SuboptimalModules_24, ((MR_Box) (STATE_VARIABLE_Info_30_30)), &conv3_STATE_VARIABLE_Info_41_41);
        STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv3_STATE_VARIABLE_Info_41_41));
        Var_43 = (MR_Integer) ((MR_Unsigned) ReanalysisPasses_21 - (MR_Unsigned) 1);
        Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 0))));
        Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 1))));
        Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 2))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 3))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 4))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 5))));
        Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 6))));
        Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 7))));
        Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 8))));
        Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 9))));
        Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 10))));
        Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 11))));
        Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 12))));
        Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 13))));
        Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 14))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 15)));
        Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 16))));
        Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 17))));
        Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 18))));
        Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 20))));
        Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_41_41, (MR_Integer) 21))));
        {
          STATE_VARIABLE_Info_42_42 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 0) = ((MR_Box) (Var_90));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 1) = ((MR_Box) (Var_91));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 2) = ((MR_Box) (Var_92));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 3) = ((MR_Box) (Var_93));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 4) = ((MR_Box) (Var_94));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 5) = ((MR_Box) (Var_95));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 6) = ((MR_Box) (Var_96));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 7) = ((MR_Box) (Var_97));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 8) = ((MR_Box) (Var_98));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 9) = ((MR_Box) (Var_99));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 10) = ((MR_Box) (Var_100));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 11) = ((MR_Box) (Var_101));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 12) = ((MR_Box) (Var_102));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 13) = ((MR_Box) (Var_103));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 14) = ((MR_Box) (Var_104));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 15) = (MR_Box) (packed_word_2);
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 16) = ((MR_Box) (Var_107));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 17) = ((MR_Box) (Var_108));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 18) = ((MR_Box) (Var_109));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 19) = ((MR_Box) (Var_43));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 20) = ((MR_Box) (Var_111));
          MR_hl_field(0, STATE_VARIABLE_Info_42_42, 21) = ((MR_Box) (Var_112));
        }
        make__util__maybe_reanalyse_modules_message_3_p_0(Globals_11);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Info_0_25 = STATE_VARIABLE_Info_42_42;
        STATE_VARIABLE_Info_0_25 = next_value_of_STATE_VARIABLE_Info_0_25;
        continue;
      }
      else
      {
        *Succeeded_16 = libs__maybe_util__and_2_f_0(Succeeded0_15, Succeeded1_20);
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_30_30;
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

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__program_target_scalar_common_1[5]), ((MR_Box) ((MR_Integer) 0)), Globals_2, Module_15, &ModuleStatus_20);
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
make__program_target__remove_cache_dir_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
}

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word Globals_7,
  MR_String CacheDir_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_11;

  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (CacheDir_8));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&make__program_target_scalar_common_8[2]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (make__program_target__remove_cache_dir_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) ((MR_String) "Removing %s\n"));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (Var_20));
  }
  make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 77, Var_17);
  mercury__io__file__remove_file_recursively_4_p_0(CacheDir_8, &Var_11);
  *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
}

static void MR_CALL 
make__program_target__should_we_use_analysis_cache_dir_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 504, &IntermodAnalysis_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 506, &Caching_11);
  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 706, &CacheDir0_12);
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
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 4))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_21);
      }
    }
  }
  if (succeeded)
    *UseAnalysisCacheDir_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String CacheDir_15;
    MR_Word MakeRes_45;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word UseGradeSubdirs_64;
    MR_String TargetArch_65;
    MR_Word DirComponents_67;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 685, &UseGradeSubdirs_64);
    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 703, &TargetArch_65);
    switch (UseGradeSubdirs_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DirComponents_67 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[13]));
        break;
      case (MR_Integer) 1:
        {
          MR_String Grade_66;
          MR_Word Var_71;
          MR_Word Var_72;

          libs__compute_grade__grade_directory_component_2_p_0(Globals_6, &Grade_66);
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (TargetArch_65));
            MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_1[13])));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (Grade_66));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            DirComponents_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DirComponents_67, 0) = ((MR_Box) ((MR_String) "Mercury"));
            MR_hl_field(1, DirComponents_67, 1) = ((MR_Box) (Var_71));
          }
        }
        break;
    }
    CacheDir_15 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_67);
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (CacheDir_15));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__program_target_scalar_common_8[2]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__program_target__should_we_use_analysis_cache_dir_5_p_0_1));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) ((MR_String) "Creating %s\n"));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (Var_52));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_6, (MR_Integer) 77, Var_49);
    mercury__dir__make_directory_4_p_0(CacheDir_15, &MakeRes_45);
    if ((MakeRes_45 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *UseAnalysisCacheDir_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CacheDir_15));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
      }
    else
    {
      MR_Word Error_46 = ((MR_Word) ((MR_hl_field(1, MakeRes_45, (MR_Integer) 0))));
      MR_String Var_56;

      Var_56 = mercury__io__error_message_1_f_0(Error_46);
      mercury__io__write_string_3_p_0((MR_String) "Error: making directory ");
      mercury__io__write_string_3_p_0(CacheDir_15);
      mercury__io__write_string_3_p_0((MR_String) ": ");
      mercury__io__write_string_3_p_0(Var_56);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      *UseAnalysisCacheDir_8 = (MR_Word) ((MR_Unsigned) 4U);
    }
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
  MR_String ObjExt_13;
  MR_String PicObjExt_14;
  MR_Word STATE_VARIABLE_Info_23_23;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word Var_32;
  MR_String Var_33;
  MR_Word Var_36;
  MR_Word Var_40;
  MR_String Var_41;

  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 559, &ObjExt_13);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 560, &PicObjExt_14);
  make__util__remove_make_module_file_9_p_0(Globals_8, Verbose_9, ModuleName_10, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[7])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[39])), STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_23_23);
  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_13);
  Var_32 = (MR_Word) (Var_33);
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_32));
  }
  make__util__remove_make_module_file_9_p_0(Globals_8, Verbose_9, ModuleName_10, Var_28, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[40])), STATE_VARIABLE_Info_23_23, &STATE_VARIABLE_Info_30_30);
  Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "_init", PicObjExt_14);
  Var_40 = (MR_Word) (Var_41);
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_40));
  }
  make__util__remove_make_module_file_9_p_0(Globals_8, Verbose_9, ModuleName_10, Var_36, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[41])), STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_16);
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
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__5_5;

  make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__4_4;

  make__util__linked_target_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  make__util__linked_target_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__make_main_module_realclean__2104__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word LinkedTargetTypes_11;
  MR_Word FileNames_12;
  MR_Word NoSubdirGlobals_13;
  MR_Word ThisDirFileNames_14;
  MR_String ThisDirInitFileName_15;
  MR_Word Var_20;
  MR_Word Var_46;
  MR_Word Var_51;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_Info_63_63;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_Info_72_72;
  MR_String ObjExt_99;
  MR_String PicObjExt_100;
  MR_Word STATE_VARIABLE_Info_23_105;
  MR_Word Var_110;
  MR_Word STATE_VARIABLE_Info_30_112;
  MR_Word Var_114;
  MR_String Var_115;
  MR_Word Var_118;
  MR_Word Var_120;
  MR_String Var_121;
  MR_Box conv1_STATE_VARIABLE_IO_47_47;
  MR_Box conv3_STATE_VARIABLE_IO_52_52;
  MR_Box conv6_STATE_VARIABLE_Info_63_63;
  MR_Box conv5_STATE_VARIABLE_IO_64_64;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (ModuleName_8));
  }
  make__util__verbose_make_msg_4_p_0(Globals_7, Var_20);
  LinkedTargetTypes_11 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[38]));
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&make__program_target_scalar_common_12[1]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_2));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, LinkedTargetTypes_11, &FileNames_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
  libs__globals__set_option_4_p_0((MR_Integer) 685, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[0])), Globals_7, &NoSubdirGlobals_13);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&make__program_target_scalar_common_12[1]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_3));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (NoSubdirGlobals_13));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, LinkedTargetTypes_11, &ThisDirFileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_52_52);
  parse_tree__file_names__module_name_to_file_name_9_p_0(NoSubdirGlobals_13, (MR_String) "predicate \140make.program_target.make_main_module_realclean\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[6])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[17])), ModuleName_8, &ThisDirInitFileName_15);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_6[4]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_4));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Integer) 73));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (ThisDirInitFileName_15));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_14, Var_67);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_12, Var_66);
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, Var_62, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv6_STATE_VARIABLE_Info_63_63, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_64_64);
  STATE_VARIABLE_Info_63_63 = ((MR_Word) (conv6_STATE_VARIABLE_Info_63_63));
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[6])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[17])), STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_72_72);
  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 559, &ObjExt_99);
  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 560, &PicObjExt_100);
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[7])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[39])), STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_23_105);
  Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_99);
  Var_114 = (MR_Word) (Var_115);
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_114));
  }
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, Var_110, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[40])), STATE_VARIABLE_Info_23_105, &STATE_VARIABLE_Info_30_112);
  Var_121 = mercury__string__f_43_43_2_f_0((MR_String) "_init", PicObjExt_100);
  Var_120 = (MR_Word) (Var_121);
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_120));
  }
  make__util__remove_make_module_file_9_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, Var_118, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[41])), STATE_VARIABLE_Info_30_112, STATE_VARIABLE_Info_17);
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

  make__program_target__IntroducedFrom__pred__make_install_dirs__1978__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_65);
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
  MR_String Prefix_74;
  MR_String LibDir_75;
  MR_Word Result1_76;
  MR_Word Result2_77;
  MR_String IntsSubdir_78;
  MR_Word Result3_79;
  MR_Word Results0_80;
  MR_Word Subdirs_81;
  MR_Word LinkResults_82;
  MR_Word Results_83;
  MR_String Var_86;
  MR_String Var_89;
  MR_String Var_92;
  MR_String Var_95;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Box conv1_STATE_VARIABLE_IO_61_103;

  make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, MainModuleName_9, &DepsSucceeded_13, &AllModules0_14, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
  AllModules_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules0_14);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 669, &Prefix_74);
  Var_86 = mercury__dir__f_slash_2_f_0(Prefix_74, (MR_String) "lib");
  LibDir_75 = mercury__dir__f_slash_2_f_0(Var_86, (MR_String) "mercury");
  Var_89 = mercury__dir__f_slash_2_f_0(LibDir_75, (MR_String) "inc");
  mercury__dir__make_directory_4_p_0(Var_89, &Result1_76);
  Var_92 = mercury__dir__f_slash_2_f_0(LibDir_75, (MR_String) "modules");
  mercury__dir__make_directory_4_p_0(Var_92, &Result2_77);
  Var_95 = mercury__dir__f_slash_2_f_0(LibDir_75, (MR_String) "ints");
  IntsSubdir_78 = mercury__dir__f_slash_2_f_0(Var_95, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(IntsSubdir_78, &Result3_79);
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (Result3_79));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Result2_77));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
  }
  {
    Results0_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Results0_80, 0) = ((MR_Box) (Result1_76));
    MR_hl_field(1, Results0_80, 1) = ((MR_Box) (Var_99));
  }
  Subdirs_81 = (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[28]));
  {
    Var_102 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_102, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
    MR_hl_field(0, Var_102, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_1));
    MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_102, 3) = ((MR_Box) (Globals_8));
    MR_hl_field(0, Var_102, 4) = ((MR_Box) (IntsSubdir_78));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, Subdirs_81, &LinkResults_82, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_61_103);
  LinkSucceeded_17 = libs__maybe_util__and_list_1_f_0(LinkResults_82);
  switch (LinkSucceeded_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MkDirResults_84;
        MR_Word Var_104;
        MR_Box conv3_STATE_VARIABLE_IO_63_105;

        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_104, 0) = ((MR_Box) (&make__program_target_scalar_common_11[1]));
          MR_hl_field(0, Var_104, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_2));
          MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_104, 3) = ((MR_Box) (IntsSubdir_78));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, Subdirs_81, &MkDirResults_84, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_63_105);
        Results_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), Results0_80, MkDirResults_84);
      }
      break;
    case (MR_Integer) 1:
      Results_83 = Results0_80;
      break;
  }
  make__program_target__print_mkdir_errors_4_p_0(Results_83, &DirSucceeded_16);
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
    MR_Box conv7_STATE_VARIABLE_Info_33_33;
    MR_Box conv6_STATE_VARIABLE_IO_34_34;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_5[5]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_3));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(0, Var_32, 4) = ((MR_Box) (LinkSucceeded_17));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, AllModules_15, &IntsSucceeded_18, ((MR_Box) (STATE_VARIABLE_Info_29_29)), &conv7_STATE_VARIABLE_Info_33_33, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_34_34);
    STATE_VARIABLE_Info_33_33 = ((MR_Word) (conv7_STATE_VARIABLE_Info_33_33));
    make__program_target__install_extra_headers_4_p_0(Globals_8, &ExtraHdrsSucceeded_19);
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
      MR_Word KeepGoing_22 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 15))) & (MR_Integer) 1);
      MR_Word LibGrades0_23;
      MR_Word LibGrades_24;

      libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 676, &LibGrades0_23);
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
make__program_target__install_library_grade_files_10_p_0_3(
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
make__program_target__install_library_grade_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
}

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
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

        make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 1, &LibFileName_22);
        make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 2, &SharedLibFileName_23);
        make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 4, &DllFileName_24);
        make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 6, &JarFileName_25);
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 669, &Prefix_26);
        succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "csharp");
        if (succeeded)
        {
          MR_String GradeLibDir_27;
          MR_String Var_48;
          MR_String Var_49;
          MR_String Var_50;
          MR_Word ErrorStream_91;
          MR_String Command_92;
          MR_Word Var_94;

          Var_50 = mercury__dir__f_slash_2_f_0(Prefix_26, (MR_String) "lib");
          Var_49 = mercury__dir__f_slash_2_f_0(Var_50, (MR_String) "mercury");
          Var_48 = mercury__dir__f_slash_2_f_0(Var_49, (MR_String) "lib");
          GradeLibDir_27 = mercury__dir__f_slash_2_f_0(Var_48, GradeDir_13);
          mercury__io__output_stream_3_p_0(&ErrorStream_91);
          {
            Var_94 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_94, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
            MR_hl_field(0, Var_94, 1) = ((MR_Box) (make__program_target__install_library_grade_files_10_p_0_1));
            MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_94, 3) = ((MR_Box) (DllFileName_24));
            MR_hl_field(0, Var_94, 4) = ((MR_Box) (GradeLibDir_27));
            MR_hl_field(0, Var_94, 5) = ((MR_Box) (ErrorStream_91));
          }
          make__util__verbose_make_msg_4_p_0(Globals_11, Var_94);
          Command_92 = libs__file_util__make_install_file_command_3_f_0(Globals_11, DllFileName_24, GradeLibDir_27);
          parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ErrorStream_91, ErrorStream_91, ErrorStream_91, (MR_Integer) 0, Command_92, &LibsSucceeded_28);
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
            MR_Word ErrorStream_97;
            MR_String Command_98;
            MR_Word Var_100;

            Var_58 = mercury__dir__f_slash_2_f_0(Prefix_26, (MR_String) "lib");
            Var_57 = mercury__dir__f_slash_2_f_0(Var_58, (MR_String) "mercury");
            Var_56 = mercury__dir__f_slash_2_f_0(Var_57, (MR_String) "lib");
            GradeLibDir_79 = mercury__dir__f_slash_2_f_0(Var_56, GradeDir_13);
            mercury__io__output_stream_3_p_0(&ErrorStream_97);
            {
              Var_100 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_100, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
              MR_hl_field(0, Var_100, 1) = ((MR_Box) (make__program_target__install_library_grade_files_10_p_0_2));
              MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_100, 3) = ((MR_Box) (JarFileName_25));
              MR_hl_field(0, Var_100, 4) = ((MR_Box) (GradeLibDir_79));
              MR_hl_field(0, Var_100, 5) = ((MR_Box) (ErrorStream_97));
            }
            make__util__verbose_make_msg_4_p_0(Globals_11, Var_100);
            Command_98 = libs__file_util__make_install_file_command_3_f_0(Globals_11, JarFileName_25, GradeLibDir_79);
            parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_11, ErrorStream_97, ErrorStream_97, ErrorStream_97, (MR_Integer) 0, Command_98, &LibsSucceeded_28);
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
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) (make__program_target__install_library_grade_files_10_p_0_3));
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

  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 669, &Prefix_12);
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
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[31])), &LinkResults_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_56_56);
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
make__program_target__maybe_install_library_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__generate_archive_index__2051__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
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

  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 679, &LibLinkages_14);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Linkage_9)), LibLinkages_14);
  if (succeeded)
  {
    MR_Word Succeeded0_15;
    MR_Word ErrorStream_22;
    MR_String Command_23;
    MR_Word Var_25;

    mercury__io__output_stream_3_p_0(&ErrorStream_22);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (make__program_target__maybe_install_library_file_7_p_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (FileName_10));
      MR_hl_field(0, Var_25, 4) = ((MR_Box) (InstallDir_11));
      MR_hl_field(0, Var_25, 5) = ((MR_Box) (ErrorStream_22));
    }
    make__util__verbose_make_msg_4_p_0(Globals_8, Var_25);
    Command_23 = libs__file_util__make_install_file_command_3_f_0(Globals_8, FileName_10, InstallDir_11);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_8, ErrorStream_22, ErrorStream_22, ErrorStream_22, (MR_Integer) 0, Command_23, &Succeeded0_15);
    succeeded = (strcmp(Linkage_9, (MR_String) "static") == 0);
    if (succeeded)
      succeeded = (Succeeded0_15 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String BaseFileName_16;
      MR_Word ErrorStream_28;
      MR_String RanLibCommand_29;
      MR_String RanLibFlags_30;
      MR_String Command_31;
      MR_Word Var_33;
      MR_Word Var_38;
      MR_String Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_String Var_42;
      MR_String Var_43;

      BaseFileName_16 = mercury__dir__det_basename_1_f_0(FileName_10);
      mercury__io__output_stream_3_p_0(&ErrorStream_28);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (make__program_target__maybe_install_library_file_7_p_0_2));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (BaseFileName_16));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (InstallDir_11));
        MR_hl_field(0, Var_33, 5) = ((MR_Box) (ErrorStream_28));
      }
      make__util__verbose_make_msg_4_p_0(Globals_8, Var_33);
      libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 618, &RanLibCommand_29);
      libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 619, &RanLibFlags_30);
      Var_39 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_29);
      Var_43 = mercury__dir__f_slash_2_f_0(InstallDir_11, BaseFileName_16);
      Var_42 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_43);
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (RanLibFlags_30));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
      }
      Command_31 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_38);
      parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_8, ErrorStream_28, ErrorStream_28, ErrorStream_28, (MR_Integer) 0, Command_31, Succeeded_12);
    }
    else
      *Succeeded_12 = Succeeded0_15;
  }
  else
    *Succeeded_12 = (MR_Integer) 1;
}

static void MR_CALL 
make__program_target__install_grade_init_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__program_target__IntroducedFrom__pred__install_file__1925__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
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
  MR_Word ErrorStream_32;
  MR_String Command_33;
  MR_Word Var_35;

  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 669, &Prefix_12);
  Var_20 = mercury__dir__f_slash_2_f_0(Prefix_12, (MR_String) "lib");
  Var_19 = mercury__dir__f_slash_2_f_0(Var_20, (MR_String) "mercury");
  Var_18 = mercury__dir__f_slash_2_f_0(Var_19, (MR_String) "modules");
  GradeModulesDir_13 = mercury__dir__f_slash_2_f_0(Var_18, GradeDir_8);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_7, (MR_String) "predicate \140make.program_target.install_grade_init\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[6])), (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[17])), ModuleName_9, &InitFileName_14);
  mercury__io__output_stream_3_p_0(&ErrorStream_32);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (make__program_target__install_grade_init_6_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (InitFileName_14));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (GradeModulesDir_13));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (ErrorStream_32));
  }
  make__util__verbose_make_msg_4_p_0(Globals_7, Var_35);
  Command_33 = libs__file_util__make_install_file_command_3_f_0(Globals_7, InitFileName_14, GradeModulesDir_13);
  parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_7, ErrorStream_32, ErrorStream_32, ErrorStream_32, (MR_Integer) 0, Command_33, Succeeded_10);
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Succeeded_15;

  make__program_target__install_extra_header_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Succeeded_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Succeeded_15));
}

static void MR_CALL 
make__program_target__install_extra_headers_4_p_0(
  MR_Word Globals_5,
  MR_Word * ExtraHdrsSucceeded_6)
{
  MR_Word ExtraHdrs_8;
  MR_String Prefix_9;
  MR_String IncDir_10;
  MR_String Var_15;
  MR_String Var_16;
  MR_Word Var_20;
  MR_Box conv2_ExtraHdrsSucceeded_6;
  MR_Box conv1_STATE_VARIABLE_IO_12;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 692, &ExtraHdrs_8);
  libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 669, &Prefix_9);
  Var_16 = mercury__dir__f_slash_2_f_0(Prefix_9, (MR_String) "lib");
  Var_15 = mercury__dir__f_slash_2_f_0(Var_16, (MR_String) "mercury");
  IncDir_10 = mercury__dir__f_slash_2_f_0(Var_15, (MR_String) "inc");
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (make__program_target__install_extra_headers_4_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Globals_5));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (IncDir_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, ExtraHdrs_8, ((MR_Box) ((MR_Integer) 1)), &conv2_ExtraHdrsSucceeded_6, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12);
  *ExtraHdrsSucceeded_6 = ((MR_Word) (conv2_ExtraHdrsSucceeded_6));
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
  KeepGoing_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 15))) & (MR_Integer) 1);
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
    AllModulesList_22 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_16);
    make__program_target__get_target_modules_8_p_0(Globals_8, IntermediateTargetType_20, AllModulesList_22, &ObjModulesAlpha_23, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_51_51);
    make__program_target__order_target_modules_7_p_0(Globals_8, ObjModulesAlpha_23, &ObjModules_24, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
    make__dependencies__remove_nested_modules_7_p_0(Globals_8, ObjModules_24, &ObjModulesNonnested_25, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
    IntermediateTargetsNonnested_26 = make__util__make_dependency_list_2_f_0(ObjModulesNonnested_25, IntermediateTargetType_20);
    ObjTargets_27 = make__util__make_dependency_list_2_f_0(ObjModules_24, ObjectTargetType_21);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_57, 0) = ((MR_Box) (&make__program_target_scalar_common_5[3]));
      MR_hl_field(0, Var_57, 1) = ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_1));
      MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_57, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(0, Var_57, 4) = ((MR_Box) (PIC_18));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, ObjModules_24, &ForeignObjTargetsList_28, ((MR_Box) (STATE_VARIABLE_Info_55_55)), &conv3_STATE_VARIABLE_Info_58_58, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_59_59);
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

      make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, IntermediateTargetsNonnested_26, &BuildDepsSucceeded0_32, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_63_63);
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

                    libs__globals__set_option_4_p_0((MR_Integer) 663, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[0])), Globals_8, &NoRebuildGlobals_34);
                    make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), NoRebuildGlobals_34, ObjTargets_27, &BuildDepsSucceeded1_35, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_71_71);
                  }
                  break;
              }
            }
            else
              make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, ObjTargets_27, &BuildDepsSucceeded1_35, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_71_71);
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
          make__build__foldl2_make_module_targets_9_p_0(KeepGoing_17, (MR_Word) ((MR_Unsigned) 0U), Globals_8, ForeignObjTargets_29, &BuildDepsSucceeded_31, STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_77_77);
          break;
      }
    }
    make__util__linked_target_file_name_6_p_0(Globals_8, MainModuleName_13, FileType_14, &OutputFileName_36);
    Var_83 = mercury__dir__this_directory_0_f_0();
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_83));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      MR_Box conv5_STATE_VARIABLE_Info_46;

      libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 73, &VeryVerbose_39);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_40);
      make__build__prepare_to_redirect_output_6_p_0(MainModuleName_13, &RedirectResult_41, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_89_89);
      if ((RedirectResult_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_42 = (MR_Integer) 0;
        STATE_VARIABLE_Info_93_93 = STATE_VARIABLE_Info_89_89;
      }
      else
      {
        MR_Word ErrorStream_43 = ((MR_Word) ((MR_hl_field(1, RedirectResult_41, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Info_91_91;

        make__program_target__build_linked_target_17_p_0(MainModuleName_13, FileType_14, OutputFileName_36, MaybeTimestamp_37, AllModules_16, ObjModules_24, CompilationTarget_19, PIC_18, DepsSucceeded_15, BuildDepsResult_38, Globals_8, ErrorStream_43, &Succeeded0_42, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_91_91);
        make__build__unredirect_output_7_p_0(Globals_8, MainModuleName_13, ErrorStream_43, STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_93_93);
      }
      {
        Cleanup_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Cleanup_44, 0) = ((MR_Box) (&make__program_target_scalar_common_5[4]));
        MR_hl_field(0, Cleanup_44, 1) = ((MR_Box) (make__program_target__make_linked_target_2_7_p_0_2));
        MR_hl_field(0, Cleanup_44, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Cleanup_44, 3) = ((MR_Box) (Globals_8));
        MR_hl_field(0, Cleanup_44, 4) = ((MR_Box) (MainModuleName_13));
        MR_hl_field(0, Cleanup_44, 5) = ((MR_Box) (FileType_14));
        MR_hl_field(0, Cleanup_44, 6) = ((MR_Box) (OutputFileName_36));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_39, Cookie_40, Cleanup_44, Succeeded0_42, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_93_93)), &conv5_STATE_VARIABLE_Info_46);
      *STATE_VARIABLE_Info_46 = ((MR_Word) (conv5_STATE_VARIABLE_Info_46));
    }
    else
    {
      *Succeeded_10 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_85_85;
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
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_5[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (Globals_8));
  }
  mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, NonnestedModules_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ParentModules_14, ((MR_Box) (STATE_VARIABLE_Info_28_28)), &conv3_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33_33);
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
  KeepGoing_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_32_32, (MR_Integer) 15))) & (MR_Integer) 1);
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
make__program_target__make_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Timestamps_9;

  make__program_target__delete_java_class_timestamps_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Timestamps_9);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Timestamps_9));
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
    MR_Word Var_32;
    MR_Box conv1_Timestamps_19;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Integer Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Unsigned packed_word_1;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Integer Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Unsigned packed_word_2;

    make__program_target__build_java_files_8_p_0(Globals_9, MainModuleName_10, OutOfDateModules_15, Succeeded_12, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_26_26);
    Timestamps0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 1))));
    Var_29 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]));
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__program_target_scalar_common_2[2]), (MR_Word) (&make__program_target_scalar_common_2[16]), Timestamps0_18, ((MR_Box) (Var_29)), &conv1_Timestamps_19);
    Timestamps_19 = ((MR_Word) (conv1_Timestamps_19));
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 2))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 4))));
    Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 5))));
    Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 6))));
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 7))));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 8))));
    Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 9))));
    Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 10))));
    Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 11))));
    Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 12))));
    Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 13))));
    Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 14))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 15)));
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 16))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 17))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 18))));
    Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 19))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 20))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 21))));
    {
      STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (Timestamps_19));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (Var_57));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_58));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (Var_59));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (Var_60));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (Var_61));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (Var_62));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (Var_63));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (Var_64));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (Var_65));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 11) = ((MR_Box) (Var_66));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 12) = ((MR_Box) (Var_67));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 13) = ((MR_Box) (Var_68));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 14) = ((MR_Box) (Var_69));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 15) = (MR_Box) (packed_word_1);
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 16) = ((MR_Box) (Var_72));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 17) = ((MR_Box) (Var_73));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 18) = ((MR_Box) (Var_74));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 19) = ((MR_Box) (Var_75));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 20) = ((MR_Box) (Var_76));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 21) = ((MR_Box) (Var_77));
    }
    Var_32 = make__util__init_target_file_timestamps_0_f_0();
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 0))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 1))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 3))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 4))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 5))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 6))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 7))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 8))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 9))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 10))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 11))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 12))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 13))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 14))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 15)));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 16))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 17))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 18))));
    Var_98 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 19))));
    Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 20))));
    Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_30_30, (MR_Integer) 21))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_79));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_81));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_82));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_90));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 15) = (MR_Box) (packed_word_2);
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_95));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_96));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_97));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_98));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_99));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_100));
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
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__6_6;

  backend_libs__compile_target_code__compile_java_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv3_HeadVar__6_6);
  *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__6_6));
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__7_7;

  parse_tree__file_names__module_name_to_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
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
  MR_Word JavaFiles_15;
  MR_Word RedirectResult_16;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_Info_34_34;
  MR_Box conv1_STATE_VARIABLE_IO_26_26;

  make__util__verbose_make_msg_4_p_0(Globals_9, (MR_Word) (&make__program_target_scalar_common_10[0]));
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (make__program_target__build_java_files_8_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_java_files\'/8"));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_25, 6) = ((MR_Box) (MR_mkword(1, &make__program_target_scalar_common_4[1])));
    MR_hl_field(0, Var_25, 7) = ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[11])));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, ModuleNames_11, &JavaFiles_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
  make__build__prepare_to_redirect_output_6_p_0(MainModuleName_10, &RedirectResult_16, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_34_34);
  if ((RedirectResult_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_12 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_34_34;
  }
  else
  {
    MR_Word ErrorStream_17 = ((MR_Word) ((MR_hl_field(1, RedirectResult_16, (MR_Integer) 0))));
    MR_String HeadJavaFile_47;
    MR_Word TailJavaFiles_48;
    MR_Word ProgressStream_49;
    MR_Word Var_51;
    MR_Box conv2_HeadJavaFile_47;

    mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), JavaFiles_15, &conv2_HeadJavaFile_47, &TailJavaFiles_48);
    HeadJavaFile_47 = ((MR_String) (conv2_HeadJavaFile_47));
    mercury__io__output_stream_3_p_0(&ProgressStream_49);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&make__program_target_scalar_common_5[2]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (make__program_target__build_java_files_8_p_0_3));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (ProgressStream_49));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) (ErrorStream_17));
      MR_hl_field(0, Var_51, 6) = ((MR_Box) (HeadJavaFile_47));
      MR_hl_field(0, Var_51, 7) = ((MR_Box) (TailJavaFiles_48));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_51, Succeeded_12);
    make__build__unredirect_output_7_p_0(Globals_9, MainModuleName_10, ErrorStream_17, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_19);
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
    make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, JavaTarget_16, &MaybeJavaTimestamp_18, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_31_31);
    make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, ClassTarget_17, &MaybeClassTimestamp_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_23);
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

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_28, (MR_Integer) 668, &MaybePreLinkCommand_33);
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
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_HeadVar__7_7;

  backend_libs__compile_target_code__link_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &conv16_HeadVar__7_7);
  *wrapper_arg_1 = ((MR_Box) (conv16_HeadVar__7_7));
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv14_HeadVar__7_7;

  parse_tree__file_names__module_name_to_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv14_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__7_7));
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
  MR_Box closure = closure_arg;
  MR_Word conv11_ForeignObjectFiles_12;
  MR_Word conv10_STATE_VARIABLE_MakeInfo_22;

  make__program_target__get_module_foreign_object_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv11_ForeignObjectFiles_12, ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_MakeInfo_22);
  *wrapper_arg_2 = ((MR_Box) (conv11_ForeignObjectFiles_12));
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_MakeInfo_22));
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv9_LambdaHeadVar__2_100;

  make__program_target__IntroducedFrom__pred__build_linked_target_2__572__1_4_p_0(((MR_String) (wrapper_arg_1)), &conv9_LambdaHeadVar__2_100);
  *wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_100));
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
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_3;
  MR_Word conv5_HeadVar__5_5;

  make__util__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv6_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv5_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv5_HeadVar__5_5));
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_91;

  conv2_LambdaHeadVar__2_91 = make__program_target__IntroducedFrom__func__build_linked_target_2__561__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_91));
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
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__5_5;

  make__dependencies__dependency_status_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
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
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74)
{
  MR_bool succeeded;
  MR_Word LinkObjects_33;
  MR_Word NoLinkObjsGlobals_34;
  MR_Word ProgressStream_36;
  MR_Word AllModulesList_37;
  MR_Word InitObjects_44;
  MR_Word DepsResult2_45;
  MR_Word ObjectsToCheck_46;
  MR_Word ExtraObjStatus_48;
  MR_Word DepsResult3_49;
  MR_Word BuildDepsSucceeded_50;
  MR_Word ExtraObjectTimestamps_51;
  MR_Word ExtraObjectDepsResult_54;
  MR_Word STATE_VARIABLE_Info_83_83;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_Info_87_87;
  MR_Word Var_93;
  MR_Word STATE_VARIABLE_Info_94_94;
  MR_Word Var_96;
  MR_String Var_97;
  MR_Box conv4_STATE_VARIABLE_Info_87_87;
  MR_Box conv3_STATE_VARIABLE_IO_88_88;
  MR_Box conv8_STATE_VARIABLE_Info_94_94;
  MR_Box conv7_STATE_VARIABLE_IO_95_95;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_18, (MR_Integer) 583, &LinkObjects_33);
  libs__globals__set_option_4_p_0((MR_Integer) 583, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[8])), Globals_18, &NoLinkObjsGlobals_34);
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
        STATE_VARIABLE_Info_83_83 = STATE_VARIABLE_Info_0_73;
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
          STATE_VARIABLE_Info_83_83 = STATE_VARIABLE_Info_0_73;
        }
        else
        {
          MR_String InitObject_41 = ((MR_String) ((MR_hl_field(1, InitObjectResult1_40, (MR_Integer) 0))));
          MR_Word FileTimestamps0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 1))));
          MR_Word FileTimestamps1_43;
          MR_Word Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 0))));
          MR_Word Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 2))));
          MR_Word Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 3))));
          MR_Word Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 4))));
          MR_Word Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 5))));
          MR_Word Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 6))));
          MR_Word Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 7))));
          MR_Word Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 8))));
          MR_Word Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 9))));
          MR_Word Var_148 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 10))));
          MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 11))));
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 12))));
          MR_Word Var_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 13))));
          MR_Word Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 14))));
          MR_Word Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 16))));
          MR_Word Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 17))));
          MR_Word Var_157 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 18))));
          MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 19))));
          MR_Word Var_159 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 20))));
          MR_Word Var_160 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 21))));
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_73, (MR_Integer) 15)));

          mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (InitObject_41)), FileTimestamps0_42, &FileTimestamps1_43);
          {
            STATE_VARIABLE_Info_83_83 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 0) = ((MR_Box) (Var_139));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 1) = ((MR_Box) (FileTimestamps1_43));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 2) = ((MR_Box) (Var_140));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 3) = ((MR_Box) (Var_141));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 4) = ((MR_Box) (Var_142));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 5) = ((MR_Box) (Var_143));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 6) = ((MR_Box) (Var_144));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 7) = ((MR_Box) (Var_145));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 8) = ((MR_Box) (Var_146));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 9) = ((MR_Box) (Var_147));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 10) = ((MR_Box) (Var_148));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 11) = ((MR_Box) (Var_149));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 12) = ((MR_Box) (Var_150));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 13) = ((MR_Box) (Var_151));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 14) = ((MR_Box) (Var_152));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 15) = (MR_Box) (packed_word_0);
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 16) = ((MR_Box) (Var_155));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 17) = ((MR_Box) (Var_156));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 18) = ((MR_Box) (Var_157));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 19) = ((MR_Box) (Var_158));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 20) = ((MR_Box) (Var_159));
            MR_hl_field(0, STATE_VARIABLE_Info_83_83, 21) = ((MR_Box) (Var_160));
          }
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
    Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (&make__program_target_scalar_common_6[1]));
    MR_hl_field(0, Var_85, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_1));
    MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_85, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
  }
  Var_86 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__program_target_scalar_common_2[14]), ObjectsToCheck_46);
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, Var_86, &ExtraObjStatus_48, ((MR_Box) (STATE_VARIABLE_Info_83_83)), &conv4_STATE_VARIABLE_Info_87_87, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_88_88);
  STATE_VARIABLE_Info_87_87 = ((MR_Word) (conv4_STATE_VARIABLE_Info_87_87));
  succeeded = mercury__list__member_2_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) ((MR_Integer) 3)), ExtraObjStatus_48);
  if (succeeded)
    DepsResult3_49 = (MR_Integer) 2;
  else
    DepsResult3_49 = DepsResult2_45;
  succeeded = (DepsResult3_49 == (MR_Integer) 2);
  if (succeeded)
    BuildDepsSucceeded_50 = (MR_Integer) 0;
  else
    BuildDepsSucceeded_50 = (MR_Integer) 1;
  Var_97 = mercury__dir__this_directory_0_f_0();
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&make__program_target_scalar_common_6[2]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_3));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (Var_96));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_93, ObjectsToCheck_46, &ExtraObjectTimestamps_51, ((MR_Box) (STATE_VARIABLE_Info_87_87)), &conv8_STATE_VARIABLE_Info_94_94, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_95_95);
  STATE_VARIABLE_Info_94_94 = ((MR_Word) (conv8_STATE_VARIABLE_Info_94_94));
  make__dependencies__check_dependency_timestamps_10_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NoLinkObjsGlobals_34, OutputFileName_21, MaybeTimestamp_22, BuildDepsSucceeded_50, ObjectsToCheck_46, (MR_Word) (&make__program_target_scalar_common_2[15]), ExtraObjectTimestamps_51, &ExtraObjectDepsResult_54);
  switch (DepsSucceeded_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        make__util__file_error_4_p_0(STATE_VARIABLE_Info_94_94, OutputFileName_21);
        *Succeeded_30 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_94_94;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DepsResult_313;

        switch (DepsResult3_49) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            DepsResult_313 = DepsResult3_49;
            break;
          case (MR_Integer) 1:
            DepsResult_313 = DepsResult3_49;
            break;
          case (MR_Integer) 0:
            DepsResult_313 = ExtraObjectDepsResult_54;
            break;
        }
        switch (DepsResult_313) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              make__util__file_error_4_p_0(STATE_VARIABLE_Info_94_94, OutputFileName_21);
              *Succeeded_30 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_94_94;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignObjectFileLists_61;
              MR_Word ForeignObjects_62;
              MR_Word ObjOtherExtToUse_63;
              MR_Word NewExt_66;
              MR_Word ObjList_67;
              MR_Word AllObjects_68;
              MR_Word CmdLineTargets0_69;
              MR_Word CmdLineTargets_70;
              MR_Word Var_115;
              MR_Word STATE_VARIABLE_Info_116_116;
              MR_Word Var_122;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_131;
              MR_Word Var_132;
              MR_Word STATE_VARIABLE_Info_133_133;
              MR_Word Var_184;
              MR_Word Var_185;
              MR_Word Var_186;
              MR_Word Var_187;
              MR_Word Var_188;
              MR_Word Var_189;
              MR_Word Var_190;
              MR_Word Var_191;
              MR_Word Var_192;
              MR_Word Var_193;
              MR_Word Var_194;
              MR_Word Var_195;
              MR_Word Var_196;
              MR_Word Var_197;
              MR_Word Var_198;
              MR_Word Var_201;
              MR_Word Var_202;
              MR_Integer Var_203;
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word Var_207;
              MR_Box conv13_STATE_VARIABLE_Info_116_116;
              MR_Box conv12_STATE_VARIABLE_IO_117_117;
              MR_Box conv15_STATE_VARIABLE_IO_123_123;
              MR_Unsigned packed_word_1;

              make__util__maybe_make_linked_target_message_4_p_0(NoLinkObjsGlobals_34, OutputFileName_21);
              {
                Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_115, 0) = ((MR_Box) (&make__program_target_scalar_common_5[1]));
                MR_hl_field(0, Var_115, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_5));
                MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_115, 3) = ((MR_Box) (Globals_18));
                MR_hl_field(0, Var_115, 4) = ((MR_Box) (PIC_26));
              }
              mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_115, AllModulesList_37, &ForeignObjectFileLists_61, ((MR_Box) (STATE_VARIABLE_Info_94_94)), &conv13_STATE_VARIABLE_Info_116_116, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_117_117);
              STATE_VARIABLE_Info_116_116 = ((MR_Word) (conv13_STATE_VARIABLE_Info_116_116));
              ForeignObjects_62 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjectFileLists_61);
              switch (CompilationTarget_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ObjNewExt_64;
                    MR_Word Var_65;

                    backend_libs__compile_target_code__pic_object_file_extension_5_p_0(NoLinkObjsGlobals_34, PIC_26, &ObjOtherExtToUse_63, &ObjNewExt_64, &Var_65);
                    {
                      NewExt_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, NewExt_66, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, NewExt_66, 1) = (MR_Box) ((MR_Unsigned) (ObjNewExt_64));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    ObjOtherExtToUse_63 = (MR_Word) (((MR_Box) ((MR_String) ".cs")));
                    NewExt_66 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[9]));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    ObjOtherExtToUse_63 = (MR_Word) (((MR_Box) ((MR_String) ".class")));
                    NewExt_66 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[10]));
                  }
                  break;
              }
              {
                Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_126, 0) = ((MR_Box) (ObjOtherExtToUse_63));
              }
              {
                Var_122 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_122, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
                MR_hl_field(0, Var_122, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_6));
                MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_122, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
                MR_hl_field(0, Var_122, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_linked_target_2\'/17"));
                MR_hl_field(0, Var_122, 5) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_122, 6) = ((MR_Box) (Var_126));
                MR_hl_field(0, Var_122, 7) = ((MR_Box) (NewExt_66));
              }
              mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, ObjModules_24, &ObjList_67, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_123_123);
              Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjects_62, LinkObjects_33);
              Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjList_67, Var_128);
              AllObjects_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_44, Var_127);
              {
                Var_129 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_129, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
                MR_hl_field(0, Var_129, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_7));
                MR_hl_field(0, Var_129, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_129, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
                MR_hl_field(0, Var_129, 4) = ((MR_Box) (ProgressStream_36));
                MR_hl_field(0, Var_129, 5) = ((MR_Box) (ErrorStream_29));
                MR_hl_field(0, Var_129, 6) = ((MR_Box) (FileType_20));
                MR_hl_field(0, Var_129, 7) = ((MR_Box) (MainModuleName_19));
                MR_hl_field(0, Var_129, 8) = ((MR_Box) (AllObjects_68));
              }
              libs__process_util__call_in_forked_process_4_p_0(Var_129, Succeeded_30);
              Var_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 0))));
              Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 1))));
              Var_186 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 2))));
              Var_187 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 3))));
              Var_188 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 4))));
              Var_189 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 5))));
              Var_190 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 6))));
              Var_191 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 7))));
              Var_192 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 8))));
              Var_193 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 9))));
              Var_194 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 10))));
              Var_195 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 11))));
              Var_196 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 12))));
              Var_197 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 13))));
              Var_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 14))));
              packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 15)));
              Var_201 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 16))));
              Var_202 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 17))));
              CmdLineTargets0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 18))));
              Var_203 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 19))));
              Var_204 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 20))));
              Var_205 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_116_116, (MR_Integer) 21))));
              {
                Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_132, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
              }
              {
                Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_131, 0) = ((MR_Box) (MainModuleName_19));
                MR_hl_field(0, Var_131, 1) = ((MR_Box) (Var_132));
              }
              mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_131)), CmdLineTargets0_69, &CmdLineTargets_70);
              Var_207 = Var_185;
              {
                STATE_VARIABLE_Info_133_133 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 0) = ((MR_Box) (Var_184));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 1) = ((MR_Box) (Var_185));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 2) = ((MR_Box) (Var_186));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 3) = ((MR_Box) (Var_187));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 4) = ((MR_Box) (Var_188));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 5) = ((MR_Box) (Var_189));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 6) = ((MR_Box) (Var_190));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 7) = ((MR_Box) (Var_191));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 8) = ((MR_Box) (Var_192));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 9) = ((MR_Box) (Var_193));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 10) = ((MR_Box) (Var_194));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 11) = ((MR_Box) (Var_195));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 12) = ((MR_Box) (Var_196));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 13) = ((MR_Box) (Var_197));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 14) = ((MR_Box) (Var_198));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 15) = (MR_Box) (packed_word_1);
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 16) = ((MR_Box) (Var_201));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 17) = ((MR_Box) (Var_202));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 18) = ((MR_Box) (CmdLineTargets_70));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 19) = ((MR_Box) (Var_203));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 20) = ((MR_Box) (Var_204));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 21) = ((MR_Box) (Var_205));
              }
              switch (*Succeeded_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    make__util__file_error_4_p_0(STATE_VARIABLE_Info_133_133, OutputFileName_21);
                    *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_133_133;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word FileTimestamps_72;

                    mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (OutputFileName_21)), Var_207, &FileTimestamps_72);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Info_74 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_184));
                      MR_hl_field(0, base, 1) = ((MR_Box) (FileTimestamps_72));
                      MR_hl_field(0, base, 2) = ((MR_Box) (Var_186));
                      MR_hl_field(0, base, 3) = ((MR_Box) (Var_187));
                      MR_hl_field(0, base, 4) = ((MR_Box) (Var_188));
                      MR_hl_field(0, base, 5) = ((MR_Box) (Var_189));
                      MR_hl_field(0, base, 6) = ((MR_Box) (Var_190));
                      MR_hl_field(0, base, 7) = ((MR_Box) (Var_191));
                      MR_hl_field(0, base, 8) = ((MR_Box) (Var_192));
                      MR_hl_field(0, base, 9) = ((MR_Box) (Var_193));
                      MR_hl_field(0, base, 10) = ((MR_Box) (Var_194));
                      MR_hl_field(0, base, 11) = ((MR_Box) (Var_195));
                      MR_hl_field(0, base, 12) = ((MR_Box) (Var_196));
                      MR_hl_field(0, base, 13) = ((MR_Box) (Var_197));
                      MR_hl_field(0, base, 14) = ((MR_Box) (Var_198));
                      MR_hl_field(0, base, 15) = (MR_Box) (packed_word_1);
                      MR_hl_field(0, base, 16) = ((MR_Box) (Var_201));
                      MR_hl_field(0, base, 17) = ((MR_Box) (Var_202));
                      MR_hl_field(0, base, 18) = ((MR_Box) (CmdLineTargets_70));
                      MR_hl_field(0, base, 19) = ((MR_Box) (Var_203));
                      MR_hl_field(0, base, 20) = ((MR_Box) (Var_204));
                      MR_hl_field(0, base, 21) = ((MR_Box) (Var_205));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word MainModuleLinkedTarget_57;
              MR_String MainModuleLinkedFileName_58;
              MR_Word UseGradeSubdirs_59;
              MR_Word Var_105;

              {
                Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_105, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
              }
              {
                MainModuleLinkedTarget_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MainModuleLinkedTarget_57, 0) = ((MR_Box) (MainModuleName_19));
                MR_hl_field(0, MainModuleLinkedTarget_57, 1) = ((MR_Box) (Var_105));
              }
              make__util__linked_target_file_name_6_p_0(Globals_18, MainModuleName_19, FileType_20, &MainModuleLinkedFileName_58);
              libs__globals__lookup_bool_option_3_p_0(NoLinkObjsGlobals_34, (MR_Integer) 685, &UseGradeSubdirs_59);
              switch (UseGradeSubdirs_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    make__util__maybe_warn_up_to_date_target_7_p_0(NoLinkObjsGlobals_34, MainModuleLinkedTarget_57, MainModuleLinkedFileName_58, STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_74);
                    *Succeeded_30 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MadeSymlinkOrCopy_60;

                    backend_libs__compile_target_code__post_link_make_symlink_or_copy_9_p_0(NoLinkObjsGlobals_34, ProgressStream_36, ErrorStream_29, FileType_20, MainModuleName_19, Succeeded_30, &MadeSymlinkOrCopy_60);
                    switch (MadeSymlinkOrCopy_60) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        make__util__maybe_warn_up_to_date_target_7_p_0(NoLinkObjsGlobals_34, MainModuleLinkedTarget_57, MainModuleLinkedFileName_58, STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_74);
                        break;
                      case (MR_Integer) 1:
                        {
                          make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(NoLinkObjsGlobals_34, MainModuleLinkedFileName_58);
                          *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_94_94;
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

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_40;

  make__program_target__IntroducedFrom__pred__order_target_modules__377__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_40);
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

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 690, &OrderByTimestamp_13);
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
        mercury__list__sort_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__program_target_scalar_common_2[12]), PairedModules_14, &OrderedPairs_15);
        mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[13]), OrderedPairs_15, OrderedModules_10);
      }
      break;
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TargetModules_18;
  MR_Word conv0_STATE_VARIABLE_Info_20;

  make__program_target__get_target_modules_2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetModules_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetModules_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
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
  MR_bool succeeded = (TargetType_10 == (MR_Word) ((MR_Unsigned) 4U));

  if (succeeded)
  {
    MR_Word Var_19;
    MR_Box conv4_TargetModules_12;
    MR_Box conv3_STATE_VARIABLE_Info_16;
    MR_Box conv2_STATE_VARIABLE_IO_18;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_5[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__program_target__get_target_modules_8_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (Globals_9));
    }
    mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, AllModules_11, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_TargetModules_12, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv3_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
    *TargetModules_12 = ((MR_Word) (conv4_TargetModules_12));
    *STATE_VARIABLE_Info_16 = ((MR_Word) (conv3_STATE_VARIABLE_Info_16));
  }
  else
  {
    *TargetModules_12 = AllModules_11;
    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
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
