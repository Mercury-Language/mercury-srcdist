/*
** Automatically generated from `private_builtin.m'
** by the Mercury compiler,
** version DEV
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module private_builtin. */
/* :- implementation. */

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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
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
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3);

static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box * mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3,
  MR_Box mercury__private_builtin__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3);

static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box * mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3,
  MR_Box mercury__private_builtin__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2);

static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__private_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__private_builtin_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__private_builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__private_builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__private_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__private_builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__private_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__private_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
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
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"
#line 1637 "private_builtin.m"


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




static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_float_box_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 = {
  (MR_String) "float_box",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_float_box_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____float_box_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____float_box_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "float_box",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_float_box_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_float_box_0
};

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_mutvar_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_mutvar_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____mutvar_1_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____mutvar_1_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "mutvar",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_mutvar_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_mutvar_1
};

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 = {
  (MR_String) "sample_type_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_sample_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____sample_type_info_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____sample_type_info_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "sample_type_info",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_sample_type_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_sample_type_info_0
};

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 = {
  (MR_String) "sample_typeclass_info",
  (MR_PseudoTypeInfo) &mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_sample_typeclass_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "sample_typeclass_info",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_sample_typeclass_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_sample_typeclass_info_0
};

static const MR_Integer mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 = {
  (MR_String) "store_at_ref_type",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_store_at_ref_type_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____store_at_ref_type_1_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____store_at_ref_type_1_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "store_at_ref_type",
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 },
  {     &mercury__private_builtin__private_builtin__notag_functor_desc_store_at_ref_type_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__private_builtin__private_builtin__functor_number_map_store_at_ref_type_1
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_ticket_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_TICKET,
  ((MR_Box) (mercury__private_builtin____Unify____ticket_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____ticket_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "ticket",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__private_builtin__private_builtin__type_ctor_info_ticket_counter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__private_builtin____Unify____ticket_counter_0_0_10001)),
  ((MR_Box) (mercury__private_builtin____Compare____ticket_counter_0_0_10001)),
  (MR_String) "private_builtin",
  (MR_String) "ticket_counter",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____float_box_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
    return mercury__private_builtin__succeeded;
  }
}

static void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3)
{
  {
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

    {
      mercury__private_builtin____Compare____float_box_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
    return mercury__private_builtin__succeeded;
  }
}

static void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box * mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3,
  MR_Box mercury__private_builtin__wrapper_arg_4)
{
  {
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

    {
      mercury__private_builtin____Compare____mutvar_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_3), ((MR_Word) mercury__private_builtin__wrapper_arg_4));
    }
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_type_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
    return mercury__private_builtin__succeeded;
  }
}

static void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3)
{
  {
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

    {
      mercury__private_builtin____Compare____sample_type_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____sample_typeclass_info_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
    return mercury__private_builtin__succeeded;
  }
}

static void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3)
{
  {
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

    {
      mercury__private_builtin____Compare____sample_typeclass_info_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Box *) mercury__private_builtin__wrapper_arg_2), ((MR_Box *) mercury__private_builtin__wrapper_arg_3));
    }
    return mercury__private_builtin__succeeded;
  }
}

static void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box * mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3,
  MR_Box mercury__private_builtin__wrapper_arg_4)
{
  {
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

    {
      mercury__private_builtin____Compare____store_at_ref_type_1_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), &mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Box *) mercury__private_builtin__wrapper_arg_3), ((MR_Box *) mercury__private_builtin__wrapper_arg_4));
    }
    *mercury__private_builtin__wrapper_arg_2 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
    return mercury__private_builtin__succeeded;
  }
}

