/*
** Automatically generated from `term_paths.m'
** by the Mercury compiler,
** version rotd-2025-07-13
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


// :- module mdb.term_paths.
// :- implementation.

/*
INIT mercury__mdb__term_paths__init
ENDINIT
*/

#include "mdb.term_paths.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.program_representation.mih"




static const MR_PseudoTypeInfo mdb__term_paths__mdb__term_paths__field_types_deref_result_1_0[1];

static const MR_DuFunctorDesc mdb__term_paths__mdb__term_paths__du_functor_desc_deref_result_1_0;

static const MR_FA_TypeInfo_Struct1 mdb__term_paths__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0;

static const MR_PseudoTypeInfo mdb__term_paths__mdb__term_paths__field_types_deref_result_1_1[2];

static const MR_DuFunctorDesc mdb__term_paths__mdb__term_paths__du_functor_desc_deref_result_1_1;

static const MR_DuFunctorDescPtr mdb__term_paths__mdb__term_paths__du_stag_ordered_deref_result_1_0[1];

static const MR_DuFunctorDescPtr mdb__term_paths__mdb__term_paths__du_stag_ordered_deref_result_1_1[1];

static const MR_DuPtagLayout mdb__term_paths__mdb__term_paths__du_ptag_ordered_deref_result_1[2];

static const MR_DuFunctorDescPtr mdb__term_paths__mdb__term_paths__du_name_ordered_deref_result_1[2];

static const MR_Integer mdb__term_paths__mdb__term_paths__functor_number_map_deref_result_1[2];

static void MR_CALL 
mdb__term_paths__simplify_rev_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_ToDelete_0_2,
  MR_Word STATE_VARIABLE_DownDirs_0_3,
  MR_Word * STATE_VARIABLE_DownDirs_4);

static MR_String MR_CALL 
mdb__term_paths__down_dirs_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__term_paths__deref_subterm_2_4_p_0(
  MR_Word Univ_5,
  MR_Word Path_6,
  MR_Word RevPath0_7,
  MR_Word * Result_8);

static MR_bool MR_CALL 
mdb__term_paths____Unify____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__term_paths____Compare____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mdb__term_paths_scalar_common_1[1][2];


struct mdb__term_paths__vector_common_type_2_0_s {
  const MR_String mdb__term_paths__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct mdb__term_paths__vector_common_type_2_0_s mdb__term_paths_vector_common_2[12];



static /* final */ const MR_Box mdb__term_paths_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0))
  },
};


static /* final */ const struct mdb__term_paths__vector_common_type_2_0_s mdb__term_paths_vector_common_2[12] = {
  /* row   0 */   { (MR_String) "r" },
  /* row   1 */   { (MR_String) "res" },
  /* row   2 */   { (MR_String) "result" },
  /* row   3 */   { (MR_String) "ret" },
  /* row   4 */   { (MR_String) "return" },
  /* row   5 */   { (MR_String) "rv" },
  /* row   6 */   { (MR_String) "r" },
  /* row   7 */   { (MR_String) "res" },
  /* row   8 */   { (MR_String) "result" },
  /* row   9 */   { (MR_String) "ret" },
  /* row  10 */   { (MR_String) "return" },
  /* row  11 */   { (MR_String) "rv" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo mdb__term_paths__mdb__term_paths__field_types_deref_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mdb__term_paths__mdb__term_paths__du_functor_desc_deref_result_1_0 = {
  (MR_String) "deref_result",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__term_paths__mdb__term_paths__field_types_deref_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__term_paths__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0) }
};

static const MR_PseudoTypeInfo mdb__term_paths__mdb__term_paths__field_types_deref_result_1_1[2] = {
  (MR_PseudoTypeInfo) (&mdb__term_paths__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0)
};

