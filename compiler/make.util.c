/*
** Automatically generated from `make.util.m'
** by the Mercury compiler,
** version rotd-2022-05-20
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


// :- module make.util.
// :- implementation.

/*
INIT mercury__make__util__init
ENDINIT
*/

#include "make.util.mih"


#include "analysis.mih"
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
#include "make.module_dep_file.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"




static const MR_FA_PseudoTypeInfo_Struct2 make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__575__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8);

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__571__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8);

static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1058__1_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6);

static void MR_CALL 
make__util__module_or_linked_target_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word HeadVar__2_2,
  MR_String * FileName_9);

static void MR_CALL 
make__util__file_error_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__util__target_file_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__util__IntroducedFrom__pred__debug_file_msg__943__1_5_p_0(
  MR_Word Globals_6,
  MR_Word TargetFile_7,
  MR_String Msg_8);

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__util__find_error_or_oldest_ok_timestamp_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__util__get_search_directories_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_Word * SearchDirs_6);

static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word MkDir_11,
  MR_Word TargetType_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14);


static /* final */ const MR_Box make__util_scalar_common_1[3][3];

static /* final */ const MR_Box make__util_scalar_common_2[1][2];

static /* final */ const MR_Box make__util_scalar_common_3[24][1];

static /* final */ const MR_Box make__util_scalar_common_4[4][6];

static /* final */ const MR_Box make__util_scalar_common_6[1][9];


struct make__util__vector_common_type_5_0_s {
  const MR_Word make__util__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct make__util__vector_common_type_5_0_s make__util_vector_common_5[16];



static /* final */ const MR_Box make__util_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__util_scalar_common_4[0])),
    ((MR_Box) (make__util__find_error_or_oldest_ok_timestamp_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_3[24][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".analysis"))))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c"))))
  },
  /* row   2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mh"))))
  },
  /* row   3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mih"))))
  },
  /* row   4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".cs"))))
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".err"))))
  },
  /* row   6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int0"))))
  },
  /* row   7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int"))))
  },
  /* row   8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int2"))))
  },
  /* row   9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int3"))))
  },
  /* row  10 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".class"))))
  },
  /* row  11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java"))))
  },
  /* row  12 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".opt"))))
  },
  /* row  13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".track_flags"))))
  },
  /* row  14 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".xml"))))
  },
  /* row  15 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  16 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  17 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".exe"))))
  },
  /* row  18 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dll"))))
  },
  /* row  19 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".jar"))))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "invalid module"))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Integer) 681))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Integer) 535))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Integer) 680))
  },
};

static /* final */ const MR_Box make__util_scalar_common_4[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__util__vector_common_type_5_0_s make__util_vector_common_5[16] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 28U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 36U) },
  /* row   2 */   { (MR_Word) ((MR_Unsigned) 48U) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 40U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 4U) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 12U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 8U) },
  /* row   7 */   { (MR_Word) ((MR_Unsigned) 16U) },
  /* row   8 */   { (MR_Word) ((MR_Unsigned) 20U) },
  /* row   9 */   { (MR_Word) ((MR_Unsigned) 44U) },
  /* row  10 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row  11 */   { (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[15])) },
  /* row  12 */   { (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[16])) },
  /* row  13 */   { (MR_Word) ((MR_Unsigned) 24U) },
  /* row  14 */   { (MR_Word) ((MR_Unsigned) 32U) },
  /* row  15 */   { (MR_Word) ((MR_Unsigned) 52U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "make.build.mh"
#include "make.util.mh"



static const MR_FA_PseudoTypeInfo_Struct2 make__util__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__575__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8)
{
  MR_Word LambdaHeadVar__2_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (LambdaHeadVar__1_8));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (TargetType_5));
  }
  {
    LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 0) = ((MR_Box) (Var_10));
  }
  return LambdaHeadVar__2_9;
}

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__571__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8)
{
  MR_Word LambdaHeadVar__2_9;

  {
    LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 0) = ((MR_Box) (LambdaHeadVar__1_8));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 1) = ((MR_Box) (TargetType_5));
  }
  return LambdaHeadVar__2_9;
}

