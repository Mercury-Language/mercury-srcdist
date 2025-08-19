/*
** Automatically generated from `compile_target_code.m'
** by the Mercury compiler,
** version rotd-2025-08-19
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


// :- module backend_libs.compile_target_code.
// :- implementation.

/*
INIT mercury__backend_libs__compile_target_code__init
ENDINIT
*/

#include "backend_libs.compile_target_code.mih"


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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.file.mih"
#include "libs.compute_grade.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0libs__maybe_util__type_ctor_info_maybe_succeeded_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_is_as_new_as_0[3];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3];

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_pic_0[2];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[2];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[2];

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_c_include_dir_flags__1528__1_1_f_0(
  MR_String LambdaHeadVar__1_11);

static MR_bool MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_java_files__600__1_2_p_0(
  MR_Word DestDirPath_35,
  MR_Word HeadVar__2_91);

static MR_bool MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_java_files__596__1_2_p_0(
  MR_Word DestDirPath_35,
  MR_Word HeadVar__2_87);

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__compile_target_code__is_minus_j_flag_1_p_0(
  MR_String FlagStr_2);

static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_5_p_0(
  MR_Word Globals_6,
  MR_Word ProgressStream_7,
  MR_String BaseName_8);

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0(
  MR_Word Globals_14,
  MR_Word ProgressStream_15,
  MR_String MkInit_16,
  MR_Word ModuleName_17,
  MR_Word ModuleNames_18,
  MR_Word TargetOtherExt_19,
  MR_Word InitTargetOtherExt_20,
  MR_Word StdInitFileNames_21,
  MR_Word StdTraceInitFileNames_22,
  MR_Word SourceDebugInitFileNames_23,
  MR_Word * MaybeInitTargetFile_24);

static MR_Box MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word InitFileStream_13,
  MR_Word Verbosity_14,
  MR_String MkInit_15,
  MR_String Args_16,
  MR_Word FileNames_17,
  MR_Word * MkInitSucceeded_18);

static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
backend_libs__compile_target_code__java_classpath_separator_0_f_0(void);

static void MR_CALL 
backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(
  MR_Word Globals_4,
  MR_Word PIC_5,
  MR_String * AllCFlags_6);

static void MR_CALL 
backend_libs__compile_target_code__gather_specific_c_compiler_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * Flags_4);

static MR_bool MR_CALL 
backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(
  MR_String FullArch_2);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_framework_directories_flags_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_c_include_dir_flags_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[7][2];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[2][1];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[3][5];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[6][3];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[1][4];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[1][7];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[1][9];




static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "_H */\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) " -s ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 9U)
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[0])),
    ((MR_Box) (backend_libs__compile_target_code__get_c_include_dir_flags_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[1])),
    ((MR_Box) (backend_libs__compile_target_code__get_framework_directories_flags_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_5[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_java_files_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[0])),
    ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[1])),
    ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[1])),
    ((MR_Box) (backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[1][9] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0libs__maybe_util__type_ctor_info_maybe_succeeded_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_compile_init_file_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "compile_init_file_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0libs__maybe_util__type_ctor_info_maybe_succeeded_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0 = {
  (MR_String) "is_as_new_as",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1 = {
  (MR_String) "is_not_as_new_as",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2 = {
  (MR_String) "missing_timestamp",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_is_as_new_as_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_is_as_new_as_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "is_as_new_as",
  { backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0 },
  { backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_is_as_new_as_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0,

};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0 = {
  (MR_String) "pic",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1 = {
  (MR_String) "non_pic",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_pic_0[2] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[2] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____pic_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____pic_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "pic",
  { backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0 },
  { backend_libs__compile_target_code__backend_libs__compile_target_code__enum_ordinal_ordered_pic_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0,

};

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_c_include_dir_flags__1528__1_1_f_0(
  MR_String LambdaHeadVar__1_11)
{
  MR_Word LambdaHeadVar__2_12;
  MR_Word Var_14;
  MR_String Var_15;

  Var_15 = libs__shell_util__quote_shell_cmd_arg_1_f_0(LambdaHeadVar__1_11);
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__compile_target_code_scalar_common_1[3])));
  }
  {
    LambdaHeadVar__2_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_12, 0) = ((MR_Box) ((MR_String) "-I"));
    MR_hl_field(1, LambdaHeadVar__2_12, 1) = ((MR_Box) (Var_14));
  }
  return LambdaHeadVar__2_12;
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_java_files__600__1_2_p_0(
  MR_Word DestDirPath_35,
  MR_Word HeadVar__2_91)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), ((MR_Box) (DestDirPath_35)), ((MR_Box) (HeadVar__2_91)));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_java_files__596__1_2_p_0(
  MR_Word DestDirPath_35,
  MR_Word HeadVar__2_87)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), ((MR_Box) (DestDirPath_35)), ((MR_Box) (HeadVar__2_87)));
  return succeeded;
}

