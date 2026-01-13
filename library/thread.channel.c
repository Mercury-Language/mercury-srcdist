/*
** Automatically generated from `thread.channel.m'
** by the Mercury compiler,
** version rotd-2026-01-13
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


// :- module thread.channel.
// :- implementation.

/*
INIT mercury__thread__channel__init
ENDINIT
*/

#include "thread.channel.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "thread.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"
#include "thread.mvar.mih"
#include "thread.semaphore.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__channel__pti_item_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_channel_1_0[2];

static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0;

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0[1];

static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1[1];

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_channel_1[1];

static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_channel_1[1];

static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_item_1_0[2];

static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_item_1_0;

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0[1];

static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_item_1[1];

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_item_1[1];

static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_item_1[1];

static MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__channel____Compare____channel_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__channel____Compare____item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__channel____Compare____stream_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__thread__channel_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread__channel_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread__channel_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__thread__channel_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__channel_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__channel_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__channel_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__channel_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "thread.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#include "thread.semaphore.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__channel__thread__channel__type_ctor_info_item_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  { (MR_PseudoTypeInfo) (&mercury__thread__channel__thread__channel__pti_item_1__pseudo_1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  { (MR_PseudoTypeInfo) (&mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_channel_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0 = {
  (MR_String) "channel",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__channel__thread__channel__field_types_channel_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0[1] = { &mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0 };

static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_channel_1[1] = { &mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0 };

static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_channel_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_channel_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__channel____Unify____channel_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____channel_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "channel",
  { mercury__thread__channel__thread__channel__du_name_ordered_channel_1 },
  { mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__thread__channel__thread__channel__functor_number_map_channel_1,

};

static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_item_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_item_1_0 = {
  (MR_String) "item",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__channel__thread__channel__field_types_item_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0[1] = { &mercury__thread__channel__thread__channel__du_functor_desc_item_1_0 };

static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_item_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_item_1[1] = { &mercury__thread__channel__thread__channel__du_functor_desc_item_1_0 };

static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_item_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_item_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__channel____Unify____item_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____item_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "item",
  { mercury__thread__channel__thread__channel__du_name_ordered_item_1 },
  { mercury__thread__channel__thread__channel__du_ptag_ordered_item_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__thread__channel__thread__channel__functor_number_map_item_1,

};

const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_stream_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__thread__channel____Unify____stream_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____stream_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "stream",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__thread__channel____Compare____stream_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__thread__mvar____Compare____mvar_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__thread__mvar____Unify____mvar_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__thread__channel____Compare____item_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word TypeInfo_13_13;

      {
        TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
        MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      mercury__thread__mvar____Compare____mvar_1_0(TypeInfo_13_13, HeadVar__1_1, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
    }
  }
}

MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeCtorInfo_10_10;
    MR_Word TypeInfo_11_11;
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeCtorInfo_10_10 = (MR_Word) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1);
      {
        TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (TypeCtorInfo_10_10));
        MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
      }
      succeeded = mercury__thread__mvar____Unify____mvar_1_0(TypeInfo_11_11, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__thread__channel____Compare____channel_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_15_15;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
      MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_13_13));
    }
    mercury__thread__mvar____Compare____mvar_1_0(TypeInfo_15_15, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_20_20;

      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      {
        TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
        MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_18_18));
      }
      mercury__thread__mvar____Compare____mvar_1_0(TypeInfo_20_20, HeadVar__1_1, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
    }
  }
}

MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
      MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
      MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
    }
    succeeded = mercury__thread__mvar____Unify____mvar_1_0(TypeInfo_18_18, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    if (succeeded)
      succeeded = mercury__thread__mvar____Unify____mvar_1_0(TypeInfo_18_18, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
  }
  return succeeded;
}

void MR_CALL 
mercury__thread__channel__untake_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Box Val_7)
{
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_21_21;
  MR_Word Read_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word NewHead_9;
  MR_Word Head_10;
  MR_Word Var_15;
  MR_Word conv0_NewHead_9;
  MR_Box conv1_Head_10;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  mercury__thread__mvar__init_3_p_0(TypeInfo_19_19, &conv0_NewHead_9);
  NewHead_9 = (MR_Word) (conv0_NewHead_9);
  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_19_19));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_21_21, (MR_Word) (Read_5), &conv1_Head_10);
  Head_10 = ((MR_Word) (conv1_Head_10));
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = Val_7;
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (Head_10));
  }
  mercury__thread__mvar__put_4_p_0(TypeInfo_19_19, (MR_Word) (NewHead_9), ((MR_Box) (Var_15)));
  mercury__thread__mvar__put_4_p_0(TypeInfo_21_21, (MR_Word) (Read_5), ((MR_Box) (NewHead_9)));
}

void MR_CALL 
mercury__thread__channel__duplicate_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Word TypeInfo_17_17;
  MR_Word TypeInfo_19_19;
  MR_Word Write_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word NewRead_7;
  MR_Word Hole_9;
  MR_Word conv0_NewRead_7;
  MR_Box conv1_Hole_9;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_17_17));
  }
  mercury__thread__mvar__init_3_p_0(TypeInfo_19_19, &conv0_NewRead_7);
  NewRead_7 = (MR_Word) (conv0_NewRead_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NewRead_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Write_6));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_19_19, (MR_Word) (Write_6), &conv1_Hole_9);
  Hole_9 = ((MR_Word) (conv1_Hole_9));
  mercury__thread__mvar__put_4_p_0(TypeInfo_19_19, (MR_Word) (Write_6), ((MR_Box) (Hole_9)));
  mercury__thread__mvar__put_4_p_0(TypeInfo_19_19, (MR_Word) (NewRead_7), ((MR_Box) (Hole_9)));
}

