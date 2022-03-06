/*
** Automatically generated from `file_util.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-06
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


// :- module libs.file_util.
// :- implementation.

/*
INIT mercury__libs__file_util__init
ENDINIT
*/

#include "libs.file_util.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "exception.mih"
#include "getopt.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compute_grade.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 libs__file_util__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct4 libs__file_util____vpti_pred_4__plain_io__type_ctor_info_output_stream_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__file_util__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__file_util__libs__file_util__field_types_path_name_and_stream_0_0[2];

static const MR_DuFunctorDesc libs__file_util__libs__file_util__du_functor_desc_path_name_and_stream_0_0;

static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_stag_ordered_path_name_and_stream_0_0[1];

static const MR_DuPtagLayout libs__file_util__libs__file_util__du_ptag_ordered_path_name_and_stream_0[1];

static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_name_ordered_path_name_and_stream_0[1];

static const MR_Integer libs__file_util__libs__file_util__functor_number_map_path_name_and_stream_0[1];

static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file_stream__371__1_5_p_0(
  MR_Word Action0_11,
  MR_Word FileStream_19,
  MR_Word * LambdaHeadVar__1_52);

static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
  MR_Word InputStream_6,
  MR_Word OutputStream_7,
  MR_Word * Res_8);

static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__file_util__write_include_file_contents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__file_util__search_for_file_mod_time_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeModTime_10);

static void MR_CALL 
libs__file_util__search_for_file_returning_dir_and_stream_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeDirNameAndStream_10);

static void MR_CALL 
libs__file_util__search_for_file_and_stream_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeFilePathNameAndStream_10);

static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__file_util____Unify____path_name_and_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____path_name_and_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__file_util_scalar_common_1[1][2];

static /* final */ const MR_Box libs__file_util_scalar_common_2[2][8];

static /* final */ const MR_Box libs__file_util_scalar_common_3[1][7];

static /* final */ const MR_Box libs__file_util_scalar_common_4[1][5];

static /* final */ const MR_Box libs__file_util_scalar_common_5[2][3];




static /* final */ const MR_Box libs__file_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_2[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__file_util____vpti_pred_4__plain_io__type_ctor_info_output_stream_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__file_util__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_5[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_4[0])),
    ((MR_Box) (libs__file_util__make_install_file_command_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_4[0])),
    ((MR_Box) (libs__file_util__make_install_dir_command_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 libs__file_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 libs__file_util____vpti_pred_4__plain_io__type_ctor_info_output_stream_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__file_util__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__file_util__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_dir_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____dir_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____dir_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "dir_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_file_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____file_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____file_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "file_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo libs__file_util__libs__file_util__field_types_path_name_and_stream_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_input_stream_0)
};

static const MR_DuFunctorDesc libs__file_util__libs__file_util__du_functor_desc_path_name_and_stream_0_0 = {
  (MR_String) "path_name_and_stream",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__file_util__libs__file_util__field_types_path_name_and_stream_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_stag_ordered_path_name_and_stream_0_0[1] = {
  &libs__file_util__libs__file_util__du_functor_desc_path_name_and_stream_0_0
};

static const MR_DuPtagLayout libs__file_util__libs__file_util__du_ptag_ordered_path_name_and_stream_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__file_util__libs__file_util__du_stag_ordered_path_name_and_stream_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_name_ordered_path_name_and_stream_0[1] = {
  &libs__file_util__libs__file_util__du_functor_desc_path_name_and_stream_0_0
};

static const MR_Integer libs__file_util__libs__file_util__functor_number_map_path_name_and_stream_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_path_name_and_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__file_util____Unify____path_name_and_stream_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____path_name_and_stream_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "path_name_and_stream",
  {     libs__file_util__libs__file_util__du_name_ordered_path_name_and_stream_0 },
  {     libs__file_util__libs__file_util__du_ptag_ordered_path_name_and_stream_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__file_util__libs__file_util__functor_number_map_path_name_and_stream_0,

};

static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file_stream__371__1_5_p_0(
  MR_Word Action0_11,
  MR_Word FileStream_19,
  MR_Word * LambdaHeadVar__1_52)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Action0_11, (MR_Integer) 1))));
    MR_Box conv2_LambdaHeadVar__1_52;
    MR_Box conv1_LambdaHeadVar__3_54;

    func_0(((MR_Box) (Action0_11)), ((MR_Box) (FileStream_19)), &conv2_LambdaHeadVar__1_52, ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__3_54);
    *LambdaHeadVar__1_52 = ((MR_Word) (conv2_LambdaHeadVar__1_52));
  }
}

