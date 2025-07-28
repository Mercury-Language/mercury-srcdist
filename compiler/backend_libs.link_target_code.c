/*
** Automatically generated from `link_target_code.m'
** by the Mercury compiler,
** version rotd-2025-07-28
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


// :- module backend_libs.link_target_code.
// :- implementation.

/*
INIT mercury__backend_libs__link_target_code__init
ENDINIT
*/

#include "backend_libs.link_target_code.mih"


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
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "backend_libs.compile_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.shell_util.mih"
#include "libs.system_cmds.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__link_target_code__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_0;

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_1;

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_2;

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_3;

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_4;

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_5;

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_6;

static const MR_EnumFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__enum_ordinal_ordered_linked_target_type_0[7];

static const MR_EnumFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__enum_name_ordered_linked_target_type_0[7];

static const MR_Integer backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_linked_target_type_0[7];

static const MR_FA_TypeInfo_Struct1 backend_libs__link_target_code__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo backend_libs__link_target_code__backend_libs__link_target_code__field_types_prepare_to_link_result_0_0[3];

static const MR_DuFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__du_functor_desc_prepare_to_link_result_0_0;

static const MR_DuFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__du_functor_desc_prepare_to_link_result_0_1;

static const MR_DuFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__du_stag_ordered_prepare_to_link_result_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__du_stag_ordered_prepare_to_link_result_0_1[1];

static const MR_DuPtagLayout backend_libs__link_target_code__backend_libs__link_target_code__du_ptag_ordered_prepare_to_link_result_0[2];

static const MR_DuFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__du_name_ordered_prepare_to_link_result_0[2];

static const MR_Integer backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_prepare_to_link_result_0[2];

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_shared_library_support_0_0;

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_shared_library_support_0_1;

static const MR_EnumFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__enum_ordinal_ordered_shared_library_support_0[2];

static const MR_EnumFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__enum_name_ordered_shared_library_support_0[2];

static const MR_Integer backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_shared_library_support_0[2];

static void MR_CALL 
backend_libs__link_target_code____Compare____prepare_to_link_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__link_target_code____Unify____prepare_to_link_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__link_target_code__get_link_opts_for_library_for_c_cs_8_p_0(
  MR_Word Globals_9,
  MR_String LibName_10,
  MR_String * LinkerOpt_11,
  MR_Word * STATE_VARIABLE_Specs_38,
  MR_Word STATE_VARIABLE_Succeeded_0_39,
  MR_Word * STATE_VARIABLE_Succeeded_40);

static void MR_CALL 
backend_libs__link_target_code__write_jar_class_argument_5_p_0(
  MR_Word Stream_6,
  MR_String ClassSubDir_7,
  MR_String ClassFileName_8);

static MR_bool MR_CALL 
backend_libs__link_target_code__has_object_file_extension_for_c_3_p_0(
  MR_String ObjExt_4,
  MR_String PicObjExt_5,
  MR_String FileName_6);

static void MR_CALL 
backend_libs__link_target_code__output_library_link_flags_for_c_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
backend_libs__link_target_code__output_library_link_flags_for_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code__link_modules_into_executable_or_shared_library_for_c_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word LinkedTargetType_13,
  MR_Word MainModuleName_14,
  MR_String FullOutputFileName0_15,
  MR_Word SourceList0_16,
  MR_Word * Specs_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
backend_libs__link_target_code__construct_cli_shell_script_for_csharp_3_p_0(
  MR_Word Globals_4,
  MR_String ExeFileName_5,
  MR_String * ContentStr_6);

static MR_String MR_CALL 
backend_libs__link_target_code__csharp_file_name_3_f_0(
  MR_Word EnvType_5,
  MR_Word CSharpCompiler_6,
  MR_String FileName0_7);

static void MR_CALL 
backend_libs__link_target_code__link_exe_or_shared_lib_for_c_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word LinkedTargetType_13,
  MR_Word ModuleName_14,
  MR_String FullOutputFileName_15,
  MR_Word ObjectsList_16,
  MR_Word * Specs_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
backend_libs__link_target_code__get_system_libs_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * SystemLibs_6);

static void MR_CALL 
backend_libs__link_target_code__get_link_opts_for_libraries_for_c_cs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
backend_libs__link_target_code__get_link_opts_for_libraries_for_c_cs_5_p_0(
  MR_Word Globals_6,
  MR_Word * MaybeLinkLibraries_7,
  MR_Word * Specs_8);

static MR_bool MR_CALL 
backend_libs__link_target_code__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word ObjectsList_9,
  MR_Word * PrepareResult_10);

static void MR_CALL 
backend_libs__link_target_code__create_archive_for_c_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_String FullLibFileName_11,
  MR_Word Quote_12,
  MR_Word ObjectList_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
backend_libs__link_target_code__get_linker_output_option_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * OutputOpt_6);

static void MR_CALL 
backend_libs__link_target_code__get_install_name_opt_for_c_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleName_6,
  MR_Word LinkedTargetType_7,
  MR_String * InstallNameOpt_8);

static MR_Box MR_CALL 
backend_libs__link_target_code__get_runtime_library_path_opts_for_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code__get_runtime_library_path_opts_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkedTargetType_7,
  MR_Word RpathFlagOpt_8,
  MR_Word RpathSepOpt_9,
  MR_String * RpathOpts_10);

static void MR_CALL 
backend_libs__link_target_code__get_restricted_command_line_link_opts_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * RestrictedCmdLinkOpts_6);

static void MR_CALL 
backend_libs__link_target_code__get_mercury_std_libs_for_c_cs_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * StdLibs_6);

static void MR_CALL 
backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(
  MR_Word Globals_9,
  MR_Word LinkedTargetType_10,
  MR_String StdLibDir_11,
  MR_String GradeDir_12,
  MR_Word Ext_13,
  MR_String Name_14,
  MR_String * StaticArg_15,
  MR_String * SharedArg_16);

static void MR_CALL 
backend_libs__link_target_code__get_thread_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word ThreadFlagsOpt_7,
  MR_Word Linkage_8,
  MR_String * ThreadOpts_9,
  MR_String * HwlocOpts_10);

static void MR_CALL 
backend_libs__link_target_code__get_strip_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkedTargetType_7,
  MR_String * LinkerStripOpt_8,
  MR_String * StripExeCommand_9,
  MR_String * StripExeFlags_10);

static MR_String MR_CALL 
backend_libs__link_target_code__get_reserve_stack_size_flags_for_c_1_f_0(
  MR_Word Globals_3);

static MR_bool MR_CALL 
backend_libs__link_target_code____Unify____linked_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__link_target_code____Compare____linked_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__link_target_code____Unify____prepare_to_link_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__link_target_code____Compare____prepare_to_link_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__link_target_code____Unify____shared_library_support_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__link_target_code____Compare____shared_library_support_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_1[22][2];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_2[3][1];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_5[1][5];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_6[2][3];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_7[1][6];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_8[1][11];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_9[1][7];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_10[1][8];

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_11[1][9];