void MR_CALL 
make__util__dependency_file_hash_2_p_0(
  MR_Word DepFile_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) DepFile_3)) == (MR_Integer) 1))
  {
    MR_String FileName_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), DepFile_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(FileName_6);
  }
  else
  {
    MR_Word TargetFile_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepFile_3, (MR_Integer) 0))));
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_5, (MR_Integer) 0))));
    MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_5, (MR_Integer) 1))));
    MR_Integer Hash0_11;
    MR_Integer Hash1_12;
    MR_Integer H1_40;
    MR_Integer Var_41;

    if (((MR_tag((MR_Word) ModuleName_9)) == (MR_Integer) 1))
    {
      MR_String String_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModuleName_9, (MR_Integer) 1))));

      Hash0_11 = mercury__string__hash_1_f_0(String_17);
    }
    else
    {
      MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_9, (MR_Integer) 0))));

      Hash0_11 = mercury__string__hash_1_f_0(String_15);
    }
    switch (MR_tag((MR_Word) Type_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_12 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Hash1_12 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            Hash1_12 = (MR_Integer) 3;
            break;
          case (MR_Integer) 3:
            Hash1_12 = (MR_Integer) 4;
            break;
          case (MR_Integer) 4:
            Hash1_12 = (MR_Integer) 5;
            break;
          case (MR_Integer) 5:
            Hash1_12 = (MR_Integer) 6;
            break;
          case (MR_Integer) 6:
            Hash1_12 = (MR_Integer) 7;
            break;
          case (MR_Integer) 7:
            Hash1_12 = (MR_Integer) 8;
            break;
          case (MR_Integer) 8:
            Hash1_12 = (MR_Integer) 20;
            break;
          case (MR_Integer) 9:
            Hash1_12 = (MR_Integer) 11;
            break;
          case (MR_Integer) 10:
            Hash1_12 = (MR_Integer) 22;
            break;
          case (MR_Integer) 11:
            Hash1_12 = (MR_Integer) 12;
            break;
          case (MR_Integer) 12:
            Hash1_12 = (MR_Integer) 21;
            break;
          case (MR_Integer) 13:
            Hash1_12 = (MR_Integer) 19;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Type_10, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Hash1_12 = (MR_Integer) 9;
              break;
            case (MR_Integer) 1:
              Hash1_12 = (MR_Integer) 10;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Type_10, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Var_27;
          MR_Integer H1_34;

          switch (PIC_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_27 = (MR_Integer) 3;
              break;
            case (MR_Integer) 0:
              Var_27 = (MR_Integer) 1;
              break;
          }
          H1_34 = ((MR_Integer) 16 ^ (((MR_Integer) 16 << 5)));
          Hash1_12 = (H1_34 ^ Var_27);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_12 = (MR_Integer) 17;
            break;
          case (MR_Integer) 1:
            Hash1_12 = (MR_Integer) 18;
            break;
        }
        break;
    }
    Var_41 = (Hash0_11 << 5);
    H1_40 = (Hash0_11 ^ Var_41);
    *Hash_4 = (H1_40 ^ Hash1_12);
  }
}

void MR_CALL 
make__util__module_name_hash_2_p_0(
  MR_Word SymName_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
  {
    MR_String String_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 1))));

    *Hash_4 = mercury__string__hash_1_f_0(String_7);
  }
  else
  {
    MR_String String_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(String_5);
  }
}

void MR_CALL 
make__util__get_real_milliseconds_3_p_0(
  MR_Integer * Time_1)
{
{
#define MR_PROC_LABEL make__util__get_real_milliseconds_3_p_0

	MR_Integer Time;

		{

    Time = MR_get_real_milliseconds();


		;}
#undef MR_PROC_LABEL
	*Time_1  = Time;
}
}

void MR_CALL 
make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6)
{
  MR_Word OptionValue_25;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 76, &OptionValue_25);
  switch (OptionValue_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1058__1_4_p_0(Globals_5, Target_6);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1058__1_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6)
{
  MR_String FileName_8;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_6, (MR_Integer) 0))));
  MR_Word TargetType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_6, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) TargetType_28)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TargetType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetType_28, (MR_Integer) 0))));

        make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_5, (MR_Integer) 1, (MR_Integer) 1, TargetType_45, ModuleName_27, &FileName_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LinkedTargetType_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TargetType_28, (MR_Integer) 0))) & (MR_Integer) 7);

        make__util__linked_target_file_name_6_p_0(Globals_5, ModuleName_27, LinkedTargetType_32, &FileName_8);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.module_or_linked_target_file_name\'/5", (MR_String) "misc_target");
        return;
      }
      break;
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (FileName_8));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "Made symlink/copy of %s\n", Var_19);
}

void MR_CALL 
make__util__maybe_warn_up_to_date_target_6_p_0(
  MR_Word Globals_7,
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;
  MR_Word Warn_11;
  MR_Word CmdLineTargets0_12;
  MR_Word CmdLineTargets_14;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Integer Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Unsigned packed_word_1;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 40, &Warn_11);
  CmdLineTargets0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 16))));
  switch (Warn_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) (&make__util_scalar_common_1[1]), ((MR_Box) (Target_8)), CmdLineTargets0_12);
        if (succeeded)
        {
          MR_String FileName_13;

          make__util__module_or_linked_target_file_name_5_p_0(Globals_7, Target_8, &FileName_13);
          mercury__io__write_string_3_p_0((MR_String) "** Nothing to be done for \140");
          mercury__io__write_string_3_p_0(FileName_13);
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
        }
      }
      break;
  }
  mercury__set__delete_3_p_0((MR_Word) (&make__util_scalar_common_1[1]), ((MR_Box) (Target_8)), CmdLineTargets0_12, &CmdLineTargets_14);
  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
  Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
  Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3))));
  Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 4))));
  Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 5))));
  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 6))));
  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 7))));
  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 8))));
  Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 9))));
  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 10))));
  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 11))));
  Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 12))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 13)));
  Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 14))));
  Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 15))));
  Var_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 17))));
  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 18))));
  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 19))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_48));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_50));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_51));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_52));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_53));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_56));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_62));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (CmdLineTargets_14));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_67));
  }
}

static void MR_CALL 
make__util__module_or_linked_target_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word HeadVar__2_2,
  MR_String * FileName_9)
{
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TargetType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) TargetType_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TargetType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetType_8, (MR_Integer) 0))));

        make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_6, (MR_Integer) 1, (MR_Integer) 1, TargetType_28, ModuleName_7, FileName_9);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LinkedTargetType_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TargetType_8, (MR_Integer) 0))) & (MR_Integer) 7);

        make__util__linked_target_file_name_6_p_0(Globals_6, ModuleName_7, LinkedTargetType_13, FileName_9);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.module_or_linked_target_file_name\'/5", (MR_String) "misc_target");
        return;
      }
      break;
  }
}

static void MR_CALL 
make__util__file_error_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
}