void MR_CALL 
libs__file_util____Compare____path_name_and_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__io____Compare____input_stream_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
libs__file_util____Unify____path_name_and_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = mercury__io____Unify____input_stream_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
libs__file_util____Compare____file_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
libs__file_util____Compare____dir_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
  MR_Word InputStream_6,
  MR_Word OutputStream_7,
  MR_Word * Res_8)
{
  {
    MR_Word ReadRes_10;

    mercury__io__read_file_as_string_4_p_0(InputStream_6, &ReadRes_10);
    if (((MR_tag((MR_Word) ReadRes_10)) == (MR_Integer) 1))
    {
      MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadRes_10, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_13));
      }
    }
    else
    {
      MR_String InputContents_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), ReadRes_10, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(OutputStream_7, InputContents_11);
      *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

void MR_CALL 
libs__file_util__open_temp_input_4_p_0(
  MR_Word * Result_5,
  MR_Word Pred_6)
{
  {
    MR_Word TempFileResult_8;

    mercury__io__make_temp_file_3_p_0(&TempFileResult_8);
    if (((MR_tag((MR_Word) TempFileResult_8)) == (MR_Integer) 1))
    {
      MR_String Var_20;
      MR_String Var_24;
      MR_Word Error_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TempFileResult_8, (MR_Integer) 0))));

      Var_24 = mercury__io__error_message_1_f_0(Error_39);
      Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "could not create temporary file: ", Var_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
      }
    }
    else
    {
      MR_String TempFileName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), TempFileResult_8, (MR_Integer) 0))));
      MR_Word PredResult_10;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));
      MR_Box conv2_PredResult_10;
      MR_Box conv1_STATE_VARIABLE_IO_26_26;

      func_0(((MR_Box) (Pred_6)), ((MR_Box) (TempFileName_9)), &conv2_PredResult_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
      PredResult_10 = ((MR_Word) (conv2_PredResult_10));
      if ((PredResult_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpenResult_11;

        mercury__io__open_input_4_p_0(TempFileName_9, &OpenResult_11);
        if (((MR_tag((MR_Word) OpenResult_11)) == (MR_Integer) 1))
        {
          MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_11, (MR_Integer) 0))));
          MR_String Var_29;
          MR_String Var_35;
          MR_String Var_41;
          MR_String Var_42;
          MR_Word Var_14;

          Var_35 = mercury__io__error_message_1_f_0(Error_13);
          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_35);
          Var_42 = mercury__string__f_43_43_2_f_0(TempFileName_9, Var_41);
          Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "could not open \140", Var_42);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
          }
          mercury__io__remove_file_4_p_0(TempFileName_9, &Var_14);
        }
        else
        {
          MR_Word Stream_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_11, (MR_Integer) 0))));
          MR_Tuple Var_38;

          {
            Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (TempFileName_9));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Stream_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
          }
        }
      }
      else
      {
        MR_String ErrorMessage_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredResult_10, (MR_Integer) 0))));
        MR_Word Var_16;

        mercury__io__remove_file_4_p_0(TempFileName_9, &Var_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorMessage_15));
        }
      }
    }
  }
}

void MR_CALL 
libs__file_util__open_temp_output_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word TempFileResult_6;

    mercury__io__make_temp_file_3_p_0(&TempFileResult_6);
    if (((MR_tag((MR_Word) TempFileResult_6)) == (MR_Integer) 1))
    {
      MR_String Var_21;
      MR_String Var_25;
      MR_Word Error_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TempFileResult_6, (MR_Integer) 0))));

      Var_25 = mercury__io__error_message_1_f_0(Error_38);
      Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "could not create temporary file: ", Var_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
      }
    }
    else
    {
      MR_String TempFileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), TempFileResult_6, (MR_Integer) 0))));
      MR_Word OpenResult_17;

      mercury__io__open_output_4_p_0(TempFileName_16, &OpenResult_17);
      if (((MR_tag((MR_Word) OpenResult_17)) == (MR_Integer) 1))
      {
        MR_Word Error_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_17, (MR_Integer) 0))));
        MR_String Var_29;
        MR_String Var_35;
        MR_String Var_40;
        MR_String Var_41;
        MR_Word Var_20;

        mercury__io__remove_file_4_p_0(TempFileName_16, &Var_20);
        Var_35 = mercury__io__error_message_1_f_0(Error_19);
        Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_35);
        Var_41 = mercury__string__f_43_43_2_f_0(TempFileName_16, Var_40);
        Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "could not open temporary file \140", Var_41);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
        }
      }
      else
      {
        MR_Word Stream_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_17, (MR_Integer) 0))));
        MR_Tuple Var_37;

        {
          Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (TempFileName_16));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Stream_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
        }
      }
    }
  }
}

