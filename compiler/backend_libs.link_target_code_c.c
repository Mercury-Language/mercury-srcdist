/*
** Automatically generated from `link_target_code_c.m'
** by the Mercury compiler,
** version rotd-2026-08-23
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


// :- module backend_libs.link_target_code_c.
// :- implementation.

/*
INIT mercury__backend_libs__link_target_code_c__init
ENDINIT
*/

#include "backend_libs.link_target_code_c.mih"


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
#include "backend_libs.link_target_util.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.pred_proc_id.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__link_target_code_c__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__link_target_code_c__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo backend_libs__link_target_code_c__backend_libs__link_target_code_c__field_types_prepare_to_link_result_0_0[3];

static const MR_DuFunctorDesc backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_functor_desc_prepare_to_link_result_0_0;

static const MR_DuFunctorDesc backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_functor_desc_prepare_to_link_result_0_1;

static const MR_DuFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_stag_ordered_prepare_to_link_result_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_stag_ordered_prepare_to_link_result_0_1[1];

static const MR_DuPtagLayout backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_ptag_ordered_prepare_to_link_result_0[2];

static const MR_DuFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_name_ordered_prepare_to_link_result_0[2];

static const MR_Integer backend_libs__link_target_code_c__backend_libs__link_target_code_c__functor_number_map_prepare_to_link_result_0[2];

static const MR_EnumFunctorDesc backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_functor_desc_shared_library_support_0_0;

static const MR_EnumFunctorDesc backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_functor_desc_shared_library_support_0_1;

static const MR_EnumFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_ordinal_ordered_shared_library_support_0[2];

static const MR_EnumFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_name_ordered_shared_library_support_0[2];

static const MR_Integer backend_libs__link_target_code_c__backend_libs__link_target_code_c__functor_number_map_shared_library_support_0[2];

static void MR_CALL 
backend_libs__link_target_code_c____Compare____prepare_to_link_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__link_target_code_c____Unify____prepare_to_link_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__link_target_code_c__get_link_opts_for_library_for_c_6_p_0(
  MR_Word Globals_7,
  MR_String LibName_8,
  MR_String * LinkLibOpt_9,
  MR_Word * Specs_10);

static MR_bool MR_CALL 
backend_libs__link_target_code_c__has_object_file_extension_for_c_3_p_0(
  MR_String ObjExt_4,
  MR_String PicObjExt_5,
  MR_String FileName_6);

static void MR_CALL 
backend_libs__link_target_code_c__get_library_link_flags_for_c_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
backend_libs__link_target_code_c__get_library_link_flags_for_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code_c__link_modules_into_executable_or_shared_library_for_c_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__link_target_code_c__get_link_opts_for_libraries_for_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
backend_libs__link_target_code_c__get_link_opts_for_libraries_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word * MaybeLinkLibOpts_7,
  MR_Word * Specs_8);

static MR_Box MR_CALL 
backend_libs__link_target_code_c__get_runtime_library_path_opts_for_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code_c__get_runtime_library_path_opts_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkedTargetType_7,
  MR_Word RpathFlagOpt_8,
  MR_Word RpathSepOpt_9,
  MR_String * RpathOpts_10);

static void MR_CALL 
backend_libs__link_target_code_c__get_mercury_std_libs_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * StdLibs_6);

static void MR_CALL 
backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(
  MR_Word Globals_9,
  MR_Word LinkedTargetType_10,
  MR_String StdLibDir_11,
  MR_String GradeDir_12,
  MR_Word Ext_13,
  MR_String Name_14,
  MR_String * StaticArg_15,
  MR_String * SharedArg_16);

static void MR_CALL 
backend_libs__link_target_code_c__get_system_libs_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * SystemLibs_6);

static MR_bool MR_CALL 
backend_libs__link_target_code_c__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__link_target_code_c__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word ObjectsList_9,
  MR_Word * PrepareResult_10);

static void MR_CALL 
backend_libs__link_target_code_c__get_linker_output_option_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * OutputOpt_6);

static void MR_CALL 
backend_libs__link_target_code_c__get_install_name_opt_for_c_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleName_6,
  MR_Word LinkedTargetType_7,
  MR_String * InstallNameOpt_8);

static void MR_CALL 
backend_libs__link_target_code_c__get_restricted_command_line_link_opts_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * RestrictedCmdLinkOpts_6);

static void MR_CALL 
backend_libs__link_target_code_c__get_thread_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word ThreadFlagsOpt_7,
  MR_Word Linkage_8,
  MR_String * ThreadOpts_9,
  MR_String * HwlocOpts_10);

static void MR_CALL 
backend_libs__link_target_code_c__get_strip_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkedTargetType_7,
  MR_String * LinkerStripOpt_8,
  MR_String * StripExeCommand_9,
  MR_String * StripExeFlags_10);

static MR_String MR_CALL 
backend_libs__link_target_code_c__get_reserve_stack_size_flags_for_c_1_f_0(
  MR_Word Globals_3);

static MR_bool MR_CALL 
backend_libs__link_target_code_c____Unify____prepare_to_link_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__link_target_code_c____Compare____prepare_to_link_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__link_target_code_c____Unify____shared_library_support_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__link_target_code_c____Compare____shared_library_support_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_1[20][2];

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_2[1][1];

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_3[1][6];

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_4[1][5];

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_5[2][3];

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_6[2][9];