void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0(
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
backend_libs__compile_target_code____Unify____pic_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0(
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
backend_libs__compile_target_code____Unify____is_as_new_as_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__is_minus_j_flag_1_p_0(
  MR_String FlagStr_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__prefix_2_p_0(FlagStr_2, (MR_String) "-J");
  return succeeded;
}

void MR_CALL 
backend_libs__compile_target_code__get_c_compiler_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * CFlags_4)
{
  backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(Globals_3, (MR_Integer) 1, CFlags_4);
}

void MR_CALL 
backend_libs__compile_target_code__make_standalone_interface_5_p_0(
  MR_Word Globals_6,
  MR_Word ProgressStream_7,
  MR_String BaseName_8)
{
  MR_String HdrFileName_14;
  MR_Word OpenResult_15;

  HdrFileName_14 = mercury__string__f_43_43_2_f_0(BaseName_8, (MR_String) ".h");
  mercury__io__open_output_4_p_0(HdrFileName_14, &OpenResult_15);
  if (((MR_tag((MR_Word) OpenResult_15)) == (MR_Integer) 1))
  {
    MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, OpenResult_15, 0))));

    libs__file_util__report_unable_to_open_file_5_p_0(ProgressStream_7, HdrFileName_14, Error_18);
  }
  else
  {
    MR_Word HdrFileStream_16 = ((MR_Word) ((MR_hl_field(0, OpenResult_15, 0))));
    MR_String UpperBaseName_17;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_64;

    UpperBaseName_17 = mercury__string__to_upper_1_f_0(BaseName_8);
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (UpperBaseName_17));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__compile_target_code_scalar_common_1[4])));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) ((MR_String) "#endif /* "));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) ((MR_String) "}\n"));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) "mercury_terminate(void);\n"));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) ((MR_String) "extern int\n"));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) ((MR_String) "mercury_init(int argc, char **argv, void *stackbottom);\n"));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_String) "extern void\n"));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) ((MR_String) "extern \"C\" {\n"));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) ((MR_String) "_H\n"));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (UpperBaseName_17));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_String) "#define "));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) ((MR_String) "_H\n"));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (UpperBaseName_17));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) ((MR_String) "#ifndef "));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
    }
    mercury__io__write_strings_4_p_0(HdrFileStream_16, Var_21);
    mercury__io__close_output_3_p_0(HdrFileStream_16);
    backend_libs__compile_target_code__make_standalone_int_body_5_p_0(Globals_6, ProgressStream_7, BaseName_8);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_5_p_0(
  MR_Word Globals_6,
  MR_Word ProgressStream_7,
  MR_String BaseName_8)
{
  MR_bool succeeded;
  MR_Word InitFiles0_10;
  MR_Word InitFiles1_11;
  MR_Word TraceInitFiles0_12;
  MR_Word MaybeStdLibDir_13;
  MR_String GradeDir_14;
  MR_Word InitFiles2_16;
  MR_Word TraceInitFiles_17;
  MR_Word SourceDebugInitFiles_18;
  MR_Word TraceLevel_19;
  MR_Word TraceEnabled_20;
  MR_String TraceOpt_21;
  MR_Word InitFiles3_22;
  MR_Word SourceDebug_23;
  MR_Word InitFiles_24;
  MR_Word RuntimeFlagsList_25;
  MR_String RuntimeFlags_26;
  MR_Word InitFileDirsList_27;
  MR_String InitFileDirs_28;
  MR_String ExperimentalComplexity_29;
  MR_String ExperimentalComplexityOpt_30;
  MR_String Grade_31;
  MR_String MkInit_32;
  MR_String CFileName_33;
  MR_String MkInitArgs_34;
  MR_Word MkInitCmdSucceeded_36;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_103;
  MR_String Var_104;
  MR_Word Var_105;
  MR_Word Var_107;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 529, &InitFiles0_10);
  mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles0_10, &InitFiles1_11);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 530, &TraceInitFiles0_12);
  libs__globals__lookup_maybe_string_option_3_p_0(Globals_6, (MR_Integer) 516, &MaybeStdLibDir_13);
  libs__globals__get_grade_dir_2_p_0(Globals_6, &GradeDir_14);
  if ((MaybeStdLibDir_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    InitFiles2_16 = InitFiles1_11;
    TraceInitFiles_17 = TraceInitFiles0_12;
    SourceDebugInitFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String StdLibDir_15 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_13, 0))));
    MR_String Var_48;
    MR_String Var_49;
    MR_String Var_50;
    MR_Word Var_53;
    MR_String Var_54;
    MR_String Var_55;
    MR_String Var_56;
    MR_String Var_59;
    MR_String Var_60;
    MR_String Var_61;
    MR_Word Var_64;
    MR_String Var_65;
    MR_String Var_66;
    MR_String Var_67;
    MR_String Var_70;
    MR_String Var_71;
    MR_String Var_72;

    Var_50 = mercury__dir__f_slash_2_f_0(StdLibDir_15, (MR_String) "modules");
    Var_49 = mercury__dir__f_slash_2_f_0(Var_50, GradeDir_14);
    Var_48 = mercury__dir__f_slash_2_f_0(Var_49, (MR_String) "mer_rt.init");
    Var_56 = mercury__dir__f_slash_2_f_0(StdLibDir_15, (MR_String) "modules");
    Var_55 = mercury__dir__f_slash_2_f_0(Var_56, GradeDir_14);
    Var_54 = mercury__dir__f_slash_2_f_0(Var_55, (MR_String) "mer_std.init");
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (InitFiles1_11));
    }
    {
      InitFiles2_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InitFiles2_16, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, InitFiles2_16, 1) = ((MR_Box) (Var_53));
    }
    Var_61 = mercury__dir__f_slash_2_f_0(StdLibDir_15, (MR_String) "modules");
    Var_60 = mercury__dir__f_slash_2_f_0(Var_61, GradeDir_14);
    Var_59 = mercury__dir__f_slash_2_f_0(Var_60, (MR_String) "mer_browser.init");
    Var_67 = mercury__dir__f_slash_2_f_0(StdLibDir_15, (MR_String) "modules");
    Var_66 = mercury__dir__f_slash_2_f_0(Var_67, GradeDir_14);
    Var_65 = mercury__dir__f_slash_2_f_0(Var_66, (MR_String) "mer_mdbcomp.init");
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (TraceInitFiles0_12));
    }
    {
      TraceInitFiles_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TraceInitFiles_17, 0) = ((MR_Box) (Var_59));
      MR_hl_field(1, TraceInitFiles_17, 1) = ((MR_Box) (Var_64));
    }
    Var_72 = mercury__dir__f_slash_2_f_0(StdLibDir_15, (MR_String) "modules");
    Var_71 = mercury__dir__f_slash_2_f_0(Var_72, GradeDir_14);
    Var_70 = mercury__dir__f_slash_2_f_0(Var_71, (MR_String) "mer_ssdb.init");
    {
      SourceDebugInitFiles_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SourceDebugInitFiles_18, 0) = ((MR_Box) (Var_70));
      MR_hl_field(1, SourceDebugInitFiles_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  libs__globals__get_trace_level_2_p_0(Globals_6, &TraceLevel_19);
  TraceEnabled_20 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_19);
  switch (TraceEnabled_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        TraceOpt_21 = (MR_String) "-t";
        InitFiles3_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles2_16, TraceInitFiles_17);
      }
      break;
    case (MR_Integer) 0:
      {
        TraceOpt_21 = (MR_String) "";
        InitFiles3_22 = InitFiles2_16;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 519, &SourceDebug_23);
  switch (SourceDebug_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InitFiles_24 = InitFiles3_22;
      break;
    case (MR_Integer) 1:
      InitFiles_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles3_22, SourceDebugInitFiles_18);
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 540, &RuntimeFlagsList_25);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(RuntimeFlagsList_25, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &RuntimeFlags_26);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 528, &InitFileDirsList_27);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(InitFileDirsList_27, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &InitFileDirs_28);
  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 82, &ExperimentalComplexity_29);
  succeeded = (strcmp(ExperimentalComplexity_29, (MR_String) "") == 0);
  if (succeeded)
    ExperimentalComplexityOpt_30 = (MR_String) "";
  else
    ExperimentalComplexityOpt_30 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", ExperimentalComplexity_29);
  libs__compute_grade__compute_grade_2_p_0(Globals_6, &Grade_31);
  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 599, &MkInit_32);
  CFileName_33 = mercury__string__f_43_43_2_f_0(BaseName_8, (MR_String) ".c");
  Var_104 = libs__shell_util__quote_shell_cmd_arg_1_f_0(CFileName_33);
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (InitFileDirs_28));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__compile_target_code_scalar_common_1[5])));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) ((MR_String) " -o "));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (RuntimeFlags_26));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (ExperimentalComplexityOpt_30));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_98));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (TraceOpt_21));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Grade_31));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) ((MR_String) " -g "));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_91));
  }
  MkInitArgs_34 = mercury__string__append_list_1_f_0(Var_89);
  backend_libs__compile_target_code__invoke_mkinit_10_p_0(Globals_6, ProgressStream_7, ProgressStream_7, (MR_Integer) 1, MkInit_32, MkInitArgs_34, InitFiles_24, &MkInitCmdSucceeded_36);
  switch (MkInitCmdSucceeded_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "mercury_compile: error while creating ");
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "standalone interface in \140");
        mercury__io__write_string_4_p_0(ProgressStream_7, CFileName_33);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\'\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PIC_37;
        MR_Word ExtObj_38;
        MR_Word Ext_40;
        MR_String ObjFileName_41;
        MR_Word CompileSucceeded_42;
        MR_String Var_113;
        MR_Word Var_39;

        backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_101_99_117_116_97_98_108_101_95_111_98_106_101_99_116_95_99_111_100_101_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(&PIC_37);
        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_37, &ExtObj_38, &Var_39);
        {
          Ext_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Ext_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Ext_40, 1) = (MR_Box) ((MR_Unsigned) (ExtObj_38));
        }
        Var_113 = parse_tree__file_names__extension_to_string_2_f_0(Globals_6, Ext_40);
        ObjFileName_41 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_113);
        backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_6, ProgressStream_7, PIC_37, CFileName_33, ObjFileName_41, &CompileSucceeded_42);
        switch (CompileSucceeded_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "mercury_compile: error while compiling");
              mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "standalone interface in \140");
              mercury__io__write_string_4_p_0(ProgressStream_7, CFileName_33);
              mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\'\n");
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
      break;
  }
}

