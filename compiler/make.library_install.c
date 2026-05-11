/*
** Automatically generated from `make.library_install.m'
** by the Mercury compiler,
** version rotd-2026-05-11
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


// :- module make.library_install.
// :- implementation.

/*
INIT mercury__make__library_install__init
ENDINIT
*/

#include "make.library_install.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_code.mih"
#include "libs.copy_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.shell_util.mih"
#include "libs.system_cmds.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.clean.mih"
#include "make.get_module_dep_info.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
#include "make.program_target.mih"
#include "make.timestamp.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_target_id_0__plain_make__make_info__type_ctor_info_target_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__library_install__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__library_install____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_0[1];

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_0[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_0;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_1[1];

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_1[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_1;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_2[1];

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_2[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_2;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_3[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_3;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_4[1];

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_4[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_4;

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_1[1];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_2[1];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_3[3];

static const MR_DuPtagLayout make__library_install__make__library_install__du_ptag_ordered_ext_cur_gs_ns_0[3];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_name_ordered_ext_cur_gs_ns_0[5];

static const MR_Integer make__library_install__make__library_install__functor_number_map_ext_cur_gs_ns_0[5];

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_ngs_ns_0_0[1];

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_ngs_ns_0_0[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_0;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_ngs_ns_0_1[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_1;

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_ngs_ns_0_1[1];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_ngs_ns_0_3[1];

static const MR_DuPtagLayout make__library_install__make__library_install__du_ptag_ordered_ext_cur_ngs_ns_0[2];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_name_ordered_ext_cur_ngs_ns_0[2];

static const MR_Integer make__library_install__make__library_install__functor_number_map_ext_cur_ngs_ns_0[2];

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_libdir_info_0_0[2];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_libdir_info_0_0;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_libdir_info_0_1[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_libdir_info_0_1;

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_libdir_info_0_0[1];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_libdir_info_0_1[1];

static const MR_DuPtagLayout make__library_install__make__library_install__du_ptag_ordered_libdir_info_0[2];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_name_ordered_libdir_info_0[2];

static const MR_Integer make__library_install__make__library_install__functor_number_map_libdir_info_0[2];

static const MR_FA_TypeInfo_Struct2 make__library_install__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__library_install__type_ctor_info_libdir_info_0;

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1233__1_2_p_0(
  MR_String InstallDir_14,
  MR_String CurDir_23);

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1241__1_2_p_0(
  MR_String NgsDir_24,
  MR_String HeadVar__2_43);

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1238__1_2_p_0(
  MR_String InstallDir_14,
  MR_String CurDir_48);

static void MR_CALL 
make__library_install____Compare____libdir_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__library_install____Unify____libdir_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__library_install____Compare____libdir_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__library_install____Unify____libdir_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__library_install____Compare____ext_cur_ngs_ns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__library_install____Unify____ext_cur_ngs_ns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__library_install____Compare____ext_cur_gs_ns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__library_install____Unify____ext_cur_gs_ns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__library_install__remove_target_file_if_grade_dependent_4_p_0(
  MR_Word TargetId_5,
  MR_Word _Status_6,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11);

static void MR_CALL 
make__library_install__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word TargetId_5,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11);

static void MR_CALL 
make__library_install__install_file_to_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String InstallDir_11,
  MR_String FileName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_15,
  MR_Word * STATE_VARIABLE_Succeeded_16);

static void MR_CALL 
make__library_install__module_name_to_workspace_file_name_4_p_0(
  MR_Word Globals_5,
  MR_Word Ext_6,
  MR_Word ModuleName_7,
  MR_String * FileName_8);

static void MR_CALL 
make__library_install__legacy_install_grade_ints_and_headers_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word NgsLibDirMap_15,
  MR_Word GsLibDirMap_16,
  MR_String GradeDir_17,
  MR_Word ModuleName_18,
  MR_Word STATE_VARIABLE_Succeeded_0_36,
  MR_Word * STATE_VARIABLE_Succeeded_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
make__library_install__make_and_install_grade_specific_files_for_grades_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word NgsLibDirMap_13,
  MR_Word MainModuleName_14,
  MR_Word AllModuleNames_15,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word CleanAfter_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
make__library_install__legacy_install_ints_and_headers_for_module_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__legacy_install_ints_and_headers_for_module_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word NgsLibDirMap_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_Succeeded_0_32,
  MR_Word * STATE_VARIABLE_Succeeded_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static MR_bool MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LibDirMap_13,
  MR_String InstallDir_14,
  MR_Word ModuleName_15,
  MR_Tuple HeadVar__6_6,
  MR_Word STATE_VARIABLE_Succeeded_0_25,
  MR_Word * STATE_VARIABLE_Succeeded_26);

static void MR_CALL 
make__library_install__install_library_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__install_library_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__library_install__proposed_install_library_grade_specific_files_for_grade_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_String Grade_14,
  MR_Word MainModuleName_15,
  MR_Word AllModuleNames_16,
  MR_Word STATE_VARIABLE_Succeeded_0_29,
  MR_Word * STATE_VARIABLE_Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
make__library_install__proposed_install_library_grade_specific_files_for_grade_c_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String Prefix_13,
  MR_String Grade_14,
  MR_Word MainModuleName_15,
  MR_Word AllModuleNames_16,
  MR_Word STATE_VARIABLE_Succeeded_0_37,
  MR_Word * STATE_VARIABLE_Succeeded_38);

static void MR_CALL 
make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Linkage_12,
  MR_String InstallDir_13,
  MR_String FileName_14,
  MR_Word STATE_VARIABLE_Succeeded_0_22,
  MR_Word * STATE_VARIABLE_Succeeded_23);

static void MR_CALL 
make__library_install__proposed_install_all_gs_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__proposed_install_all_gs_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__library_install__proposed_install_all_gs_files_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String Prefix_13,
  MR_String Grade_14,
  MR_Word Ext_15,
  MR_Word ModuleNames_16,
  MR_Word STATE_VARIABLE_Succeeded_0_35,
  MR_Word * STATE_VARIABLE_Succeeded_36);

static void MR_CALL 
make__library_install__legacy_install_library_grade_specific_files_for_grade_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__library_install__legacy_install_library_grade_specific_files_for_grade_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word NgsLibDirMap_15,
  MR_String GradeDir_16,
  MR_Word MainModuleName_17,
  MR_Word AllModuleNames_18,
  MR_Word STATE_VARIABLE_Succeeded_0_38,
  MR_Word * STATE_VARIABLE_Succeeded_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
make__library_install__legacy_maybe_install_static_or_dynamic_archive_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Linkage_12,
  MR_String FileName_13,
  MR_String InstallDir_14,
  MR_Word STATE_VARIABLE_Succeeded_0_22,
  MR_Word * STATE_VARIABLE_Succeeded_23);

static void MR_CALL 
make__library_install__legacy_install_grade_init_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String GradeDir_11,
  MR_Word MainModuleName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_19,
  MR_Word * STATE_VARIABLE_Succeeded_20);

static void MR_CALL 
make__library_install__legacy_make_grade_specific_install_dirs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__library_install__legacy_make_grade_specific_install_dirs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String GradeDir_10,
  MR_Word * STATE_VARIABLE_DirSucceeded_20,
  MR_Word * STATE_VARIABLE_GsLibDirMap_21);

static void MR_CALL 
make__library_install__legacy_make_ngs_dir_symlink_to_cur_9_p_0(
  MR_Word ProgressStream_10,
  MR_String CurDir_11,
  MR_String ExtDirName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_19,
  MR_Word * STATE_VARIABLE_Succeeded_20,
  MR_Word STATE_VARIABLE_LibDirMap_0_21,
  MR_Word * STATE_VARIABLE_LibDirMap_22);

static void MR_CALL 
make__library_install__legacy_make_ngs_dir_9_p_0(
  MR_Word ProgressStream_10,
  MR_String CurDir_11,
  MR_String ExtDirName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_18,
  MR_Word * STATE_VARIABLE_Succeeded_19,
  MR_Word STATE_VARIABLE_LibDirMap_0_20,
  MR_Word * STATE_VARIABLE_LibDirMap_21);

static void MR_CALL 
make__library_install__legacy_make_nonext_dir_6_p_0(
  MR_Word ProgressStream_7,
  MR_String DirName_8,
  MR_Word STATE_VARIABLE_Succeeded_0_12,
  MR_Word * STATE_VARIABLE_Succeeded_13);

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grades_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word NgsLibDirMap_4,
  MR_Word MainModuleName_5,
  MR_Word AllModuleNames_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Succeeded_0_8,
  MR_Word * STATE_VARIABLE_Succeeded_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word NgsLibDirMap_15,
  MR_Word MainModuleName_16,
  MR_Word AllModuleNames_17,
  MR_String Grade_18,
  MR_Word STATE_VARIABLE_Succeeded_0_51,
  MR_Word * STATE_VARIABLE_Succeeded_52,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word AllModuleNames_11,
  MR_Word * STATE_VARIABLE_Succeeded_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__library_install__gather_module_dep_infos_loop_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModulesWithChildren_0_4,
  MR_Word * STATE_VARIABLE_ModulesWithChildren_5,
  MR_Word STATE_VARIABLE_ModulesWithoutDepInfo_0_6,
  MR_Word * STATE_VARIABLE_ModulesWithoutDepInfo_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
make__library_install__proposed_install_all_ngs_files_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__proposed_install_all_ngs_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__library_install__proposed_install_all_ngs_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_String Prefix_12,
  MR_Word Ext_13,
  MR_Word ModuleNames_14,
  MR_Word STATE_VARIABLE_Succeeded_0_26,
  MR_Word * STATE_VARIABLE_Succeeded_27);

static void MR_CALL 
make__library_install__make_dir_handle_any_error_5_p_0(
  MR_Word ProgressStream_6,
  MR_String DirName_7,
  MR_Word * Succeeded_8);

static void MR_CALL 
make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word * STATE_VARIABLE_DirSucceeded_17,
  MR_Word * STATE_VARIABLE_NgsLibDirMap_18);

static MR_bool MR_CALL 
make__library_install____Unify____ext_cur_gs_ns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__library_install____Compare____ext_cur_gs_ns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__library_install____Unify____ext_cur_ngs_ns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__library_install____Compare____ext_cur_ngs_ns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__library_install____Unify____libdir_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__library_install____Compare____libdir_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__library_install____Unify____libdir_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__library_install____Compare____libdir_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__library_install_scalar_common_1[3][3];

static /* final */ const MR_Box make__library_install_scalar_common_2[1][4];

static /* final */ const MR_Box make__library_install_scalar_common_3[28][2];

static /* final */ const MR_Box make__library_install_scalar_common_4[5][1];

static /* final */ const MR_Box make__library_install_scalar_common_5[2][12];

static /* final */ const MR_Box make__library_install_scalar_common_6[2][7];

static /* final */ const MR_Box make__library_install_scalar_common_7[1][11];

static /* final */ const MR_Box make__library_install_scalar_common_8[3][13];

static /* final */ const MR_Box make__library_install_scalar_common_9[1][15];

static /* final */ const MR_Box make__library_install_scalar_common_10[1][5];




static /* final */ const MR_Box make__library_install_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_status_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__library_install_scalar_common_6[1])),
    ((MR_Box) (make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_3[28][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "module_deps")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "mihs")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[0])))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "mhs")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "opts")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "int3s")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "int2s")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "ints")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "int0s")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[6])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[0]))),
    ((MR_Box) ((MR_String) "int0s"))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__library_install_scalar_common_3[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[10]))),
    ((MR_Box) ((MR_String) "opts"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[1]))),
    ((MR_Box) ((MR_String) "ints"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[2]))),
    ((MR_Box) ((MR_String) "int2s"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[3]))),
    ((MR_Box) ((MR_String) "int3s"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[4]))),
    ((MR_Box) ((MR_String) "module_deps"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[16]))),
    ((MR_Box) ((MR_String) "mhs"))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "--use-grade-subdirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "analyses")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "opts")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[23]))),
    ((MR_Box) ((MR_String) "mihs"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[25]))),
    ((MR_Box) ((MR_String) "analyses"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_4[5][1] = {
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
};

static /* final */ const MR_Box make__library_install_scalar_common_5[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0)),
    ((MR_Box) (&make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0)),
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
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__library_install__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_status_0)),
    ((MR_Box) (&make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_target_id_0__plain_make__make_info__type_ctor_info_target_status_0)),
    ((MR_Box) (&make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_target_id_0__plain_make__make_info__type_ctor_info_target_status_0))
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_7[1][11] = {
  /* row   0 */
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
};

static /* final */ const MR_Box make__library_install_scalar_common_8[3][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__library_install__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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
    ((MR_Box) (&make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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
    ((MR_Box) (&make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__library_install____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_9[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0)),
    ((MR_Box) (&make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_10[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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


static const MR_FA_PseudoTypeInfo_Struct2 make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_target_id_0__plain_make__make_info__type_ctor_info_target_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_id_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_status_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__library_install__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__library_install____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_0) };

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_0 = {
  (MR_String) "ext_cur_ngs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_0,
  NULL,
  make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gs_0) };

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_1 = {
  (MR_String) "ext_cur_gs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_1,
  NULL,
  make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_0) };

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_2 = {
  (MR_String) "ext_cur_ngs_gs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(2),
  make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_2,
  NULL,
  make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_cur_0) };

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_3 = {
  (MR_String) "ext_cur_ngs_gs_max_cur",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(3),
  make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_ngs_0) };

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_4 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(4),
  make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_4,
  NULL,
  make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_1[1] = { &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_0 };

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_2[1] = { &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_1 };

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_3[3] = {
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_2,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_3,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_4
};

static const MR_DuPtagLayout make__library_install__make__library_install__du_ptag_ordered_ext_cur_gs_ns_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(0)
  }
};

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_name_ordered_ext_cur_gs_ns_0[5] = {
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_1,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_0,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_2,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_3,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_4
};

static const MR_Integer make__library_install__make__library_install__functor_number_map_ext_cur_gs_ns_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct make__library_install__make__library_install__type_ctor_info_ext_cur_gs_ns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__library_install____Unify____ext_cur_gs_ns_0_0_10001)),
  ((MR_Box) (make__library_install____Compare____ext_cur_gs_ns_0_0_10001)),
  (MR_String) "make.library_install",
  (MR_String) "ext_cur_gs_ns",
  { make__library_install__make__library_install__du_name_ordered_ext_cur_gs_ns_0 },
  { make__library_install__make__library_install__du_ptag_ordered_ext_cur_gs_ns_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  make__library_install__make__library_install__functor_number_map_ext_cur_gs_ns_0,

};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_ngs_ns_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_0) };

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_ngs_ns_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_0 = {
  (MR_String) "ext_cur_ngs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__library_install__make__library_install__field_types_ext_cur_ngs_ns_0_0,
  NULL,
  make__library_install__make__library_install__field_locns_ext_cur_ngs_ns_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_ngs_ns_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_pgs_max_cur_0) };

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_1 = {
  (MR_String) "ext_cur_pgs_max_cur",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(1),
  make__library_install__make__library_install__field_types_ext_cur_ngs_ns_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_ngs_ns_0_1[1] = { &make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_0 };

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_ngs_ns_0_3[1] = { &make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_1 };

static const MR_DuPtagLayout make__library_install__make__library_install__du_ptag_ordered_ext_cur_ngs_ns_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__library_install__make__library_install__du_stag_ordered_ext_cur_ngs_ns_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_REMOTE_FULL_WORD,
    make__library_install__make__library_install__du_stag_ordered_ext_cur_ngs_ns_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(0)
  }
};

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_name_ordered_ext_cur_ngs_ns_0[2] = {
  &make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_0,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_1
};

