/*
** Automatically generated from `make.library_install.m'
** by the Mercury compiler,
** version rotd-2024-08-16
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




static const MR_FA_PseudoTypeInfo_Struct2 make__library_install__version_hash_table__pti_version_hash_table_2__plain_make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__library_install__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__library_install____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
make__library_install__IntroducedFrom__pred__make_install_dirs__590__1_5_p_0(
  MR_String IntsSubdir_16,
  MR_String LambdaHeadVar__1_66,
  MR_Word * LambdaHeadVar__2_67);

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
make__library_install__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__library_install__install_grade_ints_and_headers_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkSucceeded_13,
  MR_String GradeDir_14,
  MR_Word ModuleName_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
make__library_install__install_library_grade_2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkSucceeded0_13,
  MR_Word MainModuleName_14,
  MR_Word AllModuleNames_15,
  MR_Word Info0_16,
  MR_Word CleanAfter_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
make__library_install__install_extra_header_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String IncDir_11,
  MR_String FileName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_16,
  MR_Word * STATE_VARIABLE_Succeeded_17);

static void MR_CALL 
make__library_install__install_ints_and_headers_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__library_install__install_ints_and_headers_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word SubdirLinkSucceeded_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
make__library_install__install_subdir_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word SubdirLinkSucceeded_12,
  MR_String InstallDir_13,
  MR_Word ModuleName_14,
  MR_Tuple HeadVar__6_6,
  MR_Word * Succeeded_17);

static void MR_CALL 
make__library_install__install_library_grade_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__library_install__install_library_grade_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__library_install__install_library_grade_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__library_install__install_library_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__library_install__install_library_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__library_install__install_library_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__library_install__install_library_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__library_install__install_library_grade_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__library_install__install_library_grade_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word LinkSucceeded0_14,
  MR_String GradeDir_15,
  MR_Word MainModuleName_16,
  MR_Word AllModuleNames_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
make__library_install__make_grade_install_dirs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__library_install__make_grade_install_dirs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String Grade_10,
  MR_Word * DirSucceeded_11,
  MR_Word * LinkSucceeded_12);

static void MR_CALL 
make__library_install__print_mkdir_errors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
make__library_install__install_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_String InstallDir_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
make__library_install__maybe_install_library_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String Linkage_11,
  MR_String FileName_12,
  MR_String InstallDir_13,
  MR_Word * Succeeded_14);


static /* final */ const MR_Box make__library_install_scalar_common_1[2][3];

static /* final */ const MR_Box make__library_install_scalar_common_2[1][4];

static /* final */ const MR_Box make__library_install_scalar_common_3[28][2];

static /* final */ const MR_Box make__library_install_scalar_common_4[5][1];

static /* final */ const MR_Box make__library_install_scalar_common_5[1][9];

static /* final */ const MR_Box make__library_install_scalar_common_6[2][13];

static /* final */ const MR_Box make__library_install_scalar_common_7[1][8];

static /* final */ const MR_Box make__library_install_scalar_common_8[3][12];

static /* final */ const MR_Box make__library_install_scalar_common_9[1][11];

static /* final */ const MR_Box make__library_install_scalar_common_10[1][7];




static /* final */ const MR_Box make__library_install_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__library_install_scalar_common_10[0])),
    ((MR_Box) (make__library_install__install_library_grade_11_p_0_1)),
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
    ((MR_Box) ((MR_String) "--use-grade-subdirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[0]))),
    ((MR_Box) ((MR_String) "int0s"))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__library_install_scalar_common_3[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[3]))),
    ((MR_Box) ((MR_String) "opts"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[1]))),
    ((MR_Box) ((MR_String) "ints"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[2]))),
    ((MR_Box) ((MR_String) "int2s"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_4[3]))),
    ((MR_Box) ((MR_String) "int3s"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 22U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[8]))),
    ((MR_Box) ((MR_String) "module_deps"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[10]))),
    ((MR_Box) ((MR_String) "mhs"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[12]))),
    ((MR_Box) ((MR_String) "mihs"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &make__library_install_scalar_common_3[14]))),
    ((MR_Box) ((MR_String) "analyses"))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "module_dep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "mih")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "mh")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "int3")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "int2")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "analysis")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[26])))
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
  { (MR_Box) ((MR_Unsigned) 8U) },
};

static /* final */ const MR_Box make__library_install_scalar_common_5[1][9] = {
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
};