static void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3)
{
  {
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

    {
      mercury__private_builtin____Compare____ticket_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0_10001(
  MR_Box mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin____Unify____ticket_counter_0_0(((MR_Word) mercury__private_builtin__wrapper_arg_1), ((MR_Word) mercury__private_builtin__wrapper_arg_2));
    }
    return mercury__private_builtin__succeeded;
  }
}

static void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0_10001(
  MR_Box * mercury__private_builtin__wrapper_arg_1,
  MR_Box mercury__private_builtin__wrapper_arg_2,
  MR_Box mercury__private_builtin__wrapper_arg_3)
{
  {
    MR_Word mercury__private_builtin__conv0_HeadVar__1_1;

    {
      mercury__private_builtin____Compare____ticket_counter_0_0(&mercury__private_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__private_builtin__wrapper_arg_2), ((MR_Word) mercury__private_builtin__wrapper_arg_3));
    }
    *mercury__private_builtin__wrapper_arg_1 = ((MR_Box) (mercury__private_builtin__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    return (MR_Integer) 1200;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
{
  {
    return MR_FALSE;
  }
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

  }
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_110_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

  }
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_50_1_p_2(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

  }
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_49_1_p_1(void)
{
  {
    return MR_FALSE;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
{
  {
    return MR_FALSE;
  }
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
  MR_Word * mercury__private_builtin__Result_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        MR_String mercury__private_builtin__V_10_10;
        MR_String mercury__private_builtin__V_12_12;

        {
          mercury__string__append_3_p_2((MR_String) "compare for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_12_12);
        }
        {
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_12_12, &mercury__private_builtin__V_10_10);
        }
        {
          mercury__require__error_1_p_0(mercury__private_builtin__V_10_10);
          return;
        }
      }
    else
      *mercury__private_builtin__Result_4 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        MR_String mercury__private_builtin__V_8_8;
        MR_String mercury__private_builtin__V_10_10;

        {
          mercury__string__append_3_p_2((MR_String) "unify for foreign types", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_10_10);
        }
        {
          mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_10_10, &mercury__private_builtin__V_8_8);
        }
        {
          mercury__require__error_1_p_0(mercury__private_builtin__V_8_8);
        }
        mercury__private_builtin__succeeded = MR_TRUE;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
  MR_Word * mercury__private_builtin__Res_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "call to generated compare/3 for solver type");
          return;
        }
      }
    else
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "call to generated unify/2 for solver type");
        }
        mercury__private_builtin__succeeded = MR_TRUE;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_13,
  MR_Word * mercury__private_builtin__Res_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        MR_String mercury__private_builtin__Message_7;
        MR_String mercury__private_builtin__V_9_9;
        MR_String mercury__private_builtin__V_10_10;
        MR_Word mercury__private_builtin__V_11_11;
        MR_Box mercury__private_builtin__V_14_14;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_13 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_11_11  = TypeInfo;
}
        {
          mercury__private_builtin__V_10_10 = mercury__type_desc__type_name_1_f_0(mercury__private_builtin__V_11_11);
        }
        {
          mercury__string__append_3_p_2(mercury__private_builtin__V_10_10, (MR_String) "\'", &mercury__private_builtin__V_9_9);
        }
        {
          mercury__string__append_3_p_2((MR_String) "call to compare/3 for non-canonical type \140", mercury__private_builtin__V_9_9, &mercury__private_builtin__Message_7);
        }
        {
          mercury__require__error_1_p_0(mercury__private_builtin__Message_7);
          return;
        }
      }
    else
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
  }
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
  MR_Word * mercury__private_builtin__Res_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "builtin_compare_tuple called");
          return;
        }
      }
    else
      *mercury__private_builtin__Res_4 = (MR_Integer) 1;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "builtin_unify_tuple called");
        }
        mercury__private_builtin__succeeded = MR_TRUE;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mercury__private_builtin__Result_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "attempted higher-order comparison");
          return;
        }
      }
    else
      *mercury__private_builtin__Result_4 = (MR_Integer) 1;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "attempted higher-order unification");
        }
        mercury__private_builtin__succeeded = MR_TRUE;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin____Compare____typeclass_info_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____typeclass_info_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____type_info_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____type_info_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____type_ctor_info_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____type_ctor_info_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____ticket_counter_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_counter_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

    {
      mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin____Compare____ticket_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Word mercury__private_builtin__Cast_HeadVar1_4 = mercury__private_builtin__HeadVar__2_2;
    MR_Word mercury__private_builtin__Cast_HeadVar2_5 = mercury__private_builtin__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__Cast_HeadVar1_4, mercury__private_builtin__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____ticket_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Word mercury__private_builtin__Cast_HeadVar1_3 = mercury__private_builtin__HeadVar__1_1;
    MR_Word mercury__private_builtin__Cast_HeadVar2_4 = mercury__private_builtin__HeadVar__2_2;

    {
      mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__Cast_HeadVar1_3, mercury__private_builtin__Cast_HeadVar2_4);
    }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin____Compare____store_at_ref_type_1_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Box * mercury__private_builtin__HeadVar__2_2,
  MR_Box * mercury__private_builtin__HeadVar__3_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
        MR_Integer mercury__private_builtin__V_5_5 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
        if (mercury__private_builtin__succeeded)
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 == mercury__private_builtin__V_5_5);
            if (mercury__private_builtin__succeeded)
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____store_at_ref_type_1_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
  MR_Box * mercury__private_builtin__HeadVar__1_1,
  MR_Box * mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
    if (mercury__private_builtin__succeeded)
      mercury__private_builtin__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__private_builtin__V_3_3 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
        MR_Integer mercury__private_builtin__V_4_4 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin____Compare____sample_typeclass_info_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

        {
          mercury__private_builtin____Compare____typeclass_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_typeclass_info_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
    if (mercury__private_builtin__succeeded)
      mercury__private_builtin__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

        {
          mercury__private_builtin__succeeded = mercury__private_builtin____Unify____typeclass_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin____Compare____sample_type_info_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

        {
          mercury__private_builtin____Compare____type_info_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____sample_type_info_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
    if (mercury__private_builtin__succeeded)
      mercury__private_builtin__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

        {
          mercury__private_builtin__succeeded = mercury__private_builtin____Unify____type_info_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin____Compare____ref_1_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_4,
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____ref_1_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_3,
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____mutvar_1_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;
        MR_Word mercury__private_builtin__V_5_5 = (MR_Word) mercury__private_builtin__HeadVar__3_3;

        {
          mercury__builtin____Compare____c_pointer_0_0(mercury__private_builtin__HeadVar__1_1, mercury__private_builtin__V_4_4, mercury__private_builtin__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____mutvar_1_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_7,
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
    if (mercury__private_builtin__succeeded)
      mercury__private_builtin__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__private_builtin__V_3_3 = (MR_Word) mercury__private_builtin__HeadVar__1_1;
        MR_Word mercury__private_builtin__V_4_4 = (MR_Word) mercury__private_builtin__HeadVar__2_2;

        {
          mercury__private_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__private_builtin__V_3_3, mercury__private_builtin__V_4_4);
        }
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin____Compare____heap_pointer_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____heap_pointer_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2);

void MR_CALL 
mercury__private_builtin____Compare____float_box_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;
    MR_Integer mercury__private_builtin__CastY_7 = (MR_Integer) mercury__private_builtin__HeadVar__3_3;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_6 == mercury__private_builtin__CastY_7);
    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);
        MR_Float mercury__private_builtin__V_5_5 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__3_3);

        mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 < mercury__private_builtin__V_5_5);
        if (mercury__private_builtin__succeeded)
          *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__private_builtin__succeeded = (mercury__private_builtin__V_4_4 > mercury__private_builtin__V_5_5);
            if (mercury__private_builtin__succeeded)
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 2;
            else
              *mercury__private_builtin__HeadVar__1_1 = (MR_Integer) 0;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin____Unify____float_box_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__CastX_5 = (MR_Integer) mercury__private_builtin__HeadVar__1_1;
    MR_Integer mercury__private_builtin__CastY_6 = (MR_Integer) mercury__private_builtin__HeadVar__2_2;

    mercury__private_builtin__succeeded = (mercury__private_builtin__CastX_5 == mercury__private_builtin__CastY_6);
    if (mercury__private_builtin__succeeded)
      mercury__private_builtin__succeeded = MR_TRUE;
    else
      {
        MR_Float mercury__private_builtin__V_3_3 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__1_1);
        MR_Float mercury__private_builtin__V_4_4 = MR_unbox_float((MR_Box) mercury__private_builtin__HeadVar__2_2);

        mercury__private_builtin__succeeded = (mercury__private_builtin__V_3_3 == mercury__private_builtin__V_4_4);
      }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin____Compare____base_typeclass_info_0_0(
  MR_Word * mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2,
  MR_Word mercury__private_builtin__HeadVar__3_3);