static const MR_DuFunctorDesc mdb__term_paths__mdb__term_paths__du_functor_desc_deref_result_1_1 = {
  (MR_String) "deref_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__term_paths__mdb__term_paths__field_types_deref_result_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__term_paths__mdb__term_paths__du_stag_ordered_deref_result_1_0[1] = { &mdb__term_paths__mdb__term_paths__du_functor_desc_deref_result_1_0 };

static const MR_DuFunctorDescPtr mdb__term_paths__mdb__term_paths__du_stag_ordered_deref_result_1_1[1] = { &mdb__term_paths__mdb__term_paths__du_functor_desc_deref_result_1_1 };

static const MR_DuPtagLayout mdb__term_paths__mdb__term_paths__du_ptag_ordered_deref_result_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__term_paths__mdb__term_paths__du_stag_ordered_deref_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__term_paths__mdb__term_paths__du_stag_ordered_deref_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__term_paths__mdb__term_paths__du_name_ordered_deref_result_1[2] = {
  &mdb__term_paths__mdb__term_paths__du_functor_desc_deref_result_1_1,
  &mdb__term_paths__mdb__term_paths__du_functor_desc_deref_result_1_0
};

static const MR_Integer mdb__term_paths__mdb__term_paths__functor_number_map_deref_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__term_paths__mdb__term_paths__type_ctor_info_deref_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__term_paths____Unify____deref_result_1_0_10001)),
  ((MR_Box) (mdb__term_paths____Compare____deref_result_1_0_10001)),
  (MR_String) "mdb.term_paths",
  (MR_String) "deref_result",
  { mdb__term_paths__mdb__term_paths__du_name_ordered_deref_result_1 },
  { mdb__term_paths__mdb__term_paths__du_ptag_ordered_deref_result_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__term_paths__mdb__term_paths__functor_number_map_deref_result_1,

};

void MR_CALL 
mdb__term_paths____Compare____deref_result_1_0(
  MR_Word TypeInfo_for_T_13,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubResult1_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__term_paths_scalar_common_1[0]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
        mdb__browser_info____Compare____down_dir_0_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_13, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mdb__term_paths____Unify____deref_result_1_0(
  MR_Word TypeInfo_for_T_11,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_12_12 = (MR_Word) (&mdb__term_paths_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
        succeeded = mdb__browser_info____Unify____down_dir_0_0(ArgX2_7, ArgY2_8);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__term_paths__string_is_return_value_alias_1_p_0(
  MR_String HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 5;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&mdb__term_paths_vector_common_2[6 + mid_2]))->mdb__term_paths__vector_common_type_2_0__vct_2_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

void MR_CALL 
mdb__term_paths__set_path_3_p_0(
  MR_Word NewPath_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Dirs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 1))));
  MR_Word Dirs_7;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  mdb__term_paths__change_dir_3_p_0(Dirs0_6, NewPath_4, &Dirs_7);
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 0))));
  Var_18 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 2))) & (MR_Integer) 3);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 3))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 4))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 5))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Dirs_7));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
mdb__term_paths__change_dir_3_p_0(
  MR_Word PwdDirs_4,
  MR_Word Path_5,
  MR_Word * RootRelDirs_6)
{
  MR_Word NewDirs_8;
  MR_Word RevDirs_12;

  if (((MR_tag((MR_Word) Path_5)) == (MR_Integer) 1))
  {
    MR_Word Var_9;
    MR_Word Dirs_10 = ((MR_Word) ((MR_hl_field(1, Path_5, 0))));

    Var_9 = mdb__browser_info__down_to_up_down_dirs_1_f_0(PwdDirs_4);
    NewDirs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), Var_9, Dirs_10);
  }
  else
    NewDirs_8 = ((MR_Word) ((MR_hl_field(0, Path_5, 0))));
  mercury__list__reverse_2_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0), NewDirs_8, &RevDirs_12);
  mdb__term_paths__simplify_rev_dirs_4_p_0(RevDirs_12, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), RootRelDirs_6);
}

