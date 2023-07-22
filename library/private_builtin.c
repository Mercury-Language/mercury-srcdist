/*
** Automatically generated from `private_builtin.m'
** by the Mercury compiler,
** version rotd-2023-07-22
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


// :- module private_builtin.
// :- implementation.

/*
INIT mercury__private_builtin__init
ENDINIT
*/

#include "private_builtin.mih"


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
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
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
#include "time.mih"
#include "tree234.mih"
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




static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1];

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0;

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1];

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1;

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1];

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0;

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1];

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0;

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1];

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1;

static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__private_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__private_builtin_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__private_builtin_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__private_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__private_builtin_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__private_builtin_scalar_common_2[0])),
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
#line 2052 "private_builtin.m"


const MR_TypeCtorInfo ML_type_ctor_info_for_univ =
    &MR_TYPE_CTOR_INFO_NAME(univ, univ, 0);

const MR_TypeCtorInfo ML_type_info_for_type_info =
    &MR_TYPE_CTOR_INFO_NAME(private_builtin, type_info, 0);

const MR_TypeCtorInfo ML_type_info_for_pseudo_type_info =
    /*
    ** For the time being, we handle pseudo_type_infos the same way
    ** as we handle type_infos.
    */
    &MR_TYPE_CTOR_INFO_NAME(private_builtin, type_info, 0);

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_univ = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &MR_TYPE_CTOR_INFO_NAME(univ, univ, 0) }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_int = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &MR_TYPE_CTOR_INFO_NAME(builtin, int, 0) }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_char = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &MR_TYPE_CTOR_INFO_NAME(builtin, character, 0) }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_string = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &MR_TYPE_CTOR_INFO_NAME(builtin, string, 0) }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_type_info = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    { (MR_TypeInfo) &ML_type_info_for_type_info }
};

const MR_FA_TypeInfo_Struct1 ML_type_info_for_list_of_pseudo_type_info = {
    &MR_TYPE_CTOR_INFO_NAME(list, list, 1),
    /*
    ** For the time being, we handle pseudo_type_infos the same way
    ** as we handle type_infos.
    */
    { (MR_TypeInfo) &ML_type_info_for_type_info }
};