static const MR_Integer make__library_install__make__library_install__functor_number_map_ext_cur_ngs_ns_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__library_install__make__library_install__type_ctor_info_ext_cur_ngs_ns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__library_install____Unify____ext_cur_ngs_ns_0_0_10001)),
  ((MR_Box) (make__library_install____Compare____ext_cur_ngs_ns_0_0_10001)),
  (MR_String) "make.library_install",
  (MR_String) "ext_cur_ngs_ns",
  { make__library_install__make__library_install__du_name_ordered_ext_cur_ngs_ns_0 },
  { make__library_install__make__library_install__du_ptag_ordered_ext_cur_ngs_ns_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  make__library_install__make__library_install__functor_number_map_ext_cur_ngs_ns_0,

};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_libdir_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_libdir_info_0_0 = {
  (MR_String) "install_to_cur_ngs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__library_install__make__library_install__field_types_libdir_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_libdir_info_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_libdir_info_0_1 = {
  (MR_String) "install_to_cur_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__library_install__make__library_install__field_types_libdir_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_libdir_info_0_0[1] = { &make__library_install__make__library_install__du_functor_desc_libdir_info_0_0 };

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_libdir_info_0_1[1] = { &make__library_install__make__library_install__du_functor_desc_libdir_info_0_1 };

static const MR_DuPtagLayout make__library_install__make__library_install__du_ptag_ordered_libdir_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__library_install__make__library_install__du_stag_ordered_libdir_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__library_install__make__library_install__du_stag_ordered_libdir_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_name_ordered_libdir_info_0[2] = {
  &make__library_install__make__library_install__du_functor_desc_libdir_info_0_0,
  &make__library_install__make__library_install__du_functor_desc_libdir_info_0_1
};

static const MR_Integer make__library_install__make__library_install__functor_number_map_libdir_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__library_install__make__library_install__type_ctor_info_libdir_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__library_install____Unify____libdir_info_0_0_10001)),
  ((MR_Box) (make__library_install____Compare____libdir_info_0_0_10001)),
  (MR_String) "make.library_install",
  (MR_String) "libdir_info",
  { make__library_install__make__library_install__du_name_ordered_libdir_info_0 },
  { make__library_install__make__library_install__du_ptag_ordered_libdir_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__library_install__make__library_install__functor_number_map_libdir_info_0,

};

static const MR_FA_TypeInfo_Struct2 make__library_install__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__library_install__type_ctor_info_libdir_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0)
  }
};

const MR_TypeCtorInfo_Struct make__library_install__make__library_install__type_ctor_info_libdir_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__library_install____Unify____libdir_map_0_0_10001)),
  ((MR_Box) (make__library_install____Compare____libdir_map_0_0_10001)),
  (MR_String) "make.library_install",
  (MR_String) "libdir_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__library_install__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__library_install__type_ctor_info_libdir_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1233__1_2_p_0(
  MR_String InstallDir_14,
  MR_String CurDir_23)
{
  MR_bool succeeded = (strcmp(InstallDir_14, CurDir_23) == 0);

  return succeeded;
}

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1241__1_2_p_0(
  MR_String NgsDir_24,
  MR_String HeadVar__2_43)
{
  MR_bool succeeded = (strcmp(HeadVar__2_43, NgsDir_24) == 0);

  return succeeded;
}

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1238__1_2_p_0(
  MR_String InstallDir_14,
  MR_String CurDir_48)
{
  MR_bool succeeded = (strcmp(InstallDir_14, CurDir_48) == 0);

  return succeeded;
}

static void MR_CALL 
make__library_install____Compare____libdir_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__library_install_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
make__library_install____Unify____libdir_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__library_install_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
make__library_install____Compare____libdir_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
  }
}

static MR_bool MR_CALL 
make__library_install____Unify____libdir_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
  }
  else
  {
    MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__library_install____Compare____ext_cur_ngs_ns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__file_names____Compare____ext_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
make__library_install____Unify____ext_cur_ngs_ns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__file_names____Unify____ext_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
make__library_install____Compare____ext_cur_gs_ns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__file_names____Compare____ext_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
make__library_install____Unify____ext_cur_gs_ns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__file_names____Unify____ext_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
make__library_install__remove_target_file_if_grade_dependent_4_p_0(
  MR_Word TargetId_5,
  MR_Word _Status_6,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11)
{
  make__library_install__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(TargetId_5, STATE_VARIABLE_StatusMap_0_10, STATE_VARIABLE_StatusMap_11);
}

static void MR_CALL 
make__library_install__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word TargetId_5,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11)
{
  MR_bool succeeded = ((MR_tag((MR_Word) TargetId_5)) == (MR_Integer) 0);
  MR_Word TargetType_9;
  MR_Word Var_12;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_12 = (MR_Word) ((MR_Word) (TargetId_5));
    TargetType_9 = ((MR_Word) ((MR_hl_field(0, Var_12, 1))));
    Var_13 = make__util__is_target_grade_dependent_1_f_0(TargetType_9);
    succeeded = (Var_13 == (MR_Integer) 1);
  }
  if (succeeded)
    mercury__version_hash_table__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), ((MR_Box) (TargetId_5)), STATE_VARIABLE_StatusMap_0_10, STATE_VARIABLE_StatusMap_11);
  else
    *STATE_VARIABLE_StatusMap_11 = STATE_VARIABLE_StatusMap_0_10;
}

static void MR_CALL 
make__library_install__install_file_to_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String InstallDir_11,
  MR_String FileName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_15,
  MR_Word * STATE_VARIABLE_Succeeded_16)
{
  MR_String InstallMsg_19;
  MR_Word CopySucceeded_20;

  make__util__verbose_make_four_part_msg_6_p_0(Globals_10, (MR_String) "Installing file", FileName_12, (MR_String) "in", InstallDir_11, &InstallMsg_19);
  make__util__maybe_write_msg_4_p_0(ProgressStream_9, InstallMsg_19);
  libs__copy_util__copy_file_to_directory_7_p_0(Globals_10, ProgressStream_9, FileName_12, InstallDir_11, &CopySucceeded_20);
  *STATE_VARIABLE_Succeeded_16 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_15, CopySucceeded_20);
}

static void MR_CALL 
make__library_install__module_name_to_workspace_file_name_4_p_0(
  MR_Word Globals_5,
  MR_Word Ext_6,
  MR_Word ModuleName_7,
  MR_String * FileName_8)
{
  MR_String _FileNameProposed_9;

  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_5, (MR_String) "predicate \140make.library_install.module_name_to_workspace_file_name\'/4", Ext_6, ModuleName_7, FileName_8, &_FileNameProposed_9);
}

static void MR_CALL 
make__library_install__legacy_install_grade_ints_and_headers_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word NgsLibDirMap_15,
  MR_Word GsLibDirMap_16,
  MR_String GradeDir_17,
  MR_Word ModuleName_18,
  MR_Word STATE_VARIABLE_Succeeded_0_36,
  MR_Word * STATE_VARIABLE_Succeeded_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_22;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_13, Globals_14, ModuleName_18, &MaybeModuleDepInfo_22, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
  if ((MaybeModuleDepInfo_22 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Succeeded_37 = (MR_Integer) 0;
  else
  {
    MR_String Prefix_24;
    MR_String LibDir_25;
    MR_Word Target_26;
    MR_Word HighLevelCode_27;
    MR_String GradeIntsDir_31;
    MR_Word AnyIntermod_32;
    MR_Word IntermodAnalysis_34;
    MR_String Var_45;
    MR_Word STATE_VARIABLE_Succeeded_2_60;
    MR_String Var_63;
    MR_Word STATE_VARIABLE_Succeeded_3_67;

    libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 573, &Prefix_24);
    Var_45 = mercury__dir__f_slash_2_f_0(Prefix_24, (MR_String) "lib");
    LibDir_25 = mercury__dir__f_slash_2_f_0(Var_45, (MR_String) "mercury");
    libs__globals__get_target_2_p_0(Globals_14, &Target_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 55, &HighLevelCode_27);
    succeeded = (Target_26 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (HighLevelCode_27 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String GradeIncDir_28;
      MR_String IntsDir_30;
      MR_String Var_49;
      MR_String Var_50;
      MR_Word STATE_VARIABLE_Succeeded_1_55;

      Var_50 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "lib");
      Var_49 = mercury__dir__f_slash_2_f_0(Var_50, GradeDir_17);
      GradeIncDir_28 = mercury__dir__f_slash_2_f_0(Var_49, (MR_String) "inc");
      make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_13, Globals_14, GsLibDirMap_16, GradeIncDir_28, ModuleName_18, (MR_Tuple) (&make__library_install_scalar_common_3[24]), STATE_VARIABLE_Succeeded_0_36, &STATE_VARIABLE_Succeeded_1_55);
      IntsDir_30 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
      make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_13, Globals_14, NgsLibDirMap_15, IntsDir_30, ModuleName_18, (MR_Tuple) (&make__library_install_scalar_common_3[24]), STATE_VARIABLE_Succeeded_1_55, &STATE_VARIABLE_Succeeded_2_60);
    }
    else
      STATE_VARIABLE_Succeeded_2_60 = STATE_VARIABLE_Succeeded_0_36;
    Var_63 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
    GradeIntsDir_31 = mercury__dir__f_slash_2_f_0(Var_63, GradeDir_17);
    libs__globals__get_any_intermod_2_p_0(Globals_14, &AnyIntermod_32);
    switch (AnyIntermod_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Succeeded_3_67 = STATE_VARIABLE_Succeeded_2_60;
        break;
      case (MR_Integer) 1:
        make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_13, Globals_14, GsLibDirMap_16, GradeIntsDir_31, ModuleName_18, (MR_Tuple) (&make__library_install_scalar_common_3[11]), STATE_VARIABLE_Succeeded_2_60, &STATE_VARIABLE_Succeeded_3_67);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 435, &IntermodAnalysis_34);
    switch (IntermodAnalysis_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Succeeded_37 = STATE_VARIABLE_Succeeded_3_67;
        break;
      case (MR_Integer) 1:
        make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_13, Globals_14, GsLibDirMap_16, GradeIntsDir_31, ModuleName_18, (MR_Tuple) (&make__library_install_scalar_common_3[26]), STATE_VARIABLE_Succeeded_3_67, STATE_VARIABLE_Succeeded_37);
        break;
    }
  }
}

static void MR_CALL 
make__library_install__make_and_install_grade_specific_files_for_grades_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word NgsLibDirMap_13,
  MR_Word MainModuleName_14,
  MR_Word AllModuleNames_15,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word CleanAfter_17,
  MR_Word * Succeeded_18)
{
  MR_Word LibSucceeded_20;
  MR_Word Specs_21;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_Info_1_29;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (MainModuleName_14));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  make__program_target__make_misc_target_10_p_0(ProgressStream_11, Globals_12, Var_28, &LibSucceeded_20, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_29, (MR_Word) ((MR_Unsigned) 0U), &Specs_21);
  switch (LibSucceeded_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ErrorStream_24;

        mercury__io__output_stream_3_p_0(&ErrorStream_24);
        parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_24, Globals_12, Specs_21);
        *Succeeded_18 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String GradeDir_22;
        MR_Word STATE_VARIABLE_Info_2_34;
        MR_Word InstallProposed_38;
        MR_Word STATE_VARIABLE_Succeeded_1_39;
        MR_Word STATE_VARIABLE_Info_1_40;
        MR_Word _Info_23;

        libs__globals__get_grade_dir_2_p_0(Globals_12, &GradeDir_22);
        make__library_install__legacy_install_library_grade_specific_files_for_grade_12_p_0(ProgressStream_11, Globals_12, NgsLibDirMap_13, GradeDir_22, MainModuleName_14, AllModuleNames_15, (MR_Integer) 1, &STATE_VARIABLE_Succeeded_1_39, STATE_VARIABLE_Info_1_29, &STATE_VARIABLE_Info_1_40);
        libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 675, &InstallProposed_38);
        switch (InstallProposed_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Succeeded_18 = STATE_VARIABLE_Succeeded_1_39;
              STATE_VARIABLE_Info_2_34 = STATE_VARIABLE_Info_1_40;
            }
            break;
          case (MR_Integer) 1:
            make__library_install__proposed_install_library_grade_specific_files_for_grade_11_p_0(ProgressStream_11, Globals_12, GradeDir_22, MainModuleName_14, AllModuleNames_15, STATE_VARIABLE_Succeeded_1_39, Succeeded_18, STATE_VARIABLE_Info_1_40, &STATE_VARIABLE_Info_2_34);
            break;
        }
        make__clean__maybe_make_grade_clean_9_p_0(ProgressStream_11, Globals_12, CleanAfter_17, MainModuleName_14, AllModuleNames_15, STATE_VARIABLE_Info_2_34, &_Info_23);
      }
      break;
  }
}

static void MR_CALL 
make__library_install__legacy_install_ints_and_headers_for_module_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Succeeded_26;

  make__library_install__legacy_install_subdir_file_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Tuple) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Succeeded_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Succeeded_26));
}