static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_1[20][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "-defaultlib:libcmt")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "-entry:wmainCRTStartup")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "-machine:arm64")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "-ignore:4001")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "-machine:x64")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[3])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "-ignore:4001")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "-machine:x86")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[3])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "-ignore:4001")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &backend_libs__link_target_code_c_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[17])))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_3[1][6] = {
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

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_5[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__link_target_code_c_scalar_common_4[0])),
    ((MR_Box) (backend_libs__link_target_code_c__get_runtime_library_path_opts_for_c_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__link_target_code_c_scalar_common_4[0])),
    ((MR_Box) (backend_libs__link_target_code_c__get_library_link_flags_for_c_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__link_target_code_c_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__link_target_code_c__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
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



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__link_target_code_c__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__link_target_code_c__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo backend_libs__link_target_code_c__backend_libs__link_target_code_c__field_types_prepare_to_link_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&backend_libs__link_target_code_c__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&backend_libs__link_target_code_c__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_functor_desc_prepare_to_link_result_0_0 = {
  (MR_String) "prepare_succeeded",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__link_target_code_c__backend_libs__link_target_code_c__field_types_prepare_to_link_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_functor_desc_prepare_to_link_result_0_1 = {
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

static const MR_DuFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_stag_ordered_prepare_to_link_result_0_0[1] = { &backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_functor_desc_prepare_to_link_result_0_1 };

static const MR_DuFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_stag_ordered_prepare_to_link_result_0_1[1] = { &backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_functor_desc_prepare_to_link_result_0_0 };

static const MR_DuPtagLayout backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_ptag_ordered_prepare_to_link_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_stag_ordered_prepare_to_link_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_stag_ordered_prepare_to_link_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_name_ordered_prepare_to_link_result_0[2] = {
  &backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_functor_desc_prepare_to_link_result_0_1,
  &backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_functor_desc_prepare_to_link_result_0_0
};

static const MR_Integer backend_libs__link_target_code_c__backend_libs__link_target_code_c__functor_number_map_prepare_to_link_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__link_target_code_c__backend_libs__link_target_code_c__type_ctor_info_prepare_to_link_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__link_target_code_c____Unify____prepare_to_link_result_0_0_10001)),
  ((MR_Box) (backend_libs__link_target_code_c____Compare____prepare_to_link_result_0_0_10001)),
  (MR_String) "backend_libs.link_target_code_c",
  (MR_String) "prepare_to_link_result",
  { backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_name_ordered_prepare_to_link_result_0 },
  { backend_libs__link_target_code_c__backend_libs__link_target_code_c__du_ptag_ordered_prepare_to_link_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__link_target_code_c__backend_libs__link_target_code_c__functor_number_map_prepare_to_link_result_0,

};

static const MR_EnumFunctorDesc backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_functor_desc_shared_library_support_0_0 = {
  (MR_String) "shared_libraries_not_supported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_functor_desc_shared_library_support_0_1 = {
  (MR_String) "shared_libraries_supported",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_ordinal_ordered_shared_library_support_0[2] = {
  &backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_functor_desc_shared_library_support_0_0,
  &backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_functor_desc_shared_library_support_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_name_ordered_shared_library_support_0[2] = {
  &backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_functor_desc_shared_library_support_0_0,
  &backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_functor_desc_shared_library_support_0_1
};

static const MR_Integer backend_libs__link_target_code_c__backend_libs__link_target_code_c__functor_number_map_shared_library_support_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__link_target_code_c__backend_libs__link_target_code_c__type_ctor_info_shared_library_support_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__link_target_code_c____Unify____shared_library_support_0_0_10001)),
  ((MR_Box) (backend_libs__link_target_code_c____Compare____shared_library_support_0_0_10001)),
  (MR_String) "backend_libs.link_target_code_c",
  (MR_String) "shared_library_support",
  { backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_name_ordered_shared_library_support_0 },
  { backend_libs__link_target_code_c__backend_libs__link_target_code_c__enum_ordinal_ordered_shared_library_support_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__link_target_code_c__backend_libs__link_target_code_c__functor_number_map_shared_library_support_0,

};

void MR_CALL 
backend_libs__link_target_code_c____Compare____shared_library_support_0_0(
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
backend_libs__link_target_code_c____Unify____shared_library_support_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code_c____Compare____prepare_to_link_result_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__link_target_code_c_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__link_target_code_c_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__link_target_code_c____Unify____prepare_to_link_result_0_0(
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
        TypeInfo_13_13 = (MR_Word) (&backend_libs__link_target_code_c_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&backend_libs__link_target_code_c_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code_c__get_link_opts_for_library_for_c_6_p_0(
  MR_Word Globals_7,
  MR_String LibName_8,
  MR_String * LinkLibOpt_9,
  MR_Word * Specs_10)
{
  MR_bool succeeded;
  MR_Word MercuryLinkage_12;
  MR_Word CCompilerType_13;
  MR_String LinkOpt_18;
  MR_String LibSuffix_19;
  MR_Word MercuryLibs_23;
  MR_Word TypeCtorInfo_57_57;

  libs__globals__get_mercury_linkage_2_p_0(Globals_7, &MercuryLinkage_12);
  libs__globals__get_c_compiler_type_2_p_0(Globals_7, &CCompilerType_13);
  switch (MR_tag((MR_Word) CCompilerType_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        LinkOpt_18 = (MR_String) "-l";
        LibSuffix_19 = (MR_String) "";
      }
      break;
    case (MR_Integer) 3:
      {
        LinkOpt_18 = (MR_String) "";
        LibSuffix_19 = (MR_String) ".lib";
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 516, &MercuryLibs_23);
  succeeded = (MercuryLinkage_12 == (MR_Integer) 0);
  if (succeeded)
  {
    TypeCtorInfo_57_57 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    succeeded = mercury__list__member_2_p_0(TypeCtorInfo_57_57, ((MR_Box) (LibName_8)), MercuryLibs_23);
  }
  if (succeeded)
  {
    MR_Word LibModuleName_24;
    MR_String LibFileName_27;
    MR_Word SearchAuthDirs_28;
    MR_Word MaybeDirName_30;
    MR_String _FullLibFileName_25;
    MR_String _FullLibFileNameProposed_26;
    MR_Word _SearchDirs_29;

    parse_tree__file_names__file_name_to_module_name_2_p_0(LibName_8, &LibModuleName_24);
    parse_tree__file_names__module_name_to_lib_file_name_full_curdir_8_p_0(Globals_7, (MR_String) "predicate \140backend_libs.link_target_code_c.get_link_opts_for_library_for_c\'/6", (MR_String) "lib", (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_c_scalar_common_1[16])), LibModuleName_24, &_FullLibFileName_25, &_FullLibFileNameProposed_26, &LibFileName_27);
    SearchAuthDirs_28 = parse_tree__find_module__get_search_auth_lib_dirs_2_f_0(Globals_7);
    parse_tree__find_module__search_for_file_returning_dir_6_p_0(SearchAuthDirs_28, LibFileName_27, &_SearchDirs_29, &MaybeDirName_30);
    if (((MR_tag((MR_Word) MaybeDirName_30)) == (MR_Integer) 1))
    {
      MR_String Error_32 = ((MR_String) ((MR_hl_field(1, MaybeDirName_30, 0))));
      MR_Word Pieces_33;
      MR_Word Spec_34;
      MR_Word Var_44;
      MR_Word Var_53;

      *LinkLibOpt_9 = (MR_String) "";
      {
        Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_44, 1) = ((MR_Box) (Error_32));
      }
      {
        Pieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_33, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Pieces_33, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[19])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (LibFileName_27));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140backend_libs.link_target_code_c.get_link_opts_for_library_for_c\'/6"));
        MR_hl_field(1, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_34, 2) = ((MR_Box) (Var_53));
        MR_hl_field(1, Spec_34, 3) = ((MR_Box) (Pieces_33));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_34));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String DirName_31 = ((MR_String) ((MR_hl_field(0, MaybeDirName_30, 0))));

      *LinkLibOpt_9 = mercury__dir__f_slash_2_f_0(DirName_31, LibFileName_27);
      *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
  {
    MR_String Var_56;

    *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
    Var_56 = mercury__string__f_43_43_2_f_0(LibName_8, LibSuffix_19);
    *LinkLibOpt_9 = mercury__string__f_43_43_2_f_0(LinkOpt_18, Var_56);
  }
}

static MR_bool MR_CALL 
backend_libs__link_target_code_c__has_object_file_extension_for_c_3_p_0(
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

void MR_CALL 
backend_libs__link_target_code_c__get_object_code_type_3_p_0(
  MR_Word Globals_4,
  MR_Word FileType_5,
  MR_Word * PIC_6)
{
  MR_bool succeeded;

  switch (FileType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__get_executable_object_code_type_2_p_0(Globals_4, PIC_6);
      break;
    case (MR_Integer) 2:
      {
        MR_String PicObjExt_7;
        MR_String ObjExt_8;

        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 497, &PicObjExt_7);
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 496, &ObjExt_8);
        succeeded = (strcmp(PicObjExt_7, ObjExt_8) == 0);
        if (succeeded)
          *PIC_6 = (MR_Integer) 1;
        else
          *PIC_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 6:
    case (MR_Integer) 5:
      *PIC_6 = (MR_Integer) 1;
      break;
  }
}

void MR_CALL 
backend_libs__link_target_code_c__get_linked_target_type_for_c_2_p_0(
  MR_Word Globals_3,
  MR_Word * LinkedTargetType_4)
{
  MR_Word MakeSharedLib_5;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 553, &MakeSharedLib_5);
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

static void MR_CALL 
backend_libs__link_target_code_c__get_library_link_flags_for_c_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv2_LinkLibOpt_9;
  MR_Word conv1_Specs_10;

  backend_libs__link_target_code_c__get_link_opts_for_library_for_c_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LinkLibOpt_9, &conv1_Specs_10);
  *wrapper_arg_2 = ((MR_Box) (conv2_LinkLibOpt_9));
  *wrapper_arg_3 = ((MR_Box) (conv1_Specs_10));
}

static MR_Box MR_CALL 
backend_libs__link_target_code_c__get_library_link_flags_for_c_5_p_0_1(
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
backend_libs__link_target_code_c__get_library_link_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word * Specs_7,
  MR_String * LinkFlagsStr_8)
{
  MR_bool succeeded;
  MR_Word LinkLibraryDirectoriesList_13;
  MR_String LinkerPathFlag_14;
  MR_String LinkLibraryDirectories_15;
  MR_String RpathOpts_16;
  MR_String LinkLibraries_19;
  MR_String MercuryStdLibs_20;
  MR_String SystemLibs_21;
  MR_String Var_45;
  MR_String Var_47;
  MR_String Var_48;
  MR_String Var_50;
  MR_String Var_51;
  MR_String Var_53;
  MR_String Var_54;
  MR_String Var_56;
  MR_Word UseInstallName_57;
  MR_Word SharedLibsSupported_58;
  MR_Word Linkage_59;
  MR_Word LinkLibraries_69;
  MR_Word LinkLibOpts_70;
  MR_Word SpecsList_71;
  MR_Word Var_73;
  MR_Word TraceLevel_78;
  MR_Word TraceEnabled_79;
  MR_String SystemTraceLibs_80;
  MR_Word UseThreadLibs_84;
  MR_String ThreadLibs_85;
  MR_String OtherSystemLibs_86;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Box conv3_STATE_VARIABLE_IO_23;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 519, &LinkLibraryDirectoriesList_13);
  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 621, &LinkerPathFlag_14);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_13, LinkerPathFlag_14, (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 637, &UseInstallName_57);
  backend_libs__link_target_code_c__are_shared_libraries_supported_2_p_0(Globals_6, &SharedLibsSupported_58);
  libs__globals__get_linkage_2_p_0(Globals_6, &Linkage_59);
  succeeded = (UseInstallName_57 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (SharedLibsSupported_58 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Linkage_59 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word RpathDirs0_60;
    MR_Word RpathDirs_61;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 528, &RpathDirs0_60);
    RpathDirs_61 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_c_scalar_common_5[1]), RpathDirs0_60);
    if ((RpathDirs_61 == (MR_Word) ((MR_Unsigned) 0U)))
      RpathOpts_16 = (MR_String) "";
    else
    {
      MR_String RpathSep_62;
      MR_String RpathFlag_63;
      MR_String RpathOpts0_64;

      libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 623, &RpathSep_62);
      libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 622, &RpathFlag_63);
      RpathOpts0_64 = mercury__string__join_list_2_f_0(RpathSep_62, RpathDirs_61);
      RpathOpts_16 = mercury__string__f_43_43_2_f_0(RpathFlag_63, RpathOpts0_64);
    }
  }
  else
    RpathOpts_16 = (MR_String) "";
  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 520, &LinkLibraries_69);
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&backend_libs__link_target_code_c_scalar_common_6[0]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (backend_libs__link_target_code_c__get_library_link_flags_for_c_5_p_0_2));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (Globals_6));
  }
  mercury__list__map2_foldl_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_c_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, LinkLibraries_69, &LinkLibOpts_70, &SpecsList_71, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_23);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), SpecsList_71, Specs_7);
  if ((*Specs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    backend_libs__compile_target_code__join_string_list_5_p_0(LinkLibOpts_70, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_19);
  else
    LinkLibraries_19 = (MR_String) "";
  backend_libs__link_target_code_c__get_mercury_std_libs_for_c_3_p_0(Globals_6, (MR_Integer) 0, &MercuryStdLibs_20);
  libs__globals__get_trace_level_2_p_0(Globals_6, &TraceLevel_78);
  TraceEnabled_79 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_78);
  switch (TraceEnabled_79) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SystemTraceLibs0_81;
        MR_Word UseReadline_82;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 644, &SystemTraceLibs0_81);
        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 541, &UseReadline_82);
        switch (UseReadline_82) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            SystemTraceLibs_80 = SystemTraceLibs0_81;
            break;
          case (MR_Integer) 1:
            {
              MR_String ReadlineLibs_83;
              MR_String Var_90;

              libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 641, &ReadlineLibs_83);
              Var_90 = mercury__string__f_43_43_2_f_0((MR_String) " ", ReadlineLibs_83);
              SystemTraceLibs_80 = mercury__string__f_43_43_2_f_0(SystemTraceLibs0_81, Var_90);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      SystemTraceLibs_80 = (MR_String) "";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 92, &UseThreadLibs_84);
  switch (UseThreadLibs_84) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ThreadLibs_85 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 643, &ThreadLibs_85);
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 640, &OtherSystemLibs_86);
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (ThreadLibs_85));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (OtherSystemLibs_86));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_98));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (SystemTraceLibs_80));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
  }
  SystemLibs_21 = mercury__string__join_list_2_f_0((MR_String) " ", Var_96);
  Var_45 = mercury__string__f_43_43_2_f_0(SystemLibs_21, (MR_String) "\n");
  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_45);
  Var_48 = mercury__string__f_43_43_2_f_0(MercuryStdLibs_20, Var_47);
  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_48);
  Var_51 = mercury__string__f_43_43_2_f_0(LinkLibraries_19, Var_50);
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_51);
  Var_54 = mercury__string__f_43_43_2_f_0(RpathOpts_16, Var_53);
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_54);
  *LinkFlagsStr_8 = mercury__string__f_43_43_2_f_0(LinkLibraryDirectories_15, Var_56);
}