void MR_CALL 
libs__file_util__open_temp_output_6_p_0(
  MR_String Dir_7,
  MR_String Prefix_8,
  MR_String Suffix_9,
  MR_Word * Result_10)
{
  {
    MR_Word TempFileResult_12;

    mercury__io__make_temp_file_6_p_0(Dir_7, Prefix_8, Suffix_9, &TempFileResult_12);
    if (((MR_tag((MR_Word) TempFileResult_12)) == (MR_Integer) 1))
    {
      MR_String Var_27;
      MR_String Var_31;
      MR_Word Error_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TempFileResult_12, (MR_Integer) 0))));

      Var_31 = mercury__io__error_message_1_f_0(Error_44);
      Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "could not create temporary file: ", Var_31);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
      }
    }
    else
    {
      MR_String TempFileName_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), TempFileResult_12, (MR_Integer) 0))));
      MR_Word OpenResult_23;

      mercury__io__open_output_4_p_0(TempFileName_22, &OpenResult_23);
      if (((MR_tag((MR_Word) OpenResult_23)) == (MR_Integer) 1))
      {
        MR_Word Error_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_23, (MR_Integer) 0))));
        MR_String Var_35;
        MR_String Var_41;
        MR_String Var_46;
        MR_String Var_47;
        MR_Word Var_26;

        mercury__io__remove_file_4_p_0(TempFileName_22, &Var_26);
        Var_41 = mercury__io__error_message_1_f_0(Error_25);
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_41);
        Var_47 = mercury__string__f_43_43_2_f_0(TempFileName_22, Var_46);
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "could not open temporary file \140", Var_47);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
        }
      }
      else
      {
        MR_Word Stream_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_23, (MR_Integer) 0))));
        MR_Tuple Var_43;

        {
          Var_43 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (TempFileName_22));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Stream_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
        }
      }
    }
  }
}

static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
libs__file_util__make_install_dir_command_3_f_0(
  MR_Word Globals_5,
  MR_String SourceDirName_6,
  MR_String InstallDir_7)
{
  {
    MR_String Command_8;
    MR_Word FileInstallCmd_9;
    MR_String InstallCmd_10;
    MR_String InstallCmdDirOpt_11;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    libs__globals__get_file_install_cmd_2_p_0(Globals_5, &FileInstallCmd_9);
    if ((FileInstallCmd_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      InstallCmd_10 = (MR_String) "cp";
      InstallCmdDirOpt_11 = (MR_String) "-R";
    }
    else
    {
      InstallCmd_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileInstallCmd_9, (MR_Integer) 0))));
      InstallCmdDirOpt_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileInstallCmd_9, (MR_Integer) 1))));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (InstallDir_7));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (SourceDirName_6));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (InstallCmdDirOpt_11));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (InstallCmd_10));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
    }
    Var_13 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__file_util_scalar_common_5[1]), Var_15);
    Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", Var_13);
    return Command_8;
  }
}

static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
libs__file_util__make_install_file_command_3_f_0(
  MR_Word Globals_5,
  MR_String FileName_6,
  MR_String InstallDir_7)
{
  {
    MR_String Command_8;
    MR_Word FileInstallCmd_9;
    MR_String InstallCmd_10;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    libs__globals__get_file_install_cmd_2_p_0(Globals_5, &FileInstallCmd_9);
    if ((FileInstallCmd_9 == (MR_Word) ((MR_Unsigned) 0U)))
      InstallCmd_10 = (MR_String) "cp";
    else
      InstallCmd_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileInstallCmd_9, (MR_Integer) 0))));
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (InstallDir_7));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (FileName_6));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (InstallCmd_10));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
    }
    Var_13 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__file_util_scalar_common_5[0]), Var_15);
    Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", Var_13);
    return Command_8;
  }
}