MR_bool MR_CALL 
backend_libs__compile_target_code__is_maybe_pic_object_file_extension_3_p_0(
  MR_Word Globals_4,
  MR_String ExtStr_5,
  MR_Word * PIC_6)
{
  MR_bool succeeded;
  MR_String Var_9;

  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 494, &Var_9);
  succeeded = (strcmp(ExtStr_5, Var_9) == 0);
  if (succeeded)
  {
    *PIC_6 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String Var_10;

    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 495, &Var_10);
    succeeded = (strcmp(ExtStr_5, Var_10) == 0);
    if (succeeded)
    {
      *PIC_6 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(
  MR_Word PIC_4,
  MR_Word * ExtObj_5,
  MR_Word * ExtInitObj_6)
{
  switch (PIC_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *ExtObj_5 = (MR_Integer) 4;
        *ExtInitObj_6 = (MR_Integer) 9;
      }
      break;
    case (MR_Integer) 0:
      {
        *ExtObj_5 = (MR_Integer) 5;
        *ExtInitObj_6 = (MR_Integer) 10;
      }
      break;
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_init_obj_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word MustCompile_11,
  MR_Word ModuleName_12,
  MR_Word ModuleNames_13,
  MR_Word * Result_14)
{
  MR_bool succeeded;
  MR_Word MaybeStdLibDir_16;
  MR_String GradeDir_17;
  MR_Word StdInitFileNames_21;
  MR_Word StdTraceInitFileNames_22;
  MR_Word SourceDebugInitFileNames_23;
  MR_String MkInit_24;
  MR_Word MaybeInitTargetFile_25;
  MR_String InitObjFileName_29;
  MR_Word Verbose_82;
  MR_Word Stats_83;
  MR_String _InitObjFileNameProposed_30;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_10, (MR_Integer) 516, &MaybeStdLibDir_16);
  libs__globals__get_grade_dir_2_p_0(Globals_10, &GradeDir_17);
  if ((MaybeStdLibDir_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    StdInitFileNames_21 = (MR_Word) ((MR_Unsigned) 0U);
    StdTraceInitFileNames_22 = (MR_Word) ((MR_Unsigned) 0U);
    SourceDebugInitFileNames_23 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String StdLibDir_18 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_16, 0))));
    MR_String Var_43;
    MR_Word Var_45;
    MR_String Var_46;
    MR_String Var_49;
    MR_Word Var_51;
    MR_String Var_52;
    MR_String Var_55;
    MR_String Var_67;
    MR_String Var_68;
    MR_String Var_70;
    MR_String Var_71;
    MR_String Var_73;
    MR_String Var_74;
    MR_String Var_76;
    MR_String Var_77;
    MR_String Var_79;
    MR_String Var_80;

    Var_68 = mercury__dir__f_slash_2_f_0(StdLibDir_18, (MR_String) "modules");
    Var_67 = mercury__dir__f_slash_2_f_0(Var_68, GradeDir_17);
    Var_43 = mercury__dir__f_slash_2_f_0(Var_67, (MR_String) "mer_rt.init");
    Var_71 = mercury__dir__f_slash_2_f_0(StdLibDir_18, (MR_String) "modules");
    Var_70 = mercury__dir__f_slash_2_f_0(Var_71, GradeDir_17);
    Var_46 = mercury__dir__f_slash_2_f_0(Var_70, (MR_String) "mer_std.init");
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      StdInitFileNames_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StdInitFileNames_21, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, StdInitFileNames_21, 1) = ((MR_Box) (Var_45));
    }
    Var_74 = mercury__dir__f_slash_2_f_0(StdLibDir_18, (MR_String) "modules");
    Var_73 = mercury__dir__f_slash_2_f_0(Var_74, GradeDir_17);
    Var_49 = mercury__dir__f_slash_2_f_0(Var_73, (MR_String) "mer_browser.init");
    Var_77 = mercury__dir__f_slash_2_f_0(StdLibDir_18, (MR_String) "modules");
    Var_76 = mercury__dir__f_slash_2_f_0(Var_77, GradeDir_17);
    Var_52 = mercury__dir__f_slash_2_f_0(Var_76, (MR_String) "mer_mdbcomp.init");
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      StdTraceInitFileNames_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StdTraceInitFileNames_22, 0) = ((MR_Box) (Var_49));
      MR_hl_field(1, StdTraceInitFileNames_22, 1) = ((MR_Box) (Var_51));
    }
    Var_80 = mercury__dir__f_slash_2_f_0(StdLibDir_18, (MR_String) "modules");
    Var_79 = mercury__dir__f_slash_2_f_0(Var_80, GradeDir_17);
    Var_55 = mercury__dir__f_slash_2_f_0(Var_79, (MR_String) "mer_ssdb.init");
    {
      SourceDebugInitFileNames_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SourceDebugInitFileNames_23, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, SourceDebugInitFileNames_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 599, &MkInit_24);
  backend_libs__compile_target_code__make_init_target_file_13_p_0(Globals_10, ProgressStream_9, MkInit_24, ModuleName_12, ModuleNames_13, (MR_Word) (MR_mkword(3, &backend_libs__compile_target_code_scalar_common_1[1])), (MR_Word) (MR_mkword(3, &backend_libs__compile_target_code_scalar_common_1[2])), StdInitFileNames_21, StdTraceInitFileNames_22, SourceDebugInitFileNames_23, &MaybeInitTargetFile_25);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_10, (MR_String) "predicate \140backend_libs.compile_target_code.make_init_obj_file\'/8", (MR_Word) (MR_mkword(3, &backend_libs__compile_target_code_scalar_common_1[6])), ModuleName_12, &InitObjFileName_29, &_InitObjFileNameProposed_30);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 131, &Verbose_82);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 133, &Stats_83);
  if ((MaybeInitTargetFile_25 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String InitTargetFileName_84 = ((MR_String) ((MR_hl_field(1, MaybeInitTargetFile_25, 0))));
    MR_Word Rel_85;
    MR_Word MaybeCompare_93;

    libs__file_util__compare_file_timestamps_5_p_0(InitObjFileName_29, InitTargetFileName_84, &MaybeCompare_93);
    if ((MaybeCompare_93 == (MR_Word) ((MR_Unsigned) 0U)))
      Rel_85 = (MR_Integer) 2;
    else
    {
      MR_Word Var_97 = ((MR_Word) ((MR_hl_field(1, MaybeCompare_93, 0))));

      switch (Var_97) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Rel_85 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          Rel_85 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Rel_85 = (MR_Integer) 0;
          break;
      }
    }
    switch (Rel_85) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    if (!(succeeded))
      succeeded = (MustCompile_11 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word CompileSucceeded_86;

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_82, (MR_String) "% Compiling initialization file...\n");
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_10, ProgressStream_9, (MR_Integer) 1, InitTargetFileName_84, InitObjFileName_29, &CompileSucceeded_86);
      libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_83);
      switch (CompileSucceeded_86) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (InitObjFileName_29));
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InitObjFileName_29));
      }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__5_5;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__5_5, &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0(
  MR_Word Globals_14,
  MR_Word ProgressStream_15,
  MR_String MkInit_16,
  MR_Word ModuleName_17,
  MR_Word ModuleNames_18,
  MR_Word TargetOtherExt_19,
  MR_Word InitTargetOtherExt_20,
  MR_Word StdInitFileNames_21,
  MR_Word StdTraceInitFileNames_22,
  MR_Word SourceDebugInitFileNames_23,
  MR_Word * MaybeInitTargetFile_24)
{
  MR_bool succeeded;
  MR_Word Verbose_26;
  MR_Word Stats_27;
  MR_String Grade_28;
  MR_String InitTargetFileName_29;
  MR_Word TargetFileNameList_31;
  MR_Word InitFileDirsList_33;
  MR_String InitFileDirs_34;
  MR_Word InitFileNamesList0_35;
  MR_Word InitFileNamesList1_36;
  MR_Word TraceInitFileNamesList0_37;
  MR_Word InitFileNamesList2_38;
  MR_Word TraceInitFileNamesList_39;
  MR_Word TraceLevel_40;
  MR_Word TraceEnabled_41;
  MR_String TraceOpt_42;
  MR_Word InitFileNamesList3_43;
  MR_Word SourceDebug_44;
  MR_Word InitFileNamesList_45;
  MR_Word RuntimeFlagsList_46;
  MR_String RuntimeFlags_47;
  MR_Word ExtraInits_48;
  MR_String ExtraInitsOpt_49;
  MR_Word Main_50;
  MR_String NoMainOpt_51;
  MR_String ExperimentalComplexity_52;
  MR_String ExperimentalComplexityOpt_53;
  MR_String TmpInitTargetFileName_54;
  MR_String MkInitArgs_55;
  MR_Word MkInitSucceeded_57;
  MR_Word Var_67;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_105;
  MR_String Var_106;
  MR_Word Var_107;
  MR_Word Var_109;
  MR_Word Var_112;
  MR_String _InitTargetFileNameProposed_30;
  MR_Word _TargetFileNameListProposed_32;

  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 131, &Verbose_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 133, &Stats_27);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_26, (MR_String) "% Creating initialization file...\n");
  libs__compute_grade__compute_grade_2_p_0(Globals_14, &Grade_28);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_14, (MR_String) "predicate \140backend_libs.compile_target_code.make_init_target_file\'/13", InitTargetOtherExt_20, ModuleName_17, &InitTargetFileName_29, &_InitTargetFileNameProposed_30);
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_7[0]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (backend_libs__compile_target_code__make_init_target_file_13_p_0_1));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (Globals_14));
    MR_hl_field(0, Var_67, 4) = ((MR_Box) ((MR_String) "predicate \140backend_libs.compile_target_code.make_init_target_file\'/13"));
    MR_hl_field(0, Var_67, 5) = ((MR_Box) (TargetOtherExt_19));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_67, ModuleNames_18, &TargetFileNameList_31, &_TargetFileNameListProposed_32);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 528, &InitFileDirsList_33);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(InitFileDirsList_33, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &InitFileDirs_34);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 529, &InitFileNamesList0_35);
  mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList0_35, &InitFileNamesList1_36);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 530, &TraceInitFileNamesList0_37);
  InitFileNamesList2_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdInitFileNames_21, InitFileNamesList1_36);
  TraceInitFileNamesList_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdTraceInitFileNames_22, TraceInitFileNamesList0_37);
  libs__globals__get_trace_level_2_p_0(Globals_14, &TraceLevel_40);
  TraceEnabled_41 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_40);
  switch (TraceEnabled_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        TraceOpt_42 = (MR_String) "-t";
        InitFileNamesList3_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList2_38, TraceInitFileNamesList_39);
      }
      break;
    case (MR_Integer) 0:
      {
        TraceOpt_42 = (MR_String) "";
        InitFileNamesList3_43 = InitFileNamesList2_38;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 519, &SourceDebug_44);
  switch (SourceDebug_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InitFileNamesList_45 = InitFileNamesList3_43;
      break;
    case (MR_Integer) 1:
      InitFileNamesList_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList3_43, SourceDebugInitFileNames_23);
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 540, &RuntimeFlagsList_46);
  backend_libs__compile_target_code__join_quoted_string_list_5_p_0(RuntimeFlagsList_46, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &RuntimeFlags_47);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 541, &ExtraInits_48);
  switch (ExtraInits_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ExtraInitsOpt_49 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      ExtraInitsOpt_49 = (MR_String) "-x";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 537, &Main_50);
  switch (Main_50) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NoMainOpt_51 = (MR_String) "-l";
      break;
    case (MR_Integer) 1:
      NoMainOpt_51 = (MR_String) "";
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 82, &ExperimentalComplexity_52);
  succeeded = (strcmp(ExperimentalComplexity_52, (MR_String) "") == 0);
  if (succeeded)
    ExperimentalComplexityOpt_53 = (MR_String) "";
  else
    ExperimentalComplexityOpt_53 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", ExperimentalComplexity_52);
  TmpInitTargetFileName_54 = mercury__string__f_43_43_2_f_0(InitTargetFileName_29, (MR_String) ".tmp");
  Var_106 = libs__shell_util__quote_shell_cmd_arg_1_f_0(TmpInitTargetFileName_54);
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (InitFileDirs_34));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) ((MR_String) " -o "));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (RuntimeFlags_47));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (ExperimentalComplexityOpt_53));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (NoMainOpt_51));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (ExtraInitsOpt_49));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (TraceOpt_42));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Grade_28));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) ((MR_String) " -g "));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
  }
  MkInitArgs_55 = mercury__string__append_list_1_f_0(Var_85);
  Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TargetFileNameList_31, InitFileNamesList_45);
  backend_libs__compile_target_code__invoke_mkinit_10_p_0(Globals_14, ProgressStream_15, ProgressStream_15, (MR_Integer) 1, MkInit_16, MkInitArgs_55, Var_112, &MkInitSucceeded_57);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_15, Stats_27);
  switch (MkInitSucceeded_57) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeInitTargetFile_24 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word UpdateResult_58;

        parse_tree__module_cmds__copy_dot_tmp_to_base_file_return_succeeded_6_p_0(ProgressStream_15, Globals_14, InitTargetFileName_29, &UpdateResult_58);
        switch (UpdateResult_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *MaybeInitTargetFile_24 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInitTargetFile_24 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (InitTargetFileName_29));
            }
            break;
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1(
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
backend_libs__compile_target_code__join_quoted_string_list_5_p_0(
  MR_Word Strings_6,
  MR_String Prefix_7,
  MR_String Suffix_8,
  MR_String Separator_9,
  MR_String * Result_10)
{
  MR_Word QuotedStrings_11;

  QuotedStrings_11 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_4[5]), Strings_6);
  backend_libs__compile_target_code__join_string_list_5_p_0(QuotedStrings_11, Prefix_7, Suffix_8, Separator_9, Result_10);
}

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__5_5;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__5_5, &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_Word MainModuleName_10,
  MR_Word AllModules_11,
  MR_Word * Succeeded_12)
{
  MR_bool succeeded;
  MR_String MkInit_14;
  MR_String FullInitFileName_15;
  MR_String CurDirInitFileName_17;
  MR_String TmpFullInitFileName_18;
  MR_Word TmpInitFileOpenResult_19;
  MR_String _FullInitFileNameProposed_16;

  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 599, &MkInit_14);
  parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.make_library_init_file\'/7", (MR_Word) (MR_mkword(2, &backend_libs__compile_target_code_scalar_common_2[0])), MainModuleName_10, &FullInitFileName_15, &_FullInitFileNameProposed_16, &CurDirInitFileName_17);
  TmpFullInitFileName_18 = mercury__string__f_43_43_2_f_0(FullInitFileName_15, (MR_String) ".tmp");
  mercury__io__open_output_4_p_0(TmpFullInitFileName_18, &TmpInitFileOpenResult_19);
  if (((MR_tag((MR_Word) TmpInitFileOpenResult_19)) == (MR_Integer) 1))
  {
    MR_Word Error_31 = ((MR_Word) ((MR_hl_field(1, TmpInitFileOpenResult_19, 0))));
    MR_String ProgName_32;
    MR_String ErrorMsg_33;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_32);
    ErrorMsg_33 = mercury__io__error_message_1_f_0(Error_31);
    mercury__io__write_string_4_p_0(ProgressStream_9, ProgName_32);
    mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) ": can\'t open \140");
    mercury__io__write_string_4_p_0(ProgressStream_9, TmpFullInitFileName_18);
    mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\' for output: ");
    mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_33);
    mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n");
    *Succeeded_12 = (MR_Integer) 0;
  }
  else
  {
    MR_Word TmpInitFileStream_20 = ((MR_Word) ((MR_hl_field(0, TmpInitFileOpenResult_19, 0))));
    MR_Word AllTargetCFilesList_21;
    MR_Word TmpMkInitSucceeded0_23;
    MR_Word TmpMkInitSucceeded_27;
    MR_Word CopyTmpSucceeded_28;
    MR_Word MkInitSucceded_29;
    MR_Word Var_43;
    MR_Word _AllTargetCFilesListProposed_22;

    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_7[0]));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (backend_libs__compile_target_code__make_library_init_file_7_p_0_1));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_43, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(0, Var_43, 4) = ((MR_Box) ((MR_String) "predicate \140backend_libs.compile_target_code.make_library_init_file\'/7"));
      MR_hl_field(0, Var_43, 5) = ((MR_Box) (MR_mkword(3, &backend_libs__compile_target_code_scalar_common_1[1])));
    }
    mercury__list__map2_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_43, AllModules_11, &AllTargetCFilesList_21, &_AllTargetCFilesListProposed_22);
    backend_libs__compile_target_code__invoke_mkinit_10_p_0(Globals_8, ProgressStream_9, TmpInitFileStream_20, (MR_Integer) 1, MkInit_14, (MR_String) " -k ", AllTargetCFilesList_21, &TmpMkInitSucceeded0_23);
    switch (TmpMkInitSucceeded0_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TmpMkInitSucceeded_27 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeInitFileCommand_24;

          libs__globals__lookup_maybe_string_option_3_p_0(Globals_8, (MR_Integer) 580, &MaybeInitFileCommand_24);
          if ((MaybeInitFileCommand_24 == (MR_Word) ((MR_Unsigned) 0U)))
            TmpMkInitSucceeded_27 = (MR_Integer) 1;
          else
          {
            MR_String InitFileCommand_25 = ((MR_String) ((MR_hl_field(1, MaybeInitFileCommand_24, 0))));
            MR_String CommandStr_26;

            backend_libs__compile_target_code__make_all_module_command_6_p_0(InitFileCommand_25, MainModuleName_10, AllModules_11, &CommandStr_26);
            libs__system_cmds__invoke_system_command_8_p_0(Globals_8, ProgressStream_9, TmpInitFileStream_20, (MR_Integer) 1, CommandStr_26, &TmpMkInitSucceeded_27);
          }
        }
        break;
    }
    mercury__io__close_output_3_p_0(TmpInitFileStream_20);
    parse_tree__module_cmds__copy_dot_tmp_to_base_file_return_succeeded_6_p_0(ProgressStream_9, Globals_8, FullInitFileName_15, &CopyTmpSucceeded_28);
    MkInitSucceded_29 = libs__maybe_util__and_2_f_0(TmpMkInitSucceeded_27, CopyTmpSucceeded_28);
    switch (MkInitSucceded_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_12 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (strcmp(FullInitFileName_15, CurDirInitFileName_17) == 0);
          if (succeeded)
            *Succeeded_12 = (MR_Integer) 1;
          else
          {
            MR_Word Var_30;

            mercury__io__file__remove_file_4_p_0(CurDirInitFileName_17, &Var_30);
            parse_tree__module_cmds__make_symlink_or_copy_file_7_p_0(Globals_8, ProgressStream_9, FullInitFileName_15, CurDirInitFileName_17, Succeeded_12);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_10_p_0(
  MR_Word Globals_11,
  MR_Word ProgressStream_12,
  MR_Word InitFileStream_13,
  MR_Word Verbosity_14,
  MR_String MkInit_15,
  MR_String Args_16,
  MR_Word FileNames_17,
  MR_Word * MkInitSucceeded_18)
{
  MR_String TargetFileNames_20;
  MR_Word TmpFileResult_21;

  backend_libs__compile_target_code__join_string_list_5_p_0(FileNames_17, (MR_String) "", (MR_String) "\n", (MR_String) "", &TargetFileNames_20);
  libs__file_util__open_temp_output_3_p_0(&TmpFileResult_21);
  if (((MR_tag((MR_Word) TmpFileResult_21)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_28 = ((MR_String) ((MR_hl_field(1, TmpFileResult_21, 0))));

    mercury__io__write_string_4_p_0(ProgressStream_12, ErrorMessage_28);
    mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "\n");
    *MkInitSucceeded_18 = (MR_Integer) 0;
  }
  else
  {
    MR_String TmpFile_22;
    MR_Word TmpStream_23;
    MR_String MkInitCmd_24;
    MR_Word MkInitSucceeded0_25;
    MR_Word RemoveResult_26;
    MR_Tuple Var_35 = ((MR_Tuple) ((MR_hl_field(0, TmpFileResult_21, 0))));
    MR_String Var_54;
    MR_String Var_55;
    MR_String Var_57;

    TmpFile_22 = ((MR_String) ((MR_hl_field(0, Var_35, 0))));
    TmpStream_23 = ((MR_Word) ((MR_hl_field(0, Var_35, 1))));
    mercury__io__write_string_4_p_0(TmpStream_23, TargetFileNames_20);
    mercury__io__close_output_3_p_0(TmpStream_23);
    Var_54 = mercury__string__f_43_43_2_f_0((MR_String) " -f ", TmpFile_22);
    Var_55 = mercury__string__f_43_43_2_f_0(Args_16, Var_54);
    Var_57 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_55);
    MkInitCmd_24 = mercury__string__f_43_43_2_f_0(MkInit_15, Var_57);
    libs__system_cmds__invoke_system_command_8_p_0(Globals_11, ProgressStream_12, InitFileStream_13, Verbosity_14, MkInitCmd_24, &MkInitSucceeded0_25);
    mercury__io__file__remove_file_4_p_0(TmpFile_22, &RemoveResult_26);
    if ((RemoveResult_26 == (MR_Word) ((MR_Unsigned) 0U)))
      *MkInitSucceeded_18 = MkInitSucceeded0_25;
    else
      *MkInitSucceeded_18 = (MR_Integer) 0;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = libs__shell_util__quote_shell_cmd_arg_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  parse_tree__file_names__module_name_to_source_file_name_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_6_p_0(
  MR_String Command0_7,
  MR_Word MainModule_8,
  MR_Word AllModules_9,
  MR_String * Command_10)
{
  MR_Word ModuleSrcFileNames_12;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Box conv1_STATE_VARIABLE_IO_14;

  Var_18 = mercury__list__delete_all_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_9, ((MR_Box) (MainModule_8)));
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MainModule_8));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_18));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_4[3]), Var_16, &ModuleSrcFileNames_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Command0_7));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (ModuleSrcFileNames_12));
  }
  Var_20 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_4[4]), Var_22);
  *Command_10 = mercury__string__join_list_2_f_0((MR_String) " ", Var_20);
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__compile_target_code__IntroducedFrom__pred__compile_java_files__600__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__compile_target_code__IntroducedFrom__pred__compile_java_files__596__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__compile_target_code__is_minus_j_flag_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
backend_libs__compile_target_code__compile_java_files_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_String HeadJavaFile_10,
  MR_Word TailJavaFiles_11,
  MR_Word * Succeeded_12)
{
  MR_bool succeeded;
  MR_Word Verbose_14;
  MR_String JavaCompiler_17;
  MR_Word JavaFlagsList_18;
  MR_Word RestrictedCommandLine_19;
  MR_String JAVAFLAGS_23;
  MR_Word MercuryStdLibs_24;
  MR_Word UserClasspath_25;
  MR_Word JavaInclDirs_26;
  MR_String EnvClasspath_27;
  MR_Word ClassPathList_28;
  MR_String ClassPath_29;
  MR_String InclOpts_30;
  MR_Word TargetDebug_31;
  MR_String TargetDebugOpts_32;
  MR_Word SourceDirPath_33;
  MR_Word DestDirPath_35;
  MR_String DirOpts_37;
  MR_String MFilterJavac_43;
  MR_Word MaybeMFilterJavac_44;
  MR_String NonAtFileCommandArgs_45;
  MR_String JoinedJavaFiles_46;
  MR_String CommandArgs_47;
  MR_String Var_76;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_110;
  MR_Word _SourceDirPathProposed_34;
  MR_Word _DestDirPathProposed_36;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 131, &Verbose_14);
  switch (Verbose_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      if ((TailJavaFiles_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Compiling \140");
        mercury__io__write_string_4_p_0(ProgressStream_9, HeadJavaFile_10);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\':\n");
      }
      else
      {
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Compiling \140");
        mercury__io__write_string_4_p_0(ProgressStream_9, HeadJavaFile_10);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\', etc.:\n");
      }
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 496, &JavaCompiler_17);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 498, &JavaFlagsList_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 591, &RestrictedCommandLine_19);
  switch (RestrictedCommandLine_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        backend_libs__compile_target_code__join_string_list_5_p_0(JavaFlagsList_18, (MR_String) "", (MR_String) "", (MR_String) " ", &JAVAFLAGS_23);
        NonAtFileCommandArgs_45 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word JRT_JavaFlagsList_20;
        MR_Word NonJRT_JavaFlagsList_21;

        mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_4[2]), JavaFlagsList_18, &JRT_JavaFlagsList_20, &NonJRT_JavaFlagsList_21);
        backend_libs__compile_target_code__join_string_list_5_p_0(JRT_JavaFlagsList_20, (MR_String) "", (MR_String) "", (MR_String) " ", &NonAtFileCommandArgs_45);
        backend_libs__compile_target_code__join_string_list_5_p_0(NonJRT_JavaFlagsList_21, (MR_String) "", (MR_String) "", (MR_String) " ", &JAVAFLAGS_23);
      }
      break;
  }
  parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_8, &MercuryStdLibs_24);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 500, &UserClasspath_25);
  JavaInclDirs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_24, UserClasspath_25);
  parse_tree__module_cmds__get_env_classpath_3_p_0(&EnvClasspath_27);
  succeeded = (strcmp(EnvClasspath_27, (MR_String) "") == 0);
  if (succeeded)
    ClassPathList_28 = JavaInclDirs_26;
  else
    {
      ClassPathList_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ClassPathList_28, 0) = ((MR_Box) (EnvClasspath_27));
      MR_hl_field(1, ClassPathList_28, 1) = ((MR_Box) (JavaInclDirs_26));
    }
  Var_76 = backend_libs__compile_target_code__java_classpath_separator_0_f_0();
  ClassPath_29 = mercury__string__join_list_2_f_0(Var_76, ClassPathList_28);
  succeeded = (strcmp(ClassPath_29, (MR_String) "") == 0);
  if (succeeded)
    InclOpts_30 = (MR_String) "";
  else
  {
    MR_String Var_78;
    MR_String Var_79;

    Var_79 = libs__shell_util__quote_shell_cmd_arg_1_f_0(ClassPath_29);
    Var_78 = mercury__string__f_43_43_2_f_0(Var_79, (MR_String) " ");
    InclOpts_30 = mercury__string__f_43_43_2_f_0((MR_String) "-classpath ", Var_78);
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 470, &TargetDebug_31);
  switch (TargetDebug_31) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TargetDebugOpts_32 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      TargetDebugOpts_32 = (MR_String) "-g ";
      break;
  }
  parse_tree__file_names__get_java_dir_path_4_p_0(Globals_8, (MR_Integer) 0, &SourceDirPath_33, &_SourceDirPathProposed_34);
  parse_tree__file_names__get_java_dir_path_4_p_0(Globals_8, (MR_Integer) 1, &DestDirPath_35, &_DestDirPathProposed_36);
  if ((SourceDirPath_33 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_84;

    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_84, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2]));
      MR_hl_field(0, Var_84, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_java_files_7_p_0_2));
      MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_84, 3) = ((MR_Box) (DestDirPath_35));
      MR_hl_field(0, Var_84, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140backend_libs.compile_target_code.compile_java_files\'/7", (MR_String) "DestDirPath != []");
    DirOpts_37 = (MR_String) "";
  }
  else
  {
    MR_String SourceDirName_40;
    MR_String DestDirName_41;
    MR_Word Var_88;
    MR_String Var_94;
    MR_String Var_95;
    MR_String Var_97;
    MR_String Var_99;
    MR_Word Var_42;

    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2]));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_java_files_7_p_0_3));
      MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_88, 3) = ((MR_Box) (DestDirPath_35));
      MR_hl_field(0, Var_88, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_not_3_p_0(Var_88, (MR_String) "predicate \140backend_libs.compile_target_code.compile_java_files\'/7", (MR_String) "DestDirPath == []");
    SourceDirName_40 = mercury__dir__relative_path_name_from_components_1_f_0(SourceDirPath_33);
    DestDirName_41 = mercury__dir__relative_path_name_from_components_1_f_0(DestDirPath_35);
    mercury__dir__make_directory_4_p_0(DestDirName_41, &Var_42);
    Var_99 = mercury__string__f_43_43_2_f_0(DestDirName_41, (MR_String) " ");
    Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "-d ", Var_99);
    Var_95 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_97);
    Var_94 = mercury__string__f_43_43_2_f_0(SourceDirName_40, Var_95);
    DirOpts_37 = mercury__string__f_43_43_2_f_0((MR_String) "-sourcepath ", Var_94);
  }
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 611, &MFilterJavac_43);
  succeeded = (strcmp(MFilterJavac_43, (MR_String) "") == 0);
  if (succeeded)
    MaybeMFilterJavac_44 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      MaybeMFilterJavac_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeMFilterJavac_44, 0) = ((MR_Box) (MFilterJavac_43));
    }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (HeadJavaFile_10));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (TailJavaFiles_11));
  }
  JoinedJavaFiles_46 = mercury__string__join_list_2_f_0((MR_String) " ", Var_103);
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (JoinedJavaFiles_46));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (JAVAFLAGS_23));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (TargetDebugOpts_32));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (DirOpts_37));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_106));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (InclOpts_30));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
  }
  mercury__string__append_list_2_p_0(Var_104, &CommandArgs_47);
  libs__system_cmds__invoke_long_system_command_maybe_filter_output_11_p_0(Globals_8, ProgressStream_9, ProgressStream_9, (MR_Integer) 1, JavaCompiler_17, NonAtFileCommandArgs_45, CommandArgs_47, MaybeMFilterJavac_44, Succeeded_12);
}