static void MR_CALL 
backend_libs__link_target_code_c__link_modules_into_executable_or_shared_library_for_c_8_p_0_1(
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
backend_libs__link_target_code_c__link_modules_into_executable_or_shared_library_for_c_8_p_0(
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
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word MakeSharedLib_54;
  MR_Word Var_21;
  MR_Word _ModuleObjectFileNamesProposed_23;

  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 522, &OutputFileName_16);
  succeeded = (strcmp(OutputFileName_16, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Box conv0_MainModuleName_17;

    mercury__list__det_head_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNames_11, &conv0_MainModuleName_17);
    MainModuleName_17 = ((MR_Word) (conv0_MainModuleName_17));
  }
  else
    parse_tree__file_names__file_name_to_module_name_2_p_0(OutputFileName_16, &MainModuleName_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 553, &MakeSharedLib_54);
  switch (MakeSharedLib_54) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        LinkedTargetType_18 = (MR_Integer) 0;
        backend_libs__compile_target_code__get_executable_object_code_type_2_p_0(Globals_10, &PIC_19);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String PicObjExt_60;
        MR_String ObjExt_61;

        LinkedTargetType_18 = (MR_Integer) 2;
        libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 497, &PicObjExt_60);
        libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 496, &ObjExt_61);
        succeeded = (strcmp(PicObjExt_60, ObjExt_61) == 0);
        if (succeeded)
          PIC_19 = (MR_Integer) 1;
        else
          PIC_19 = (MR_Integer) 0;
      }
      break;
  }
  backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_19, &ObjExt_20, &Var_21);
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_40, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_20));
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&backend_libs__link_target_code_c_scalar_common_6[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (backend_libs__link_target_code_c__link_modules_into_executable_or_shared_library_for_c_8_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) ((MR_String) "predicate \140backend_libs.link_target_code_c.link_modules_into_executable_or_shared_library_for_c\'/8"));
    MR_hl_field(0, Var_38, 5) = ((MR_Box) (Var_40));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, ModuleNames_11, &ModuleObjectFileNames_22, &_ModuleObjectFileNamesProposed_23);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 523, &ExtraLinkFileNames_24);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraLinkFileNames_24, ExtraObjFileNames_12);
  AllNonInitObjectFileNames_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleObjectFileNames_22, Var_42);
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
          MR_Word FilesToLink_31;
          MR_String FullOutputFileName_32;
          MR_String CurDirOutputFileName_33;
          MR_Word LinkSucceeded_34;

          {
            FilesToLink_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FilesToLink_31, 0) = ((MR_Box) (InitObjFileName_28));
            MR_hl_field(1, FilesToLink_31, 1) = ((MR_Box) (AllNonInitObjectFileNames_25));
          }
          backend_libs__link_target_util__pre_link_msg_4_p_0(ProgressStream_9, Globals_10);
          backend_libs__link_target_util__linked_target_file_name_full_curdir_7_p_0(Globals_10, MainModuleName_17, LinkedTargetType_18, &FullOutputFileName_32, &CurDirOutputFileName_33);
          backend_libs__link_target_code_c__create_exe_or_shared_lib_for_c_10_p_0(ProgressStream_9, Globals_10, LinkedTargetType_18, MainModuleName_17, FullOutputFileName_32, FilesToLink_31, Specs_13, &LinkSucceeded_34);
          backend_libs__link_target_util__post_link_msg_4_p_0(ProgressStream_9, Globals_10);
          backend_libs__link_target_util__post_link_maybe_make_symlink_10_p_0(ProgressStream_9, Globals_10, LinkedTargetType_18, MainModuleName_17, FullOutputFileName_32, CurDirOutputFileName_33, LinkSucceeded_34, Succeeded_14);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String FullOutputFileName_67;
        MR_String CurDirOutputFileName_68;
        MR_Word LinkSucceeded_69;

        backend_libs__link_target_util__pre_link_msg_4_p_0(ProgressStream_9, Globals_10);
        backend_libs__link_target_util__linked_target_file_name_full_curdir_7_p_0(Globals_10, MainModuleName_17, LinkedTargetType_18, &FullOutputFileName_67, &CurDirOutputFileName_68);
        backend_libs__link_target_code_c__create_exe_or_shared_lib_for_c_10_p_0(ProgressStream_9, Globals_10, LinkedTargetType_18, MainModuleName_17, FullOutputFileName_67, AllNonInitObjectFileNames_25, Specs_13, &LinkSucceeded_69);
        backend_libs__link_target_util__post_link_msg_4_p_0(ProgressStream_9, Globals_10);
        backend_libs__link_target_util__post_link_maybe_make_symlink_10_p_0(ProgressStream_9, Globals_10, LinkedTargetType_18, MainModuleName_17, FullOutputFileName_67, CurDirOutputFileName_68, LinkSucceeded_69, Succeeded_14);
      }
      break;
  }
}