struct backend_libs__link_target_code__vector_common_type_3_0_s {
  const MR_Word backend_libs__link_target_code__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct backend_libs__link_target_code__vector_common_type_3_0_s backend_libs__link_target_code_vector_common_3[10];

struct backend_libs__link_target_code__vector_common_type_4_0_s {
  const MR_String backend_libs__link_target_code__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct backend_libs__link_target_code__vector_common_type_4_0_s backend_libs__link_target_code_vector_common_4[5];



static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_1[22][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "-defaultlib:libcmt")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "-entry:wmainCRTStartup")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "-machine:x64")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "-ignore:4001")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "-machine:x86")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[7])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "-ignore:4001")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "\" \"\044\100\"\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[19])))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_2[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_6[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__link_target_code_scalar_common_5[0])),
    ((MR_Box) (backend_libs__link_target_code__get_runtime_library_path_opts_for_c_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__link_target_code_scalar_common_5[0])),
    ((MR_Box) (backend_libs__link_target_code__output_library_link_flags_for_c_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__link_target_code__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_env_type_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_10[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_scalar_common_11[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct backend_libs__link_target_code__vector_common_type_3_0_s backend_libs__link_target_code_vector_common_3[10] = {
  /* row   0 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[17])) },
  /* row   1 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[17])) },
  /* row   2 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[17])) },
  /* row   3 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[18])) },
  /* row   4 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[18])) },
  /* row   5 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[5])) },
  /* row   6 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   7 */   { (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[5])) },
  /* row   8 */   { (MR_Word) (MR_mkword(2, &backend_libs__link_target_code_scalar_common_2[0])) },
  /* row   9 */   { (MR_Word) (MR_mkword(2, &backend_libs__link_target_code_scalar_common_2[0])) },
};

static /* final */ const struct backend_libs__link_target_code__vector_common_type_4_0_s backend_libs__link_target_code_vector_common_4[5] = {
  /* row   0 */   { (MR_String) "lib" },
  /* row   1 */   { (MR_String) ((MR_Integer) 0) },
  /* row   2 */   { (MR_String) "lib" },
  /* row   3 */   { (MR_String) "" },
  /* row   4 */   { (MR_String) "" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__link_target_code__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_0 = {
  (MR_String) "executable",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_1 = {
  (MR_String) "static_library",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_2 = {
  (MR_String) "shared_library",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_3 = {
  (MR_String) "csharp_executable",
  INT32_C(3)
};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_4 = {
  (MR_String) "csharp_library",
  INT32_C(4)
};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_5 = {
  (MR_String) "java_executable",
  INT32_C(5)
};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_6 = {
  (MR_String) "java_archive",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__enum_ordinal_ordered_linked_target_type_0[7] = {
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_1,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_6
};

static const MR_EnumFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__enum_name_ordered_linked_target_type_0[7] = {
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_6,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_linked_target_type_0_1
};

static const MR_Integer backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_linked_target_type_0[7] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct backend_libs__link_target_code__backend_libs__link_target_code__type_ctor_info_linked_target_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__link_target_code____Unify____linked_target_type_0_0_10001)),
  ((MR_Box) (backend_libs__link_target_code____Compare____linked_target_type_0_0_10001)),
  (MR_String) "backend_libs.link_target_code",
  (MR_String) "linked_target_type",
  { backend_libs__link_target_code__backend_libs__link_target_code__enum_name_ordered_linked_target_type_0 },
  { backend_libs__link_target_code__backend_libs__link_target_code__enum_ordinal_ordered_linked_target_type_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_linked_target_type_0,

};

static const MR_FA_TypeInfo_Struct1 backend_libs__link_target_code__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo backend_libs__link_target_code__backend_libs__link_target_code__field_types_prepare_to_link_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&backend_libs__link_target_code__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&backend_libs__link_target_code__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__du_functor_desc_prepare_to_link_result_0_0 = {
  (MR_String) "prepare_succeeded",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__link_target_code__backend_libs__link_target_code__field_types_prepare_to_link_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__du_functor_desc_prepare_to_link_result_0_1 = {
  (MR_String) "prepare_failed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__du_stag_ordered_prepare_to_link_result_0_0[1] = { &backend_libs__link_target_code__backend_libs__link_target_code__du_functor_desc_prepare_to_link_result_0_1 };

static const MR_DuFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__du_stag_ordered_prepare_to_link_result_0_1[1] = { &backend_libs__link_target_code__backend_libs__link_target_code__du_functor_desc_prepare_to_link_result_0_0 };

static const MR_DuPtagLayout backend_libs__link_target_code__backend_libs__link_target_code__du_ptag_ordered_prepare_to_link_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__link_target_code__backend_libs__link_target_code__du_stag_ordered_prepare_to_link_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__link_target_code__backend_libs__link_target_code__du_stag_ordered_prepare_to_link_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__du_name_ordered_prepare_to_link_result_0[2] = {
  &backend_libs__link_target_code__backend_libs__link_target_code__du_functor_desc_prepare_to_link_result_0_1,
  &backend_libs__link_target_code__backend_libs__link_target_code__du_functor_desc_prepare_to_link_result_0_0
};

static const MR_Integer backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_prepare_to_link_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__link_target_code__backend_libs__link_target_code__type_ctor_info_prepare_to_link_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__link_target_code____Unify____prepare_to_link_result_0_0_10001)),
  ((MR_Box) (backend_libs__link_target_code____Compare____prepare_to_link_result_0_0_10001)),
  (MR_String) "backend_libs.link_target_code",
  (MR_String) "prepare_to_link_result",
  { backend_libs__link_target_code__backend_libs__link_target_code__du_name_ordered_prepare_to_link_result_0 },
  { backend_libs__link_target_code__backend_libs__link_target_code__du_ptag_ordered_prepare_to_link_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_prepare_to_link_result_0,

};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_shared_library_support_0_0 = {
  (MR_String) "shared_libraries_not_supported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_shared_library_support_0_1 = {
  (MR_String) "shared_libraries_supported",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__enum_ordinal_ordered_shared_library_support_0[2] = {
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_shared_library_support_0_0,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_shared_library_support_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__link_target_code__backend_libs__link_target_code__enum_name_ordered_shared_library_support_0[2] = {
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_shared_library_support_0_0,
  &backend_libs__link_target_code__backend_libs__link_target_code__enum_functor_desc_shared_library_support_0_1
};

static const MR_Integer backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_shared_library_support_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__link_target_code__backend_libs__link_target_code__type_ctor_info_shared_library_support_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__link_target_code____Unify____shared_library_support_0_0_10001)),
  ((MR_Box) (backend_libs__link_target_code____Compare____shared_library_support_0_0_10001)),
  (MR_String) "backend_libs.link_target_code",
  (MR_String) "shared_library_support",
  { backend_libs__link_target_code__backend_libs__link_target_code__enum_name_ordered_shared_library_support_0 },
  { backend_libs__link_target_code__backend_libs__link_target_code__enum_ordinal_ordered_shared_library_support_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__link_target_code__backend_libs__link_target_code__functor_number_map_shared_library_support_0,

};

void MR_CALL 
backend_libs__link_target_code____Compare____shared_library_support_0_0(
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

MR_bool MR_CALL 
backend_libs__link_target_code____Unify____shared_library_support_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code____Compare____prepare_to_link_result_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__link_target_code_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__link_target_code_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__link_target_code____Unify____prepare_to_link_result_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&backend_libs__link_target_code_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&backend_libs__link_target_code_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__link_target_code____Compare____linked_target_type_0_0(
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

MR_bool MR_CALL 
backend_libs__link_target_code____Unify____linked_target_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code__get_link_opts_for_library_for_c_cs_8_p_0(
  MR_Word Globals_9,
  MR_String LibName_10,
  MR_String * LinkerOpt_11,
  MR_Word * STATE_VARIABLE_Specs_38,
  MR_Word STATE_VARIABLE_Succeeded_0_39,
  MR_Word * STATE_VARIABLE_Succeeded_40)
{
  MR_bool succeeded;
  MR_Word Target_15;
  MR_Word MercuryLinkage_16;
  MR_String LinkOpt_22;
  MR_String LibSuffix_23;
  MR_Word MercuryLibs_26;
  MR_Word TypeCtorInfo_67_67;

  libs__globals__get_target_2_p_0(Globals_9, &Target_15);
  switch (Target_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CCompilerType_17;

        libs__globals__get_mercury_linkage_2_p_0(Globals_9, &MercuryLinkage_16);
        libs__globals__get_c_compiler_type_2_p_0(Globals_9, &CCompilerType_17);
        switch (MR_tag((MR_Word) CCompilerType_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              LinkOpt_22 = (MR_String) "-l";
              LibSuffix_23 = (MR_String) "";
            }
            break;
          case (MR_Integer) 3:
            {
              LinkOpt_22 = (MR_String) "";
              LibSuffix_23 = (MR_String) ".lib";
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MercuryLinkage_16 = (MR_Integer) 1;
        LinkOpt_22 = (MR_String) "-r:";
        LibSuffix_23 = (MR_String) ".dll";
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.link_target_code.get_link_opts_for_library_for_c_cs\'/8", (MR_String) "target_java");
        return;
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 490, &MercuryLibs_26);
  succeeded = (MercuryLinkage_16 == (MR_Integer) 0);
  if (succeeded)
  {
    TypeCtorInfo_67_67 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    succeeded = mercury__list__member_2_p_0(TypeCtorInfo_67_67, ((MR_Box) (LibName_10)), MercuryLibs_26);
  }
  if (succeeded)
  {
    MR_Word LibModuleName_27;
    MR_String LibFileName_30;
    MR_Word SearchAuthDirs_31;
    MR_Word MaybeDirName_33;
    MR_String _FullLibFileName_28;
    MR_String _FullLibFileNameProposed_29;
    MR_Word _SearchDirs_32;

    parse_tree__file_names__file_name_to_module_name_2_p_0(LibName_10, &LibModuleName_27);
    parse_tree__file_names__module_name_to_lib_file_name_full_curdir_8_p_0(Globals_9, (MR_String) "predicate \140backend_libs.link_target_code.get_link_opts_for_library_for_c_cs\'/8", (MR_String) "lib", (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[5])), LibModuleName_27, &_FullLibFileName_28, &_FullLibFileNameProposed_29, &LibFileName_30);
    SearchAuthDirs_31 = parse_tree__find_module__get_search_auth_lib_dirs_2_f_0(Globals_9);
    parse_tree__find_module__search_for_file_returning_dir_6_p_0(SearchAuthDirs_31, LibFileName_30, &_SearchDirs_32, &MaybeDirName_33);
    if (((MR_tag((MR_Word) MaybeDirName_33)) == (MR_Integer) 1))
    {
      MR_String Error_35 = ((MR_String) ((MR_hl_field(1, MaybeDirName_33, 0))));
      MR_Word Pieces_36;
      MR_Word Spec_37;
      MR_Word Var_53;
      MR_Word Var_62;

      *LinkerOpt_11 = (MR_String) "";
      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_53, 1) = ((MR_Box) (Error_35));
      }
      {
        Pieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_36, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Pieces_36, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[21])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (LibFileName_30));
      }
      {
        Spec_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140backend_libs.link_target_code.get_link_opts_for_library_for_c_cs\'/8"));
        MR_hl_field(1, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_37, 2) = ((MR_Box) (Var_62));
        MR_hl_field(1, Spec_37, 3) = ((MR_Box) (Pieces_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_38 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_37));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Succeeded_40 = (MR_Integer) 0;
    }
    else
    {
      MR_String DirName_34 = ((MR_String) ((MR_hl_field(0, MaybeDirName_33, 0))));

      *LinkerOpt_11 = mercury__dir__f_slash_2_f_0(DirName_34, LibFileName_30);
      *STATE_VARIABLE_Specs_38 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Succeeded_40 = STATE_VARIABLE_Succeeded_0_39;
    }
  }
  else
  {
    MR_String Var_66;

    Var_66 = mercury__string__f_43_43_2_f_0(LibName_10, LibSuffix_23);
    *LinkerOpt_11 = mercury__string__f_43_43_2_f_0(LinkOpt_22, Var_66);
    *STATE_VARIABLE_Succeeded_40 = STATE_VARIABLE_Succeeded_0_39;
    *STATE_VARIABLE_Specs_38 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
backend_libs__link_target_code__write_jar_class_argument_5_p_0(
  MR_Word Stream_6,
  MR_String ClassSubDir_7,
  MR_String ClassFileName_8)
{
  MR_bool succeeded;

  succeeded = mercury__dir__path_name_is_absolute_1_p_0(ClassFileName_8);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_6, ClassFileName_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
  else
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "-C ");
    mercury__io__write_string_4_p_0(Stream_6, ClassSubDir_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, ClassFileName_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static MR_bool MR_CALL 
backend_libs__link_target_code__has_object_file_extension_for_c_3_p_0(
  MR_String ObjExt_4,
  MR_String PicObjExt_5,
  MR_String FileName_6)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(FileName_6, ObjExt_4);
  if (!(succeeded))
    succeeded = mercury__string__suffix_2_p_0(FileName_6, PicObjExt_5);
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code__output_library_link_flags_for_c_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_String conv3_LinkerOpt_11;
  MR_Word conv2_STATE_VARIABLE_Specs_38;
  MR_Word conv1_STATE_VARIABLE_Succeeded_40;

  backend_libs__link_target_code__get_link_opts_for_library_for_c_cs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv3_LinkerOpt_11, &conv2_STATE_VARIABLE_Specs_38, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Succeeded_40);
  *wrapper_arg_2 = ((MR_Box) (conv3_LinkerOpt_11));
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_38));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_40));
}

static MR_Box MR_CALL 
backend_libs__link_target_code__output_library_link_flags_for_c_5_p_0_1(
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

void MR_CALL 
backend_libs__link_target_code__output_library_link_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word Stream_7,
  MR_Word * Specs_8)
{
  MR_bool succeeded;
  MR_Word LinkLibraryDirectoriesList_13;
  MR_String LinkerPathFlag_14;
  MR_String LinkLibraryDirectories_15;
  MR_String RpathOpts_16;
  MR_String LinkLibraries_19;
  MR_String MercuryStdLibs_20;
  MR_String SystemLibs_21;
  MR_Word UseInstallName_59;
  MR_Word SharedLibsSupported_60;
  MR_Word Linkage_61;
  MR_Word LinkLibrariesList0_71;
  MR_Word LinkLibrariesList_72;
  MR_Word SpecsList_73;
  MR_Word LibrariesSucceeded_74;
  MR_Word Var_76;
  MR_Box conv5_LibrariesSucceeded_74;
  MR_Box conv4_STATE_VARIABLE_IO_1_28;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 493, &LinkLibraryDirectoriesList_13);
  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 595, &LinkerPathFlag_14);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_13, LinkerPathFlag_14, (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 611, &UseInstallName_59);
  backend_libs__link_target_code__are_shared_libraries_supported_2_p_0(Globals_6, &SharedLibsSupported_60);
  libs__globals__get_linkage_2_p_0(Globals_6, &Linkage_61);
  succeeded = (UseInstallName_59 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (SharedLibsSupported_60 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Linkage_61 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word RpathDirs0_62;
    MR_Word RpathDirs_63;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 502, &RpathDirs0_62);
    RpathDirs_63 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_scalar_common_6[1]), RpathDirs0_62);
    if ((RpathDirs_63 == (MR_Word) ((MR_Unsigned) 0U)))
      RpathOpts_16 = (MR_String) "";
    else
    {
      MR_String RpathSep_64;
      MR_String RpathFlag_65;
      MR_String RpathOpts0_66;

      libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 597, &RpathSep_64);
      libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 596, &RpathFlag_65);
      RpathOpts0_66 = mercury__string__join_list_2_f_0(RpathSep_64, RpathDirs_63);
      RpathOpts_16 = mercury__string__f_43_43_2_f_0(RpathFlag_65, RpathOpts0_66);
    }
  }
  else
    RpathOpts_16 = (MR_String) "";
  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 494, &LinkLibrariesList0_71);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_8[0]));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (backend_libs__link_target_code__output_library_link_flags_for_c_5_p_0_2));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (Globals_6));
  }
  mercury__list__map2_foldl2_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_scalar_common_1[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, LinkLibrariesList0_71, &LinkLibrariesList_72, &SpecsList_73, ((MR_Box) ((MR_Integer) 1)), &conv5_LibrariesSucceeded_74, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_1_28);
  LibrariesSucceeded_74 = ((MR_Word) (conv5_LibrariesSucceeded_74));
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SpecsList_73, Specs_8);
  switch (LibrariesSucceeded_74) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LinkLibraries_19 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      backend_libs__compile_target_code__join_string_list_5_p_0(LinkLibrariesList_72, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_19);
      break;
  }
  backend_libs__link_target_code__get_mercury_std_libs_for_c_cs_3_p_0(Globals_6, (MR_Integer) 0, &MercuryStdLibs_20);
  backend_libs__link_target_code__get_system_libs_for_c_3_p_0(Globals_6, (MR_Integer) 0, &SystemLibs_21);
  mercury__io__write_string_4_p_0(Stream_7, LinkLibraryDirectories_15);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_7, RpathOpts_16);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_7, LinkLibraries_19);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_7, MercuryStdLibs_20);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_7, SystemLibs_21);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
}

