/*
** Automatically generated from `make.top_level.m'
** by the Mercury compiler,
** version rotd-2022-01-10
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"



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
make__top_level__IntroducedFrom__pred__make_process_compiler_args__154__1_1_p_0(
  MR_String LambdaHeadVar__1_75);

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__115__1_1_p_0(
  MR_String LambdaHeadVar__1_57);

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
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static MR_Word MR_CALL 
make__top_level__report_target_with_dir_component_2_f_0(
  MR_String ProgName_4,
  MR_String Target_5);

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


static /* final */ const MR_Box make__top_level_scalar_common_1[8][3];

static /* final */ const MR_Box make__top_level_scalar_common_2[6][2];

static /* final */ const MR_Box make__top_level_scalar_common_3[10][1];

static /* final */ const MR_Box make__top_level_scalar_common_4[1][4];

static /* final */ const MR_Box make__top_level_scalar_common_5[2][5];

static /* final */ const MR_Box make__top_level_scalar_common_6[2][6];

static /* final */ const MR_Box make__top_level_scalar_common_7[1][10];

static /* final */ const MR_Box make__top_level_scalar_common_8[1][7];




static /* final */ const MR_Box make__top_level_scalar_common_1[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__top_level_scalar_common_4[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__top_level_scalar_common_4[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__top_level_scalar_common_7[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Make target must not contain any directory component."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__top_level_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__top_level_scalar_common_2[1])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__top_level_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__top_level_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__top_level_scalar_common_2[4])))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_3[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__top_level_scalar_common_3[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 20U))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__top_level__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_target_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_7[1][10] = {
  /* row 0 */
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
  /* row 0 */
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
#include "make.build.mh"



static const MR_FA_PseudoTypeInfo_Struct2 make__top_level__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_type_0)
  }
};

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__154__1_1_p_0(
  MR_String LambdaHeadVar__1_75)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__suffix_2_p_0(LambdaHeadVar__1_75, (MR_String) ".depend");
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__115__1_1_p_0(
  MR_String LambdaHeadVar__1_57)
{
  {
    MR_bool succeeded;
    MR_Char Var_58;

    Var_58 = mercury__dir__directory_separator_0_f_0();
    succeeded = mercury__string__contains_char_2_p_0(LambdaHeadVar__1_57, Var_58);
    return succeeded;
  }
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct make__top_level__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__top_level__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    parse_tree__file_names__file_name_to_module_name_2_p_0((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11, &(env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleName_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__HeadVar__4_4) = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__TargetType_9));
    }
    ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__cont)((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_3(
  void * env_ptr_arg)
{
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
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43, (MR_Integer) 0)));
          Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43, (MR_Integer) 0))) & (MR_Integer) 1);
        }
        (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = !((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded);
      }
      if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
        make__top_level__classify_target_2_4_p_0_2(env_ptr);
    }
    {
      MR_Word Var_57;
      MR_Unsigned packed_word_1;

      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ExtStr1_16, &(env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43);
      if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
      {
        (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43)) == (MR_Integer) 1);
        if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
        {
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43, (MR_Integer) 0)));
          Var_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43, (MR_Integer) 0))) & (MR_Integer) 1);
        }
        (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded = !((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded);
      }
      if ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__succeeded)
        make__top_level__classify_target_2_4_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