void MR_CALL 
libs__file_util__report_error_3_p_0(
  MR_String ErrorMessage_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    libs__file_util__report_error_4_p_0(Stream_6, ErrorMessage_4);
  }
}

void MR_CALL 
libs__file_util__maybe_flush_output_to_stream_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Stream_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    mercury__io__flush_output_3_p_0(Stream_4);
  }
}

void MR_CALL 
libs__file_util__maybe_flush_output_3_p_0(
  MR_Word Verbose_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    switch (Verbose_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__flush_output_3_p_0(Stream_6);
        break;
    }
  }
}

void MR_CALL 
libs__file_util__maybe_write_string_to_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String String_2)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Stream_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_5, String_2);
  }
}

void MR_CALL 
libs__file_util__maybe_write_string_4_p_0(
  MR_Word Verbose_5,
  MR_String String_6)
{
  {
    MR_Word Stream_8;

    mercury__io__output_stream_3_p_0(&Stream_8);
    switch (Verbose_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, String_6);
        break;
    }
  }
}

void MR_CALL 
libs__file_util__maybe_report_stats_to_stream_3_p_0(
  MR_Word HeadVar__1_1)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Stream_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    mercury__io__report_standard_stats_3_p_0(Stream_4);
  }
}

void MR_CALL 
libs__file_util__maybe_report_stats_3_p_0(
  MR_Word Statistics_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    switch (Statistics_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__report_standard_stats_3_p_0(Stream_6);
        break;
    }
  }
}

void MR_CALL 
libs__file_util__get_install_name_option_3_p_0(
  MR_Word Globals_4,
  MR_String OutputFileName_5,
  MR_String * InstallNameOpt_6)
{
  {
    MR_bool succeeded;
    MR_String InstallNameFlag_7;
    MR_String InstallNamePath0_8;
    MR_String InstallNamePath_11;
    MR_String Var_21;
    MR_String Var_22;

    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 647, &InstallNameFlag_7);
    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 648, &InstallNamePath0_8);
    succeeded = (strcmp(InstallNamePath0_8, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_String InstallPrefix_9;
      MR_String GradeDir_10;
      MR_String Var_15;
      MR_String Var_16;
      MR_String Var_17;

      libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 661, &InstallPrefix_9);
      libs__compute_grade__grade_directory_component_2_p_0(Globals_4, &GradeDir_10);
      Var_17 = mercury__dir__f_slash_2_f_0(InstallPrefix_9, (MR_String) "lib");
      Var_16 = mercury__dir__f_slash_2_f_0(Var_17, (MR_String) "mercury");
      Var_15 = mercury__dir__f_slash_2_f_0(Var_16, (MR_String) "lib");
      InstallNamePath_11 = mercury__dir__f_slash_2_f_0(Var_15, GradeDir_10);
    }
    else
      InstallNamePath_11 = InstallNamePath0_8;
    Var_22 = libs__options__quote_arg_1_f_0(InstallNamePath_11);
    Var_21 = mercury__dir__f_slash_2_f_0(Var_22, OutputFileName_5);
    *InstallNameOpt_6 = mercury__string__f_43_43_2_f_0(InstallNameFlag_7, Var_21);
  }
}

void MR_CALL 
libs__file_util__write_include_file_contents_cur_stream_4_p_0(
  MR_String FileName_5,
  MR_Word * Res_6)
{
  {
    MR_Word OutputStream_8;

    mercury__io__output_stream_3_p_0(&OutputStream_8);
    libs__file_util__write_include_file_contents_5_p_0(OutputStream_8, FileName_5, Res_6);
  }
}

static void MR_CALL 
libs__file_util__write_include_file_contents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Res_8;

    libs__file_util__copy_stream_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_Res_8);
    *wrapper_arg_1 = ((MR_Box) (conv0_Res_8));
  }
}