void MR_CALL 
make__util__file_error_4_p_0(
  MR_Word Info_5,
  MR_String TargetFile_6)
{
  MR_Word Var_10;
  MR_String Var_12;
  MR_String Var_14;

  Var_14 = mercury__string__f_43_43_2_f_0(TargetFile_6, (MR_String) "\'.\n");
  Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "** Error making \140", Var_14);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&make__util_scalar_common_4[3]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (make__util__file_error_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_12));
  }
  make__build__with_locked_stdout_4_p_0(Info_5, Var_10);
}

static void MR_CALL 
make__util__target_file_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__util__make_write_target_file_wrapped_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
}

void MR_CALL 
make__util__target_file_error_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word TargetFile_8)
{
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&make__util_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (make__util__target_file_error_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) ((MR_String) "** Error making \140"));
    MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (TargetFile_8));
    MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) ((MR_String) "\'.\n"));
  }
  make__build__with_locked_stdout_4_p_0(Info_6, Var_12);
}

void MR_CALL 
make__util__maybe_reanalyse_modules_message_3_p_0(
  MR_Word Globals_4)
{
  MR_Word OptionValue_25;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 76, &OptionValue_25);
  switch (OptionValue_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OutputStream_33;

        mercury__io__output_stream_3_p_0(&OutputStream_33);
        mercury__io__write_string_4_p_0(OutputStream_33, (MR_String) "Reanalysing invalid/suboptimal modules\n");
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void MR_CALL 
make__util__maybe_make_target_message_4_p_0(
  MR_Word Globals_5,
  MR_Word TargetFile_6)
{
  MR_Word OutputStream_8;

  mercury__io__output_stream_3_p_0(&OutputStream_8);
  make__util__maybe_make_target_message_to_stream_5_p_0(Globals_5, OutputStream_8, TargetFile_6);
}

void MR_CALL 
make__util__maybe_make_target_message_to_stream_5_p_0(
  MR_Word Globals_6,
  MR_Word OutputStream_7,
  MR_Word TargetFile_8)
{
  MR_Word OptionValue_26;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 76, &OptionValue_26);
  switch (OptionValue_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        make__util__make_write_target_file_wrapped_7_p_0(OutputStream_7, Globals_6, (MR_String) "Making ", TargetFile_8, (MR_String) "\n");
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void MR_CALL 
make__util__maybe_make_linked_target_message_4_p_0(
  MR_Word Globals_5,
  MR_String TargetFile_6)
{
  MR_Word OptionValue_24;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 76, &OptionValue_24);
  switch (OptionValue_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_39;
        MR_String Var_42;

        Var_42 = mercury__string__f_43_43_2_f_0(TargetFile_6, (MR_String) "\n");
        Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "Making ", Var_42);
        mercury__io__write_string_3_p_0(Var_39);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void MR_CALL 
make__util__make_write_target_file_wrapped_7_p_0(
  MR_Word Stream_8,
  MR_Word Globals_9,
  MR_String Prefix_10,
  MR_Word TargetFile_11,
  MR_String Suffix_12)
{
  MR_bool succeeded;
  MR_String FileName_14;
  MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
  MR_Word TargetType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));

  make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, TargetType_29, ModuleName_28, &FileName_14);
  succeeded = (strcmp(Prefix_10, (MR_String) "") == 0);
  if (succeeded)
    succeeded = (strcmp(Suffix_12, (MR_String) "") == 0);
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_8, FileName_14);
  else
  {
    MR_String Var_19;
    MR_String Var_21;

    Var_21 = mercury__string__f_43_43_2_f_0(FileName_14, Suffix_12);
    Var_19 = mercury__string__f_43_43_2_f_0(Prefix_10, Var_21);
    mercury__io__write_string_4_p_0(Stream_8, Var_19);
  }
}

void MR_CALL 
make__util__make_write_target_file_wrapped_6_p_0(
  MR_Word Globals_7,
  MR_String Prefix_8,
  MR_Word TargetFile_9,
  MR_String Suffix_10)
{
  MR_bool succeeded;
  MR_String FileName_12;
  MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_9, (MR_Integer) 0))));
  MR_Word TargetType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_9, (MR_Integer) 1))));

  make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_7, (MR_Integer) 1, (MR_Integer) 1, TargetType_27, ModuleName_26, &FileName_12);
  succeeded = (strcmp(Prefix_8, (MR_String) "") == 0);
  if (succeeded)
    succeeded = (strcmp(Suffix_10, (MR_String) "") == 0);
  if (succeeded)
    mercury__io__write_string_3_p_0(FileName_12);
  else
  {
    MR_String Var_17;
    MR_String Var_19;

    Var_19 = mercury__string__f_43_43_2_f_0(FileName_12, Suffix_10);
    Var_17 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_19);
    mercury__io__write_string_3_p_0(Var_17);
  }
}

void MR_CALL 
make__util__make_write_target_file_4_p_0(
  MR_Word Globals_5,
  MR_Word TargetFile_6)
{
  MR_String FileName_8;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_6, (MR_Integer) 0))));
  MR_Word TargetType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_6, (MR_Integer) 1))));

  make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_5, (MR_Integer) 1, (MR_Integer) 1, TargetType_20, ModuleName_19, &FileName_8);
  mercury__io__write_string_3_p_0(FileName_8);
}

void MR_CALL 
make__util__get_make_target_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word TargetFile_7,
  MR_String * FileName_8)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_7, (MR_Integer) 0))));
  MR_Word TargetType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_7, (MR_Integer) 1))));

  make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_6, (MR_Integer) 1, (MR_Integer) 1, TargetType_11, ModuleName_10, FileName_8);
}