static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 = {
  (MR_String) "float_box",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_float_box_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____float_box_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____float_box_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "float_box",
  { &mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 },
  { &mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__private_builtin__private_builtin__functor_number_map_float_box_0,

};

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_mutvar_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____mutvar_1_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____mutvar_1_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "mutvar",
  { &mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 },
  { &mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__private_builtin__private_builtin__functor_number_map_mutvar_1,

};

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 = {
  (MR_String) "sample_type_info",
  (MR_PseudoTypeInfo) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_sample_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____sample_type_info_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____sample_type_info_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "sample_type_info",
  { &mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 },
  { &mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0,

};

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 = {
  (MR_String) "sample_typeclass_info",
  (MR_PseudoTypeInfo) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_sample_typeclass_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "sample_typeclass_info",
  { &mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 },
  { &mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0,

};

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 = {
  (MR_String) "store_at_ref_type",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_store_at_ref_type_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____store_at_ref_type_1_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____store_at_ref_type_1_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "store_at_ref_type",
  { &mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 },
  { &mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1,

};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_ticket_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_TICKET,
  ((MR_Box) (mercury__private_builtin____Unify____ticket_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____ticket_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "ticket",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_ticket_counter_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____ticket_counter_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____ticket_counter_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "ticket_counter",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
{
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
{
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
{
}

void MR_CALL 
mercury__private_builtin____Compare____type_ctor_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____type_ctor_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box * HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0(
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
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__private_builtin____Compare____typeclass_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
mercury__private_builtin____Compare____typeclass_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0(
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
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__private_builtin____Unify____typeclass_info_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____typeclass_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0(
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
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__private_builtin____Compare____type_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
mercury__private_builtin____Compare____type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0(
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
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__private_builtin____Unify____type_info_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____ref_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____ref_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0(
  MR_Word TypeInfo_for_T_8,
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
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0(
  MR_Word TypeInfo_for_T_7,
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
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__private_builtin____Compare____heap_pointer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____heap_pointer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0(
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

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0(
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
mercury__private_builtin____Compare____base_typeclass_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____base_typeclass_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

void MR_CALL 
mercury__private_builtin__builtin_strcmp_3_p_0(
  MR_Integer * Res_1,
  MR_String S1_2,
  MR_String S2_3)
{
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_strcmp_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = S1_2 ;
	S2 = S2_3 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	*Res_1  = Res;
}
}

void MR_CALL 
mercury__private_builtin__semip_0_p_0(void)
{
}

void MR_CALL 
mercury__private_builtin__imp_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__private_builtin__imp_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__sorry_1_p_0(
  MR_String PredName_2)
{
  MR_String Var_3;
  MR_String Var_5;
  MR_String Var_6;

  mercury__string__append_3_p_2((MR_String) " not implemented\n", (MR_String) "for this target language (or compiler back-end).", &Var_6);
  mercury__string__append_3_p_2(PredName_2, Var_6, &Var_5);
  mercury__string__append_3_p_2((MR_String) "sorry, ", Var_5, &Var_3);
  {
    mercury__require__error_1_p_0(Var_3);
    return;
  }
}

void MR_CALL 
mercury__private_builtin__no_clauses_1_p_0(
  MR_String PredName_2)
{
  MR_String Var_3;

  mercury__string__append_3_p_2((MR_String) "no clauses for ", PredName_2, &Var_3);
  {
    mercury__require__error_1_p_0(Var_3);
    return;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__nonvar_1_p_2(
  MR_Word TypeInfo_for_T_5)
{
  return MR_FALSE;
}

void MR_CALL 
mercury__private_builtin__nonvar_1_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1)
{
}

void MR_CALL 
mercury__private_builtin__nonvar_1_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1)
{
}

void MR_CALL 
mercury__private_builtin__var_1_p_2(
  MR_Word TypeInfo_for_T_5)
{
}

MR_bool MR_CALL 
mercury__private_builtin__var_1_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1)
{
  return MR_FALSE;
}

MR_bool MR_CALL 
mercury__private_builtin__var_1_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1)
{
  return MR_FALSE;
}

void MR_CALL 
mercury__private_builtin__partial_inst_copy_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  *HeadVar__2_2 = HeadVar__1_1;
}

void MR_CALL 
mercury__private_builtin__compare_local_int32_bitfields_4_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Shift_3,
  MR_Word * Result_4)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_local_int32_bitfields_4_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Shift;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Shift = Shift_3 ;
		{

#ifdef MR_MERCURY_IS_64_BITS
    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned word_x = (MR_Unsigned) TermX;
    MR_Unsigned word_y = (MR_Unsigned) TermY;
    int32_t value_x =
        (int32_t) ((word_x >> Shift) & ((INT64_C(1) << 32) - 1));
    int32_t value_y =
        (int32_t) ((word_y >> Shift) & ((INT64_C(1) << 32) - 1));
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }
#else
    MR_fatal_error("compare_local_int32_bitfields called on "
        "non-64-bit system");
#endif


		;}
#undef MR_PROC_LABEL
	*Result_4  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_local_int16_bitfields_4_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Shift_3,
  MR_Word * Result_4)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_local_int16_bitfields_4_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Shift;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Shift = Shift_3 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned word_x = (MR_Unsigned) TermX;
    MR_Unsigned word_y = (MR_Unsigned) TermY;
    int16_t value_x = (int16_t) ((word_x >> Shift) & ((1 << 16) - 1));
    int16_t value_y = (int16_t) ((word_y >> Shift) & ((1 << 16) - 1));
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }


		;}
#undef MR_PROC_LABEL
	*Result_4  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_local_int8_bitfields_4_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Shift_3,
  MR_Word * Result_4)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_local_int8_bitfields_4_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Shift;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Shift = Shift_3 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned word_x = (MR_Unsigned) TermX;
    MR_Unsigned word_y = (MR_Unsigned) TermY;
    int8_t value_x = (int8_t) ((word_x >> Shift) & ((1 << 8) - 1));
    int8_t value_y = (int8_t) ((word_y >> Shift) & ((1 << 8) - 1));
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }


		;}
#undef MR_PROC_LABEL
	*Result_4  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_local_uint_bitfields_5_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Shift_3,
  MR_Integer NumBits_4,
  MR_Word * Result_5)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_local_uint_bitfields_5_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Shift;
	MR_Integer NumBits;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Shift = Shift_3 ;
	NumBits = NumBits_4 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned word_x = (MR_Unsigned) TermX;
    MR_Unsigned word_y = (MR_Unsigned) TermY;
    MR_Unsigned value_x = ((word_x >> Shift) & ((1 << NumBits) - 1));
    MR_Unsigned value_y = ((word_y >> Shift) & ((1 << NumBits) - 1));
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }


		;}
#undef MR_PROC_LABEL
	*Result_5  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_local_uint_words_3_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Word * Result_3)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_local_uint_words_3_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned value_x = (MR_Unsigned) TermX;
    MR_Unsigned value_y = (MR_Unsigned) TermY;
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }


		;}