void MR_CALL 
libs__file_util__write_include_file_contents_5_p_0(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word * Res_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFileType_11;

    mercury__io__file_type_5_p_0((MR_Integer) 1, FileName_7, &MaybeFileType_11);
    if (((MR_tag((MR_Word) MaybeFileType_11)) == (MR_Integer) 1))
    {
      MR_Word FileTypeError_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFileType_11, (MR_Integer) 0))));
      MR_String Var_21;
      MR_String Var_22;
      MR_String Message_27;
      MR_String Var_37;
      MR_String Var_38;

      Var_21 = mercury__io__error_message_1_f_0(FileTypeError_16);
      Message_27 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "can\'t find file type: ", Var_21);
      Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "\' for input: ", Message_27);
      Var_38 = mercury__string__f_43_43_2_f_0(FileName_7, Var_37);
      Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", Var_38);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
      }
    }
    else
    {
      MR_Word FileType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileType_11, (MR_Integer) 0))));

      switch (FileType_12) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 10:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word CopyRes_13;
        MR_Word OpenRes_46;

        mercury__io__open_input_4_p_0(FileName_7, &OpenRes_46);
        if (((MR_tag((MR_Word) OpenRes_46)) == (MR_Integer) 1))
        {
          MR_Word Error_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenRes_46, (MR_Integer) 0))));

          {
            CopyRes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CopyRes_13, 0) = ((MR_Box) (Error_57));
          }
        }
        else
        {
          MR_Word InputStream_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenRes_46, (MR_Integer) 0))));
          MR_Word TryResult_48;
          MR_Word Var_52;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&libs__file_util_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (libs__file_util__write_include_file_contents_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (InputStream_47));
            MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (OutputStream_6));
          }
          mercury__exception__try_io_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), Var_52, &TryResult_48);
          mercury__io__close_input_3_p_0(InputStream_47);
          if (((MR_tag((MR_Word) TryResult_48)) == (MR_Integer) 2))
            {
              mercury__exception__rethrow_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), TryResult_48);
              return;
            }
          else
          {
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TryResult_48, (MR_Integer) 0))));

            if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
              CopyRes_13 = (MR_Word) ((MR_Unsigned) 0U);
            else
              CopyRes_13 = Var_63;
          }
        }
        if ((CopyRes_13 == (MR_Word) ((MR_Unsigned) 0U)))
          *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CopyRes_13, (MR_Integer) 0))));
          MR_String Message_15;
          MR_String Var_24;
          MR_String Var_73;
          MR_String Var_74;

          Message_15 = mercury__io__error_message_1_f_0(Error_14);
          Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "\' for input: ", Message_15);
          Var_74 = mercury__string__f_43_43_2_f_0(FileName_7, Var_73);
          Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", Var_74);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
          }
        }
      }
      else
      {
        MR_String Var_25;
        MR_String Var_85;
        MR_String Var_86;

        Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "\' for input: ", (MR_String) "Not a regular file");
        Var_86 = mercury__string__f_43_43_2_f_0(FileName_7, Var_85);
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", Var_86);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
        }
      }
    }
  }
}

static void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    libs__file_util__report_error_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__1_52;

    libs__file_util__IntroducedFrom__pred__output_to_file_stream__371__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_LambdaHeadVar__1_52);
    *wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_52));
  }
}