static void MR_CALL 
backend_libs__link_target_code__link_modules_into_executable_or_shared_library_for_c_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__5_5;
  MR_String conv1_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, &conv1_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_6));
}

void MR_CALL 
backend_libs__link_target_code__link_modules_into_executable_or_shared_library_for_c_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word ModuleNames_11,
  MR_Word ExtraObjFileNames_12,
  MR_Word * Specs_13,
  MR_Word * Succeeded_14)
{
  MR_bool succeeded;
  MR_String OutputFileName_16;
  MR_Word MainModuleName_17;
  MR_Word LinkedTargetType_18;
  MR_Word PIC_19;
  MR_Word ObjExt_20;
  MR_Word ModuleObjectFileNames_22;
  MR_Word ExtraLinkFileNames_24;
  MR_Word AllNonInitObjectFileNames_25;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word MakeSharedLib_45;
  MR_Word Var_21;
  MR_Word _ModuleObjectFileNamesProposed_23;

  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 496, &OutputFileName_16);
  succeeded = (strcmp(OutputFileName_16, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Box conv0_MainModuleName_17;

    mercury__list__det_head_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNames_11, &conv0_MainModuleName_17);
    MainModuleName_17 = ((MR_Word) (conv0_MainModuleName_17));
  }
  else
    parse_tree__file_names__file_name_to_module_name_2_p_0(OutputFileName_16, &MainModuleName_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 527, &MakeSharedLib_45);
  switch (MakeSharedLib_45) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        LinkedTargetType_18 = (MR_Integer) 0;
        backend_libs__compile_target_code__get_executable_object_code_type_2_p_0(Globals_10, &PIC_19);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String PicObjExt_51;
        MR_String ObjExt_52;

        LinkedTargetType_18 = (MR_Integer) 2;
        libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 471, &PicObjExt_51);
        libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 470, &ObjExt_52);
        succeeded = (strcmp(PicObjExt_51, ObjExt_52) == 0);
        if (succeeded)
          PIC_19 = (MR_Integer) 1;
        else
          PIC_19 = (MR_Integer) 0;
      }
      break;
  }
  backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_19, &ObjExt_20, &Var_21);
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_35, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_20));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_11[0]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (backend_libs__link_target_code__link_modules_into_executable_or_shared_library_for_c_8_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) ((MR_String) "predicate \140backend_libs.link_target_code.link_modules_into_executable_or_shared_library_for_c\'/8"));
    MR_hl_field(0, Var_33, 5) = ((MR_Box) (Var_35));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_33, ModuleNames_11, &ModuleObjectFileNames_22, &_ModuleObjectFileNamesProposed_23);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 497, &ExtraLinkFileNames_24);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraLinkFileNames_24, ExtraObjFileNames_12);
  AllNonInitObjectFileNames_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleObjectFileNames_22, Var_37);
  switch (LinkedTargetType_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word InitObjResult_27;

        backend_libs__compile_target_code__make_init_obj_file_8_p_0(ProgressStream_9, Globals_10, (MR_Integer) 1, MainModuleName_17, ModuleNames_11, &InitObjResult_27);
        if ((InitObjResult_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Specs_13 = (MR_Word) ((MR_Unsigned) 0U);
          *Succeeded_14 = (MR_Integer) 0;
        }
        else
        {
          MR_String InitObjFileName_28 = ((MR_String) ((MR_hl_field(1, InitObjResult_27, 0))));
          MR_Word AllObjectFileNames_29;

          {
            AllObjectFileNames_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, AllObjectFileNames_29, 0) = ((MR_Box) (InitObjFileName_28));
            MR_hl_field(1, AllObjectFileNames_29, 1) = ((MR_Box) (AllNonInitObjectFileNames_25));
          }
          backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0(ProgressStream_9, Globals_10, LinkedTargetType_18, MainModuleName_17, AllObjectFileNames_29, Specs_13, Succeeded_14);
        }
      }
      break;
    case (MR_Integer) 2:
      backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0(ProgressStream_9, Globals_10, LinkedTargetType_18, MainModuleName_17, AllNonInitObjectFileNames_25, Specs_13, Succeeded_14);
      break;
  }
}

static void MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  backend_libs__link_target_code__write_jar_class_argument_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
}

void MR_CALL 
backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word LinkedTargetType_12,
  MR_Word ModuleName_13,
  MR_Word FilesToLink_14,
  MR_Word * Specs_15,
  MR_Word * Succeeded_16)
{
  MR_bool succeeded;
  MR_Word Verbose_18;
  MR_Word Stats_19;
  MR_String FullOutputFileName_20;
  MR_String CurDirOutputFileName_21;
  MR_Word LinkSucceeded_22;

  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 131, &Verbose_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 133, &Stats_19);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_18, (MR_String) "% Linking...\n");
  backend_libs__link_target_code__linked_target_file_name_full_curdir_7_p_0(Globals_11, ModuleName_13, LinkedTargetType_12, &FullOutputFileName_20, &CurDirOutputFileName_21);
  switch (LinkedTargetType_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
      backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0(Globals_11, ProgressStream_10, LinkedTargetType_12, ModuleName_13, FullOutputFileName_20, FilesToLink_14, Specs_15, &LinkSucceeded_22);
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      backend_libs__link_target_code__link_exe_or_shared_lib_for_c_10_p_0(Globals_11, ProgressStream_10, LinkedTargetType_12, ModuleName_13, FullOutputFileName_20, FilesToLink_14, Specs_15, &LinkSucceeded_22);
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 5:
      {
        MR_String Jar_37;
        MR_String ClassSubDir_38;
        MR_Word ListClassFiles_39;
        MR_Word TempFileResult_40;
        MR_Word Succeeded0_44;

        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 528, &Jar_37);
        parse_tree__module_cmds__list_class_files_for_jar_6_p_0(Globals_11, FilesToLink_14, &ClassSubDir_38, &ListClassFiles_39);
        if ((ListClassFiles_39 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.link_target_code.create_exe_or_lib_for_java\'/9", (MR_String) "empty list of .class files");
            return;
          }
        libs__file_util__open_temp_output_with_naming_scheme_6_p_0((MR_String) ".", (MR_String) "mtmp", (MR_String) "", &TempFileResult_40);
        if (((MR_tag((MR_Word) TempFileResult_40)) == (MR_Integer) 1))
        {
          MR_String ErrorMessage_47 = ((MR_String) ((MR_hl_field(1, TempFileResult_40, 0))));

          mercury__io__write_string_4_p_0(ProgressStream_10, ErrorMessage_47);
          mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\n");
          Succeeded0_44 = (MR_Integer) 0;
        }
        else
        {
          MR_String TempFileName_41;
          MR_Word Stream_42;
          MR_String Cmd_43;
          MR_Tuple Var_56 = ((MR_Tuple) ((MR_hl_field(0, TempFileResult_40, 0))));
          MR_Word Var_57;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_66;
          MR_Box conv0_STATE_VARIABLE_IO_3_58;
          MR_Word Var_45;

          TempFileName_41 = ((MR_String) ((MR_hl_field(0, Var_56, 0))));
          Stream_42 = ((MR_Word) ((MR_hl_field(0, Var_56, 1))));
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_57, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_10[0]));
            MR_hl_field(0, Var_57, 1) = ((MR_Box) (backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0_1));
            MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_57, 3) = ((MR_Box) (Stream_42));
            MR_hl_field(0, Var_57, 4) = ((MR_Box) (ClassSubDir_38));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, ListClassFiles_39, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_3_58);
          mercury__io__close_output_3_p_0(Stream_42);
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (TempFileName_41));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) ((MR_String) " \100"));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (FullOutputFileName_20));
            MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) ((MR_String) " cf "));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (Jar_37));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
          }
          Cmd_43 = mercury__string__append_list_1_f_0(Var_60);
          libs__system_cmds__invoke_system_command_8_p_0(Globals_11, ProgressStream_10, ProgressStream_10, (MR_Integer) 1, Cmd_43, &Succeeded0_44);
          mercury__io__file__remove_file_4_p_0(TempFileName_41, &Var_45);
          switch (Succeeded0_44) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_46;

                mercury__io__file__remove_file_4_p_0(FullOutputFileName_20, &Var_46);
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        succeeded = (Succeeded0_44 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (LinkedTargetType_12 == (MR_Integer) 5);
        if (succeeded)
          parse_tree__module_cmds__create_java_shell_script_6_p_0(ProgressStream_10, Globals_11, ModuleName_13, &LinkSucceeded_22);
        else
          LinkSucceeded_22 = Succeeded0_44;
        *Specs_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        backend_libs__link_target_code__create_archive_for_c_8_p_0(Globals_11, ProgressStream_10, FullOutputFileName_20, (MR_Integer) 1, FilesToLink_14, &LinkSucceeded_22);
        *Specs_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_19);
  switch (LinkSucceeded_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Succeeded_16 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word _MadeSymlinkOrCopy_23;

        backend_libs__link_target_code__post_link_maybe_make_symlink_or_copy_10_p_0(Globals_11, ProgressStream_10, FullOutputFileName_20, CurDirOutputFileName_21, ModuleName_13, LinkedTargetType_12, Succeeded_16, &_MadeSymlinkOrCopy_23);
      }
      break;
  }
}

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_String conv3_LinkerOpt_11;
  MR_Word conv2_STATE_VARIABLE_Specs_38;
  MR_Word conv1_STATE_VARIABLE_Succeeded_40;

  backend_libs__link_target_code__get_link_opts_for_library_for_c_cs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv3_LinkerOpt_11, &conv2_STATE_VARIABLE_Specs_38, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Succeeded_40);
  *wrapper_arg_2 = ((MR_Box) (conv3_LinkerOpt_11));
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_38));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_40));
}

