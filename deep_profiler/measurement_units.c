/*
** Automatically generated from `measurement_units.m'
** by the Mercury compiler,
** version rotd-2023-03-31
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


// :- module measurement_units.
// :- implementation.

/*
INIT mercury__measurement_units__init
ENDINIT
*/

#include "measurement_units.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_PseudoTypeInfo measurement_units__measurement_units__field_types_memory_0_0[2];

static const MR_ConstString measurement_units__measurement_units__field_names_memory_0_0[2];

static const MR_DuFunctorDesc measurement_units__measurement_units__du_functor_desc_memory_0_0;

static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_stag_ordered_memory_0_0[1];

static const MR_DuPtagLayout measurement_units__measurement_units__du_ptag_ordered_memory_0[1];

static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_name_ordered_memory_0[1];

static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_0[1];

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_0;

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_1;

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_ordinal_ordered_memory_units_0[2];

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_name_ordered_memory_units_0[2];

static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_units_0[2];

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_num_decimal_places_0_0;

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_num_decimal_places_0_1;

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_ordinal_ordered_num_decimal_places_0[2];

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_name_ordered_num_decimal_places_0[2];

static const MR_Integer measurement_units__measurement_units__functor_number_map_num_decimal_places_0[2];

static const MR_Integer measurement_units__measurement_units__functor_number_map_percent_0[1];

static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_percent_0;

static const MR_Integer measurement_units__measurement_units__functor_number_map_time_0[1];

static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_time_0;

static MR_bool MR_CALL 
measurement_units__IntroducedFrom__pred__compare_memory__211__1_2_p_0(
  MR_Integer WordSizeA_8,
  MR_Integer WordSizeB_10);

static MR_bool MR_CALL 
measurement_units__compare_memory_3_p_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
measurement_units__decimal_fraction_1_f_0(
  MR_String Str0_3);

static MR_Word MR_CALL 
measurement_units__add_commas_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
measurement_units____Unify____memory_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____memory_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____memory_units_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____memory_units_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____num_decimal_places_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____num_decimal_places_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____percent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____percent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____probability_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____probability_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____time_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____time_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box measurement_units_scalar_common_1[1][1];

static /* final */ const MR_Box measurement_units_scalar_common_2[1][5];




static /* final */ const MR_Box measurement_units_scalar_common_1[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box measurement_units_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};






static const MR_PseudoTypeInfo measurement_units__measurement_units__field_types_memory_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString measurement_units__measurement_units__field_names_memory_0_0[2] = {
  (MR_String) "words",
  (MR_String) "word_size"
};