void MR_CALL 
libs__file_util__output_to_file_stream_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String FileName_10,
  MR_Word Action0_11,
  MR_Word * Succeeded_12)
{
  {
    MR_Word Verbose_14;
    MR_Word Stats_15;
    MR_Word ProgressStream_16;
    MR_String WritingMsg_17;
    MR_Word Res_18;
    MR_String Var_78;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 70, &Verbose_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 80, &Stats_15);
    libs__globals__get_progress_output_stream_5_p_0(Globals_8, ModuleName_9, &ProgressStream_16);
    Var_78 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) "\'...\n");
    WritingMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "% Writing to file \140", Var_78);
    switch (Verbose_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_16, WritingMsg_17);
          mercury__io__flush_output_3_p_0(ProgressStream_16);
        }
        break;
    }
    mercury__io__open_output_4_p_0(FileName_10, &Res_18);
    if (((MR_tag((MR_Word) Res_18)) == (MR_Integer) 1))
    {
      MR_String ErrorMessage_31;
      MR_Word ErrorStream_69;
      MR_String Var_81;

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_16, Verbose_14, (MR_String) "\n");
      libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_9, &ErrorStream_69);
      Var_81 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) "\' for output.");
      ErrorMessage_31 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", Var_81);
      libs__file_util__report_error_4_p_0(ErrorStream_69, ErrorMessage_31);
      *Succeeded_12 = (MR_Integer) 0;
    }
    else
    {
      MR_Word FileStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_18, (MR_Integer) 0))));
      MR_Word Action_20;
      MR_Word TryResult_24;

      {
        Action_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Action_20, 0) = ((MR_Box) (&libs__file_util_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Action_20, 1) = ((MR_Box) (libs__file_util__output_to_file_stream_7_p_0_1));
        MR_hl_field(MR_mktag(0), Action_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Action_20, 3) = ((MR_Box) (Action0_11));
        MR_hl_field(MR_mktag(0), Action_20, 4) = ((MR_Box) (FileStream_19));
      }
      mercury__exception__try_io_4_p_0((MR_Word) (&libs__file_util_scalar_common_1[0]), Action_20, &TryResult_24);
      mercury__io__close_output_3_p_0(FileStream_19);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_16, Verbose_14, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_4_p_0(ProgressStream_16, Stats_15);
      libs__file_util__maybe_flush_output_4_p_0(ProgressStream_16, Verbose_14);
      if (((MR_tag((MR_Word) TryResult_24)) == (MR_Integer) 2))
        {
          mercury__exception__rethrow_1_p_0((MR_Word) (&libs__file_util_scalar_common_1[0]), TryResult_24);
          return;
        }
      else
      {
        MR_Word Errors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TryResult_24, (MR_Integer) 0))));

        if ((Errors_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *Succeeded_12 = (MR_Integer) 1;
        else
        {
          MR_Word ErrorStream_28;
          MR_Word Var_64;
          MR_Box conv1_STATE_VARIABLE_IO_33;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_16, Verbose_14, (MR_String) "\n");
          libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_9, &ErrorStream_28);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&libs__file_util_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (libs__file_util__output_to_file_stream_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (ErrorStream_28));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, Errors_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33);
          *Succeeded_12 = (MR_Integer) 0;
        }
      }
    }
  }
}

void MR_CALL 
libs__file_util__report_error_4_p_0(
  MR_Word Stream_5,
  MR_String ErrorMessage_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "Error: ");
    mercury__io__write_string_4_p_0(Stream_5, ErrorMessage_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
    mercury__io__flush_output_3_p_0(Stream_5);
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
}

void MR_CALL 
libs__file_util__maybe_flush_output_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__flush_output_3_p_0(HeadVar__1_1);
      break;
  }
}

void MR_CALL 
libs__file_util__maybe_write_string_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String String_3)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(HeadVar__1_1, String_3);
      break;
  }
}

void MR_CALL 
libs__file_util__maybe_report_stats_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__report_standard_stats_3_p_0(HeadVar__1_1);
      break;
  }
}

void MR_CALL 
libs__file_util__search_for_file_mod_time_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  libs__file_util__search_for_file_mod_time_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, Result_8);
}

static void MR_CALL 
libs__file_util__search_for_file_mod_time_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeModTime_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Msg_12;
      MR_String Prefix_26;
      MR_String Var_32;

      Var_32 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' ");
      Prefix_26 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_32);
      if ((AllDirs_7 == (MR_Word) ((MR_Unsigned) 0U)))
        Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_26, (MR_String) "in the empty list of directories");
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllDirs_7, (MR_Integer) 1))));
        MR_String Var_44 = ((MR_String) ((MR_hl_field(MR_mktag(1), AllDirs_7, (MR_Integer) 0))));

        if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_40;

          Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "in directory ", Var_44);
          Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_26, Var_40);
        }
        else
        {
          MR_String Var_35;
          MR_String Var_37;

          Var_37 = mercury__string__join_list_2_f_0((MR_String) ", ", AllDirs_7);
          Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "in directories ", Var_37);
          Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_26, Var_35);
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeModTime_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_String HeadDir_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dirs_8, (MR_Integer) 0))));
      MR_Word TailDirs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_8, (MR_Integer) 1))));
      MR_String HeadFilePathNameNC_15;
      MR_Word MaybeHeadModTime_16;
      MR_String Var_54;

      mercury__dir__this_directory_1_p_0(&Var_54);
      succeeded = (strcmp(HeadDir_13, Var_54) == 0);
      if (succeeded)
        HeadFilePathNameNC_15 = FileName_9;
      else
      {
        MR_String Sep_48;
        MR_Char Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;

        Var_49 = mercury__dir__directory_separator_0_f_0();
        Sep_48 = mercury__string__from_char_1_f_0(Var_49);
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (FileName_9));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Sep_48));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
        }
        HeadFilePathNameNC_15 = mercury__string__append_list_1_f_0(Var_50);
      }
      mercury__io__file_modification_time_4_p_0(HeadFilePathNameNC_15, &MaybeHeadModTime_16);
      if (((MR_tag((MR_Word) MaybeHeadModTime_16)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_8 = TailDirs_14;

        // direct tailcall eliminated
        ;
        Dirs_8 = next_value_of_Dirs_8;
        continue;
      }
      else
      {
        MR_Word HeadModTime_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeHeadModTime_16, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeModTime_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadModTime_17));
        }
      }
    }
    break;
  }
}