void MR_CALL 
mercury__thread__channel__try_take_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Word * MaybeVal_7)
{
  MR_Word TypeInfo_20_20;
  MR_Word TypeInfo_22_22;
  MR_Word Read_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Head_9;
  MR_Word MaybeItem_10;
  MR_Word NewHead_12;
  MR_Box conv0_Head_9;
  MR_Word conv1_MaybeItem_10;

  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_20_20));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_22_22, (MR_Word) (Read_5), &conv0_Head_9);
  Head_9 = ((MR_Word) (conv0_Head_9));
  mercury__thread__mvar__try_take_4_p_0(TypeInfo_20_20, (MR_Word) (Head_9), &conv1_MaybeItem_10);
  MaybeItem_10 = (MR_Word) (conv1_MaybeItem_10);
  if ((MaybeItem_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeVal_7 = (MR_Word) ((MR_Unsigned) 0U);
    NewHead_12 = Head_9;
  }
  else
  {
    MR_Box Val_11;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, MaybeItem_10, 0))));

    Val_11 = (MR_hl_field(0, Var_17, 0));
    NewHead_12 = ((MR_Word) ((MR_hl_field(0, Var_17, 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVal_7 = base;
      MR_hl_field(1, base, 0) = Val_11;
    }
  }
  mercury__thread__mvar__put_4_p_0(TypeInfo_22_22, (MR_Word) (Read_5), ((MR_Box) (NewHead_12)));
}

void MR_CALL 
mercury__thread__channel__take_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Box * Val_7)
{
  MR_Word TypeInfo_18_18;
  MR_Word TypeInfo_20_20;
  MR_Word Read_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Head_9;
  MR_Word NewHead_10;
  MR_Word Var_14;
  MR_Box conv0_Head_9;
  MR_Box conv1_Var_14;

  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_18_18));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_20_20, (MR_Word) (Read_5), &conv0_Head_9);
  Head_9 = ((MR_Word) (conv0_Head_9));
  mercury__thread__mvar__take_4_p_0(TypeInfo_18_18, (MR_Word) (Head_9), &conv1_Var_14);
  Var_14 = ((MR_Word) (conv1_Var_14));
  *Val_7 = (MR_hl_field(0, Var_14, 0));
  NewHead_10 = ((MR_Word) ((MR_hl_field(0, Var_14, 1))));
  mercury__thread__mvar__put_4_p_0(TypeInfo_20_20, (MR_Word) (Read_5), ((MR_Box) (NewHead_10)));
}

void MR_CALL 
mercury__thread__channel__put_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Box Val_7)
{
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_21_21;
  MR_Word Write_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word NewHole_9;
  MR_Word OldHole_10;
  MR_Word Var_16;
  MR_Word conv0_NewHole_9;
  MR_Box conv1_OldHole_10;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  mercury__thread__mvar__init_3_p_0(TypeInfo_19_19, &conv0_NewHole_9);
  NewHole_9 = (MR_Word) (conv0_NewHole_9);
  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_19_19));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_21_21, (MR_Word) (Write_6), &conv1_OldHole_10);
  OldHole_10 = ((MR_Word) (conv1_OldHole_10));
  mercury__thread__mvar__put_4_p_0(TypeInfo_21_21, (MR_Word) (Write_6), ((MR_Box) (NewHole_9)));
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = Val_7;
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (NewHole_9));
  }
  mercury__thread__mvar__put_4_p_0(TypeInfo_19_19, (MR_Word) (OldHole_10), ((MR_Box) (Var_16)));
}

void MR_CALL 
mercury__thread__channel__init_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1)
{
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_18_18;
  MR_Word Read_4;
  MR_Word Write_5;
  MR_Word Hole_7;
  MR_Word conv0_Read_4;
  MR_Word conv1_Write_5;
  MR_Word conv2_Hole_7;

  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__thread__channel__thread__channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
  }
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
  }
  mercury__thread__mvar__init_3_p_0(TypeInfo_18_18, &conv0_Read_4);
  Read_4 = (MR_Word) (conv0_Read_4);
  mercury__thread__mvar__init_3_p_0(TypeInfo_18_18, &conv1_Write_5);
  Write_5 = (MR_Word) (conv1_Write_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__1_1 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Read_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Write_5));
  }
  mercury__thread__mvar__init_3_p_0(TypeInfo_16_16, &conv2_Hole_7);
  Hole_7 = (MR_Word) (conv2_Hole_7);
  mercury__thread__mvar__put_4_p_0(TypeInfo_18_18, (MR_Word) (Read_4), ((MR_Box) (Hole_7)));
  mercury__thread__mvar__put_4_p_0(TypeInfo_18_18, (MR_Word) (Write_5), ((MR_Box) (Hole_7)));
}

static MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__channel____Unify____channel_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__channel____Compare____channel_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__channel____Compare____channel_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__channel____Unify____item_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__channel____Compare____item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__channel____Compare____item_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__channel____Unify____stream_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__channel____Compare____stream_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__channel____Compare____stream_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__thread__channel__init(void)
{
}

void mercury__thread__channel__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_channel_1);
  MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_item_1);
  MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_stream_1);
}

void mercury__thread__channel__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__thread__channel__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module thread.channel.