static void MR_CALL 
make__library_install__legacy_install_ints_and_headers_for_module_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word NgsLibDirMap_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_Succeeded_0_32,
  MR_Word * STATE_VARIABLE_Succeeded_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_18;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_12, ModuleName_14, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
  if ((MaybeModuleDepInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Succeeded_33 = (MR_Integer) 0;
  else
  {
    MR_Word ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, 0))));
    MR_Word Children_20;
    MR_Word ExtExtDirs0_21;
    MR_Word AnyIntermod_22;
    MR_Word ExtExtDirs1_24;
    MR_Word ExtExtDirs_25;
    MR_String Prefix_26;
    MR_String LibDir_27;
    MR_Word Target_28;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_62;
    MR_String Var_68;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_Succeeded_1_72;
    MR_String Var_74;
    MR_Box conv2_STATE_VARIABLE_Succeeded_1_72;
    MR_Box conv1_STATE_VARIABLE_IO_2_73;

    parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_19, &Children_20);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_20);
    if (succeeded)
      ExtExtDirs0_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
      ExtExtDirs0_21 = (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_3[9]));
    libs__globals__get_any_intermod_2_p_0(Globals_12, &AnyIntermod_22);
    switch (AnyIntermod_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ExtExtDirs1_24 = ExtExtDirs0_21;
        break;
      case (MR_Integer) 1:
        {
          ExtExtDirs1_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ExtExtDirs1_24, 0) = ((MR_Box) (&make__library_install_scalar_common_3[11]));
          MR_hl_field(1, ExtExtDirs1_24, 1) = ((MR_Box) (ExtExtDirs0_21));
        }
        break;
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (&make__library_install_scalar_common_3[15]));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (ExtExtDirs1_24));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (&make__library_install_scalar_common_3[14]));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (&make__library_install_scalar_common_3[13]));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_57));
    }
    {
      ExtExtDirs_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ExtExtDirs_25, 0) = ((MR_Box) (&make__library_install_scalar_common_3[12]));
      MR_hl_field(1, ExtExtDirs_25, 1) = ((MR_Box) (Var_52));
    }
    libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 573, &Prefix_26);
    Var_68 = mercury__dir__f_slash_2_f_0(Prefix_26, (MR_String) "lib");
    LibDir_27 = mercury__dir__f_slash_2_f_0(Var_68, (MR_String) "mercury");
    Var_74 = mercury__dir__f_slash_2_f_0(LibDir_27, (MR_String) "ints");
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (&make__library_install_scalar_common_8[2]));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) (make__library_install__legacy_install_ints_and_headers_for_module_10_p_0_1));
      MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_71, 3) = ((MR_Box) (ProgressStream_11));
      MR_hl_field(0, Var_71, 4) = ((MR_Box) (Globals_12));
      MR_hl_field(0, Var_71, 5) = ((MR_Box) (NgsLibDirMap_13));
      MR_hl_field(0, Var_71, 6) = ((MR_Box) (Var_74));
      MR_hl_field(0, Var_71, 7) = ((MR_Box) (ModuleName_14));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__library_install_scalar_common_2[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, ExtExtDirs_25, ((MR_Box) (STATE_VARIABLE_Succeeded_0_32)), &conv2_STATE_VARIABLE_Succeeded_1_72, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_73);
    STATE_VARIABLE_Succeeded_1_72 = ((MR_Word) (conv2_STATE_VARIABLE_Succeeded_1_72));
    libs__globals__get_target_2_p_0(Globals_12, &Target_28);
    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String FileName_30;
          MR_String Var_78;
          MR_Word STATE_VARIABLE_Succeeded_2_79;
          MR_String Var_82;
          MR_String InstallMsg_97;
          MR_Word CopySucceeded_98;
          MR_String _FileNameProposed_31;

          parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_12, (MR_String) "predicate \140make.library_install.legacy_install_ints_and_headers_for_module\'/10", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[16])), ModuleName_14, &FileName_30, &_FileNameProposed_31);
          Var_78 = mercury__dir__f_slash_2_f_0(LibDir_27, (MR_String) "inc");
          make__util__verbose_make_four_part_msg_6_p_0(Globals_12, (MR_String) "Installing file", FileName_30, (MR_String) "in", Var_78, &InstallMsg_97);
          make__util__maybe_write_msg_4_p_0(ProgressStream_11, InstallMsg_97);
          libs__copy_util__copy_file_to_directory_7_p_0(Globals_12, ProgressStream_11, FileName_30, Var_78, &CopySucceeded_98);
          STATE_VARIABLE_Succeeded_2_79 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_1_72, CopySucceeded_98);
          Var_82 = mercury__dir__f_slash_2_f_0(LibDir_27, (MR_String) "ints");
          make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_11, Globals_12, NgsLibDirMap_13, Var_82, ModuleName_14, (MR_Tuple) (&make__library_install_scalar_common_3[17]), STATE_VARIABLE_Succeeded_2_79, STATE_VARIABLE_Succeeded_33);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Succeeded_33 = STATE_VARIABLE_Succeeded_1_72;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Succeeded_33 = STATE_VARIABLE_Succeeded_1_72;
        break;
    }
  }
}

static MR_bool MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1233__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1241__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1238__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LibDirMap_13,
  MR_String InstallDir_14,
  MR_Word ModuleName_15,
  MR_Tuple HeadVar__6_6,
  MR_Word STATE_VARIABLE_Succeeded_0_25,
  MR_Word * STATE_VARIABLE_Succeeded_26)
{
  MR_bool succeeded;
  MR_Word Ext_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, 0))));
  MR_String ExtDir_17 = ((MR_String) ((MR_hl_field(0, HeadVar__6_6, 1))));
  MR_String FileName_20;
  MR_Word InstallTo_22;
  MR_String _FileNameProposed_21;
  MR_Box conv0_InstallTo_22;

  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_12, (MR_String) "predicate \140make.library_install.legacy_install_subdir_file\'/10", Ext_16, ModuleName_15, &FileName_20, &_FileNameProposed_21);
  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0), LibDirMap_13, ((MR_Box) (ExtDir_17)), &conv0_InstallTo_22);
  InstallTo_22 = ((MR_Word) (conv0_InstallTo_22));
  if (((MR_tag((MR_Word) InstallTo_22)) == (MR_Integer) 0))
  {
    MR_String NgsDir_24 = ((MR_String) ((MR_hl_field(0, InstallTo_22, 1))));
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Succeeded_2_38;
    MR_Word Var_40;
    MR_String Var_43;
    MR_String Var_44;
    MR_String CurDir_48 = ((MR_String) ((MR_hl_field(0, InstallTo_22, 0))));
    MR_String InstallMsg_51;
    MR_Word CopySucceeded_52;
    MR_String InstallMsg_56;
    MR_Word CopySucceeded_57;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&make__library_install_scalar_common_10[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (make__library_install__legacy_install_subdir_file_10_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (InstallDir_14));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (CurDir_48));
    }
    mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140make.library_install.legacy_install_subdir_file\'/10", (MR_String) "InstallDir != CurDir");
    make__util__verbose_make_four_part_msg_6_p_0(Globals_12, (MR_String) "Installing file", FileName_20, (MR_String) "in", CurDir_48, &InstallMsg_51);
    make__util__maybe_write_msg_4_p_0(ProgressStream_11, InstallMsg_51);
    libs__copy_util__copy_file_to_directory_7_p_0(Globals_12, ProgressStream_11, FileName_20, CurDir_48, &CopySucceeded_52);
    STATE_VARIABLE_Succeeded_2_38 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_25, CopySucceeded_52);
    Var_44 = mercury__dir__f_slash_2_f_0(InstallDir_14, (MR_String) "Mercury");
    Var_43 = mercury__dir__f_slash_2_f_0(Var_44, ExtDir_17);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&make__library_install_scalar_common_10[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (make__library_install__legacy_install_subdir_file_10_p_0_2));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (NgsDir_24));
      MR_hl_field(0, Var_40, 4) = ((MR_Box) (Var_43));
    }
    mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140make.library_install.legacy_install_subdir_file\'/10", (MR_String) "InstallDir != NgsDir");
    make__util__verbose_make_four_part_msg_6_p_0(Globals_12, (MR_String) "Installing file", FileName_20, (MR_String) "in", NgsDir_24, &InstallMsg_56);
    make__util__maybe_write_msg_4_p_0(ProgressStream_11, InstallMsg_56);
    libs__copy_util__copy_file_to_directory_7_p_0(Globals_12, ProgressStream_11, FileName_20, NgsDir_24, &CopySucceeded_57);
    *STATE_VARIABLE_Succeeded_26 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_2_38, CopySucceeded_57);
  }
  else
  {
    MR_String CurDir_23 = ((MR_String) ((MR_hl_field(1, InstallTo_22, 0))));
    MR_Word Var_30;
    MR_String InstallMsg_61;
    MR_Word CopySucceeded_62;

    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__library_install_scalar_common_10[0]));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__library_install__legacy_install_subdir_file_10_p_0_3));
      MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_30, 3) = ((MR_Box) (InstallDir_14));
      MR_hl_field(0, Var_30, 4) = ((MR_Box) (CurDir_23));
    }
    mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140make.library_install.legacy_install_subdir_file\'/10", (MR_String) "InstallDir != CurDir");
    make__util__verbose_make_four_part_msg_6_p_0(Globals_12, (MR_String) "Installing file", FileName_20, (MR_String) "in", CurDir_23, &InstallMsg_61);
    make__util__maybe_write_msg_4_p_0(ProgressStream_11, InstallMsg_61);
    libs__copy_util__copy_file_to_directory_7_p_0(Globals_12, ProgressStream_11, FileName_20, CurDir_23, &CopySucceeded_62);
    *STATE_VARIABLE_Succeeded_26 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_25, CopySucceeded_62);
  }
}

void MR_CALL 
make__library_install__install_library_gs_gas_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word AllModuleNames_13,
  MR_Word * STATE_VARIABLE_Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_String CurGrade_17;

  libs__globals__get_grade_dir_2_p_0(Globals_11, &CurGrade_17);
  make__library_install__proposed_install_library_grade_specific_files_for_grade_11_p_0(ProgressStream_10, Globals_11, CurGrade_17, MainModuleName_12, AllModuleNames_13, (MR_Integer) 1, STATE_VARIABLE_Succeeded_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
}

static void MR_CALL 
make__library_install__install_library_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Succeeded_16;

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Succeeded_16);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Succeeded_16));
}

static void MR_CALL 
make__library_install__install_library_9_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_Succeeded_33;
  MR_Word conv0_STATE_VARIABLE_Info_35;

  make__library_install__legacy_install_ints_and_headers_for_module_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_33, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_35);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_33));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_35));
}

void MR_CALL 
make__library_install__install_library_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word AllModuleNames_13,
  MR_Word * STATE_VARIABLE_Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word NgsLibDirMap_17;
  MR_Word STATE_VARIABLE_Succeeded_1_23;
  MR_Word STATE_VARIABLE_Info_1_24;
  MR_Word LegacySucceeded_26;
  MR_Word InstallProposed_27;
  MR_Word STATE_VARIABLE_Info_1_29;
  MR_Word DirSucceeded_32;
  MR_String CurGrade_56;
  MR_Word LibGrades_57;
  MR_Word NonCurLibGrades_58;
  MR_Word KeepGoing_59;
  MR_Word STATE_VARIABLE_Succeeded_1_60;
  MR_Word STATE_VARIABLE_Info_1_61;
  MR_Word InstallProposed_65;
  MR_Word STATE_VARIABLE_Succeeded_1_66;
  MR_Word STATE_VARIABLE_Info_1_67;

  make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0(ProgressStream_10, Globals_11, &DirSucceeded_32, &NgsLibDirMap_17);
  switch (DirSucceeded_32) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        LegacySucceeded_26 = (MR_Integer) 0;
        STATE_VARIABLE_Info_1_29 = STATE_VARIABLE_Info_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_34;
        MR_Word STATE_VARIABLE_Succeeded_1_36;
        MR_Word ExtraHdrs_42;
        MR_String Prefix_43;
        MR_String IncDir_44;
        MR_String Var_47;
        MR_String Var_48;
        MR_Word Var_52;
        MR_Box conv4_STATE_VARIABLE_Succeeded_1_36;
        MR_Box conv3_STATE_VARIABLE_Info_1_29;
        MR_Box conv2_STATE_VARIABLE_IO_2_37;
        MR_Box conv7_LegacySucceeded_26;
        MR_Box conv6_STATE_VARIABLE_IO_1_30;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__library_install_scalar_common_8[1]));
          MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__library_install__install_library_9_p_0_1));
          MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_34, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_34, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_34, 5) = ((MR_Box) (NgsLibDirMap_17));
        }
        mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, AllModuleNames_13, ((MR_Box) ((MR_Integer) 1)), &conv4_STATE_VARIABLE_Succeeded_1_36, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv3_STATE_VARIABLE_Info_1_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_37);
        STATE_VARIABLE_Succeeded_1_36 = ((MR_Word) (conv4_STATE_VARIABLE_Succeeded_1_36));
        STATE_VARIABLE_Info_1_29 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_29));
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 581, &ExtraHdrs_42);
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 573, &Prefix_43);
        Var_48 = mercury__dir__f_slash_2_f_0(Prefix_43, (MR_String) "lib");
        Var_47 = mercury__dir__f_slash_2_f_0(Var_48, (MR_String) "mercury");
        IncDir_44 = mercury__dir__f_slash_2_f_0(Var_47, (MR_String) "inc");
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_52, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
          MR_hl_field(0, Var_52, 1) = ((MR_Box) (make__library_install__install_library_9_p_0_2));
          MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_52, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_52, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_52, 5) = ((MR_Box) (IncDir_44));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, ExtraHdrs_42, ((MR_Box) (STATE_VARIABLE_Succeeded_1_36)), &conv7_LegacySucceeded_26, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_1_30);
        LegacySucceeded_26 = ((MR_Word) (conv7_LegacySucceeded_26));
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 675, &InstallProposed_27);
  switch (InstallProposed_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Succeeded_1_23 = LegacySucceeded_26;
        STATE_VARIABLE_Info_1_24 = STATE_VARIABLE_Info_1_29;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProposedSucceeded_28;

        make__library_install__proposed_install_library_non_grade_specific_files_8_p_0(ProgressStream_10, Globals_11, AllModuleNames_13, &ProposedSucceeded_28, STATE_VARIABLE_Info_1_29, &STATE_VARIABLE_Info_1_24);
        STATE_VARIABLE_Succeeded_1_23 = libs__maybe_util__and_2_f_0(LegacySucceeded_26, ProposedSucceeded_28);
      }
      break;
  }
  libs__globals__get_grade_dir_2_p_0(Globals_11, &CurGrade_56);
  make__library_install__legacy_install_library_grade_specific_files_for_grade_12_p_0(ProgressStream_10, Globals_11, NgsLibDirMap_17, CurGrade_56, MainModuleName_12, AllModuleNames_13, STATE_VARIABLE_Succeeded_1_23, &STATE_VARIABLE_Succeeded_1_66, STATE_VARIABLE_Info_1_24, &STATE_VARIABLE_Info_1_67);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 675, &InstallProposed_65);
  switch (InstallProposed_65) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Succeeded_1_60 = STATE_VARIABLE_Succeeded_1_66;
        STATE_VARIABLE_Info_1_61 = STATE_VARIABLE_Info_1_67;
      }
      break;
    case (MR_Integer) 1:
      make__library_install__proposed_install_library_grade_specific_files_for_grade_11_p_0(ProgressStream_10, Globals_11, CurGrade_56, MainModuleName_12, AllModuleNames_13, STATE_VARIABLE_Succeeded_1_66, &STATE_VARIABLE_Succeeded_1_60, STATE_VARIABLE_Info_1_67, &STATE_VARIABLE_Info_1_61);
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 574, &LibGrades_57);
  NonCurLibGrades_58 = mercury__list__delete_all_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibGrades_57, ((MR_Box) (CurGrade_56)));
  KeepGoing_59 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_1_61);
  make__library_install__setup_make_and_install_grade_specific_files_for_grades_13_p_0(ProgressStream_10, KeepGoing_59, Globals_11, NgsLibDirMap_17, MainModuleName_12, AllModuleNames_13, NonCurLibGrades_58, STATE_VARIABLE_Succeeded_1_60, STATE_VARIABLE_Succeeded_18, STATE_VARIABLE_Info_1_61, STATE_VARIABLE_Info_20);
}