make__top_level__classify_target_2_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct make__top_level__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__top_level__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__cond_0 = MR_TRUE;
    {
      MR_Word Var_29;

      (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__ModuleTargetType_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        (env_ptr)->make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_29));
      }
      make__top_level__classify_target_2_4_p_0_1(env_ptr);
    }
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleTargetType_10));
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
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleTargetType_50));
          }
          make__top_level__classify_target_2_4_p_0_1(&env);
        }
        else
        {
          MR_String ModuleNameStr1_12;
          MR_String Var_19;
          MR_String Var_51;

          libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 614, &Var_51);
          (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_51) == 0);
          if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
          {
            Var_19 = (MR_String) "lib";
            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_19, &ModuleNameStr1_12, (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
          }
          if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
          {
            (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_12;
            (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(1), &make__top_level_scalar_common_3[1]));
            make__top_level__classify_target_2_4_p_0_1(&env);
          }
          else
          {
            MR_String ModuleNameStr1_48;
            MR_String Var_22;
            MR_String Var_52;

            libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 613, &Var_52);
            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_52) == 0);
            if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
            {
              Var_22 = (MR_String) "lib";
              (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_22, &ModuleNameStr1_48, (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
            }
            if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
            {
              (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_48;
              (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(1), &make__top_level_scalar_common_3[2]));
              make__top_level__classify_target_2_4_p_0_1(&env);
            }
            else
            {
              MR_String Var_53;

              libs__globals__lookup_string_option_3_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 615, &Var_53);
              (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, Var_53) == 0);
              if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
              {
                MR_Word ExecutableType_13;
                MR_Word CompilationTarget_56;

                (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                libs__globals__get_target_2_p_0((env).make__top_level__classify_target_2_4_p_0_env_0__Globals_5, &CompilationTarget_56);
                switch (CompilationTarget_56) {
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
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (ExecutableType_13));
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
                    (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                    (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make__top_level_scalar_common_3[4]));
                    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                  }
                  else
                  {
                    (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".analyse") == 0);
                    if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                    {
                      (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                      (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make__top_level_scalar_common_3[5]));
                      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                    }
                    else
                    {
                      (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".clean") == 0);
                      if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                      {
                        (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                        (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make__top_level_scalar_common_3[6]));
                        (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                      }
                      else
                      {
                        (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".realclean") == 0);
                        if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                        {
                          (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                          (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make__top_level_scalar_common_3[7]));
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
                            (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make__top_level_scalar_common_3[8]));
                            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                          }
                          else
                          {
                            (env).make__top_level__classify_target_2_4_p_0_env_0__succeeded = (strcmp(ExtStr_7, (MR_String) ".doc") == 0);
                            if ((env).make__top_level__classify_target_2_4_p_0_env_0__succeeded)
                            {
                              (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__top_level__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                              (env).make__top_level__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make__top_level_scalar_common_3[9]));
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
}

static void MR_CALL 
make__top_level__classify_target_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct make__top_level__classify_target_3_p_0_2_env_0_s * env_ptr = (struct make__top_level__classify_target_3_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4));
    ((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__cont)((env_ptr)->make__top_level__classify_target_3_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
make__top_level__classify_target_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct make__top_level__classify_target_3_p_0_2_env_0_s env;

    (env).make__top_level__classify_target_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).make__top_level__classify_target_3_p_0_2_env_0__cont = cont;
    (env).make__top_level__classify_target_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      make__top_level__classify_target_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &(env).make__top_level__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4, make__top_level__classify_target_3_p_0_1, &env);
    }
  }
}

static void MR_CALL 
make__top_level__classify_target_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_Word * HeadVar__3_3)
{
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
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__top_level_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__top_level__classify_target_3_p_0_2));
        MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Globals_4));
        MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ModuleNameStr0_10));
        MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (Suffix_11));
      }
      mercury__solutions__solutions_2_p_1(TypeInfo_21_21, Var_16, &TargetFiles_12);
      succeeded = (TargetFiles_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TargetFile_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetFiles_12, (MR_Integer) 0))));
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetFiles_12, (MR_Integer) 1))));
        succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_13, (MR_Integer) 0))));
      TargetType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_13, (MR_Integer) 1))));
    }
    else
    {
      MR_String ModuleNameStr_14;

      succeeded = mercury__string__append_3_p_1((MR_String) "lib", &ModuleNameStr_14, FileName_5);
      if (succeeded)
      {
        TargetType_7 = (MR_Word) (MR_mkword(MR_mktag(2), &make__top_level_scalar_common_3[0]));
        parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleNameStr_14, &ModuleName_6);
      }
      else
      {
        MR_Word ExecutableType_15;
        MR_Word CompilationTarget_24;

        libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_24);
        switch (CompilationTarget_24) {
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
          TargetType_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TargetType_7, 0) = (MR_Box) ((MR_Unsigned) (ExecutableType_15));
        }
        parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_5, &ModuleName_6);
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TargetType_7));
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