void MR_CALL 
backend_libs__link_target_code_c__create_exe_or_shared_lib_for_c_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
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
        CommandOpt_20 = (MR_Integer) 547;
        RpathFlagOpt_21 = (MR_Integer) 622;
        RpathSepOpt_22 = (MR_Integer) 623;
        LDFlagsOpt_23 = (MR_Integer) 524;
        ThreadFlagsOpt_24 = (MR_Integer) 627;
        DebugFlagsOpt_25 = (MR_Integer) 615;
        TraceFlagsOpt_26 = (MR_Integer) 628;
        UndefOpt_28 = (MR_String) "";
        ReserveStackSizeOpt_29 = backend_libs__link_target_code_c__get_reserve_stack_size_flags_for_c_1_f_0(Globals_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word AllowUndef_27;

        CommandOpt_20 = (MR_Integer) 548;
        RpathFlagOpt_21 = (MR_Integer) 633;
        RpathSepOpt_22 = (MR_Integer) 634;
        LDFlagsOpt_23 = (MR_Integer) 526;
        ThreadFlagsOpt_24 = (MR_Integer) 635;
        DebugFlagsOpt_25 = (MR_Integer) 629;
        TraceFlagsOpt_26 = (MR_Integer) 636;
        libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 540, &AllowUndef_27);
        switch (AllowUndef_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 616, &UndefOpt_28);
            break;
          case (MR_Integer) 1:
            libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 614, &UndefOpt_28);
            break;
        }
        ReserveStackSizeOpt_29 = (MR_String) "";
      }
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 619, &LTOOpts_30);
  backend_libs__link_target_code_c__get_strip_flags_for_c_5_p_0(Globals_12, LinkedTargetType_13, &LinkerStripOpt_31, &StripExeCommand_32, &StripExeFlags_33);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 472, &TargetDebug_34);
  switch (TargetDebug_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DebugOpts_35 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_12, DebugFlagsOpt_25, &DebugOpts_35);
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 624, &SanitizerOpts_36);
  libs__globals__get_linkage_2_p_0(Globals_12, &Linkage_37);
  succeeded = (LinkedTargetType_13 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Linkage_37 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 625, &StaticOpts_38);
  else
    StaticOpts_38 = (MR_String) "";
  backend_libs__link_target_code_c__get_thread_flags_for_c_5_p_0(Globals_12, ThreadFlagsOpt_24, Linkage_37, &ThreadOpts_39, &HwlocOpts_40);
  backend_libs__link_target_code_c__get_mercury_std_libs_for_c_3_p_0(Globals_12, LinkedTargetType_13, &MercuryStdLibs_41);
  backend_libs__link_target_code_c__get_system_libs_for_c_3_p_0(Globals_12, LinkedTargetType_13, &SystemLibs_42);
  backend_libs__link_target_code_c__get_restricted_command_line_link_opts_for_c_3_p_0(Globals_12, LinkedTargetType_13, &RestrictedCmdLinkOpts_43);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_12, LDFlagsOpt_23, &LDFlagsList_44);
  backend_libs__compile_target_code__join_string_list_5_p_0(LDFlagsList_44, (MR_String) "", (MR_String) "", (MR_String) " ", &LDFlags_45);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 519, &LinkLibraryDirectoriesList_46);
  libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 621, &LinkerPathFlag_47);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_46, LinkerPathFlag_47, (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_48);
  backend_libs__link_target_code_c__get_runtime_library_path_opts_for_c_5_p_0(Globals_12, LinkedTargetType_13, RpathFlagOpt_21, RpathSepOpt_22, &RpathOpts_49);
  backend_libs__compile_target_code__get_framework_directories_flags_2_p_0(Globals_12, &FrameworkDirectoriesOpts_50);
  backend_libs__link_target_code_c__get_install_name_opt_for_c_4_p_0(Globals_12, ModuleName_14, LinkedTargetType_13, &InstallNameOpt_51);
  libs__globals__get_trace_level_2_p_0(Globals_12, &TraceLevel_52);
  TraceEnabled_53 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_52);
  switch (TraceEnabled_53) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_12, TraceFlagsOpt_26, &TraceOpts_54);
      break;
    case (MR_Integer) 0:
      TraceOpts_54 = (MR_String) "";
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 544, &Frameworks_55);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(Frameworks_55, (MR_String) "-framework ", (MR_String) "", (MR_String) " ", &FrameworkOpts_56);
  backend_libs__link_target_code_c__get_link_opts_for_libraries_for_c_5_p_0(Globals_12, &MaybeLinkLibraries_57, Specs_17);
  if ((MaybeLinkLibraries_57 == (MR_Word) ((MR_Unsigned) 0U)))
    *Succeeded_18 = (MR_Integer) 0;
  else
  {
    MR_Word LinkLibrariesList_58 = ((MR_Word) ((MR_hl_field(1, MaybeLinkLibraries_57, 0))));
    MR_String LinkLibraries_59;
    MR_Word PrepareResult_60;

    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibrariesList_58, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_59);
    backend_libs__link_target_code_c__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0(ProgressStream_11, Globals_12, ObjectsList_16, &PrepareResult_60);
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

      libs__globals__lookup_string_option_3_p_0(Globals_12, CommandOpt_20, &Command_64);
      backend_libs__link_target_code_c__get_linker_output_option_for_c_3_p_0(Globals_12, LinkedTargetType_13, &OutputOpt_65);
      libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 620, &LinkOptSep_66);
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
      libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(Globals_12, ProgressStream_11, ProgressStream_11, (MR_Integer) 1, LinkCmd_67, MaybeDemangleCmd_62, &LinkSucceeded_68);
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
        libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(Globals_12, ProgressStream_11, ProgressStream_11, (MR_Integer) 1, StripCmd_69, (MR_Word) ((MR_Unsigned) 0U), Succeeded_18);
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
backend_libs__link_target_code_c__get_link_opts_for_libraries_for_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv1_LinkLibOpt_9;
  MR_Word conv0_Specs_10;

  backend_libs__link_target_code_c__get_link_opts_for_library_for_c_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv1_LinkLibOpt_9, &conv0_Specs_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_LinkLibOpt_9));
  *wrapper_arg_3 = ((MR_Box) (conv0_Specs_10));
}