static /* final */ const MR_Box make__library_install_scalar_common_6[2][13] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__library_install__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_7[1][8] = {
  /* row   0 */
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

static /* final */ const MR_Box make__library_install_scalar_common_8[3][12] = {
  /* row   0 */
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__library_install____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__library_install_scalar_common_9[1][11] = {
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

static /* final */ const MR_Box make__library_install_scalar_common_10[1][7] = {
  /* row   0 */
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

static void MR_CALL 
make__library_install__IntroducedFrom__pred__make_install_dirs__590__1_5_p_0(
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
make__library_install__make_install_symlink_6_p_0(
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
make__library_install__install_grade_ints_and_headers_10_p_0(
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

    libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 690, &Prefix_21);
    Var_42 = mercury__dir__f_slash_2_f_0(Prefix_21, (MR_String) "lib");
    LibDir_22 = mercury__dir__f_slash_2_f_0(Var_42, (MR_String) "mercury");
    libs__globals__get_target_2_p_0(Globals_12, &Target_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 330, &HighLevelCode_24);
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
      make__library_install__install_subdir_file_9_p_0(ProgressStream_11, Globals_12, LinkSucceeded_13, GradeIncDir_25, ModuleName_15, (MR_Tuple) (&make__library_install_scalar_common_3[13]), &HeaderSucceeded1_26);
      IntDir_27 = mercury__dir__f_slash_2_f_0(LibDir_22, (MR_String) "ints");
      make__library_install__install_subdir_file_9_p_0(ProgressStream_11, Globals_12, LinkSucceeded_13, IntDir_27, ModuleName_15, (MR_Tuple) (&make__library_install_scalar_common_3[13]), &HeaderSucceeded2_28);
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
        make__library_install__install_subdir_file_9_p_0(ProgressStream_11, Globals_12, LinkSucceeded_13, GradeIntDir_30, ModuleName_15, (MR_Tuple) (&make__library_install_scalar_common_3[4]), &OptSucceeded_32);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 525, &IntermodAnalysis_33);
    switch (IntermodAnalysis_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IntermodAnalysisSucceeded_34 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__library_install__install_subdir_file_9_p_0(ProgressStream_11, Globals_12, LinkSucceeded_13, GradeIntDir_30, ModuleName_15, (MR_Tuple) (&make__library_install_scalar_common_3[15]), &IntermodAnalysisSucceeded_34);
        break;
    }
    Var_74 = libs__maybe_util__and_2_f_0(HeaderSucceeded_29, OptSucceeded_32);
    *Succeeded_16 = libs__maybe_util__and_2_f_0(Var_74, IntermodAnalysisSucceeded_34);
  }
}

static void MR_CALL 
make__library_install__install_library_grade_2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkSucceeded0_13,
  MR_Word MainModuleName_14,
  MR_Word AllModuleNames_15,
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
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (MainModuleName_14));
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
        make__library_install__install_library_grade_files_11_p_0(ProgressStream_11, Globals_12, LinkSucceeded0_13, GradeDir_23, MainModuleName_14, AllModuleNames_15, Succeeded_18, Info1_21, &Info2_24);
        make__clean__maybe_make_grade_clean_9_p_0(ProgressStream_11, Globals_12, CleanAfter_17, MainModuleName_14, AllModuleNames_15, Info2_24, &_Info_25);
      }
      break;
  }
}

static void MR_CALL 
make__library_install__install_extra_header_8_p_0(
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
make__library_install__install_ints_and_headers_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_17;

  make__library_install__install_subdir_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_Succeeded_17);
  *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_17));
}

