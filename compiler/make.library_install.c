/*
** Automatically generated from `make.library_install.m'
** by the Mercury compiler,
** version rotd-2024-10-02
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
#include "make.clean.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.find_local_modules.mih"
#include "make.get_module_dep_info.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 make__library_install__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__library_install__type_ctor_info_libdir_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__library_install__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__library_install____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_0[1];

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_0[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_0;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_1[1];

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_1[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_1;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_2[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_2;

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_3[1];

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_3[1];

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_3;

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_1[1];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_2[1];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_3[2];

static const MR_DuPtagLayout make__library_install__make__library_install__du_ptag_ordered_ext_cur_gs_ns_0[3];

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_name_ordered_ext_cur_gs_ns_0[4];

static const MR_Integer make__library_install__make__library_install__functor_number_map_ext_cur_gs_ns_0[4];

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
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1147__1_2_p_0(
  MR_String InstallDir_14,
  MR_String CurDir_23);

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1155__1_2_p_0(
  MR_String NgsDir_24,
  MR_String HeadVar__2_43);

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1152__1_2_p_0(
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
  MR_Word File_5,
  MR_Word _Status_6,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11);

static void MR_CALL 
make__library_install__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word File_5,
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
make__library_install__install_library_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__install_library_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__library_install__install_library_grade_specific_files_for_grade_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word NgsLibDirMap_15,
  MR_String GradeDir_16,
  MR_Word MainModuleName_17,
  MR_Word AllModuleNames_18,
  MR_Word STATE_VARIABLE_Succeeded_0_23,
  MR_Word * STATE_VARIABLE_Succeeded_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__library_install__proposed_install_library_grade_specific_files_for_grade_c_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_String Prefix_15,
  MR_String Grade_16,
  MR_Word MainModuleName_17,
  MR_Word AllModuleNames_18,
  MR_Word STATE_VARIABLE_Succeeded_0_40,
  MR_Word * STATE_VARIABLE_Succeeded_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_String Linkage_12,
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
  MR_Word STATE_VARIABLE_Succeeded_0_32,
  MR_Word * STATE_VARIABLE_Succeeded_33);

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
make__library_install__install_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String FileName_11,
  MR_String InstallDir_12,
  MR_Word STATE_VARIABLE_Succeeded_0_17,
  MR_Word * STATE_VARIABLE_Succeeded_18);

static void MR_CALL 
make__library_install__legacy_maybe_install_static_or_dynamic_archive_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_String Linkage_12,
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
  MR_Word STATE_VARIABLE_Succeeded_0_47,
  MR_Word * STATE_VARIABLE_Succeeded_48,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

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

static /* final */ const MR_Box make__library_install_scalar_common_3[27][2];

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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0))
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

static /* final */ const MR_Box make__library_install_scalar_common_3[27][2] = {
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0))
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

static const MR_FA_PseudoTypeInfo_Struct2 make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)
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

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_cur_0) };

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_2 = {
  (MR_String) "ext_cur_ngs_gs_max_cur",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(2),
  make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_ngs_0) };

static const MR_DuArgLocn make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_3 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(3),
  make__library_install__make__library_install__field_types_ext_cur_gs_ns_0_3,
  NULL,
  make__library_install__make__library_install__field_locns_ext_cur_gs_ns_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_1[1] = { &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_0 };

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_2[1] = { &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_1 };

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_3[2] = {
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_2,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_3
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
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    make__library_install__make__library_install__du_stag_ordered_ext_cur_gs_ns_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(0)
  }
};

static const MR_DuFunctorDescPtr make__library_install__make__library_install__du_name_ordered_ext_cur_gs_ns_0[4] = {
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_1,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_0,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_2,
  &make__library_install__make__library_install__du_functor_desc_ext_cur_gs_ns_0_3
};

static const MR_Integer make__library_install__make__library_install__functor_number_map_ext_cur_gs_ns_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
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
  (MR_Integer) 4,
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

static const MR_PseudoTypeInfo make__library_install__make__library_install__field_types_ext_cur_ngs_ns_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_max_cur_0) };

static const MR_DuFunctorDesc make__library_install__make__library_install__du_functor_desc_ext_cur_ngs_ns_0_1 = {
  (MR_String) "ext_cur_ngs_max_cur",
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
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1147__1_2_p_0(
  MR_String InstallDir_14,
  MR_String CurDir_23)
{
  MR_bool succeeded = (strcmp(InstallDir_14, CurDir_23) == 0);

  return succeeded;
}

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1155__1_2_p_0(
  MR_String NgsDir_24,
  MR_String HeadVar__2_43)
{
  MR_bool succeeded = (strcmp(HeadVar__2_43, NgsDir_24) == 0);

  return succeeded;
}

static MR_bool MR_CALL 
make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1152__1_2_p_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
  }
  else
  {
    MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
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
  MR_Word File_5,
  MR_Word _Status_6,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11)
{
  make__library_install__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(File_5, STATE_VARIABLE_StatusMap_0_10, STATE_VARIABLE_StatusMap_11);
}