MR_bool MR_CALL 
mercury__private_builtin____Unify____base_typeclass_info_0_0(
  MR_Word mercury__private_builtin__HeadVar__1_1,
  MR_Word mercury__private_builtin__HeadVar__2_2);

void MR_CALL 
mercury__private_builtin__semip_0_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

  }
}

void MR_CALL 
mercury__private_builtin__imp_0_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__imp_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__private_builtin__sorry_1_p_0(
  MR_String mercury__private_builtin__PredName_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_String mercury__private_builtin__V_3_3;
    MR_String mercury__private_builtin__V_5_5;

    {
      mercury__string__append_3_p_2(mercury__private_builtin__PredName_2, (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_5_5);
    }
    {
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_5_5, &mercury__private_builtin__V_3_3);
    }
    {
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
      return;
    }
  }
}

void MR_CALL 
mercury__private_builtin__no_clauses_1_p_0(
  MR_String mercury__private_builtin__PredName_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_String mercury__private_builtin__V_3_3;

    {
      mercury__string__append_3_p_2((MR_String) "no clauses for ", mercury__private_builtin__PredName_2, &mercury__private_builtin__V_3_3);
    }
    {
      mercury__require__error_1_p_0(mercury__private_builtin__V_3_3);
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__nonvar_1_p_2(
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
{
  {
    return MR_FALSE;
  }
}

void MR_CALL 
mercury__private_builtin__nonvar_1_p_1(
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
  MR_Box mercury__private_builtin__HeadVar__1_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

  }
}

void MR_CALL 
mercury__private_builtin__nonvar_1_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
  MR_Box mercury__private_builtin__HeadVar__1_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

  }
}