static void MR_CALL 
make__top_level__make_target_7_p_0(
  MR_Word Globals_8,
  MR_Word Target_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_9, (MR_Integer) 0))));
    MR_Word TargetType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_9, (MR_Integer) 1))));
    MR_Word TrackFlags_15;
    MR_Word TrackFlagsSucceeded_16;
    MR_Word STATE_VARIABLE_Info_27_27;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 668, &TrackFlags_15);
    switch (TrackFlags_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TrackFlagsSucceeded_16 = (MR_Integer) 1;
          STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_0_22;
        }
        break;
      case (MR_Integer) 1:
        make__track_flags__make_track_flags_files_7_p_0(Globals_8, ModuleName_13, &TrackFlagsSucceeded_16, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_27);
        break;
    }
    switch (TrackFlagsSucceeded_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_27_27;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) TargetType_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleTargetType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetType_14, (MR_Integer) 0))));
              MR_Word TargetFile_18;
              MR_Word Var_34;

              {
                TargetFile_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TargetFile_18, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(MR_mktag(0), TargetFile_18, 1) = ((MR_Box) (ModuleTargetType_17));
              }
              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (TargetFile_18));
              }
              make__module_target__make_module_target_7_p_0(Globals_8, Var_34, Succeeded_10, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgramTargetType_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TargetType_14, (MR_Integer) 0))) & (MR_Integer) 7);
              MR_Word LinkedTargetFile_20;

              {
                LinkedTargetFile_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LinkedTargetFile_20, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(MR_mktag(0), LinkedTargetFile_20, 1) = (MR_Box) ((MR_Unsigned) (ProgramTargetType_19));
              }
              make__program_target__make_linked_target_7_p_0(Globals_8, LinkedTargetFile_20, Succeeded_10, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MiscTargetType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TargetType_14, (MR_Integer) 0))));
              MR_Word Var_29;

              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (MiscTargetType_21));
              }
              make__program_target__make_misc_target_7_p_0(Globals_8, Var_29, Succeeded_10, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
make__top_level__report_target_with_dir_component_2_f_0(
  MR_String ProgName_4,
  MR_String Target_5)
{
  {
    MR_Word Spec_6;
    MR_Word Pieces_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_33;
    MR_Word Var_34;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (ProgName_4));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_13, 0) = ((MR_Box) (Target_5));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__top_level_scalar_common_2[5])));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__top_level_scalar_common_2[0])));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_12));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_9));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_7));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Var_29, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_29, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_29, 3) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_String) "function \140make.top_level.report_target_with_dir_component\'/2"));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_6, 3) = ((MR_Box) (Var_28));
    }
    return Spec_6;
  }
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_Spec_6;

    conv8_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_Spec_6));
    return wrapper_arg_2;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Succeeded_10;
    MR_Word conv4_STATE_VARIABLE_Info_23;

    make__top_level__make_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_10, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Info_23);
    *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_10));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__154__1_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__2_2;

    make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__2_2;

    make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    make__util__module_name_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__115__1_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