void MR_CALL 
libs__file_util__search_for_file_returning_dir_and_stream_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirPathNameAndStream_8)
{
  libs__file_util__search_for_file_returning_dir_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, MaybeDirPathNameAndStream_8);
}

void MR_CALL 
libs__file_util__search_for_file_returning_dir_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirPathName_8)
{
  {
    MR_Word MaybeDirPathNameAndStream_10;

    libs__file_util__search_for_file_returning_dir_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, &MaybeDirPathNameAndStream_10);
    if (((MR_tag((MR_Word) MaybeDirPathNameAndStream_10)) == (MR_Integer) 1))
      *MaybeDirPathName_8 = (MR_Word) (MaybeDirPathNameAndStream_10);
    else
    {
      MR_String DirPathName_11;
      MR_Word Stream_12;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDirPathNameAndStream_10, (MR_Integer) 0))));

      DirPathName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      Stream_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      mercury__io__close_input_3_p_0(Stream_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDirPathName_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DirPathName_11));
      }
    }
  }
}

static void MR_CALL 
libs__file_util__search_for_file_returning_dir_and_stream_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeDirNameAndStream_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Msg_12;
      MR_String Prefix_27;
      MR_String Var_33;

      Var_33 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' ");
      Prefix_27 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_33);
      if ((AllDirs_7 == (MR_Word) ((MR_Unsigned) 0U)))
        Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_27, (MR_String) "in the empty list of directories");
      else
      {
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllDirs_7, (MR_Integer) 1))));
        MR_String Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), AllDirs_7, (MR_Integer) 0))));

        if ((Var_44 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_41;

          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "in directory ", Var_45);
          Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_27, Var_41);
        }
        else
        {
          MR_String Var_36;
          MR_String Var_38;

          Var_38 = mercury__string__join_list_2_f_0((MR_String) ", ", AllDirs_7);
          Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "in directories ", Var_38);
          Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_27, Var_36);
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDirNameAndStream_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_String HeadDir_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dirs_8, (MR_Integer) 0))));
      MR_Word TailDirs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_8, (MR_Integer) 1))));
      MR_String HeadFilePathNameNC_15;
      MR_Word MaybeHeadStream_16;
      MR_String Var_55;

      mercury__dir__this_directory_1_p_0(&Var_55);
      succeeded = (strcmp(HeadDir_13, Var_55) == 0);
      if (succeeded)
        HeadFilePathNameNC_15 = FileName_9;
      else
      {
        MR_String Sep_49;
        MR_Char Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;

        Var_50 = mercury__dir__directory_separator_0_f_0();
        Sep_49 = mercury__string__from_char_1_f_0(Var_50);
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (FileName_9));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Sep_49));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
        }
        HeadFilePathNameNC_15 = mercury__string__append_list_1_f_0(Var_51);
      }
      mercury__io__open_input_4_p_0(HeadFilePathNameNC_15, &MaybeHeadStream_16);
      if (((MR_tag((MR_Word) MaybeHeadStream_16)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_8 = TailDirs_14;

        // direct tailcall eliminated
        ;
        Dirs_8 = next_value_of_Dirs_8;
        continue;
      }
      else
      {
        MR_Word HeadStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeHeadStream_16, (MR_Integer) 0))));
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (HeadStream_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDirNameAndStream_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
        }
      }
    }
    break;
  }
}