static void MR_CALL 
make__library_install__install_ints_and_headers_9_p_0(
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
      ExtExtDirs0_20 = (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_3[2]));
    libs__globals__get_any_intermod_2_p_0(Globals_11, &AnyIntermod_21);
    switch (AnyIntermod_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ExtExtDirs1_22 = ExtExtDirs0_20;
        break;
      case (MR_Integer) 1:
        {
          ExtExtDirs1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ExtExtDirs1_22, 0) = ((MR_Box) (&make__library_install_scalar_common_3[4]));
          MR_hl_field(1, ExtExtDirs1_22, 1) = ((MR_Box) (ExtExtDirs0_20));
        }
        break;
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (&make__library_install_scalar_common_3[9]));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (ExtExtDirs1_22));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (&make__library_install_scalar_common_3[7]));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (&make__library_install_scalar_common_3[6]));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_56));
    }
    {
      ExtExtDirs_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ExtExtDirs_23, 0) = ((MR_Box) (&make__library_install_scalar_common_3[5]));
      MR_hl_field(1, ExtExtDirs_23, 1) = ((MR_Box) (Var_51));
    }
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 690, &Prefix_24);
    Var_67 = mercury__dir__f_slash_2_f_0(Prefix_24, (MR_String) "lib");
    LibDir_25 = mercury__dir__f_slash_2_f_0(Var_67, (MR_String) "mercury");
    Var_72 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (&make__library_install_scalar_common_8[2]));
      MR_hl_field(0, Var_70, 1) = ((MR_Box) (make__library_install__install_ints_and_headers_9_p_0_1));
      MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_70, 3) = ((MR_Box) (ProgressStream_10));
      MR_hl_field(0, Var_70, 4) = ((MR_Box) (Globals_11));
      MR_hl_field(0, Var_70, 5) = ((MR_Box) (SubdirLinkSucceeded_12));
      MR_hl_field(0, Var_70, 6) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_70, 7) = ((MR_Box) (ModuleName_13));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&make__library_install_scalar_common_2[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, ExtExtDirs_23, &Results_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_71_71);
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

          parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140make.library_install.install_ints_and_headers\'/9", (MR_Word) (MR_mkword(3, &make__library_install_scalar_common_3[10])), ModuleName_13, &FileName_28);
          Var_77 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "inc");
          make__util__verbose_make_four_part_msg_6_p_0(Globals_11, (MR_String) "Installing file", FileName_28, (MR_String) "in", Var_77, &InstallMsg_96);
          make__util__maybe_write_msg_4_p_0(ProgressStream_10, InstallMsg_96);
          libs__copy_util__copy_file_to_directory_7_p_0(Globals_11, ProgressStream_10, FileName_28, Var_77, &HeaderSucceeded1_29);
          Var_80 = mercury__dir__f_slash_2_f_0(LibDir_25, (MR_String) "ints");
          make__library_install__install_subdir_file_9_p_0(ProgressStream_10, Globals_11, SubdirLinkSucceeded_12, Var_80, ModuleName_13, (MR_Tuple) (&make__library_install_scalar_common_3[11]), &HeaderSucceeded2_30);
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
make__library_install__install_subdir_file_9_p_0(
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

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140make.library_install.install_subdir_file\'/9", Ext_15, ModuleName_14, &FileName_19);
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
make__library_install__install_library_grade_11_p_0_3(
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
make__library_install__install_library_grade_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_18;

  make__library_install__install_library_grade_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), &conv2_Succeeded_18);
  *wrapper_arg_1 = ((MR_Box) (conv2_Succeeded_18));
}

static void MR_CALL 
make__library_install__install_library_grade_11_p_0_1(
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

void MR_CALL 
make__library_install__install_library_grade_11_p_0(
  MR_Word LinkSucceeded0_12,
  MR_Word MainModuleName_13,
  MR_Word AllModuleNames_14,
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
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &make__library_install_scalar_common_3[0])));
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.library_install.install_library_grade\'/11", (MR_String) "bad DEFAULT_MCFLAGS");
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
    mercury__version_hash_table__fold_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__library_install_scalar_common_1[0]), (MR_Word) (&make__library_install_scalar_common_1[1]), StatusMap0_39, ((MR_Box) (StatusMap0_39)), &conv1_StatusMap_40);
    StatusMap_40 = ((MR_Word) (conv1_StatusMap_40));
    make__make_info__make_info_set_dep_file_status_map_3_p_0(StatusMap_40, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_67_67);
    make__make_info__make_info_set_option_args_3_p_0(OptionArgs_25, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_68_68);
    Var_69 = make__timestamp__init_target_file_timestamps_0_f_0();
    make__make_info__make_info_set_target_file_timestamps_3_p_0(Var_69, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_70_70);
    libs__globals__lookup_bool_option_3_p_0(LibGlobals_35, (MR_Integer) 77, &VeryVerbose_41);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_42);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_73, 0) = ((MR_Box) (&make__library_install_scalar_common_6[1]));
      MR_hl_field(0, Var_73, 1) = ((MR_Box) (make__library_install__install_library_grade_11_p_0_2));
      MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(0, Var_73, 3) = ((MR_Box) (ProgressStream_15));
      MR_hl_field(0, Var_73, 4) = ((MR_Box) (LibGlobals_35));
      MR_hl_field(0, Var_73, 5) = ((MR_Box) (LinkSucceeded0_12));
      MR_hl_field(0, Var_73, 6) = ((MR_Box) (MainModuleName_13));
      MR_hl_field(0, Var_73, 7) = ((MR_Box) (AllModuleNames_14));
      MR_hl_field(0, Var_73, 8) = ((MR_Box) (STATE_VARIABLE_Info_70_70));
      MR_hl_field(0, Var_73, 9) = ((MR_Box) (CleanAfter_22));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_73, &Succeeded0_43);
    {
      Cleanup_44 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_44, 0) = ((MR_Box) (&make__library_install_scalar_common_8[1]));
      MR_hl_field(0, Cleanup_44, 1) = ((MR_Box) (make__library_install__install_library_grade_11_p_0_3));
      MR_hl_field(0, Cleanup_44, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Cleanup_44, 3) = ((MR_Box) (ProgressStream_15));
      MR_hl_field(0, Cleanup_44, 4) = ((MR_Box) (LibGlobals_35));
      MR_hl_field(0, Cleanup_44, 5) = ((MR_Box) (CleanAfter_22));
      MR_hl_field(0, Cleanup_44, 6) = ((MR_Box) (MainModuleName_13));
      MR_hl_field(0, Cleanup_44, 7) = ((MR_Box) (AllModuleNames_14));
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

