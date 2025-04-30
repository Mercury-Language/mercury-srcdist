/*
** Automatically generated from `frame.m'
** by the Mercury compiler,
** version rotd-2025-04-30
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


// :- module mdb.frame.
// :- implementation.

/*
INIT mercury__mdb__frame__init
ENDINIT
*/

#include "mdb.frame.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdb.util.mih"
#include "mdbcomp.prim_data.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mdb__frame__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mdb__frame__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mdb__frame__list__ti_list_1builtin__type_ctor_info_string_0;

static void MR_CALL 
mdb__frame__left_3_p_0(
  MR_Integer N_4,
  MR_String Str_5,
  MR_String * Left_6);

static void MR_CALL 
mdb__frame__subtract_3_p_0(
  MR_Integer M_4,
  MR_Integer X_5,
  MR_Integer * Z_6);

static void MR_CALL 
mdb__frame__add_right_padding_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * PaddedFrameStr_5);

static void MR_CALL 
mdb__frame__clip_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__frame__hglue_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__frame__hglue_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__frame__hglue_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__frame__hglue_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
mdb__frame__hglue_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__frame__hsize_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
mdb__frame__hsize_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__frame____Unify____clip_rect_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__frame____Compare____clip_rect_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__frame____Unify____frame_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__frame____Compare____frame_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__frame_scalar_common_1[8][3];

static /* final */ const MR_Box mdb__frame_scalar_common_2[1][2];

static /* final */ const MR_Box mdb__frame_scalar_common_3[2][5];

static /* final */ const MR_Box mdb__frame_scalar_common_4[3][6];




static /* final */ const MR_Box mdb__frame_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_3[0])),
    ((MR_Box) (mdb__frame__hsize_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_4[0])),
    ((MR_Box) (mdb__frame__hsize_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_3[0])),
    ((MR_Box) (mdb__frame__hglue_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_4[0])),
    ((MR_Box) (mdb__frame__hglue_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_3[1])),
    ((MR_Box) (mdb__frame__hglue_2_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdb__frame_scalar_common_4[1])),
    ((MR_Box) (mdb__frame__hglue_2_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__frame_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__frame_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__frame__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__frame_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 mdb__frame__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__frame__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__frame__mdb__frame__type_ctor_info_clip_rect_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__frame____Unify____clip_rect_0_0_10001)),
  ((MR_Box) (mdb__frame____Compare____clip_rect_0_0_10001)),
  (MR_String) "mdb.frame",
  (MR_String) "clip_rect",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__frame__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mdb__frame__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct mdb__frame__mdb__frame__type_ctor_info_frame_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__frame____Unify____frame_0_0_10001)),
  ((MR_Box) (mdb__frame____Compare____frame_0_0_10001)),
  (MR_String) "mdb.frame",
  (MR_String) "frame",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__frame__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mdb__frame____Compare____frame_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__frame_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdb__frame____Unify____frame_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__frame_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdb__frame____Compare____clip_rect_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__frame_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdb__frame____Unify____clip_rect_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__frame_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdb__frame__left_3_p_0(
  MR_Integer N_4,
  MR_String Str_5,
  MR_String * Left_6)
{
  mercury__string__left_3_p_0(Str_5, N_4, Left_6);
}

static void MR_CALL 
mdb__frame__subtract_3_p_0(
  MR_Integer M_4,
  MR_Integer X_5,
  MR_Integer * Z_6)
{
  *Z_6 = (MR_Integer) ((MR_Unsigned) M_4 - (MR_Unsigned) X_5);
}

static void MR_CALL 
mdb__frame__add_right_padding_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * PaddedFrameStr_5)
{
  MR_String Str_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Len_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word PadChars_6;
  MR_String Padding_7;

  mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Len_4, ((MR_Box) (MR_Word) ((MR_Char) 32)), &PadChars_6);
  mercury__string__from_char_list_2_p_0(PadChars_6, &Padding_7);
  mercury__string__append_3_p_2(Str_3, Padding_7, PaddedFrameStr_5);
}

static void MR_CALL 
mdb__frame__clip_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Left_6;

  mdb__frame__left_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv0_Left_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Left_6));
}

MR_Word MR_CALL 
mdb__frame__clip_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Frame_6)
{
  MR_Word ClippedFrame_7;
  MR_Integer X_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Y_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word YClippedFrame_8;
  MR_Word Var_9;

  mercury__list__take_upto_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Y_5, Frame_6, &YClippedFrame_8);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&mdb__frame_scalar_common_4[2]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (mdb__frame__clip_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (X_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, YClippedFrame_8, &ClippedFrame_7);
  return ClippedFrame_7;
}

static void MR_CALL 
mdb__frame__hglue_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv5_HeadVar__3_3;

  mercury__string__append_3_p_2(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), &conv5_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
}

static void MR_CALL 
mdb__frame__hglue_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv4_PaddedFrameStr_5;

  mdb__frame__add_right_padding_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_PaddedFrameStr_5);
  *wrapper_arg_2 = ((MR_Box) (conv4_PaddedFrameStr_5));
}