void MR_CALL 
mercury__private_builtin__var_1_p_2(
  MR_Word mercury__private_builtin__TypeInfo_for_T_5)
{
  {
    MR_bool mercury__private_builtin__succeeded;

  }
}

MR_bool MR_CALL 
mercury__private_builtin__var_1_p_1(
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
  MR_Box mercury__private_builtin__HeadVar__1_1)
{
  {
    return MR_FALSE;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__var_1_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_5,
  MR_Box mercury__private_builtin__HeadVar__1_1)
{
  {
    return MR_FALSE;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__trace_evaluate_runtime_condition_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    /* All uses of this predicate should override the body. */
    MR_fatal_error("trace_evaluate_runtime_condition called");


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__nyi_foreign_type_compare_3_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
  MR_Word * mercury__private_builtin__Result_4,
  MR_Box mercury__private_builtin__HeadVar__2_5,
  MR_Box mercury__private_builtin__HeadVar__3_6)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Result_4);
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__nyi_foreign_type_unify_2_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
  MR_Box mercury__private_builtin__HeadVar__1_3,
  MR_Box mercury__private_builtin__HeadVar__2_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_121_105_95_102_111_114_101_105_103_110_95_116_121_112_101_95_117_110_105_102_121_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__unused_0_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__unused_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__private_builtin__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__private_builtin__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "attempted use of dead predicate");
          return;
        }
      }
    else
      {
      }
  }
}

void MR_CALL 
mercury__private_builtin__store_at_ref_2_p_0(
  MR_Box * mercury__private_builtin__HeadVar__1_1,
  MR_Box mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;

  }
}

void MR_CALL 
mercury__private_builtin__store_at_ref_impure_2_p_0(
  MR_Box * mercury__private_builtin__HeadVar__1_1,
  MR_Box mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    *mercury__private_builtin__HeadVar__1_1 = mercury__private_builtin__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__private_builtin__unsafe_type_cast_2_p_0(
  MR_Box mercury__private_builtin__HeadVar__1_1,
  MR_Box * mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    *mercury__private_builtin__HeadVar__2_2 = mercury__private_builtin__HeadVar__1_1;
  }
}