static void MR_CALL 
make__library_install__install_library_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Succeeded_17;

  make__library_install__install_extra_header_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Succeeded_17);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Succeeded_17));
}

static void MR_CALL 
make__library_install__install_library_8_p_0_3(
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

  make__library_install__install_ints_and_headers_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_Succeeded_14, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Info_33);
  *wrapper_arg_2 = ((MR_Box) (conv5_Succeeded_14));
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Info_33));
}

static void MR_CALL 
make__library_install__install_library_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_67;

  make__library_install__IntroducedFrom__pred__make_install_dirs__590__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_67);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_67));
}

static void MR_CALL 
make__library_install__install_library_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_10;

  make__library_install__make_install_symlink_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_10));
}

void MR_CALL 
make__library_install__install_library_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word DepsSucceeded_15;
  MR_Word AllModuleNames0_16;
  MR_Word AllModuleNames_17;
  MR_Word DirSucceeded_18;
  MR_Word LinkSucceeded_19;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_String Prefix_54;
  MR_String LibDir_55;
  MR_Word DirSucceeded1_56;
  MR_Word DirSucceeded2_57;
  MR_String IntsSubdir_58;
  MR_Word DirSucceeded3_59;
  MR_Word DirSucceeded123_60;
  MR_Word Subdirs_61;
  MR_Word LinkSucceededSubdirs_62;
  MR_Word DirSucceededList_63;
  MR_String Var_66;
  MR_String Var_69;
  MR_String Var_72;
  MR_String Var_75;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Box conv1_STATE_VARIABLE_IO_63_83;

  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_9, Globals_10, MainModuleName_11, &DepsSucceeded_15, &AllModuleNames0_16, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_31_31);
  AllModuleNames_17 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModuleNames0_16);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 690, &Prefix_54);
  Var_66 = mercury__dir__f_slash_2_f_0(Prefix_54, (MR_String) "lib");
  LibDir_55 = mercury__dir__f_slash_2_f_0(Var_66, (MR_String) "mercury");
  Var_69 = mercury__dir__f_slash_2_f_0(LibDir_55, (MR_String) "inc");
  mercury__dir__make_directory_4_p_0(Var_69, &DirSucceeded1_56);
  Var_72 = mercury__dir__f_slash_2_f_0(LibDir_55, (MR_String) "modules");
  mercury__dir__make_directory_4_p_0(Var_72, &DirSucceeded2_57);
  Var_75 = mercury__dir__f_slash_2_f_0(LibDir_55, (MR_String) "ints");
  IntsSubdir_58 = mercury__dir__f_slash_2_f_0(Var_75, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(IntsSubdir_58, &DirSucceeded3_59);
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (DirSucceeded3_59));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (DirSucceeded2_57));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    DirSucceeded123_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DirSucceeded123_60, 0) = ((MR_Box) (DirSucceeded1_56));
    MR_hl_field(1, DirSucceeded123_60, 1) = ((MR_Box) (Var_79));
  }
  Subdirs_61 = (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_3[24]));
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&make__library_install_scalar_common_5[0]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (make__library_install__install_library_8_p_0_1));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (IntsSubdir_58));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, Subdirs_61, &LinkSucceededSubdirs_62, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_63_83);
  LinkSucceeded_19 = libs__maybe_util__and_list_1_f_0(LinkSucceededSubdirs_62);
  switch (LinkSucceeded_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MkDirSucceededList_64;
        MR_Word Var_84;
        MR_Box conv3_STATE_VARIABLE_IO_65_85;

        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (&make__library_install_scalar_common_7[0]));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) (make__library_install__install_library_8_p_0_2));
          MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_84, 3) = ((MR_Box) (IntsSubdir_58));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Subdirs_61, &MkDirSucceededList_64, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_65_85);
        DirSucceededList_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), DirSucceeded123_60, MkDirSucceededList_64);
      }
      break;
    case (MR_Integer) 1:
      DirSucceededList_63 = DirSucceeded123_60;
      break;
  }
  make__library_install__print_mkdir_errors_5_p_0(ProgressStream_9, DirSucceededList_63, &DirSucceeded_18);
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
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__library_install_scalar_common_8[0]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__library_install__install_library_8_p_0_3));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_34, 5) = ((MR_Box) (LinkSucceeded_19));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, AllModuleNames_17, &IntsSucceeded_20, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv7_STATE_VARIABLE_Info_35_35, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_36_36);
    STATE_VARIABLE_Info_35_35 = ((MR_Word) (conv7_STATE_VARIABLE_Info_35_35));
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 716, &ExtraHdrs_90);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 690, &Prefix_91);
    Var_96 = mercury__dir__f_slash_2_f_0(Prefix_91, (MR_String) "lib");
    Var_95 = mercury__dir__f_slash_2_f_0(Var_96, (MR_String) "mercury");
    IncDir_92 = mercury__dir__f_slash_2_f_0(Var_95, (MR_String) "inc");
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_100, 0) = ((MR_Box) (&make__library_install_scalar_common_9[0]));
      MR_hl_field(0, Var_100, 1) = ((MR_Box) (make__library_install__install_library_8_p_0_4));
      MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_100, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_100, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_100, 5) = ((MR_Box) (IncDir_92));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_100, ExtraHdrs_90, ((MR_Box) ((MR_Integer) 1)), &conv10_ExtraHdrsSucceeded_21, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_37_37);
    ExtraHdrsSucceeded_21 = ((MR_Word) (conv10_ExtraHdrsSucceeded_21));
    libs__compute_grade__grade_directory_component_2_p_0(Globals_10, &Grade_22);
    make__library_install__install_library_grade_files_11_p_0(ProgressStream_9, Globals_10, LinkSucceeded_19, Grade_22, MainModuleName_11, AllModuleNames_17, &GradeSucceeded_23, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_38_38);
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
      libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 698, &LibGrades0_25);
      LibGrades_26 = mercury__list__delete_all_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibGrades0_25, ((MR_Box) (Grade_22)));
      make__build__foldl2_install_library_grades_12_p_0(KeepGoing_24, LinkSucceeded_19, MainModuleName_11, AllModuleNames_17, ProgressStream_9, Globals_10, LibGrades_26, Succeeded_12, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_28);
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
make__library_install__install_library_grade_files_11_p_0_1(
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

  make__library_install__install_grade_ints_and_headers_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Succeeded_16, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_36);
  *wrapper_arg_2 = ((MR_Box) (conv1_Succeeded_16));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_36));
}