static void MR_CALL 
mdb__term_paths__simplify_rev_dirs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_ToDelete_0_2,
  MR_Word STATE_VARIABLE_DownDirs_0_3,
  MR_Word * STATE_VARIABLE_DownDirs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DownDirs_4 = STATE_VARIABLE_DownDirs_0_3;
    else
    {
      MR_Word RevUpDownDir_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word RevUpDownDirs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer STATE_VARIABLE_ToDelete_1_19;
      MR_Word STATE_VARIABLE_DownDirs_1_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_ToDelete_0_2;
      MR_Word next_value_of_STATE_VARIABLE_DownDirs_0_3;

      switch (MR_tag((MR_Word) RevUpDownDir_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ToDelete_1_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 + (MR_Unsigned) 1);
            STATE_VARIABLE_DownDirs_1_24 = STATE_VARIABLE_DownDirs_0_3;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ChildNum_13 = ((MR_Integer) ((MR_hl_field(1, RevUpDownDir_9, 0))));
            MR_Word DownDir_29;

            {
              DownDir_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DownDir_29, 0) = ((MR_Box) (ChildNum_13));
            }
            succeeded = (STATE_VARIABLE_ToDelete_0_2 > (MR_Integer) 0);
            if (succeeded)
            {
              STATE_VARIABLE_ToDelete_1_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 - (MR_Unsigned) 1);
              STATE_VARIABLE_DownDirs_1_24 = STATE_VARIABLE_DownDirs_0_3;
            }
            else
            {
              {
                STATE_VARIABLE_DownDirs_1_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_DownDirs_1_24, 0) = ((MR_Box) (DownDir_29));
                MR_hl_field(1, STATE_VARIABLE_DownDirs_1_24, 1) = ((MR_Box) (STATE_VARIABLE_DownDirs_0_3));
              }
              STATE_VARIABLE_ToDelete_1_19 = STATE_VARIABLE_ToDelete_0_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DownDir_14;
            MR_String ChildName_15 = ((MR_String) ((MR_hl_field(2, RevUpDownDir_9, 0))));

            {
              DownDir_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DownDir_14, 0) = ((MR_Box) (ChildName_15));
            }
            succeeded = (STATE_VARIABLE_ToDelete_0_2 > (MR_Integer) 0);
            if (succeeded)
            {
              STATE_VARIABLE_ToDelete_1_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ToDelete_0_2 - (MR_Unsigned) 1);
              STATE_VARIABLE_DownDirs_1_24 = STATE_VARIABLE_DownDirs_0_3;
            }
            else
            {
              {
                STATE_VARIABLE_DownDirs_1_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_DownDirs_1_24, 0) = ((MR_Box) (DownDir_14));
                MR_hl_field(1, STATE_VARIABLE_DownDirs_1_24, 1) = ((MR_Box) (STATE_VARIABLE_DownDirs_0_3));
              }
              STATE_VARIABLE_ToDelete_1_19 = STATE_VARIABLE_ToDelete_0_2;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RevUpDownDirs_10;
      next_value_of_STATE_VARIABLE_ToDelete_0_2 = STATE_VARIABLE_ToDelete_1_19;
      next_value_of_STATE_VARIABLE_DownDirs_0_3 = STATE_VARIABLE_DownDirs_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ToDelete_0_2 = next_value_of_STATE_VARIABLE_ToDelete_0_2;
      STATE_VARIABLE_DownDirs_0_3 = next_value_of_STATE_VARIABLE_DownDirs_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mdb__term_paths__report_deref_error_5_p_0(
  MR_Word Debugger_6,
  MR_Word OKPath_7,
  MR_Word ErrorDir_8)
{
  MR_String Msg_13;
  MR_String Var_24;
  MR_String Var_25;

  mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "error: ");
  if (!((OKPath_7 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Context_12;
    MR_String Var_19;
    MR_String Var_20;

    Var_20 = mdb__term_paths__down_dirs_to_string_1_f_0(OKPath_7);
    Var_19 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) ": ");
    Context_12 = mercury__string__f_43_43_2_f_0((MR_String) "in subdir ", Var_19);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Context_12);
  }
  if (((MR_tag((MR_Word) ErrorDir_8)) == (MR_Integer) 1))
    Var_25 = ((MR_String) ((MR_hl_field(1, ErrorDir_8, 0))));
  else
  {
    MR_Integer Num_27 = ((MR_Integer) ((MR_hl_field(0, ErrorDir_8, 0))));

    Var_25 = mercury__string__int_to_string_1_f_0(Num_27);
  }
  Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) "\n");
  Msg_13 = mercury__string__f_43_43_2_f_0((MR_String) "there is no subterm ", Var_24);
  mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, Msg_13);
}

