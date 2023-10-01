/*
** Automatically generated from `make.top_level.m'
** by the Mercury compiler,
** version rotd-2023-10-01
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
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.file_names.mih"
#include "make.find_local_modules.mih"
#include "make.hash.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.timestamp.mih"
#include "make.track_flags.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"



struct make__top_level__classify_target_2_4_p_0_env_0_s {
  MR_Word make__top_level__classify_target_2_4_p_0_env_0__Globals_5;
  MR_String make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
  MR_Word * make__top_level__classify_target_2_4_p_0_env_0__TopTargetFile_8;
  MR_Cont make__top_level__classify_target_2_4_p_0_env_0__cont;
  void * make__top_level__classify_target_2_4_p_0_env_0__cont_env_ptr;
  MR_bool make__top_level__classify_target_2_4_p_0_env_0__succeeded;
  MR_String make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10;
  MR_Word make__top_level__classify_target_2_4_p_0_env_0__TargetType_11;
  MR_Word make__top_level__classify_target_2_4_p_0_env_0__ModuleName_18;
  MR_Word make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44;
  MR_bool make__top_level__classify_target_2_4_p_0_env_0__cond_0;
  MR_String make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16;
};

struct make__top_level__classify_target_3_p_0_2_env_0_s {
  MR_Box * make__top_level__classify_target_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont make__top_level__classify_target_3_p_0_2_env_0__cont;
  void * make__top_level__classify_target_3_p_0_2_env_0__cont_env_ptr;
  MR_Word make__top_level__classify_target_3_p_0_2_env_0__conv0_TopTargetFile_8;
};


static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__report_any_absolute_targets__177__1_1_p_0(
  MR_String LambdaHeadVar__1_15);

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__112__1_1_p_0(
  MR_String LambdaHeadVar__1_53);

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
  MR_Word * TopTargetFile_8,
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
  MR_Word * TopTargetFile_6);

static MR_bool MR_CALL 
make__top_level__search_backwards_for_dot_3_p_0(
  MR_String String_4,
  MR_Integer Index_5,
  MR_Integer * DotIndex_6);

static MR_Word MR_CALL 
make__top_level__report_target_with_dir_component_2_f_0(
  MR_String ProgName_4,
  MR_String Target_5);

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box make__top_level_scalar_common_1[9][2];

static /* final */ const MR_Box make__top_level_scalar_common_2[10][1];

static /* final */ const MR_Box make__top_level_scalar_common_3[1][4];

static /* final */ const MR_Box make__top_level_scalar_common_4[10][3];

static /* final */ const MR_Box make__top_level_scalar_common_5[3][5];

static /* final */ const MR_Box make__top_level_scalar_common_6[2][6];

static /* final */ const MR_Box make__top_level_scalar_common_7[1][7];




static /* final */ const MR_Box make__top_level_scalar_common_1[9][2] = {
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
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[2])))
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
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[0])))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_2[10][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[3]))) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row   9 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
};

static /* final */ const MR_Box make__top_level_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_4[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[2])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[2])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0))
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

static /* final */ const MR_Box make__top_level_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0))
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