void MR_CALL 
mercury__private_builtin__restore_hp_1_p_0(
  MR_Word mercury__private_builtin__SavedHeapPointer_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__restore_hp_1_p_0

	MR_Word SavedHeapPointer;

	SavedHeapPointer =  mercury__private_builtin__SavedHeapPointer_1 ;
		{

#ifndef MR_CONSERVATIVE_GC
    MR_restore_hp(SavedHeapPointer);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__private_builtin__mark_hp_1_p_0(
  MR_Word * mercury__private_builtin__SavedHeapPointer_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__mark_hp_1_p_0

	MR_Word SavedHeapPointer;

		{

#ifndef MR_CONSERVATIVE_GC
    MR_mark_hp(SavedHeapPointer);
#else
    /* We can't do heap reclamation with conservative GC. */
    SavedHeapPointer = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__SavedHeapPointer_1  = SavedHeapPointer;
}
  }
}

void MR_CALL 
mercury__private_builtin__gc_trace_1_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
  MR_Word mercury__private_builtin__HeadVar__1_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__gc_trace_1_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Pointer;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T_2 ;
	Pointer =  mercury__private_builtin__HeadVar__1_1 ;
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
}

void MR_CALL 
mercury__private_builtin__free_heap_1_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_2,
  MR_Box mercury__private_builtin__HeadVar__1_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Word mercury__private_builtin__TypeInfo_for_T_3;

{
#define MR_PROC_LABEL mercury__private_builtin__free_heap_1_p_0

	MR_Word Val;

	Val = (MR_Word) mercury__private_builtin__HeadVar__1_1 ;
		{

    MR_free_heap((void *) Val);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__private_builtin__prune_tickets_to_1_p_0(
  MR_Word mercury__private_builtin__TicketCounter_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__prune_tickets_to_1_p_0

	MR_Word TicketCounter;

	TicketCounter =  mercury__private_builtin__TicketCounter_1 ;
		{

#ifdef MR_USE_TRAIL
    MR_prune_tickets_to(TicketCounter);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__private_builtin__mark_ticket_stack_1_p_0(
  MR_Word * mercury__private_builtin__TicketCounter_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

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
	 *mercury__private_builtin__TicketCounter_1  = TicketCounter;
}
  }
}

void MR_CALL 
mercury__private_builtin__prune_ticket_0_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

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
}

void MR_CALL 
mercury__private_builtin__discard_ticket_0_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

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
}

void MR_CALL 
mercury__private_builtin__reset_ticket_solve_1_p_0(
  MR_Word mercury__private_builtin__Ticket_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_solve_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_solve);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__private_builtin__reset_ticket_commit_1_p_0(
  MR_Word mercury__private_builtin__Ticket_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_commit_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_commit);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__private_builtin__reset_ticket_undo_1_p_0(
  MR_Word mercury__private_builtin__Ticket_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__reset_ticket_undo_1_p_0

	MR_Word Ticket;

	Ticket =  mercury__private_builtin__Ticket_1 ;
		{

#ifdef MR_USE_TRAIL
    MR_reset_ticket(Ticket, MR_undo);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__private_builtin__store_ticket_1_p_0(
  MR_Word * mercury__private_builtin__Ticket_1)
{
  {
    MR_bool mercury__private_builtin__succeeded;

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
	 *mercury__private_builtin__Ticket_1  = Ticket;
}
  }
}

void MR_CALL 
mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0(
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
  MR_Integer mercury__private_builtin__Index_2,
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__instance_constraint_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{

    TypeClassInfo =
        MR_typeclass_info_arg_typeclass_info(TypeClassInfo0, Index);


		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
}
  }
}

void MR_CALL 
mercury__private_builtin__superclass_from_typeclass_info_3_p_0(
  MR_Word mercury__private_builtin__TypeClassInfo0_1,
  MR_Integer mercury__private_builtin__Index_2,
  MR_Word * mercury__private_builtin__TypeClassInfo_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__superclass_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__private_builtin__TypeClassInfo0_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);


		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeClassInfo_3  = TypeClassInfo;
}
  }
}