static MR_String MR_CALL 
backend_libs__compile_target_code__java_classpath_separator_0_f_0(void)
{
  MR_bool succeeded;
  MR_String PathSeparator_2;

  succeeded = mercury__dir__use_windows_paths_0_p_0();
  if (!(succeeded))
    succeeded = mercury__io__have_cygwin_0_p_0();
  if (succeeded)
    PathSeparator_2 = (MR_String) ";";
  else
    PathSeparator_2 = (MR_String) ":";
  return PathSeparator_2;
}

void MR_CALL 
backend_libs__compile_target_code__compile_c_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12)
{
  MR_String C_File_14;
  MR_Word ExtObj_16;
  MR_String O_File_18;
  MR_Word Var_27;
  MR_String _C_FileProposed_15;
  MR_String _O_FileProposed_19;

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.compile_c_file\'/7", (MR_Word) (MR_mkword(3, &backend_libs__compile_target_code_scalar_common_1[1])), ModuleName_11, &C_File_14, &_C_FileProposed_15);
  switch (PIC_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ExtObj_16 = (MR_Integer) 4;
      break;
    case (MR_Integer) 0:
      ExtObj_16 = (MR_Integer) 5;
      break;
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_27, 1) = (MR_Box) ((MR_Unsigned) (ExtObj_16));
  }
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_8, (MR_String) "predicate \140backend_libs.compile_target_code.compile_c_file\'/7", Var_27, ModuleName_11, &O_File_18, &_O_FileProposed_19);
  backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_8, ProgressStream_9, PIC_10, C_File_14, O_File_18, Succeeded_12);
}