static void MR_CALL 
make__library_install__proposed_install_library_grade_specific_files_for_grade_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_String Grade_14,
  MR_Word MainModuleName_15,
  MR_Word AllModuleNames_16,
  MR_Word STATE_VARIABLE_Succeeded_0_29,
  MR_Word * STATE_VARIABLE_Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_Word ModulesWithChildrenCord_50;
  MR_Word ModulesWithoutDepInfoCord_51;
  MR_Word ModulesWithoutDepInfo_52;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word _ModulesWithChildren_20;

  Var_55 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_56 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  make__library_install__gather_module_dep_infos_loop_11_p_0(ProgressStream_12, Globals_13, AllModuleNames_16, Var_55, &ModulesWithChildrenCord_50, Var_56, &ModulesWithoutDepInfoCord_51, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
  _ModulesWithChildren_20 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesWithChildrenCord_50);
  ModulesWithoutDepInfo_52 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesWithoutDepInfoCord_51);
  if ((ModulesWithoutDepInfo_52 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Prefix0_21;
    MR_String Prefix_22;
    MR_Word AnyIntermod_24;
    MR_Word IntermodAnalysis_26;
    MR_Word Target_28;
    MR_Word STATE_VARIABLE_Succeeded_2_41;
    MR_Word STATE_VARIABLE_Succeeded_3_44;
    MR_Word STATE_VARIABLE_Succeeded_4_48;

    libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 573, &Prefix0_21);
    Prefix_22 = mercury__dir__f_slash_2_f_0(Prefix0_21, (MR_String) "MercurySystem");
    make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_12, Globals_13, Prefix_22, Grade_14, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[4])), AllModuleNames_16, STATE_VARIABLE_Succeeded_0_29, &STATE_VARIABLE_Succeeded_2_41);
    libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_24);
    switch (AnyIntermod_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Succeeded_3_44 = STATE_VARIABLE_Succeeded_2_41;
        break;
      case (MR_Integer) 1:
        make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_12, Globals_13, Prefix_22, Grade_14, (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[27])), AllModuleNames_16, STATE_VARIABLE_Succeeded_2_41, &STATE_VARIABLE_Succeeded_3_44);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 435, &IntermodAnalysis_26);
    switch (IntermodAnalysis_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Succeeded_4_48 = STATE_VARIABLE_Succeeded_3_44;
        break;
      case (MR_Integer) 1:
        make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_12, Globals_13, Prefix_22, Grade_14, (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[25])), AllModuleNames_16, STATE_VARIABLE_Succeeded_3_44, &STATE_VARIABLE_Succeeded_4_48);
        break;
    }
    libs__globals__get_target_2_p_0(Globals_13, &Target_28);
    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        make__library_install__proposed_install_library_grade_specific_files_for_grade_c_10_p_0(ProgressStream_12, Globals_13, Prefix_22, Grade_14, MainModuleName_15, AllModuleNames_16, STATE_VARIABLE_Succeeded_4_48, STATE_VARIABLE_Succeeded_30);
        break;
      case (MR_Integer) 1:
        {
          MR_String CilDllFileName_60;
          MR_String ProposedCilDllDirName_63;
          MR_String CilDllInstallDir_64;
          MR_Word MakeCilDllInstallDirSucceeded_65;
          MR_String Var_66;
          MR_String _FileNameProposed_68;
          MR_String Var_61;
          MR_String _LegacyCilDllDirName_62;

          parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_13, (MR_String) "predicate \140make.library_install.module_name_to_workspace_file_name\'/4", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[2])), MainModuleName_15, &CilDllFileName_60, &_FileNameProposed_68);
          parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0((MR_Integer) 2, &Var_61, &_LegacyCilDllDirName_62, &ProposedCilDllDirName_63);
          Var_66 = mercury__dir__f_slash_2_f_0(Prefix_22, ProposedCilDllDirName_63);
          CilDllInstallDir_64 = mercury__dir__f_slash_2_f_0(Var_66, Grade_14);
          make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_12, CilDllInstallDir_64, &MakeCilDllInstallDirSucceeded_65);
          switch (MakeCilDllInstallDirSucceeded_65) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Succeeded_30 = STATE_VARIABLE_Succeeded_4_48;
              break;
            case (MR_Integer) 1:
              {
                MR_String InstallMsg_70;
                MR_Word CopySucceeded_71;

                make__util__verbose_make_four_part_msg_6_p_0(Globals_13, (MR_String) "Installing file", CilDllFileName_60, (MR_String) "in", CilDllInstallDir_64, &InstallMsg_70);
                make__util__maybe_write_msg_4_p_0(ProgressStream_12, InstallMsg_70);
                libs__copy_util__copy_file_to_directory_7_p_0(Globals_13, ProgressStream_12, CilDllFileName_60, CilDllInstallDir_64, &CopySucceeded_71);
                *STATE_VARIABLE_Succeeded_30 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_4_48, CopySucceeded_71);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String JarFileName_77;
          MR_String ProposedJarDirName_80;
          MR_String JarInstallDir_81;
          MR_Word MakeJarInstallDirSucceeded_82;
          MR_String Var_83;
          MR_String _FileNameProposed_85;
          MR_String Var_78;
          MR_String _LegacyJarDirName_79;

          parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_13, (MR_String) "predicate \140make.library_install.module_name_to_workspace_file_name\'/4", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[1])), MainModuleName_15, &JarFileName_77, &_FileNameProposed_85);
          parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0((MR_Integer) 1, &Var_78, &_LegacyJarDirName_79, &ProposedJarDirName_80);
          Var_83 = mercury__dir__f_slash_2_f_0(Prefix_22, ProposedJarDirName_80);
          JarInstallDir_81 = mercury__dir__f_slash_2_f_0(Var_83, Grade_14);
          make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_12, JarInstallDir_81, &MakeJarInstallDirSucceeded_82);
          switch (MakeJarInstallDirSucceeded_82) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Succeeded_30 = STATE_VARIABLE_Succeeded_4_48;
              break;
            case (MR_Integer) 1:
              {
                MR_String InstallMsg_87;
                MR_Word CopySucceeded_88;

                make__util__verbose_make_four_part_msg_6_p_0(Globals_13, (MR_String) "Installing file", JarFileName_77, (MR_String) "in", JarInstallDir_81, &InstallMsg_87);
                make__util__maybe_write_msg_4_p_0(ProgressStream_12, InstallMsg_87);
                libs__copy_util__copy_file_to_directory_7_p_0(Globals_13, ProgressStream_12, JarFileName_77, JarInstallDir_81, &CopySucceeded_88);
                *STATE_VARIABLE_Succeeded_30 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_4_48, CopySucceeded_88);
              }
              break;
          }
        }
        break;
    }
  }
  else
    *STATE_VARIABLE_Succeeded_30 = (MR_Integer) 0;
}

static void MR_CALL 
make__library_install__proposed_install_library_grade_specific_files_for_grade_c_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String Prefix_13,
  MR_String Grade_14,
  MR_Word MainModuleName_15,
  MR_Word AllModuleNames_16,
  MR_Word STATE_VARIABLE_Succeeded_0_37,
  MR_Word * STATE_VARIABLE_Succeeded_38)
{
  MR_bool succeeded;
  MR_Word HighLevelCode_20;
  MR_String StaticLibFileName_26;
  MR_String SharedLibFileName_27;
  MR_String StaticDirName_29;
  MR_String SharedDirName_31;
  MR_String TargetArch_32;
  MR_String StaticInstallDir_33;
  MR_String SharedInstallDir_34;
  MR_Word MakeStaticInstallDirSucceeded_35;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_Succeeded_1_43;
  MR_Word STATE_VARIABLE_Succeeded_2_48;
  MR_String Var_53;
  MR_String Var_54;
  MR_String Var_55;
  MR_String Var_56;
  MR_String _LibFileNameProposed_63;
  MR_String _LibFileNameProposed_65;
  MR_String Var_28;
  MR_String Var_30;

  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (MainModuleName_15));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_11, Globals_12, Prefix_13, Grade_14, (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[0])), Var_42, STATE_VARIABLE_Succeeded_0_37, &STATE_VARIABLE_Succeeded_1_43);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 55, &HighLevelCode_20);
  switch (HighLevelCode_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Succeeded_2_48 = STATE_VARIABLE_Succeeded_1_43;
      break;
    case (MR_Integer) 1:
      make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_11, Globals_12, Prefix_13, Grade_14, (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[23])), AllModuleNames_16, STATE_VARIABLE_Succeeded_1_43, &STATE_VARIABLE_Succeeded_2_48);
      break;
  }
  parse_tree__file_names__module_name_to_lib_file_name_7_p_0(Globals_12, (MR_String) "predicate \140make.library_install.module_name_to_workspace_lib_file_name\'/5", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[19])), MainModuleName_15, &StaticLibFileName_26, &_LibFileNameProposed_63);
  parse_tree__file_names__module_name_to_lib_file_name_7_p_0(Globals_12, (MR_String) "predicate \140make.library_install.module_name_to_workspace_lib_file_name\'/5", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[20])), MainModuleName_15, &SharedLibFileName_27, &_LibFileNameProposed_65);
  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_12, (MR_Integer) 7, &Var_28, &StaticDirName_29);
  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_12, (MR_Integer) 8, &Var_30, &SharedDirName_31);
  libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 600, &TargetArch_32);
  Var_54 = mercury__dir__f_slash_2_f_0(Prefix_13, StaticDirName_29);
  Var_53 = mercury__dir__f_slash_2_f_0(Var_54, Grade_14);
  StaticInstallDir_33 = mercury__dir__f_slash_2_f_0(Var_53, TargetArch_32);
  Var_56 = mercury__dir__f_slash_2_f_0(Prefix_13, SharedDirName_31);
  Var_55 = mercury__dir__f_slash_2_f_0(Var_56, Grade_14);
  SharedInstallDir_34 = mercury__dir__f_slash_2_f_0(Var_55, TargetArch_32);
  make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_11, StaticInstallDir_33, &MakeStaticInstallDirSucceeded_35);
  switch (MakeStaticInstallDirSucceeded_35) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Succeeded_38 = STATE_VARIABLE_Succeeded_2_48;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Succeeded_3_59;
        MR_Word LibLinkages_67;

        libs__globals__get_library_install_linkages_2_p_0(Globals_12, &LibLinkages_67);
        succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0), ((MR_Box) ((MR_Integer) 0)), LibLinkages_67);
        if (succeeded)
        {
          MR_Word InstallSucceeded0_68;
          MR_String InstallMsg_75;
          MR_Word CopySucceeded_76;

          make__util__verbose_make_four_part_msg_6_p_0(Globals_12, (MR_String) "Installing file", StaticLibFileName_26, (MR_String) "in", StaticInstallDir_33, &InstallMsg_75);
          make__util__maybe_write_msg_4_p_0(ProgressStream_11, InstallMsg_75);
          libs__copy_util__copy_file_to_directory_7_p_0(Globals_12, ProgressStream_11, StaticLibFileName_26, StaticInstallDir_33, &CopySucceeded_76);
          InstallSucceeded0_68 = libs__maybe_util__and_2_f_0((MR_Integer) 1, CopySucceeded_76);
          succeeded = (InstallSucceeded0_68 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_String BaseFileName_69;
            MR_String InstalledFileName_70;
            MR_Word RanlibSucceeded_71;
            MR_String InstallMsg_80;
            MR_String RanLibCommand_81;
            MR_String RanLibFlags_82;
            MR_String Command_83;
            MR_Word Var_90;
            MR_String Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_String Var_94;

            BaseFileName_69 = mercury__dir__det_basename_1_f_0(StaticLibFileName_26);
            InstalledFileName_70 = mercury__dir__f_slash_2_f_0(StaticInstallDir_33, BaseFileName_69);
            make__util__verbose_make_two_part_msg_4_p_0(Globals_12, (MR_String) "Generating archive index for", InstalledFileName_70, &InstallMsg_80);
            make__util__maybe_write_msg_4_p_0(ProgressStream_11, InstallMsg_80);
            libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 607, &RanLibCommand_81);
            libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 608, &RanLibFlags_82);
            Var_91 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_81);
            Var_94 = libs__shell_util__quote_shell_cmd_arg_1_f_0(InstalledFileName_70);
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (RanLibFlags_82));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
            }
            Command_83 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_90);
            libs__system_cmds__invoke_system_command_8_p_0(Globals_12, ProgressStream_11, ProgressStream_11, (MR_Integer) 0, Command_83, &RanlibSucceeded_71);
            STATE_VARIABLE_Succeeded_3_59 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_2_48, RanlibSucceeded_71);
          }
          else
            STATE_VARIABLE_Succeeded_3_59 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_2_48, InstallSucceeded0_68);
        }
        else
          STATE_VARIABLE_Succeeded_3_59 = STATE_VARIABLE_Succeeded_2_48;
        succeeded = (strcmp(StaticLibFileName_26, SharedLibFileName_27) == 0);
        if (succeeded)
          *STATE_VARIABLE_Succeeded_38 = STATE_VARIABLE_Succeeded_3_59;
        else
        {
          succeeded = (strcmp(StaticInstallDir_33, SharedInstallDir_34) == 0);
          if (succeeded)
            make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(ProgressStream_11, Globals_12, (MR_Integer) 1, SharedInstallDir_34, SharedLibFileName_27, STATE_VARIABLE_Succeeded_3_59, STATE_VARIABLE_Succeeded_38);
          else
          {
            MR_Word MakeSharedInstallDirSucceeded_99;

            make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_11, SharedInstallDir_34, &MakeSharedInstallDirSucceeded_99);
            switch (MakeSharedInstallDirSucceeded_99) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Succeeded_38 = STATE_VARIABLE_Succeeded_3_59;
                break;
              case (MR_Integer) 1:
                make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(ProgressStream_11, Globals_12, (MR_Integer) 1, SharedInstallDir_34, SharedLibFileName_27, STATE_VARIABLE_Succeeded_3_59, STATE_VARIABLE_Succeeded_38);
                break;
            }
          }
        }
      }
      break;
  }
}

static void MR_CALL 
make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Linkage_12,
  MR_String InstallDir_13,
  MR_String FileName_14,
  MR_Word STATE_VARIABLE_Succeeded_0_22,
  MR_Word * STATE_VARIABLE_Succeeded_23)
{
  MR_bool succeeded;
  MR_Word LibLinkages_17;

  libs__globals__get_library_install_linkages_2_p_0(Globals_11, &LibLinkages_17);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0), ((MR_Box) (Linkage_12)), LibLinkages_17);
  if (succeeded)
  {
    MR_Word InstallSucceeded0_18;
    MR_String InstallMsg_29;
    MR_Word CopySucceeded_30;

    make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_14, (MR_String) "in", InstallDir_13, &InstallMsg_29);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_29);
    libs__copy_util__copy_file_to_directory_7_p_0(Globals_11, ProgressStream_10, FileName_14, InstallDir_13, &CopySucceeded_30);
    InstallSucceeded0_18 = libs__maybe_util__and_2_f_0((MR_Integer) 1, CopySucceeded_30);
    succeeded = (Linkage_12 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (InstallSucceeded0_18 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String BaseFileName_19;
      MR_String InstalledFileName_20;
      MR_Word RanlibSucceeded_21;
      MR_String InstallMsg_34;
      MR_String RanLibCommand_35;
      MR_String RanLibFlags_36;
      MR_String Command_37;
      MR_Word Var_44;
      MR_String Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_String Var_48;

      BaseFileName_19 = mercury__dir__det_basename_1_f_0(FileName_14);
      InstalledFileName_20 = mercury__dir__f_slash_2_f_0(InstallDir_13, BaseFileName_19);
      make__util__verbose_make_two_part_msg_4_p_0(Globals_11, (MR_String) "Generating archive index for", InstalledFileName_20, &InstallMsg_34);
      make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_34);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 607, &RanLibCommand_35);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 608, &RanLibFlags_36);
      Var_45 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_35);
      Var_48 = libs__shell_util__quote_shell_cmd_arg_1_f_0(InstalledFileName_20);
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (RanLibFlags_36));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
      }
      Command_37 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_44);
      libs__system_cmds__invoke_system_command_8_p_0(Globals_11, ProgressStream_10, ProgressStream_10, (MR_Integer) 0, Command_37, &RanlibSucceeded_21);
      *STATE_VARIABLE_Succeeded_23 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_22, RanlibSucceeded_21);
    }
    else
      *STATE_VARIABLE_Succeeded_23 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_22, InstallSucceeded0_18);
  }
  else
    *STATE_VARIABLE_Succeeded_23 = STATE_VARIABLE_Succeeded_0_22;
}

