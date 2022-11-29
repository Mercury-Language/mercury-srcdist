/*
** Automatically generated from `make.top_level.m'
** by the Mercury compiler,
** version rotd-2022-11-29
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


// :- module make.top_level.
// :- implementation.

/*
INIT mercury__make__top_level__init
ENDINIT
*/

#include "make.top_level.mih"


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
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.track_flags.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"



struct make__top_level__classify_target_2_4_p_0_env_0_s {
  MR_Word make__top_level__classify_target_2_4_p_0_env_0__Globals_5;
  MR_String make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
  MR_Word * make__top_level__classify_target_2_4_p_0_env_0__HeadVar__4_4;
  MR_Cont make__top_level__classify_target_2_4_p_0_env_0__cont;
  void * make__top_level__classify_target_2_4_p_0_env_0__cont_env_ptr;
  MR_bool make__top_level__classify_target_2_4_p_0_env_0__succeeded;
  MR_Word make__top_level__classify_target_2_4_p_0_env_0__ModuleName_8;
  MR_Word make__top_level__classify_target_2_4_p_0_env_0__TargetType_9;
  MR_String make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11;
  MR_Word make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43;
  MR_bool make__top_level__classify_target_2_4_p_0_env_0__cond_0;
  MR_String make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16;
};

struct make__top_level__classify_target_3_p_0_2_env_0_s {
  MR_Box * make__top_level__classify_target_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont make__top_level__classify_target_3_p_0_2_env_0__cont;
  void * make__top_level__classify_target_3_p_0_2_env_0__cont_env_ptr;
  MR_Word make__top_level__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__top_level__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_target_type_0;

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__report_any_absolute_targets__202__1_1_p_0(
  MR_String LambdaHeadVar__1_15);

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__108__1_1_p_0(
  MR_String LambdaHeadVar__1_56);

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
make__top_level__classify_target_2_4_p_0(
  MR_Word Globals_5,
  MR_String ModuleNameStr0_6,
  MR_String ExtStr_7,
  MR_Word * HeadVar__4_4,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
make__top_level__classify_target_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
make__top_level__classify_target_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
make__top_level__classify_target_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
make__top_level__search_backwards_for_dot_3_p_0(
  MR_String String_4,
  MR_Integer Index_5,
  MR_Integer * DotIndex_6);

static void MR_CALL 
make__top_level__make_target_7_p_0(
  MR_Word Globals_8,
  MR_Word Target_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static MR_Word MR_CALL 
make__top_level__report_target_with_dir_component_2_f_0(
  MR_String ProgName_4,
  MR_String Target_5);

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box make__top_level_scalar_common_1[14][3];

static /* final */ const MR_Box make__top_level_scalar_common_2[9][2];

static /* final */ const MR_Box make__top_level_scalar_common_3[10][1];

static /* final */ const MR_Box make__top_level_scalar_common_4[1][4];

static /* final */ const MR_Box make__top_level_scalar_common_5[3][5];

static /* final */ const MR_Box make__top_level_scalar_common_6[2][6];

static /* final */ const MR_Box make__top_level_scalar_common_7[1][10];

static /* final */ const MR_Box make__top_level_scalar_common_8[1][7];




static /* final */ const MR_Box make__top_level_scalar_common_1[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__top_level_scalar_common_4[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[2])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__top_level_scalar_common_4[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__top_level_scalar_common_7[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__top_level_scalar_common_4[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[2])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__top_level_scalar_common_4[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__top_level_scalar_common_7[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_2[9][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "*** Error: no target or MAIN_TARGET specified."))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a make target may not contain a directory component,"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[0])))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_3[10][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_3[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 20U))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__top_level__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_target_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__top_level__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_target_type_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__top_level__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_target_type_0))
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
#include "make.build.mh"



static const MR_FA_PseudoTypeInfo_Struct2 make__top_level__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_type_0)
  }
};

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__report_any_absolute_targets__202__1_1_p_0(
  MR_String LambdaHeadVar__1_15)
{
  MR_bool succeeded;
  MR_Char Var_16;

  Var_16 = mercury__dir__directory_separator_0_f_0();
  succeeded = mercury__string__contains_char_2_p_0(LambdaHeadVar__1_15, Var_16);
  return succeeded;
}

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__108__1_1_p_0(
  MR_String LambdaHeadVar__1_56)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(LambdaHeadVar__1_56, (MR_String) ".depend");
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_1(
  void * env_ptr_arg)
{
  struct make__top_level__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__top_level__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

  parse_tree__file_names__file_name_to_module_name_2_p_0((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11, &(env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleName_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__HeadVar__4_4) = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__TargetType_9));
  }
  ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__cont)((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_3(
  void * env_ptr_arg)
{
  struct make__top_level__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__top_level__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_17;
    MR_Unsigned packed_word_0;

    (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__util__extension_to_target_type_3_p_0((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16, &(env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43);
    if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43)) == (MR_Integer) 1);
      if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      {
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43, (MR_Integer) 0)));
        Var_17 = ((MR_Unsigned) ((MR_hl_field(1, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43, (MR_Integer) 0))) & (MR_Integer) 1);
      }
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = !((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded);
    }
    if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      make__top_level__classify_target_2_4_p_0_2(env_ptr);
  }
  {
    MR_Word Var_55;
    MR_Unsigned packed_word_1;

    (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16, &(env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43);
    if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43)) == (MR_Integer) 1);
      if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      {
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43, (MR_Integer) 0)));
        Var_55 = ((MR_Unsigned) ((MR_hl_field(1, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43, (MR_Integer) 0))) & (MR_Integer) 1);
      }
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = !((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded);
    }
    if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      make__top_level__classify_target_2_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_2(
  void * env_ptr_arg)
{
  struct make__top_level__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__top_level__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__cond_0 = MR_TRUE;
  {
    MR_Word Var_29;

    (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (Var_29));
    }
    make__top_level__classify_target_2_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0(
  MR_Word Globals_5,
  MR_String ModuleNameStr0_6,
  MR_String ExtStr_7,
  MR_Word * HeadVar__4_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct make__top_level__classify_target_2_4_p_0_env_0_s env;

  (env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5 = Globals_5;
  (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6 = ModuleNameStr0_6;
  (env).make__top_level__classify_target_2_4_p_0_env_0__HeadVar__4_4 = HeadVar__4_4;
  (env).make__top_level__classify_target_2_4_p_0_env_0__cont = cont;
  (env).make__top_level__classify_target_2_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word ModuleTargetType_10;

    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__util__extension_to_target_type_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, ExtStr_7, &ModuleTargetType_10);
    if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".cs") == 0);
      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = !((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded);
    }
    if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ModuleTargetType_10));
      }
      make__top_level__classify_target_2_4_p_0_1(&env);
    }
    else
    {
      MR_Word ModuleTargetType_50;

      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0(ExtStr_7, &ModuleTargetType_50);
      if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      {
        (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ModuleTargetType_50));
        }
        make__top_level__classify_target_2_4_p_0_1(&env);
      }
      else
      {
        MR_String ModuleNameStr1_12;
        MR_String Var_19;
        MR_String Var_51;

        libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 610, &Var_51);
        (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_51) == 0);
        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
        {
          Var_19 = (MR_String) "lib";
          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_19, &ModuleNameStr1_12, (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
        }
        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
        {
          (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_12;
          (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(1, &make__top_level_scalar_common_3[1]));
          make__top_level__classify_target_2_4_p_0_1(&env);
        }
        else
        {
          MR_String ModuleNameStr1_48;
          MR_String Var_22;
          MR_String Var_52;

          libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 609, &Var_52);
          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_52) == 0);
          if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
          {
            Var_22 = (MR_String) "lib";
            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_22, &ModuleNameStr1_48, (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
          }
          if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
          {
            (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_48;
            (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(1, &make__top_level_scalar_common_3[2]));
            make__top_level__classify_target_2_4_p_0_1(&env);
          }
          else
          {
            MR_String Var_53;

            libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 611, &Var_53);
            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_53) == 0);
            if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
            {
              MR_Word ExecutableType_13;
              MR_Word CompilationTarget_54;

              (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
              libs__globals__get_target_2_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, &CompilationTarget_54);
              switch (CompilationTarget_54) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ExecutableType_13 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  ExecutableType_13 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 2:
                  ExecutableType_13 = (MR_Integer) 5;
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (ExecutableType_13));
              }
              make__top_level__classify_target_2_4_p_0_1(&env);
            }
            else
            {
              (env).make__top_level__classify_target_2_4_p_0_env_0__cond_0 = MR_FALSE;
              {
                MR_String Rest_14;
                MR_String DotlessExtStr1_15;
                MR_String Var_26;
                MR_String Var_27;

                (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) ".all_", &Rest_14, ExtStr_7);
                if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                {
                  Var_26 = (MR_String) "s";
                  (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_3(&DotlessExtStr1_15, Var_26, Rest_14);
                  if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                  {
                    Var_27 = (MR_String) ".";
                    (env).make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16 = mercury__string__f_43_43_2_f_0(Var_27, DotlessExtStr1_15);
                    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                  }
                }
                if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                  make__top_level__classify_target_2_4_p_0_3(&env);
              }
              (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_3(&(env).make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16, (MR_String) "s", ExtStr_7);
              if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                make__top_level__classify_target_2_4_p_0_3(&env);
              if (!((env).make__top_level__classify_target_2_4_p_0_env_0__cond_0))
              {
                (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".check") == 0);
                if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                {
                  (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                  (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_3[4]));
                  (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                }
                else
                {
                  (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".analyse") == 0);
                  if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                  {
                    (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                    (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_3[5]));
                    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                  }
                  else
                  {
                    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".clean") == 0);
                    if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                    {
                      (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                      (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_3[6]));
                      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                    }
                    else
                    {
                      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".realclean") == 0);
                      if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                      {
                        (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                        (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_3[7]));
                        (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_String ModuleNameStr1_38;
                        MR_String Var_35;

                        (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".install") == 0);
                        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                        {
                          Var_35 = (MR_String) "lib";
                          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_35, &ModuleNameStr1_38, (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                        }
                        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                        {
                          (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_38;
                          (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_3[8]));
                          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                        }
                        else
                        {
                          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".doc") == 0);
                          if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                          {
                            (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                            (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_3[9]));
                            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                  make__top_level__classify_target_2_4_p_0_1(&env);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
make__top_level__classify_target_3_p_0_1(
  void * env_ptr_arg)
{
  struct make__top_level__classify_target_3_p_0_2_env_0_s * env_ptr = (struct make__top_level__classify_target_3_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4));
  ((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__cont)((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
make__top_level__classify_target_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct make__top_level__classify_target_3_p_0_2_env_0_s env;

  (env).make__top_level__classify_target_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).make__top_level__classify_target_3_p_0_2_env_0__cont = cont;
  (env).make__top_level__classify_target_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    make__top_level__classify_target_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), &(env).make__top_level__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4, make__top_level__classify_target_3_p_0_1, &env);
  }
}

static void MR_CALL 
make__top_level__classify_target_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word ModuleName_6;
  MR_Word TargetType_7;
  MR_Word TargetFile_13;
  MR_Word TypeInfo_21_21;
  MR_Integer NameLength_8;
  MR_Integer DotLocn_9;
  MR_String ModuleNameStr0_10;
  MR_String Suffix_11;
  MR_Word TargetFiles_12;
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__string__length_2_p_0(FileName_5, &NameLength_8);
  succeeded = make__top_level__search_backwards_for_dot_3_p_0(FileName_5, NameLength_8, &DotLocn_9);
  if (succeeded)
  {
    mercury__string__split_4_p_0(FileName_5, DotLocn_9, &ModuleNameStr0_10, &Suffix_11);
    TypeInfo_21_21 = (MR_Word) (&make__top_level_scalar_common_1[0]);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&make__top_level_scalar_common_8[0]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (make__top_level__classify_target_3_p_0_2));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (Globals_4));
      MR_hl_field(0, Var_16, 4) = ((MR_Box) (ModuleNameStr0_10));
      MR_hl_field(0, Var_16, 5) = ((MR_Box) (Suffix_11));
    }
    mercury__solutions__solutions_2_p_1(TypeInfo_21_21, Var_16, &TargetFiles_12);
    succeeded = (TargetFiles_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TargetFile_13 = ((MR_Word) ((MR_hl_field(1, TargetFiles_12, (MR_Integer) 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(1, TargetFiles_12, (MR_Integer) 1))));
      succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    ModuleName_6 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
    TargetType_7 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));
  }
  else
  {
    MR_String ModuleNameStr_14;

    succeeded = mercury__string__append_3_p_1((MR_String) "lib", &ModuleNameStr_14, FileName_5);
    if (succeeded)
    {
      TargetType_7 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_3[0]));
      parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleNameStr_14, &ModuleName_6);
    }
    else
    {
      MR_Word ExecutableType_15;
      MR_Word CompilationTarget_22;

      libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_22);
      switch (CompilationTarget_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ExecutableType_15 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          ExecutableType_15 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          ExecutableType_15 = (MR_Integer) 5;
          break;
      }
      {
        TargetType_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TargetType_7, 0) = (MR_Box) ((MR_Unsigned) (ExecutableType_15));
      }
      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_5, &ModuleName_6);
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (TargetType_7));
  }
}