static const MR_DuFunctorDesc measurement_units__measurement_units__du_functor_desc_memory_0_0 = {
  (MR_String) "memory",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  measurement_units__measurement_units__field_types_memory_0_0,
  measurement_units__measurement_units__field_names_memory_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_stag_ordered_memory_0_0[1] = {
  &measurement_units__measurement_units__du_functor_desc_memory_0_0
};

static const MR_DuPtagLayout measurement_units__measurement_units__du_ptag_ordered_memory_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurement_units__measurement_units__du_stag_ordered_memory_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_name_ordered_memory_0[1] = {
  &measurement_units__measurement_units__du_functor_desc_memory_0_0
};

static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_memory_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurement_units____Unify____memory_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____memory_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "memory",
  { measurement_units__measurement_units__du_name_ordered_memory_0 },
  { measurement_units__measurement_units__du_ptag_ordered_memory_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  measurement_units__measurement_units__functor_number_map_memory_0,

};

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_0 = {
  (MR_String) "units_words",
  INT32_C(0)
};

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_1 = {
  (MR_String) "units_bytes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_ordinal_ordered_memory_units_0[2] = {
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_0,
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_1
};

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_name_ordered_memory_units_0[2] = {
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_1,
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_0
};

static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_units_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_memory_units_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (measurement_units____Unify____memory_units_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____memory_units_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "memory_units",
  { measurement_units__measurement_units__enum_name_ordered_memory_units_0 },
  { measurement_units__measurement_units__enum_ordinal_ordered_memory_units_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  measurement_units__measurement_units__functor_number_map_memory_units_0,

};

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_num_decimal_places_0_0 = {
  (MR_String) "ndp_0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_num_decimal_places_0_1 = {
  (MR_String) "ndp_2",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_ordinal_ordered_num_decimal_places_0[2] = {
  &measurement_units__measurement_units__enum_functor_desc_num_decimal_places_0_0,
  &measurement_units__measurement_units__enum_functor_desc_num_decimal_places_0_1
};

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_name_ordered_num_decimal_places_0[2] = {
  &measurement_units__measurement_units__enum_functor_desc_num_decimal_places_0_0,
  &measurement_units__measurement_units__enum_functor_desc_num_decimal_places_0_1
};

static const MR_Integer measurement_units__measurement_units__functor_number_map_num_decimal_places_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_num_decimal_places_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (measurement_units____Unify____num_decimal_places_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____num_decimal_places_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "num_decimal_places",
  { measurement_units__measurement_units__enum_name_ordered_num_decimal_places_0 },
  { measurement_units__measurement_units__enum_ordinal_ordered_num_decimal_places_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  measurement_units__measurement_units__functor_number_map_num_decimal_places_0,

};

static const MR_Integer measurement_units__measurement_units__functor_number_map_percent_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_percent_0 = {
  (MR_String) "percent_float",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_percent_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurement_units____Unify____percent_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____percent_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "percent",
  { &measurement_units__measurement_units__notag_functor_desc_percent_0 },
  { &measurement_units__measurement_units__notag_functor_desc_percent_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  measurement_units__measurement_units__functor_number_map_percent_0,

};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_probability_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (measurement_units____Unify____probability_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____probability_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "probability",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer measurement_units__measurement_units__functor_number_map_time_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_time_0 = {
  (MR_String) "time_sec",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_time_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurement_units____Unify____time_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____time_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "time",
  { &measurement_units__measurement_units__notag_functor_desc_time_0 },
  { &measurement_units__measurement_units__notag_functor_desc_time_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  measurement_units__measurement_units__functor_number_map_time_0,

};

static MR_bool MR_CALL 
measurement_units__IntroducedFrom__pred__compare_memory__211__1_2_p_0(
  MR_Integer WordSizeA_8,
  MR_Integer WordSizeB_10)
{
  MR_bool succeeded = (WordSizeA_8 == WordSizeB_10);

  return succeeded;
}

void MR_CALL 
measurement_units____Compare____time_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));
    MR_Float ArgY1_5 = MR_unbox_float((MR_Box) (HeadVar__3_3));

    mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
measurement_units____Unify____time_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_Box) (HeadVar__1_1));
    MR_Float ArgY1_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
measurement_units____Compare____probability_0_0(
  MR_Word * HeadVar__1_1,
  MR_Float HeadVar__2_2,
  MR_Float HeadVar__3_3)
{
  MR_Float Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Float Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
measurement_units____Unify____probability_0_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Float Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Float Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
measurement_units____Compare____percent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));
    MR_Float ArgY1_5 = MR_unbox_float((MR_Box) (HeadVar__3_3));

    mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
measurement_units____Unify____percent_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_Box) (HeadVar__1_1));
    MR_Float ArgY1_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
measurement_units____Compare____num_decimal_places_0_0(
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
measurement_units____Unify____num_decimal_places_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
measurement_units____Compare____memory_units_0_0(
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
measurement_units____Unify____memory_units_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
measurement_units____Compare____memory_0_0(
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
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0)));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
measurement_units____Unify____memory_0_0(
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
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

MR_String MR_CALL 
measurement_units__four_decimal_fraction_1_f_0(
  MR_Float Measure_3)
{
  MR_String Str_4;
  MR_String Str0_5;

  mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 4, (MR_Integer) 2, Measure_3, &Str0_5);
  Str_4 = measurement_units__decimal_fraction_1_f_0(Str0_5);
  return Str_4;
}