static void MR_CALL 
make__library_install__proposed_install_all_gs_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Succeeded_16;

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_16));
}

static void MR_CALL 
make__library_install__proposed_install_all_gs_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_FileName_8;

  make__library_install__module_name_to_workspace_file_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_FileName_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_FileName_8));
}

static void MR_CALL 
make__library_install__proposed_install_all_gs_files_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String Prefix_13,
  MR_String Grade_14,
  MR_Word Ext_15,
  MR_Word ModuleNames_16,
  MR_Word STATE_VARIABLE_Succeeded_0_35,
  MR_Word * STATE_VARIABLE_Succeeded_36)
{
  MR_String ExtDirName_21;
  MR_String InstallDir_31;
  MR_Word MakeInstallDirSucceeded_32;
  MR_String Var_39;

  switch (MR_tag((MR_Word) Ext_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ExtNgs_19 = ((MR_Unsigned) ((MR_hl_field(1, Ext_15, 0))) & (MR_Integer) 15);
        MR_String Var_20;

        parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtNgs_19, &Var_20, &ExtDirName_21);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtGs_22 = ((MR_Unsigned) ((MR_hl_field(2, Ext_15, 0))) & (MR_Integer) 3);
        MR_String Var_23;
        MR_String Var_24;

        parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(ExtGs_22, &Var_23, &Var_24, &ExtDirName_21);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_15, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ExtNgsGs_25 = ((MR_Unsigned) ((MR_hl_field(3, Ext_15, 1))) & (MR_Integer) 15);
            MR_String Var_26;

            parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtNgsGs_25, &Var_26, &ExtDirName_21);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_28;

            parse_tree__file_names__ext_cur_ngs_gs_max_cur_extension_dir_3_p_0(&Var_28, &ExtDirName_21);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtNgsGsMaxNgs_29 = ((MR_Unsigned) ((MR_hl_field(3, Ext_15, 1))) & (MR_Integer) 7);
            MR_String Var_30;

            parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtNgsGsMaxNgs_29, &Var_30, &ExtDirName_21);
          }
          break;
      }
      break;
  }
  Var_39 = mercury__dir__f_slash_2_f_0(Prefix_13, ExtDirName_21);
  InstallDir_31 = mercury__dir__f_slash_2_f_0(Var_39, Grade_14);
  make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_11, InstallDir_31, &MakeInstallDirSucceeded_32);
  switch (MakeInstallDirSucceeded_32) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Succeeded_36 = STATE_VARIABLE_Succeeded_0_35;
      break;
    case (MR_Integer) 1:
      {
        MR_Word GenExt_33 = (MR_Word) (Ext_15);
        MR_Word FileNames_34;
        MR_Word Var_41;
        MR_Word Var_46;
        MR_Box conv3_STATE_VARIABLE_Succeeded_36;
        MR_Box conv2_STATE_VARIABLE_IO_38;

        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) (&make__library_install_scalar_common_6[0]));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (make__library_install__proposed_install_all_gs_files_10_p_0_1));
          MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_41, 3) = ((MR_Box) (Globals_12));
          MR_hl_field(0, Var_41, 4) = ((MR_Box) (GenExt_33));
        }
        mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, ModuleNames_16, &FileNames_34);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (make__library_install__proposed_install_all_gs_files_10_p_0_2));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (ProgressStream_11));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) (Globals_12));
          MR_hl_field(0, Var_46, 5) = ((MR_Box) (InstallDir_31));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, FileNames_34, ((MR_Box) (STATE_VARIABLE_Succeeded_0_35)), &conv3_STATE_VARIABLE_Succeeded_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_38);
        *STATE_VARIABLE_Succeeded_36 = ((MR_Word) (conv3_STATE_VARIABLE_Succeeded_36));
      }
      break;
  }
}

static void MR_CALL 
make__library_install__legacy_install_library_grade_specific_files_for_grade_12_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_Succeeded_37;
  MR_Word conv0_STATE_VARIABLE_Info_39;

  make__library_install__legacy_install_grade_ints_and_headers_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_37, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_39);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_37));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_39));
}

static void MR_CALL 
make__library_install__legacy_install_library_grade_specific_files_for_grade_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word NgsLibDirMap_15,
  MR_String GradeDir_16,
  MR_Word MainModuleName_17,
  MR_Word AllModuleNames_18,
  MR_Word STATE_VARIABLE_Succeeded_0_38,
  MR_Word * STATE_VARIABLE_Succeeded_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  MR_bool succeeded;
  MR_Word DirSucceeded_22;
  MR_Word GsLibDirMap_23;

  make__library_install__legacy_make_grade_specific_install_dirs_7_p_0(ProgressStream_13, Globals_14, GradeDir_16, &DirSucceeded_22, &GsLibDirMap_23);
  switch (DirSucceeded_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Succeeded_39 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_0_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Target_24;
        MR_String GradeLibDir_25;
        MR_Word STATE_VARIABLE_Succeeded_1_48;
        MR_Word Var_71;
        MR_Box conv4_STATE_VARIABLE_Succeeded_39;
        MR_Box conv3_STATE_VARIABLE_Info_41;
        MR_Box conv2_STATE_VARIABLE_IO_43;

        libs__globals__get_target_2_p_0(Globals_14, &Target_24);
        libs__file_util__get_std_grade_specific_install_lib_dir_3_p_0(Globals_14, GradeDir_16, &GradeLibDir_25);
        switch (Target_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String StaticLibFileName_34;
              MR_String SharedLibFileName_36;
              MR_Word STATE_VARIABLE_Succeeded_3_64;
              MR_Word STATE_VARIABLE_Succeeded_4_67;
              MR_Word LibLinkages_83;
              MR_String _StaticLibFileNameProposed_35;
              MR_String _SharedLibFileNameProposed_37;

              parse_tree__file_names__module_name_to_lib_file_name_create_dirs_9_p_0(Globals_14, (MR_String) "predicate \140make.library_install.legacy_install_library_grade_specific_files_for_grade\'/12", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[19])), MainModuleName_17, &StaticLibFileName_34, &_StaticLibFileNameProposed_35);
              parse_tree__file_names__module_name_to_lib_file_name_create_dirs_9_p_0(Globals_14, (MR_String) "predicate \140make.library_install.legacy_install_library_grade_specific_files_for_grade\'/12", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[20])), MainModuleName_17, &SharedLibFileName_36, &_SharedLibFileNameProposed_37);
              libs__globals__get_library_install_linkages_2_p_0(Globals_14, &LibLinkages_83);
              succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0), ((MR_Box) ((MR_Integer) 0)), LibLinkages_83);
              if (succeeded)
              {
                MR_Word InstallSucceeded0_84;
                MR_String InstallMsg_91;
                MR_Word CopySucceeded_92;

                make__util__verbose_make_four_part_msg_6_p_0(Globals_14, (MR_String) "Installing file", StaticLibFileName_34, (MR_String) "in", GradeLibDir_25, &InstallMsg_91);
                make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_91);
                libs__copy_util__copy_file_to_directory_7_p_0(Globals_14, ProgressStream_13, StaticLibFileName_34, GradeLibDir_25, &CopySucceeded_92);
                InstallSucceeded0_84 = libs__maybe_util__and_2_f_0((MR_Integer) 1, CopySucceeded_92);
                succeeded = (InstallSucceeded0_84 == (MR_Integer) 1);
                if (succeeded)
                {
                  MR_String BaseFileName_85;
                  MR_String InstalledFileName_86;
                  MR_Word RanlibSucceeded_87;
                  MR_String InstallMsg_96;
                  MR_String RanLibCommand_97;
                  MR_String RanLibFlags_98;
                  MR_String Command_99;
                  MR_Word Var_106;
                  MR_String Var_107;
                  MR_Word Var_108;
                  MR_Word Var_109;
                  MR_String Var_110;

                  BaseFileName_85 = mercury__dir__det_basename_1_f_0(StaticLibFileName_34);
                  InstalledFileName_86 = mercury__dir__f_slash_2_f_0(GradeLibDir_25, BaseFileName_85);
                  make__util__verbose_make_two_part_msg_4_p_0(Globals_14, (MR_String) "Generating archive index for", InstalledFileName_86, &InstallMsg_96);
                  make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_96);
                  libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 607, &RanLibCommand_97);
                  libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 608, &RanLibFlags_98);
                  Var_107 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_97);
                  Var_110 = libs__shell_util__quote_shell_cmd_arg_1_f_0(InstalledFileName_86);
                  {
                    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
                    MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_108, 0) = ((MR_Box) (RanLibFlags_98));
                    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
                  }
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
                  }
                  Command_99 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_106);
                  libs__system_cmds__invoke_system_command_8_p_0(Globals_14, ProgressStream_13, ProgressStream_13, (MR_Integer) 0, Command_99, &RanlibSucceeded_87);
                  STATE_VARIABLE_Succeeded_3_64 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_38, RanlibSucceeded_87);
                }
                else
                  STATE_VARIABLE_Succeeded_3_64 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_38, InstallSucceeded0_84);
              }
              else
                STATE_VARIABLE_Succeeded_3_64 = STATE_VARIABLE_Succeeded_0_38;
              succeeded = (strcmp(StaticLibFileName_34, SharedLibFileName_36) == 0);
              if (succeeded)
                STATE_VARIABLE_Succeeded_4_67 = STATE_VARIABLE_Succeeded_3_64;
              else
                make__library_install__legacy_maybe_install_static_or_dynamic_archive_9_p_0(ProgressStream_13, Globals_14, (MR_Integer) 1, SharedLibFileName_36, GradeLibDir_25, STATE_VARIABLE_Succeeded_3_64, &STATE_VARIABLE_Succeeded_4_67);
              make__library_install__legacy_install_grade_init_8_p_0(ProgressStream_13, Globals_14, GradeDir_16, MainModuleName_17, STATE_VARIABLE_Succeeded_4_67, &STATE_VARIABLE_Succeeded_1_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String DllFileName_27;
              MR_String InstallMsg_113;
              MR_Word CopySucceeded_114;
              MR_String _DllFileNameProposed_28;

              parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_14, (MR_String) "predicate \140make.library_install.legacy_install_library_grade_specific_files_for_grade\'/12", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[2])), MainModuleName_17, &DllFileName_27, &_DllFileNameProposed_28);
              make__util__verbose_make_four_part_msg_6_p_0(Globals_14, (MR_String) "Installing file", DllFileName_27, (MR_String) "in", GradeLibDir_25, &InstallMsg_113);
              make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_113);
              libs__copy_util__copy_file_to_directory_7_p_0(Globals_14, ProgressStream_13, DllFileName_27, GradeLibDir_25, &CopySucceeded_114);
              STATE_VARIABLE_Succeeded_1_48 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_38, CopySucceeded_114);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String JarFileName_30;
              MR_String InstallMsg_118;
              MR_Word CopySucceeded_119;
              MR_String _JarFileNameProposed_31;

              parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_14, (MR_String) "predicate \140make.library_install.legacy_install_library_grade_specific_files_for_grade\'/12", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[1])), MainModuleName_17, &JarFileName_30, &_JarFileNameProposed_31);
              make__util__verbose_make_four_part_msg_6_p_0(Globals_14, (MR_String) "Installing file", JarFileName_30, (MR_String) "in", GradeLibDir_25, &InstallMsg_118);
              make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_118);
              libs__copy_util__copy_file_to_directory_7_p_0(Globals_14, ProgressStream_13, JarFileName_30, GradeLibDir_25, &CopySucceeded_119);
              STATE_VARIABLE_Succeeded_1_48 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_38, CopySucceeded_119);
            }
            break;
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_71, 0) = ((MR_Box) (&make__library_install_scalar_common_9[0]));
          MR_hl_field(0, Var_71, 1) = ((MR_Box) (make__library_install__legacy_install_library_grade_specific_files_for_grade_12_p_0_1));
          MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_71, 3) = ((MR_Box) (ProgressStream_13));
          MR_hl_field(0, Var_71, 4) = ((MR_Box) (Globals_14));
          MR_hl_field(0, Var_71, 5) = ((MR_Box) (NgsLibDirMap_15));
          MR_hl_field(0, Var_71, 6) = ((MR_Box) (GsLibDirMap_23));
          MR_hl_field(0, Var_71, 7) = ((MR_Box) (GradeDir_16));
        }
        mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, AllModuleNames_18, ((MR_Box) (STATE_VARIABLE_Succeeded_1_48)), &conv4_STATE_VARIABLE_Succeeded_39, ((MR_Box) (STATE_VARIABLE_Info_0_40)), &conv3_STATE_VARIABLE_Info_41, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_43);
        *STATE_VARIABLE_Succeeded_39 = ((MR_Word) (conv4_STATE_VARIABLE_Succeeded_39));
        *STATE_VARIABLE_Info_41 = ((MR_Word) (conv3_STATE_VARIABLE_Info_41));
      }
      break;
  }
}

static void MR_CALL 
make__library_install__legacy_maybe_install_static_or_dynamic_archive_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Linkage_12,
  MR_String FileName_13,
  MR_String InstallDir_14,
  MR_Word STATE_VARIABLE_Succeeded_0_22,
  MR_Word * STATE_VARIABLE_Succeeded_23)
{
  MR_bool succeeded;
  MR_Word LibLinkages_17;

  libs__globals__get_library_install_linkages_2_p_0(Globals_11, &LibLinkages_17);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0), ((MR_Box) (Linkage_12)), LibLinkages_17);
  if (succeeded)
  {
    MR_Word InstallSucceeded0_18;
    MR_String InstallMsg_29;
    MR_Word CopySucceeded_30;

    make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_13, (MR_String) "in", InstallDir_14, &InstallMsg_29);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_29);
    libs__copy_util__copy_file_to_directory_7_p_0(Globals_11, ProgressStream_10, FileName_13, InstallDir_14, &CopySucceeded_30);
    InstallSucceeded0_18 = libs__maybe_util__and_2_f_0((MR_Integer) 1, CopySucceeded_30);
    succeeded = (Linkage_12 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (InstallSucceeded0_18 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String BaseFileName_19;
      MR_String InstalledFileName_20;
      MR_Word RanlibSucceeded_21;
      MR_String InstallMsg_34;
      MR_String RanLibCommand_35;
      MR_String RanLibFlags_36;
      MR_String Command_37;
      MR_Word Var_44;
      MR_String Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_String Var_48;

      BaseFileName_19 = mercury__dir__det_basename_1_f_0(FileName_13);
      InstalledFileName_20 = mercury__dir__f_slash_2_f_0(InstallDir_14, BaseFileName_19);
      make__util__verbose_make_two_part_msg_4_p_0(Globals_11, (MR_String) "Generating archive index for", InstalledFileName_20, &InstallMsg_34);
      make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_34);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 607, &RanLibCommand_35);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 608, &RanLibFlags_36);
      Var_45 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_35);
      Var_48 = libs__shell_util__quote_shell_cmd_arg_1_f_0(InstalledFileName_20);
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (RanLibFlags_36));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
      }
      Command_37 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_44);
      libs__system_cmds__invoke_system_command_8_p_0(Globals_11, ProgressStream_10, ProgressStream_10, (MR_Integer) 0, Command_37, &RanlibSucceeded_21);
      *STATE_VARIABLE_Succeeded_23 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_22, RanlibSucceeded_21);
    }
    else
      *STATE_VARIABLE_Succeeded_23 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_22, InstallSucceeded0_18);
  }
  else
    *STATE_VARIABLE_Succeeded_23 = STATE_VARIABLE_Succeeded_0_22;
}