static void MR_CALL 
mdb__frame__hglue_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_Z_6;

  mdb__frame__subtract_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), &conv3_Z_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_Z_6));
}

static void MR_CALL 
mdb__frame__hglue_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__3_3;

  mercury__int__max_3_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_Box MR_CALL 
mdb__frame__hglue_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__length_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
mdb__frame__hglue_2_f_0(
  MR_Word LeftFrame_4,
  MR_Word RightFrame_5)
{
  MR_bool succeeded;
  MR_Word GluedFrame_6;
  MR_Integer RVSize_7;
  MR_Integer LVSize_8;
  MR_Word RightFrameNew_10;
  MR_Word LeftFrameNew_11;
  MR_Word PaddedLeftFrameNew_12;
  MR_Word Lengths_34;
  MR_Integer MaxLen_35;
  MR_Word Paddings_36;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Box conv2_MaxLen_35;

  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RightFrame_5, &RVSize_7);
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LeftFrame_4, &LVSize_8);
  succeeded = (RVSize_7 < LVSize_8);
  if (succeeded)
  {
    MR_Integer PadLines_9 = (MR_Integer) ((MR_Unsigned) LVSize_8 - (MR_Unsigned) RVSize_7);
    MR_Word Padding_28;

    mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PadLines_9, ((MR_Box) ((MR_String) "")), &Padding_28);
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RightFrame_5, Padding_28, &RightFrameNew_10);
    LeftFrameNew_11 = LeftFrame_4;
  }
  else
  {
    succeeded = (LVSize_8 < RVSize_7);
    if (succeeded)
    {
      MR_Integer PadLines_20 = (MR_Integer) ((MR_Unsigned) RVSize_7 - (MR_Unsigned) LVSize_8);
      MR_Word Padding_31;

      mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PadLines_20, ((MR_Box) ((MR_String) "")), &Padding_31);
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LeftFrame_4, Padding_31, &LeftFrameNew_11);
      RightFrameNew_10 = RightFrame_5;
    }
    else
    {
      LeftFrameNew_11 = LeftFrame_4;
      RightFrameNew_10 = RightFrame_5;
    }
  }
  Lengths_34 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__frame_scalar_common_1[4]), LeftFrameNew_11);
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__frame_scalar_common_1[5]), Lengths_34, ((MR_Box) ((MR_Integer) 0)), &conv2_MaxLen_35);
  MaxLen_35 = ((MR_Integer) (conv2_MaxLen_35));
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&mdb__frame_scalar_common_4[0]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (mdb__frame__hglue_2_f_0_3));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (MaxLen_35));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_40, Lengths_34, &Paddings_36);
  Var_42 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LeftFrameNew_11, Paddings_36);
  mercury__list__map_3_p_0((MR_Word) (&mdb__frame_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__frame_scalar_common_1[6]), Var_42, &PaddedLeftFrameNew_12);
  mdb__util__zip_with_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__frame_scalar_common_1[7]), PaddedLeftFrameNew_12, RightFrameNew_10, &GluedFrame_6);
  return GluedFrame_6;
}

MR_Word MR_CALL 
mdb__frame__vglue_2_f_0(
  MR_Word TopFrame_4,
  MR_Word BottomFrame_5)
{
  MR_Word StackedFrame_6;

  mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TopFrame_4, BottomFrame_5, &StackedFrame_6);
  return StackedFrame_6;
}

MR_Integer MR_CALL 
mdb__frame__vsize_1_f_0(
  MR_Word Frame_3)
{
  MR_Integer VSize_4;

  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Frame_3, &VSize_4);
  return VSize_4;
}

static void MR_CALL 
mdb__frame__hsize_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__3_3;

  mercury__int__max_3_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_Box MR_CALL 
mdb__frame__hsize_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__length_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Integer MR_CALL 
mdb__frame__hsize_1_f_0(
  MR_Word Frame_3)
{
  MR_Integer HSize_4;
  MR_Word Lengths_5;
  MR_Box conv2_HSize_4;

  Lengths_5 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__frame_scalar_common_1[2]), Frame_3);
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__frame_scalar_common_1[3]), Lengths_5, ((MR_Box) ((MR_Integer) 0)), &conv2_HSize_4);
  HSize_4 = ((MR_Integer) (conv2_HSize_4));
  return HSize_4;
}

MR_Word MR_CALL 
mdb__frame__from_string_1_f_0(
  MR_String Str_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Str_3));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mdb__frame____Unify____clip_rect_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__frame____Unify____clip_rect_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__frame____Compare____clip_rect_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__frame____Compare____clip_rect_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__frame____Unify____frame_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__frame____Unify____frame_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__frame____Compare____frame_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__frame____Compare____frame_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__frame__init(void)
{
}

void mercury__mdb__frame__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mdb__frame__mdb__frame__type_ctor_info_clip_rect_0);
  MR_register_type_ctor_info(&mdb__frame__mdb__frame__type_ctor_info_frame_0);
}

void mercury__mdb__frame__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__frame__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdb.frame.