MR_String MR_CALL 
measurement_units__two_decimal_fraction_1_f_0(
  MR_Float Measure_3)
{
  MR_String Str_4;
  MR_String Str0_5;

  mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 2, (MR_Integer) 2, Measure_3, &Str0_5);
  Str_4 = measurement_units__decimal_fraction_1_f_0(Str0_5);
  return Str_4;
}

MR_String MR_CALL 
measurement_units__one_decimal_fraction_1_f_0(
  MR_Float Measure_3)
{
  MR_String Str_4;
  MR_String Str0_5;

  mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 1, (MR_Integer) 2, Measure_3, &Str0_5);
  Str_4 = measurement_units__decimal_fraction_1_f_0(Str0_5);
  return Str_4;
}

MR_String MR_CALL 
measurement_units__commas_1_f_0(
  MR_Integer Num_3)
{
  MR_String Str_4;
  MR_String Str0_5;
  MR_Word Chars0_6;
  MR_Word RevChars0_7;
  MR_Word Var_8;
  MR_Word Var_9;

  mercury__string__int_to_string_2_p_0(Num_3, &Str0_5);
  mercury__string__to_char_list_2_p_0(Str0_5, &Chars0_6);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Chars0_6, &RevChars0_7);
  Var_9 = measurement_units__add_commas_1_f_0(RevChars0_7);
  Var_8 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_9);
  mercury__string__from_char_list_2_p_0(Var_8, &Str_4);
  return Str_4;
}

MR_Float MR_CALL 
measurement_units__not_probability_1_f_0(
  MR_Float X_3)
{
  MR_Float HeadVar__2_2 = (((MR_Float) 1.0000000000000000) - X_3);

  return HeadVar__2_2;
}

MR_Float MR_CALL 
measurement_units__and_2_f_0(
  MR_Float A_4,
  MR_Float B_5)
{
  MR_Float HeadVar__3_3 = (A_4 * B_5);

  return HeadVar__3_3;
}

MR_Float MR_CALL 
measurement_units__or_2_f_0(
  MR_Float A_4,
  MR_Float B_5)
{
  MR_Float HeadVar__3_3;
  MR_Float Var_6;
  MR_Float Var_7 = (((MR_Float) 1.0000000000000000) - A_4);
  MR_Float Var_8 = (((MR_Float) 1.0000000000000000) - B_5);

  Var_6 = (Var_7 * Var_8);
  HeadVar__3_3 = (((MR_Float) 1.0000000000000000) - Var_6);
  return HeadVar__3_3;
}

MR_Float MR_CALL 
measurement_units__probability_to_float_1_f_0(
  MR_Float Prob_3)
{
  MR_Float Prob_2 = Prob_3;

  return Prob_2;
}

MR_Float MR_CALL 
measurement_units__probable_1_f_0(
  MR_Float Prob_3)
{
  MR_bool succeeded = (Prob_3 <= ((MR_Float) 1.0000000000000000));
  MR_Float Prob_2 = Prob_3;
  MR_Float Var_5;

  if (succeeded)
  {
    Var_5 = (MR_Float) 0.0000000000000000;
    succeeded = (Prob_3 >= Var_5);
  }
  if (!(succeeded))
  {
    MR_String Var_6;
    MR_String Var_12;
    MR_String Var_20;

    mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 2, Prob_3, &Var_12);
    Var_20 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) " out of range 0.0 to 1.0 inclusive");
    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "Probability ", Var_20);
    mercury__require__error_1_p_0(Var_6);
  }
  return Prob_2;
}

MR_Float MR_CALL 
measurement_units__impossible_0_f_0(void)
{
  return (MR_Float) 0.0000000000000000;
}

MR_Float MR_CALL 
measurement_units__certain_0_f_0(void)
{
  return (MR_Float) 1.0000000000000000;
}