static void MR_CALL 
make__library_install__install_library_grade_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word LinkSucceeded0_14,
  MR_String GradeDir_15,
  MR_Word MainModuleName_16,
  MR_Word AllModuleNames_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;
  MR_Word DirResult_21;
  MR_Word LinkSucceeded1_22;
  MR_Word LinkSucceeded_23;

  make__library_install__make_grade_install_dirs_7_p_0(ProgressStream_12, Globals_13, GradeDir_15, &DirResult_21, &LinkSucceeded1_22);
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
        MR_Word Target_24;
        MR_String GradeLibDir_25;
        MR_Word LibsSucceeded_27;
        MR_Word InitSucceeded_28;
        MR_Word IntsHeadersSucceeded_34;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Box conv3_STATE_VARIABLE_Info_36;
        MR_Box conv2_STATE_VARIABLE_IO_38;

        libs__globals__get_target_2_p_0(Globals_13, &Target_24);
        libs__file_util__get_std_grade_specific_install_lib_dir_3_p_0(Globals_13, GradeDir_15, &GradeLibDir_25);
        switch (Target_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String LibFileName_30;
              MR_String SharedLibFileName_31;
              MR_Word LibSucceeded0_32;
              MR_Word LibLinkages_70;
              MR_String Prefix_99;
              MR_String GradeModulesDir_100;
              MR_String InitFileName_101;
              MR_String Var_103;
              MR_String Var_104;
              MR_String Var_105;
              MR_String InstallMsg_112;

              backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_13, MainModuleName_16, (MR_Integer) 1, &LibFileName_30);
              backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_13, MainModuleName_16, (MR_Integer) 2, &SharedLibFileName_31);
              libs__globals__lookup_accumulating_option_3_p_0(Globals_13, (MR_Integer) 701, &LibLinkages_70);
              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "static")), LibLinkages_70);
              if (succeeded)
              {
                MR_Word Succeeded0_71;
                MR_String InstallMsg_76;

                make__util__verbose_make_four_part_msg_6_p_0(Globals_13, (MR_String) "Installing file", LibFileName_30, (MR_String) "in", GradeLibDir_25, &InstallMsg_76);
                make__util__maybe_write_msg_4_p_0(ProgressStream_12, InstallMsg_76);
                libs__copy_util__copy_file_to_directory_7_p_0(Globals_13, ProgressStream_12, LibFileName_30, GradeLibDir_25, &Succeeded0_71);
                succeeded = (strcmp((MR_String) "static", (MR_String) "static") == 0);
                if (succeeded)
                  succeeded = (Succeeded0_71 == (MR_Integer) 1);
                if (succeeded)
                {
                  MR_String BaseFileName_72;
                  MR_String InstallMsg_80;
                  MR_String RanLibCommand_81;
                  MR_String RanLibFlags_82;
                  MR_String Command_83;
                  MR_Word Var_91;
                  MR_String Var_92;
                  MR_Word Var_93;
                  MR_Word Var_94;
                  MR_String Var_95;
                  MR_String Var_96;

                  BaseFileName_72 = mercury__dir__det_basename_1_f_0(LibFileName_30);
                  make__util__verbose_make_four_part_msg_6_p_0(Globals_13, (MR_String) "Generating archive index for file", BaseFileName_72, (MR_String) "in", GradeLibDir_25, &InstallMsg_80);
                  make__util__maybe_write_msg_4_p_0(ProgressStream_12, InstallMsg_80);
                  libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 639, &RanLibCommand_81);
                  libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 640, &RanLibFlags_82);
                  Var_92 = libs__shell_util__quote_shell_cmd_arg_1_f_0(RanLibCommand_81);
                  Var_96 = mercury__dir__f_slash_2_f_0(GradeLibDir_25, BaseFileName_72);
                  Var_95 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_96);
                  {
                    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
                    MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_93, 0) = ((MR_Box) (RanLibFlags_82));
                    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
                  }
                  Command_83 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_91);
                  libs__system_cmds__invoke_system_command_8_p_0(Globals_13, ProgressStream_12, ProgressStream_12, (MR_Integer) 0, Command_83, &LibSucceeded0_32);
                }
                else
                  LibSucceeded0_32 = Succeeded0_71;
              }
              else
                LibSucceeded0_32 = (MR_Integer) 1;
              succeeded = (strcmp(LibFileName_30, SharedLibFileName_31) == 0);
              if (succeeded)
                LibsSucceeded_27 = LibSucceeded0_32;
              else
              {
                MR_Word SharedLibSucceeded_33;

                make__library_install__maybe_install_library_file_8_p_0(ProgressStream_12, Globals_13, (MR_String) "shared", SharedLibFileName_31, GradeLibDir_25, &SharedLibSucceeded_33);
                LibsSucceeded_27 = libs__maybe_util__and_2_f_0(LibSucceeded0_32, SharedLibSucceeded_33);
              }
              libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 690, &Prefix_99);
              Var_105 = mercury__dir__f_slash_2_f_0(Prefix_99, (MR_String) "lib");
              Var_104 = mercury__dir__f_slash_2_f_0(Var_105, (MR_String) "mercury");
              Var_103 = mercury__dir__f_slash_2_f_0(Var_104, (MR_String) "modules");
              GradeModulesDir_100 = mercury__dir__f_slash_2_f_0(Var_103, GradeDir_15);
              parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_13, (MR_String) "predicate \140make.library_install.install_grade_init\'/7", (MR_Word) (MR_mkword(2, &make__library_install_scalar_common_4[4])), MainModuleName_16, &InitFileName_101);
              make__util__verbose_make_four_part_msg_6_p_0(Globals_13, (MR_String) "Installing file", InitFileName_101, (MR_String) "in", GradeModulesDir_100, &InstallMsg_112);
              make__util__maybe_write_msg_4_p_0(ProgressStream_12, InstallMsg_112);
              libs__copy_util__copy_file_to_directory_7_p_0(Globals_13, ProgressStream_12, InitFileName_101, GradeModulesDir_100, &InitSucceeded_28);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String DllFileName_26;

              backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_13, MainModuleName_16, (MR_Integer) 4, &DllFileName_26);
              make__library_install__install_file_7_p_0(ProgressStream_12, Globals_13, DllFileName_26, GradeLibDir_25, &LibsSucceeded_27);
              InitSucceeded_28 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String JarFileName_29;

              backend_libs__compile_target_code__linked_target_file_name_6_p_0(Globals_13, MainModuleName_16, (MR_Integer) 6, &JarFileName_29);
              make__library_install__install_file_7_p_0(ProgressStream_12, Globals_13, JarFileName_29, GradeLibDir_25, &LibsSucceeded_27);
              InitSucceeded_28 = (MR_Integer) 1;
            }
            break;
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__library_install_scalar_common_6[0]));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__library_install__install_library_grade_files_11_p_0_1));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_55, 4) = ((MR_Box) (Globals_13));
          MR_hl_field(0, Var_55, 5) = ((MR_Box) (LinkSucceeded_23));
          MR_hl_field(0, Var_55, 6) = ((MR_Box) (GradeDir_15));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, AllModuleNames_17, &IntsHeadersSucceeded_34, ((MR_Box) (STATE_VARIABLE_Info_0_35)), &conv3_STATE_VARIABLE_Info_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_38);
        *STATE_VARIABLE_Info_36 = ((MR_Word) (conv3_STATE_VARIABLE_Info_36));
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (InitSucceeded_28));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (IntsHeadersSucceeded_34));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (LibsSucceeded_27));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
        }
        *Succeeded_18 = libs__maybe_util__and_list_1_f_0(Var_58);
      }
      break;
  }
}