static MR_Box MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_FileName_8;

  conv0_FileName_8 = backend_libs__link_target_code__csharp_file_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_FileName_8));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word LinkedTargetType_13,
  MR_Word MainModuleName_14,
  MR_String FullOutputFileName0_15,
  MR_Word SourceList0_16,
  MR_Word * Specs_17,
  MR_Word * Succeeded_18)
{
  MR_bool succeeded;
  MR_Word EnvType_20;
  MR_Word CSharpCompilerType_21;
  MR_String FullOutputFileName_22;
  MR_Word SourceList_23;
  MR_String NoLogoOpt_24;
  MR_Word LineNumbers_25;
  MR_String NoWarnLineNumberOpt_26;
  MR_Word Debug_27;
  MR_String DebugOpt_28;
  MR_String TargetOption_29;
  MR_String SignAssemblyOpt_30;
  MR_Word LinkLibraryDirectoriesList0_32;
  MR_Word LinkLibraryDirectoriesList_33;
  MR_String LinkLibraryDirectories_35;
  MR_String LinkLibraries_39;
  MR_String CSharpCompilerCmd_40;
  MR_String MercuryStdLibs_41;
  MR_Word CSCFlagsList_42;
  MR_String CmdArgs_43;
  MR_Word Succeeded0_44;
  MR_Word TargetEnvType_45;
  MR_String CLI_46;
  MR_Word Var_50;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_String Var_75;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Word LinkLibrariesList0_88;
  MR_Word LinkLibrariesList_89;
  MR_Word SpecsList_90;
  MR_Word LibrariesSucceeded_91;
  MR_Word Var_93;
  MR_Box conv5_LibrariesSucceeded_91;
  MR_Box conv4_STATE_VARIABLE_IO_1_61;

  libs__globals__get_system_env_type_2_p_0(Globals_11, &EnvType_20);
  libs__globals__get_csharp_compiler_type_2_p_0(Globals_11, &CSharpCompilerType_21);
  FullOutputFileName_22 = backend_libs__link_target_code__csharp_file_name_3_f_0(EnvType_20, CSharpCompilerType_21, FullOutputFileName0_15);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_9[0]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0_1));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (EnvType_20));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (CSharpCompilerType_21));
  }
  SourceList_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, SourceList0_16);
  switch (CSharpCompilerType_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NoLogoOpt_24 = (MR_String) "-nologo ";
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      NoLogoOpt_24 = (MR_String) "";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 434, &LineNumbers_25);
  switch (LineNumbers_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NoWarnLineNumberOpt_26 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      NoWarnLineNumberOpt_26 = (MR_String) "-nowarn:162,219 ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 446, &Debug_27);
  switch (Debug_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DebugOpt_28 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      DebugOpt_28 = (MR_String) "-debug ";
      break;
  }
  switch (LinkedTargetType_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        TargetOption_29 = (MR_String) "-target:exe";
        SignAssemblyOpt_30 = (MR_String) "";
      }
      break;
    case (MR_Integer) 4:
      {
        MR_String KeyFile_31;

        TargetOption_29 = (MR_String) "-target:library";
        libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 529, &KeyFile_31);
        succeeded = (strcmp(KeyFile_31, (MR_String) "") == 0);
        if (succeeded)
          SignAssemblyOpt_30 = (MR_String) "";
        else
        {
          MR_String Var_55;

          Var_55 = mercury__string__f_43_43_2_f_0(KeyFile_31, (MR_String) " ");
          SignAssemblyOpt_30 = mercury__string__f_43_43_2_f_0((MR_String) "-keyfile:", Var_55);
        }
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 493, &LinkLibraryDirectoriesList0_32);
  LinkLibraryDirectoriesList_33 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, LinkLibraryDirectoriesList0_32);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_33, (MR_String) "-lib:", (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_35);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 494, &LinkLibrariesList0_88);
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_8[0]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (backend_libs__link_target_code__create_exe_or_lib_for_csharp_10_p_0_2));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (Globals_11));
  }
  mercury__list__map2_foldl2_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_scalar_common_1[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_93, LinkLibrariesList0_88, &LinkLibrariesList_89, &SpecsList_90, ((MR_Box) ((MR_Integer) 1)), &conv5_LibrariesSucceeded_91, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_1_61);
  LibrariesSucceeded_91 = ((MR_Word) (conv5_LibrariesSucceeded_91));
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SpecsList_90, Specs_17);
  switch (LibrariesSucceeded_91) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LinkLibraries_39 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_Word LinkLibrariesList_38;

        LinkLibrariesList_38 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, LinkLibrariesList_89);
        backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibrariesList_38, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_39);
      }
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 479, &CSharpCompilerCmd_40);
  backend_libs__link_target_code__get_mercury_std_libs_for_c_cs_3_p_0(Globals_11, LinkedTargetType_13, &MercuryStdLibs_41);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 482, &CSCFlagsList_42);
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "-out:", FullOutputFileName_22);
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (MercuryStdLibs_41));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (LinkLibraries_39));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (LinkLibraryDirectories_35));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (SignAssemblyOpt_30));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (TargetOption_29));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (DebugOpt_28));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (NoWarnLineNumberOpt_26));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (NoLogoOpt_24));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
  }
  Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CSCFlagsList_42, SourceList_23);
  Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_70, Var_82);
  CmdArgs_43 = mercury__string__join_list_2_f_0((MR_String) " ", Var_69);
  libs__system_cmds__invoke_long_system_command_9_p_0(Globals_11, ProgressStream_12, ProgressStream_12, (MR_Integer) 1, CSharpCompilerCmd_40, CmdArgs_43, &Succeeded0_44);
  libs__globals__get_target_env_type_2_p_0(Globals_11, &TargetEnvType_45);
  libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 480, &CLI_46);
  succeeded = (Succeeded0_44 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (LinkedTargetType_13 == (MR_Integer) 3);
    if (succeeded)
    {
      succeeded = (strcmp(CLI_46, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
        succeeded = (TargetEnvType_45 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_String ContentStr_47;

    backend_libs__link_target_code__construct_cli_shell_script_for_csharp_3_p_0(Globals_11, FullOutputFileName_22, &ContentStr_47);
    parse_tree__module_cmds__create_launcher_shell_script_7_p_0(ProgressStream_12, Globals_11, MainModuleName_14, ContentStr_47, Succeeded_18);
  }
  else
    *Succeeded_18 = Succeeded0_44;
}

static void MR_CALL 
backend_libs__link_target_code__construct_cli_shell_script_for_csharp_3_p_0(
  MR_Word Globals_4,
  MR_String ExeFileName_5,
  MR_String * ContentStr_6)
{
  MR_String CLI_7;
  MR_Word LinkLibraryDirectoriesList_8;
  MR_Word MonoPathDirectoriesList_9;
  MR_Word AllSearchPaths_10;
  MR_String MonoPathDirectories_11;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_36;

  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 480, &CLI_7);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 493, &LinkLibraryDirectoriesList_8);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 484, &MonoPathDirectoriesList_9);
  AllSearchPaths_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibraryDirectoriesList_8, MonoPathDirectoriesList_9);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(AllSearchPaths_10, (MR_String) "", (MR_String) "", (MR_String) ":", &MonoPathDirectories_11);
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (ExeFileName_5));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[16])));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) "exec \"\044CLI_INTERPRETER\" \"\044DIR/"));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) ((MR_String) "}\n"));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (CLI_7));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_String) "CLI_INTERPRETER=\044{CLI_INTERPRETER:-"));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_String) "export MONO_PATH\n"));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MonoPathDirectories_11));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) ((MR_String) "MONO_PATH=\044MONO_PATH:"));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
  }
  *ContentStr_6 = mercury__string__append_list_1_f_0(Var_18);
}