void MR_CALL 
make__util__make_write_dependency_file_list_4_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DepFile_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word DepFiles_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String FileName_13;
      MR_Word next_value_of_HeadVar__2_2;

      make__util__dependency_file_to_file_name_5_p_0(Globals_1, DepFile_10, &FileName_13);
      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__io__write_string_3_p_0(FileName_13);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = DepFiles_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
make__util__make_write_dependency_file_4_p_0(
  MR_Word Globals_5,
  MR_Word DepFile_6)
{
  MR_String FileName_8;

  make__util__dependency_file_to_file_name_5_p_0(Globals_5, DepFile_6, &FileName_8);
  mercury__io__write_string_3_p_0(FileName_8);
}

void MR_CALL 
make__util__dependency_file_to_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word DepFile_7,
  MR_String * FileName_8)
{
  if (((MR_tag((MR_Word) DepFile_7)) == (MR_Integer) 1))
    *FileName_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), DepFile_7, (MR_Integer) 0))));
  else
  {
    MR_Word TargetFile_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepFile_7, (MR_Integer) 0))));
    MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_10, (MR_Integer) 0))));
    MR_Word TargetType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_10, (MR_Integer) 1))));

    make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_6, (MR_Integer) 1, (MR_Integer) 1, TargetType_21, ModuleName_20, FileName_8);
  }
}

void MR_CALL 
make__util__debug_file_msg_5_p_0(
  MR_Word Globals_6,
  MR_Word TargetFile_7,
  MR_String Msg_8)
{
  MR_Word OptionValue_27;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 104, &OptionValue_27);
  switch (OptionValue_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        make__util__IntroducedFrom__pred__debug_file_msg__943__1_5_p_0(Globals_6, TargetFile_7, Msg_8);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__debug_file_msg__943__1_5_p_0(
  MR_Word Globals_6,
  MR_Word TargetFile_7,
  MR_String Msg_8)
{
  MR_String FileName_10;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_7, (MR_Integer) 0))));
  MR_Word TargetType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_7, (MR_Integer) 1))));

  make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_6, (MR_Integer) 1, (MR_Integer) 1, TargetType_34, ModuleName_33, &FileName_10);
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (FileName_10));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Msg_8));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
  }
  mercury__io__format_4_p_0((MR_String) "%s: %s\n", Var_21);
}

void MR_CALL 
make__util__verbose_make_msg_option_5_p_0(
  MR_Word Globals_6,
  MR_Word Option_7,
  MR_Word P_8)
{
  MR_Word OptionValue_10;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, Option_7, &OptionValue_10);
  switch (OptionValue_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
        MR_Box conv1_STATE_VARIABLE_IO_13_13;

        func_0(((MR_Box) (P_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_13);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void MR_CALL 
make__util__verbose_make_msg_4_p_0(
  MR_Word Globals_5,
  MR_Word P_6)
{
  MR_Word OptionValue_18;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 76, &OptionValue_18);
  switch (OptionValue_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));
        MR_Box conv1_STATE_VARIABLE_IO_13_19;

        func_0(((MR_Box) (P_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_19);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void MR_CALL 
make__util__debug_make_msg_4_p_0(
  MR_Word Globals_5,
  MR_Word P_6)
{
  MR_Word OptionValue_18;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 104, &OptionValue_18);
  switch (OptionValue_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));
        MR_Box conv1_STATE_VARIABLE_IO_13_19;

        func_0(((MR_Box) (P_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_19);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

MR_bool MR_CALL 
make__util__target_is_grade_or_arch_dependent_1_p_0(
  MR_Word Target_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Target_2)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Target_2)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 7:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 8:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 9:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 10:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 11:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 12:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Target_2, (MR_Integer) 0))) & (MR_Integer) 1);

        succeeded = (Var_13 == (MR_Integer) 1);
      }
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_2, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
make__util__linked_target_file_name_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word TargetType_9,
  MR_String * FileName_10)
{
  switch (TargetType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[17])), ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 4:
      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[18])), ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 0:
      {
        MR_String Ext_12;
        MR_Word Var_18;
        MR_Word Var_20;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 606, &Ext_12);
        Var_20 = (MR_Word) (Ext_12);
        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_20));
        }
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Integer) 1, Var_18, ModuleName_8, FileName_10);
      }
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 5:
      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[19])), ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_31;
        MR_String Ext_52;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 604, &Ext_52);
        Var_31 = (MR_Word) (Ext_52);
        parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Integer) 1, (MR_String) "lib", Var_31, ModuleName_8, FileName_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_25;
        MR_String Ext_51;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 605, &Ext_51);
        Var_25 = (MR_Word) (Ext_51);
        parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_7, (MR_String) "predicate \140make.util.linked_target_file_name\'/6", (MR_Integer) 1, (MR_String) "lib", Var_25, ModuleName_8, FileName_10);
      }
      break;
  }
}