static MR_bool MR_CALL 
make__top_level__search_backwards_for_dot_3_p_0(
  MR_String String_4,
  MR_Integer Index_5,
  MR_Integer * DotIndex_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CharIndex_7;
    MR_Char Char_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_prev_index_4_p_0(String_4, Index_5, &CharIndex_7, &Char_8);
    if (succeeded)
    {
      succeeded = (Char_8 == (MR_Char) 46);
      if (succeeded)
      {
        *DotIndex_6 = CharIndex_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer next_value_of_Index_5 = CharIndex_7;

        // direct tailcall eliminated
        ;
        Index_5 = next_value_of_Index_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
make__top_level__make_target_7_p_0(
  MR_Word Globals_8,
  MR_Word Target_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(0, Target_9, (MR_Integer) 0))));
  MR_Word TargetType_14 = ((MR_Word) ((MR_hl_field(0, Target_9, (MR_Integer) 1))));
  MR_Word TrackFlags_15;
  MR_Word TrackFlagsSucceeded_16;
  MR_Word STATE_VARIABLE_Info_29_29;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 664, &TrackFlags_15);
  switch (TrackFlags_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TrackFlagsSucceeded_16 = (MR_Integer) 1;
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_24;
      }
      break;
    case (MR_Integer) 1:
      make__track_flags__make_track_flags_files_7_p_0(Globals_8, ModuleName_13, &TrackFlagsSucceeded_16, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_29_29);
      break;
  }
  switch (TrackFlagsSucceeded_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_29_29;
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) TargetType_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ModuleTargetType_17 = ((MR_Word) ((MR_hl_field(0, TargetType_14, (MR_Integer) 0))));
            MR_Word TargetFile_18;
            MR_Word Var_31;

            {
              TargetFile_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TargetFile_18, 0) = ((MR_Box) (ModuleName_13));
              MR_hl_field(0, TargetFile_18, 1) = ((MR_Box) (ModuleTargetType_17));
            }
            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_31, 0) = ((MR_Box) (TargetFile_18));
            }
            make__module_target__make_module_target_7_p_0(Globals_8, Var_31, Succeeded_10, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_25);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgramTargetType_19 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_14, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word LinkedTargetFile_20;
            MR_Word Specs_21;
            MR_Word ErrorStream_22;

            {
              LinkedTargetFile_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, LinkedTargetFile_20, 0) = ((MR_Box) (ModuleName_13));
              MR_hl_field(0, LinkedTargetFile_20, 1) = (MR_Box) ((MR_Unsigned) (ProgramTargetType_19));
            }
            make__program_target__make_linked_target_9_p_0(Globals_8, LinkedTargetFile_20, Succeeded_10, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_25, (MR_Word) ((MR_Unsigned) 0U), &Specs_21);
            libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_13, &ErrorStream_22);
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_22, Globals_8, Specs_21);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MiscTargetType_23 = ((MR_Word) ((MR_hl_field(2, TargetType_14, (MR_Integer) 0))));
            MR_Word Var_39;
            MR_Word Specs_45;
            MR_Word ErrorStream_46;

            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_39, 0) = ((MR_Box) (ModuleName_13));
              MR_hl_field(0, Var_39, 1) = ((MR_Box) (MiscTargetType_23));
            }
            make__program_target__make_misc_target_9_p_0(Globals_8, Var_39, Succeeded_10, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_25, (MR_Word) ((MR_Unsigned) 0U), &Specs_45);
            libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_13, &ErrorStream_46);
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_46, Globals_8, Specs_45);
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
make__top_level__report_target_with_dir_component_2_f_0(
  MR_String ProgName_4,
  MR_String Target_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_12;
  MR_Word Var_15;
  MR_Word Var_18;
  MR_Word Var_19;

  {
    Var_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_8, 0) = ((MR_Box) (ProgName_4));
  }
  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (Target_5));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[8])));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_2[6])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_2[5])));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_2[3])));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_12));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Pieces_7, 1) = ((MR_Box) (Var_9));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140make.top_level.report_target_with_dir_component\'/2"));
    MR_hl_field(2, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(2, Spec_6, 3) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv17_Spec_6;

  conv17_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv17_Spec_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_15(
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
  MR_Word conv14_Succeeded_10;
  MR_Word conv13_STATE_VARIABLE_Info_25;

  make__top_level__make_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_10, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_Info_25);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_10));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_3;

  make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv12_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__108__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv11_HeadVar__2_2;

  make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv11_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv10_HeadVar__2_2;

  make__util__dependency_file_with_module_index_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv9_HeadVar__2_2;

  make__util__module_name_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__report_any_absolute_targets__202__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_Spec_6;

  conv8_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_Spec_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_7(
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
  MR_Word conv5_Succeeded_10;
  MR_Word conv4_STATE_VARIABLE_Info_25;

  make__top_level__make_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_10, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Info_25);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_10));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__108__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__2_2;

  make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  make__util__dependency_file_with_module_index_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  make__util__module_name_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__report_any_absolute_targets__202__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0(
  MR_Word Globals_8,
  MR_Word DetectedGradeFlags_9,
  MR_Word Variables_10,
  MR_Word OptionArgs_11,
  MR_Word Targets0_12)
{
  MR_bool succeeded;
  MR_String ProgName_14;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_14);
  if ((Targets0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeMainTargets_99;

    make__options_file__lookup_main_target_2_p_0(Variables_10, &MaybeMainTargets_99);
    if (((MR_tag((MR_Word) MaybeMainTargets_99)) == (MR_Integer) 0))
    {
      MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(0, MaybeMainTargets_99, (MR_Integer) 0))));
      MR_Word StdErr_18;

      mercury__io__stderr_stream_3_p_0(&StdErr_18);
      parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_18, Globals_8, Specs_17);
    }
    else
    {
      MR_Word MainTargets_101 = ((MR_Word) ((MR_hl_field(1, MaybeMainTargets_99, (MR_Integer) 0))));

      if ((MainTargets_101 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_104;
        MR_Word Spec_105;
        MR_Word Var_108;
        MR_Word Specs_313;
        MR_Word StdErr_314;

        {
          Var_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_108, 0) = ((MR_Box) (ProgName_14));
        }
        {
          Pieces_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_104, 0) = ((MR_Box) (Var_108));
          MR_hl_field(1, Pieces_104, 1) = ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[4])));
        }
        {
          Spec_105 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_105, 0) = ((MR_Box) ((MR_String) "predicate \140make.top_level.get_main_target_if_needed\'/4"));
          MR_hl_field(2, Spec_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_105, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_105, 3) = ((MR_Box) (Pieces_104));
        }
        {
          Specs_313 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_313, 0) = ((MR_Box) (Spec_105));
          MR_hl_field(1, Specs_313, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__io__stderr_stream_3_p_0(&StdErr_314);
        parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_314, Globals_8, Specs_313);
      }
      else
      {
        MR_Word AbsTargets_117;

        mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[2]), MainTargets_101, &AbsTargets_117);
        if ((AbsTargets_117 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Targets_19 = ((MR_Word) ((MR_hl_field(1, MaybeMainTargets_99, (MR_Integer) 0))));
          MR_Word KeepGoingBool_20;
          MR_Word KeepGoing_21;
          MR_Word ModuleIndexMap_22;
          MR_Word DepIndexMap_23;
          MR_Word DepStatusMap_24;
          MR_Word NonDependTargets_25;
          MR_Word ClassifiedTargets_27;
          MR_Integer AnalysisRepeat_29;
          MR_Word ModuleDependencies_30;
          MR_Word FileTimestamps_31;
          MR_Word SearchFileNameCache_32;
          MR_Word ErrorFileModules_33;
          MR_Word MakeInfo0_36;
          MR_Word Succeeded_37;
          MR_Word Var_46;
          MR_Box Var_48;
          MR_Word Var_50;
          MR_Box Var_52;
          MR_Word Var_58;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Box conv7__MakeInfo_38;
          MR_Box conv6_STATE_VARIABLE_IO_68_68;

          libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 662, &KeepGoingBool_20);
          switch (KeepGoingBool_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              KeepGoing_21 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              KeepGoing_21 = (MR_Integer) 1;
              break;
          }
          Var_46 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_1[3]));
          Var_48 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          {
            ModuleIndexMap_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleIndexMap_22, 0) = ((MR_Box) (Var_46));
            MR_hl_field(0, ModuleIndexMap_22, 1) = ((MR_Box) (Var_48));
            MR_hl_field(0, ModuleIndexMap_22, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_50 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__top_level_scalar_common_1[4]));
          Var_52 = mercury__version_array__empty_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0));
          {
            DepIndexMap_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DepIndexMap_23, 0) = ((MR_Box) (Var_50));
            MR_hl_field(0, DepIndexMap_23, 1) = ((MR_Box) (Var_52));
            MR_hl_field(0, DepIndexMap_23, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          DepStatusMap_24 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__top_level_scalar_common_1[5]));
          NonDependTargets_25 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[6]), Targets_19);
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_58, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
            MR_hl_field(0, Var_58, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_6));
            MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_58, 3) = ((MR_Box) (Globals_8));
          }
          mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[0]), Var_58, NonDependTargets_25, &ClassifiedTargets_27);
          libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 503, &AnalysisRepeat_29);
          mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), &ModuleDependencies_30);
          mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[1]), &FileTimestamps_31);
          mercury__map__init_1_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_name_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SearchFileNameCache_32);
          mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ErrorFileModules_33);
          Var_60 = make__dependencies__init_cached_direct_imports_0_f_0();
          Var_61 = make__dependencies__init_cached_direct_imports_0_f_0();
          Var_62 = make__dependencies__init_cached_indirect_imports_0_f_0();
          Var_63 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
          Var_64 = make__dependencies__init_cached_transitive_foreign_imports_0_f_0();
          Var_65 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__top_level_scalar_common_1[0]), ClassifiedTargets_27);
          Var_66 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
          {
            MakeInfo0_36 = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MakeInfo0_36, 0) = ((MR_Box) (ModuleDependencies_30));
            MR_hl_field(0, MakeInfo0_36, 1) = ((MR_Box) (FileTimestamps_31));
            MR_hl_field(0, MakeInfo0_36, 2) = ((MR_Box) (SearchFileNameCache_32));
            MR_hl_field(0, MakeInfo0_36, 3) = ((MR_Box) (DetectedGradeFlags_9));
            MR_hl_field(0, MakeInfo0_36, 4) = ((MR_Box) (OptionArgs_11));
            MR_hl_field(0, MakeInfo0_36, 5) = ((MR_Box) (Variables_10));
            MR_hl_field(0, MakeInfo0_36, 6) = ((MR_Box) (ModuleIndexMap_22));
            MR_hl_field(0, MakeInfo0_36, 7) = ((MR_Box) (DepIndexMap_23));
            MR_hl_field(0, MakeInfo0_36, 8) = ((MR_Box) (DepStatusMap_24));
            MR_hl_field(0, MakeInfo0_36, 9) = ((MR_Box) (Var_60));
            MR_hl_field(0, MakeInfo0_36, 10) = ((MR_Box) (Var_61));
            MR_hl_field(0, MakeInfo0_36, 11) = ((MR_Box) (Var_62));
            MR_hl_field(0, MakeInfo0_36, 12) = ((MR_Box) (Var_63));
            MR_hl_field(0, MakeInfo0_36, 13) = ((MR_Box) (Var_64));
            MR_hl_field(0, MakeInfo0_36, 14) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (KeepGoing_21)));
            MR_hl_field(0, MakeInfo0_36, 15) = ((MR_Box) (ErrorFileModules_33));
            MR_hl_field(0, MakeInfo0_36, 16) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, MakeInfo0_36, 17) = ((MR_Box) (Var_65));
            MR_hl_field(0, MakeInfo0_36, 18) = ((MR_Box) (AnalysisRepeat_29));
            MR_hl_field(0, MakeInfo0_36, 19) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, MakeInfo0_36, 20) = ((MR_Box) (Var_66));
          }
          make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__top_level_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_21, (MR_Word) (&make__top_level_scalar_common_1[7]), Globals_8, ClassifiedTargets_27, &Succeeded_37, ((MR_Box) (MakeInfo0_36)), &conv7__MakeInfo_38, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_68_68);
          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_37);
        }
        else
        {
          MR_Word Var_119;
          MR_Word Specs_323;
          MR_Word StdErr_324;

          {
            Var_119 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_119, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
            MR_hl_field(0, Var_119, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_8));
            MR_hl_field(0, Var_119, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_119, 3) = ((MR_Box) (ProgName_14));
          }
          Specs_323 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_119, AbsTargets_117);
          mercury__io__stderr_stream_3_p_0(&StdErr_324);
          parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_324, Globals_8, Specs_323);
        }
      }
    }
  }
  else
  {
    MR_Word MaybeTargets0_128;
    MR_Word AbsTargets_131;

    {
      MaybeTargets0_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTargets0_128, 0) = ((MR_Box) (Targets0_12));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[8]), Targets0_12, &AbsTargets_131);
    if ((AbsTargets_131 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Targets_144 = ((MR_Word) ((MR_hl_field(1, MaybeTargets0_128, (MR_Integer) 0))));
      MR_Word KeepGoingBool_145;
      MR_Word KeepGoing_146;
      MR_Word ModuleIndexMap_147;
      MR_Word DepIndexMap_148;
      MR_Word DepStatusMap_149;
      MR_Word NonDependTargets_150;
      MR_Word ClassifiedTargets_151;
      MR_Integer AnalysisRepeat_153;
      MR_Word ModuleDependencies_154;
      MR_Word FileTimestamps_155;
      MR_Word SearchFileNameCache_156;
      MR_Word ErrorFileModules_157;
      MR_Word MakeInfo0_160;
      MR_Word Succeeded_161;
      MR_Word Var_164;
      MR_Box Var_166;
      MR_Word Var_168;
      MR_Box Var_170;
      MR_Word Var_174;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Word Var_179;
      MR_Word Var_180;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Box conv16__MakeInfo_143;
      MR_Box conv15_STATE_VARIABLE_IO_68_184;

      libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 662, &KeepGoingBool_145);
      switch (KeepGoingBool_145) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          KeepGoing_146 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          KeepGoing_146 = (MR_Integer) 1;
          break;
      }
      Var_164 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_1[9]));
      Var_166 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      {
        ModuleIndexMap_147 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModuleIndexMap_147, 0) = ((MR_Box) (Var_164));
        MR_hl_field(0, ModuleIndexMap_147, 1) = ((MR_Box) (Var_166));
        MR_hl_field(0, ModuleIndexMap_147, 2) = ((MR_Box) ((MR_Integer) 0));
      }
      Var_168 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__top_level_scalar_common_1[10]));
      Var_170 = mercury__version_array__empty_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0));
      {
        DepIndexMap_148 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DepIndexMap_148, 0) = ((MR_Box) (Var_168));
        MR_hl_field(0, DepIndexMap_148, 1) = ((MR_Box) (Var_170));
        MR_hl_field(0, DepIndexMap_148, 2) = ((MR_Box) ((MR_Integer) 0));
      }
      DepStatusMap_149 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__top_level_scalar_common_1[11]));
      NonDependTargets_150 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[12]), Targets_144);
      {
        Var_174 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_174, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
        MR_hl_field(0, Var_174, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_14));
        MR_hl_field(0, Var_174, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_174, 3) = ((MR_Box) (Globals_8));
      }
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[0]), Var_174, NonDependTargets_150, &ClassifiedTargets_151);
      libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 503, &AnalysisRepeat_153);
      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), &ModuleDependencies_154);
      mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[1]), &FileTimestamps_155);
      mercury__map__init_1_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_name_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SearchFileNameCache_156);
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ErrorFileModules_157);
      Var_176 = make__dependencies__init_cached_direct_imports_0_f_0();
      Var_177 = make__dependencies__init_cached_direct_imports_0_f_0();
      Var_178 = make__dependencies__init_cached_indirect_imports_0_f_0();
      Var_179 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
      Var_180 = make__dependencies__init_cached_transitive_foreign_imports_0_f_0();
      Var_181 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__top_level_scalar_common_1[0]), ClassifiedTargets_151);
      Var_182 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
      {
        MakeInfo0_160 = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MakeInfo0_160, 0) = ((MR_Box) (ModuleDependencies_154));
        MR_hl_field(0, MakeInfo0_160, 1) = ((MR_Box) (FileTimestamps_155));
        MR_hl_field(0, MakeInfo0_160, 2) = ((MR_Box) (SearchFileNameCache_156));
        MR_hl_field(0, MakeInfo0_160, 3) = ((MR_Box) (DetectedGradeFlags_9));
        MR_hl_field(0, MakeInfo0_160, 4) = ((MR_Box) (OptionArgs_11));
        MR_hl_field(0, MakeInfo0_160, 5) = ((MR_Box) (Variables_10));
        MR_hl_field(0, MakeInfo0_160, 6) = ((MR_Box) (ModuleIndexMap_147));
        MR_hl_field(0, MakeInfo0_160, 7) = ((MR_Box) (DepIndexMap_148));
        MR_hl_field(0, MakeInfo0_160, 8) = ((MR_Box) (DepStatusMap_149));
        MR_hl_field(0, MakeInfo0_160, 9) = ((MR_Box) (Var_176));
        MR_hl_field(0, MakeInfo0_160, 10) = ((MR_Box) (Var_177));
        MR_hl_field(0, MakeInfo0_160, 11) = ((MR_Box) (Var_178));
        MR_hl_field(0, MakeInfo0_160, 12) = ((MR_Box) (Var_179));
        MR_hl_field(0, MakeInfo0_160, 13) = ((MR_Box) (Var_180));
        MR_hl_field(0, MakeInfo0_160, 14) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (KeepGoing_146)));
        MR_hl_field(0, MakeInfo0_160, 15) = ((MR_Box) (ErrorFileModules_157));
        MR_hl_field(0, MakeInfo0_160, 16) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, MakeInfo0_160, 17) = ((MR_Box) (Var_181));
        MR_hl_field(0, MakeInfo0_160, 18) = ((MR_Box) (AnalysisRepeat_153));
        MR_hl_field(0, MakeInfo0_160, 19) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, MakeInfo0_160, 20) = ((MR_Box) (Var_182));
      }
      make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__top_level_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_146, (MR_Word) (&make__top_level_scalar_common_1[13]), Globals_8, ClassifiedTargets_151, &Succeeded_161, ((MR_Box) (MakeInfo0_160)), &conv16__MakeInfo_143, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_68_184);
      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_161);
    }
    else
    {
      MR_Word Var_123;
      MR_Word Specs_138;
      MR_Word StdErr_139;

      {
        Var_123 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_123, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
        MR_hl_field(0, Var_123, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_16));
        MR_hl_field(0, Var_123, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_123, 3) = ((MR_Box) (ProgName_14));
      }
      Specs_138 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_123, AbsTargets_131);
      mercury__io__stderr_stream_3_p_0(&StdErr_139);
      parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_139, Globals_8, Specs_138);
    }
  }
}

void mercury__make__top_level__init(void)
{
}

void mercury__make__top_level__init_type_tables(void)
{
}

void mercury__make__top_level__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__top_level__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.top_level.