static void MR_CALL 
backend_libs__link_target_code_c__get_link_opts_for_libraries_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word * MaybeLinkLibOpts_7,
  MR_Word * Specs_8)
{
  MR_Word LinkLibraries_10;
  MR_Word LinkLibOpts_11;
  MR_Word SpecsList_12;
  MR_Word Var_18;
  MR_Box conv2_STATE_VARIABLE_IO_16;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 520, &LinkLibraries_10);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&backend_libs__link_target_code_c_scalar_common_6[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (backend_libs__link_target_code_c__get_link_opts_for_libraries_for_c_5_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Globals_6));
  }
  mercury__list__map2_foldl_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_c_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, LinkLibraries_10, &LinkLibOpts_11, &SpecsList_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_16);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), SpecsList_12, Specs_8);
  if ((*Specs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeLinkLibOpts_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LinkLibOpts_11));
    }
  else
    *MaybeLinkLibOpts_7 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Box MR_CALL 
backend_libs__link_target_code_c__get_runtime_library_path_opts_for_c_5_p_0_1(
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
backend_libs__link_target_code_c__get_runtime_library_path_opts_for_c_5_p_0(
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

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 637, &UseInstallName_11);
  backend_libs__link_target_code_c__are_shared_libraries_supported_2_p_0(Globals_6, &SharedLibsSupported_12);
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 528, &RpathDirs0_14);
    RpathDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__link_target_code_c_scalar_common_5[0]), RpathDirs0_14);
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
backend_libs__link_target_code_c__are_shared_libraries_supported_2_p_0(
  MR_Word Globals_3,
  MR_Word * Supported_4)
{
  MR_bool succeeded;
  MR_String LibExt_5;
  MR_String SharedLibExt_6;

  libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 604, &LibExt_5);
  libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 605, &SharedLibExt_6);
  succeeded = (strcmp(LibExt_5, SharedLibExt_6) == 0);
  if (succeeded)
    *Supported_4 = (MR_Integer) 0;
  else
    *Supported_4 = (MR_Integer) 1;
}