MR_bool MR_CALL 
make__util__target_extension_synonym_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) ".csharp") == 0);

  if (succeeded)
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 40U);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
make__util__extension_to_target_type_3_p_0(
  MR_Word Globals_4,
  MR_String ExtStr_5,
  MR_Word * Target_6)
{
  MR_bool succeeded;
  MR_Word TargetPrime_7;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (((MR_nth_code_unit(ExtStr_5, 0)) == (MR_Integer) 46))
      switch (MR_nth_code_unit(ExtStr_5, 1)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".analysis"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(ExtStr_5, 2)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".class"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".cs"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 101:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".err"))
            case_num_0 = (MR_Integer) 4;
          break;
        case (MR_Integer) 105:
          if (((((MR_nth_code_unit(ExtStr_5, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ExtStr_5, 3)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(ExtStr_5, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 5;
                break;
              case (MR_Integer) 48:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int0"))
                  case_num_0 = (MR_Integer) 6;
                break;
              case (MR_Integer) 50:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int2"))
                  case_num_0 = (MR_Integer) 7;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(5, ExtStr_5, (MR_String) ".int3"))
                  case_num_0 = (MR_Integer) 8;
                break;
            }
          break;
        case (MR_Integer) 106:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".java"))
            case_num_0 = (MR_Integer) 9;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(ExtStr_5, 2)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".mh"))
                case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(3, ExtStr_5, (MR_String) ".mih"))
                case_num_0 = (MR_Integer) 12;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".opt"))
            case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".track_flags"))
            case_num_0 = (MR_Integer) 14;
          break;
        case (MR_Integer) 120:
          if (MR_offset_streq(2, ExtStr_5, (MR_String) ".xml"))
            case_num_0 = (MR_Integer) 15;
          break;
      }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      TargetPrime_7 = ((&make__util_vector_common_5[0 + case_num_0]))->make__util__vector_common_type_5_0__vct_5_f_0;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *Target_6 = TargetPrime_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word PIC_8;

    succeeded = backend_libs__compile_target_code__is_pic_object_file_extension_3_p_0(Globals_4, ExtStr_5, &PIC_8);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Target_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (PIC_8));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_9;

  conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_dependency_list__575__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
make__util__make_dependency_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word TargetType_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&make__util_scalar_common_4[2]));
    MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (make__util__make_dependency_list_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TargetType_5));
  }
  HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_7, ModuleNames_4);
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_9;

  conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_target_file_list__571__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
make__util__make_target_file_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word TargetType_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&make__util_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (make__util__make_target_file_list_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TargetType_5));
  }
  HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_7, ModuleNames_4);
  return HeadVar__3_3;
}

void MR_CALL 
make__util__make_remove_module_file_8_p_0(
  MR_Word Globals_9,
  MR_Word VerboseOption_10,
  MR_Word ModuleName_11,
  MR_Word Ext_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_String FileName_15;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.util.make_remove_module_file\'/8", (MR_Integer) 1, Ext_12, ModuleName_11, &FileName_15);
  make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

void MR_CALL 
make__util__make_remove_target_file_7_p_0(
  MR_Word Globals_8,
  MR_Word VerboseOption_9,
  MR_Word Target_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_10, (MR_Integer) 0))));
  MR_Word TargetType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_10, (MR_Integer) 1))));

  make__util__make_remove_target_file_by_name_8_p_0(Globals_8, VerboseOption_9, ModuleName_13, TargetType_14, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

void MR_CALL 
make__util__make_remove_target_file_by_name_8_p_0(
  MR_Word Globals_9,
  MR_Word VerboseOption_10,
  MR_Word ModuleName_11,
  MR_Word TargetType_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_String FileName_15;
  MR_Word STATE_VARIABLE_Info_23_23;
  MR_Word TimestampOtherExt_16;

  make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, TargetType_12, ModuleName_11, &FileName_15);
  make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_15, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_23_23);
  succeeded = make__util__timestamp_extension_2_p_0(TargetType_12, &TimestampOtherExt_16);
  if (succeeded)
  {
    MR_Word Var_25;
    MR_String FileName_48;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (TimestampOtherExt_16));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.util.make_remove_module_file\'/8", (MR_Integer) 1, Var_25, ModuleName_11, &FileName_48);
    make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_48, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_18);
  }
  else
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_23_23;
}

void MR_CALL 
make__util__make_remove_file_7_p_0(
  MR_Word Globals_8,
  MR_Word VerboseOption_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word FileTimestamps0_14;
  MR_Word FileTimestamps_15;
  MR_Word OptionValue_75;
  MR_Word Var_13;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Integer Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Unsigned packed_word_1;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, VerboseOption_9, &OptionValue_75);
  switch (OptionValue_75) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "Removing ");
        mercury__io__write_string_3_p_0(FileName_10);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
  mercury__io__file__remove_file_recursively_4_p_0(FileName_10, &Var_13);
  FileTimestamps0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
  mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_10)), FileTimestamps0_14, &FileTimestamps_15);
  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4))));
  Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6))));
  Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8))));
  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9))));
  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10))));
  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11))));
  Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 12))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
  Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 14))));
  Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 15))));
  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 16))));
  Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 17))));
  Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 18))));
  Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 19))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileTimestamps_15));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_53));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_56));
    MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_62));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_64));
  }
}

static void MR_CALL 
make__util__find_error_or_oldest_ok_timestamp_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeTimestamp_6;

  make__util__find_error_or_older_ok_timestamp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeTimestamp_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeTimestamp_6));
}

void MR_CALL 
make__util__find_error_or_oldest_ok_timestamp_2_p_0(
  MR_Word MaybeTimestamps_3,
  MR_Word * MaybeTimestamp_4)
{
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Box conv1_MaybeTimestamp_4;

  Var_7 = libs__timestamp__newest_timestamp_0_f_0();
  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&make__util_scalar_common_1[0]), (MR_Word) (&make__util_scalar_common_1[0]), (MR_Word) (&make__util_scalar_common_1[2]), MaybeTimestamps_3, ((MR_Box) (Var_6)), &conv1_MaybeTimestamp_4);
  *MaybeTimestamp_4 = ((MR_Word) (conv1_MaybeTimestamp_4));
}