MR_String MR_CALL 
measurement_units__format_time_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_String String_4;
  MR_Float F_3 = MR_unbox_float((MR_Box) (HeadVar__1_1));

  succeeded = (F_3 < ((MR_Float) 1.0000000000000001e-09));
  if (succeeded)
  {
    MR_Float Var_9;
    MR_String Var_38;

    Var_9 = mercury__float__f_slash_2_f_0(F_3, (MR_Float) 9.9999999999999998e-13);
    mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 1, (MR_Integer) 2, Var_9, &Var_38);
    String_4 = mercury__string__f_43_43_2_f_0(Var_38, (MR_String) "ps");
  }
  else
  {
    succeeded = (F_3 < ((MR_Float) 9.9999999999999995e-07));
    if (succeeded)
    {
      MR_Float Var_16;
      MR_String Var_48;

      Var_16 = mercury__float__f_slash_2_f_0(F_3, (MR_Float) 1.0000000000000001e-09);
      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 1, (MR_Integer) 2, Var_16, &Var_48);
      String_4 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "ns");
    }
    else
    {
      succeeded = (F_3 < ((MR_Float) 0.0010000000000000000));
      if (succeeded)
      {
        MR_Float Var_23;
        MR_String Var_58;

        Var_23 = mercury__float__f_slash_2_f_0(F_3, (MR_Float) 9.9999999999999995e-07);
        mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 1, (MR_Integer) 2, Var_23, &Var_58);
        String_4 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) "us");
      }
      else
      {
        succeeded = (F_3 < ((MR_Float) 1.0000000000000000));
        if (succeeded)
        {
          MR_Float Var_30;
          MR_String Var_68;

          Var_30 = mercury__float__f_slash_2_f_0(F_3, (MR_Float) 0.0010000000000000000);
          mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 1, (MR_Integer) 2, Var_30, &Var_68);
          String_4 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "ms");
        }
        else
        {
          MR_String Var_78;

          mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 1, (MR_Integer) 2, F_3, &Var_78);
          String_4 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) "s");
        }
      }
    }
  }
  return String_4;
}

MR_Word MR_CALL 
measurement_units__time_percall_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Calls_5)
{
  MR_bool succeeded = (Calls_5 == (MR_Integer) 0);
  MR_Word HeadVar__3_3;
  MR_Float Time_4 = MR_unbox_float((MR_Box) (HeadVar__1_1));
  MR_Float TimePerCall_6;

  if (succeeded)
    TimePerCall_6 = (MR_Float) 0.0000000000000000;
  else
  {
    MR_Float Var_7;

    Var_7 = mercury__float__float_1_f_0(Calls_5);
    TimePerCall_6 = mercury__float__f_slash_2_f_0(Time_4, Var_7);
  }
  HeadVar__3_3 = (MR_Word) (MR_box_float(TimePerCall_6));
  return HeadVar__3_3;
}

MR_Word MR_CALL 
measurement_units__ticks_to_time_2_f_0(
  MR_Integer Ticks_4,
  MR_Integer TicksPerSec_5)
{
  MR_Word Time_6;
  MR_Float SecPerTick_7;
  MR_Float Var_9;
  MR_Float Var_10;
  MR_Float Var_11;

  Var_9 = mercury__float__float_1_f_0(TicksPerSec_5);
  SecPerTick_7 = mercury__float__f_slash_2_f_0((MR_Float) 1.0000000000000000, Var_9);
  Var_11 = mercury__float__float_1_f_0(Ticks_4);
  Var_10 = (Var_11 * SecPerTick_7);
  Time_6 = (MR_Word) (MR_box_float(Var_10));
  return Time_6;
}

MR_bool MR_CALL 
measurement_units__percent_at_or_above_threshold_2_p_0(
  MR_Integer Threshold_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Float P_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));
  MR_Float Var_5;
  MR_Float Var_6;
  MR_Float Var_7;

  Var_7 = mercury__float__float_1_f_0((MR_Integer) 100);
  Var_5 = (P_4 * Var_7);
  Var_6 = mercury__float__float_1_f_0(Threshold_3);
  succeeded = (Var_5 >= Var_6);
  return succeeded;
}

MR_String MR_CALL 
measurement_units__format_percent_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String String_4;
  MR_Float P_3 = MR_unbox_float((MR_Box) (HeadVar__1_1));
  MR_Float Var_8 = (P_3 * ((MR_Float) 100.00000000000000));

  mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 2, (MR_Integer) 2, Var_8, &String_4);
  return String_4;
}