static void MR_CALL 
make__library_install__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_116_97_114_103_101_116_95_102_105_108_101_95_105_102_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word File_5,
  MR_Word STATE_VARIABLE_StatusMap_0_10,
  MR_Word * STATE_VARIABLE_StatusMap_11)
{
  MR_bool succeeded = ((MR_tag((MR_Word) File_5)) == (MR_Integer) 0);
  MR_Word TargetType_9;
  MR_Word Var_12;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_12 = (MR_Word) ((MR_Word) (File_5));
    TargetType_9 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
    Var_13 = make__util__is_target_grade_dependent_1_f_0(TargetType_9);
    succeeded = (Var_13 == (MR_Integer) 1);
  }
  if (succeeded)
    mercury__version_hash_table__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (File_5)), STATE_VARIABLE_StatusMap_0_10, STATE_VARIABLE_StatusMap_11);
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
    MR_Word STATE_VARIABLE_Succeeded_60_60;
    MR_String Var_63;
    MR_Word STATE_VARIABLE_Succeeded_67_67;

    libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 690, &Prefix_24);
    Var_45 = mercury__dir__f_slash_2_f_0(Prefix_24, (MR_String) "lib");
    LibDir_25 = mercury__dir__f_slash_2_f_0(Var_45, (MR_String) "mercury");
    libs__globals__get_target_2_p_0(Globals_14, &Target_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 330, &HighLevelCode_27);
    succeeded = (Target_26 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (HighLevelCode_27 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String GradeIncDir_28;
      MR_String IntsDir_30;
      MR_String Var_49;
      MR_String Var_50;
      MR_Word STATE_VARIABLE_Succeeded_55_55;

      Var_50 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "lib");
      Var_49 = mercury__dir__f_slash_2_f_0(Var_50, GradeDir_17);
      GradeIncDir_28 = mercury__dir__f_slash_2_f_0(Var_49, (MR_String) "inc");
      make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_13, Globals_14, GsLibDirMap_16, GradeIncDir_28, ModuleName_18, (MR_Tuple) (&make__library_install_scalar_common_3[24]), STATE_VARIABLE_Succeeded_0_36, &STATE_VARIABLE_Succeeded_55_55);
      IntsDir_30 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
      make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_13, Globals_14, NgsLibDirMap_15, IntsDir_30, ModuleName_18, (MR_Tuple) (&make__library_install_scalar_common_3[24]), STATE_VARIABLE_Succeeded_55_55, &STATE_VARIABLE_Succeeded_60_60);
    }
    else
      STATE_VARIABLE_Succeeded_60_60 = STATE_VARIABLE_Succeeded_0_36;
    Var_63 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
    GradeIntsDir_31 = mercury__dir__f_slash_2_f_0(Var_63, GradeDir_17);
    libs__globals__get_any_intermod_2_p_0(Globals_14, &AnyIntermod_32);
    switch (AnyIntermod_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Succeeded_67_67 = STATE_VARIABLE_Succeeded_60_60;
        break;
      case (MR_Integer) 1:
        make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_13, Globals_14, GsLibDirMap_16, GradeIntsDir_31, ModuleName_18, (MR_Tuple) (&make__library_install_scalar_common_3[11]), STATE_VARIABLE_Succeeded_60_60, &STATE_VARIABLE_Succeeded_67_67);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 525, &IntermodAnalysis_34);
    switch (IntermodAnalysis_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Succeeded_37 = STATE_VARIABLE_Succeeded_67_67;
        break;
      case (MR_Integer) 1:
        make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_13, Globals_14, GsLibDirMap_16, GradeIntsDir_31, ModuleName_18, (MR_Tuple) (&make__library_install_scalar_common_3[26]), STATE_VARIABLE_Succeeded_67_67, STATE_VARIABLE_Succeeded_37);
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
  MR_Word STATE_VARIABLE_Info_29_29;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (MainModuleName_14));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  make__program_target__make_misc_target_10_p_0(ProgressStream_11, Globals_12, Var_28, &LibSucceeded_20, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29, (MR_Word) ((MR_Unsigned) 0U), &Specs_21);
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
        MR_Word STATE_VARIABLE_Info_34_34;
        MR_Word _Info_23;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_12, &GradeDir_22);
        make__library_install__install_library_grade_specific_files_for_grade_12_p_0(ProgressStream_11, Globals_12, NgsLibDirMap_13, GradeDir_22, MainModuleName_14, AllModuleNames_15, (MR_Integer) 1, Succeeded_18, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_34_34);
        make__clean__maybe_make_grade_clean_9_p_0(ProgressStream_11, Globals_12, CleanAfter_17, MainModuleName_14, AllModuleNames_15, STATE_VARIABLE_Info_34_34, &_Info_23);
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

  make__library_install__legacy_install_subdir_file_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Tuple) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Succeeded_26);
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
    MR_Word ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, (MR_Integer) 0))));
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
    MR_Word STATE_VARIABLE_Succeeded_72_72;
    MR_String Var_74;
    MR_Box conv2_STATE_VARIABLE_Succeeded_72_72;
    MR_Box conv1_STATE_VARIABLE_IO_73_73;

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
    libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 690, &Prefix_26);
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
    mercury__list__foldl2_6_p_2((MR_Word) (&make__library_install_scalar_common_2[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, ExtExtDirs_25, ((MR_Box) (STATE_VARIABLE_Succeeded_0_32)), &conv2_STATE_VARIABLE_Succeeded_72_72, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_73_73);
    STATE_VARIABLE_Succeeded_72_72 = ((MR_Word) (conv2_STATE_VARIABLE_Succeeded_72_72));
    libs__globals__get_target_2_p_0(Globals_12, &Target_28);
    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String FileName_30;
          MR_String Var_78;
          MR_Word STATE_VARIABLE_Succeeded_79_79;
          MR_String Var_82;
          MR_String InstallMsg_97;
          MR_Word CopySucceeded_98;
          MR_String _FileNameProposed_31;

          parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_12, (MR_String) "predicate \140make.library_install.legacy_install_ints_and_headers_for_module\'/10", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[16])), ModuleName_14, &FileName_30, &_FileNameProposed_31);
          Var_78 = mercury__dir__f_slash_2_f_0(LibDir_27, (MR_String) "inc");
          make__util__verbose_make_four_part_msg_6_p_0(Globals_12, (MR_String) "Installing file", FileName_30, (MR_String) "in", Var_78, &InstallMsg_97);
          make__util__maybe_write_msg_4_p_0(ProgressStream_11, InstallMsg_97);
          libs__copy_util__copy_file_to_directory_7_p_0(Globals_12, ProgressStream_11, FileName_30, Var_78, &CopySucceeded_98);
          STATE_VARIABLE_Succeeded_79_79 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_72_72, CopySucceeded_98);
          Var_82 = mercury__dir__f_slash_2_f_0(LibDir_27, (MR_String) "ints");
          make__library_install__legacy_install_subdir_file_10_p_0(ProgressStream_11, Globals_12, NgsLibDirMap_13, Var_82, ModuleName_14, (MR_Tuple) (&make__library_install_scalar_common_3[17]), STATE_VARIABLE_Succeeded_79_79, STATE_VARIABLE_Succeeded_33);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Succeeded_33 = STATE_VARIABLE_Succeeded_72_72;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Succeeded_33 = STATE_VARIABLE_Succeeded_72_72;
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

  succeeded = make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1147__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1155__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__library_install__legacy_install_subdir_file_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__library_install__IntroducedFrom__pred__legacy_install_subdir_file__1152__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word Ext_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0))));
  MR_String ExtDir_17 = ((MR_String) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))));
  MR_String FileName_20;
  MR_Word InstallTo_22;
  MR_String _FileNameProposed_21;
  MR_Box conv0_InstallTo_22;

  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_12, (MR_String) "predicate \140make.library_install.legacy_install_subdir_file\'/10", Ext_16, ModuleName_15, &FileName_20, &_FileNameProposed_21);
  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0), LibDirMap_13, ((MR_Box) (ExtDir_17)), &conv0_InstallTo_22);
  InstallTo_22 = ((MR_Word) (conv0_InstallTo_22));
  if (((MR_tag((MR_Word) InstallTo_22)) == (MR_Integer) 0))
  {
    MR_String NgsDir_24 = ((MR_String) ((MR_hl_field(0, InstallTo_22, (MR_Integer) 1))));
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Succeeded_38_38;
    MR_Word Var_40;
    MR_String Var_43;
    MR_String Var_44;
    MR_String CurDir_48 = ((MR_String) ((MR_hl_field(0, InstallTo_22, (MR_Integer) 0))));
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
    STATE_VARIABLE_Succeeded_38_38 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_25, CopySucceeded_52);
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
    *STATE_VARIABLE_Succeeded_26 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_38_38, CopySucceeded_57);
  }
  else
  {
    MR_String CurDir_23 = ((MR_String) ((MR_hl_field(1, InstallTo_22, (MR_Integer) 0))));
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

static void MR_CALL 
make__library_install__install_library_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Succeeded_16;

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Succeeded_16);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Succeeded_16));
}

static void MR_CALL 
make__library_install__install_library_8_p_0_1(
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

  make__library_install__legacy_install_ints_and_headers_for_module_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_33, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_35);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_33));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_35));
}

void MR_CALL 
make__library_install__install_library_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word * STATE_VARIABLE_Succeeded_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word DepsSucceeded_15;
  MR_Word AllModuleNames0_16;
  MR_Word AllModuleNames_17;
  MR_Word STATE_VARIABLE_Info_24_24;

  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_9, Globals_10, MainModuleName_11, &DepsSucceeded_15, &AllModuleNames0_16, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_24);
  AllModuleNames_17 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModuleNames0_16);
  switch (DepsSucceeded_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Succeeded_19 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_24_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word NgsLibDirMap_18;
        MR_Word STATE_VARIABLE_Succeeded_26_26;
        MR_Word STATE_VARIABLE_Info_27_27;
        MR_Word LegacySucceeded_30;
        MR_Word InstallProposed_31;
        MR_Word STATE_VARIABLE_Info_25_33;
        MR_Word DirSucceeded_36;
        MR_String CurGrade_60;
        MR_Word LibGrades_61;
        MR_Word NonCurLibGrades_62;
        MR_Word KeepGoing_63;
        MR_Word STATE_VARIABLE_Succeeded_31_65;
        MR_Word STATE_VARIABLE_Info_32_66;

        make__library_install__legacy_make_non_grade_specific_install_dirs_6_p_0(ProgressStream_9, Globals_10, &DirSucceeded_36, &NgsLibDirMap_18);
        switch (DirSucceeded_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              LegacySucceeded_30 = (MR_Integer) 0;
              STATE_VARIABLE_Info_25_33 = STATE_VARIABLE_Info_24_24;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_38;
              MR_Word STATE_VARIABLE_Succeeded_26_40;
              MR_Word ExtraHdrs_46;
              MR_String Prefix_47;
              MR_String IncDir_48;
              MR_String Var_51;
              MR_String Var_52;
              MR_Word Var_56;
              MR_Box conv4_STATE_VARIABLE_Succeeded_26_40;
              MR_Box conv3_STATE_VARIABLE_Info_25_33;
              MR_Box conv2_STATE_VARIABLE_IO_28_41;
              MR_Box conv7_LegacySucceeded_30;
              MR_Box conv6_STATE_VARIABLE_IO_26_34;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_38, 0) = ((MR_Box) (&make__library_install_scalar_common_8[1]));
                MR_hl_field(0, Var_38, 1) = ((MR_Box) (make__library_install__install_library_8_p_0_1));
                MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_38, 3) = ((MR_Box) (ProgressStream_9));
                MR_hl_field(0, Var_38, 4) = ((MR_Box) (Globals_10));
                MR_hl_field(0, Var_38, 5) = ((MR_Box) (NgsLibDirMap_18));
              }
              mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, AllModuleNames_17, ((MR_Box) ((MR_Integer) 1)), &conv4_STATE_VARIABLE_Succeeded_26_40, ((MR_Box) (STATE_VARIABLE_Info_24_24)), &conv3_STATE_VARIABLE_Info_25_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_28_41);
              STATE_VARIABLE_Succeeded_26_40 = ((MR_Word) (conv4_STATE_VARIABLE_Succeeded_26_40));
              STATE_VARIABLE_Info_25_33 = ((MR_Word) (conv3_STATE_VARIABLE_Info_25_33));
              libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 716, &ExtraHdrs_46);
              libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 690, &Prefix_47);
              Var_52 = mercury__dir__f_slash_2_f_0(Prefix_47, (MR_String) "lib");
              Var_51 = mercury__dir__f_slash_2_f_0(Var_52, (MR_String) "mercury");
              IncDir_48 = mercury__dir__f_slash_2_f_0(Var_51, (MR_String) "inc");
              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__library_install__install_library_8_p_0_2));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (ProgressStream_9));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) (Globals_10));
                MR_hl_field(0, Var_56, 5) = ((MR_Box) (IncDir_48));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, ExtraHdrs_46, ((MR_Box) (STATE_VARIABLE_Succeeded_26_40)), &conv7_LegacySucceeded_30, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_26_34);
              LegacySucceeded_30 = ((MR_Word) (conv7_LegacySucceeded_30));
            }
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 737, &InstallProposed_31);
        switch (InstallProposed_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_Succeeded_26_26 = LegacySucceeded_30;
              STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_25_33;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProposedSucceeded_32;

              make__library_install__proposed_install_library_non_grade_specific_files_8_p_0(ProgressStream_9, Globals_10, AllModuleNames_17, &ProposedSucceeded_32, STATE_VARIABLE_Info_25_33, &STATE_VARIABLE_Info_27_27);
              STATE_VARIABLE_Succeeded_26_26 = libs__maybe_util__and_2_f_0(LegacySucceeded_30, ProposedSucceeded_32);
            }
            break;
        }
        libs__compute_grade__grade_directory_component_2_p_0(Globals_10, &CurGrade_60);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 698, &LibGrades_61);
        NonCurLibGrades_62 = mercury__list__delete_all_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibGrades_61, ((MR_Box) (CurGrade_60)));
        make__library_install__install_library_grade_specific_files_for_grade_12_p_0(ProgressStream_9, Globals_10, NgsLibDirMap_18, CurGrade_60, MainModuleName_11, AllModuleNames_17, STATE_VARIABLE_Succeeded_26_26, &STATE_VARIABLE_Succeeded_31_65, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_32_66);
        KeepGoing_63 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_32_66);
        make__library_install__setup_make_and_install_grade_specific_files_for_grades_13_p_0(ProgressStream_9, KeepGoing_63, Globals_10, NgsLibDirMap_18, MainModuleName_11, AllModuleNames_17, NonCurLibGrades_62, STATE_VARIABLE_Succeeded_31_65, STATE_VARIABLE_Succeeded_19, STATE_VARIABLE_Info_32_66, STATE_VARIABLE_Info_21);
      }
      break;
  }
}