void MR_CALL 
backend_libs__compile_target_code__do_compile_c_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word PIC_11,
  MR_String C_File_12,
  MR_String O_File_13,
  MR_Word * Succeeded_14)
{
  MR_bool succeeded;
  MR_Word Verbose_16;
  MR_String NameObjectFile_17;
  MR_String CC_18;
  MR_String AllCFlags_19;
  MR_String Command_20;
  MR_Word MaybeFilterCmd_21;
  MR_Word Stats_22;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_String Var_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_String Var_45;
  MR_String FilterCmd_55;
  MR_Word Var_58;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 131, &Verbose_16);
  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 493, &NameObjectFile_17);
  switch (Verbose_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "% Compiling \140");
        mercury__io__write_string_4_p_0(ProgressStream_10, C_File_12);
        mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\':\n");
      }
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 472, &CC_18);
  backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(Globals_9, PIC_11, &AllCFlags_19);
  Var_40 = libs__shell_util__quote_shell_cmd_arg_1_f_0(C_File_12);
  Var_45 = libs__shell_util__quote_shell_cmd_arg_1_f_0(O_File_13);
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (NameObjectFile_17));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_String) " -c "));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (AllCFlags_19));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (CC_18));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_34));
  }
  mercury__string__append_list_2_p_0(Var_33, &Command_20);
  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, (MR_Integer) 53, (MR_Integer) 1);
  if (succeeded)
  {
    Var_58 = (MR_Integer) 610;
    libs__globals__lookup_string_option_3_p_0(Globals_9, Var_58, &FilterCmd_55);
    succeeded = (strcmp(FilterCmd_55, (MR_String) "") == 0);
    succeeded = !(succeeded);
  }
  if (succeeded)
    {
      MaybeFilterCmd_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFilterCmd_21, 0) = ((MR_Box) (FilterCmd_55));
    }
  else
    MaybeFilterCmd_21 = (MR_Word) ((MR_Unsigned) 0U);
  libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(Globals_9, ProgressStream_10, ProgressStream_10, (MR_Integer) 1, Command_20, MaybeFilterCmd_21, Succeeded_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 133, &Stats_22);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_22);
}