static MR_String MR_CALL 
backend_libs__link_target_code__csharp_file_name_3_f_0(
  MR_Word EnvType_5,
  MR_Word CSharpCompiler_6,
  MR_String FileName0_7)
{
  MR_String FileName_8;

  switch (EnvType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 4:
    case (MR_Integer) 3:
      switch (CSharpCompiler_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          FileName_8 = mercury__string__replace_all_3_f_0(FileName0_7, (MR_String) "/", (MR_String) "\\\\");
          break;
        case (MR_Integer) 1:
          FileName_8 = FileName0_7;
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (CSharpCompiler_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          FileName_8 = mercury__string__replace_all_3_f_0(FileName0_7, (MR_String) "/", (MR_String) "\\\\");
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          FileName_8 = FileName0_7;
          break;
      }
      break;
    case (MR_Integer) 0:
      FileName_8 = FileName0_7;
      break;
  }
  return FileName_8;
}

static void MR_CALL 
backend_libs__link_target_code__link_exe_or_shared_lib_for_c_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word LinkedTargetType_13,
  MR_Word ModuleName_14,
  MR_String FullOutputFileName_15,
  MR_Word ObjectsList_16,
  MR_Word * Specs_17,
  MR_Word * Succeeded_18)
{
  MR_bool succeeded;
  MR_Word CommandOpt_20;
  MR_Word RpathFlagOpt_21;
  MR_Word RpathSepOpt_22;
  MR_Word LDFlagsOpt_23;
  MR_Word ThreadFlagsOpt_24;
  MR_Word DebugFlagsOpt_25;
  MR_Word TraceFlagsOpt_26;
  MR_String UndefOpt_28;
  MR_String ReserveStackSizeOpt_29;
  MR_String LTOOpts_30;
  MR_String LinkerStripOpt_31;
  MR_String StripExeCommand_32;
  MR_String StripExeFlags_33;
  MR_Word TargetDebug_34;
  MR_String DebugOpts_35;
  MR_String SanitizerOpts_36;
  MR_Word Linkage_37;
  MR_String StaticOpts_38;
  MR_String ThreadOpts_39;
  MR_String HwlocOpts_40;
  MR_String MercuryStdLibs_41;
  MR_String SystemLibs_42;
  MR_String RestrictedCmdLinkOpts_43;
  MR_Word LDFlagsList_44;
  MR_String LDFlags_45;
  MR_Word LinkLibraryDirectoriesList_46;
  MR_String LinkerPathFlag_47;
  MR_String LinkLibraryDirectories_48;
  MR_String RpathOpts_49;
  MR_String FrameworkDirectoriesOpts_50;
  MR_String InstallNameOpt_51;
  MR_Word TraceLevel_52;
  MR_Word TraceEnabled_53;
  MR_String TraceOpts_54;
  MR_Word Frameworks_55;
  MR_String FrameworkOpts_56;
  MR_Word MaybeLinkLibraries_57;

  switch (LinkedTargetType_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        CommandOpt_20 = (MR_Integer) 521;
        RpathFlagOpt_21 = (MR_Integer) 596;
        RpathSepOpt_22 = (MR_Integer) 597;
        LDFlagsOpt_23 = (MR_Integer) 498;
        ThreadFlagsOpt_24 = (MR_Integer) 601;
        DebugFlagsOpt_25 = (MR_Integer) 589;
        TraceFlagsOpt_26 = (MR_Integer) 602;
        UndefOpt_28 = (MR_String) "";
        ReserveStackSizeOpt_29 = backend_libs__link_target_code__get_reserve_stack_size_flags_for_c_1_f_0(Globals_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word AllowUndef_27;

        CommandOpt_20 = (MR_Integer) 522;
        RpathFlagOpt_21 = (MR_Integer) 607;
        RpathSepOpt_22 = (MR_Integer) 608;
        LDFlagsOpt_23 = (MR_Integer) 500;
        ThreadFlagsOpt_24 = (MR_Integer) 609;
        DebugFlagsOpt_25 = (MR_Integer) 603;
        TraceFlagsOpt_26 = (MR_Integer) 610;
        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 514, &AllowUndef_27);
        switch (AllowUndef_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 590, &UndefOpt_28);
            break;
          case (MR_Integer) 1:
            libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 588, &UndefOpt_28);
            break;
        }
        ReserveStackSizeOpt_29 = (MR_String) "";
      }
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 593, &LTOOpts_30);
  backend_libs__link_target_code__get_strip_flags_for_c_5_p_0(Globals_11, LinkedTargetType_13, &LinkerStripOpt_31, &StripExeCommand_32, &StripExeFlags_33);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 446, &TargetDebug_34);
  switch (TargetDebug_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DebugOpts_35 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_11, DebugFlagsOpt_25, &DebugOpts_35);
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 598, &SanitizerOpts_36);
  libs__globals__get_linkage_2_p_0(Globals_11, &Linkage_37);
  succeeded = (LinkedTargetType_13 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Linkage_37 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 599, &StaticOpts_38);
  else
    StaticOpts_38 = (MR_String) "";
  backend_libs__link_target_code__get_thread_flags_for_c_5_p_0(Globals_11, ThreadFlagsOpt_24, Linkage_37, &ThreadOpts_39, &HwlocOpts_40);
  backend_libs__link_target_code__get_mercury_std_libs_for_c_cs_3_p_0(Globals_11, LinkedTargetType_13, &MercuryStdLibs_41);
  backend_libs__link_target_code__get_system_libs_for_c_3_p_0(Globals_11, LinkedTargetType_13, &SystemLibs_42);
  backend_libs__link_target_code__get_restricted_command_line_link_opts_for_c_3_p_0(Globals_11, LinkedTargetType_13, &RestrictedCmdLinkOpts_43);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, LDFlagsOpt_23, &LDFlagsList_44);
  backend_libs__compile_target_code__join_string_list_5_p_0(LDFlagsList_44, (MR_String) "", (MR_String) "", (MR_String) " ", &LDFlags_45);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 493, &LinkLibraryDirectoriesList_46);
  libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 595, &LinkerPathFlag_47);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_46, LinkerPathFlag_47, (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_48);
  backend_libs__link_target_code__get_runtime_library_path_opts_for_c_5_p_0(Globals_11, LinkedTargetType_13, RpathFlagOpt_21, RpathSepOpt_22, &RpathOpts_49);
  backend_libs__compile_target_code__get_framework_directories_flags_2_p_0(Globals_11, &FrameworkDirectoriesOpts_50);
  backend_libs__link_target_code__get_install_name_opt_for_c_4_p_0(Globals_11, ModuleName_14, LinkedTargetType_13, &InstallNameOpt_51);
  libs__globals__get_trace_level_2_p_0(Globals_11, &TraceLevel_52);
  TraceEnabled_53 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_52);
  switch (TraceEnabled_53) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_11, TraceFlagsOpt_26, &TraceOpts_54);
      break;
    case (MR_Integer) 0:
      TraceOpts_54 = (MR_String) "";
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 518, &Frameworks_55);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(Frameworks_55, (MR_String) "-framework ", (MR_String) "", (MR_String) " ", &FrameworkOpts_56);
  backend_libs__link_target_code__get_link_opts_for_libraries_for_c_cs_5_p_0(Globals_11, &MaybeLinkLibraries_57, Specs_17);
  if ((MaybeLinkLibraries_57 == (MR_Word) ((MR_Unsigned) 0U)))
    *Succeeded_18 = (MR_Integer) 0;
  else
  {
    MR_Word LinkLibrariesList_58 = ((MR_Word) ((MR_hl_field(1, MaybeLinkLibraries_57, 0))));
    MR_String LinkLibraries_59;
    MR_Word PrepareResult_60;

    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibrariesList_58, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_59);
    backend_libs__link_target_code__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0(ProgressStream_12, Globals_11, ObjectsList_16, &PrepareResult_60);
    if ((PrepareResult_60 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_18 = (MR_Integer) 0;
    else
    {
      MR_String Objects_61 = ((MR_String) ((MR_hl_field(1, PrepareResult_60, 0))));
      MR_Word MaybeDemangleCmd_62 = ((MR_Word) ((MR_hl_field(1, PrepareResult_60, 1))));
      MR_Word MaybeFileToDelete_63 = ((MR_Word) ((MR_hl_field(1, PrepareResult_60, 2))));
      MR_String Command_64;
      MR_String OutputOpt_65;
      MR_String LinkOptSep_66;
      MR_String LinkCmd_67;
      MR_Word LinkSucceeded_68;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_String Var_124;
      MR_Word Var_125;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_169;

      libs__globals__lookup_string_option_3_p_0(Globals_11, CommandOpt_20, &Command_64);
      backend_libs__link_target_code__get_linker_output_option_for_c_3_p_0(Globals_11, LinkedTargetType_13, &OutputOpt_65);
      libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 594, &LinkOptSep_66);
      Var_124 = libs__shell_util__quote_shell_cmd_arg_1_f_0(FullOutputFileName_15);
      {
        Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_169, 0) = ((MR_Box) (SystemLibs_42));
        MR_hl_field(1, Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_167, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_169));
      }
      {
        Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_166, 0) = ((MR_Box) (HwlocOpts_40));
        MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_167));
      }
      {
        Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_164, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_166));
      }
      {
        Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_163, 0) = ((MR_Box) (MercuryStdLibs_41));
        MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_164));
      }
      {
        Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_161, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_163));
      }
      {
        Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_160, 0) = ((MR_Box) (LinkLibraries_59));
        MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_161));
      }
      {
        Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_158, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_158, 1) = ((MR_Box) (Var_160));
      }
      {
        Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_157, 0) = ((MR_Box) (LDFlags_45));
        MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_158));
      }
      {
        Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_155, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_157));
      }
      {
        Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_154, 0) = ((MR_Box) (RestrictedCmdLinkOpts_43));
        MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_155));
      }
      {
        Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_152, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_154));
      }
      {
        Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_151, 0) = ((MR_Box) (FrameworkOpts_56));
        MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_152));
      }
      {
        Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_149, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_151));
      }
      {
        Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_148, 0) = ((MR_Box) (SanitizerOpts_36));
        MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_149));
      }
      {
        Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_146, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_148));
      }
      {
        Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_145, 0) = ((MR_Box) (DebugOpts_35));
        MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_146));
      }
      {
        Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_143, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_145));
      }
      {
        Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_142, 0) = ((MR_Box) (InstallNameOpt_51));
        MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_143));
      }
      {
        Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_140, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_139, 0) = ((MR_Box) (FrameworkDirectoriesOpts_50));
        MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_140));
      }
      {
        Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_137, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_139));
      }
      {
        Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_136, 0) = ((MR_Box) (RpathOpts_49));
        MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
      }
      {
        Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_134, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_136));
      }
      {
        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_133, 0) = ((MR_Box) (LinkLibraryDirectories_48));
        MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_134));
      }
      {
        Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_131, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_133));
      }
      {
        Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_130, 0) = ((MR_Box) (LinkOptSep_66));
        MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
      }
      {
        Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_128, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_130));
      }
      {
        Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_127, 0) = ((MR_Box) (Objects_61));
        MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_128));
      }
      {
        Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_125, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_127));
      }
      {
        Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
        MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_125));
      }
      {
        Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_122, 0) = ((MR_Box) (OutputOpt_65));
        MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_123));
      }
      {
        Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_120, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_122));
      }
      {
        Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_119, 0) = ((MR_Box) (ReserveStackSizeOpt_29));
        MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
      }
      {
        Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_117, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
      }
      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) (TraceOpts_54));
        MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_117));
      }
      {
        Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_114, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_116));
      }
      {
        Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_113, 0) = ((MR_Box) (LTOOpts_30));
        MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_114));
      }
      {
        Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_111, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_113));
      }
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (ThreadOpts_39));
        MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
      }
      {
        Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_108, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
      }
      {
        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_107, 0) = ((MR_Box) (UndefOpt_28));
        MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_108));
      }
      {
        Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_105, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_107));
      }
      {
        Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_104, 0) = ((MR_Box) (LinkerStripOpt_31));
        MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_104));
      }
      {
        Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_101, 0) = ((MR_Box) (StaticOpts_38));
        MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
      }
      {
        Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_99, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_101));
      }
      {
        Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_98, 0) = ((MR_Box) (Command_64));
        MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
      }
      mercury__string__append_list_2_p_0(Var_98, &LinkCmd_67);
      libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(Globals_11, ProgressStream_12, ProgressStream_12, (MR_Integer) 1, LinkCmd_67, MaybeDemangleCmd_62, &LinkSucceeded_68);
      succeeded = (LinkSucceeded_68 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (strcmp(LinkerStripOpt_31, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (strcmp(StripExeCommand_32, (MR_String) "") == 0);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_String StripCmd_69;
        MR_String Var_181;
        MR_String Var_188;
        MR_String Var_189;
        MR_String Var_191;

        Var_181 = libs__shell_util__quote_shell_cmd_arg_1_f_0(FullOutputFileName_15);
        Var_188 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_181);
        Var_189 = mercury__string__f_43_43_2_f_0(StripExeFlags_33, Var_188);
        Var_191 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_189);
        StripCmd_69 = mercury__string__f_43_43_2_f_0(StripExeCommand_32, Var_191);
        libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(Globals_11, ProgressStream_12, ProgressStream_12, (MR_Integer) 1, StripCmd_69, (MR_Word) ((MR_Unsigned) 0U), Succeeded_18);
      }
      else
        *Succeeded_18 = LinkSucceeded_68;
      if (!((MaybeFileToDelete_63 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String FileToDelete_70 = ((MR_String) ((MR_hl_field(1, MaybeFileToDelete_63, 0))));
        MR_Word Var_71;

        mercury__io__file__remove_file_4_p_0(FileToDelete_70, &Var_71);
      }
    }
  }
}

static void MR_CALL 
backend_libs__link_target_code__get_system_libs_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * SystemLibs_6)
{
  MR_Word TraceLevel_7;
  MR_Word TraceEnabled_8;
  MR_String SystemTraceLibs_9;
  MR_Word UseThreadLibs_13;
  MR_String ThreadLibs_14;
  MR_String OtherSystemLibs_15;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;

  libs__globals__get_trace_level_2_p_0(Globals_4, &TraceLevel_7);
  TraceEnabled_8 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_7);
  switch (TraceEnabled_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SystemTraceLibs0_10;
        MR_Word UseReadline_11;

        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 618, &SystemTraceLibs0_10);
        libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 515, &UseReadline_11);
        switch (UseReadline_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            SystemTraceLibs_9 = SystemTraceLibs0_10;
            break;
          case (MR_Integer) 1:
            {
              MR_String ReadlineLibs_12;
              MR_String Var_19;

              libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 615, &ReadlineLibs_12);
              Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " ", ReadlineLibs_12);
              SystemTraceLibs_9 = mercury__string__f_43_43_2_f_0(SystemTraceLibs0_10, Var_19);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      SystemTraceLibs_9 = (MR_String) "";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 92, &UseThreadLibs_13);
  switch (UseThreadLibs_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ThreadLibs_14 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 617, &ThreadLibs_14);
      break;
  }
  switch (LinkedTargetType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 614, &OtherSystemLibs_15);
      break;
    case (MR_Integer) 2:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 616, &OtherSystemLibs_15);
      break;
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (ThreadLibs_14));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (OtherSystemLibs_15));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (SystemTraceLibs_9));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
  }
  *SystemLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_25);
}

static void MR_CALL 
backend_libs__link_target_code__get_link_opts_for_libraries_for_c_cs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_String conv2_LinkerOpt_11;
  MR_Word conv1_STATE_VARIABLE_Specs_38;
  MR_Word conv0_STATE_VARIABLE_Succeeded_40;

  backend_libs__link_target_code__get_link_opts_for_library_for_c_cs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LinkerOpt_11, &conv1_STATE_VARIABLE_Specs_38, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Succeeded_40);
  *wrapper_arg_2 = ((MR_Box) (conv2_LinkerOpt_11));
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_38));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Succeeded_40));
}

static void MR_CALL 
backend_libs__link_target_code__get_link_opts_for_libraries_for_c_cs_5_p_0(
  MR_Word Globals_6,
  MR_Word * MaybeLinkLibraries_7,
  MR_Word * Specs_8)
{
  MR_Word LinkLibrariesList0_10;
  MR_Word LinkLibrariesList_11;
  MR_Word SpecsList_12;
  MR_Word LibrariesSucceeded_13;
  MR_Word Var_17;
  MR_Box conv4_LibrariesSucceeded_13;
  MR_Box conv3_STATE_VARIABLE_IO_15;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 494, &LinkLibrariesList0_10);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_8[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (backend_libs__link_target_code__get_link_opts_for_libraries_for_c_cs_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Globals_6));
  }
  mercury__list__map2_foldl2_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_scalar_common_1[0]), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, LinkLibrariesList0_10, &LinkLibrariesList_11, &SpecsList_12, ((MR_Box) ((MR_Integer) 1)), &conv4_LibrariesSucceeded_13, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_15);
  LibrariesSucceeded_13 = ((MR_Word) (conv4_LibrariesSucceeded_13));
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SpecsList_12, Specs_8);
  switch (LibrariesSucceeded_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeLinkLibraries_7 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeLinkLibraries_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (LinkLibrariesList_11));
      }
      break;
  }
}