static void MR_CALL 
backend_libs__link_target_code_c__get_mercury_std_libs_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * StdLibs_6)
{
  MR_bool succeeded;
  MR_Word MaybeStdLibDir_7;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_4, (MR_Integer) 518, &MaybeStdLibDir_7);
  if ((MaybeStdLibDir_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *StdLibs_6 = (MR_String) "";
  else
  {
    MR_String StdLibDir_8 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_7, 0))));
    MR_Word GCMethod_9;
    MR_String GradeDir_10;
    MR_Word LibExt_11;
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
    MR_Word MercuryLinkage_47;

    libs__globals__get_gc_method_2_p_0(Globals_4, &GCMethod_9);
    libs__globals__get_grade_dir_2_p_0(Globals_4, &GradeDir_10);
    LibExt_11 = (MR_Word) (MR_mkword(3, &backend_libs__link_target_code_c_scalar_common_1[16]));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.link_target_code_c.get_mercury_std_libs_for_c\'/3", (MR_String) "gc_automatic");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetDebugGrade_15;
          MR_String GCGrade1_16;
          MR_Word ProfTime_17;
          MR_Word ProfDeep_18;
          MR_String GCGrade2_19;
          MR_Word Parallel_20;
          MR_String GCGrade_21;

          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 56, &TargetDebugGrade_15);
          switch (TargetDebugGrade_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              GCGrade1_16 = (MR_String) "gc";
              break;
            case (MR_Integer) 1:
              GCGrade1_16 = mercury__string__f_43_43_2_f_0((MR_String) "gc", (MR_String) "_target_debug");
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
          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, (MR_String) "", LibExt_11, GCGrade_21, &StaticGCLibs_12, &SharedGCLibs_13);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TargetDebugGrade_113;
          MR_String GCGrade1_114;
          MR_Word ProfTime_115;
          MR_Word ProfDeep_116;
          MR_String GCGrade2_117;
          MR_Word Parallel_118;
          MR_String GCGrade_119;

          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 56, &TargetDebugGrade_113);
          switch (TargetDebugGrade_113) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              GCGrade1_114 = (MR_String) "gc_debug";
              break;
            case (MR_Integer) 1:
              GCGrade1_114 = mercury__string__f_43_43_2_f_0((MR_String) "gc_debug", (MR_String) "_target_debug");
              break;
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 64, &ProfTime_115);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 67, &ProfDeep_116);
          succeeded = (ProfTime_115 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ProfDeep_116 == (MR_Integer) 1);
          if (succeeded)
            GCGrade2_117 = mercury__string__f_43_43_2_f_0(GCGrade1_114, (MR_String) "_prof");
          else
            GCGrade2_117 = GCGrade1_114;
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 92, &Parallel_118);
          switch (Parallel_118) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              GCGrade_119 = GCGrade2_117;
              break;
            case (MR_Integer) 1:
              GCGrade_119 = mercury__string__f_43_43_2_f_0((MR_String) "par_", GCGrade2_117);
              break;
          }
          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, (MR_String) "", LibExt_11, GCGrade_119, &StaticGCLibs_12, &SharedGCLibs_13);
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
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;

          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_trace", &StaticTraceLib_26, &TraceLib_27);
          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_eventspec", &StaticEventSpecLib_28, &EventSpecLib_29);
          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_browser", &StaticBrowserLib_30, &BrowserLib_31);
          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_mdbcomp", &StaticMdbCompLib_32, &MdbCompLib_33);
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (StaticMdbCompLib_32));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (StaticBrowserLib_30));
            MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (StaticEventSpecLib_28));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (StaticTraceLib_26));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
          }
          StaticTraceLibs_24 = mercury__string__join_list_2_f_0((MR_String) " ", Var_65);
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (MdbCompLib_33));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (BrowserLib_31));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
          }
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (EventSpecLib_29));
            MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (TraceLib_27));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
          }
          SharedTraceLibs_25 = mercury__string__join_list_2_f_0((MR_String) " ", Var_71);
        }
        break;
      case (MR_Integer) 0:
        {
          StaticTraceLibs_24 = (MR_String) "";
          SharedTraceLibs_25 = (MR_String) "";
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 521, &SourceDebug_34);
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
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;

          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_ssdb", &StaticSsdbLib_35, &SsdbLib_36);
          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_browser", &StaticBrowserLib2_37, &BrowserLib2_38);
          backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_mdbcomp", &StaticMdbCompLib2_39, &MdbCompLib2_40);
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (StaticMdbCompLib2_39));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_82, 0) = ((MR_Box) (StaticBrowserLib2_37));
            MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_81, 0) = ((MR_Box) (StaticSsdbLib_35));
            MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
          }
          StaticSourceDebugLibs_41 = mercury__string__join_list_2_f_0((MR_String) " ", Var_81);
          {
            Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_88, 0) = ((MR_Box) (MdbCompLib2_40));
            MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_87, 0) = ((MR_Box) (BrowserLib2_38));
            MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (SsdbLib_36));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
          }
          SharedSourceDebugLibs_42 = mercury__string__join_list_2_f_0((MR_String) " ", Var_86);
        }
        break;
    }
    backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_std", &StaticStdLib_43, &StdLib_44);
    backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(Globals_4, LinkedTargetType_5, StdLibDir_8, GradeDir_10, LibExt_11, (MR_String) "mer_rt", &StaticRuntimeLib_45, &RuntimeLib_46);
    libs__globals__get_mercury_linkage_2_p_0(Globals_4, &MercuryLinkage_47);
    switch (MercuryLinkage_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;

          {
            Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_104, 0) = ((MR_Box) (SharedGCLibs_13));
            MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_103, 0) = ((MR_Box) (RuntimeLib_46));
            MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_104));
          }
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (StdLib_44));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
          }
          {
            Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_101, 0) = ((MR_Box) (SharedSourceDebugLibs_42));
            MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
          }
          {
            Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_100, 0) = ((MR_Box) (SharedTraceLibs_25));
            MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
          }
          *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_100);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_97;

          {
            Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_97, 0) = ((MR_Box) (StaticGCLibs_12));
            MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_96, 0) = ((MR_Box) (StaticRuntimeLib_45));
            MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
          }
          {
            Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_95, 0) = ((MR_Box) (StaticStdLib_43));
            MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_94, 0) = ((MR_Box) (StaticSourceDebugLibs_41));
            MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
          }
          {
            Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_93, 0) = ((MR_Box) (StaticTraceLibs_24));
            MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
          }
          *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_93);
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__link_target_code_c__link_lib_args_for_c_8_p_0(
  MR_Word Globals_9,
  MR_Word LinkedTargetType_10,
  MR_String StdLibDir_11,
  MR_String GradeDir_12,
  MR_Word Ext_13,
  MR_String Name_14,
  MR_String * StaticArg_15,
  MR_String * SharedArg_16)
{
  MR_String StaticLibName_17;
  MR_String Var_19;
  MR_String Var_20;
  MR_String Var_21;
  MR_String Var_22;
  MR_String Var_23;
  MR_Word LinkLibFlag_25;
  MR_Word LinkLibSuffix_26;
  MR_String LinkLibOpt_27;
  MR_String Suffix_28;
  MR_String Var_29;
  MR_String Var_30;

  Var_20 = parse_tree__file_names__extension_to_string_2_f_0(Globals_9, Ext_13);
  Var_19 = mercury__string__f_43_43_2_f_0(Name_14, Var_20);
  StaticLibName_17 = mercury__string__f_43_43_2_f_0((MR_String) "lib", Var_19);
  Var_23 = mercury__dir__f_slash_2_f_0(StdLibDir_11, (MR_String) "lib");
  Var_22 = mercury__dir__f_slash_2_f_0(Var_23, GradeDir_12);
  Var_21 = mercury__dir__f_slash_2_f_0(Var_22, StaticLibName_17);
  *StaticArg_15 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_21);
  switch (LinkedTargetType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        LinkLibFlag_25 = (MR_Integer) 617;
        LinkLibSuffix_26 = (MR_Integer) 618;
      }
      break;
    case (MR_Integer) 2:
      {
        LinkLibFlag_25 = (MR_Integer) 631;
        LinkLibSuffix_26 = (MR_Integer) 632;
      }
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_9, LinkLibFlag_25, &LinkLibOpt_27);
  libs__globals__lookup_string_option_3_p_0(Globals_9, LinkLibSuffix_26, &Suffix_28);
  Var_30 = mercury__string__f_43_43_2_f_0(Name_14, Suffix_28);
  Var_29 = mercury__string__f_43_43_2_f_0(LinkLibOpt_27, Var_30);
  *SharedArg_16 = libs__shell_util__quote_shell_cmd_arg_1_f_0(Var_29);
}