static void MR_CALL 
backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(
  MR_Word Globals_4,
  MR_Word PIC_5,
  MR_String * AllCFlags_6)
{
  MR_bool succeeded;
  MR_Word C_Flags_List_7;
  MR_String CFLAGS_8;
  MR_String CC_Specific_CFLAGS_9;
  MR_Word SubdirSetting_10;
  MR_String SubDirInclOpt_11;
  MR_String InclOpt_12;
  MR_String FrameworkInclOpt_13;
  MR_String GradeDefinesOpts_14;
  MR_Word GCC_Regs_15;
  MR_String CFLAGS_FOR_REGS_16;
  MR_Word GCC_Gotos_17;
  MR_String CFLAGS_FOR_GOTOS_18;
  MR_Word Parallel_19;
  MR_String CFLAGS_FOR_THREADS_20;
  MR_String CFLAGS_FOR_PIC_21;
  MR_String CFLAGS_FOR_LTO_22;
  MR_Word Target_Debug_23;
  MR_String Target_DebugOpt_25;
  MR_String SanitizerOpts_26;
  MR_Word C_CompilerType_27;
  MR_Word UseTrail_28;
  MR_String C_FnAlignOpt_34;
  MR_Word TypeLayoutOption_37;
  MR_String TypeLayoutOpt_38;
  MR_Word OptTuple_39;
  MR_Word OptimizeC_40;
  MR_String OptimizeOpt_41;
  MR_Word InlineAlloc_42;
  MR_String InlineAllocOpt_43;
  MR_Word Warn_44;
  MR_String WarningOpt_45;
  MR_Word ExecTrace_46;
  MR_String TargetArch_47;
  MR_String OverrideOpts_50;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_124;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 476, &C_Flags_List_7);
  backend_libs__compile_target_code__join_string_list_5_p_0(C_Flags_List_7, (MR_String) "", (MR_String) "", (MR_String) " ", &CFLAGS_8);
  backend_libs__compile_target_code__gather_specific_c_compiler_flags_2_p_0(Globals_4, &CC_Specific_CFLAGS_9);
  libs__globals__get_subdir_setting_2_p_0(Globals_4, &SubdirSetting_10);
  switch (SubdirSetting_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SubDirInclOpt_11 = (MR_String) "";
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      SubDirInclOpt_11 = (MR_String) "-I. ";
      break;
  }
  backend_libs__compile_target_code__get_c_include_dir_flags_2_p_0(Globals_4, &InclOpt_12);
  backend_libs__compile_target_code__get_framework_directories_flags_2_p_0(Globals_4, &FrameworkInclOpt_13);
  backend_libs__compile_target_code__get_c_grade_defines_2_p_0(Globals_4, &GradeDefinesOpts_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 51, &GCC_Regs_15);
  switch (GCC_Regs_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CFLAGS_FOR_REGS_16 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 487, &CFLAGS_FOR_REGS_16);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 52, &GCC_Gotos_17);
  switch (GCC_Gotos_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CFLAGS_FOR_GOTOS_18 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 488, &CFLAGS_FOR_GOTOS_18);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 92, &Parallel_19);
  switch (Parallel_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CFLAGS_FOR_THREADS_20 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 489, &CFLAGS_FOR_THREADS_20);
      break;
  }
  switch (PIC_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      CFLAGS_FOR_PIC_21 = (MR_String) "";
      break;
    case (MR_Integer) 0:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 490, &CFLAGS_FOR_PIC_21);
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 492, &CFLAGS_FOR_LTO_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 470, &Target_Debug_23);
  switch (Target_Debug_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Target_DebugOpt_25 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_String Target_DebugOpt0_24;

        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 486, &Target_DebugOpt0_24);
        Target_DebugOpt_25 = mercury__string__f_43_43_2_f_0(Target_DebugOpt0_24, (MR_String) " ");
      }
      break;
  }
  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 491, &SanitizerOpts_26);
  libs__globals__get_c_compiler_type_2_p_0(Globals_4, &C_CompilerType_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 90, &UseTrail_28);
  switch (UseTrail_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      C_FnAlignOpt_34 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) C_CompilerType_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          C_FnAlignOpt_34 = (MR_String) "";
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Integer BytesPerWord_33;
            MR_String Var_375;
            MR_String Var_382;

            libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 103, &BytesPerWord_33);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_2[1]), BytesPerWord_33, &Var_375);
            Var_382 = mercury__string__f_43_43_2_f_0(Var_375, (MR_String) " ");
            C_FnAlignOpt_34 = mercury__string__f_43_43_2_f_0((MR_String) "-falign-functions=", Var_382);
          }
          break;
        case (MR_Integer) 3:
          C_FnAlignOpt_34 = (MR_String) "";
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 748, &TypeLayoutOption_37);
  switch (TypeLayoutOption_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TypeLayoutOpt_38 = (MR_String) "-DMR_NO_TYPE_LAYOUT ";
      break;
    case (MR_Integer) 1:
      TypeLayoutOpt_38 = (MR_String) "";
      break;
  }
  libs__globals__get_opt_tuple_2_p_0(Globals_4, &OptTuple_39);
  InlineAlloc_42 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_39, 2))) >> 1)) & (MR_Integer) 1);
  OptimizeC_40 = ((MR_Unsigned) ((MR_hl_field(0, OptTuple_39, 2))) & (MR_Integer) 1);
  switch (OptimizeC_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      OptimizeOpt_41 = (MR_String) "";
      break;
    case (MR_Integer) 0:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 485, &OptimizeOpt_41);
      break;
  }
  switch (InlineAlloc_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      InlineAllocOpt_43 = (MR_String) "";
      break;
    case (MR_Integer) 0:
      InlineAllocOpt_43 = (MR_String) "";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 471, &Warn_44);
  switch (Warn_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      WarningOpt_45 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 484, &WarningOpt_45);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 57, &ExecTrace_46);
  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 600, &TargetArch_47);
  succeeded = (ExecTrace_46 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(TargetArch_47);
    if (!(succeeded))
    {
      MR_Word Var_79;
      MR_Integer Var_80;
      MR_String Var_81;

      succeeded = (GCC_Regs_15 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) C_CompilerType_27)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_79 = ((MR_Word) ((MR_hl_field(1, C_CompilerType_27, 0))));
          succeeded = (Var_79 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_80 = ((MR_Integer) ((MR_hl_field(1, Var_79, 0))));
            succeeded = (Var_80 == (MR_Integer) 9);
            if (succeeded)
            {
              Var_81 = (MR_String) "x86_64";
              succeeded = mercury__string__prefix_2_p_0(TargetArch_47, Var_81);
            }
          }
        }
      }
    }
  }
  if (succeeded)
    OverrideOpts_50 = (MR_String) "-O0";
  else
    OverrideOpts_50 = (MR_String) "";
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (OverrideOpts_50));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (CC_Specific_CFLAGS_9));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_121));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (CFLAGS_8));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_119));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (WarningOpt_45));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (C_FnAlignOpt_34));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (InlineAllocOpt_43));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_114));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (TypeLayoutOpt_38));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_113));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (SanitizerOpts_26));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (Target_DebugOpt_25));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (CFLAGS_FOR_LTO_22));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_106));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (CFLAGS_FOR_PIC_21));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (CFLAGS_FOR_THREADS_20));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (CFLAGS_FOR_GOTOS_18));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (CFLAGS_FOR_REGS_16));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (GradeDefinesOpts_14));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (OptimizeOpt_41));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (FrameworkInclOpt_13));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) ((MR_String) " "));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_86));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (InclOpt_12));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (SubDirInclOpt_11));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
  }
  mercury__string__append_list_2_p_0(Var_82, AllCFlags_6);
}