void MR_CALL 
make__util__find_error_or_older_ok_timestamp_3_p_0(
  MR_Word MaybeTimestampA_4,
  MR_Word MaybeTimestampB_5,
  MR_Word * MaybeTimestamp_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) MaybeTimestampA_4)) == (MR_Integer) 1))
    *MaybeTimestamp_6 = MaybeTimestampA_4;
  else
  {
    MR_Word TimestampA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTimestampA_4, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) MaybeTimestampB_5)) == (MR_Integer) 1))
      *MaybeTimestamp_6 = MaybeTimestampB_5;
    else
    {
      MR_Word TimestampB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTimestampB_5, (MR_Integer) 0))));
      MR_Word Timestamp_11;
      MR_Word Var_14;

      libs__timestamp____Compare____timestamp_0_0(&Var_14, TimestampA_8, TimestampB_10);
      succeeded = ((MR_Integer) 1 == Var_14);
      if (succeeded)
        Timestamp_11 = TimestampA_8;
      else
        Timestamp_11 = TimestampB_10;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Timestamp_11));
      }
    }
  }
}

void MR_CALL 
make__util__get_target_timestamp_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word TargetFile_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));
  MR_String FileName_17;
  MR_Word STATE_VARIABLE_Info_22_22;

  make__util__get_file_name_8_p_0(Globals_9, Search_10, TargetFile_11, &FileName_17, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_22_22);
  succeeded = (TargetType_16 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
    make__util__get_target_timestamp_analysis_registry_9_p_0(Globals_9, Search_10, TargetFile_11, FileName_17, MaybeTimestamp_12, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_19);
  else
    make__util__get_target_timestamp_2_9_p_0(Globals_9, Search_10, TargetFile_11, FileName_17, MaybeTimestamp_12, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_19);
}

void MR_CALL 
make__util__get_dependency_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word DependencyFile_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) DependencyFile_9)) == (MR_Integer) 1))
  {
    MR_String FileName_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), DependencyFile_9, (MR_Integer) 0))));
    MR_Word SearchDirs_14;
    MR_String Var_23;

    Var_23 = mercury__dir__this_directory_0_f_0();
    {
      SearchDirs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SearchDirs_14, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), SearchDirs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__util__get_file_timestamp_7_p_0(SearchDirs_14, FileName_13, MaybeTimestamp_10, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  }
  else
  {
    MR_Word Target_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DependencyFile_9, (MR_Integer) 0))));
    MR_Word MaybeTimestamp0_16;
    MR_Word TargetType_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_15, (MR_Integer) 1))));
    MR_String FileName_45;
    MR_Word STATE_VARIABLE_Info_22_46;
    MR_Word Var_30;
    MR_Word Var_31;

    make__util__get_file_name_8_p_0(Globals_8, (MR_Integer) 0, Target_15, &FileName_45, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_22_46);
    succeeded = (TargetType_44 == (MR_Word) ((MR_Unsigned) 28U));
    if (succeeded)
      make__util__get_target_timestamp_analysis_registry_9_p_0(Globals_8, (MR_Integer) 0, Target_15, FileName_45, &MaybeTimestamp0_16, STATE_VARIABLE_Info_22_46, STATE_VARIABLE_Info_20);
    else
      make__util__get_target_timestamp_2_9_p_0(Globals_8, (MR_Integer) 0, Target_15, FileName_45, &MaybeTimestamp0_16, STATE_VARIABLE_Info_22_46, STATE_VARIABLE_Info_20);
    succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_31 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word Var_32;

      Var_32 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      }
    }
    else
      *MaybeTimestamp_10 = MaybeTimestamp0_16;
  }
}

static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
  MR_Word FileTimestamps0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
  MR_Word MaybeTimestamp0_20;
  MR_Box conv0_MaybeTimestamp0_20;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), FileTimestamps0_19, ((MR_Box) (FileName_13)), &conv0_MaybeTimestamp0_20);
  if (succeeded)
  {
    MaybeTimestamp0_20 = ((MR_Word) (conv0_MaybeTimestamp0_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *MaybeTimestamp_14 = MaybeTimestamp0_20;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word Status_21;

    analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__util_scalar_common_2[0]), ((MR_Box) ((MR_Integer) 0)), Globals_10, ModuleName_17, &Status_21);
    switch (Status_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FileTimestamps_22;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Integer Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Unsigned packed_word_1;

          *MaybeTimestamp_14 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[20]));
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_13)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestamps0_19, &FileTimestamps_22);
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
          Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
          Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3))));
          Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4))));
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5))));
          Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6))));
          Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7))));
          Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8))));
          Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9))));
          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10))));
          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11))));
          Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12))));
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
          Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14))));
          Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15))));
          Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16))));
          Var_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17))));
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18))));
          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_24 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileTimestamps_22));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_73));
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        make__util__get_target_timestamp_2_9_p_0(Globals_10, Search_11, TargetFile_12, FileName_13, MaybeTimestamp_14, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
        break;
    }
  }
}

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1))));
  MR_Word SearchDirs_19;
  MR_Word MaybeTimestamp0_20;
  MR_Word STATE_VARIABLE_Info_33_33;

  switch (Search_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_31;

        Var_31 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SearchDirs_19, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      make__util__get_search_directories_3_p_0(Globals_10, TargetType_18, &SearchDirs_19);
      break;
  }
  make__util__get_file_timestamp_7_p_0(SearchDirs_19, FileName_13, &MaybeTimestamp0_20, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_33_33);
  succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_20)) == (MR_Integer) 1);
  if (succeeded)
  {
    if ((TargetType_18 == (MR_Word) ((MR_Unsigned) 28U)))
      succeeded = MR_TRUE;
    else
    if ((TargetType_18 == (MR_Word) ((MR_Unsigned) 24U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    MR_Word MaybeModuleDepInfo_22;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word ModuleDepInfo_23;
    MR_String ModuleDir_24;
    MR_String Var_82;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_22, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_35_35);
    succeeded = (MaybeModuleDepInfo_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ModuleDepInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_22, (MR_Integer) 0))));
      parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_23, &ModuleDir_24);
      Var_82 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(ModuleDir_24, Var_82) == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word FileTimestamps0_25;
      MR_Word FileTimestamps_26;
      MR_Word Var_37;
      MR_Word Var_59;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Integer Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Unsigned packed_word_1;

      Var_37 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      }
      FileTimestamps0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 1))));
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_13)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestamps0_25, &FileTimestamps_26);
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 0))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 2))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 3))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 4))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 5))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 6))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 7))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 8))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 9))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 10))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 11))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 12))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 13)));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 14))));
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 15))));
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 16))));
      Var_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 17))));
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 18))));
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 19))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileTimestamps_26));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_79));
      }
    }
    else
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_20;
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_35_35;
    }
  }
  else
  {
    *MaybeTimestamp_14 = MaybeTimestamp0_20;
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_33_33;
  }
}