static void MR_CALL 
backend_libs__link_target_code_c__get_system_libs_for_c_3_p_0(
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

        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 644, &SystemTraceLibs0_10);
        libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 541, &UseReadline_11);
        switch (UseReadline_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            SystemTraceLibs_9 = SystemTraceLibs0_10;
            break;
          case (MR_Integer) 1:
            {
              MR_String ReadlineLibs_12;
              MR_String Var_19;

              libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 641, &ReadlineLibs_12);
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
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 643, &ThreadLibs_14);
      break;
  }
  switch (LinkedTargetType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 640, &OtherSystemLibs_15);
      break;
    case (MR_Integer) 2:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 642, &OtherSystemLibs_15);
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

static MR_bool MR_CALL 
backend_libs__link_target_code_c__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__link_target_code_c__has_object_file_extension_for_c_3_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code_c__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word ObjectsList_9,
  MR_Word * PrepareResult_10)
{
  MR_bool succeeded;
  MR_Word Demangle_12;
  MR_Word MaybeDemangleCmd_14;
  MR_Word RestrictedCommandLine_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 537, &Demangle_12);
  switch (Demangle_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeDemangleCmd_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String DemangleCmd_13;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 611, &DemangleCmd_13);
        {
          MaybeDemangleCmd_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDemangleCmd_14, 0) = ((MR_Box) (DemangleCmd_13));
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 593, &RestrictedCommandLine_15);
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

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 604, &LibExt_16);
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

          libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 496, &ObjExt_60);
          libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 497, &PicObjExt_61);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) (&backend_libs__link_target_code_c_scalar_common_3[0]));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) (backend_libs__link_target_code_c__prepare_for_link_exe_or_shared_lib_cmd_for_c_6_p_0_1));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_64, 3) = ((MR_Box) (ObjExt_60));
            MR_hl_field(0, Var_64, 4) = ((MR_Box) (PicObjExt_61));
          }
          mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, ObjectsList_9, &ProperObjectFiles_20, &NonObjectFiles_21);
          mercury__io__file__remove_file_4_p_0(TmpArchive_19, &Var_22);
          backend_libs__link_target_code_c__create_static_lib_for_c_8_p_0(ProgressStream_7, Globals_8, TmpArchive_19, (MR_Integer) 1, ProperObjectFiles_20, &ArchiveSucceeded_23);
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