static void MR_CALL 
make__library_install__legacy_install_grade_init_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String GradeDir_11,
  MR_Word MainModuleName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_19,
  MR_Word * STATE_VARIABLE_Succeeded_20)
{
  MR_String Prefix_15;
  MR_String GradeModulesDir_16;
  MR_String InitFileName_17;
  MR_String Var_24;
  MR_String Var_25;
  MR_String Var_26;
  MR_String InstallMsg_33;
  MR_Word CopySucceeded_34;
  MR_String _InitFileNameProposed_18;

  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 573, &Prefix_15);
  Var_26 = mercury__dir__f_slash_2_f_0(Prefix_15, (MR_String) "lib");
  Var_25 = mercury__dir__f_slash_2_f_0(Var_26, (MR_String) "mercury");
  Var_24 = mercury__dir__f_slash_2_f_0(Var_25, (MR_String) "modules");
  GradeModulesDir_16 = mercury__dir__f_slash_2_f_0(Var_24, GradeDir_11);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_10, (MR_String) "predicate \140make.library_install.legacy_install_grade_init\'/8", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[0])), MainModuleName_12, &InitFileName_17, &_InitFileNameProposed_18);
  make__util__verbose_make_four_part_msg_6_p_0(Globals_10, (MR_String) "Installing file", InitFileName_17, (MR_String) "in", GradeModulesDir_16, &InstallMsg_33);
  make__util__maybe_write_msg_4_p_0(ProgressStream_9, InstallMsg_33);
  libs__copy_util__copy_file_to_directory_7_p_0(Globals_10, ProgressStream_9, InitFileName_17, GradeModulesDir_16, &CopySucceeded_34);
  *STATE_VARIABLE_Succeeded_20 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_19, CopySucceeded_34);
}

static void MR_CALL 
make__library_install__legacy_make_grade_specific_install_dirs_7_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_Succeeded_20;
  MR_Word conv0_STATE_VARIABLE_LibDirMap_22;

  make__library_install__legacy_make_ngs_dir_symlink_to_cur_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_LibDirMap_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_LibDirMap_22));
}

static void MR_CALL 
make__library_install__legacy_make_grade_specific_install_dirs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String GradeDir_10,
  MR_Word * STATE_VARIABLE_DirSucceeded_20,
  MR_Word * STATE_VARIABLE_GsLibDirMap_21)
{
  MR_String Prefix_14;
  MR_String LibDir_15;
  MR_String GradeIncSubDir_16;
  MR_String GradeIntsSubDir_17;
  MR_String GradeModuleSubDir_18;
  MR_Word UseSymLinks_19;
  MR_String Var_26;
  MR_String Var_29;
  MR_String Var_30;
  MR_String Var_33;
  MR_String Var_35;
  MR_String Var_37;
  MR_Word STATE_VARIABLE_DirSucceeded_2_38;
  MR_String Var_41;
  MR_Word STATE_VARIABLE_DirSucceeded_3_42;
  MR_Word STATE_VARIABLE_DirSucceeded_4_45;
  MR_Word STATE_VARIABLE_GsLibDirMap_1_47;
  MR_Word IOResult_83;
  MR_Word IOResult_100;

  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 573, &Prefix_14);
  Var_26 = mercury__dir__f_slash_2_f_0(Prefix_14, (MR_String) "lib");
  LibDir_15 = mercury__dir__f_slash_2_f_0(Var_26, (MR_String) "mercury");
  Var_30 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "lib");
  Var_29 = mercury__dir__f_slash_2_f_0(Var_30, GradeDir_10);
  GradeIncSubDir_16 = mercury__dir__f_slash_2_f_0(Var_29, (MR_String) "inc");
  Var_33 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "ints");
  GradeIntsSubDir_17 = mercury__dir__f_slash_2_f_0(Var_33, GradeDir_10);
  Var_35 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "modules");
  GradeModuleSubDir_18 = mercury__dir__f_slash_2_f_0(Var_35, GradeDir_10);
  Var_37 = mercury__dir__f_slash_2_f_0(GradeIncSubDir_16, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(Var_37, &IOResult_83);
  if ((IOResult_83 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_2_38 = (MR_Integer) 1;
  else
  {
    MR_Word Error_85 = ((MR_Word) ((MR_hl_field(1, IOResult_83, 0))));
    MR_String ErrorMsg_86;

    ErrorMsg_86 = mercury__io__error_message_1_f_0(Error_85);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_8, Var_37);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_8, ErrorMsg_86);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_2_38 = (MR_Integer) 0;
  }
  Var_41 = mercury__dir__f_slash_2_f_0(GradeIntsSubDir_17, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(Var_41, &IOResult_100);
  if ((IOResult_100 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_3_42 = STATE_VARIABLE_DirSucceeded_2_38;
  else
  {
    MR_Word Error_102 = ((MR_Word) ((MR_hl_field(1, IOResult_100, 0))));
    MR_String ErrorMsg_103;

    ErrorMsg_103 = mercury__io__error_message_1_f_0(Error_102);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_8, Var_41);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_8, ErrorMsg_103);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_3_42 = (MR_Integer) 0;
  }
  make__library_install__legacy_make_nonext_dir_6_p_0(ProgressStream_8, GradeModuleSubDir_18, STATE_VARIABLE_DirSucceeded_3_42, &STATE_VARIABLE_DirSucceeded_4_45);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0), &STATE_VARIABLE_GsLibDirMap_1_47);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 644, &UseSymLinks_19);
  switch (UseSymLinks_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_DirSucceeded_7_63;
        MR_Word STATE_VARIABLE_GsLibDirMap_4_64;
        MR_Word STATE_VARIABLE_DirSucceeded_8_67;
        MR_Word STATE_VARIABLE_GsLibDirMap_5_68;

        make__library_install__legacy_make_ngs_dir_9_p_0(ProgressStream_8, GradeIncSubDir_16, (MR_String) "mihs", STATE_VARIABLE_DirSucceeded_4_45, &STATE_VARIABLE_DirSucceeded_7_63, STATE_VARIABLE_GsLibDirMap_1_47, &STATE_VARIABLE_GsLibDirMap_4_64);
        make__library_install__legacy_make_ngs_dir_9_p_0(ProgressStream_8, GradeIntsSubDir_17, (MR_String) "opts", STATE_VARIABLE_DirSucceeded_7_63, &STATE_VARIABLE_DirSucceeded_8_67, STATE_VARIABLE_GsLibDirMap_4_64, &STATE_VARIABLE_GsLibDirMap_5_68);
        make__library_install__legacy_make_ngs_dir_9_p_0(ProgressStream_8, GradeIntsSubDir_17, (MR_String) "analyses", STATE_VARIABLE_DirSucceeded_8_67, STATE_VARIABLE_DirSucceeded_20, STATE_VARIABLE_GsLibDirMap_5_68, STATE_VARIABLE_GsLibDirMap_21);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_DirSucceeded_5_50;
        MR_Word STATE_VARIABLE_GsLibDirMap_2_51;
        MR_Word Var_53;
        MR_Box conv4_STATE_VARIABLE_DirSucceeded_20;
        MR_Box conv3_STATE_VARIABLE_GsLibDirMap_21;
        MR_Box conv2_STATE_VARIABLE_IO_23;

        make__library_install__legacy_make_ngs_dir_symlink_to_cur_9_p_0(ProgressStream_8, GradeIncSubDir_16, (MR_String) "mihs", STATE_VARIABLE_DirSucceeded_4_45, &STATE_VARIABLE_DirSucceeded_5_50, STATE_VARIABLE_GsLibDirMap_1_47, &STATE_VARIABLE_GsLibDirMap_2_51);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_53, 0) = ((MR_Box) (&make__library_install_scalar_common_5[0]));
          MR_hl_field(0, Var_53, 1) = ((MR_Box) (make__library_install__legacy_make_grade_specific_install_dirs_7_p_0_1));
          MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_53, 3) = ((MR_Box) (ProgressStream_8));
          MR_hl_field(0, Var_53, 4) = ((MR_Box) (GradeIntsSubDir_17));
        }
        mercury__list__foldl3_8_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__library_install_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_3[22])), ((MR_Box) (STATE_VARIABLE_DirSucceeded_5_50)), &conv4_STATE_VARIABLE_DirSucceeded_20, ((MR_Box) (STATE_VARIABLE_GsLibDirMap_2_51)), &conv3_STATE_VARIABLE_GsLibDirMap_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23);
        *STATE_VARIABLE_DirSucceeded_20 = ((MR_Word) (conv4_STATE_VARIABLE_DirSucceeded_20));
        *STATE_VARIABLE_GsLibDirMap_21 = ((MR_Word) (conv3_STATE_VARIABLE_GsLibDirMap_21));
      }
      break;
  }
}

static void MR_CALL 
make__library_install__legacy_make_ngs_dir_symlink_to_cur_9_p_0(
  MR_Word ProgressStream_10,
  MR_String CurDir_11,
  MR_String ExtDirName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_19,
  MR_Word * STATE_VARIABLE_Succeeded_20,
  MR_Word STATE_VARIABLE_LibDirMap_0_21,
  MR_Word * STATE_VARIABLE_LibDirMap_22)
{
  MR_String NgsDir_16;
  MR_Word LinkSucceeded_17;
  MR_String Var_25;

  Var_25 = mercury__dir__f_slash_2_f_0(CurDir_11, (MR_String) "Mercury");
  NgsDir_16 = mercury__dir__f_slash_2_f_0(Var_25, ExtDirName_12);
  parse_tree__module_cmds__definitely_make_symlink_5_p_0((MR_String) "..", NgsDir_16, &LinkSucceeded_17);
  switch (LinkSucceeded_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      make__library_install__legacy_make_ngs_dir_9_p_0(ProgressStream_10, CurDir_11, ExtDirName_12, STATE_VARIABLE_Succeeded_0_19, STATE_VARIABLE_Succeeded_20, STATE_VARIABLE_LibDirMap_0_21, STATE_VARIABLE_LibDirMap_22);
      break;
    case (MR_Integer) 1:
      {
        MR_Word LibDirInfo_18;

        {
          LibDirInfo_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LibDirInfo_18, 0) = ((MR_Box) (CurDir_11));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0), ((MR_Box) (ExtDirName_12)), ((MR_Box) (LibDirInfo_18)), STATE_VARIABLE_LibDirMap_0_21, STATE_VARIABLE_LibDirMap_22);
        *STATE_VARIABLE_Succeeded_20 = STATE_VARIABLE_Succeeded_0_19;
      }
      break;
  }
}

static void MR_CALL 
make__library_install__legacy_make_ngs_dir_9_p_0(
  MR_Word ProgressStream_10,
  MR_String CurDir_11,
  MR_String ExtDirName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_18,
  MR_Word * STATE_VARIABLE_Succeeded_19,
  MR_Word STATE_VARIABLE_LibDirMap_0_20,
  MR_Word * STATE_VARIABLE_LibDirMap_21)
{
  MR_String NgsDir_16;
  MR_Word IOResult_17;
  MR_String Var_24;
  MR_Word Var_29;

  Var_24 = mercury__dir__f_slash_2_f_0(CurDir_11, (MR_String) "Mercury");
  NgsDir_16 = mercury__dir__f_slash_2_f_0(Var_24, ExtDirName_12);
  mercury__dir__make_directory_4_p_0(NgsDir_16, &IOResult_17);
  if ((IOResult_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Succeeded_19 = STATE_VARIABLE_Succeeded_0_18;
  else
  {
    MR_Word Error_32 = ((MR_Word) ((MR_hl_field(1, IOResult_17, 0))));
    MR_String ErrorMsg_33;

    ErrorMsg_33 = mercury__io__error_message_1_f_0(Error_32);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_10, NgsDir_16);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_10, ErrorMsg_33);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\n");
    *STATE_VARIABLE_Succeeded_19 = (MR_Integer) 0;
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (CurDir_11));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (NgsDir_16));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0), ((MR_Box) (ExtDirName_12)), ((MR_Box) (Var_29)), STATE_VARIABLE_LibDirMap_0_20, STATE_VARIABLE_LibDirMap_21);
}

static void MR_CALL 
make__library_install__legacy_make_nonext_dir_6_p_0(
  MR_Word ProgressStream_7,
  MR_String DirName_8,
  MR_Word STATE_VARIABLE_Succeeded_0_12,
  MR_Word * STATE_VARIABLE_Succeeded_13)
{
  MR_Word IOResult_11;

  mercury__dir__make_directory_4_p_0(DirName_8, &IOResult_11);
  if ((IOResult_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Succeeded_13 = STATE_VARIABLE_Succeeded_0_12;
  else
  {
    MR_Word Error_17 = ((MR_Word) ((MR_hl_field(1, IOResult_11, 0))));
    MR_String ErrorMsg_18;

    ErrorMsg_18 = mercury__io__error_message_1_f_0(Error_17);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_7, DirName_8);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_7, ErrorMsg_18);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    *STATE_VARIABLE_Succeeded_13 = (MR_Integer) 0;
  }
}

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grades_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word NgsLibDirMap_4,
  MR_Word MainModuleName_5,
  MR_Word AllModuleNames_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Succeeded_0_8,
  MR_Word * STATE_VARIABLE_Succeeded_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      *STATE_VARIABLE_Succeeded_9 = STATE_VARIABLE_Succeeded_0_8;
    }
    else
    {
      MR_String Grade_35 = ((MR_String) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word Grades_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word StopOrContinue_40;
      MR_Word STATE_VARIABLE_Succeeded_1_48;

      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, STATE_VARIABLE_Succeeded_0_8, &StopOrContinue_40, STATE_VARIABLE_Succeeded_0_8, &STATE_VARIABLE_Succeeded_1_48);
      switch (StopOrContinue_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Succeeded_2_49;
            MR_Word STATE_VARIABLE_Info_1_50;
            MR_Word next_value_of_HeadVar__7_7;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_8;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

            make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0(ProgressStream_1, Globals_3, NgsLibDirMap_4, MainModuleName_5, AllModuleNames_6, Grade_35, STATE_VARIABLE_Succeeded_1_48, &STATE_VARIABLE_Succeeded_2_49, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_50);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__7_7 = Grades_36;
            next_value_of_STATE_VARIABLE_Succeeded_0_8 = STATE_VARIABLE_Succeeded_2_49;
            next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_1_50;
            HeadVar__7_7 = next_value_of_HeadVar__7_7;
            STATE_VARIABLE_Succeeded_0_8 = next_value_of_STATE_VARIABLE_Succeeded_0_8;
            STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_9 = STATE_VARIABLE_Succeeded_1_48;
            *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__7_7;

  make__clean__maybe_make_grade_clean_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__7_7));
}

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_18;

  make__library_install__make_and_install_grade_specific_files_for_grades_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), &conv2_Succeeded_18);
  *wrapper_arg_1 = ((MR_Box) (conv2_Succeeded_18));
}

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StatusMap_11;

  make__library_install__remove_target_file_if_grade_dependent_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StatusMap_11);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StatusMap_11));
}