MR_Word MR_CALL 
measurement_units__percent_1_f_0(
  MR_Float P_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (MR_box_float(P_3));

  return HeadVar__2_2;
}

static MR_bool MR_CALL 
measurement_units__compare_memory_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = measurement_units__IntroducedFrom__pred__compare_memory__211__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
measurement_units__compare_memory_3_p_0(
  MR_Word MemoryA_4,
  MR_Word MemoryB_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Float WordsA_7 = MR_unbox_float((MR_hl_field(0, MemoryA_4, (MR_Integer) 0)));
  MR_Integer WordSizeA_8 = ((MR_Integer) ((MR_hl_field(0, MemoryA_4, (MR_Integer) 1))));
  MR_Float WordsB_9 = MR_unbox_float((MR_hl_field(0, MemoryB_5, (MR_Integer) 0)));
  MR_Integer WordSizeB_10 = ((MR_Integer) ((MR_hl_field(0, MemoryB_5, (MR_Integer) 1))));
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&measurement_units_scalar_common_2[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (measurement_units__compare_memory_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (WordSizeA_8));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (WordSizeB_10));
  }
  mercury__require__require_2_p_0(Var_11, (MR_String) "compare_memory: word size mismatch");
  mercury__private_builtin__builtin_compare_float_3_p_0(Result_6, WordsA_7, WordsB_9);
}

MR_String MR_CALL 
measurement_units__format_memory_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Decimals_3)
{
  MR_String HeadVar__4_4;
  MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Float Var_14 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Float Var_8;
        MR_Float Var_9;
        MR_String Str0_15;

        Var_9 = mercury__float__float_1_f_0(Var_13);
        Var_8 = (Var_14 * Var_9);
        switch (Decimals_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 0, (MR_Integer) 2, Var_8, &Str0_15);
            break;
          case (MR_Integer) 1:
            mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 2, (MR_Integer) 2, Var_8, &Str0_15);
            break;
        }
        HeadVar__4_4 = measurement_units__decimal_fraction_1_f_0(Str0_15);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Str0_40;

        switch (Decimals_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 0, (MR_Integer) 2, Var_14, &Str0_40);
            break;
          case (MR_Integer) 1:
            mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&measurement_units_scalar_common_1[0]), (MR_Integer) 2, (MR_Integer) 2, Var_14, &Str0_40);
            break;
        }
        HeadVar__4_4 = measurement_units__decimal_fraction_1_f_0(Str0_40);
      }
      break;
  }
  return HeadVar__4_4;
}

static MR_String MR_CALL 
measurement_units__decimal_fraction_1_f_0(
  MR_String Str0_3)
{
  MR_bool succeeded;
  MR_String Representation_4;
  MR_Word SubStrings_5;
  MR_String WholeString0_6;
  MR_String FractionString_7;
  MR_Word Var_10;
  MR_Word Var_11;

  SubStrings_5 = mercury__string__split_at_char_2_f_0((MR_Char) 46, Str0_3);
  succeeded = (SubStrings_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    WholeString0_6 = ((MR_String) ((MR_hl_field(1, SubStrings_5, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(1, SubStrings_5, (MR_Integer) 1))));
    succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FractionString_7 = ((MR_String) ((MR_hl_field(1, Var_10, (MR_Integer) 0))));
      Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 1))));
      succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_String WholeString_8;
    MR_String Var_12;
    MR_Word Chars0_18;
    MR_Word RevChars0_19;
    MR_Word Var_20;
    MR_Word Var_21;

    mercury__string__to_char_list_2_p_0(WholeString0_6, &Chars0_18);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Chars0_18, &RevChars0_19);
    Var_21 = measurement_units__add_commas_1_f_0(RevChars0_19);
    Var_20 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_21);
    mercury__string__from_char_list_2_p_0(Var_20, &WholeString_8);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) ".", FractionString_7);
    Representation_4 = mercury__string__f_43_43_2_f_0(WholeString_8, Var_12);
  }
  else
  {
    MR_String WholeString_17;
    MR_Word Var_14;

    succeeded = (SubStrings_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      WholeString_17 = ((MR_String) ((MR_hl_field(1, SubStrings_5, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(1, SubStrings_5, (MR_Integer) 1))));
      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Chars0_23;
      MR_Word RevChars0_24;
      MR_Word Var_25;
      MR_Word Var_26;

      mercury__string__to_char_list_2_p_0(WholeString_17, &Chars0_23);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Chars0_23, &RevChars0_24);
      Var_26 = measurement_units__add_commas_1_f_0(RevChars0_24);
      Var_25 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_26);
      mercury__string__from_char_list_2_p_0(Var_25, &Representation_4);
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140measurement_units.decimal_fraction\'/1", (MR_String) "didn\'t split on decimal point properly");
  }
  return Representation_4;
}