static void MR_CALL 
make__library_install__install_library_grade_specific_files_for_grade_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word NgsLibDirMap_15,
  MR_String GradeDir_16,
  MR_Word MainModuleName_17,
  MR_Word AllModuleNames_18,
  MR_Word STATE_VARIABLE_Succeeded_0_23,
  MR_Word * STATE_VARIABLE_Succeeded_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_Word InstallProposed_22;
  MR_Word STATE_VARIABLE_Succeeded_29_29;
  MR_Word STATE_VARIABLE_Info_30_30;

  make__library_install__legacy_install_library_grade_specific_files_for_grade_12_p_0(ProgressStream_13, Globals_14, NgsLibDirMap_15, GradeDir_16, MainModuleName_17, AllModuleNames_18, STATE_VARIABLE_Succeeded_0_23, &STATE_VARIABLE_Succeeded_29_29, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_30_30);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 737, &InstallProposed_22);
  switch (InstallProposed_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Succeeded_24 = STATE_VARIABLE_Succeeded_29_29;
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_30_30;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Info_35_43;
        MR_Word ModulesWithChildrenCord_57;
        MR_Word ModulesWithoutDepInfoCord_58;
        MR_Word ModulesWithoutDepInfo_59;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word _ModulesWithChildren_34;

        Var_62 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        Var_63 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        make__library_install__gather_module_dep_infos_loop_11_p_0(ProgressStream_13, Globals_14, AllModuleNames_18, Var_62, &ModulesWithChildrenCord_57, Var_63, &ModulesWithoutDepInfoCord_58, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_35_43);
        _ModulesWithChildren_34 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesWithChildrenCord_57);
        ModulesWithoutDepInfo_59 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesWithoutDepInfoCord_58);
        if ((ModulesWithoutDepInfo_59 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Prefix0_35;
          MR_String Prefix_36;
          MR_Word AnyIntermod_38;
          MR_Word IntermodAnalysis_40;
          MR_Word Target_42;
          MR_Word STATE_VARIABLE_Succeeded_41_48;
          MR_Word STATE_VARIABLE_Succeeded_44_51;
          MR_Word STATE_VARIABLE_Succeeded_48_55;

          libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 690, &Prefix0_35);
          Prefix_36 = mercury__dir__f_slash_2_f_0(Prefix0_35, (MR_String) "MercurySystem");
          make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_13, Globals_14, Prefix_36, GradeDir_16, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[4])), AllModuleNames_18, STATE_VARIABLE_Succeeded_29_29, &STATE_VARIABLE_Succeeded_41_48);
          libs__globals__get_any_intermod_2_p_0(Globals_14, &AnyIntermod_38);
          switch (AnyIntermod_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Succeeded_44_51 = STATE_VARIABLE_Succeeded_41_48;
              break;
            case (MR_Integer) 1:
              make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_13, Globals_14, Prefix_36, GradeDir_16, (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[10])), AllModuleNames_18, STATE_VARIABLE_Succeeded_41_48, &STATE_VARIABLE_Succeeded_44_51);
              break;
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 525, &IntermodAnalysis_40);
          switch (IntermodAnalysis_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Succeeded_48_55 = STATE_VARIABLE_Succeeded_44_51;
              break;
            case (MR_Integer) 1:
              make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_13, Globals_14, Prefix_36, GradeDir_16, (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[25])), AllModuleNames_18, STATE_VARIABLE_Succeeded_44_51, &STATE_VARIABLE_Succeeded_48_55);
              break;
          }
          libs__globals__get_target_2_p_0(Globals_14, &Target_42);
          switch (Target_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              make__library_install__proposed_install_library_grade_specific_files_for_grade_c_12_p_0(ProgressStream_13, Globals_14, Prefix_36, GradeDir_16, MainModuleName_17, AllModuleNames_18, STATE_VARIABLE_Succeeded_48_55, STATE_VARIABLE_Succeeded_24, STATE_VARIABLE_Info_35_43, STATE_VARIABLE_Info_26);
              break;
            case (MR_Integer) 1:
              {
                MR_String CilDllFileName_67;
                MR_String CilDllDirName_69;
                MR_String CilDllInstallDir_70;
                MR_String Var_71;
                MR_String InstallMsg_74;
                MR_Word CopySucceeded_75;
                MR_String _FileNameProposed_72;
                MR_String Var_68;

                parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_14, (MR_String) "predicate \140make.library_install.module_name_to_workspace_file_name\'/4", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[2])), MainModuleName_17, &CilDllFileName_67, &_FileNameProposed_72);
                parse_tree__file_names__ext_cur_gs_extension_dir_3_p_0((MR_Integer) 2, &Var_68, &CilDllDirName_69);
                Var_71 = mercury__dir__f_slash_2_f_0(Prefix_36, CilDllDirName_69);
                CilDllInstallDir_70 = mercury__dir__f_slash_2_f_0(Var_71, GradeDir_16);
                make__util__verbose_make_four_part_msg_6_p_0(Globals_14, (MR_String) "Installing file", CilDllFileName_67, (MR_String) "in", CilDllInstallDir_70, &InstallMsg_74);
                make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_74);
                libs__copy_util__copy_file_to_directory_7_p_0(Globals_14, ProgressStream_13, CilDllFileName_67, CilDllInstallDir_70, &CopySucceeded_75);
                *STATE_VARIABLE_Succeeded_24 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_48_55, CopySucceeded_75);
                *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_35_43;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String JarFileName_81;
                MR_String JarDirName_83;
                MR_String JarInstallDir_84;
                MR_String Var_85;
                MR_String InstallMsg_88;
                MR_Word CopySucceeded_89;
                MR_String _FileNameProposed_86;
                MR_String Var_82;

                parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_14, (MR_String) "predicate \140make.library_install.module_name_to_workspace_file_name\'/4", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[1])), MainModuleName_17, &JarFileName_81, &_FileNameProposed_86);
                parse_tree__file_names__ext_cur_gs_extension_dir_3_p_0((MR_Integer) 1, &Var_82, &JarDirName_83);
                Var_85 = mercury__dir__f_slash_2_f_0(Prefix_36, JarDirName_83);
                JarInstallDir_84 = mercury__dir__f_slash_2_f_0(Var_85, GradeDir_16);
                make__util__verbose_make_four_part_msg_6_p_0(Globals_14, (MR_String) "Installing file", JarFileName_81, (MR_String) "in", JarInstallDir_84, &InstallMsg_88);
                make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_88);
                libs__copy_util__copy_file_to_directory_7_p_0(Globals_14, ProgressStream_13, JarFileName_81, JarInstallDir_84, &CopySucceeded_89);
                *STATE_VARIABLE_Succeeded_24 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_48_55, CopySucceeded_89);
                *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_35_43;
              }
              break;
          }
        }
        else
        {
          *STATE_VARIABLE_Succeeded_24 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_35_43;
        }
      }
      break;
  }
}