static void MR_CALL 
make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word NgsLibDirMap_15,
  MR_Word MainModuleName_16,
  MR_Word AllModuleNames_17,
  MR_String Grade_18,
  MR_Word STATE_VARIABLE_Succeeded_0_51,
  MR_Word * STATE_VARIABLE_Succeeded_52,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  MR_Word SubDirSetting_22;
  MR_Word CleanAfter_23;
  MR_Word Params0_24;
  MR_Word EnvOptFileVariables_25;
  MR_Word EnvVarArgs_26;
  MR_Word OptionArgs0_27;
  MR_Word OptionArgs_28;
  MR_Word Params_29;
  MR_String InstallMsg_30;
  MR_Word MaybeMCFlags_31;
  MR_Word OptionsSpecs_39;
  MR_Word LibGlobals_40;
  MR_Word Var_57;
  MR_Word Var_59;

  libs__globals__get_subdir_setting_2_p_0(Globals_14, &SubDirSetting_22);
  switch (SubDirSetting_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      CleanAfter_23 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      CleanAfter_23 = (MR_Integer) 0;
      break;
  }
  Params0_24 = make__make_info__make_info_get_compiler_params_1_f_0(STATE_VARIABLE_Info_0_53);
  EnvOptFileVariables_25 = ((MR_Word) ((MR_hl_field(0, Params0_24, 0))));
  EnvVarArgs_26 = ((MR_Word) ((MR_hl_field(0, Params0_24, 1))));
  OptionArgs0_27 = ((MR_Word) ((MR_hl_field(0, Params0_24, 2))));
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Grade_18));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[18])));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) ((MR_String) "--grade"));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
  }
  OptionArgs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs0_27, Var_57);
  {
    Params_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_29, 0) = ((MR_Box) (EnvOptFileVariables_25));
    MR_hl_field(0, Params_29, 1) = ((MR_Box) (EnvVarArgs_26));
    MR_hl_field(0, Params_29, 2) = ((MR_Box) (OptionArgs_28));
  }
  make__util__verbose_make_two_part_msg_4_p_0(Globals_14, (MR_String) "Installing grade", Grade_18, &InstallMsg_30);
  make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_30);
  make__options_file__lookup_mmc_options_2_p_0(EnvOptFileVariables_25, &MaybeMCFlags_31);
  if (((MR_tag((MR_Word) MaybeMCFlags_31)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_41 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags_31, 0))));

    parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_13, Globals_14, LookupSpecs_41);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.library_install.setup_make_and_install_grade_specific_files_for_grade\'/12", (MR_String) "bad DEFAULT_MCFLAGS");
      return;
    }
  }
  else
  {
    MR_Word MCFlags_32 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags_31, 0))));
    MR_Word DefaultOptionTable_33;
    MR_Word MaybeStdLibGrades_34;
    MR_Word AllFlags_35;
    MR_Word MaybeEnvOptFileStdLibDirs_36;
    MR_Word Var_65;
    MR_Word Var_37;
    MR_Word Var_38;

    libs__globals__get_default_options_2_p_0(Globals_14, &DefaultOptionTable_33);
    MaybeStdLibGrades_34 = make__make_info__make_info_get_maybe_stdlib_grades_1_f_0(STATE_VARIABLE_Info_0_53);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarArgs_26, OptionArgs_28);
    AllFlags_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_32, Var_65);
    make__options_file__lookup_mercury_stdlib_dir_2_p_0(EnvOptFileVariables_25, &MaybeEnvOptFileStdLibDirs_36);
    libs__handle_options__handle_given_options_11_p_0(ProgressStream_13, DefaultOptionTable_33, MaybeStdLibGrades_34, MaybeEnvOptFileStdLibDirs_36, AllFlags_35, &Var_37, &Var_38, &OptionsSpecs_39, &LibGlobals_40);
  }
  if ((OptionsSpecs_39 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StatusMap0_44;
    MR_Word StatusMap_45;
    MR_Word VeryVerbose_46;
    MR_Box Cookie_47;
    MR_Word Succeeded0_48;
    MR_Word CleanupPred_49;
    MR_Word Succeeded1_50;
    MR_Word STATE_VARIABLE_Info_1_74;
    MR_Word STATE_VARIABLE_Info_2_75;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_Info_3_77;
    MR_Word Var_80;
    MR_Box conv1_StatusMap_45;
    MR_Box conv4_STATE_VARIABLE_Info_54;

    StatusMap0_44 = make__make_info__make_info_get_target_status_map_1_f_0(STATE_VARIABLE_Info_0_53);
    mercury__version_hash_table__fold_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), (MR_Word) (&make__library_install_scalar_common_1[1]), (MR_Word) (&make__library_install_scalar_common_1[2]), StatusMap0_44, ((MR_Box) (StatusMap0_44)), &conv1_StatusMap_45);
    StatusMap_45 = ((MR_Word) (conv1_StatusMap_45));
    make__make_info__make_info_set_target_status_map_3_p_0(StatusMap_45, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_1_74);
    make__make_info__make_info_set_compiler_params_3_p_0(Params_29, STATE_VARIABLE_Info_1_74, &STATE_VARIABLE_Info_2_75);
    Var_76 = make__timestamp__init_target_file_timestamp_map_0_f_0();
    make__make_info__make_info_set_target_file_timestamp_map_3_p_0(Var_76, STATE_VARIABLE_Info_2_75, &STATE_VARIABLE_Info_3_77);
    libs__globals__lookup_bool_option_3_p_0(LibGlobals_40, (MR_Integer) 132, &VeryVerbose_46);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_47);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_80, 0) = ((MR_Box) (&make__library_install_scalar_common_8[0]));
      MR_hl_field(0, Var_80, 1) = ((MR_Box) (make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_2));
      MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(0, Var_80, 3) = ((MR_Box) (ProgressStream_13));
      MR_hl_field(0, Var_80, 4) = ((MR_Box) (LibGlobals_40));
      MR_hl_field(0, Var_80, 5) = ((MR_Box) (NgsLibDirMap_15));
      MR_hl_field(0, Var_80, 6) = ((MR_Box) (MainModuleName_16));
      MR_hl_field(0, Var_80, 7) = ((MR_Box) (AllModuleNames_17));
      MR_hl_field(0, Var_80, 8) = ((MR_Box) (STATE_VARIABLE_Info_3_77));
      MR_hl_field(0, Var_80, 9) = ((MR_Box) (CleanAfter_23));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_80, &Succeeded0_48);
    {
      CleanupPred_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CleanupPred_49, 0) = ((MR_Box) (&make__library_install_scalar_common_5[1]));
      MR_hl_field(0, CleanupPred_49, 1) = ((MR_Box) (make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_3));
      MR_hl_field(0, CleanupPred_49, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, CleanupPred_49, 3) = ((MR_Box) (ProgressStream_13));
      MR_hl_field(0, CleanupPred_49, 4) = ((MR_Box) (LibGlobals_40));
      MR_hl_field(0, CleanupPred_49, 5) = ((MR_Box) (CleanAfter_23));
      MR_hl_field(0, CleanupPred_49, 6) = ((MR_Box) (MainModuleName_16));
      MR_hl_field(0, CleanupPred_49, 7) = ((MR_Box) (AllModuleNames_17));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_46, Cookie_47, CleanupPred_49, Succeeded0_48, &Succeeded1_50, ((MR_Box) (STATE_VARIABLE_Info_3_77)), &conv4_STATE_VARIABLE_Info_54);
    *STATE_VARIABLE_Info_54 = ((MR_Word) (conv4_STATE_VARIABLE_Info_54));
    *STATE_VARIABLE_Succeeded_52 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_51, Succeeded1_50);
  }
  else
  {
    libs__handle_options__usage_errors_5_p_0(ProgressStream_13, Globals_14, OptionsSpecs_39);
    *STATE_VARIABLE_Succeeded_52 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
  }
}

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Succeeded_16;

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Succeeded_16);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Succeeded_16));
}

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Succeeded_16;

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Succeeded_16);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Succeeded_16));
}

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv4_FileName_8;

  make__library_install__module_name_to_workspace_file_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_FileName_8);
  *wrapper_arg_2 = ((MR_Box) (conv4_FileName_8));
}

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Succeeded_16;

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_16));
}

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_FileName_8;

  make__library_install__module_name_to_workspace_file_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_FileName_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_FileName_8));
}

static void MR_CALL 
make__library_install__proposed_install_library_non_grade_specific_files_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word AllModuleNames_11,
  MR_Word * STATE_VARIABLE_Succeeded_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_Word ModulesWithChildren_15;
  MR_Word ModulesWithChildrenCord_53;
  MR_Word ModulesWithoutDepInfoCord_54;
  MR_Word ModulesWithoutDepInfo_55;
  MR_Word Var_58;
  MR_Word Var_59;

  Var_58 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_59 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  make__library_install__gather_module_dep_infos_loop_11_p_0(ProgressStream_9, Globals_10, AllModuleNames_11, Var_58, &ModulesWithChildrenCord_53, Var_59, &ModulesWithoutDepInfoCord_54, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
  ModulesWithChildren_15 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesWithChildrenCord_53);
  ModulesWithoutDepInfo_55 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesWithoutDepInfoCord_54);
  if ((ModulesWithoutDepInfo_55 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Prefix0_17;
    MR_String Prefix_18;
    MR_Word MakePrefixDirSucceeded_19;

    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 573, &Prefix0_17);
    Prefix_18 = mercury__dir__f_slash_2_f_0(Prefix0_17, (MR_String) "MercurySystem");
    make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_9, Prefix_18, &MakePrefixDirSucceeded_19);
    switch (MakePrefixDirSucceeded_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Succeeded_26 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ExtInt0_20 = (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[0]));
          MR_Word ExtInt1_21 = (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[1]));
          MR_Word Target_24;
          MR_Word STATE_VARIABLE_Succeeded_3_42;
          MR_Word STATE_VARIABLE_Succeeded_4_44;
          MR_Word STATE_VARIABLE_Succeeded_5_46;
          MR_Word STATE_VARIABLE_Succeeded_6_48;
          MR_Word ExtNgs_61 = ((MR_Unsigned) ((MR_hl_field(1, ExtInt0_20, 0))) & (MR_Integer) 15);
          MR_String ExtDirName_63;
          MR_String InstallDir_66;
          MR_Word MakeInstallDirSucceeded_67;
          MR_Word ExtNgs_78;
          MR_String ExtDirName_80;
          MR_String InstallDir_83;
          MR_Word MakeInstallDirSucceeded_84;
          MR_String Var_62;
          MR_String Var_79;

          parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtNgs_61, &Var_62, &ExtDirName_63);
          InstallDir_66 = mercury__dir__f_slash_2_f_0(Prefix_18, ExtDirName_63);
          make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_9, InstallDir_66, &MakeInstallDirSucceeded_67);
          switch (MakeInstallDirSucceeded_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Succeeded_3_42 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word GenExt_68 = (MR_Word) (ExtInt0_20);
                MR_Word FileNames_69;
                MR_Word Var_71;
                MR_Word Var_74;
                MR_Box conv3_STATE_VARIABLE_Succeeded_3_42;
                MR_Box conv2_STATE_VARIABLE_IO_3_43;

                {
                  Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_71, 0) = ((MR_Box) (&make__library_install_scalar_common_6[0]));
                  MR_hl_field(0, Var_71, 1) = ((MR_Box) (make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_1));
                  MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_71, 3) = ((MR_Box) (Globals_10));
                  MR_hl_field(0, Var_71, 4) = ((MR_Box) (GenExt_68));
                }
                mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_71, ModulesWithChildren_15, &FileNames_69);
                {
                  Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_74, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
                  MR_hl_field(0, Var_74, 1) = ((MR_Box) (make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_2));
                  MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_74, 3) = ((MR_Box) (ProgressStream_9));
                  MR_hl_field(0, Var_74, 4) = ((MR_Box) (Globals_10));
                  MR_hl_field(0, Var_74, 5) = ((MR_Box) (InstallDir_66));
                }
                mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, FileNames_69, ((MR_Box) ((MR_Integer) 1)), &conv3_STATE_VARIABLE_Succeeded_3_42, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_3_43);
                STATE_VARIABLE_Succeeded_3_42 = ((MR_Word) (conv3_STATE_VARIABLE_Succeeded_3_42));
              }
              break;
          }
          ExtNgs_78 = ((MR_Unsigned) ((MR_hl_field(1, ExtInt1_21, 0))) & (MR_Integer) 15);
          parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtNgs_78, &Var_79, &ExtDirName_80);
          InstallDir_83 = mercury__dir__f_slash_2_f_0(Prefix_18, ExtDirName_80);
          make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_9, InstallDir_83, &MakeInstallDirSucceeded_84);
          switch (MakeInstallDirSucceeded_84) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Succeeded_4_44 = STATE_VARIABLE_Succeeded_3_42;
              break;
            case (MR_Integer) 1:
              {
                MR_Word GenExt_85 = (MR_Word) (ExtInt1_21);
                MR_Word FileNames_86;
                MR_Word Var_88;
                MR_Word Var_91;
                MR_Box conv7_STATE_VARIABLE_Succeeded_4_44;
                MR_Box conv6_STATE_VARIABLE_IO_4_45;

                {
                  Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_88, 0) = ((MR_Box) (&make__library_install_scalar_common_6[0]));
                  MR_hl_field(0, Var_88, 1) = ((MR_Box) (make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_3));
                  MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_88, 3) = ((MR_Box) (Globals_10));
                  MR_hl_field(0, Var_88, 4) = ((MR_Box) (GenExt_85));
                }
                mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_88, AllModuleNames_11, &FileNames_86);
                {
                  Var_91 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_91, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
                  MR_hl_field(0, Var_91, 1) = ((MR_Box) (make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_4));
                  MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_91, 3) = ((MR_Box) (ProgressStream_9));
                  MR_hl_field(0, Var_91, 4) = ((MR_Box) (Globals_10));
                  MR_hl_field(0, Var_91, 5) = ((MR_Box) (InstallDir_83));
                }
                mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_91, FileNames_86, ((MR_Box) (STATE_VARIABLE_Succeeded_3_42)), &conv7_STATE_VARIABLE_Succeeded_4_44, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_4_45);
                STATE_VARIABLE_Succeeded_4_44 = ((MR_Word) (conv7_STATE_VARIABLE_Succeeded_4_44));
              }
              break;
          }
          make__library_install__proposed_install_all_ngs_files_9_p_0(ProgressStream_9, Globals_10, Prefix_18, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[2])), AllModuleNames_11, STATE_VARIABLE_Succeeded_4_44, &STATE_VARIABLE_Succeeded_5_46);
          make__library_install__proposed_install_all_ngs_files_9_p_0(ProgressStream_9, Globals_10, Prefix_18, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[3])), AllModuleNames_11, STATE_VARIABLE_Succeeded_5_46, &STATE_VARIABLE_Succeeded_6_48);
          libs__globals__get_target_2_p_0(Globals_10, &Target_24);
          switch (Target_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Succeeded_7_51;
                MR_Word ExtraHdrFileNames_95;
                MR_String ExtDirName_98;
                MR_String InstallDir_99;
                MR_Word MakeInstallDirSucceeded_100;
                MR_String Var_97;

                make__library_install__proposed_install_all_ngs_files_9_p_0(ProgressStream_9, Globals_10, Prefix_18, (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[16])), AllModuleNames_11, STATE_VARIABLE_Succeeded_6_48, &STATE_VARIABLE_Succeeded_7_51);
                libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 581, &ExtraHdrFileNames_95);
                parse_tree__file_names__ext_cur_pgs_max_cur_extension_dir_3_p_0(&Var_97, &ExtDirName_98);
                InstallDir_99 = mercury__dir__f_slash_2_f_0(Prefix_18, ExtDirName_98);
                make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_9, InstallDir_99, &MakeInstallDirSucceeded_100);
                switch (MakeInstallDirSucceeded_100) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Succeeded_26 = STATE_VARIABLE_Succeeded_7_51;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_103;
                      MR_Box conv10_STATE_VARIABLE_Succeeded_26;
                      MR_Box conv9_STATE_VARIABLE_IO_30;

                      {
                        Var_103 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_103, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
                        MR_hl_field(0, Var_103, 1) = ((MR_Box) (make__library_install__proposed_install_library_non_grade_specific_files_8_p_0_5));
                        MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(0, Var_103, 3) = ((MR_Box) (ProgressStream_9));
                        MR_hl_field(0, Var_103, 4) = ((MR_Box) (Globals_10));
                        MR_hl_field(0, Var_103, 5) = ((MR_Box) (InstallDir_99));
                      }
                      mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_103, ExtraHdrFileNames_95, ((MR_Box) (STATE_VARIABLE_Succeeded_7_51)), &conv10_STATE_VARIABLE_Succeeded_26, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_30);
                      *STATE_VARIABLE_Succeeded_26 = ((MR_Word) (conv10_STATE_VARIABLE_Succeeded_26));
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Succeeded_26 = STATE_VARIABLE_Succeeded_6_48;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Succeeded_26 = STATE_VARIABLE_Succeeded_6_48;
              break;
          }
        }
        break;
    }
  }
  else
    *STATE_VARIABLE_Succeeded_26 = (MR_Integer) 0;
}