static void MR_CALL 
make__util__get_search_directories_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_Word * SearchDirs_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TargetType_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
          {
            MR_String Var_12;

            Var_12 = mercury__dir__this_directory_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SearchDirs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          {
            MR_Word SearchDirOpt_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[23])), (MR_Integer) 0))));
            MR_Word SearchDirs0_48;
            MR_String Var_40;

            libs__globals__lookup_accumulating_option_3_p_0(Globals_4, SearchDirOpt_47, &SearchDirs0_48);
            Var_40 = mercury__dir__this_directory_0_f_0();
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_40)), SearchDirs0_48);
            if (succeeded)
              *SearchDirs_6 = SearchDirs0_48;
            else
            {
              MR_String Var_42;

              Var_42 = mercury__dir__this_directory_0_f_0();
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SearchDirs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_48));
              }
            }
          }
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          {
            MR_Word SearchDirOpt_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[21])), (MR_Integer) 0))));
            MR_Word SearchDirs0_9;
            MR_String Var_10;

            libs__globals__lookup_accumulating_option_3_p_0(Globals_4, SearchDirOpt_8, &SearchDirs0_9);
            Var_10 = mercury__dir__this_directory_0_f_0();
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_10)), SearchDirs0_9);
            if (succeeded)
              *SearchDirs_6 = SearchDirs0_9;
            else
            {
              MR_String Var_11;

              Var_11 = mercury__dir__this_directory_0_f_0();
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SearchDirs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_9));
              }
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SearchDirOpt_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[22])), (MR_Integer) 0))));
        MR_Word SearchDirs0_36;
        MR_String Var_28;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_4, SearchDirOpt_35, &SearchDirs0_36);
        Var_28 = mercury__dir__this_directory_0_f_0();
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_28)), SearchDirs0_36);
        if (succeeded)
          *SearchDirs_6 = SearchDirs0_36;
        else
        {
          MR_String Var_30;

          Var_30 = mercury__dir__this_directory_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SearchDirs_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_36));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_12;

        Var_12 = mercury__dir__this_directory_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SearchDirs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String Var_12;

        Var_12 = mercury__dir__this_directory_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SearchDirs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
}

void MR_CALL 
make__util__get_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word TargetFile_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));

  succeeded = (TargetType_16 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word MaybeModuleDepInfo_17;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_15, &MaybeModuleDepInfo_17, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_15, FileName_12);
    else
    {
      MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_17, (MR_Integer) 0))));

      parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo_18, FileName_12);
    }
  }
  else
  {
    MR_Word Ext_19;

    succeeded = make__util__target_type_to_extension_3_p_0(Globals_9, TargetType_16, &Ext_19);
    if (succeeded)
      switch (Search_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.util.get_file_name\'/8", (MR_Integer) 1, Ext_19, ModuleName_15, FileName_12);
            *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
          }
          break;
        case (MR_Integer) 0:
          make__util__module_name_to_search_file_name_cache_8_p_0(Globals_9, Ext_19, ModuleName_15, FileName_12, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
          break;
      }
    else
    {
      make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_9, Search_10, (MR_Integer) 1, TargetType_16, ModuleName_15, FileName_12);
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    }
  }
}

static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word Key_15;
  MR_Word Cache0_16;
  MR_String FileName0_17;
  MR_Box conv0_FileName0_17;

  {
    Key_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Key_15, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(MR_mktag(0), Key_15, 1) = ((MR_Box) (Ext_10));
  }
  Cache0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_name_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Cache0_16, ((MR_Box) (Key_15)), &conv0_FileName0_17);
  if (succeeded)
  {
    FileName0_17 = ((MR_String) (conv0_FileName0_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *FileName_12 = FileName0_17;
    *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
  }
  else
  {
    MR_Word Cache_18;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Integer Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Unsigned packed_word_1;

    parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_9, (MR_String) "predicate \140make.util.module_name_to_search_file_name_cache\'/8", Ext_10, ModuleName_11, FileName_12);
    mercury__map__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_name_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Key_15)), ((MR_Box) (*FileName_12)), Cache0_16, &Cache_18);
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 6))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 9))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 10))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 11))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 13)));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 14))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 15))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 16))));
    Var_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 17))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 18))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Cache_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_66));
    }
  }
}