static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__report_any_absolute_targets__177__1_1_p_0(
  MR_String LambdaHeadVar__1_15)
{
  MR_bool succeeded;
  MR_Char Var_16;

  Var_16 = mercury__dir__directory_separator_0_f_0();
  succeeded = mercury__string__contains_char_2_p_0(LambdaHeadVar__1_15, Var_16);
  return succeeded;
}

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__112__1_1_p_0(
  MR_String LambdaHeadVar__1_53)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(LambdaHeadVar__1_53, (MR_String) ".depend");
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_1(
  void * env_ptr_arg)
{
  struct make__top_level__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__top_level__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

  parse_tree__file_names__file_name_to_module_name_2_p_0((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10, &(env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleName_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__TopTargetFile_8) = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__TargetType_11));
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

    (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__file_names__extension_to_target_type_3_p_0((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16, &(env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44);
    if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44)) == (MR_Integer) 1);
      if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      {
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44, (MR_Integer) 0)));
        Var_17 = ((MR_Unsigned) ((MR_hl_field(1, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44, (MR_Integer) 0))) & (MR_Integer) 1);
      }
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = !((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded);
    }
    if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      make__top_level__classify_target_2_4_p_0_2(env_ptr);
  }
  {
    MR_Word Var_56;
    MR_Unsigned packed_word_1;

    (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__file_names__target_extension_synonym_2_p_0((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16, &(env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44);
    if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44)) == (MR_Integer) 1);
      if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      {
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44, (MR_Integer) 0)));
        Var_56 = ((MR_Unsigned) ((MR_hl_field(1, (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44, (MR_Integer) 0))) & (MR_Integer) 1);
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
    MR_Word Var_30;

    (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (Var_30));
    }
    make__top_level__classify_target_2_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0(
  MR_Word Globals_5,
  MR_String ModuleNameStr0_6,
  MR_String ExtStr_7,
  MR_Word * TopTargetFile_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct make__top_level__classify_target_2_4_p_0_env_0_s env;

  (env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5 = Globals_5;
  (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6 = ModuleNameStr0_6;
  (env).make__top_level__classify_target_2_4_p_0_env_0__TopTargetFile_8 = TopTargetFile_8;
  (env).make__top_level__classify_target_2_4_p_0_env_0__cont = cont;
  (env).make__top_level__classify_target_2_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word ModuleTargetType_9;

    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__file_names__extension_to_target_type_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, ExtStr_7, &ModuleTargetType_9);
    if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".cs") == 0);
      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = !((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded);
    }
    if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ModuleTargetType_9));
      }
      make__top_level__classify_target_2_4_p_0_1(&env);
    }
    else
    {
      MR_Word ModuleTargetType_51;

      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__file_names__target_extension_synonym_2_p_0(ExtStr_7, &ModuleTargetType_51);
      if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      {
        (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ModuleTargetType_51));
        }
        make__top_level__classify_target_2_4_p_0_1(&env);
      }
      else
      {
        MR_String ModuleNameStr1_12;
        MR_String Var_20;
        MR_String Var_52;

        libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 612, &Var_52);
        (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_52) == 0);
        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
        {
          Var_20 = (MR_String) "lib";
          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_20, &ModuleNameStr1_12, (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
        }
        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
        {
          (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = ModuleNameStr1_12;
          (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = (MR_Word) (MR_mkword(1, &make__top_level_scalar_common_2[1]));
          make__top_level__classify_target_2_4_p_0_1(&env);
        }
        else
        {
          MR_String ModuleNameStr1_49;
          MR_String Var_23;
          MR_String Var_53;

          libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 611, &Var_53);
          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_53) == 0);
          if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
          {
            Var_23 = (MR_String) "lib";
            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_23, &ModuleNameStr1_49, (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
          }
          if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
          {
            (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = ModuleNameStr1_49;
            (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = (MR_Word) (MR_mkword(1, &make__top_level_scalar_common_2[2]));
            make__top_level__classify_target_2_4_p_0_1(&env);
          }
          else
          {
            MR_String Var_54;

            libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 613, &Var_54);
            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_54) == 0);
            if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
            {
              MR_Word ExecutableType_13;
              MR_Word CompilationTarget_55;

              (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
              libs__globals__get_target_2_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, &CompilationTarget_55);
              switch (CompilationTarget_55) {
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
                (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = base;
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
                MR_String Var_27;
                MR_String Var_28;

                (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) ".all_", &Rest_14, ExtStr_7);
                if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                {
                  Var_27 = (MR_String) "s";
                  (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_3(&DotlessExtStr1_15, Var_27, Rest_14);
                  if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                  {
                    Var_28 = (MR_String) ".";
                    (env).make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16 = mercury__string__f_43_43_2_f_0(Var_28, DotlessExtStr1_15);
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
                  (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                  (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[4]));
                  (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                }
                else
                {
                  (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".analyse") == 0);
                  if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                  {
                    (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                    (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[5]));
                    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                  }
                  else
                  {
                    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".clean") == 0);
                    if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                    {
                      (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                      (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[6]));
                      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                    }
                    else
                    {
                      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".realclean") == 0);
                      if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                      {
                        (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                        (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[7]));
                        (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_String ModuleNameStr1_39;
                        MR_String Var_36;

                        (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".install") == 0);
                        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                        {
                          Var_36 = (MR_String) "lib";
                          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_36, &ModuleNameStr1_39, (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                        }
                        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                        {
                          (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = ModuleNameStr1_39;
                          (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[8]));
                          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                        }
                        else
                        {
                          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".doc") == 0);
                          if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                          {
                            (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_10 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                            (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[9]));
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

  *((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__conv0_TopTargetFile_8));
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

    make__top_level__classify_target_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), &(env).make__top_level__classify_target_3_p_0_2_env_0__conv0_TopTargetFile_8, make__top_level__classify_target_3_p_0_1, &env);
  }
}

static void MR_CALL 
make__top_level__classify_target_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_Word * TopTargetFile_6)
{
  MR_bool succeeded;
  MR_Word OnlyTopTargetFile_12;
  MR_Word TypeCtorInfo_24_24;
  MR_Integer NameLength_7;
  MR_Integer DotLocn_8;
  MR_String ModuleNameStr0_9;
  MR_String Suffix_10;
  MR_Word TopTargetFiles_11;
  MR_Word Var_17;
  MR_Word Var_18;

  mercury__string__length_2_p_0(FileName_5, &NameLength_7);
  succeeded = make__top_level__search_backwards_for_dot_3_p_0(FileName_5, NameLength_7, &DotLocn_8);
  if (succeeded)
  {
    mercury__string__split_4_p_0(FileName_5, DotLocn_8, &ModuleNameStr0_9, &Suffix_10);
    TypeCtorInfo_24_24 = (MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&make__top_level_scalar_common_7[0]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (make__top_level__classify_target_3_p_0_2));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (Globals_4));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (ModuleNameStr0_9));
      MR_hl_field(0, Var_17, 5) = ((MR_Box) (Suffix_10));
    }
    mercury__solutions__solutions_2_p_1(TypeCtorInfo_24_24, Var_17, &TopTargetFiles_11);
    succeeded = (TopTargetFiles_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OnlyTopTargetFile_12 = ((MR_Word) ((MR_hl_field(1, TopTargetFiles_11, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(1, TopTargetFiles_11, (MR_Integer) 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    *TopTargetFile_6 = OnlyTopTargetFile_12;
  else
  {
    MR_String ModuleNameStr_13;

    succeeded = mercury__string__append_3_p_1((MR_String) "lib", &ModuleNameStr_13, FileName_5);
    if (succeeded)
    {
      MR_Word ModuleName_14;

      parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleNameStr_13, &ModuleName_14);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TopTargetFile_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_14));
        MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(2, &make__top_level_scalar_common_2[0])));
      }
    }
    else
    {
      MR_Word ExecutableType_16;
      MR_Word ModuleName_21;
      MR_Word TargetType_22;
      MR_Word CompilationTarget_25;

      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_5, &ModuleName_21);
      libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_25);
      switch (CompilationTarget_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ExecutableType_16 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          ExecutableType_16 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          ExecutableType_16 = (MR_Integer) 5;
          break;
      }
      {
        TargetType_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TargetType_22, 0) = (MR_Box) ((MR_Unsigned) (ExecutableType_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TopTargetFile_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_21));
        MR_hl_field(0, base, 1) = ((MR_Box) (TargetType_22));
      }
    }
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
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[8])));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[6])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[5])));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[3])));
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