static MR_bool MR_CALL 
backend_libs__link_target_code__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__link_target_code__has_object_file_extension_for_c_3_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word ObjectsList_9,
  MR_Word * PrepareResult_10)
{
  MR_bool succeeded;
  MR_Word Demangle_12;
  MR_Word MaybeDemangleCmd_14;
  MR_Word RestrictedCommandLine_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 511, &Demangle_12);
  switch (Demangle_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeDemangleCmd_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String DemangleCmd_13;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 585, &DemangleCmd_13);
        {
          MaybeDemangleCmd_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDemangleCmd_14, 0) = ((MR_Box) (DemangleCmd_13));
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 567, &RestrictedCommandLine_15);
  switch (RestrictedCommandLine_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Objects_54;

        backend_libs__compile_target_code__join_quoted_string_list_5_p_0(ObjectsList_9, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_54);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *PrepareResult_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Objects_54));
          MR_hl_field(1, base, 1) = ((MR_Box) (MaybeDemangleCmd_14));
          MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LibExt_16;
        MR_String TempDir_17;
        MR_Word TmpArchiveResult_18;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 578, &LibExt_16);
        mercury__io__file__get_temp_directory_3_p_0(&TempDir_17);
        mercury__io__file__make_temp_file_6_p_0(TempDir_17, (MR_String) "mtmp", LibExt_16, &TmpArchiveResult_18);
        if (((MR_tag((MR_Word) TmpArchiveResult_18)) == (MR_Integer) 1))
        {
          MR_Word Error_27 = ((MR_Word) ((MR_hl_field(1, TmpArchiveResult_18, 0))));
          MR_String Var_49;

          Var_49 = mercury__io__error_message_1_f_0(Error_27);
          mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Could not create temporary file: ");
          mercury__io__write_string_4_p_0(ProgressStream_7, Var_49);
          mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
          *PrepareResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_String TmpArchive_19 = ((MR_String) ((MR_hl_field(0, TmpArchiveResult_18, 0))));
          MR_Word ProperObjectFiles_20;
          MR_Word NonObjectFiles_21;
          MR_Word ArchiveSucceeded_23;
          MR_String ObjExt_60;
          MR_String PicObjExt_61;
          MR_Word Var_64;
          MR_Word Var_22;

          libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 470, &ObjExt_60);
          libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 471, &PicObjExt_61);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) (&backend_libs__link_target_code_scalar_common_7[0]));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) (backend_libs__link_target_code__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0_1));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_64, 3) = ((MR_Box) (ObjExt_60));
            MR_hl_field(0, Var_64, 4) = ((MR_Box) (PicObjExt_61));
          }
          mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, ObjectsList_9, &ProperObjectFiles_20, &NonObjectFiles_21);
          mercury__io__file__remove_file_4_p_0(TmpArchive_19, &Var_22);
          backend_libs__link_target_code__create_archive_for_c_8_p_0(Globals_8, ProgressStream_7, TmpArchive_19, (MR_Integer) 1, ProperObjectFiles_20, &ArchiveSucceeded_23);
          switch (ArchiveSucceeded_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_26;

                mercury__io__file__remove_file_4_p_0(TmpArchive_19, &Var_26);
                *PrepareResult_10 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Objects_24;
                MR_Word MaybeTmpArchiveToDelete_25;
                MR_Word Var_40;

                {
                  Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_40, 0) = ((MR_Box) (TmpArchive_19));
                  MR_hl_field(1, Var_40, 1) = ((MR_Box) (NonObjectFiles_21));
                }
                backend_libs__compile_target_code__join_quoted_string_list_5_p_0(Var_40, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_24);
                {
                  MaybeTmpArchiveToDelete_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeTmpArchiveToDelete_25, 0) = ((MR_Box) (TmpArchive_19));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *PrepareResult_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Objects_24));
                  MR_hl_field(1, base, 1) = ((MR_Box) (MaybeDemangleCmd_14));
                  MR_hl_field(1, base, 2) = ((MR_Box) (MaybeTmpArchiveToDelete_25));
                }
              }
              break;
          }
        }
      }
      break;
  }
}

static void MR_CALL 
backend_libs__link_target_code__create_archive_for_c_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_String FullLibFileName_11,
  MR_Word Quote_12,
  MR_Word ObjectList_13,
  MR_Word * Succeeded_14)
{
  MR_bool succeeded;
  MR_String ArCmd_16;
  MR_Word ArFlagsList_17;
  MR_String ArFlags_18;
  MR_String ArOutputFlag_19;
  MR_String RanLib_20;
  MR_String Objects_21;
  MR_Word C_CompilerType_22;
  MR_String ArOutputSpace_25;
  MR_String MakeLibCmdArgs_30;
  MR_Word MakeLibCmdSucceeded_31;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;

  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 580, &ArCmd_16);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 581, &ArFlagsList_17);
  backend_libs__compile_target_code__join_string_list_5_p_0(ArFlagsList_17, (MR_String) "", (MR_String) "", (MR_String) " ", &ArFlags_18);
  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 582, &ArOutputFlag_19);
  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 583, &RanLib_20);
  switch (Quote_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__join_string_list_5_p_0(ObjectList_13, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_21);
      break;
    case (MR_Integer) 1:
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(ObjectList_13, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_21);
      break;
  }
  libs__globals__get_c_compiler_type_2_p_0(Globals_9, &C_CompilerType_22);
  switch (MR_tag((MR_Word) C_CompilerType_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ArOutputSpace_25 = (MR_String) " ";
      break;
    case (MR_Integer) 3:
      ArOutputSpace_25 = (MR_String) "";
      break;
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Objects_21));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (FullLibFileName_11));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (ArOutputSpace_25));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (ArOutputFlag_19));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (ArFlags_18));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  MakeLibCmdArgs_30 = mercury__string__append_list_1_f_0(Var_48);
  libs__system_cmds__invoke_long_system_command_9_p_0(Globals_9, ProgressStream_10, ProgressStream_10, (MR_Integer) 1, ArCmd_16, MakeLibCmdArgs_30, &MakeLibCmdSucceeded_31);
  succeeded = (strcmp(RanLib_20, (MR_String) "") == 0);
  if (!(succeeded))
    succeeded = (MakeLibCmdSucceeded_31 == (MR_Integer) 0);
  if (succeeded)
    *Succeeded_14 = MakeLibCmdSucceeded_31;
  else
  {
    MR_String RanLibCmd_32;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;

    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (FullLibFileName_11));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (RanLib_20));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
    }
    RanLibCmd_32 = mercury__string__append_list_1_f_0(Var_61);
    libs__system_cmds__invoke_system_command_8_p_0(Globals_9, ProgressStream_10, ProgressStream_10, (MR_Integer) 1, RanLibCmd_32, Succeeded_14);
  }
}

static void MR_CALL 
backend_libs__link_target_code__get_linker_output_option_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * OutputOpt_6)
{
  MR_bool succeeded;
  MR_Word C_CompilerType_7;

  libs__globals__get_c_compiler_type_2_p_0(Globals_4, &C_CompilerType_7);
  switch (MR_tag((MR_Word) C_CompilerType_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *OutputOpt_6 = (MR_String) " -o ";
      break;
    case (MR_Integer) 3:
      {
        succeeded = (LinkedTargetType_5 == (MR_Integer) 0);
        if (succeeded)
          *OutputOpt_6 = (MR_String) " -Fe";
        else
          *OutputOpt_6 = (MR_String) " -o ";
      }
      break;
  }
}

static void MR_CALL 
backend_libs__link_target_code__get_install_name_opt_for_c_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleName_6,
  MR_Word LinkedTargetType_7,
  MR_String * InstallNameOpt_8)
{
  MR_bool succeeded;
  MR_Word UseInstallName_9;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 611, &UseInstallName_9);
  succeeded = (UseInstallName_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (LinkedTargetType_7 == (MR_Integer) 2);
  if (succeeded)
  {
    MR_String BaseFileName_10;
    MR_String SharedLibExt_11;
    MR_String ShLibFileName_12;
    MR_String Var_16;

    BaseFileName_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_6);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 579, &SharedLibExt_11);
    Var_16 = mercury__string__f_43_43_2_f_0(BaseFileName_10, SharedLibExt_11);
    ShLibFileName_12 = mercury__string__f_43_43_2_f_0((MR_String) "lib", Var_16);
    libs__file_util__get_install_name_option_3_p_0(Globals_5, ShLibFileName_12, InstallNameOpt_8);
  }
  else
    *InstallNameOpt_8 = (MR_String) "";
}

static MR_Box MR_CALL 
backend_libs__link_target_code__get_runtime_library_path_opts_for_c_5_p_0_1(
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
backend_libs__link_target_code__get_runtime_library_path_opts_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkedTargetType_7,
  MR_Word RpathFlagOpt_8,
  MR_Word RpathSepOpt_9,
  MR_String * RpathOpts_10)
{
  MR_bool succeeded;
  MR_Word UseInstallName_11;
  MR_Word SharedLibsSupported_12;
  MR_Word Linkage_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 611, &UseInstallName_11);
  backend_libs__link_target_code__are_shared_libraries_supported_2_p_0(Globals_6, &SharedLibsSupported_12);
  libs__globals__get_linkage_2_p_0(Globals_6, &Linkage_13);
  succeeded = (UseInstallName_11 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (SharedLibsSupported_12 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (Linkage_13 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (LinkedTargetType_7 == (MR_Integer) 2);
    }
  }
  if (succeeded)
  {
    MR_Word RpathDirs0_14;
    MR_Word RpathDirs_15;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 502, &RpathDirs0_14);
    RpathDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_scalar_common_6[0]), RpathDirs0_14);
    if ((RpathDirs_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *RpathOpts_10 = (MR_String) "";
    else
    {
      MR_String RpathSep_18;
      MR_String RpathFlag_19;
      MR_String RpathOpts0_20;

      libs__globals__lookup_string_option_3_p_0(Globals_6, RpathSepOpt_9, &RpathSep_18);
      libs__globals__lookup_string_option_3_p_0(Globals_6, RpathFlagOpt_8, &RpathFlag_19);
      RpathOpts0_20 = mercury__string__join_list_2_f_0(RpathSep_18, RpathDirs_15);
      *RpathOpts_10 = mercury__string__f_43_43_2_f_0(RpathFlag_19, RpathOpts0_20);
    }
  }
  else
    *RpathOpts_10 = (MR_String) "";
}

void MR_CALL 
backend_libs__link_target_code__are_shared_libraries_supported_2_p_0(
  MR_Word Globals_3,
  MR_Word * Supported_4)
{
  MR_bool succeeded;
  MR_String LibExt_5;
  MR_String SharedLibExt_6;

  libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 578, &LibExt_5);
  libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 579, &SharedLibExt_6);
  succeeded = (strcmp(LibExt_5, SharedLibExt_6) == 0);
  if (succeeded)
    *Supported_4 = (MR_Integer) 0;
  else
    *Supported_4 = (MR_Integer) 1;
}

static void MR_CALL 
backend_libs__link_target_code__get_restricted_command_line_link_opts_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * RestrictedCmdLinkOpts_6)
{
  MR_Word RestrictedCommandLine_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 567, &RestrictedCommandLine_7);
  switch (RestrictedCommandLine_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *RestrictedCmdLinkOpts_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      switch (LinkedTargetType_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word C_CompilerType_8;

            libs__globals__get_c_compiler_type_2_p_0(Globals_4, &C_CompilerType_8);
            switch (MR_tag((MR_Word) C_CompilerType_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *RestrictedCmdLinkOpts_6 = (MR_String) "";
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, C_CompilerType_8, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[15])), (MR_String) "", (MR_String) "", (MR_String) " ", RestrictedCmdLinkOpts_6);
                    break;
                  case (MR_Integer) 1:
                    backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) (MR_mkword(1, &backend_libs__link_target_code_scalar_common_1[11])), (MR_String) "", (MR_String) "", (MR_String) " ", RestrictedCmdLinkOpts_6);
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          *RestrictedCmdLinkOpts_6 = (MR_String) "";
          break;
      }
      break;
  }
}