#undef MR_PROC_LABEL
	*Result_3  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_remote_int32_bitfields_6_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Ptag_3,
  MR_Integer CellOffset_4,
  MR_Integer Shift_5,
  MR_Word * Result_6)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_remote_int32_bitfields_6_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Ptag;
	MR_Integer CellOffset;
	MR_Integer Shift;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Ptag = Ptag_3 ;
	CellOffset = CellOffset_4 ;
	Shift = Shift_5 ;
		{

#ifdef MR_MERCURY_IS_64_BITS
    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned *cell_x;
    MR_Unsigned *cell_y;
    cell_x = (MR_Unsigned *) (((MR_Unsigned) TermX) - (MR_Unsigned) Ptag);
    cell_y = (MR_Unsigned *) (((MR_Unsigned) TermY) - (MR_Unsigned) Ptag);
    MR_Unsigned word_x = cell_x[CellOffset];
    MR_Unsigned word_y = cell_y[CellOffset];
    int32_t value_x =
        (int32_t) ((word_x >> Shift) & ((INT64_C(1) << 32) - 1));
    int32_t value_y =
        (int32_t) ((word_y >> Shift) & ((INT64_C(1) << 32) - 1));
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }
#else
    MR_fatal_error("compare_remote_int32_bitfields called on "
        "non-64-bit system");
#endif


		;}
#undef MR_PROC_LABEL
	*Result_6  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_remote_int16_bitfields_6_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Ptag_3,
  MR_Integer CellOffset_4,
  MR_Integer Shift_5,
  MR_Word * Result_6)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_remote_int16_bitfields_6_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Ptag;
	MR_Integer CellOffset;
	MR_Integer Shift;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Ptag = Ptag_3 ;
	CellOffset = CellOffset_4 ;
	Shift = Shift_5 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned *cell_x;
    MR_Unsigned *cell_y;
    cell_x = (MR_Unsigned *) (((MR_Unsigned) TermX) - (MR_Unsigned) Ptag);
    cell_y = (MR_Unsigned *) (((MR_Unsigned) TermY) - (MR_Unsigned) Ptag);
    MR_Unsigned word_x = cell_x[CellOffset];
    MR_Unsigned word_y = cell_y[CellOffset];
    int16_t value_x = (int16_t) ((word_x >> Shift) & ((1 << 16) - 1));
    int16_t value_y = (int16_t) ((word_y >> Shift) & ((1 << 16) - 1));
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }


		;}
#undef MR_PROC_LABEL
	*Result_6  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_remote_int8_bitfields_6_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Ptag_3,
  MR_Integer CellOffset_4,
  MR_Integer Shift_5,
  MR_Word * Result_6)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_remote_int8_bitfields_6_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Ptag;
	MR_Integer CellOffset;
	MR_Integer Shift;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Ptag = Ptag_3 ;
	CellOffset = CellOffset_4 ;
	Shift = Shift_5 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned *cell_x;
    MR_Unsigned *cell_y;
    cell_x = (MR_Unsigned *) (((MR_Unsigned) TermX) - (MR_Unsigned) Ptag);
    cell_y = (MR_Unsigned *) (((MR_Unsigned) TermY) - (MR_Unsigned) Ptag);
    MR_Unsigned word_x = cell_x[CellOffset];
    MR_Unsigned word_y = cell_y[CellOffset];
    int8_t value_x = (int8_t) ((word_x >> Shift) & ((1 << 8) - 1));
    int8_t value_y = (int8_t) ((word_y >> Shift) & ((1 << 8) - 1));
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }


		;}