static void MR_CALL 
make__library_install__make_grade_install_dirs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_10;

  make__library_install__make_install_symlink_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_10));
}

static void MR_CALL 
make__library_install__make_grade_install_dirs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String Grade_10,
  MR_Word * DirSucceeded_11,
  MR_Word * LinkSucceeded_12)
{
  MR_String Prefix_14;
  MR_String LibDir_15;
  MR_String GradeIntsSubdir_16;
  MR_Word DirSucceeded1_17;
  MR_String GradeIncSubdir_18;
  MR_Word DirSucceeded2_19;
  MR_String GradeModuleSubdir_20;
  MR_Word DirSucceeded3_21;
  MR_Word DirSucceeded123_22;
  MR_Word LinkSucceeded0_23;
  MR_Word LinkSucceededList_24;
  MR_Word DirSucceededList_25;
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
  MR_String LinkName_91;
  MR_Box conv1_STATE_VARIABLE_IO_58_58;

  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 690, &Prefix_14);
  Var_33 = mercury__dir__f_slash_2_f_0(Prefix_14, (MR_String) "lib");
  LibDir_15 = mercury__dir__f_slash_2_f_0(Var_33, (MR_String) "mercury");
  Var_37 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "ints");
  Var_36 = mercury__dir__f_slash_2_f_0(Var_37, Grade_10);
  GradeIntsSubdir_16 = mercury__dir__f_slash_2_f_0(Var_36, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(GradeIntsSubdir_16, &DirSucceeded1_17);
  Var_43 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "lib");
  Var_42 = mercury__dir__f_slash_2_f_0(Var_43, Grade_10);
  Var_41 = mercury__dir__f_slash_2_f_0(Var_42, (MR_String) "inc");
  GradeIncSubdir_18 = mercury__dir__f_slash_2_f_0(Var_41, (MR_String) "Mercury");
  mercury__dir__make_directory_4_p_0(GradeIncSubdir_18, &DirSucceeded2_19);
  Var_48 = mercury__dir__f_slash_2_f_0(LibDir_15, (MR_String) "modules");
  GradeModuleSubdir_20 = mercury__dir__f_slash_2_f_0(Var_48, Grade_10);
  mercury__dir__make_directory_4_p_0(GradeModuleSubdir_20, &DirSucceeded3_21);
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (DirSucceeded3_21));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (DirSucceeded2_19));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    DirSucceeded123_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DirSucceeded123_22, 0) = ((MR_Box) (DirSucceeded1_17));
    MR_hl_field(1, DirSucceeded123_22, 1) = ((MR_Box) (Var_51));
  }
  LinkName_91 = mercury__dir__f_slash_2_f_0(GradeIncSubdir_18, (MR_String) "mihs");
  parse_tree__module_cmds__maybe_make_symlink_6_p_0(Globals_9, (MR_String) "..", LinkName_91, &LinkSucceeded0_23);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__library_install_scalar_common_5[0]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__library_install__make_grade_install_dirs_7_p_0_1));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) (GradeIntsSubdir_16));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, (MR_Word) (MR_mkword(1, &make__library_install_scalar_common_3[27])), &LinkSucceededList_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_58_58);
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (LinkSucceeded0_23));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (LinkSucceededList_24));
  }
  *LinkSucceeded_12 = libs__maybe_util__and_list_1_f_0(Var_65);
  switch (*LinkSucceeded_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DirSucceeded4_26;
        MR_Word DirSucceeded5_27;
        MR_Word DirSucceeded6_28;
        MR_Word DirSucceeded7_29;
        MR_String Var_66;
        MR_String Var_69;
        MR_String Var_72;
        MR_String Var_75;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;

        Var_66 = mercury__dir__f_slash_2_f_0(GradeIncSubdir_18, (MR_String) "mihs");
        mercury__dir__make_directory_4_p_0(Var_66, &DirSucceeded4_26);
        Var_69 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_16, (MR_String) "opts");
        mercury__dir__make_directory_4_p_0(Var_69, &DirSucceeded5_27);
        Var_72 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_16, (MR_String) "trans_opts");
        mercury__dir__make_directory_4_p_0(Var_72, &DirSucceeded6_28);
        Var_75 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_16, (MR_String) "analyses");
        mercury__dir__make_directory_4_p_0(Var_75, &DirSucceeded7_29);
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (DirSucceeded7_29));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (DirSucceeded6_28));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (DirSucceeded5_27));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (DirSucceeded4_26));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
        }
        DirSucceededList_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), DirSucceeded123_22, Var_78);
      }
      break;
    case (MR_Integer) 1:
      DirSucceededList_25 = DirSucceeded123_22;
      break;
  }
  make__library_install__print_mkdir_errors_5_p_0(ProgressStream_8, DirSucceededList_25, DirSucceeded_11);
}