static MR_Word MR_CALL 
measurement_units__add_commas_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Char Var_36 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));

    if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (Var_36));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
      MR_Char Var_38 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_35, (MR_Integer) 0)));

      if ((Var_37 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_10;

        {
          Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_10, 0) = ((MR_Box) (MR_Word) (Var_38));
          MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (Var_36));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_10));
        }
      }
      else
      {
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));
        MR_Char Var_40 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_37, (MR_Integer) 0)));

        if ((Var_39 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_18;
          MR_Word Var_19;

          {
            Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_Word) (Var_40));
            MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_Word) (Var_38));
            MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (Var_36));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_18));
          }
        }
        else
        {
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_33;

          Var_33 = measurement_units__add_commas_1_f_0(Var_39);
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Char) 44));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_Word) (Var_40));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
          }
          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_Word) (Var_38));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_30));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (Var_36));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_29));
          }
        }
      }
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurement_units__f_slash_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Denom_6)
{
  MR_bool succeeded = (Denom_6 == (MR_Integer) 0);
  MR_Word HeadVar__3_3;
  MR_Float Nom_4 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
  MR_Integer BPW_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  if (succeeded)
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__3_3, 0) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (BPW_5));
    }
  else
  {
    MR_Float Var_8;
    MR_Float Var_9;

    Var_9 = mercury__float__float_1_f_0(Denom_6);
    Var_8 = mercury__float__f_slash_2_f_0(Nom_4, Var_9);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__3_3, 0) = MR_box_float(Var_8);
      MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (BPW_5));
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
measurement_units__memory_words_2_f_0(
  MR_Integer WordsI_4,
  MR_Integer BytesPerWord_5)
{
  MR_Word HeadVar__3_3;
  MR_Float WordsF_6;

  WordsF_6 = mercury__float__float_1_f_0(WordsI_4);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = MR_box_float(WordsF_6);
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (BytesPerWord_5));
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
measurement_units____Unify____memory_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurement_units____Unify____memory_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurement_units____Compare____memory_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurement_units____Compare____memory_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurement_units____Unify____memory_units_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurement_units____Unify____memory_units_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurement_units____Compare____memory_units_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurement_units____Compare____memory_units_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurement_units____Unify____num_decimal_places_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurement_units____Unify____num_decimal_places_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurement_units____Compare____num_decimal_places_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurement_units____Compare____num_decimal_places_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurement_units____Unify____percent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurement_units____Unify____percent_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurement_units____Compare____percent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurement_units____Compare____percent_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurement_units____Unify____probability_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurement_units____Unify____probability_0_0(MR_unbox_float(wrapper_arg_1), MR_unbox_float(wrapper_arg_2));
  return succeeded;
}

static void MR_CALL 
measurement_units____Compare____probability_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurement_units____Compare____probability_0_0(&conv0_HeadVar__1_1, MR_unbox_float(wrapper_arg_2), MR_unbox_float(wrapper_arg_3));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurement_units____Unify____time_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurement_units____Unify____time_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurement_units____Compare____time_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurement_units____Compare____time_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__measurement_units__init(void)
{
}

void mercury__measurement_units__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_memory_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_memory_units_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_num_decimal_places_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_percent_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_probability_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_time_0);
}

void mercury__measurement_units__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__measurement_units__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module measurement_units.