void MR_CALL 
mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0(
  MR_Word mercury__private_builtin__TypeClassInfo_1,
  MR_Integer mercury__private_builtin__Index_2,
  MR_Word * mercury__private_builtin__TypeInfo_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__unconstrained_type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{

    TypeInfo = MR_typeclass_info_instance_tvar_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
}
  }
}

void MR_CALL 
mercury__private_builtin__type_info_from_typeclass_info_3_p_0(
  MR_Word mercury__private_builtin__TypeClassInfo_1,
  MR_Integer mercury__private_builtin__Index_2,
  MR_Word * mercury__private_builtin__TypeInfo_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__type_info_from_typeclass_info_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__private_builtin__TypeClassInfo_1 ;
	Index =  mercury__private_builtin__Index_2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__TypeInfo_3  = TypeInfo;
}
  }
}

void MR_CALL 
mercury__private_builtin__builtin_strcmp_3_p_0(
  MR_Integer * mercury__private_builtin__Res_1,
  MR_String mercury__private_builtin__S1_2,
  MR_String mercury__private_builtin__S2_3)
{
  {
    MR_bool mercury__private_builtin__succeeded;

{
#define MR_PROC_LABEL mercury__private_builtin__builtin_strcmp_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_2 ;
	S2 =  mercury__private_builtin__S2_3 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 *mercury__private_builtin__Res_1  = Res;
}
  }
}

MR_bool MR_CALL 
mercury__private_builtin__pointer_equal_2_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_3,
  MR_Box mercury__private_builtin__HeadVar__1_1,
  MR_Box mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded = (((MR_Word) mercury__private_builtin__HeadVar__1_1) == ((MR_Word) mercury__private_builtin__HeadVar__2_2));

    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__typed_compare_3_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T1_11,
  MR_Word mercury__private_builtin__TypeInfo_for_T2_12,
  MR_Word * mercury__private_builtin__R_4,
  MR_Box mercury__private_builtin__X_5,
  MR_Box mercury__private_builtin__Y_6)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Word mercury__private_builtin__R0_7;
    MR_Word mercury__private_builtin__V_9_9;
    MR_Word mercury__private_builtin__V_10_10;
    MR_Box mercury__private_builtin__V_14_14;
    MR_Box mercury__private_builtin__V_15_15;

{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_11 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__private_builtin__typed_compare_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_12 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
}
    {
      mercury__type_desc____Compare____type_desc_0_0(&mercury__private_builtin__R0_7, mercury__private_builtin__V_9_9, mercury__private_builtin__V_10_10);
    }
    mercury__private_builtin__succeeded = (mercury__private_builtin__R0_7 == (MR_Integer) 0);
    if (mercury__private_builtin__succeeded)
      {
        MR_Box mercury__private_builtin__Z_8 = mercury__private_builtin__X_5;

        {
          mercury__builtin__compare_3_p_0(mercury__private_builtin__TypeInfo_for_T2_12, mercury__private_builtin__R_4, mercury__private_builtin__Z_8, mercury__private_builtin__Y_6);
        }
      }
    else
      *mercury__private_builtin__R_4 = mercury__private_builtin__R0_7;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_1(
  MR_Word mercury__private_builtin__TypeInfo_for_T1_6,
  MR_Word mercury__private_builtin__TypeInfo_for_T2_7,
  MR_Box mercury__private_builtin__X_3,
  MR_Box * mercury__private_builtin__Y_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Word mercury__private_builtin__V_5_5;
    MR_Word mercury__private_builtin__V_9_9;
    MR_Box mercury__private_builtin__V_8_8;

{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_6 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_5_5  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_7 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_9_9  = TypeInfo;
}
    {
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_9_9);
    }
    if (mercury__private_builtin__succeeded)
      {
        *mercury__private_builtin__Y_4 = mercury__private_builtin__X_3;
        mercury__private_builtin__succeeded = MR_TRUE;
      }
    return mercury__private_builtin__succeeded;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__typed_unify_2_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T1_6,
  MR_Word mercury__private_builtin__TypeInfo_for_T2_7,
  MR_Box mercury__private_builtin__X_3,
  MR_Box mercury__private_builtin__Y_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Word mercury__private_builtin__V_5_5;
    MR_Word mercury__private_builtin__V_10_10;
    MR_Box mercury__private_builtin__V_11_11;
    MR_Box mercury__private_builtin__V_8_8;
    MR_Box mercury__private_builtin__V_9_9;