static void MR_CALL 
make__library_install__proposed_install_library_grade_specific_files_for_grade_c_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_String Prefix_15,
  MR_String Grade_16,
  MR_Word MainModuleName_17,
  MR_Word AllModuleNames_18,
  MR_Word STATE_VARIABLE_Succeeded_0_40,
  MR_Word * STATE_VARIABLE_Succeeded_41,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_bool succeeded;
  MR_Word HighLevelCode_23;
  MR_String StaticLibFileName_29;
  MR_String SharedLibFileName_30;
  MR_String StaticDirName_32;
  MR_String SharedDirName_34;
  MR_String TargetArch_35;
  MR_String StaticInstallDir_36;
  MR_String SharedInstallDir_37;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_Succeeded_48_48;
  MR_Word STATE_VARIABLE_Succeeded_53_53;
  MR_String Var_58;
  MR_String Var_59;
  MR_String Var_60;
  MR_String Var_61;
  MR_Word MakeDirResult_72;
  MR_String _LibFileNameProposed_68;
  MR_String _LibFileNameProposed_70;
  MR_String Var_31;
  MR_String Var_33;

  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (MainModuleName_17));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_13, Globals_14, Prefix_15, Grade_16, (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[0])), Var_47, STATE_VARIABLE_Succeeded_0_40, &STATE_VARIABLE_Succeeded_48_48);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 330, &HighLevelCode_23);
  switch (HighLevelCode_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Succeeded_53_53 = STATE_VARIABLE_Succeeded_48_48;
      break;
    case (MR_Integer) 1:
      make__library_install__proposed_install_all_gs_files_10_p_0(ProgressStream_13, Globals_14, Prefix_15, Grade_16, (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[23])), AllModuleNames_18, STATE_VARIABLE_Succeeded_48_48, &STATE_VARIABLE_Succeeded_53_53);
      break;
  }
  parse_tree__file_names__module_name_to_lib_file_name_7_p_0(Globals_14, (MR_String) "predicate \140make.library_install.module_name_to_workspace_lib_file_name\'/5", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[19])), MainModuleName_17, &StaticLibFileName_29, &_LibFileNameProposed_68);
  parse_tree__file_names__module_name_to_lib_file_name_7_p_0(Globals_14, (MR_String) "predicate \140make.library_install.module_name_to_workspace_lib_file_name\'/5", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[20])), MainModuleName_17, &SharedLibFileName_30, &_LibFileNameProposed_70);
  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_14, (MR_Integer) 7, &Var_31, &StaticDirName_32);
  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_14, (MR_Integer) 8, &Var_33, &SharedDirName_34);
  libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 727, &TargetArch_35);
  Var_59 = mercury__dir__f_slash_2_f_0(Prefix_15, StaticDirName_32);
  Var_58 = mercury__dir__f_slash_2_f_0(Var_59, Grade_16);
  StaticInstallDir_36 = mercury__dir__f_slash_2_f_0(Var_58, TargetArch_35);
  Var_61 = mercury__dir__f_slash_2_f_0(Prefix_15, SharedDirName_34);
  Var_60 = mercury__dir__f_slash_2_f_0(Var_61, Grade_16);
  SharedInstallDir_37 = mercury__dir__f_slash_2_f_0(Var_60, TargetArch_35);
  mercury__dir__make_directory_4_p_0(StaticInstallDir_36, &MakeDirResult_72);
  if ((MakeDirResult_72 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word STATE_VARIABLE_Succeeded_64_64;

    make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(ProgressStream_13, Globals_14, (MR_String) "static", StaticInstallDir_36, StaticLibFileName_29, STATE_VARIABLE_Succeeded_53_53, &STATE_VARIABLE_Succeeded_64_64);
    succeeded = (strcmp(StaticLibFileName_29, SharedLibFileName_30) == 0);
    if (succeeded)
      *STATE_VARIABLE_Succeeded_41 = STATE_VARIABLE_Succeeded_64_64;
    else
    {
      succeeded = (strcmp(StaticInstallDir_36, SharedInstallDir_37) == 0);
      if (succeeded)
        make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(ProgressStream_13, Globals_14, (MR_String) "shared", SharedInstallDir_37, SharedLibFileName_30, STATE_VARIABLE_Succeeded_64_64, STATE_VARIABLE_Succeeded_41);
      else
      {
        MR_Word MakeDirResult_90;

        mercury__dir__make_directory_4_p_0(SharedInstallDir_37, &MakeDirResult_90);
        if ((MakeDirResult_90 == (MR_Word) ((MR_Unsigned) 0U)))
          make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(ProgressStream_13, Globals_14, (MR_String) "shared", SharedInstallDir_37, SharedLibFileName_30, STATE_VARIABLE_Succeeded_64_64, STATE_VARIABLE_Succeeded_41);
        else
        {
          MR_Word Error_93 = ((MR_Word) ((MR_hl_field(1, MakeDirResult_90, (MR_Integer) 0))));
          MR_String ErrorMsg_94;

          ErrorMsg_94 = mercury__io__error_message_1_f_0(Error_93);
          mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "Error creating installation directory ");
          mercury__io__write_string_4_p_0(ProgressStream_13, SharedInstallDir_37);
          mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) ": ");
          mercury__io__write_string_4_p_0(ProgressStream_13, ErrorMsg_94);
          mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "\n");
          *STATE_VARIABLE_Succeeded_41 = STATE_VARIABLE_Succeeded_64_64;
        }
      }
    }
  }
  else
  {
    MR_Word Error_75 = ((MR_Word) ((MR_hl_field(1, MakeDirResult_72, (MR_Integer) 0))));
    MR_String ErrorMsg_76;

    ErrorMsg_76 = mercury__io__error_message_1_f_0(Error_75);
    mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_13, StaticInstallDir_36);
    mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_13, ErrorMsg_76);
    mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "\n");
    *STATE_VARIABLE_Succeeded_41 = STATE_VARIABLE_Succeeded_53_53;
  }
  *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
}