static void MR_CALL 
backend_libs__compile_target_code__gather_specific_c_compiler_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * Flags_4)
{
  MR_Word C_CompilerType_5;
  MR_Word FlagsList_9;

  libs__globals__get_c_compiler_type_2_p_0(Globals_3, &C_CompilerType_5);
  switch (MR_tag((MR_Word) C_CompilerType_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FlagsList_9 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 478, &FlagsList_9);
      break;
    case (MR_Integer) 2:
      libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 480, &FlagsList_9);
      break;
    case (MR_Integer) 3:
      libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 482, &FlagsList_9);
      break;
  }
  backend_libs__compile_target_code__join_string_list_5_p_0(FlagsList_9, (MR_String) "", (MR_String) "", (MR_String) " ", Flags_4);
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(
  MR_String FullArch_2)
{
  MR_bool succeeded;
  MR_Word ArchComponents_3;
  MR_String Mfr_5;
  MR_String OS_6;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_String Var_11;

  ArchComponents_3 = mercury__string__split_at_char_2_f_0((MR_Char) 45, FullArch_2);
  succeeded = (ArchComponents_3 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ArchComponents_3, 1))));
    succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Mfr_5 = ((MR_String) ((MR_hl_field(1, Var_8, 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(1, Var_8, 1))));
      succeeded = (strcmp(Mfr_5, (MR_String) "apple") == 0);
      if (succeeded)
      {
        succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OS_6 = ((MR_String) ((MR_hl_field(1, Var_9, 0))));
          Var_10 = ((MR_Word) ((MR_hl_field(1, Var_9, 1))));
          succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_11 = (MR_String) "darwin";
            succeeded = mercury__string__prefix_2_p_0(OS_6, Var_11);
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_framework_directories_flags_2_p_0_1(
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
backend_libs__compile_target_code__get_framework_directories_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * FrameworkDirOpts_4)
{
  MR_Word FrameworkDirs0_5;
  MR_Word QuotedStrings_10;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 543, &FrameworkDirs0_5);
  QuotedStrings_10 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_4[1]), FrameworkDirs0_5);
  backend_libs__compile_target_code__join_string_list_5_p_0(QuotedStrings_10, (MR_String) "-F", (MR_String) "", (MR_String) " ", FrameworkDirOpts_4);
}

void MR_CALL 
backend_libs__compile_target_code__join_string_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_String * HeadVar__5_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_String) "";
  else
  {
    MR_String String_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Strings_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

    if ((Strings_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (String_9));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
      }
      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
      }
      mercury__string__append_list_2_p_0(Var_18, HeadVar__5_5);
    }
    else
    {
      MR_String Result0_17;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;

      backend_libs__compile_target_code__join_string_list_5_p_0(Strings_10, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, &Result0_17);
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (Result0_17));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (String_9));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
      }
      mercury__string__append_list_2_p_0(Var_22, HeadVar__5_5);
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_c_include_dir_flags_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_12;

  conv0_LambdaHeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__get_c_include_dir_flags__1528__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  return wrapper_arg_2;
}

void MR_CALL 
backend_libs__compile_target_code__get_c_include_dir_flags_2_p_0(
  MR_Word Globals_3,
  MR_String * InclOpts_4)
{
  MR_Word CInclDirs_5;
  MR_Word Var_8;
  MR_Word Var_9;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 475, &CInclDirs_5);
  Var_9 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__compile_target_code_scalar_common_4[0]), CInclDirs_5);
  Var_8 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9);
  *InclOpts_4 = mercury__string__append_list_1_f_0(Var_8);
}