void MR_CALL 
make__top_level__make_top_target_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Target_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, Target_11, (MR_Integer) 0))));
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(0, Target_11, (MR_Integer) 1))));
  MR_Word TrackFlags_17;
  MR_Word ErrorStream_18;
  MR_Word TrackFlagsSucceeded_19;
  MR_Word STATE_VARIABLE_Info_32_32;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 667, &TrackFlags_17);
  libs__globals__get_error_output_stream_5_p_0(Globals_10, ModuleName_15, &ErrorStream_18);
  switch (TrackFlags_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TrackFlagsSucceeded_19 = (MR_Integer) 1;
        STATE_VARIABLE_Info_32_32 = STATE_VARIABLE_Info_0_26;
      }
      break;
    case (MR_Integer) 1:
      make__track_flags__make_track_flags_files_9_p_0(ErrorStream_18, ProgressStream_9, Globals_10, ModuleName_15, &TrackFlagsSucceeded_19, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_32_32);
      break;
  }
  switch (TrackFlagsSucceeded_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_12 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_32_32;
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) TargetType_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ModuleTargetType_20 = ((MR_Word) ((MR_hl_field(0, TargetType_16, (MR_Integer) 0))));
            MR_Word TargetFile_21;
            MR_Word Var_35;

            {
              TargetFile_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TargetFile_21, 0) = ((MR_Box) (ModuleName_15));
              MR_hl_field(0, TargetFile_21, 1) = ((MR_Box) (ModuleTargetType_20));
            }
            Var_35 = (MR_Word) ((MR_Word) (TargetFile_21));
            make__module_target__make_module_target_9_p_0((MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, Var_35, Succeeded_12, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgramTargetType_22 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_16, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word LinkedTargetFile_23;
            MR_Word Specs_24;

            {
              LinkedTargetFile_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, LinkedTargetFile_23, 0) = ((MR_Box) (ModuleName_15));
              MR_hl_field(0, LinkedTargetFile_23, 1) = (MR_Box) ((MR_Unsigned) (ProgramTargetType_22));
            }
            make__program_target__make_linked_target_10_p_0(ProgressStream_9, Globals_10, LinkedTargetFile_23, Succeeded_12, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27, (MR_Word) ((MR_Unsigned) 0U), &Specs_24);
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_18, Globals_10, Specs_24);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MiscTargetType_25 = ((MR_Word) ((MR_hl_field(2, TargetType_16, (MR_Integer) 0))));
            MR_Word Var_42;
            MR_Word Specs_47;

            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_42, 0) = ((MR_Box) (ModuleName_15));
              MR_hl_field(0, Var_42, 1) = ((MR_Box) (MiscTargetType_25));
            }
            make__program_target__make_misc_target_10_p_0(ProgressStream_9, Globals_10, Var_42, Succeeded_12, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27, (MR_Word) ((MR_Unsigned) 0U), &Specs_47);
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_18, Globals_10, Specs_47);
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_Spec_6;

  conv9_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_Spec_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_TopTargetFile_6;

  make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv8_TopTargetFile_6);
  *wrapper_arg_2 = ((MR_Box) (conv8_TopTargetFile_6));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__112__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv7_HeadVar__2_2;

  make__hash__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv6_HeadVar__2_2;

  make__hash__dependency_file_with_module_index_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv5_HeadVar__2_2;

  make__hash__module_name_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__report_any_absolute_targets__177__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_Spec_6;

  conv4_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Spec_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_TopTargetFile_6;

  make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv3_TopTargetFile_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_TopTargetFile_6));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__112__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__2_2;

  make__hash__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  make__hash__dependency_file_with_module_index_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  make__hash__module_name_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__report_any_absolute_targets__177__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word DetectedGradeFlags_11,
  MR_Word OptionsVariables_12,
  MR_Word OptionArgs_13,
  MR_Word Targets0_14)
{
  MR_bool succeeded;
  MR_String ProgName_16;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_16);
  if ((Targets0_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeMainTargets_76;

    make__options_file__lookup_main_target_2_p_0(OptionsVariables_12, &MaybeMainTargets_76);
    if (((MR_tag((MR_Word) MaybeMainTargets_76)) == (MR_Integer) 0))
    {
      MR_Word Specs_19 = ((MR_Word) ((MR_hl_field(0, MaybeMainTargets_76, (MR_Integer) 0))));
      MR_Word StdErr_20;

      mercury__io__stderr_stream_3_p_0(&StdErr_20);
      parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_20, Globals_10, Specs_19);
    }
    else
    {
      MR_Word MainTargets_78 = ((MR_Word) ((MR_hl_field(1, MaybeMainTargets_76, (MR_Integer) 0))));

      if ((MainTargets_78 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_81;
        MR_Word Spec_82;
        MR_Word Var_85;
        MR_Word Specs_235;
        MR_Word StdErr_236;

        {
          Var_85 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_85, 0) = ((MR_Box) (ProgName_16));
        }
        {
          Pieces_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_81, 0) = ((MR_Box) (Var_85));
          MR_hl_field(1, Pieces_81, 1) = ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[4])));
        }
        {
          Spec_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_82, 0) = ((MR_Box) ((MR_String) "predicate \140make.top_level.get_main_target_if_needed\'/4"));
          MR_hl_field(2, Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_82, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_82, 3) = ((MR_Box) (Pieces_81));
        }
        {
          Specs_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_235, 0) = ((MR_Box) (Spec_82));
          MR_hl_field(1, Specs_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__io__stderr_stream_3_p_0(&StdErr_236);
        parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_236, Globals_10, Specs_235);
      }
      else
      {
        MR_Word AbsTargets_94;

        mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[0]), MainTargets_78, &AbsTargets_94);
        if ((AbsTargets_94 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Targets_21 = ((MR_Word) ((MR_hl_field(1, MaybeMainTargets_76, (MR_Integer) 0))));
          MR_Word KeepGoingBool_22;
          MR_Word KeepGoing_23;
          MR_Integer AnalysisRepeat_24;
          MR_Word ModuleIndexMap_25;
          MR_Word DepIndexMap_26;
          MR_Word DepStatusMap_27;
          MR_Word NonDependTargets_28;
          MR_Word ClassifiedTargets_30;
          MR_Word ClassifiedTargetSet_31;
          MR_Word MakeInfo0_32;
          MR_Word Succeeded_33;
          MR_Word Var_43;
          MR_Box Var_45;
          MR_Word Var_47;
          MR_Box Var_49;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word _MakeInfo_34;

          libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 665, &KeepGoingBool_22);
          switch (KeepGoingBool_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              KeepGoing_23 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              KeepGoing_23 = (MR_Integer) 1;
              break;
          }
          libs__globals__lookup_int_option_3_p_0(Globals_10, (MR_Integer) 506, &AnalysisRepeat_24);
          Var_43 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_4[1]));
          Var_45 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          {
            ModuleIndexMap_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleIndexMap_25, 0) = ((MR_Box) (Var_43));
            MR_hl_field(0, ModuleIndexMap_25, 1) = ((MR_Box) (Var_45));
            MR_hl_field(0, ModuleIndexMap_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_47 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__top_level_scalar_common_4[2]));
          Var_49 = mercury__version_array__empty_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0));
          {
            DepIndexMap_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DepIndexMap_26, 0) = ((MR_Box) (Var_47));
            MR_hl_field(0, DepIndexMap_26, 1) = ((MR_Box) (Var_49));
            MR_hl_field(0, DepIndexMap_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          DepStatusMap_27 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__top_level_scalar_common_4[3]));
          NonDependTargets_28 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[4]), Targets_21);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
            MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_6));
            MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_55, 3) = ((MR_Box) (Globals_10));
          }
          mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), Var_55, NonDependTargets_28, &ClassifiedTargets_30);
          ClassifiedTargetSet_31 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ClassifiedTargets_30);
          Var_56 = make__timestamp__init_target_file_timestamps_0_f_0();
          MakeInfo0_32 = make__make_info__init_make_info_10_f_0(OptionsVariables_12, DetectedGradeFlags_11, KeepGoing_23, OptionArgs_13, ClassifiedTargetSet_31, AnalysisRepeat_24, Var_56, ModuleIndexMap_25, DepIndexMap_26, DepStatusMap_27);
          make__build__foldl2_make_top_targets_9_p_0(KeepGoing_23, ProgressStream_9, Globals_10, ClassifiedTargets_30, &Succeeded_33, MakeInfo0_32, &_MakeInfo_34);
          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_33);
        }
        else
        {
          MR_Word Var_96;
          MR_Word Specs_245;
          MR_Word StdErr_246;

          {
            Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_96, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
            MR_hl_field(0, Var_96, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_7));
            MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_96, 3) = ((MR_Box) (ProgName_16));
          }
          Specs_245 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_96, AbsTargets_94);
          mercury__io__stderr_stream_3_p_0(&StdErr_246);
          parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_246, Globals_10, Specs_245);
        }
      }
    }
  }
  else
  {
    MR_Word MaybeTargets0_105;
    MR_Word AbsTargets_108;

    {
      MaybeTargets0_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTargets0_105, 0) = ((MR_Box) (Targets0_14));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[5]), Targets0_14, &AbsTargets_108);
    if ((AbsTargets_108 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Targets_120 = ((MR_Word) ((MR_hl_field(1, MaybeTargets0_105, (MR_Integer) 0))));
      MR_Word KeepGoingBool_121;
      MR_Word KeepGoing_122;
      MR_Integer AnalysisRepeat_123;
      MR_Word ModuleIndexMap_124;
      MR_Word DepIndexMap_125;
      MR_Word DepStatusMap_126;
      MR_Word NonDependTargets_127;
      MR_Word ClassifiedTargets_128;
      MR_Word ClassifiedTargetSet_129;
      MR_Word MakeInfo0_130;
      MR_Word Succeeded_131;
      MR_Word Var_135;
      MR_Box Var_137;
      MR_Word Var_139;
      MR_Box Var_141;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word _MakeInfo_119;

      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 665, &KeepGoingBool_121);
      switch (KeepGoingBool_121) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          KeepGoing_122 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          KeepGoing_122 = (MR_Integer) 1;
          break;
      }
      libs__globals__lookup_int_option_3_p_0(Globals_10, (MR_Integer) 506, &AnalysisRepeat_123);
      Var_135 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_4[6]));
      Var_137 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      {
        ModuleIndexMap_124 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModuleIndexMap_124, 0) = ((MR_Box) (Var_135));
        MR_hl_field(0, ModuleIndexMap_124, 1) = ((MR_Box) (Var_137));
        MR_hl_field(0, ModuleIndexMap_124, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_139 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__top_level_scalar_common_4[7]));
      Var_141 = mercury__version_array__empty_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0));
      {
        DepIndexMap_125 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DepIndexMap_125, 0) = ((MR_Box) (Var_139));
        MR_hl_field(0, DepIndexMap_125, 1) = ((MR_Box) (Var_141));
        MR_hl_field(0, DepIndexMap_125, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      DepStatusMap_126 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__top_level_scalar_common_4[8]));
      NonDependTargets_127 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[9]), Targets_120);
      {
        Var_145 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_145, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
        MR_hl_field(0, Var_145, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_13));
        MR_hl_field(0, Var_145, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_145, 3) = ((MR_Box) (Globals_10));
      }
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), Var_145, NonDependTargets_127, &ClassifiedTargets_128);
      ClassifiedTargetSet_129 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ClassifiedTargets_128);
      Var_146 = make__timestamp__init_target_file_timestamps_0_f_0();
      MakeInfo0_130 = make__make_info__init_make_info_10_f_0(OptionsVariables_12, DetectedGradeFlags_11, KeepGoing_122, OptionArgs_13, ClassifiedTargetSet_129, AnalysisRepeat_123, Var_146, ModuleIndexMap_124, DepIndexMap_125, DepStatusMap_126);
      make__build__foldl2_make_top_targets_9_p_0(KeepGoing_122, ProgressStream_9, Globals_10, ClassifiedTargets_128, &Succeeded_131, MakeInfo0_130, &_MakeInfo_119);
      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_131);
    }
    else
    {
      MR_Word Var_100;
      MR_Word Specs_115;
      MR_Word StdErr_116;

      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_100, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
        MR_hl_field(0, Var_100, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_14));
        MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_100, 3) = ((MR_Box) (ProgName_16));
      }
      Specs_115 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_100, AbsTargets_108);
      mercury__io__stderr_stream_3_p_0(&StdErr_116);
      parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_116, Globals_10, Specs_115);
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