#undef MR_PROC_LABEL
	*Result_6  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_remote_uint_bitfields_7_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Ptag_3,
  MR_Integer CellOffset_4,
  MR_Integer Shift_5,
  MR_Integer NumBits_6,
  MR_Word * Result_7)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_remote_uint_bitfields_7_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Ptag;
	MR_Integer CellOffset;
	MR_Integer Shift;
	MR_Integer NumBits;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Ptag = Ptag_3 ;
	CellOffset = CellOffset_4 ;
	Shift = Shift_5 ;
	NumBits = NumBits_6 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned *cell_x;
    MR_Unsigned *cell_y;
    cell_x = (MR_Unsigned *) (((MR_Unsigned) TermX) - (MR_Unsigned) Ptag);
    cell_y = (MR_Unsigned *) (((MR_Unsigned) TermY) - (MR_Unsigned) Ptag);
    MR_Unsigned word_x = cell_x[CellOffset];
    MR_Unsigned word_y = cell_y[CellOffset];
    MR_Unsigned value_x = ((word_x >> Shift) & ((1 << NumBits) - 1));
    MR_Unsigned value_y = ((word_y >> Shift) & ((1 << NumBits) - 1));
    if (value_x < value_y) {
        Result = MR_COMPARE_LESS;
    } else if (value_x > value_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }


		;}
#undef MR_PROC_LABEL
	*Result_7  = Result;
}
}

void MR_CALL 
mercury__private_builtin__compare_remote_uint_words_5_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Ptag_3,
  MR_Integer CellOffset_4,
  MR_Word * Result_5)
{
{
#define MR_PROC_LABEL mercury__private_builtin__compare_remote_uint_words_5_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Ptag;
	MR_Integer CellOffset;
	MR_Word Result;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Ptag = Ptag_3 ;
	CellOffset = CellOffset_4 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned *cell_x;
    MR_Unsigned *cell_y;
    cell_x = (MR_Unsigned *) (((MR_Unsigned) TermX) - (MR_Unsigned) Ptag);
    cell_y = (MR_Unsigned *) (((MR_Unsigned) TermY) - (MR_Unsigned) Ptag);
    MR_Unsigned word_x = cell_x[CellOffset];
    MR_Unsigned word_y = cell_y[CellOffset];
    if (word_x < word_y) {
        Result = MR_COMPARE_LESS;
    } else if (word_x > word_y) {
        Result = MR_COMPARE_GREATER;
    } else {
        Result = MR_COMPARE_EQUAL;
    }


		;}
#undef MR_PROC_LABEL
	*Result_5  = Result;
}
}

MR_bool MR_CALL 
mercury__private_builtin__unify_remote_arg_words_4_p_0(
  MR_Box TermX_1,
  MR_Box TermY_2,
  MR_Integer Ptag_3,
  MR_Integer CellOffset_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__unify_remote_arg_words_4_p_0

	MR_Word TermX;
	MR_Word TermY;
	MR_Integer Ptag;
	MR_Integer CellOffset;
	MR_bool SUCCESS_INDICATOR;

	TermX = (MR_Word) TermX_1 ;
	TermY = (MR_Word) TermY_2 ;
	Ptag = Ptag_3 ;
	CellOffset = CellOffset_4 ;
		{

    // All uses of this predicate should override the body,
    // but just in case they don't ...
    MR_Unsigned *cell_x;
    MR_Unsigned *cell_y;
    cell_x = (MR_Unsigned *) (((MR_Unsigned) TermX) - (MR_Unsigned) Ptag);
    cell_y = (MR_Unsigned *) (((MR_Unsigned) TermY) - (MR_Unsigned) Ptag);
    MR_Unsigned word_x = cell_x[CellOffset];
    MR_Unsigned word_y = cell_y[CellOffset];
    SUCCESS_INDICATOR = (word_x == word_y);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    /* All uses of this predicate should override the body. */
    MR_fatal_error("trace_evaluate_runtime_condition called");


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__private_builtin__nyi_foreign_type_compare_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * Result_4,
  MR_Box HeadVar__2_5,
  MR_Box HeadVar__3_6)
{
  mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(Result_4);
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String Var_9;
    MR_String Var_11;
    MR_String Var_12;

    mercury__string__append_3_p_2((MR_String) " not implemented\n", (MR_String) "for this target language (or compiler back-end).", &Var_12);
    mercury__string__append_3_p_2((MR_String) "compare for foreign types", Var_12, &Var_11);
    mercury__string__append_3_p_2((MR_String) "sorry, ", Var_11, &Var_9);
    {
      mercury__require__error_1_p_0(Var_9);
      return;
    }
  }
  else
    *Result_4 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__private_builtin__nyi_foreign_type_unify_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_3,
  MR_Box HeadVar__2_4)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String Var_7;
    MR_String Var_9;
    MR_String Var_10;

    mercury__string__append_3_p_2((MR_String) " not implemented\n", (MR_String) "for this target language (or compiler back-end).", &Var_10);
    mercury__string__append_3_p_2((MR_String) "unify for foreign types", Var_10, &Var_9);
    mercury__string__append_3_p_2((MR_String) "sorry, ", Var_9, &Var_7);
    mercury__require__error_1_p_0(Var_7);
    succeeded = MR_TRUE;
  }
  else
  {
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

void MR_CALL 
mercury__private_builtin__unused_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__unused_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      mercury__require__error_1_p_0((MR_String) "attempted use of dead predicate");
      return;
    }
}