static void MR_CALL 
make__library_install__print_mkdir_errors_5_p_0(
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
        MR_String ErrorMsg_16;
        MR_Word Var_17;

        ErrorMsg_16 = mercury__io__error_message_1_f_0(Error_15);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "Error creating installation directory: ");
        mercury__io__write_string_4_p_0(HeadVar__1_1, ErrorMsg_16);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
        make__library_install__print_mkdir_errors_5_p_0(HeadVar__1_1, Results_12, &Var_17);
        *HeadVar__3_3 = (MR_Integer) 0;
      }
    }
    break;
  }
}

static void MR_CALL 
make__library_install__install_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_String InstallDir_11,
  MR_Word * Succeeded_12)
{
  MR_String InstallMsg_14;

  make__util__verbose_make_four_part_msg_6_p_0(Globals_9, (MR_String) "Installing file", FileName_10, (MR_String) "in", InstallDir_11, &InstallMsg_14);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, InstallMsg_14);
  libs__copy_util__copy_file_to_directory_7_p_0(Globals_9, ProgressStream_8, FileName_10, InstallDir_11, Succeeded_12);
}

static void MR_CALL 
make__library_install__maybe_install_library_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_String Linkage_11,
  MR_String FileName_12,
  MR_String InstallDir_13,
  MR_Word * Succeeded_14)
{
  MR_bool succeeded;
  MR_Word LibLinkages_16;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 701, &LibLinkages_16);
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
      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 639, &RanLibCommand_29);
      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 640, &RanLibFlags_30);
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

void mercury__make__library_install__init(void)
{
}

void mercury__make__library_install__init_type_tables(void)
{
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