static void MR_CALL 
backend_libs__link_target_code__get_mercury_std_libs_for_c_cs_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * StdLibs_6)
{
  MR_bool succeeded;
  MR_Word MaybeStdLibDir_7;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_4, (MR_Integer) 492, &MaybeStdLibDir_7);
  if ((MaybeStdLibDir_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *StdLibs_6 = (MR_String) "";
  else
  {
    MR_String StdLibDir_8 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_7, 0))));
    MR_Word GCMethod_9;
    MR_Word LibExt_10;
    MR_String GradeDir_11;
    MR_String StaticGCLibs_12;
    MR_String SharedGCLibs_13;
    MR_Word TraceLevel_22;
    MR_Word TraceEnabled_23;
    MR_String StaticTraceLibs_24;
    MR_String SharedTraceLibs_25;
    MR_Word SourceDebug_34;
    MR_String StaticSourceDebugLibs_41;
    MR_String SharedSourceDebugLibs_42;
    MR_String StaticStdLib_43;
    MR_String StdLib_44;
    MR_String StaticRuntimeLib_45;
    MR_String RuntimeLib_46;

    libs__globals__get_gc_method_2_p_0(Globals_4, &GCMethod_9);
    LibExt_10 = ((&backend_libs__link_target_code_vector_common_3[5 + LinkedTargetType_5]))->backend_libs__link_target_code__vector_common_type_3_0__vct_3_f_0;
    libs__globals__get_grade_dir_2_p_0(Globals_4, &GradeDir_11);
    switch (GCMethod_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          StaticGCLibs_12 = (MR_String) "";
          SharedGCLibs_13 = (MR_String) "";
        }
        break;
      case (MR_Integer) 0:
        {
          StaticGCLibs_12 = (MR_String) "";
          SharedGCLibs_13 = (MR_String) "";
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CDebugGrade_15;
          MR_String GCGrade1_16;
          MR_Word ProfTime_17;
          MR_Word ProfDeep_18;
          MR_String GCGrade2_19;
          MR_Word Parallel_20;
          MR_String GCGrade_21;

          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 56, &CDebugGrade_15);
          switch (CDebugGrade_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              GCGrade1_16 = (MR_String) "gc";
              break;
            case (MR_Integer) 1:
              GCGrade1_16 = (MR_String) "gc_c_debug";
              break;
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 64, &ProfTime_17);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 67, &ProfDeep_18);
          succeeded = (ProfTime_17 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ProfDeep_18 == (MR_Integer) 1);
          if (succeeded)
            GCGrade2_19 = mercury__string__f_43_43_2_f_0(GCGrade1_16, (MR_String) "_prof");
          else
            GCGrade2_19 = GCGrade1_16;
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 92, &Parallel_20);
          switch (Parallel_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              GCGrade_21 = GCGrade2_19;
              break;
            case (MR_Integer) 1:
              GCGrade_21 = mercury__string__f_43_43_2_f_0((MR_String) "par_", GCGrade2_19);
              break;
          }
          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, (MR_String) "", LibExt_10, GCGrade_21, &StaticGCLibs_12, &SharedGCLibs_13);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word CDebugGrade_117;
          MR_String GCGrade1_118;
          MR_Word ProfTime_119;
          MR_Word ProfDeep_120;
          MR_String GCGrade2_121;
          MR_Word Parallel_122;
          MR_String GCGrade_123;

          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 56, &CDebugGrade_117);
          switch (CDebugGrade_117) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              GCGrade1_118 = (MR_String) "gc_debug";
              break;
            case (MR_Integer) 1:
              GCGrade1_118 = (MR_String) "gc_debug_c_debug";
              break;
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 64, &ProfTime_119);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 67, &ProfDeep_120);
          succeeded = (ProfTime_119 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ProfDeep_120 == (MR_Integer) 1);
          if (succeeded)
            GCGrade2_121 = mercury__string__f_43_43_2_f_0(GCGrade1_118, (MR_String) "_prof");
          else
            GCGrade2_121 = GCGrade1_118;
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 92, &Parallel_122);
          switch (Parallel_122) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              GCGrade_123 = GCGrade2_121;
              break;
            case (MR_Integer) 1:
              GCGrade_123 = mercury__string__f_43_43_2_f_0((MR_String) "par_", GCGrade2_121);
              break;
          }
          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, (MR_String) "", LibExt_10, GCGrade_123, &StaticGCLibs_12, &SharedGCLibs_13);
        }
        break;
      case (MR_Integer) 4:
        {
          StaticGCLibs_12 = (MR_String) "";
          SharedGCLibs_13 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          StaticGCLibs_12 = (MR_String) "";
          SharedGCLibs_13 = (MR_String) "";
        }
        break;
    }
    libs__globals__get_trace_level_2_p_0(Globals_4, &TraceLevel_22);
    TraceEnabled_23 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_22);
    switch (TraceEnabled_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String StaticTraceLib_26;
          MR_String TraceLib_27;
          MR_String StaticEventSpecLib_28;
          MR_String EventSpecLib_29;
          MR_String StaticBrowserLib_30;
          MR_String BrowserLib_31;
          MR_String StaticMdbCompLib_32;
          MR_String MdbCompLib_33;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;

          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_trace", &StaticTraceLib_26, &TraceLib_27);
          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_eventspec", &StaticEventSpecLib_28, &EventSpecLib_29);
          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_browser", &StaticBrowserLib_30, &BrowserLib_31);
          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_mdbcomp", &StaticMdbCompLib_32, &MdbCompLib_33);
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (StaticMdbCompLib_32));
            MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (StaticBrowserLib_30));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (StaticEventSpecLib_28));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (StaticTraceLib_26));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
          }
          StaticTraceLibs_24 = mercury__string__join_list_2_f_0((MR_String) " ", Var_64);
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (MdbCompLib_33));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (BrowserLib_31));
            MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (EventSpecLib_29));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_70, 0) = ((MR_Box) (TraceLib_27));
            MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
          }
          SharedTraceLibs_25 = mercury__string__join_list_2_f_0((MR_String) " ", Var_70);
        }
        break;
      case (MR_Integer) 0:
        {
          StaticTraceLibs_24 = (MR_String) "";
          SharedTraceLibs_25 = (MR_String) "";
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 495, &SourceDebug_34);
    switch (SourceDebug_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          StaticSourceDebugLibs_41 = (MR_String) "";
          SharedSourceDebugLibs_42 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String StaticSsdbLib_35;
          MR_String SsdbLib_36;
          MR_String StaticBrowserLib2_37;
          MR_String BrowserLib2_38;
          MR_String StaticMdbCompLib2_39;
          MR_String MdbCompLib2_40;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;

          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_ssdb", &StaticSsdbLib_35, &SsdbLib_36);
          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_browser", &StaticBrowserLib2_37, &BrowserLib2_38);
          backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_mdbcomp", &StaticMdbCompLib2_39, &MdbCompLib2_40);
          {
            Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_82, 0) = ((MR_Box) (StaticMdbCompLib2_39));
            MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_81, 0) = ((MR_Box) (StaticBrowserLib2_37));
            MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (StaticSsdbLib_35));
            MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
          }
          StaticSourceDebugLibs_41 = mercury__string__join_list_2_f_0((MR_String) " ", Var_80);
          {
            Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_87, 0) = ((MR_Box) (MdbCompLib2_40));
            MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (BrowserLib2_38));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
          }
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (SsdbLib_36));
            MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_86));
          }
          SharedSourceDebugLibs_42 = mercury__string__join_list_2_f_0((MR_String) " ", Var_85);
        }
        break;
    }
    backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_std", &StaticStdLib_43, &StdLib_44);
    backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_11, LibExt_10, (MR_String) "mer_rt", &StaticRuntimeLib_45, &RuntimeLib_46);
    switch (LinkedTargetType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        {
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_108;

          {
            Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_108, 0) = ((MR_Box) (StdLib_44));
            MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_107, 0) = ((MR_Box) (SharedSourceDebugLibs_42));
            MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (SharedTraceLibs_25));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
          }
          *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_106);
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word MercuryLinkage_47;

          libs__globals__get_mercury_linkage_2_p_0(Globals_4, &MercuryLinkage_47);
          switch (MercuryLinkage_47) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_99;
                MR_Word Var_100;
                MR_Word Var_101;
                MR_Word Var_102;
                MR_Word Var_103;

                {
                  Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_103, 0) = ((MR_Box) (SharedGCLibs_13));
                  MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (RuntimeLib_46));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
                }
                {
                  Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_101, 0) = ((MR_Box) (StdLib_44));
                  MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_100, 0) = ((MR_Box) (SharedSourceDebugLibs_42));
                  MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
                }
                {
                  Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_99, 0) = ((MR_Box) (SharedTraceLibs_25));
                  MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
                }
                *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_99);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_96;

                {
                  Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_96, 0) = ((MR_Box) (StaticGCLibs_12));
                  MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_95, 0) = ((MR_Box) (StaticRuntimeLib_45));
                  MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (StaticStdLib_43));
                  MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
                }
                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (StaticSourceDebugLibs_41));
                  MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_92, 0) = ((MR_Box) (StaticTraceLibs_24));
                  MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
                }
                *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_92);
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__link_target_code__link_lib_args_for_c_cs_8_p_0(
  MR_Word Globals_9,
  MR_Word LinkedTargetType_10,
  MR_String StdLibDir_11,
  MR_String GradeDir_12,
  MR_Word Ext_13,
  MR_String Name_14,
  MR_String * StaticArg_15,
  MR_String * SharedArg_16)
{
  MR_String LibPrefix_17 = ((&backend_libs__link_target_code_vector_common_4[0 + LinkedTargetType_10]))->backend_libs__link_target_code__vector_common_type_4_0__vct_4_f_0;
  MR_String StaticLibName_18;
  MR_String Var_19;
  MR_String Var_20;
  MR_String Var_21;
  MR_String Var_22;
  MR_String Var_23;

  Var_20 = parse_tree__file_names__extension_to_string_2_f_0(Globals_9, Ext_13);
  Var_19 = mercury__string__f_43_43_2_f_0(Name_14, Var_20);
  StaticLibName_18 = mercury__string__f_43_43_2_f_0(LibPrefix_17, Var_19);
  Var_23 = mercury__dir__f_slash_2_f_0(StdLibDir_11, (MR_String) "lib");
  Var_22 = mercury__dir__f_slash_2_f_0(Var_23, GradeDir_12);
  Var_21 = mercury__dir__f_slash_2_f_0(Var_22, StaticLibName_18);
  *StaticArg_15 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_21);
  switch (LinkedTargetType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
      {
        MR_String Var_31;
        MR_String Var_32;

        Var_32 = mercury__string__f_43_43_2_f_0(Name_14, (MR_String) ".dll");
        Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "-r:", Var_32);
        *SharedArg_16 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_31);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String LinkLibOpt_27;
        MR_String Suffix_28;
        MR_String Var_29;
        MR_String Var_30;

        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 591, &LinkLibOpt_27);
        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 592, &Suffix_28);
        Var_30 = mercury__string__f_43_43_2_f_0(Name_14, Suffix_28);
        Var_29 = mercury__string__f_43_43_2_f_0(LinkLibOpt_27, Var_30);
        *SharedArg_16 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_29);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String LinkLibOpt_37;
        MR_String Suffix_38;
        MR_String Var_39;
        MR_String Var_40;

        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 605, &LinkLibOpt_37);
        libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 606, &Suffix_38);
        Var_40 = mercury__string__f_43_43_2_f_0(Name_14, Suffix_38);
        Var_39 = mercury__string__f_43_43_2_f_0(LinkLibOpt_37, Var_40);
        *SharedArg_16 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_39);
      }
      break;
  }
}

static void MR_CALL 
backend_libs__link_target_code__get_thread_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word ThreadFlagsOpt_7,
  MR_Word Linkage_8,
  MR_String * ThreadOpts_9,
  MR_String * HwlocOpts_10)
{
  MR_Word UseThreadLibs_11;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 92, &UseThreadLibs_11);
  switch (UseThreadLibs_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ThreadOpts_9 = (MR_String) "";
        *HwlocOpts_10 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HwlocFlagsOpt_12;

        libs__globals__lookup_string_option_3_p_0(Globals_6, ThreadFlagsOpt_7, ThreadOpts_9);
        switch (Linkage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            HwlocFlagsOpt_12 = (MR_Integer) 612;
            break;
          case (MR_Integer) 0:
            HwlocFlagsOpt_12 = (MR_Integer) 613;
            break;
        }
        libs__globals__lookup_string_option_3_p_0(Globals_6, HwlocFlagsOpt_12, HwlocOpts_10);
      }
      break;
  }
}