static void MR_CALL 
make__library_install__proposed_maybe_install_static_or_dynamic_archive_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_String Linkage_12,
  MR_String InstallDir_13,
  MR_String FileName_14,
  MR_Word STATE_VARIABLE_Succeeded_0_22,
  MR_Word * STATE_VARIABLE_Succeeded_23)
{
  MR_bool succeeded;
  MR_Word LibLinkages_17;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 701, &LibLinkages_17);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Linkage_12)), LibLinkages_17);
  if (succeeded)
  {
    MR_Word InstallSucceeded0_18;
    MR_String InstallMsg_30;
    MR_Word CopySucceeded_31;

    make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_14, (MR_String) "in", InstallDir_13, &InstallMsg_30);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_30);
    libs__copy_util__copy_file_to_directory_7_p_0(Globals_11, ProgressStream_10, FileName_14, InstallDir_13, &CopySucceeded_31);
    InstallSucceeded0_18 = libs__maybe_util__and_2_f_0((MR_Integer) 1, CopySucceeded_31);
    succeeded = (strcmp(Linkage_12, (MR_String) "static") == 0);
    if (succeeded)
      succeeded = (InstallSucceeded0_18 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String BaseFileName_19;
      MR_String InstalledFileName_20;
      MR_Word RanlibSucceeded_21;
      MR_String InstallMsg_35;
      MR_String RanLibCommand_36;
      MR_String RanLibFlags_37;
      MR_String Command_38;
      MR_Word Var_45;
      MR_String Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_String Var_49;

      BaseFileName_19 = mercury__dir__det_basename_1_f_0(FileName_14);
      InstalledFileName_20 = mercury__dir__f_slash_2_f_0(InstallDir_13, BaseFileName_19);
      make__util__verbose_make_two_part_msg_4_p_0(Globals_11, (MR_String) "Generating archive index for", InstalledFileName_20, &InstallMsg_35);
      make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_35);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 639, &RanLibCommand_36);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 640, &RanLibFlags_37);
      Var_46 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_36);
      Var_49 = libs__shell_util__quote_shell_cmd_arg_1_f_0(InstalledFileName_20);
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (RanLibFlags_37));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
      }
      Command_38 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_45);
      libs__system_cmds__invoke_system_command_8_p_0(Globals_11, ProgressStream_10, ProgressStream_10, (MR_Integer) 0, Command_38, &RanlibSucceeded_21);
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

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_16);
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

  make__library_install__module_name_to_workspace_file_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_FileName_8);
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
  MR_Word STATE_VARIABLE_Succeeded_0_32,
  MR_Word * STATE_VARIABLE_Succeeded_33)
{
  MR_String ExtDirName_21;
  MR_String InstallDir_28;
  MR_String Var_36;
  MR_Word MakeDirResult_43;

  switch (MR_tag((MR_Word) Ext_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ExtNgs_19 = ((MR_Unsigned) ((MR_hl_field(1, Ext_15, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String Var_20;

        parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtNgs_19, &Var_20, &ExtDirName_21);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtGs_22 = ((MR_Unsigned) ((MR_hl_field(2, Ext_15, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_String Var_23;

        parse_tree__file_names__ext_cur_gs_extension_dir_3_p_0(ExtGs_22, &Var_23, &ExtDirName_21);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_15, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 6:
          {
            MR_String Var_25;

            parse_tree__file_names__ext_cur_ngs_gs_max_cur_extension_dir_3_p_0(&Var_25, &ExtDirName_21);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtNgsGsMaxNgs_26 = ((MR_Unsigned) ((MR_hl_field(3, Ext_15, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_27;

            parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtNgsGsMaxNgs_26, &Var_27, &ExtDirName_21);
          }
          break;
      }
      break;
  }
  Var_36 = mercury__dir__f_slash_2_f_0(Prefix_13, ExtDirName_21);
  InstallDir_28 = mercury__dir__f_slash_2_f_0(Var_36, Grade_14);
  mercury__dir__make_directory_4_p_0(InstallDir_28, &MakeDirResult_43);
  if ((MakeDirResult_43 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word GenExt_30 = (MR_Word) (Ext_15);
    MR_Word FileNames_31;
    MR_Word Var_38;
    MR_Word Var_61;
    MR_Box conv3_STATE_VARIABLE_Succeeded_33;
    MR_Box conv2_STATE_VARIABLE_IO_35;

    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&make__library_install_scalar_common_6[0]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (make__library_install__proposed_install_all_gs_files_10_p_0_1));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (Globals_12));
      MR_hl_field(0, Var_38, 4) = ((MR_Box) (GenExt_30));
    }
    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, ModuleNames_16, &FileNames_31);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__library_install__proposed_install_all_gs_files_10_p_0_2));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (ProgressStream_11));
      MR_hl_field(0, Var_61, 4) = ((MR_Box) (Globals_12));
      MR_hl_field(0, Var_61, 5) = ((MR_Box) (InstallDir_28));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, FileNames_31, ((MR_Box) (STATE_VARIABLE_Succeeded_0_32)), &conv3_STATE_VARIABLE_Succeeded_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_35);
    *STATE_VARIABLE_Succeeded_33 = ((MR_Word) (conv3_STATE_VARIABLE_Succeeded_33));
  }
  else
  {
    MR_Word Error_46 = ((MR_Word) ((MR_hl_field(1, MakeDirResult_43, (MR_Integer) 0))));
    MR_String ErrorMsg_47;

    ErrorMsg_47 = mercury__io__error_message_1_f_0(Error_46);
    mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_11, InstallDir_28);
    mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_11, ErrorMsg_47);
    mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "\n");
    *STATE_VARIABLE_Succeeded_33 = STATE_VARIABLE_Succeeded_0_32;
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

  make__library_install__legacy_install_grade_ints_and_headers_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_37, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_39);
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
        MR_Word STATE_VARIABLE_Succeeded_48_48;
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
              MR_Word STATE_VARIABLE_Succeeded_64_64;
              MR_Word STATE_VARIABLE_Succeeded_67_67;
              MR_Word LibLinkages_83;
              MR_String _StaticLibFileNameProposed_35;
              MR_String _SharedLibFileNameProposed_37;

              parse_tree__file_names__module_name_to_lib_file_name_create_dirs_9_p_0(Globals_14, (MR_String) "predicate \140make.library_install.legacy_install_library_grade_specific_files_for_grade\'/12", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[19])), MainModuleName_17, &StaticLibFileName_34, &_StaticLibFileNameProposed_35);
              parse_tree__file_names__module_name_to_lib_file_name_create_dirs_9_p_0(Globals_14, (MR_String) "predicate \140make.library_install.legacy_install_library_grade_specific_files_for_grade\'/12", (MR_String) "lib", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[20])), MainModuleName_17, &SharedLibFileName_36, &_SharedLibFileNameProposed_37);
              libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 701, &LibLinkages_83);
              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "static")), LibLinkages_83);
              if (succeeded)
              {
                MR_Word InstallSucceeded0_84;
                MR_String InstallMsg_92;
                MR_Word CopySucceeded_93;

                make__util__verbose_make_four_part_msg_6_p_0(Globals_14, (MR_String) "Installing file", StaticLibFileName_34, (MR_String) "in", GradeLibDir_25, &InstallMsg_92);
                make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_92);
                libs__copy_util__copy_file_to_directory_7_p_0(Globals_14, ProgressStream_13, StaticLibFileName_34, GradeLibDir_25, &CopySucceeded_93);
                InstallSucceeded0_84 = libs__maybe_util__and_2_f_0((MR_Integer) 1, CopySucceeded_93);
                succeeded = (strcmp((MR_String) "static", (MR_String) "static") == 0);
                if (succeeded)
                  succeeded = (InstallSucceeded0_84 == (MR_Integer) 1);
                if (succeeded)
                {
                  MR_String BaseFileName_85;
                  MR_String InstalledFileName_86;
                  MR_Word RanlibSucceeded_87;
                  MR_String InstallMsg_97;
                  MR_String RanLibCommand_98;
                  MR_String RanLibFlags_99;
                  MR_String Command_100;
                  MR_Word Var_107;
                  MR_String Var_108;
                  MR_Word Var_109;
                  MR_Word Var_110;
                  MR_String Var_111;

                  BaseFileName_85 = mercury__dir__det_basename_1_f_0(StaticLibFileName_34);
                  InstalledFileName_86 = mercury__dir__f_slash_2_f_0(GradeLibDir_25, BaseFileName_85);
                  make__util__verbose_make_two_part_msg_4_p_0(Globals_14, (MR_String) "Generating archive index for", InstalledFileName_86, &InstallMsg_97);
                  make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_97);
                  libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 639, &RanLibCommand_98);
                  libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 640, &RanLibFlags_99);
                  Var_108 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_98);
                  Var_111 = libs__shell_util__quote_shell_cmd_arg_1_f_0(InstalledFileName_86);
                  {
                    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
                    MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_109, 0) = ((MR_Box) (RanLibFlags_99));
                    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
                  }
                  {
                    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
                    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_109));
                  }
                  Command_100 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_107);
                  libs__system_cmds__invoke_system_command_8_p_0(Globals_14, ProgressStream_13, ProgressStream_13, (MR_Integer) 0, Command_100, &RanlibSucceeded_87);
                  STATE_VARIABLE_Succeeded_64_64 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_38, RanlibSucceeded_87);
                }
                else
                  STATE_VARIABLE_Succeeded_64_64 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_38, InstallSucceeded0_84);
              }
              else
                STATE_VARIABLE_Succeeded_64_64 = STATE_VARIABLE_Succeeded_0_38;
              succeeded = (strcmp(StaticLibFileName_34, SharedLibFileName_36) == 0);
              if (succeeded)
                STATE_VARIABLE_Succeeded_67_67 = STATE_VARIABLE_Succeeded_64_64;
              else
                make__library_install__legacy_maybe_install_static_or_dynamic_archive_9_p_0(ProgressStream_13, Globals_14, (MR_String) "shared", SharedLibFileName_36, GradeLibDir_25, STATE_VARIABLE_Succeeded_64_64, &STATE_VARIABLE_Succeeded_67_67);
              make__library_install__legacy_install_grade_init_8_p_0(ProgressStream_13, Globals_14, GradeDir_16, MainModuleName_17, STATE_VARIABLE_Succeeded_67_67, &STATE_VARIABLE_Succeeded_48_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String DllFileName_27;
              MR_String InstallMsg_114;
              MR_Word CopySucceeded_115;
              MR_String _DllFileNameProposed_28;

              parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_14, (MR_String) "predicate \140make.library_install.legacy_install_library_grade_specific_files_for_grade\'/12", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[2])), MainModuleName_17, &DllFileName_27, &_DllFileNameProposed_28);
              make__util__verbose_make_four_part_msg_6_p_0(Globals_14, (MR_String) "Installing file", DllFileName_27, (MR_String) "in", GradeLibDir_25, &InstallMsg_114);
              make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_114);
              libs__copy_util__copy_file_to_directory_7_p_0(Globals_14, ProgressStream_13, DllFileName_27, GradeLibDir_25, &CopySucceeded_115);
              STATE_VARIABLE_Succeeded_48_48 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_38, CopySucceeded_115);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String JarFileName_30;
              MR_String _JarFileNameProposed_31;

              parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_14, (MR_String) "predicate \140make.library_install.legacy_install_library_grade_specific_files_for_grade\'/12", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[1])), MainModuleName_17, &JarFileName_30, &_JarFileNameProposed_31);
              make__library_install__install_file_8_p_0(ProgressStream_13, Globals_14, JarFileName_30, GradeLibDir_25, STATE_VARIABLE_Succeeded_0_38, &STATE_VARIABLE_Succeeded_48_48);
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
        mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, AllModuleNames_18, ((MR_Box) (STATE_VARIABLE_Succeeded_48_48)), &conv4_STATE_VARIABLE_Succeeded_39, ((MR_Box) (STATE_VARIABLE_Info_0_40)), &conv3_STATE_VARIABLE_Info_41, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_43);
        *STATE_VARIABLE_Succeeded_39 = ((MR_Word) (conv4_STATE_VARIABLE_Succeeded_39));
        *STATE_VARIABLE_Info_41 = ((MR_Word) (conv3_STATE_VARIABLE_Info_41));
      }
      break;
  }
}