make__top_level__make_process_compiler_args_7_p_0(
  MR_Word Globals_8,
  MR_Word DetectedGradeFlags_9,
  MR_Word Variables_10,
  MR_Word OptionArgs_11,
  MR_Word Targets0_12)
{
  {
    MR_bool succeeded;
    MR_Word Targets_17;
    MR_Word Continue0_18;
    MR_Word AbsTargets_24;

    if ((Targets0_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeTargets_14;
      MR_Word LookupSpecs_15;
      MR_Word LookupErrors_16;

      make__options_file__lookup_main_target_3_p_0(Variables_10, &MaybeTargets_14, &LookupSpecs_15);
      parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_8, LookupSpecs_15);
      LookupErrors_16 = parse_tree__error_util__contains_errors_2_f_0(Globals_8, LookupSpecs_15);
      switch (LookupErrors_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTargets_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Targets_17 = (MR_Word) ((MR_Unsigned) 0U);
            Continue0_18 = (MR_Integer) 0;
          }
          else
          {
            Targets_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTargets_14, (MR_Integer) 0))));
            if ((Targets_17 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String Var_52;

              Continue0_18 = (MR_Integer) 0;
              Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "** Error: no targets specified ", (MR_String) "and \140MAIN_TARGET\' not defined.\n");
              mercury__io__write_string_3_p_0(Var_52);
            }
            else
              Continue0_18 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
          {
            Targets_17 = (MR_Word) ((MR_Unsigned) 0U);
            Continue0_18 = (MR_Integer) 0;
          }
          break;
      }
    }
    else
    {
      Continue0_18 = (MR_Integer) 1;
      Targets_17 = Targets0_12;
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[2]), Targets_17, &AbsTargets_24);
    if ((AbsTargets_24 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (Continue0_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          break;
        case (MR_Integer) 1:
          {
            MR_Word KeepGoingBool_31;
            MR_Word KeepGoing_32;
            MR_Word ModuleIndexMap_33;
            MR_Word DepIndexMap_34;
            MR_Word DepStatusMap_35;
            MR_Word NonDependTargets_36;
            MR_Word ClassifiedTargets_37;
            MR_Integer AnalysisRepeat_39;
            MR_Word ModuleDependencies_40;
            MR_Word FileTimestamps_41;
            MR_Word SearchFileNameCache_42;
            MR_Word ErrorFileModules_43;
            MR_Word MakeInfo0_46;
            MR_Word Succeeded_47;
            MR_Word Var_65;
            MR_Box Var_67;
            MR_Word Var_69;
            MR_Box Var_71;
            MR_Word Var_77;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Box conv7__MakeInfo_48;
            MR_Box conv6_STATE_VARIABLE_IO_86_86;

            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 666, &KeepGoingBool_31);
            switch (KeepGoingBool_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                KeepGoing_32 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                KeepGoing_32 = (MR_Integer) 1;
                break;
            }
            Var_65 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_1[3]));
            Var_67 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
            {
              ModuleIndexMap_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ModuleIndexMap_33, 0) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(0), ModuleIndexMap_33, 1) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(0), ModuleIndexMap_33, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            Var_69 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__top_level_scalar_common_1[4]));
            Var_71 = mercury__version_array__empty_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
            {
              DepIndexMap_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DepIndexMap_34, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), DepIndexMap_34, 1) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), DepIndexMap_34, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            DepStatusMap_35 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__top_level_scalar_common_1[5]));
            NonDependTargets_36 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[6]), Targets_17);
            {
              Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_6));
              MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Globals_8));
            }
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[0]), Var_77, NonDependTargets_36, &ClassifiedTargets_37);
            libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 501, &AnalysisRepeat_39);
            mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), &ModuleDependencies_40);
            mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_1[1]), &FileTimestamps_41);
            mercury__map__init_1_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_name_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SearchFileNameCache_42);
            mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ErrorFileModules_43);
            Var_79 = make__dependencies__init_cached_direct_imports_0_f_0();
            Var_80 = make__dependencies__init_cached_direct_imports_0_f_0();
            Var_81 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
            Var_82 = make__dependencies__init_cached_foreign_imports_0_f_0();
            Var_83 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__top_level_scalar_common_1[0]), ClassifiedTargets_37);
            Var_84 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
            {
              MakeInfo0_46 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 0) = ((MR_Box) (ModuleDependencies_40));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 1) = ((MR_Box) (FileTimestamps_41));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 2) = ((MR_Box) (SearchFileNameCache_42));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 3) = ((MR_Box) (DetectedGradeFlags_9));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 4) = ((MR_Box) (OptionArgs_11));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 5) = ((MR_Box) (Variables_10));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 6) = ((MR_Box) (ModuleIndexMap_33));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 7) = ((MR_Box) (DepIndexMap_34));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 8) = ((MR_Box) (DepStatusMap_35));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 9) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 10) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 11) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 12) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 13) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (KeepGoing_32)));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 14) = ((MR_Box) (ErrorFileModules_43));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 15) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 16) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 17) = ((MR_Box) (AnalysisRepeat_39));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 18) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), MakeInfo0_46, 19) = ((MR_Box) (Var_84));
            }
            make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__top_level_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_32, (MR_Word) (&make__top_level_scalar_common_1[7]), Globals_8, ClassifiedTargets_37, &Succeeded_47, ((MR_Box) (MakeInfo0_46)), &conv7__MakeInfo_48, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_86_86);
            parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_47);
          }
          break;
      }
    else
    {
      MR_String ProgName_28;
      MR_Word AbsTargetSpecs_29;
      MR_Word StdErr_30;
      MR_Word Var_61;

      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_28);
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_7_p_0_8));
        MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (ProgName_28));
      }
      AbsTargetSpecs_29 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_61, AbsTargets_24);
      mercury__io__stderr_stream_3_p_0(&StdErr_30);
      parse_tree__error_util__write_error_specs_ignore_5_p_0(StdErr_30, Globals_8, AbsTargetSpecs_29);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
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