static void MR_CALL 
backend_libs__link_target_code__get_strip_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkedTargetType_7,
  MR_String * LinkerStripOpt_8,
  MR_String * StripExeCommand_9,
  MR_String * StripExeFlags_10)
{
  MR_bool succeeded;
  MR_Word Strip_11;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 512, &Strip_11);
  succeeded = (LinkedTargetType_7 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Strip_11 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word MercuryLinkage_12;
    MR_Word StripExeFlagsOpt_13;

    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 600, LinkerStripOpt_8);
    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 524, StripExeCommand_9);
    libs__globals__get_mercury_linkage_2_p_0(Globals_6, &MercuryLinkage_12);
    switch (MercuryLinkage_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        StripExeFlagsOpt_13 = (MR_Integer) 525;
        break;
      case (MR_Integer) 0:
        StripExeFlagsOpt_13 = (MR_Integer) 526;
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_6, StripExeFlagsOpt_13, StripExeFlags_10);
  }
  else
  {
    *LinkerStripOpt_8 = (MR_String) "";
    *StripExeCommand_9 = (MR_String) "";
    *StripExeFlags_10 = (MR_String) "";
  }
}

static MR_String MR_CALL 
backend_libs__link_target_code__get_reserve_stack_size_flags_for_c_1_f_0(
  MR_Word Globals_3)
{
  MR_bool succeeded;
  MR_String Flags_4;
  MR_Integer ReserveStackSize_5;

  libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 520, &ReserveStackSize_5);
  succeeded = (ReserveStackSize_5 == (MR_Integer) -1);
  if (succeeded)
    Flags_4 = (MR_String) "";
  else
  {
    MR_Word C_CompilerType_6;

    libs__globals__get_c_compiler_type_2_p_0(Globals_3, &C_CompilerType_6);
    switch (MR_tag((MR_Word) C_CompilerType_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_String Var_22;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__link_target_code_scalar_common_2[2]), ReserveStackSize_5, &Var_22);
          Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", Var_22);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_30;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__link_target_code_scalar_common_2[2]), ReserveStackSize_5, &Var_30);
          Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-stack:", Var_30);
        }
        break;
    }
  }
  return Flags_4;
}

void MR_CALL 
backend_libs__link_target_code__post_link_maybe_make_symlink_or_copy_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_String FullFileName_13,
  MR_String CurDirFileName_14,
  MR_Word ModuleName_15,
  MR_Word LinkedTargetType_16,
  MR_Word * Succeeded_17,
  MR_Word * MadeSymlinkOrCopy_18)
{
  MR_bool succeeded = (strcmp(FullFileName_13, CurDirFileName_14) == 0);

  if (succeeded)
  {
    *Succeeded_17 = (MR_Integer) 1;
    *MadeSymlinkOrCopy_18 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Succeeded0_21;

    succeeded = (strcmp(FullFileName_13, CurDirFileName_14) == 0);
    if (succeeded)
    {
      MR_Word FullTimeResult_38;

      mercury__io__file__file_modification_time_4_p_0(FullFileName_13, &FullTimeResult_38);
      if (((MR_tag((MR_Word) FullTimeResult_38)) == (MR_Integer) 1))
      {
        MR_Word Var_22;

        mercury__io__file__remove_file_recursively_4_p_0(CurDirFileName_14, &Var_22);
        parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_11, ProgressStream_12, FullFileName_13, CurDirFileName_14, &Succeeded0_21);
        *MadeSymlinkOrCopy_18 = (MR_Integer) 1;
      }
      else
      {
        Succeeded0_21 = (MR_Integer) 1;
        *MadeSymlinkOrCopy_18 = (MR_Integer) 0;
      }
    }
    else
    {
      MR_Word MaybeCmp_41;
      MR_Word Var_42;

      libs__file_util__compare_file_timestamps_5_p_0(FullFileName_13, CurDirFileName_14, &MaybeCmp_41);
      succeeded = (MaybeCmp_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(1, MaybeCmp_41, 0))));
        succeeded = (Var_42 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        Succeeded0_21 = (MR_Integer) 1;
        *MadeSymlinkOrCopy_18 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_59;

        mercury__io__file__remove_file_recursively_4_p_0(CurDirFileName_14, &Var_59);
        parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_11, ProgressStream_12, FullFileName_13, CurDirFileName_14, &Succeeded0_21);
        *MadeSymlinkOrCopy_18 = (MR_Integer) 1;
      }
    }
    succeeded = (Succeeded0_21 == (MR_Integer) 1);
    if (succeeded)
      switch (LinkedTargetType_16) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            MR_Word TargetEnvType_23;

            libs__globals__get_target_env_type_2_p_0(Globals_11, &TargetEnvType_23);
            succeeded = (TargetEnvType_23 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 5:
          succeeded = MR_TRUE;
          break;
      }
    if (succeeded)
    {
      MR_Word ScriptExt_24;
      MR_String FullLauncherName_25;
      MR_String CurDirLauncherName_27;
      MR_Word TargetEnvType_43;
      MR_String _FullLauncherNameProposed_26;

      libs__globals__get_target_env_type_2_p_0(Globals_11, &TargetEnvType_43);
      ScriptExt_24 = ((&backend_libs__link_target_code_vector_common_3[0 + TargetEnvType_43]))->backend_libs__link_target_code__vector_common_type_3_0__vct_3_f_0;
      parse_tree__file_names__module_name_to_file_name_full_curdir_7_p_0(Globals_11, (MR_String) "predicate \140backend_libs.link_target_code.post_link_maybe_make_symlink_or_copy\'/10", ScriptExt_24, ModuleName_15, &FullLauncherName_25, &_FullLauncherNameProposed_26, &CurDirLauncherName_27);
      succeeded = (strcmp(FullLauncherName_25, CurDirLauncherName_27) == 0);
      if (succeeded)
      {
        MR_Word FullTimeResult_46;

        mercury__io__file__file_modification_time_4_p_0(FullLauncherName_25, &FullTimeResult_46);
        if (((MR_tag((MR_Word) FullTimeResult_46)) == (MR_Integer) 1))
        {
          MR_Word Var_29;

          mercury__io__file__remove_file_recursively_4_p_0(CurDirLauncherName_27, &Var_29);
          parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_11, ProgressStream_12, FullLauncherName_25, CurDirLauncherName_27, Succeeded_17);
        }
        else
          *Succeeded_17 = (MR_Integer) 1;
      }
      else
      {
        MR_Word MaybeCmp_49;
        MR_Word Var_50;

        libs__file_util__compare_file_timestamps_5_p_0(FullLauncherName_25, CurDirLauncherName_27, &MaybeCmp_49);
        succeeded = (MaybeCmp_49 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_50 = ((MR_Word) ((MR_hl_field(1, MaybeCmp_49, 0))));
          succeeded = (Var_50 == (MR_Integer) 0);
        }
        if (succeeded)
          *Succeeded_17 = (MR_Integer) 1;
        else
        {
          MR_Word Var_67;

          mercury__io__file__remove_file_recursively_4_p_0(CurDirLauncherName_27, &Var_67);
          parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_11, ProgressStream_12, FullLauncherName_25, CurDirLauncherName_27, Succeeded_17);
        }
      }
    }
    else
      *Succeeded_17 = Succeeded0_21;
  }
}

void MR_CALL 
backend_libs__link_target_code__linked_target_file_name_full_curdir_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word LinkedTargetType_10,
  MR_String * FullFileName_11,
  MR_String * CurDirFileName_12)
{
  switch (LinkedTargetType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_String _FullFileNameProposed_15;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_code.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[2])), ModuleName_9, FullFileName_11, &_FullFileNameProposed_15, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_String _FullFileNameProposed_32;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_code.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(2, &backend_libs__link_target_code_scalar_common_2[0])), ModuleName_9, FullFileName_11, &_FullFileNameProposed_32, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String _FullFileNameProposed_36;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_code.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[3])), ModuleName_9, FullFileName_11, &_FullFileNameProposed_36, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 6:
      {
        MR_String _FullFileNameProposed_40;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_code.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(2, &backend_libs__link_target_code_scalar_common_2[1])), ModuleName_9, FullFileName_11, &_FullFileNameProposed_40, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 5:
      {
        MR_String _FullFileNameProposed_44;

        parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_code.linked_target_file_name_full_curdir\'/7", (MR_Word) (MR_mkword(2, &backend_libs__link_target_code_scalar_common_2[1])), ModuleName_9, FullFileName_11, &_FullFileNameProposed_44, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String _FullFileNameProposed_30;

        parse_tree__file_names__module_name_to_lib_file_name_full_curdir_create_dirs_10_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_code.linked_target_file_name_full_curdir\'/7", (MR_String) "lib", (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[4])), ModuleName_9, FullFileName_11, &_FullFileNameProposed_30, CurDirFileName_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String _FullFileNameProposed_48;

        parse_tree__file_names__module_name_to_lib_file_name_full_curdir_create_dirs_10_p_0(Globals_8, (MR_String) "predicate \140backend_libs.link_target_code.linked_target_file_name_full_curdir\'/7", (MR_String) "lib", (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_scalar_common_1[5])), ModuleName_9, FullFileName_11, &_FullFileNameProposed_48, CurDirFileName_12);
      }
      break;
  }
}

void MR_CALL 
backend_libs__link_target_code__get_object_code_type_3_p_0(
  MR_Word Globals_4,
  MR_Word FileType_5,
  MR_Word * PIC_6)
{
  MR_bool succeeded;

  switch (FileType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 6:
    case (MR_Integer) 5:
    case (MR_Integer) 1:
      *PIC_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      backend_libs__compile_target_code__get_executable_object_code_type_2_p_0(Globals_4, PIC_6);
      break;
    case (MR_Integer) 2:
      {
        MR_String PicObjExt_7;
        MR_String ObjExt_8;

        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 471, &PicObjExt_7);
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 470, &ObjExt_8);
        succeeded = (strcmp(PicObjExt_7, ObjExt_8) == 0);
        if (succeeded)
          *PIC_6 = (MR_Integer) 1;
        else
          *PIC_6 = (MR_Integer) 0;
      }
      break;
  }
}

void MR_CALL 
backend_libs__link_target_code__get_linked_target_type_for_c_2_p_0(
  MR_Word Globals_3,
  MR_Word * LinkedTargetType_4)
{
  MR_Word MakeSharedLib_5;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 527, &MakeSharedLib_5);
  switch (MakeSharedLib_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *LinkedTargetType_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *LinkedTargetType_4 = (MR_Integer) 2;
      break;
  }
}

static MR_bool MR_CALL 
backend_libs__link_target_code____Unify____linked_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__link_target_code____Unify____linked_target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code____Compare____linked_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__link_target_code____Compare____linked_target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__link_target_code____Unify____prepare_to_link_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__link_target_code____Unify____prepare_to_link_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code____Compare____prepare_to_link_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__link_target_code____Compare____prepare_to_link_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__link_target_code____Unify____shared_library_support_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__link_target_code____Unify____shared_library_support_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code____Compare____shared_library_support_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__link_target_code____Compare____shared_library_support_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__link_target_code__init(void)
{
}

void mercury__backend_libs__link_target_code__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__link_target_code__backend_libs__link_target_code__type_ctor_info_linked_target_type_0);
  MR_register_type_ctor_info(&backend_libs__link_target_code__backend_libs__link_target_code__type_ctor_info_prepare_to_link_result_0);
  MR_register_type_ctor_info(&backend_libs__link_target_code__backend_libs__link_target_code__type_ctor_info_shared_library_support_0);
}

void mercury__backend_libs__link_target_code__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__link_target_code__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.link_target_code.