void MR_CALL 
backend_libs__link_target_code_c__create_static_lib_for_c_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
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
  MR_String ArOutputSpace_26;
  MR_String MakeLibCmdArgs_31;
  MR_Word MakeLibCmdSucceeded_32;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;

  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 606, &ArCmd_16);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 607, &ArFlagsList_17);
  backend_libs__compile_target_code__join_string_list_5_p_0(ArFlagsList_17, (MR_String) "", (MR_String) "", (MR_String) " ", &ArFlags_18);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 608, &ArOutputFlag_19);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 609, &RanLib_20);
  switch (Quote_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__join_string_list_5_p_0(ObjectList_13, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_21);
      break;
    case (MR_Integer) 1:
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(ObjectList_13, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_21);
      break;
  }
  libs__globals__get_c_compiler_type_2_p_0(Globals_10, &C_CompilerType_22);
  switch (MR_tag((MR_Word) C_CompilerType_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ArOutputSpace_26 = (MR_String) " ";
      break;
    case (MR_Integer) 3:
      ArOutputSpace_26 = (MR_String) "";
      break;
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Objects_21));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (FullLibFileName_11));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (ArOutputSpace_26));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (ArOutputFlag_19));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (ArFlags_18));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
  }
  MakeLibCmdArgs_31 = mercury__string__append_list_1_f_0(Var_49);
  libs__system_cmds__invoke_long_system_command_9_p_0(Globals_10, ProgressStream_9, ProgressStream_9, (MR_Integer) 1, ArCmd_16, MakeLibCmdArgs_31, &MakeLibCmdSucceeded_32);
  succeeded = (strcmp(RanLib_20, (MR_String) "") == 0);
  if (!(succeeded))
    succeeded = (MakeLibCmdSucceeded_32 == (MR_Integer) 0);
  if (succeeded)
    *Succeeded_14 = MakeLibCmdSucceeded_32;
  else
  {
    MR_String RanLibCmd_33;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;

    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (FullLibFileName_11));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (RanLib_20));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
    }
    RanLibCmd_33 = mercury__string__append_list_1_f_0(Var_62);
    libs__system_cmds__invoke_system_command_8_p_0(Globals_10, ProgressStream_9, ProgressStream_9, (MR_Integer) 1, RanLibCmd_33, Succeeded_14);
  }
}

static void MR_CALL 
backend_libs__link_target_code_c__get_linker_output_option_for_c_3_p_0(
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
backend_libs__link_target_code_c__get_install_name_opt_for_c_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleName_6,
  MR_Word LinkedTargetType_7,
  MR_String * InstallNameOpt_8)
{
  MR_bool succeeded;
  MR_Word UseInstallName_9;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 637, &UseInstallName_9);
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
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 605, &SharedLibExt_11);
    Var_16 = mercury__string__f_43_43_2_f_0(BaseFileName_10, SharedLibExt_11);
    ShLibFileName_12 = mercury__string__f_43_43_2_f_0((MR_String) "lib", Var_16);
    libs__file_util__get_install_name_option_3_p_0(Globals_5, ShLibFileName_12, InstallNameOpt_8);
  }
  else
    *InstallNameOpt_8 = (MR_String) "";
}

static void MR_CALL 
backend_libs__link_target_code_c__get_restricted_command_line_link_opts_for_c_3_p_0(
  MR_Word Globals_4,
  MR_Word LinkedTargetType_5,
  MR_String * RestrictedCmdLinkOpts_6)
{
  MR_Word RestrictedCommandLine_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 593, &RestrictedCommandLine_7);
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
                    backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[15])), (MR_String) "", (MR_String) "", (MR_String) " ", RestrictedCmdLinkOpts_6);
                    break;
                  case (MR_Integer) 1:
                    backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[11])), (MR_String) "", (MR_String) "", (MR_String) " ", RestrictedCmdLinkOpts_6);
                    break;
                  case (MR_Integer) 2:
                    backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) (MR_mkword(1, &backend_libs__link_target_code_c_scalar_common_1[7])), (MR_String) "", (MR_String) "", (MR_String) " ", RestrictedCmdLinkOpts_6);
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
backend_libs__link_target_code_c__get_thread_flags_for_c_5_p_0(
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
            HwlocFlagsOpt_12 = (MR_Integer) 638;
            break;
          case (MR_Integer) 0:
            HwlocFlagsOpt_12 = (MR_Integer) 639;
            break;
        }
        libs__globals__lookup_string_option_3_p_0(Globals_6, HwlocFlagsOpt_12, HwlocOpts_10);
      }
      break;
  }
}

static void MR_CALL 
backend_libs__link_target_code_c__get_strip_flags_for_c_5_p_0(
  MR_Word Globals_6,
  MR_Word LinkedTargetType_7,
  MR_String * LinkerStripOpt_8,
  MR_String * StripExeCommand_9,
  MR_String * StripExeFlags_10)
{
  MR_bool succeeded;
  MR_Word Strip_11;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 538, &Strip_11);
  succeeded = (LinkedTargetType_7 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Strip_11 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word MercuryLinkage_12;
    MR_Word StripExeFlagsOpt_13;

    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 626, LinkerStripOpt_8);
    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 550, StripExeCommand_9);
    libs__globals__get_mercury_linkage_2_p_0(Globals_6, &MercuryLinkage_12);
    switch (MercuryLinkage_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        StripExeFlagsOpt_13 = (MR_Integer) 551;
        break;
      case (MR_Integer) 0:
        StripExeFlagsOpt_13 = (MR_Integer) 552;
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
backend_libs__link_target_code_c__get_reserve_stack_size_flags_for_c_1_f_0(
  MR_Word Globals_3)
{
  MR_bool succeeded;
  MR_String Flags_4;
  MR_Integer ReserveStackSize_5;

  libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 546, &ReserveStackSize_5);
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
          MR_String Var_23;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__link_target_code_c_scalar_common_2[0]), ReserveStackSize_5, &Var_23);
          Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", Var_23);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_31;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__link_target_code_c_scalar_common_2[0]), ReserveStackSize_5, &Var_31);
          Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-stack:", Var_31);
        }
        break;
    }
  }
  return Flags_4;
}

static MR_bool MR_CALL 
backend_libs__link_target_code_c____Unify____prepare_to_link_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__link_target_code_c____Unify____prepare_to_link_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code_c____Compare____prepare_to_link_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__link_target_code_c____Compare____prepare_to_link_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__link_target_code_c____Unify____shared_library_support_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__link_target_code_c____Unify____shared_library_support_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__link_target_code_c____Compare____shared_library_support_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__link_target_code_c____Compare____shared_library_support_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__link_target_code_c__init(void)
{
}

void mercury__backend_libs__link_target_code_c__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__link_target_code_c__backend_libs__link_target_code_c__type_ctor_info_prepare_to_link_result_0);
  MR_register_type_ctor_info(&backend_libs__link_target_code_c__backend_libs__link_target_code_c__type_ctor_info_shared_library_support_0);
}

void mercury__backend_libs__link_target_code_c__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__link_target_code_c__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.link_target_code_c.