static MR_String MR_CALL 
mdb__term_paths__down_dirs_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_Word Dir_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Dirs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

    if ((Dirs_4 == (MR_Word) ((MR_Unsigned) 0U)))
      if (((MR_tag((MR_Word) Dir_3)) == (MR_Integer) 1))
        HeadVar__2_2 = ((MR_String) ((MR_hl_field(1, Dir_3, 0))));
      else
      {
        MR_Integer Num_12 = ((MR_Integer) ((MR_hl_field(0, Dir_3, 0))));

        HeadVar__2_2 = mercury__string__int_to_string_1_f_0(Num_12);
      }
    else
    {
      MR_String Var_8;
      MR_String Var_9;
      MR_String Var_11;

      if (((MR_tag((MR_Word) Dir_3)) == (MR_Integer) 1))
        Var_8 = ((MR_String) ((MR_hl_field(1, Dir_3, 0))));
      else
      {
        MR_Integer Num_14 = ((MR_Integer) ((MR_hl_field(0, Dir_3, 0))));

        Var_8 = mercury__string__int_to_string_1_f_0(Num_14);
      }
      Var_11 = mdb__term_paths__down_dirs_to_string_1_f_0(Dirs_4);
      Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_11);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
    }
  }
  return HeadVar__2_2;
}

void MR_CALL 
mdb__term_paths__deref_subterm_3_p_0(
  MR_Word BrowserTerm_4,
  MR_Word Path_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BrowserTerm_4)) == (MR_Integer) 0))
  {
    MR_Word Univ_7 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_4, 0))));
    MR_Word SubResult_8;

    mdb__term_paths__deref_subterm_2_4_p_0(Univ_7, Path_5, (MR_Word) ((MR_Unsigned) 0U), &SubResult_8);
    if (((MR_tag((MR_Word) SubResult_8)) == (MR_Integer) 1))
      *Result_6 = (MR_Word) (SubResult_8);
    else
    {
      MR_Word SubUniv_28 = ((MR_Word) ((MR_hl_field(0, SubResult_8, 0))));
      MR_Word SubBrowserTerm_29;

      {
        SubBrowserTerm_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SubBrowserTerm_29, 0) = ((MR_Box) (SubUniv_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (SubBrowserTerm_29));
      }
    }
  }
  else
  {
    MR_Word Args_10 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_4, 1))));
    MR_Word MaybeReturn_11 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_4, 2))));

    if ((Path_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (BrowserTerm_4));
      }
    else
    {
      MR_Word Step_13 = ((MR_Word) ((MR_hl_field(1, Path_5, 0))));
      MR_Word PathTail_14 = ((MR_Word) ((MR_hl_field(1, Path_5, 1))));
      MR_Word ArgUniv_17;

      if (((MR_tag((MR_Word) Step_13)) == (MR_Integer) 1))
      {
        MR_String Name_18 = ((MR_String) ((MR_hl_field(1, Step_13, 0))));
        MR_Integer lo_0 = (MR_Integer) 0;
        MR_Integer hi_1 = (MR_Integer) 5;
        MR_Integer mid_2;
        MR_Integer result_3;

        // binary string simple lookup switch
        ;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Name_18, ((&mdb__term_paths_vector_common_2[0 + mid_2]))->mdb__term_paths__vector_common_type_2_0__vct_2_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
        if (succeeded)
        {
          succeeded = (MaybeReturn_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            ArgUniv_17 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_11, 0))));
        }
      }
      else
      {
        MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(0, Step_13, 0))));
        MR_Word ReturnValue_16;
        MR_Integer Var_20;
        MR_Integer Var_21;

        Var_20 = mercury__list__length_1_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_10);
        Var_21 = (MR_Integer) ((MR_Unsigned) N_15 - (MR_Unsigned) Var_20);
        succeeded = (Var_21 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (MaybeReturn_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            ReturnValue_16 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_11, 0))));
        }
        if (succeeded)
        {
          ArgUniv_17 = ReturnValue_16;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Box conv0_ArgUniv_17;

          succeeded = mercury__list__index1_3_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_10, N_15, &conv0_ArgUniv_17);
          if (succeeded)
          {
            ArgUniv_17 = ((MR_Word) (conv0_ArgUniv_17));
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_22;
        MR_Word SubResult_25;

        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Step_13));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mdb__term_paths__deref_subterm_2_4_p_0(ArgUniv_17, PathTail_14, Var_22, &SubResult_25);
        if (((MR_tag((MR_Word) SubResult_25)) == (MR_Integer) 1))
          *Result_6 = (MR_Word) (SubResult_25);
        else
        {
          MR_Word SubUniv_32 = ((MR_Word) ((MR_hl_field(0, SubResult_25, 0))));
          MR_Word SubBrowserTerm_33;

          {
            SubBrowserTerm_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubBrowserTerm_33, 0) = ((MR_Box) (SubUniv_32));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (SubBrowserTerm_33));
          }
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, base, 1) = ((MR_Box) (Step_13));
        }
    }
  }
}