{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T1_6 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_5_5  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__private_builtin__typed_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__private_builtin__TypeInfo_for_T2_7 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__V_10_10  = TypeInfo;
}
    {
      mercury__private_builtin__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__private_builtin__V_5_5, mercury__private_builtin__V_10_10);
    }
    if (mercury__private_builtin__succeeded)
      {
        mercury__private_builtin__V_11_11 = mercury__private_builtin__X_3;
        {
          mercury__private_builtin__succeeded = mercury__builtin__unify_2_p_0(mercury__private_builtin__TypeInfo_for_T2_7, mercury__private_builtin__Y_4, mercury__private_builtin__V_11_11);
        }
      }
    return mercury__private_builtin__succeeded;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_lt_2_p_0(
  MR_Box mercury__private_builtin__HeadVar__1_1,
  MR_Box mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_String mercury__private_builtin__V_5_5;
    MR_String mercury__private_builtin__V_7_7;

    {
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_lt\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
    {
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
    {
      mercury__require__error_1_p_0(mercury__private_builtin__V_5_5);
    }
    return MR_TRUE;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_compound_eq_2_p_0(
  MR_Box mercury__private_builtin__HeadVar__1_1,
  MR_Box mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_String mercury__private_builtin__V_5_5;
    MR_String mercury__private_builtin__V_7_7;

    {
      mercury__string__append_3_p_2((MR_String) "predicate \140private_builtin.builtin_compound_eq\'/2", (MR_String) " not implemented\nfor this target language (or compiler back-end).", &mercury__private_builtin__V_7_7);
    }
    {
      mercury__string__append_3_p_2((MR_String) "sorry, ", mercury__private_builtin__V_7_7, &mercury__private_builtin__V_5_5);
    }
    {
      mercury__require__error_1_p_0(mercury__private_builtin__V_5_5);
    }
    return MR_TRUE;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int_gt_2_p_0(
  MR_Integer mercury__private_builtin__HeadVar__1_1,
  MR_Integer mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__HeadVar__1_1 > mercury__private_builtin__HeadVar__2_2);

    return mercury__private_builtin__succeeded;
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_int_lt_2_p_0(
  MR_Integer mercury__private_builtin__HeadVar__1_1,
  MR_Integer mercury__private_builtin__HeadVar__2_2)
{
  {
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__HeadVar__1_1 < mercury__private_builtin__HeadVar__2_2);

    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__compare_error_0_p_0(void)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__require__error_1_p_0((MR_String) "internal error in compare/3");
      return;
    }
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_solver_type_3_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
  MR_Word * mercury__private_builtin__Res_4,
  MR_Box mercury__private_builtin___X_5,
  MR_Box mercury__private_builtin___Y_6)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_solver_type_2_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
  MR_Box mercury__private_builtin___X_3,
  MR_Box mercury__private_builtin___Y_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_115_111_108_118_101_114_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_13,
  MR_Word * mercury__private_builtin__Res_4,
  MR_Box mercury__private_builtin__X_5,
  MR_Box mercury__private_builtin___Y_6)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_110_111_110_95_99_97_110_111_110_105_99_97_108_95_116_121_112_101_95_95_91_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__TypeInfo_for_T_13, mercury__private_builtin__Res_4);
    }
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_tuple_3_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_8,
  MR_Word * mercury__private_builtin__Res_4,
  MR_Box mercury__private_builtin__HeadVar__2_5,
  MR_Box mercury__private_builtin__HeadVar__3_6)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__private_builtin__Res_4);
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_tuple_2_p_0(
  MR_Word mercury__private_builtin__TypeInfo_for_T_6,
  MR_Box mercury__private_builtin__HeadVar__1_3,
  MR_Box mercury__private_builtin__HeadVar__2_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_pred_3_p_0(
  MR_Word * mercury__private_builtin__Result_4,
  MR_Word mercury__private_builtin___X_5,
  MR_Word mercury__private_builtin___Y_6)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__private_builtin__Result_4);
    }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_pred_2_p_0(
  MR_Word mercury__private_builtin___X_3,
  MR_Word mercury__private_builtin___Y_4)
{
  {
    MR_bool mercury__private_builtin__succeeded;

    {
      mercury__private_builtin__succeeded = mercury__private_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_float_3_p_0(
  MR_Word * mercury__private_builtin__R_4,
  MR_Float mercury__private_builtin__F1_5,
  MR_Float mercury__private_builtin__F2_6)
{
  {
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 < mercury__private_builtin__F2_6);

    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
    else
      {
        mercury__private_builtin__succeeded = (mercury__private_builtin__F1_5 > mercury__private_builtin__F2_6);
        if (mercury__private_builtin__succeeded)
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
        else
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_float_2_p_0(
  MR_Float mercury__private_builtin__F_3,
  MR_Float mercury__private_builtin__F_2)
{
  {
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__F_2 == mercury__private_builtin__F_3);

    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_string_3_p_0(
  MR_Word * mercury__private_builtin__R_4,
  MR_String mercury__private_builtin__S1_5,
  MR_String mercury__private_builtin__S2_6)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__Res_7;

{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_string_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__private_builtin__S1_5 ;
	S2 =  mercury__private_builtin__S2_6 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__Res_7  = Res;
}
    mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 < (MR_Integer) 0);
    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
    else
      {
        mercury__private_builtin__succeeded = (mercury__private_builtin__Res_7 == (MR_Integer) 0);
        if (mercury__private_builtin__succeeded)
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
        else
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_string_2_p_0(
  MR_String mercury__private_builtin__S_3,
  MR_String mercury__private_builtin__S_2)
{
  {
    MR_bool mercury__private_builtin__succeeded = (strcmp(mercury__private_builtin__S_2, mercury__private_builtin__S_3) == 0);

    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_character_3_p_0(
  MR_Word * mercury__private_builtin__R_4,
  MR_Char mercury__private_builtin__X_5,
  MR_Char mercury__private_builtin__Y_6)
{
  {
    MR_bool mercury__private_builtin__succeeded;
    MR_Integer mercury__private_builtin__XI_7;
    MR_Integer mercury__private_builtin__YI_8;

{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__private_builtin__X_5 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__XI_7  = Int;
}
{
#define MR_PROC_LABEL mercury__private_builtin__builtin_compare_character_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__private_builtin__Y_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__private_builtin__YI_8  = Int;
}
    mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 < mercury__private_builtin__YI_8);
    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
    else
      {
        mercury__private_builtin__succeeded = (mercury__private_builtin__XI_7 == mercury__private_builtin__YI_8);
        if (mercury__private_builtin__succeeded)
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
        else
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_character_2_p_0(
  MR_Char mercury__private_builtin__C_3,
  MR_Char mercury__private_builtin__C_2)
{
  {
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__C_2 == mercury__private_builtin__C_3);

    return mercury__private_builtin__succeeded;
  }
}

void MR_CALL 
mercury__private_builtin__builtin_compare_int_3_p_0(
  MR_Word * mercury__private_builtin__R_4,
  MR_Integer mercury__private_builtin__X_5,
  MR_Integer mercury__private_builtin__Y_6)
{
  {
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 < mercury__private_builtin__Y_6);

    if (mercury__private_builtin__succeeded)
      *mercury__private_builtin__R_4 = (MR_Integer) 1;
    else
      {
        mercury__private_builtin__succeeded = (mercury__private_builtin__X_5 == mercury__private_builtin__Y_6);
        if (mercury__private_builtin__succeeded)
          *mercury__private_builtin__R_4 = (MR_Integer) 0;
        else
          *mercury__private_builtin__R_4 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__private_builtin__builtin_unify_int_2_p_0(
  MR_Integer mercury__private_builtin__X_3,
  MR_Integer mercury__private_builtin__X_2)
{
  {
    MR_bool mercury__private_builtin__succeeded = (mercury__private_builtin__X_2 == mercury__private_builtin__X_3);

    return mercury__private_builtin__succeeded;
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module private_builtin. */