void MR_CALL 
backend_libs__compile_target_code__get_c_grade_defines_2_p_0(
  MR_Word Globals_3,
  MR_String * GradeDefines_4)
{
  MR_bool succeeded;
  MR_Word HighLevelCode_5;
  MR_String HighLevelCodeOpt_6;
  MR_Word GCC_Regs_7;
  MR_String RegOpt_8;
  MR_Word GCC_Gotos_9;
  MR_String GotoOpt_10;
  MR_Word ASM_Labels_11;
  MR_String AsmOpt_12;
  MR_Word Parallel_13;
  MR_String ParallelOpt_14;
  MR_Word Threadscope_15;
  MR_String ThreadscopeOpt_16;
  MR_Word GC_Method_17;
  MR_String GC_Opt_19;
  MR_Word ProfileCalls_20;
  MR_String ProfileCallsOpt_21;
  MR_Word ProfileTime_22;
  MR_String ProfileTimeOpt_23;
  MR_Word ProfileMemory_24;
  MR_String ProfileMemoryOpt_25;
  MR_Word ProfileDeep_26;
  MR_String ProfileDeepOpt_27;
  MR_Word RecordTermSizesAsWords_28;
  MR_Word RecordTermSizesAsCells_29;
  MR_String RecordTermSizesOpt_30;
  MR_Integer NumPtagBits_31;
  MR_String NumPtagBitsString_32;
  MR_String NumPtagBitsOpt_33;
  MR_Word DeclDebug_34;
  MR_String DeclDebugOpt_35;
  MR_Word SourceDebug_36;
  MR_String SourceDebugOpt_37;
  MR_Word ExecTrace_38;
  MR_String ExecTraceOpt_39;
  MR_Word Extend_40;
  MR_Word StackSegments_41;
  MR_String ExtendOpt_42;
  MR_Word TargetDebugGrade_43;
  MR_String TargetDebugGradeOpt_44;
  MR_Word UseTrail_45;
  MR_String UseTrailOpt_46;
  MR_Word MinimalModelStackCopy_47;
  MR_Word MinimalModelOwnStacks_48;
  MR_String MinimalModelBaseOpt_49;
  MR_Word MinimalModelDebug_50;
  MR_String MinimalModelOpt_51;
  MR_Word PregeneratedDist_52;
  MR_String PregeneratedDistOpt_53;
  MR_Word SinglePrecFloat_54;
  MR_String SinglePrecFloatOpt_55;
  MR_Word UseRegions_56;
  MR_String UseRegionsOpt_61;
  MR_String Var_81;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 55, &HighLevelCode_5);
  switch (HighLevelCode_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HighLevelCodeOpt_6 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      HighLevelCodeOpt_6 = (MR_String) "-DMR_HIGHLEVEL_CODE ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 51, &GCC_Regs_7);
  switch (GCC_Regs_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      RegOpt_8 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      RegOpt_8 = (MR_String) "-DMR_USE_GCC_GLOBAL_REGISTERS ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 52, &GCC_Gotos_9);
  switch (GCC_Gotos_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GotoOpt_10 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      GotoOpt_10 = (MR_String) "-DMR_USE_GCC_NONLOCAL_GOTOS ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 53, &ASM_Labels_11);
  switch (ASM_Labels_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AsmOpt_12 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      AsmOpt_12 = (MR_String) "-DMR_USE_ASM_LABELS ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 92, &Parallel_13);
  switch (Parallel_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ParallelOpt_14 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      ParallelOpt_14 = (MR_String) "-DMR_THREAD_SAFE ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 85, &Threadscope_15);
  switch (Threadscope_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ThreadscopeOpt_16 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      ThreadscopeOpt_16 = (MR_String) "-DMR_THREADSCOPE ";
      break;
  }
  libs__globals__get_gc_method_2_p_0(Globals_3, &GC_Method_17);
  switch (GC_Method_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
      GC_Opt_19 = (MR_String) "-DMR_NATIVE_GC ";
      break;
    case (MR_Integer) 0:
      GC_Opt_19 = (MR_String) "";
      break;
    case (MR_Integer) 2:
      GC_Opt_19 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC ";
      break;
    case (MR_Integer) 3:
      GC_Opt_19 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC -DMR_BOEHM_GC_DEBUG -DGC_DEBUG -DKEEP_BACKPTRS ";
      break;
    case (MR_Integer) 4:
      GC_Opt_19 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_HGC ";
      break;
    case (MR_Integer) 1:
      GC_Opt_19 = (MR_String) "";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 63, &ProfileCalls_20);
  switch (ProfileCalls_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ProfileCallsOpt_21 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      ProfileCallsOpt_21 = (MR_String) "-DMR_MPROF_PROFILE_CALLS ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 64, &ProfileTime_22);
  switch (ProfileTime_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ProfileTimeOpt_23 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      ProfileTimeOpt_23 = (MR_String) "-DMR_MPROF_PROFILE_TIME ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 65, &ProfileMemory_24);
  switch (ProfileMemory_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ProfileMemoryOpt_25 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      ProfileMemoryOpt_25 = (MR_String) "-DMR_MPROF_PROFILE_MEMORY ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 67, &ProfileDeep_26);
  switch (ProfileDeep_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ProfileDeepOpt_27 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      ProfileDeepOpt_27 = (MR_String) "-DMR_DEEP_PROFILING ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 83, &RecordTermSizesAsWords_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 84, &RecordTermSizesAsCells_29);
  switch (RecordTermSizesAsWords_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (RecordTermSizesAsCells_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          RecordTermSizesOpt_30 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          RecordTermSizesOpt_30 = (MR_String) "-DMR_RECORD_TERM_SIZES -DMR_RECORD_TERM_SIZES_AS_CELLS ";
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (RecordTermSizesAsCells_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          RecordTermSizesOpt_30 = (MR_String) "-DMR_RECORD_TERM_SIZES ";
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.get_c_grade_defines\'/2", (MR_String) "inconsistent record term size options");
            return;
          }
          break;
      }
      break;
  }
  libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 101, &NumPtagBits_31);
  mercury__string__int_to_string_2_p_0(NumPtagBits_31, &NumPtagBitsString_32);
  Var_81 = mercury__string__f_43_43_2_f_0(NumPtagBitsString_32, (MR_String) " ");
  NumPtagBitsOpt_33 = mercury__string__f_43_43_2_f_0((MR_String) "-DMR_TAGBITS=", Var_81);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 58, &DeclDebug_34);
  switch (DeclDebug_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DeclDebugOpt_35 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      DeclDebugOpt_35 = (MR_String) "-DMR_DECL_DEBUG ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 59, &SourceDebug_36);
  switch (SourceDebug_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SourceDebugOpt_37 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      SourceDebugOpt_37 = (MR_String) "-DMR_SS_DEBUG ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 57, &ExecTrace_38);
  switch (ExecTrace_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ExecTraceOpt_39 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      ExecTraceOpt_39 = (MR_String) "-DMR_EXEC_TRACE ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 89, &Extend_40);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 88, &StackSegments_41);
  switch (Extend_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (StackSegments_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ExtendOpt_42 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          ExtendOpt_42 = (MR_String) "-DMR_STACK_SEGMENTS ";
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (StackSegments_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ExtendOpt_42 = (MR_String) "-DMR_EXTEND_STACKS_WHEN_NEEDED ";
          break;
        case (MR_Integer) 1:
          {
            MR_Box conv0_ExtendOpt_42;

            {
              conv0_ExtendOpt_42 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_String) "predicate \140backend_libs.compile_target_code.get_c_grade_defines\'/2", (MR_String) "--extend-stacks-when-needed and --stack-segments");
              return;
            }
            ExtendOpt_42 = ((MR_String) (conv0_ExtendOpt_42));
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 56, &TargetDebugGrade_43);
  switch (TargetDebugGrade_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TargetDebugGradeOpt_44 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      TargetDebugGradeOpt_44 = (MR_String) "-DMR_TARGET_DEBUG_GRADE ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 90, &UseTrail_45);
  switch (UseTrail_45) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UseTrailOpt_46 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      UseTrailOpt_46 = (MR_String) "-DMR_USE_TRAIL ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 94, &MinimalModelStackCopy_47);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 95, &MinimalModelOwnStacks_48);
  switch (MinimalModelStackCopy_47) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MinimalModelOwnStacks_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MinimalModelBaseOpt_49 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          MinimalModelBaseOpt_49 = (MR_String) "-DMR_USE_MINIMAL_MODEL_OWN_STACKS ";
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (MinimalModelOwnStacks_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MinimalModelBaseOpt_49 = (MR_String) "-DMR_USE_MINIMAL_MODEL_STACK_COPY ";
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.get_c_grade_defines\'/2", (MR_String) "inconsistent minimal model options");
            return;
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 96, &MinimalModelDebug_50);
  switch (MinimalModelDebug_50) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MinimalModelOpt_51 = MinimalModelBaseOpt_49;
      break;
    case (MR_Integer) 1:
      {
        succeeded = (strcmp(MinimalModelBaseOpt_49, (MR_String) "") == 0);
        if (succeeded)
          MinimalModelOpt_51 = MinimalModelBaseOpt_49;
        else
          MinimalModelOpt_51 = mercury__string__f_43_43_2_f_0(MinimalModelBaseOpt_49, (MR_String) "-DMR_MINIMAL_MODEL_DEBUG ");
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 86, &PregeneratedDist_52);
  switch (PregeneratedDist_52) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PregeneratedDistOpt_53 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      PregeneratedDistOpt_53 = (MR_String) "-DMR_PREGENERATED_DIST ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 91, &SinglePrecFloat_54);
  switch (SinglePrecFloat_54) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SinglePrecFloatOpt_55 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      SinglePrecFloatOpt_55 = (MR_String) "-DMR_USE_SINGLE_PREC_FLOAT ";
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 97, &UseRegions_56);
  switch (UseRegions_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UseRegionsOpt_61 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      {
        MR_Word UseRegionsDebug_58;
        MR_String UseRegionsOpt1_59;
        MR_Word UseRegionsProfiling_60;

        libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 99, &UseRegionsDebug_58);
        switch (UseRegionsDebug_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            UseRegionsOpt1_59 = (MR_String) "-DMR_USE_REGIONS ";
            break;
          case (MR_Integer) 1:
            UseRegionsOpt1_59 = (MR_String) "-DMR_USE_REGIONS -DMR_RBMM_DEBUG ";
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 100, &UseRegionsProfiling_60);
        switch (UseRegionsProfiling_60) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            UseRegionsOpt_61 = UseRegionsOpt1_59;
            break;
          case (MR_Integer) 1:
            UseRegionsOpt_61 = mercury__string__f_43_43_2_f_0(UseRegionsOpt1_59, (MR_String) "-DMR_RBMM_PROFILING ");
            break;
        }
      }
      break;
  }
  {
    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_127, 0) = ((MR_Box) (UseRegionsOpt_61));
    MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (SinglePrecFloatOpt_55));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_127));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (PregeneratedDistOpt_53));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_126));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (MinimalModelOpt_51));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_125));
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (UseTrailOpt_46));
    MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (ExecTraceOpt_39));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_123));
  }
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (SourceDebugOpt_37));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (DeclDebugOpt_35));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (TargetDebugGradeOpt_44));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (ExtendOpt_42));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_119));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (NumPtagBitsOpt_33));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (RecordTermSizesOpt_30));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (ProfileDeepOpt_27));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (ProfileMemoryOpt_25));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (ProfileTimeOpt_23));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_114));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (ProfileCallsOpt_21));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_113));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (GC_Opt_19));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (ThreadscopeOpt_16));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (ParallelOpt_14));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (AsmOpt_12));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (GotoOpt_10));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (RegOpt_8));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (HighLevelCodeOpt_6));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_106));
  }
  mercury__string__append_list_2_p_0(Var_105, GradeDefines_4);
}

void MR_CALL 
backend_libs__compile_target_code__get_executable_object_code_type_2_p_0(
  MR_Word _Globals_3,
  MR_Word * PIC_4)
{
  backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_101_99_117_116_97_98_108_101_95_111_98_106_101_99_116_95_99_111_100_101_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(PIC_4);
}

void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_101_99_117_116_97_98_108_101_95_111_98_106_101_99_116_95_99_111_100_101_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word * PIC_4)
{
  *PIC_4 = (MR_Integer) 1;
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__compile_target_code____Unify____is_as_new_as_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__compile_target_code____Compare____is_as_new_as_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__compile_target_code____Unify____pic_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__compile_target_code____Compare____pic_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__compile_target_code__init(void)
{
}

void mercury__backend_libs__compile_target_code__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_compile_init_file_pred_0);
  MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_is_as_new_as_0);
  MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0);
}

void mercury__backend_libs__compile_target_code__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__compile_target_code__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.compile_target_code.