void MR_CALL 
mercury__private_builtin__store_at_ref_impure_2_p_0(
  MR_Box * HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  *HeadVar__1_1 = HeadVar__2_2;
}

void MR_CALL 
mercury__private_builtin__unsafe_type_cast_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  *HeadVar__2_2 = HeadVar__1_1;
}

void MR_CALL 
mercury__private_builtin__restore_hp_1_p_0(
  MR_Word SavedHeapPointer_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__restore_hp_1_p_0

	MR_Word SavedHeapPointer;

	SavedHeapPointer = SavedHeapPointer_1 ;
		{

#ifndef MR_CONSERVATIVE_GC
    MR_restore_hp(SavedHeapPointer);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__mark_hp_1_p_0(
  MR_Word * SavedHeapPointer_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__mark_hp_1_p_0

	MR_Word SavedHeapPointer;

		{

#ifndef MR_CONSERVATIVE_GC
    MR_mark_hp(SavedHeapPointer);
#else
    // We can't do heap reclamation with conservative GC.
    SavedHeapPointer = 0;
#endif


		;}
#undef MR_PROC_LABEL
	*SavedHeapPointer_1  = SavedHeapPointer;
}
}

void MR_CALL 
mercury__private_builtin__gc_trace_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word HeadVar__1_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__gc_trace_1_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Pointer;

	TypeInfo_for_T = TypeInfo_for_T_2 ;
	Pointer = HeadVar__1_1 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

#ifdef MR_NATIVE_GC
    * (MR_Word *) Pointer =
        MR_agc_deep_copy(* (MR_Word *) Pointer, (MR_TypeInfo) TypeInfo_for_T,
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_min),
            MR_ENGINE(MR_eng_heap_zone2->MR_zone_hardmax));