static void MR_CALL 
make__library_install__install_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String FileName_11,
  MR_String InstallDir_12,
  MR_Word STATE_VARIABLE_Succeeded_0_17,
  MR_Word * STATE_VARIABLE_Succeeded_18)
{
  MR_String InstallMsg_15;
  MR_Word CopySucceeded_16;

  make__util__verbose_make_four_part_msg_6_p_0(Globals_10, (MR_String) "Installing file", FileName_11, (MR_String) "in", InstallDir_12, &InstallMsg_15);
  make__util__maybe_write_msg_4_p_0(ProgressStream_9, InstallMsg_15);
  libs__copy_util__copy_file_to_directory_7_p_0(Globals_10, ProgressStream_9, FileName_11, InstallDir_12, &CopySucceeded_16);
  *STATE_VARIABLE_Succeeded_18 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_17, CopySucceeded_16);
}

static void MR_CALL 
make__library_install__legacy_maybe_install_static_or_dynamic_archive_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_String Linkage_12,
  MR_String FileName_13,
  MR_String InstallDir_14,
  MR_Word STATE_VARIABLE_Succeeded_0_22,
  MR_Word * STATE_VARIABLE_Succeeded_23)
{
  MR_bool succeeded;
  MR_Word LibLinkages_17;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 701, &LibLinkages_17);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Linkage_12)), LibLinkages_17);
  if (succeeded)
  {
    MR_Word InstallSucceeded0_18;
    MR_String InstallMsg_30;
    MR_Word CopySucceeded_31;

    make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_13, (MR_String) "in", InstallDir_14, &InstallMsg_30);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_30);
    libs__copy_util__copy_file_to_directory_7_p_0(Globals_11, ProgressStream_10, FileName_13, InstallDir_14, &CopySucceeded_31);
    InstallSucceeded0_18 = libs__maybe_util__and_2_f_0((MR_Integer) 1, CopySucceeded_31);
    succeeded = (strcmp(Linkage_12, (MR_String) "static") == 0);
    if (succeeded)
      succeeded = (InstallSucceeded0_18 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String BaseFileName_19;
      MR_String InstalledFileName_20;
      MR_Word RanlibSucceeded_21;
      MR_String InstallMsg_35;
      MR_String RanLibCommand_36;
      MR_String RanLibFlags_37;
      MR_String Command_38;
      MR_Word Var_45;
      MR_String Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_String Var_49;

      BaseFileName_19 = mercury__dir__det_basename_1_f_0(FileName_13);
      InstalledFileName_20 = mercury__dir__f_slash_2_f_0(InstallDir_14, BaseFileName_19);
      make__util__verbose_make_two_part_msg_4_p_0(Globals_11, (MR_String) "Generating archive index for", InstalledFileName_20, &InstallMsg_35);
      make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_35);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 639, &RanLibCommand_36);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 640, &RanLibFlags_37);
      Var_46 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_36);
      Var_49 = libs__shell_util__quote_shell_cmd_arg_1_f_0(InstalledFileName_20);
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (RanLibFlags_37));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
      }
      Command_38 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_45);
      libs__system_cmds__invoke_system_command_8_p_0(Globals_11, ProgressStream_10, ProgressStream_10, (MR_Integer) 0, Command_38, &RanlibSucceeded_21);
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

  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 690, &Prefix_15);
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

  make__library_install__legacy_make_ngs_dir_symlink_to_cur_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_LibDirMap_22);
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
  MR_Word STATE_VARIABLE_DirSucceeded_38_38;
  MR_String Var_41;
  MR_Word STATE_VARIABLE_DirSucceeded_42_42;
  MR_Word STATE_VARIABLE_DirSucceeded_45_45;
  MR_Word STATE_VARIABLE_GsLibDirMap_47_47;
  MR_Word IOResult_83;
  MR_Word IOResult_100;

  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 690, &Prefix_14);
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
    STATE_VARIABLE_DirSucceeded_38_38 = (MR_Integer) 1;
  else
  {
    MR_Word Error_85 = ((MR_Word) ((MR_hl_field(1, IOResult_83, (MR_Integer) 0))));
    MR_String ErrorMsg_86;

    ErrorMsg_86 = mercury__io__error_message_1_f_0(Error_85);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_8, Var_37);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_8, ErrorMsg_86);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_38_38 = (MR_Integer) 0;
  }
  Var_41 = mercury__dir__f_slash_2_f_0(GradeIntsSubDir_17, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(Var_41, &IOResult_100);
  if ((IOResult_100 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_42_42 = STATE_VARIABLE_DirSucceeded_38_38;
  else
  {
    MR_Word Error_102 = ((MR_Word) ((MR_hl_field(1, IOResult_100, (MR_Integer) 0))));
    MR_String ErrorMsg_103;

    ErrorMsg_103 = mercury__io__error_message_1_f_0(Error_102);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_8, Var_41);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_8, ErrorMsg_103);
    mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_42_42 = (MR_Integer) 0;
  }
  make__library_install__legacy_make_nonext_dir_6_p_0(ProgressStream_8, GradeModuleSubDir_18, STATE_VARIABLE_DirSucceeded_42_42, &STATE_VARIABLE_DirSucceeded_45_45);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0), &STATE_VARIABLE_GsLibDirMap_47_47);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 691, &UseSymLinks_19);
  switch (UseSymLinks_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_DirSucceeded_63_63;
        MR_Word STATE_VARIABLE_GsLibDirMap_64_64;
        MR_Word STATE_VARIABLE_DirSucceeded_67_67;
        MR_Word STATE_VARIABLE_GsLibDirMap_68_68;

        make__library_install__legacy_make_ngs_dir_9_p_0(ProgressStream_8, GradeIncSubDir_16, (MR_String) "mihs", STATE_VARIABLE_DirSucceeded_45_45, &STATE_VARIABLE_DirSucceeded_63_63, STATE_VARIABLE_GsLibDirMap_47_47, &STATE_VARIABLE_GsLibDirMap_64_64);
        make__library_install__legacy_make_ngs_dir_9_p_0(ProgressStream_8, GradeIntsSubDir_17, (MR_String) "opts", STATE_VARIABLE_DirSucceeded_63_63, &STATE_VARIABLE_DirSucceeded_67_67, STATE_VARIABLE_GsLibDirMap_64_64, &STATE_VARIABLE_GsLibDirMap_68_68);
        make__library_install__legacy_make_ngs_dir_9_p_0(ProgressStream_8, GradeIntsSubDir_17, (MR_String) "analyses", STATE_VARIABLE_DirSucceeded_67_67, STATE_VARIABLE_DirSucceeded_20, STATE_VARIABLE_GsLibDirMap_68_68, STATE_VARIABLE_GsLibDirMap_21);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_DirSucceeded_50_50;
        MR_Word STATE_VARIABLE_GsLibDirMap_51_51;
        MR_Word Var_53;
        MR_Box conv4_STATE_VARIABLE_DirSucceeded_20;
        MR_Box conv3_STATE_VARIABLE_GsLibDirMap_21;
        MR_Box conv2_STATE_VARIABLE_IO_23;

        make__library_install__legacy_make_ngs_dir_symlink_to_cur_9_p_0(ProgressStream_8, GradeIncSubDir_16, (MR_String) "mihs", STATE_VARIABLE_DirSucceeded_45_45, &STATE_VARIABLE_DirSucceeded_50_50, STATE_VARIABLE_GsLibDirMap_47_47, &STATE_VARIABLE_GsLibDirMap_51_51);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_53, 0) = ((MR_Box) (&make__library_install_scalar_common_5[0]));
          MR_hl_field(0, Var_53, 1) = ((MR_Box) (make__library_install__legacy_make_grade_specific_install_dirs_7_p_0_1));
          MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_53, 3) = ((MR_Box) (ProgressStream_8));
          MR_hl_field(0, Var_53, 4) = ((MR_Box) (GradeIntsSubDir_17));
        }
        mercury__list__foldl3_8_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__library_install_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_3[22])), ((MR_Box) (STATE_VARIABLE_DirSucceeded_50_50)), &conv4_STATE_VARIABLE_DirSucceeded_20, ((MR_Box) (STATE_VARIABLE_GsLibDirMap_51_51)), &conv3_STATE_VARIABLE_GsLibDirMap_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23);
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
    MR_Word Error_32 = ((MR_Word) ((MR_hl_field(1, IOResult_17, (MR_Integer) 0))));
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
    MR_Word Error_17 = ((MR_Word) ((MR_hl_field(1, IOResult_11, (MR_Integer) 0))));
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
      MR_String Grade_35 = ((MR_String) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Grades_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
      MR_Word StopOrContinue_40;
      MR_Word STATE_VARIABLE_Succeeded_48_48;

      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, STATE_VARIABLE_Succeeded_0_8, &StopOrContinue_40, STATE_VARIABLE_Succeeded_0_8, &STATE_VARIABLE_Succeeded_48_48);
      switch (StopOrContinue_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Succeeded_49_49;
            MR_Word STATE_VARIABLE_Info_50_50;
            MR_Word next_value_of_HeadVar__7_7;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_8;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

            make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0(ProgressStream_1, Globals_3, NgsLibDirMap_4, MainModuleName_5, AllModuleNames_6, Grade_35, STATE_VARIABLE_Succeeded_48_48, &STATE_VARIABLE_Succeeded_49_49, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_50_50);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__7_7 = Grades_36;
            next_value_of_STATE_VARIABLE_Succeeded_0_8 = STATE_VARIABLE_Succeeded_49_49;
            next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_50_50;
            HeadVar__7_7 = next_value_of_HeadVar__7_7;
            STATE_VARIABLE_Succeeded_0_8 = next_value_of_STATE_VARIABLE_Succeeded_0_8;
            STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_9 = STATE_VARIABLE_Succeeded_48_48;
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

  make__clean__maybe_make_grade_clean_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__7_7);
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

  make__library_install__make_and_install_grade_specific_files_for_grades_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), &conv2_Succeeded_18);
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
  MR_Word STATE_VARIABLE_Succeeded_0_47,
  MR_Word * STATE_VARIABLE_Succeeded_48,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  MR_Word SubDirSetting_22;
  MR_Word CleanAfter_23;
  MR_Word EnvVarArgs_24;
  MR_Word OptionArgs0_25;
  MR_Word OptionArgs_26;
  MR_String InstallMsg_27;
  MR_Word MaybeMCFlags_28;
  MR_Word OptionsSpecs_35;
  MR_Word LibGlobals_36;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_61;

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
  EnvVarArgs_24 = make__make_info__make_info_get_env_var_args_1_f_0(STATE_VARIABLE_Info_0_49);
  OptionArgs0_25 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_49);
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Grade_18));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[18])));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) "--grade"));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  OptionArgs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs0_25, Var_53);
  make__util__verbose_make_two_part_msg_4_p_0(Globals_14, (MR_String) "Installing grade", Grade_18, &InstallMsg_27);
  make__util__maybe_write_msg_4_p_0(ProgressStream_13, InstallMsg_27);
  Var_61 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_0_49);
  make__options_file__lookup_mmc_options_2_p_0(Var_61, &MaybeMCFlags_28);
  if (((MR_tag((MR_Word) MaybeMCFlags_28)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_37 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags_28, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_13, Globals_14, LookupSpecs_37);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.library_install.setup_make_and_install_grade_specific_files_for_grade\'/12", (MR_String) "bad DEFAULT_MCFLAGS");
      return;
    }
  }
  else
  {
    MR_Word MCFlags_29 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags_28, (MR_Integer) 0))));
    MR_Word DefaultOptionTable_30;
    MR_Word DetectedGradeFlags_31;
    MR_Word AllFlags_32;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_33;
    MR_Word Var_34;

    libs__globals__get_default_options_2_p_0(Globals_14, &DefaultOptionTable_30);
    DetectedGradeFlags_31 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_0_49);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarArgs_24, OptionArgs_26);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_29, Var_63);
    AllFlags_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_31, Var_62);
    libs__handle_options__handle_given_options_9_p_0(ProgressStream_13, DefaultOptionTable_30, AllFlags_32, &Var_33, &Var_34, &OptionsSpecs_35, &LibGlobals_36);
  }
  if ((OptionsSpecs_35 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StatusMap0_40;
    MR_Word StatusMap_41;
    MR_Word VeryVerbose_42;
    MR_Box Cookie_43;
    MR_Word Succeeded0_44;
    MR_Word CleanupPred_45;
    MR_Word Succeeded1_46;
    MR_Word STATE_VARIABLE_Info_72_72;
    MR_Word STATE_VARIABLE_Info_73_73;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_Info_75_75;
    MR_Word Var_78;
    MR_Box conv1_StatusMap_41;
    MR_Box conv4_STATE_VARIABLE_Info_50;

    StatusMap0_40 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_49);
    mercury__version_hash_table__fold_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__library_install_scalar_common_1[1]), (MR_Word) (&make__library_install_scalar_common_1[2]), StatusMap0_40, ((MR_Box) (StatusMap0_40)), &conv1_StatusMap_41);
    StatusMap_41 = ((MR_Word) (conv1_StatusMap_41));
    make__make_info__make_info_set_dep_file_status_map_3_p_0(StatusMap_41, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_72_72);
    make__make_info__make_info_set_option_args_3_p_0(OptionArgs_26, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_73_73);
    Var_74 = make__timestamp__init_target_file_timestamp_map_0_f_0();
    make__make_info__make_info_set_target_file_timestamp_map_3_p_0(Var_74, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_75_75);
    libs__globals__lookup_bool_option_3_p_0(LibGlobals_36, (MR_Integer) 77, &VeryVerbose_42);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_43);
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (&make__library_install_scalar_common_8[0]));
      MR_hl_field(0, Var_78, 1) = ((MR_Box) (make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_2));
      MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(0, Var_78, 3) = ((MR_Box) (ProgressStream_13));
      MR_hl_field(0, Var_78, 4) = ((MR_Box) (LibGlobals_36));
      MR_hl_field(0, Var_78, 5) = ((MR_Box) (NgsLibDirMap_15));
      MR_hl_field(0, Var_78, 6) = ((MR_Box) (MainModuleName_16));
      MR_hl_field(0, Var_78, 7) = ((MR_Box) (AllModuleNames_17));
      MR_hl_field(0, Var_78, 8) = ((MR_Box) (STATE_VARIABLE_Info_75_75));
      MR_hl_field(0, Var_78, 9) = ((MR_Box) (CleanAfter_23));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_78, &Succeeded0_44);
    {
      CleanupPred_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CleanupPred_45, 0) = ((MR_Box) (&make__library_install_scalar_common_5[1]));
      MR_hl_field(0, CleanupPred_45, 1) = ((MR_Box) (make__library_install__setup_make_and_install_grade_specific_files_for_grade_12_p_0_3));
      MR_hl_field(0, CleanupPred_45, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, CleanupPred_45, 3) = ((MR_Box) (ProgressStream_13));
      MR_hl_field(0, CleanupPred_45, 4) = ((MR_Box) (LibGlobals_36));
      MR_hl_field(0, CleanupPred_45, 5) = ((MR_Box) (CleanAfter_23));
      MR_hl_field(0, CleanupPred_45, 6) = ((MR_Box) (MainModuleName_16));
      MR_hl_field(0, CleanupPred_45, 7) = ((MR_Box) (AllModuleNames_17));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_42, Cookie_43, CleanupPred_45, Succeeded0_44, &Succeeded1_46, ((MR_Box) (STATE_VARIABLE_Info_75_75)), &conv4_STATE_VARIABLE_Info_50);
    *STATE_VARIABLE_Info_50 = ((MR_Word) (conv4_STATE_VARIABLE_Info_50));
    *STATE_VARIABLE_Succeeded_48 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_47, Succeeded1_46);
  }
  else
  {
    libs__handle_options__usage_errors_5_p_0(ProgressStream_13, Globals_14, OptionsSpecs_35);
    *STATE_VARIABLE_Succeeded_48 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_0_49;
  }
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
  MR_Word ModulesWithChildrenCord_51;
  MR_Word ModulesWithoutDepInfoCord_52;
  MR_Word ModulesWithoutDepInfo_53;
  MR_Word Var_56;
  MR_Word Var_57;

  Var_56 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_57 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  make__library_install__gather_module_dep_infos_loop_11_p_0(ProgressStream_9, Globals_10, AllModuleNames_11, Var_56, &ModulesWithChildrenCord_51, Var_57, &ModulesWithoutDepInfoCord_52, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
  ModulesWithChildren_15 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesWithChildrenCord_51);
  ModulesWithoutDepInfo_53 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesWithoutDepInfoCord_52);
  if ((ModulesWithoutDepInfo_53 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Prefix0_17;
    MR_String Prefix_18;
    MR_Word MakeDirResult_59;

    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 690, &Prefix0_17);
    Prefix_18 = mercury__dir__f_slash_2_f_0(Prefix0_17, (MR_String) "MercurySystem");
    mercury__dir__make_directory_4_p_0(Prefix_18, &MakeDirResult_59);
    if ((MakeDirResult_59 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Target_24;
      MR_Word STATE_VARIABLE_Succeeded_42_42;
      MR_Word STATE_VARIABLE_Succeeded_44_44;
      MR_Word STATE_VARIABLE_Succeeded_46_46;
      MR_Word STATE_VARIABLE_Succeeded_48_48;

      make__library_install__proposed_install_all_ngs_files_9_p_0(ProgressStream_9, Globals_10, Prefix_18, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[0])), ModulesWithChildren_15, (MR_Integer) 1, &STATE_VARIABLE_Succeeded_42_42);
      make__library_install__proposed_install_all_ngs_files_9_p_0(ProgressStream_9, Globals_10, Prefix_18, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[1])), AllModuleNames_11, STATE_VARIABLE_Succeeded_42_42, &STATE_VARIABLE_Succeeded_44_44);
      make__library_install__proposed_install_all_ngs_files_9_p_0(ProgressStream_9, Globals_10, Prefix_18, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[2])), AllModuleNames_11, STATE_VARIABLE_Succeeded_44_44, &STATE_VARIABLE_Succeeded_46_46);
      make__library_install__proposed_install_all_ngs_files_9_p_0(ProgressStream_9, Globals_10, Prefix_18, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_4[3])), AllModuleNames_11, STATE_VARIABLE_Succeeded_46_46, &STATE_VARIABLE_Succeeded_48_48);
      libs__globals__get_target_2_p_0(Globals_10, &Target_24);
      switch (Target_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__library_install__proposed_install_all_ngs_files_9_p_0(ProgressStream_9, Globals_10, Prefix_18, (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[16])), AllModuleNames_11, STATE_VARIABLE_Succeeded_48_48, STATE_VARIABLE_Succeeded_26);
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Succeeded_26 = STATE_VARIABLE_Succeeded_48_48;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Succeeded_26 = STATE_VARIABLE_Succeeded_48_48;
          break;
      }
    }
    else
    {
      MR_Word Error_62 = ((MR_Word) ((MR_hl_field(1, MakeDirResult_59, (MR_Integer) 0))));
      MR_String ErrorMsg_63;

      ErrorMsg_63 = mercury__io__error_message_1_f_0(Error_62);
      mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "Error creating installation directory ");
      mercury__io__write_string_4_p_0(ProgressStream_9, Prefix_18);
      mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) ": ");
      mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_63);
      mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n");
      *STATE_VARIABLE_Succeeded_26 = (MR_Integer) 1;
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
      MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ModuleNames_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MaybeModuleDepInfo_34;
      MR_Word STATE_VARIABLE_Info_45_45;
      MR_Word STATE_VARIABLE_ModulesWithoutDepInfo_47_47;
      MR_Word STATE_VARIABLE_ModulesWithChildren_48_48;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModulesWithChildren_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModulesWithoutDepInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

      make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_28, &MaybeModuleDepInfo_34, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_45_45);
      if ((MaybeModuleDepInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_28)), STATE_VARIABLE_ModulesWithoutDepInfo_0_6, &STATE_VARIABLE_ModulesWithoutDepInfo_47_47);
        STATE_VARIABLE_ModulesWithChildren_48_48 = STATE_VARIABLE_ModulesWithChildren_0_4;
      }
      else
      {
        MR_Word ModuleDepInfo_35 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_34, (MR_Integer) 0))));
        MR_Word Children_36;

        parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_35, &Children_36);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_36);
        if (succeeded)
          mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_28)), STATE_VARIABLE_ModulesWithChildren_0_4, &STATE_VARIABLE_ModulesWithChildren_48_48);
        else
          STATE_VARIABLE_ModulesWithChildren_48_48 = STATE_VARIABLE_ModulesWithChildren_0_4;
        STATE_VARIABLE_ModulesWithoutDepInfo_47_47 = STATE_VARIABLE_ModulesWithoutDepInfo_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ModuleNames_29;
      next_value_of_STATE_VARIABLE_ModulesWithChildren_0_4 = STATE_VARIABLE_ModulesWithChildren_48_48;
      next_value_of_STATE_VARIABLE_ModulesWithoutDepInfo_0_6 = STATE_VARIABLE_ModulesWithoutDepInfo_47_47;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_45_45;
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

  make__library_install__install_file_to_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_16);
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

  make__library_install__module_name_to_workspace_file_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_FileName_8);
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
  MR_Word MakeDirResult_36;

  if (((MR_tag((MR_Word) Ext_13)) == (MR_Integer) 1))
  {
    MR_Word ExtNgs_17 = ((MR_Unsigned) ((MR_hl_field(1, Ext_13, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_String Var_18;

    parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtNgs_17, &Var_18, &ExtDirName_19);
  }
  else
  {
    MR_String Var_21;

    parse_tree__file_names__ext_cur_ngs_max_cur_extension_dir_3_p_0(&Var_21, &ExtDirName_19);
  }
  InstallDir_22 = mercury__dir__f_slash_2_f_0(Prefix_12, ExtDirName_19);
  mercury__dir__make_directory_4_p_0(InstallDir_22, &MakeDirResult_36);
  if ((MakeDirResult_36 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word GenExt_24 = (MR_Word) (Ext_13);
    MR_Word FileNames_25;
    MR_Word Var_31;
    MR_Word Var_54;
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
      Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__library_install__proposed_install_all_ngs_files_9_p_0_2));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (ProgressStream_10));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) (Globals_11));
      MR_hl_field(0, Var_54, 5) = ((MR_Box) (InstallDir_22));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, FileNames_25, ((MR_Box) (STATE_VARIABLE_Succeeded_0_26)), &conv3_STATE_VARIABLE_Succeeded_27, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_29);
    *STATE_VARIABLE_Succeeded_27 = ((MR_Word) (conv3_STATE_VARIABLE_Succeeded_27));
  }
  else
  {
    MR_Word Error_39 = ((MR_Word) ((MR_hl_field(1, MakeDirResult_36, (MR_Integer) 0))));
    MR_String ErrorMsg_40;

    ErrorMsg_40 = mercury__io__error_message_1_f_0(Error_39);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_10, InstallDir_22);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_10, ErrorMsg_40);
    mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\n");
    *STATE_VARIABLE_Succeeded_27 = STATE_VARIABLE_Succeeded_0_26;
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

  make__library_install__legacy_make_ngs_dir_symlink_to_cur_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Succeeded_20, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_LibDirMap_22);
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

  make__library_install__legacy_make_ngs_dir_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Succeeded_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_LibDirMap_21);
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
  MR_Word STATE_VARIABLE_NgsLibDirMap_22_22;
  MR_String Var_24;
  MR_String Var_27;
  MR_Word STATE_VARIABLE_DirSucceeded_28_28;
  MR_String Var_31;
  MR_Word STATE_VARIABLE_DirSucceeded_32_32;
  MR_String Var_36;
  MR_Word STATE_VARIABLE_DirSucceeded_37_37;
  MR_Word IOResult_84;
  MR_Word IOResult_101;
  MR_Word IOResult_118;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__library_install__make__library_install__type_ctor_info_libdir_info_0), &STATE_VARIABLE_NgsLibDirMap_22_22);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 690, &Prefix_12);
  Var_24 = mercury__dir__f_slash_2_f_0(Prefix_12, (MR_String) "lib");
  LibDir_13 = mercury__dir__f_slash_2_f_0(Var_24, (MR_String) "mercury");
  Var_27 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "inc");
  mercury__dir__make_directory_4_p_0(Var_27, &IOResult_84);
  if ((IOResult_84 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_28_28 = (MR_Integer) 1;
  else
  {
    MR_Word Error_86 = ((MR_Word) ((MR_hl_field(1, IOResult_84, (MR_Integer) 0))));
    MR_String ErrorMsg_87;

    ErrorMsg_87 = mercury__io__error_message_1_f_0(Error_86);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_7, Var_27);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_7, ErrorMsg_87);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_28_28 = (MR_Integer) 0;
  }
  Var_31 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "modules");
  mercury__dir__make_directory_4_p_0(Var_31, &IOResult_101);
  if ((IOResult_101 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_32_32 = STATE_VARIABLE_DirSucceeded_28_28;
  else
  {
    MR_Word Error_103 = ((MR_Word) ((MR_hl_field(1, IOResult_101, (MR_Integer) 0))));
    MR_String ErrorMsg_104;

    ErrorMsg_104 = mercury__io__error_message_1_f_0(Error_103);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_7, Var_31);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_7, ErrorMsg_104);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_32_32 = (MR_Integer) 0;
  }
  IntsSubDir_14 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "ints");
  Var_36 = mercury__dir__f_slash_2_f_0(IntsSubDir_14, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(Var_36, &IOResult_118);
  if ((IOResult_118 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DirSucceeded_37_37 = STATE_VARIABLE_DirSucceeded_32_32;
  else
  {
    MR_Word Error_120 = ((MR_Word) ((MR_hl_field(1, IOResult_118, (MR_Integer) 0))));
    MR_String ErrorMsg_121;

    ErrorMsg_121 = mercury__io__error_message_1_f_0(Error_120);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating installation directory ");
    mercury__io__write_string_4_p_0(ProgressStream_7, Var_36);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ProgressStream_7, ErrorMsg_121);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    STATE_VARIABLE_DirSucceeded_37_37 = (MR_Integer) 0;
  }
  SubDirs_15 = (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_3[7]));
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 691, &UseSymLinks_16);
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
        mercury__list__foldl3_8_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__library_install_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, SubDirs_15, ((MR_Box) (STATE_VARIABLE_DirSucceeded_37_37)), &conv4_STATE_VARIABLE_DirSucceeded_17, ((MR_Box) (STATE_VARIABLE_NgsLibDirMap_22_22)), &conv3_STATE_VARIABLE_NgsLibDirMap_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_20);
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
        mercury__list__foldl3_8_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__library_install_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, SubDirs_15, ((MR_Box) (STATE_VARIABLE_DirSucceeded_37_37)), &conv9_STATE_VARIABLE_DirSucceeded_17, ((MR_Box) (STATE_VARIABLE_NgsLibDirMap_22_22)), &conv8_STATE_VARIABLE_NgsLibDirMap_18, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_20);
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