void MR_CALL 
make__util__get_timestamp_file_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word HeadVar__2_2,
  MR_Word * MaybeTimestamp_11,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TargetType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_String FileName_15;
  MR_Word SearchDirs_16;
  MR_String Var_27;
  MR_Word TimestampOtherExt_14;

  succeeded = make__util__timestamp_extension_2_p_0(TargetType_10, &TimestampOtherExt_14);
  if (succeeded)
  {
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (TimestampOtherExt_14));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.util.get_timestamp_file_timestamp\'/7", (MR_Integer) 1, Var_23, ModuleName_9, &FileName_15);
  }
  else
    make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_8, (MR_Integer) 1, (MR_Integer) 1, TargetType_10, ModuleName_9, &FileName_15);
  Var_27 = mercury__dir__this_directory_0_f_0();
  {
    SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SearchDirs_16, 0) = ((MR_Box) (Var_27));
    MR_hl_field(MR_mktag(1), SearchDirs_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__util__get_file_timestamp_7_p_0(SearchDirs_16, FileName_15, MaybeTimestamp_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word MkDir_11,
  MR_Word TargetType_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Ext_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = make__util__target_type_to_extension_3_p_0(Globals_9, TargetType_12, &Ext_16);
    if (succeeded)
      switch (Search_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", MkDir_11, Ext_16, ModuleName_13, FileName_14);
          break;
        case (MR_Integer) 0:
          parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_9, (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", Ext_16, ModuleName_13, FileName_14);
          break;
      }
    else
      switch (MR_tag((MR_Word) TargetType_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "unexpected TargetType");
            return;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "unexpected TargetType");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word PIC_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                MR_Word Lang_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word ForeignModuleName_19;

                succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(ModuleName_13, Lang_18, &ForeignModuleName_19);
                if (succeeded)
                {
                  MR_Word Var_30;
                  MR_Word next_value_of_TargetType_12;
                  MR_Word next_value_of_ModuleName_13;

                  {
                    Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_30, 0) = (MR_Box) ((MR_Unsigned) (PIC_17));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_TargetType_12 = Var_30;
                  next_value_of_ModuleName_13 = ForeignModuleName_19;
                  TargetType_12 = next_value_of_TargetType_12;
                  ModuleName_13 = next_value_of_ModuleName_13;
                  continue;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "object test failed");
                    return;
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String FactFile_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 2))));
                MR_Word OtherExt_21;
                MR_Word PIC_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 1))) & (MR_Integer) 1);

                backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_9, PIC_38, &OtherExt_21);
                parse_tree__file_names__fact_table_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", MkDir_11, OtherExt_21, FactFile_20, FileName_14);
              }
              break;
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
make__util__target_type_to_extension_3_p_0(
  MR_Word Globals_4,
  MR_Word Target_5,
  MR_Word * Ext_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Target_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Target_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Ext_6 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[5]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[6]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[7]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[8]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[9]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[12]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[0]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[13]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[1]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[4]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[11]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 12:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[10]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[14]));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Target_5, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[2]));
            break;
          case (MR_Integer) 1:
            *Ext_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[3]));
            break;
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PIC_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Target_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word OtherExt_8;

        backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_4, PIC_7, &OtherExt_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Ext_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OtherExt_8));
        }
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
make__util__timestamp_extension_2_p_0(
  MR_Word ModuleTargetType_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String ExtStr_4;

  switch (MR_tag((MR_Word) ModuleTargetType_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(ModuleTargetType_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            ExtStr_4 = (MR_String) ".err_date";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            ExtStr_4 = (MR_String) ".date0";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            ExtStr_4 = (MR_String) ".date";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            ExtStr_4 = (MR_String) ".date";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            ExtStr_4 = (MR_String) ".date3";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            ExtStr_4 = (MR_String) ".optdate";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            ExtStr_4 = (MR_String) ".analysis_date";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            ExtStr_4 = (MR_String) ".c_date";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            ExtStr_4 = (MR_String) ".cs_date";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            ExtStr_4 = (MR_String) ".java_date";
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        ExtStr_4 = (MR_String) ".c_date";
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    *HeadVar__2_2 = (MR_Word) (ExtStr_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
make__util__get_file_timestamp_7_p_0(
  MR_Word SearchDirs_8,
  MR_String FileName_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word FileTimestamps0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1))));
  MR_Word MaybeTimestamp0_14;
  MR_Box conv0_MaybeTimestamp0_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), FileTimestamps0_13, ((MR_Box) (FileName_9)), &conv0_MaybeTimestamp0_14);
  if (succeeded)
  {
    MaybeTimestamp0_14 = ((MR_Word) (conv0_MaybeTimestamp0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *MaybeTimestamp_10 = MaybeTimestamp0_14;
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
  else
  {
    MR_Word SearchResult_15;

    parse_tree__find_module__search_for_file_mod_time_5_p_0(SearchDirs_8, FileName_9, &SearchResult_15);
    if (((MR_tag((MR_Word) SearchResult_15)) == (MR_Integer) 1))
    {
      MR_String Var_26;
      MR_String Var_28;

      Var_28 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' not found");
      Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", Var_28);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
      }
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    }
    else
    {
      MR_Word TimeT_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchResult_15, (MR_Integer) 0))));
      MR_Word Timestamp_17;
      MR_Word FileTimestamps_18;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Integer Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Unsigned packed_word_1;

      Timestamp_17 = libs__timestamp__time_t_to_timestamp_1_f_0(TimeT_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Timestamp_17));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_9)), ((MR_Box) (*MaybeTimestamp_10)), FileTimestamps0_13, &FileTimestamps_18);
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 6))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 7))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 8))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 9))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 10))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 11))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 12))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 13)));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 14))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 15))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 16))));
      Var_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 17))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 18))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 19))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_21 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileTimestamps_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_70));
      }
    }
  }
}

void mercury__make__util__init(void)
{
}

void mercury__make__util__init_type_tables(void)
{
}

void mercury__make__util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.util.