#else
    MR_fatal_error("private_builtin.gc_trace/2: "
        "called when accurate GC not enabled");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__free_heap_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Box HeadVar__1_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__free_heap_1_p_0

	MR_Word Val;

	Val = (MR_Word) HeadVar__1_1 ;
		{

    MR_free_heap((void *) Val);


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__prune_tickets_to_1_p_0(
  MR_Word TicketCounter_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__prune_tickets_to_1_p_0

	MR_Word TicketCounter;

	TicketCounter = TicketCounter_1 ;
		{

#ifdef MR_USE_TRAIL
    MR_prune_tickets_to(TicketCounter);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__mark_ticket_stack_1_p_0(
  MR_Word * TicketCounter_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__mark_ticket_stack_1_p_0

	MR_Word TicketCounter;

		{

#ifdef MR_USE_TRAIL
    MR_mark_ticket_stack(TicketCounter);
#else
    TicketCounter = 0;
#endif


		;}
#undef MR_PROC_LABEL
	*TicketCounter_1  = TicketCounter;
}
}

void MR_CALL 
mercury__private_builtin__prune_ticket_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__private_builtin__prune_ticket_0_p_0


		{

#ifdef MR_USE_TRAIL
    MR_prune_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__discard_ticket_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__private_builtin__discard_ticket_0_p_0


		{

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__reset_ticket_solve_1_p_0(
  MR_Word Ticket_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_solve_1_p_0

	MR_Word Ticket;

	Ticket = Ticket_1 ;
		{

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__reset_ticket_commit_1_p_0(
  MR_Word Ticket_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_commit_1_p_0

	MR_Word Ticket;

	Ticket = Ticket_1 ;
		{

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_commit);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__reset_ticket_undo_1_p_0(
  MR_Word Ticket_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_undo_1_p_0

	MR_Word Ticket;

	Ticket = Ticket_1 ;
		{

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_undo);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__private_builtin__store_ticket_1_p_0(
  MR_Word * Ticket_1)
{
{
#define MR_PROC_LABEL mercury__private_builtin__store_ticket_1_p_0

	MR_Word Ticket;

		{

#ifdef MR_USE_TRAIL
    MR_store_ticket(Ticket);
#else
    Ticket = 0;
#endif


		;}
#undef MR_PROC_LABEL
	*Ticket_1  = Ticket;
}
}

void MR_CALL 
mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0(
  MR_Word TypeClassInfo0_1,
  MR_Integer Index_2,
  MR_Word * TypeClassInfo_3)
{
{
#define MR_PROC_LABEL mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 = TypeClassInfo0_1 ;
	Index = Index_2 ;
		{

    TypeClassInfo =
        MR_typeclass_info_arg_typeclass_info(TypeClassInfo0, Index);


		;}
#undef MR_PROC_LABEL
	*TypeClassInfo_3  = TypeClassInfo;
}
}

void MR_CALL 
mercury__private_builtin__superclass_from_typeclass_info_3_p_0(
  MR_Word TypeClassInfo0_1,
  MR_Integer Index_2,
  MR_Word * TypeClassInfo_3)
{
{
#define MR_PROC_LABEL mercury__private_builtin__superclass_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 = TypeClassInfo0_1 ;
	Index = Index_2 ;
		{

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);


		;}
#undef MR_PROC_LABEL
	*TypeClassInfo_3  = TypeClassInfo;
}
}

void MR_CALL 
mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0(
  MR_Word TypeClassInfo_1,
  MR_Integer Index_2,
  MR_Word * TypeInfo_3)
{
{
#define MR_PROC_LABEL mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_1 ;
	Index = Index_2 ;
		{

    TypeInfo = MR_typeclass_info_instance_tvar_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	*TypeInfo_3  = TypeInfo;
}
}

void MR_CALL 
mercury__private_builtin__type_info_from_typeclass_info_3_p_0(
  MR_Word TypeClassInfo_1,
  MR_Integer Index_2,
  MR_Word * TypeInfo_3)
{
{
#define MR_PROC_LABEL mercury__private_builtin__type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_1 ;
	Index = Index_2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	*TypeInfo_3  = TypeInfo;
}
}

MR_bool MR_CALL 
mercury__private_builtin__pointer_equal_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded = (((MR_Word) HeadVar__1_1) == ((MR_Word) HeadVar__2_2));

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__typed_compare_3_p_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word * R_4,
  MR_Box X_5,
  MR_Box Y_6)
{
  MR_bool succeeded;
  MR_Word R0_7;
  MR_Word Var_9;
  MR_Word Var_10;

{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T1_11 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_9  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T2_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_10  = TypeInfo;
}
  mercury__type_desc____Compare____type_desc_0_0(&R0_7, Var_9, Var_10);
  succeeded = (R0_7 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Box Z_8 = X_5;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T2_12, R_4, Z_8, Y_6);
  }
  else
    *R_4 = R0_7;
}

MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_1(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Box X_3,
  MR_Box * Y_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_9;

{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T1_6 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_5  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T2_7 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_9  = TypeInfo;
}
  succeeded = mercury__type_desc____Unify____type_desc_0_0(Var_5, Var_9);
  if (succeeded)
  {
    *Y_4 = X_3;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Box X_3,
  MR_Box Y_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_10;
  MR_Box Var_11;

{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T1_6 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_5  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T2_7 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_10  = TypeInfo;
}
  succeeded = mercury__type_desc____Unify____type_desc_0_0(Var_5, Var_10);
  if (succeeded)
  {
    Var_11 = X_3;
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_7, Y_4, Var_11);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_lt_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_String Var_4;
  MR_String Var_6;
  MR_String Var_7;

  mercury__string__append_3_p_2((MR_String) " not implemented\n", (MR_String) "for this target language (or compiler back-end).", &Var_7);
  mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_lt\'/2", Var_7, &Var_6);
  mercury__string__append_3_p_2((MR_String) "sorry, ", Var_6, &Var_4);
  mercury__require__error_1_p_0(Var_4);
  return MR_TRUE;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_eq_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_String Var_4;
  MR_String Var_6;
  MR_String Var_7;

  mercury__string__append_3_p_2((MR_String) " not implemented\n", (MR_String) "for this target language (or compiler back-end).", &Var_7);
  mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_eq\'/2", Var_7, &Var_6);
  mercury__string__append_3_p_2((MR_String) "sorry, ", Var_6, &Var_4);
  mercury__require__error_1_p_0(Var_4);
  return MR_TRUE;
}

MR_bool MR_CALL 
mercury__private_builtin__unsigned_le_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded = (((MR_Unsigned) HeadVar__1_1) <= ((MR_Unsigned) HeadVar__2_2));

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__unsigned_lt_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded = (((MR_Unsigned) HeadVar__1_1) < ((MR_Unsigned) HeadVar__2_2));

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint64_gt_2_p_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint64_lt_2_p_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint32_gt_2_p_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint32_lt_2_p_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint16_gt_2_p_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint16_lt_2_p_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint8_gt_2_p_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint8_lt_2_p_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint_gt_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_uint_lt_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int64_gt_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int64_lt_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int32_gt_2_p_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int32_lt_2_p_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int16_gt_2_p_0(
  int16_t HeadVar__1_1,
  int16_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int16_lt_2_p_0(
  int16_t HeadVar__1_1,
  int16_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int8_gt_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int8_lt_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int_gt_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int_lt_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__compare_error_0_p_0(void)
{
  {
    mercury__require__error_1_p_0((MR_String) "internal error in compare/3");
    return;
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_solver_type_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * Res_4,
  MR_Box _X_5,
  MR_Box _Y_6)
{
  mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(Res_4);
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
  MR_Word * Res_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      mercury__require__error_1_p_0((MR_String) "call to generated compare/3 for solver type");
      return;
    }
  else
    *Res_4 = (MR_Integer) 1;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_solver_type_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box _X_3,
  MR_Box _Y_4)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    mercury__require__error_1_p_0((MR_String) "call to generated unify/2 for solver type");
    succeeded = MR_TRUE;
  }
  else
  {
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word * Res_4,
  MR_Box X_5,
  MR_Box _Y_6)
{
  mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(TypeInfo_for_T_13, Res_4);
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word * Res_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String Message_7;
    MR_String Var_9;
    MR_String Var_10;
    MR_Word Var_11;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_13 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_11  = TypeInfo;
}
    Var_10 = mercury__type_desc__type_name_1_f_0(Var_11);
    mercury__string__append_3_p_2(Var_10, (MR_String) "\'", &Var_9);
    mercury__string__append_3_p_2((MR_String) "call to compare/3 for non-canonical type \140", Var_9, &Message_7);
    {
      mercury__require__error_1_p_0(Message_7);
      return;
    }
  }
  else
    *Res_4 = (MR_Integer) 1;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_tuple_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * Res_4,
  MR_Box HeadVar__2_5,
  MR_Box HeadVar__3_6)
{
  mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(Res_4);
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
  MR_Word * Res_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      mercury__require__error_1_p_0((MR_String) "builtin_compare_tuple called");
      return;
    }
  else
    *Res_4 = (MR_Integer) 1;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_tuple_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_3,
  MR_Box HeadVar__2_4)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    mercury__require__error_1_p_0((MR_String) "builtin_unify_tuple called");
    succeeded = MR_TRUE;
  }
  else
  {
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_pred_3_p_0(
  MR_Word * Result_4,
  MR_Word _X_5,
  MR_Word _Y_6)
{
  mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(Result_4);
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      mercury__require__error_1_p_0((MR_String) "attempted higher-order comparison");
      return;
    }
  else
    *Result_4 = (MR_Integer) 1;
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_pred_2_p_0(
  MR_Word _X_3,
  MR_Word _Y_4)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0();
  return succeeded;
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    mercury__require__error_1_p_0((MR_String) "attempted higher-order unification");
    succeeded = MR_TRUE;
  }
  else
  {
{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_float_3_p_0(
  MR_Word * R_4,
  MR_Float F1_5,
  MR_Float F2_6)
{
  MR_bool succeeded = (F1_5 < F2_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (F1_5 > F2_6);
    if (succeeded)
      *R_4 = (MR_Integer) 2;
    else
      *R_4 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_float_2_p_0(
  MR_Float F_3,
  MR_Float F_2)
{
  MR_bool succeeded = (F_2 == F_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_string_3_p_0(
  MR_Word * R_4,
  MR_String S1_5,
  MR_String S2_6)
{
  MR_bool succeeded;
  MR_Integer Res_7;

{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_string_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = S1_5 ;
	S2 = S2_6 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Res_7  = Res;
}
  succeeded = (Res_7 < (MR_Integer) 0);
  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (Res_7 == (MR_Integer) 0);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_string_2_p_0(
  MR_String S_3,
  MR_String S_2)
{
  MR_bool succeeded = (strcmp(S_2, S_3) == 0);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_character_3_p_0(
  MR_Word * R_4,
  MR_Char X_5,
  MR_Char Y_6)
{
  MR_bool succeeded;
  MR_Integer XI_7;
  MR_Integer YI_8;

{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = X_5 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	XI_7  = Int;
}
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Y_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	YI_8  = Int;
}
  succeeded = (XI_7 < YI_8);
  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (XI_7 == YI_8);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_character_2_p_0(
  MR_Char C_3,
  MR_Char C_2)
{
  MR_bool succeeded = (C_2 == C_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_uint64_3_p_0(
  MR_Word * R_4,
  uint64_t X_5,
  uint64_t Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_uint64_2_p_0(
  uint64_t X_3,
  uint64_t X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_int64_3_p_0(
  MR_Word * R_4,
  int64_t X_5,
  int64_t Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int64_2_p_0(
  int64_t X_3,
  int64_t X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_uint32_3_p_0(
  MR_Word * R_4,
  uint32_t X_5,
  uint32_t Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_uint32_2_p_0(
  uint32_t X_3,
  uint32_t X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_int32_3_p_0(
  MR_Word * R_4,
  int32_t X_5,
  int32_t Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int32_2_p_0(
  int32_t X_3,
  int32_t X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_uint16_3_p_0(
  MR_Word * R_4,
  uint16_t X_5,
  uint16_t Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_uint16_2_p_0(
  uint16_t X_3,
  uint16_t X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_int16_3_p_0(
  MR_Word * R_4,
  int16_t X_5,
  int16_t Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int16_2_p_0(
  int16_t X_3,
  int16_t X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_uint8_3_p_0(
  MR_Word * R_4,
  uint8_t X_5,
  uint8_t Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_uint8_2_p_0(
  uint8_t X_3,
  uint8_t X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_int8_3_p_0(
  MR_Word * R_4,
  int8_t X_5,
  int8_t Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int8_2_p_0(
  int8_t X_3,
  int8_t X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_uint_3_p_0(
  MR_Word * R_4,
  MR_Unsigned X_5,
  MR_Unsigned Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_uint_2_p_0(
  MR_Unsigned X_3,
  MR_Unsigned X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

void MR_CALL 
mercury__private_builtin__builtin_compare_int_3_p_0(
  MR_Word * R_4,
  MR_Integer X_5,
  MR_Integer Y_6)
{
  MR_bool succeeded = (X_5 < Y_6);

  if (succeeded)
    *R_4 = (MR_Integer) 1;
  else
  {
    succeeded = (X_5 == Y_6);
    if (succeeded)
      *R_4 = (MR_Integer) 0;
    else
      *R_4 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int_2_p_0(
  MR_Integer X_3,
  MR_Integer X_2)
{
  MR_bool succeeded = (X_2 == X_3);

  return succeeded;
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin____Unify____float_box_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__private_builtin____Compare____float_box_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin____Unify____mutvar_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__private_builtin____Compare____mutvar_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin____Unify____sample_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__private_builtin____Compare____sample_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin____Unify____sample_typeclass_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__private_builtin____Compare____sample_typeclass_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin____Unify____store_at_ref_type_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Box *) (wrapper_arg_2)), ((MR_Box *) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__private_builtin____Compare____store_at_ref_type_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Box *) (wrapper_arg_3)), ((MR_Box *) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin____Unify____ticket_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__private_builtin____Compare____ticket_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin____Unify____ticket_counter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__private_builtin____Compare____ticket_counter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__private_builtin__init(void)
{
}

void mercury__private_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_float_box_0);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_mutvar_1);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_sample_type_info_0);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_sample_typeclass_info_0);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_store_at_ref_type_1);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_ticket_0);
	MR_register_type_ctor_info(&mercury__private_builtin__private_builtin__type_ctor_info_ticket_counter_0);
}

void mercury__private_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__private_builtin__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module private_builtin.