void MR_CALL 
libs__file_util__search_for_file_and_stream_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeFilePathNameAndStream_8)
{
  libs__file_util__search_for_file_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, MaybeFilePathNameAndStream_8);
}

void MR_CALL 
libs__file_util__search_for_file_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeFilePathName_8)
{
  {
    MR_Word MaybeFilePathNameAndStream_10;

    libs__file_util__search_for_file_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, &MaybeFilePathNameAndStream_10);
    if (((MR_tag((MR_Word) MaybeFilePathNameAndStream_10)) == (MR_Integer) 1))
      *MaybeFilePathName_8 = (MR_Word) (MaybeFilePathNameAndStream_10);
    else
    {
      MR_String FilePathName_11;
      MR_Word Stream_12;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFilePathNameAndStream_10, (MR_Integer) 0))));

      FilePathName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      Stream_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      mercury__io__close_input_3_p_0(Stream_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFilePathName_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FilePathName_11));
      }
    }
  }
}

static void MR_CALL 
libs__file_util__search_for_file_and_stream_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeFilePathNameAndStream_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Msg_12;
      MR_String Prefix_29;
      MR_String Var_35;

      Var_35 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' ");
      Prefix_29 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_35);
      if ((AllDirs_7 == (MR_Word) ((MR_Unsigned) 0U)))
        Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_29, (MR_String) "in the empty list of directories");
      else
      {
        MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllDirs_7, (MR_Integer) 1))));
        MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), AllDirs_7, (MR_Integer) 0))));

        if ((Var_46 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_43;

          Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "in directory ", Var_47);
          Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_29, Var_43);
        }
        else
        {
          MR_String Var_38;
          MR_String Var_40;

          Var_40 = mercury__string__join_list_2_f_0((MR_String) ", ", AllDirs_7);
          Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "in directories ", Var_40);
          Msg_12 = mercury__string__f_43_43_2_f_0(Prefix_29, Var_38);
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFilePathNameAndStream_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_String HeadDir_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dirs_8, (MR_Integer) 0))));
      MR_Word TailDirs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_8, (MR_Integer) 1))));
      MR_String HeadFilePathNameNC_15;
      MR_Word MaybeHeadStream_16;
      MR_String Var_57;

      mercury__dir__this_directory_1_p_0(&Var_57);
      succeeded = (strcmp(HeadDir_13, Var_57) == 0);
      if (succeeded)
        HeadFilePathNameNC_15 = FileName_9;
      else
      {
        MR_String Sep_51;
        MR_Char Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        Var_52 = mercury__dir__directory_separator_0_f_0();
        Sep_51 = mercury__string__from_char_1_f_0(Var_52);
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (FileName_9));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Sep_51));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
        }
        HeadFilePathNameNC_15 = mercury__string__append_list_1_f_0(Var_53);
      }
      mercury__io__open_input_4_p_0(HeadFilePathNameNC_15, &MaybeHeadStream_16);
      if (((MR_tag((MR_Word) MaybeHeadStream_16)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_8 = TailDirs_14;

        // direct tailcall eliminated
        ;
        Dirs_8 = next_value_of_Dirs_8;
        continue;
      }
      else
      {
        MR_Word HeadStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeHeadStream_16, (MR_Integer) 0))));
        MR_String HeadFilePathName_18;
        MR_Word Var_24;
        MR_String Var_25;

        mercury__dir__this_directory_1_p_0(&Var_25);
        succeeded = (strcmp(HeadDir_13, Var_25) == 0);
        if (succeeded)
          HeadFilePathName_18 = FileName_9;
        else
          HeadFilePathName_18 = mercury__dir__make_path_name_2_f_0(HeadDir_13, FileName_9);
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (HeadFilePathName_18));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (HeadStream_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeFilePathNameAndStream_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__file_util____Unify____dir_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__file_util____Compare____dir_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__file_util____Unify____file_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__file_util____Compare____file_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__file_util____Unify____path_name_and_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__file_util____Unify____path_name_and_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____path_name_and_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__file_util____Compare____path_name_and_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__libs__file_util__init(void)
{
}

void mercury__libs__file_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_dir_name_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_file_name_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_path_name_and_stream_0);
}

void mercury__libs__file_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__file_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.file_util.