static void MR_CALL 
make__library_install__gather_module_dep_infos_loop_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModulesWithChildren_0_4,
  MR_Word * STATE_VARIABLE_ModulesWithChildren_5,
  MR_Word STATE_VARIABLE_ModulesWithoutDepInfo_0_6,
  MR_Word * STATE_VARIABLE_ModulesWithoutDepInfo_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_ModulesWithoutDepInfo_7 = STATE_VARIABLE_ModulesWithoutDepInfo_0_6;
      *STATE_VARIABLE_ModulesWithChildren_5 = STATE_VARIABLE_ModulesWithChildren_0_4;
    }
    else
    {
      MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ModuleNames_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word MaybeModuleDepInfo_34;
      MR_Word STATE_VARIABLE_Info_1_45;
      MR_Word STATE_VARIABLE_ModulesWithoutDepInfo_1_47;
      MR_Word STATE_VARIABLE_ModulesWithChildren_1_48;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModulesWithChildren_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModulesWithoutDepInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

      make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_28, &MaybeModuleDepInfo_34, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_1_45);
      if ((MaybeModuleDepInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_28)), STATE_VARIABLE_ModulesWithoutDepInfo_0_6, &STATE_VARIABLE_ModulesWithoutDepInfo_1_47);
        STATE_VARIABLE_ModulesWithChildren_1_48 = STATE_VARIABLE_ModulesWithChildren_0_4;
      }
      else
      {
        MR_Word ModuleDepInfo_35 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_34, 0))));
        MR_Word Children_36;

        parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_35, &Children_36);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_36);
        if (succeeded)
          mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_28)), STATE_VARIABLE_ModulesWithChildren_0_4, &STATE_VARIABLE_ModulesWithChildren_1_48);
        else
          STATE_VARIABLE_ModulesWithChildren_1_48 = STATE_VARIABLE_ModulesWithChildren_0_4;
        STATE_VARIABLE_ModulesWithoutDepInfo_1_47 = STATE_VARIABLE_ModulesWithoutDepInfo_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ModuleNames_29;
      next_value_of_STATE_VARIABLE_ModulesWithChildren_0_4 = STATE_VARIABLE_ModulesWithChildren_1_48;
      next_value_of_STATE_VARIABLE_ModulesWithoutDepInfo_0_6 = STATE_VARIABLE_ModulesWithoutDepInfo_1_47;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_1_45;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModulesWithChildren_0_4 = next_value_of_STATE_VARIABLE_ModulesWithChildren_0_4;
      STATE_VARIABLE_ModulesWithoutDepInfo_0_6 = next_value_of_STATE_VARIABLE_ModulesWithoutDepInfo_0_6;
      STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
make__library_install__proposed_install_all_ngs_files_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Succeeded_16;

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_16));
}

static void MR_CALL 
make__library_install__proposed_install_all_ngs_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_FileName_8;

  make__library_install__module_name_to_workspace_file_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_FileName_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_FileName_8));
}

static void MR_CALL 
make__library_install__proposed_install_all_ngs_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_String Prefix_12,
  MR_Word Ext_13,
  MR_Word ModuleNames_14,
  MR_Word STATE_VARIABLE_Succeeded_0_26,
  MR_Word * STATE_VARIABLE_Succeeded_27)
{
  MR_String ExtDirName_19;
  MR_String InstallDir_22;
  MR_Word MakeInstallDirSucceeded_23;

  if (((MR_tag((MR_Word) Ext_13)) == (MR_Integer) 1))
  {
    MR_Word ExtNgs_17 = ((MR_Unsigned) ((MR_hl_field(1, Ext_13, 0))) & (MR_Integer) 15);
    MR_String Var_18;

    parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtNgs_17, &Var_18, &ExtDirName_19);
  }
  else
  {
    MR_String Var_21;

    parse_tree__file_names__ext_cur_pgs_max_cur_extension_dir_3_p_0(&Var_21, &ExtDirName_19);
  }
  InstallDir_22 = mercury__dir__f_slash_2_f_0(Prefix_12, ExtDirName_19);
  make__library_install__make_dir_handle_any_error_5_p_0(ProgressStream_10, InstallDir_22, &MakeInstallDirSucceeded_23);
  switch (MakeInstallDirSucceeded_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Succeeded_27 = STATE_VARIABLE_Succeeded_0_26;
      break;
    case (MR_Integer) 1:
      {
        MR_Word GenExt_24 = (MR_Word) (Ext_13);
        MR_Word FileNames_25;
        MR_Word Var_31;
        MR_Word Var_36;
        MR_Box conv3_STATE_VARIABLE_Succeeded_27;
        MR_Box conv2_STATE_VARIABLE_IO_29;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (&make__library_install_scalar_common_6[0]));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (make__library_install__proposed_install_all_ngs_files_9_p_0_1));
          MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_31, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_31, 4) = ((MR_Box) (GenExt_24));
        }
        mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, ModuleNames_14, &FileNames_25);
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (make__library_install__proposed_install_all_ngs_files_9_p_0_2));
          MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_36, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_36, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_36, 5) = ((MR_Box) (InstallDir_22));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, FileNames_25, ((MR_Box) (STATE_VARIABLE_Succeeded_0_26)), &conv3_STATE_VARIABLE_Succeeded_27, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_29);
        *STATE_VARIABLE_Succeeded_27 = ((MR_Word) (conv3_STATE_VARIABLE_Succeeded_27));
      }
      break;
  }
}

static void MR_CALL 
make__library_install__make_dir_handle_any_error_5_p_0(
  MR_Word ProgressStream_6,
  MR_String DirName_7,
  MR_Word * Succeeded_8)
{
  MR_Word MakeDirResult_10;

  mercury__dir__make_directory_4_p_0(DirName_7, &MakeDirResult_10);
  if ((MakeDirResult_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *Succeeded_8 = (MR_Integer) 1;
  else
  {
    MR_Word Error_15 = ((MR_Word) ((MR_hl_field(1, MakeDirResult_10, 0))));
    MR_String ErrorMsg_16;

    ErrorMsg_16 = mercury__io__error_message_1_f_0(Error_15);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_6, DirName_7);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_6, ErrorMsg_16);
    mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\n");
    *Succeeded_8 = (MR_Integer) 0;
  }
}

static void MR_CALL 
make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0_2(
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
  MR_Word conv6_STATE_VARIABLE_Succeeded_20;
  MR_Word conv5_STATE_VARIABLE_LibDirMap_22;

  make__library_install__legacy_make_ngs_dir_symlink_to_cur_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Succeeded_20, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_LibDirMap_22);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Succeeded_20));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_LibDirMap_22));
}

static void MR_CALL 
make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_Succeeded_19;
  MR_Word conv0_STATE_VARIABLE_LibDirMap_21;

  make__library_install__legacy_make_ngs_dir_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_LibDirMap_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_19));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_LibDirMap_21));
}

static void MR_CALL 
make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word * STATE_VARIABLE_DirSucceeded_17,
  MR_Word * STATE_VARIABLE_NgsLibDirMap_18)
{
  MR_String Prefix_12;
  MR_String LibDir_13;
  MR_String IntsSubDir_14;
  MR_Word SubDirs_15;
  MR_Word UseSymLinks_16;
  MR_Word STATE_VARIABLE_NgsLibDirMap_1_22;
  MR_String Var_24;
  MR_String Var_27;
  MR_Word STATE_VARIABLE_DirSucceeded_2_28;
  MR_String Var_31;
  MR_Word STATE_VARIABLE_DirSucceeded_3_32;
  MR_String Var_36;
  MR_Word STATE_VARIABLE_DirSucceeded_4_37;
  MR_Word IOResult_84;
  MR_Word IOResult_101;
  MR_Word IOResult_118;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0), &STATE_VARIABLE_NgsLibDirMap_1_22);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 573, &Prefix_12);
  Var_24 = mercury__dir__f_slash_2_f_0(Prefix_12, (MR_String) "lib");
  LibDir_13 = mercury__dir__f_slash_2_f_0(Var_24, (MR_String) "mercury");
  Var_27 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "inc");
  mercury__dir__make_directory_4_p_0(Var_27, &IOResult_84);
  if ((IOResult_84 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_2_28 = (MR_Integer) 1;
  else
  {
    MR_Word Error_86 = ((MR_Word) ((MR_hl_field(1, IOResult_84, 0))));
    MR_String ErrorMsg_87;

    ErrorMsg_87 = mercury__io__error_message_1_f_0(Error_86);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_7, Var_27);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_7, ErrorMsg_87);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_2_28 = (MR_Integer) 0;
  }
  Var_31 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "modules");
  mercury__dir__make_directory_4_p_0(Var_31, &IOResult_101);
  if ((IOResult_101 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_3_32 = STATE_VARIABLE_DirSucceeded_2_28;
  else
  {
    MR_Word Error_103 = ((MR_Word) ((MR_hl_field(1, IOResult_101, 0))));
    MR_String ErrorMsg_104;

    ErrorMsg_104 = mercury__io__error_message_1_f_0(Error_103);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_7, Var_31);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_7, ErrorMsg_104);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_3_32 = (MR_Integer) 0;
  }
  IntsSubDir_14 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "ints");
  Var_36 = mercury__dir__f_slash_2_f_0(IntsSubDir_14, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(Var_36, &IOResult_118);
  if ((IOResult_118 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_4_37 = STATE_VARIABLE_DirSucceeded_3_32;
  else
  {
    MR_Word Error_120 = ((MR_Word) ((MR_hl_field(1, IOResult_118, 0))));
    MR_String ErrorMsg_121;

    ErrorMsg_121 = mercury__io__error_message_1_f_0(Error_120);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_7, Var_36);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_7, ErrorMsg_121);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_4_37 = (MR_Integer) 0;
  }
  SubDirs_15 = (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_3[7]));
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 644, &UseSymLinks_16);
  switch (UseSymLinks_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_61;
        MR_Box conv4_STATE_VARIABLE_DirSucceeded_17;
        MR_Box conv3_STATE_VARIABLE_NgsLibDirMap_18;
        MR_Box conv2_STATE_VARIABLE_IO_20;

        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__library_install_scalar_common_5[0]));
          MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0_1));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_61, 3) = ((MR_Box) (ProgressStream_7));
          MR_hl_field(0, Var_61, 4) = ((MR_Box) (IntsSubDir_14));
        }
        mercury__list__foldl3_8_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__library_install_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, SubDirs_15, ((MR_Box) (STATE_VARIABLE_DirSucceeded_4_37)), &conv4_STATE_VARIABLE_DirSucceeded_17, ((MR_Box) (STATE_VARIABLE_NgsLibDirMap_1_22)), &conv3_STATE_VARIABLE_NgsLibDirMap_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_20);
        *STATE_VARIABLE_DirSucceeded_17 = ((MR_Word) (conv4_STATE_VARIABLE_DirSucceeded_17));
        *STATE_VARIABLE_NgsLibDirMap_18 = ((MR_Word) (conv3_STATE_VARIABLE_NgsLibDirMap_18));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_57;
        MR_Box conv9_STATE_VARIABLE_DirSucceeded_17;
        MR_Box conv8_STATE_VARIABLE_NgsLibDirMap_18;
        MR_Box conv7_STATE_VARIABLE_IO_20;

        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (&make__library_install_scalar_common_5[0]));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0_2));
          MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_57, 3) = ((MR_Box) (ProgressStream_7));
          MR_hl_field(0, Var_57, 4) = ((MR_Box) (IntsSubDir_14));
        }
        mercury__list__foldl3_8_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__library_install_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, SubDirs_15, ((MR_Box) (STATE_VARIABLE_DirSucceeded_4_37)), &conv9_STATE_VARIABLE_DirSucceeded_17, ((MR_Box) (STATE_VARIABLE_NgsLibDirMap_1_22)), &conv8_STATE_VARIABLE_NgsLibDirMap_18, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_20);
        *STATE_VARIABLE_DirSucceeded_17 = ((MR_Word) (conv9_STATE_VARIABLE_DirSucceeded_17));
        *STATE_VARIABLE_NgsLibDirMap_18 = ((MR_Word) (conv8_STATE_VARIABLE_NgsLibDirMap_18));
      }
      break;
  }
}

static MR_bool MR_CALL 
make__library_install____Unify____ext_cur_gs_ns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__library_install____Unify____ext_cur_gs_ns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__library_install____Compare____ext_cur_gs_ns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__library_install____Compare____ext_cur_gs_ns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__library_install____Unify____ext_cur_ngs_ns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__library_install____Unify____ext_cur_ngs_ns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__library_install____Compare____ext_cur_ngs_ns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__library_install____Compare____ext_cur_ngs_ns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__library_install____Unify____libdir_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__library_install____Unify____libdir_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__library_install____Compare____libdir_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__library_install____Compare____libdir_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__library_install____Unify____libdir_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__library_install____Unify____libdir_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__library_install____Compare____libdir_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__library_install____Compare____libdir_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__library_install__init(void)
{
}

void mercury__make__library_install__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__library_install__make__library_install__type_ctor_info_ext_cur_gs_ns_0);
  MR_register_type_ctor_info(&make__library_install__make__library_install__type_ctor_info_ext_cur_ngs_ns_0);
  MR_register_type_ctor_info(&make__library_install__make__library_install__type_ctor_info_libdir_info_0);
  MR_register_type_ctor_info(&make__library_install__make__library_install__type_ctor_info_libdir_map_0);
}

void mercury__make__library_install__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__library_install__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.library_install.