static void MR_CALL 
mdb__term_paths__deref_subterm_2_4_p_0(
  MR_Word Univ_5,
  MR_Word Path_6,
  MR_Word RevPath0_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Path_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Univ_5));
      }
    else
    {
      MR_Word Dir_9 = ((MR_Word) ((MR_hl_field(1, Path_6, 0))));
      MR_Word Dirs_10 = ((MR_Word) ((MR_hl_field(1, Path_6, 1))));
      MR_Word MaybeValue_13;

      if (((MR_tag((MR_Word) Dir_9)) == (MR_Integer) 1))
      {
        MR_Word TypeInfo_29_29;
        MR_String Name_14 = ((MR_String) ((MR_hl_field(1, Dir_9, 0))));
        MR_Box Var_24;

        Var_24 = mercury__univ__univ_value_1_f_0(&TypeInfo_29_29, Univ_5);
        mercury__deconstruct__named_arg_cc_3_p_0(TypeInfo_29_29, Var_24, Name_14, &MaybeValue_13);
      }
      else
      {
        MR_Integer N_11 = ((MR_Integer) ((MR_hl_field(0, Dir_9, 0))));
        MR_Word TypeCtor_12;
        MR_Word Var_17;
        MR_String Var_18;
        MR_String Var_19;

        Var_17 = mercury__univ__univ_type_1_f_0(Univ_5);
        TypeCtor_12 = mercury__type_desc__type_ctor_1_f_0(Var_17);
        Var_18 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_12);
        succeeded = (strcmp(Var_18, (MR_String) "array") == 0);
        if (succeeded)
        {
          Var_19 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_12);
          succeeded = (strcmp(Var_19, (MR_String) "array") == 0);
        }
        if (succeeded)
        {
          MR_Word TypeInfo_27_27;
          MR_Box Var_20;

          Var_20 = mercury__univ__univ_value_1_f_0(&TypeInfo_27_27, Univ_5);
          mercury__deconstruct__arg_cc_3_p_0(TypeInfo_27_27, Var_20, N_11, &MaybeValue_13);
        }
        else
        {
          MR_Word TypeInfo_28_28;
          MR_Box Var_21;
          MR_Integer Var_22;

          Var_21 = mercury__univ__univ_value_1_f_0(&TypeInfo_28_28, Univ_5);
          Var_22 = (MR_Integer) ((MR_Unsigned) N_11 - (MR_Unsigned) 1);
          mercury__deconstruct__arg_cc_3_p_0(TypeInfo_28_28, Var_21, Var_22, &MaybeValue_13);
        }
      }
      if ((MaybeValue_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_26;

        Var_26 = mercury__list__reverse_1_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0), RevPath0_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, base, 1) = ((MR_Box) (Dir_9));
        }
      }
      else
      {
        MR_Word TypeInfo_30_30 = ((MR_Word) ((MR_hl_field(1, MaybeValue_13, 0))));
        MR_Box Value_15 = (MR_hl_field(1, MaybeValue_13, 1));
        MR_Word ArgN_16;
        MR_Word Var_25;
        MR_Word next_value_of_Univ_5;
        MR_Word next_value_of_Path_6;
        MR_Word next_value_of_RevPath0_7;

        ArgN_16 = mercury__univ__univ_1_f_0(TypeInfo_30_30, Value_15);
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Dir_9));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (RevPath0_7));
        }
        // direct tailcall eliminated
        ;
        next_value_of_Univ_5 = ArgN_16;
        next_value_of_Path_6 = Dirs_10;
        next_value_of_RevPath0_7 = Var_25;
        Univ_5 = next_value_of_Univ_5;
        Path_6 = next_value_of_Path_6;
        RevPath0_7 = next_value_of_RevPath0_7;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__term_paths____Unify____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__term_paths____Unify____deref_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__term_paths____Compare____deref_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__term_paths____Compare____deref_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__term_paths__init(void)
{
}

void mercury__mdb__term_paths__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mdb__term_paths__mdb__term_paths__type_ctor_info_deref_result_1);
}

void mercury__mdb__term_paths__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__term_paths__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdb.term_paths.
