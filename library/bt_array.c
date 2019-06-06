/*
** Automatically generated from `bt_array.m'
** by the Mercury compiler,
** version rotd-2019-06-06
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


// :- module bt_array.
// :- implementation.

/*
INIT mercury__bt_array__init
ENDINIT
*/

#include "bt_array.mih"


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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "private_builtin.mih"
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
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_bt_array_1_0[3];

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0;

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0[1];

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1[1];

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_bt_array_1[1];

static const MR_Integer mercury__bt_array__bt_array__functor_number_map_bt_array_1[1];

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_1_1[3];

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1;

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0[1];

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1[1];

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1[2];

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_1[2];

static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_1[2];

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0[1];

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0;

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1[3];

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1;

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0[1];

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1[1];

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1[2];

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1[2];

static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1[2];

static MR_Integer MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__bt_array__insert_items_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Array_4);

static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6);

static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6);

static void MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer I_5,
  MR_Word RaList0_6,
  MR_Word Xs0_7,
  MR_Word * Xs_8);

static MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__bt_array_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bt_array_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bt_array_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__bt_array_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bt_array_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bt_array_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_2[0])),
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
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
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1 = {
  &mercury__bt_array__bt_array__type_ctor_info_ra_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_bt_array_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0 = {
  (MR_String) "bt_array",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__bt_array__bt_array__field_types_bt_array_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0
};

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_bt_array_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0
};

static const MR_Integer mercury__bt_array__bt_array__functor_number_map_bt_array_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_bt_array_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____bt_array_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____bt_array_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "bt_array",
  {     mercury__bt_array__bt_array__du_name_ordered_bt_array_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__bt_array__bt_array__functor_number_map_bt_array_1
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0 = {
  (MR_String) "nil",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1 = {
  &mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_1_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1 = {
  (MR_String) "cons",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__bt_array__bt_array__field_types_ra_list_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1
};

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_1[2] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1,
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0
};

static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_ra_list_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____ra_list_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____ra_list_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "ra_list",
  {     mercury__bt_array__bt_array__du_name_ordered_ra_list_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__bt_array__bt_array__functor_number_map_ra_list_1
};

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0 = {
  (MR_String) "leaf",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1 = {
  (MR_String) "node",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1
};

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1[2] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0,
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1
};

static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____ra_list_bintree_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____ra_list_bintree_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "ra_list_bintree",
  {     mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1
};

static MR_Integer MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__bt_array____Compare____ra_list_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_12;

        succeeded = (Var_28 < ArgY1_11);
        if (succeeded)
          SubResult1_12 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_28 == ArgY1_11);
          if (succeeded)
            SubResult1_12 = (MR_Integer) 0;
          else
            SubResult1_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult1_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_12;
        else
        {
          MR_Word SubResult2_15;

          mercury__bt_array____Compare____ra_list_bintree_1_0(TypeInfo_for_T_20, &SubResult2_15, Var_27, ArgY2_14);
          succeeded = (SubResult2_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_15;
          else
          {
            MR_Word next_value_of_HeadVar__2_2 = Var_26;
            MR_Word next_value_of_HeadVar__3_3 = ArgY3_17;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Box Var_29 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_24, HeadVar__1_1, Var_29, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_32 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_16;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_24, &SubResult1_16, Var_32, ArgY1_15);
        succeeded = (SubResult1_16 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_16;
        else
        {
          MR_Word SubResult2_19;

          mercury__bt_array____Compare____ra_list_bintree_1_0(TypeInfo_for_T_24, &SubResult2_19, Var_31, ArgY2_18);
          succeeded = (SubResult2_19 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_19;
          else
          {
            MR_Word next_value_of_HeadVar__2_2 = Var_30;
            MR_Word next_value_of_HeadVar__3_3 = ArgY3_21;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = mercury__bt_array____Unify____ra_list_1_0(TypeInfo_for_T_11, ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(TypeInfo_for_T_13, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_9;
            next_value_of_HeadVar__2_2 = ArgY3_10;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(TypeInfo_for_T_13, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_9;
            next_value_of_HeadVar__2_2 = ArgY3_10;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_update_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List0_5,
  MR_Integer I_6,
  MR_Box X_7,
  MR_Word * List_8)
{
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);

    if (succeeded)
      succeeded = mercury__bt_array__ra_list_update_2_4_p_0(TypeInfo_for_T_10, List0_5, I_6, X_7, List_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_lookup_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Integer I_4,
  MR_Word List_5,
  MR_Box * X_6)
{
  {
    MR_bool succeeded = (I_4 >= (MR_Integer) 0);

    if (succeeded)
      succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(TypeInfo_for_T_8, I_4, List_5, X_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_head_tail_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Box * X_2,
  MR_Word * Tail_3)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Integer Var_21;

    if (succeeded)
    {
      Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0))
      {
        *X_2 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
        *Tail_3 = Var_19;
      }
      else
      {
        MR_Word T1_10;
        MR_Word T2_11;
        MR_Integer Size2_14;
        MR_Word Var_17;

        *X_2 = (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0));
        T1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
        T2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 2))));
        Size2_14 = (Var_21 / (MR_Integer) 2);
        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Size2_14));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T2_11));
          MR_hl_field(MR_mktag(1), Var_17, 2) = ((MR_Box) (Var_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Tail_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Size2_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_10));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_17));
        }
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__bt_array__ra_list_cons_3_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Box X_4,
  MR_Word List0_5,
  MR_Word * List_6)
{
  {
    MR_bool succeeded = (List0_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Size1_7;
    MR_Word T1_8;
    MR_Integer Size2_9;
    MR_Word T2_10;
    MR_Word Rest_11;
    MR_Word Var_13;

    if (succeeded)
    {
      Size1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), List0_5, (MR_Integer) 0))));
      T1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List0_5, (MR_Integer) 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List0_5, (MR_Integer) 2))));
      succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Size2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))));
        T2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1))));
        Rest_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 2))));
        succeeded = (Size1_7 == Size2_9);
      }
    }
    if (succeeded)
    {
      MR_Integer NewSize_12;
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 1 + (MR_Unsigned) Size1_7);
      MR_Word Var_16;

      NewSize_12 = (MR_Integer) ((MR_Unsigned) Var_14 + (MR_Unsigned) Size2_9);
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = X_4;
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (T1_8));
        MR_hl_field(MR_mktag(1), Var_16, 2) = ((MR_Box) (T2_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *List_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewSize_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Rest_11));
      }
    }
    else
    {
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = X_4;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *List_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (List0_5));
      }
    }
  }
}

void MR_CALL 
mercury__bt_array__ra_list_nil_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mercury__bt_array__actual_position_4_p_0(
  MR_Integer Low_5,
  MR_Integer High_6,
  MR_Integer Index_7,
  MR_Integer * Pos_8)
{
  {
    MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) High_6 - (MR_Unsigned) Low_5);

    *Pos_8 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) Index_7);
  }
}

MR_Word MR_CALL 
mercury__bt_array__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Integer Index_5,
  MR_Word Array_6,
  MR_Box Value_7)
{
  {
    MR_Word HeadVar__4_4;

    mercury__bt_array__set_4_p_0(TypeInfo_for_T_8, Array_6, Index_5, Value_7, &HeadVar__4_4);
    return HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__bt_array__elem_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Integer Index_4,
  MR_Word Array_5)
{
  {
    MR_Box HeadVar__3_3;

    mercury__bt_array__lookup_3_p_0(TypeInfo_for_T_6, Array_5, Index_4, &HeadVar__3_3);
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__bt_array__bsearch_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word A_5,
  MR_Box SearchX_6,
  MR_Word Compare_7,
  MR_Integer * I_8)
{
  {
    MR_bool succeeded;
    MR_Integer Lo_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_5, (MR_Integer) 0))));
    MR_Integer Hi_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_5, (MR_Integer) 1))));

    succeeded = (Lo_9 <= Hi_10);
    if (succeeded)
      succeeded = mercury__bt_array__bsearch_loop_6_p_0(TypeInfo_for_T_11, A_5, Lo_9, Hi_10, SearchX_6, Compare_7, I_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__bsearch_loop_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Box SearchX_10,
  MR_Word Compare_11,
  MR_Integer * I_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Width_13 = (MR_Integer) ((MR_Unsigned) Hi_9 - (MR_Unsigned) Lo_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (Width_13 >= (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Width_13 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Box LoX_14;
        MR_Word Var_28;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_Var_28;

        mercury__bt_array__lookup_3_p_0(TypeInfo_for_T_27, A_7, Lo_8, &LoX_14);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Compare_11, (MR_Integer) 1))));
        func_0(((MR_Box) (Compare_11)), SearchX_10, LoX_14, &conv1_Var_28);
        Var_28 = ((MR_Word) (conv1_Var_28));
        succeeded = ((MR_Integer) 0 == Var_28);
        if (succeeded)
        {
          *I_12 = Lo_8;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Integer Mid_15;
        MR_Box MidX_16;
        MR_Word Comp_17;
        MR_Integer Var_20;
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) Hi_9 - (MR_Unsigned) Lo_8);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_Comp_17;

        Var_20 = (Var_21 >> 1);
        Mid_15 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) Var_20);
        mercury__bt_array__lookup_3_p_0(TypeInfo_for_T_27, A_7, Mid_15, &MidX_16);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Compare_11, (MR_Integer) 1))));
        func_2(((MR_Box) (Compare_11)), MidX_16, SearchX_10, &conv3_Comp_17);
        Comp_17 = ((MR_Word) (conv3_Comp_17));
        switch (Comp_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Mid_15 + (MR_Unsigned) (MR_Integer) 1);
              MR_Integer next_value_of_Lo_8 = Var_25;

              // direct tailcall eliminated
              ;
              Lo_8 = next_value_of_Lo_8;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer next_value_of_Hi_9 = Mid_15;

              // direct tailcall eliminated
              ;
              Hi_9 = next_value_of_Hi_9;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) Mid_15 - (MR_Unsigned) (MR_Integer) 1);
              MR_Integer next_value_of_Hi_9 = Var_23;

              // direct tailcall eliminated
              ;
              Hi_9 = next_value_of_Hi_9;
              continue;
            }
            break;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__bt_array__fetch_items_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word BTA_5,
  MR_Integer N1_6,
  MR_Integer N2_7)
{
  {
    MR_Word Xs_8;

    mercury__bt_array__fetch_items_4_p_0(TypeInfo_for_T_9, BTA_5, N1_6, N2_7, &Xs_8);
    return Xs_8;
  }
}

MR_Word MR_CALL 
mercury__bt_array__to_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word BTA_3)
{
  {
    MR_Word Xs_4;
    MR_Word RaList_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BTA_3, (MR_Integer) 2))));

    mercury__bt_array__reverse_from_ra_list_3_p_0(TypeInfo_for_T_5, RaList_9, (MR_Word) ((MR_Unsigned) 0U), &Xs_4);
    return Xs_4;
  }
}

void MR_CALL 
mercury__bt_array__to_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * List_6)
{
  {
    MR_Word RaList_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    mercury__bt_array__reverse_from_ra_list_3_p_0(TypeInfo_for_T_8, RaList_5, (MR_Word) ((MR_Unsigned) 0U), List_6);
  }
}

void MR_CALL 
mercury__bt_array__reverse_from_ra_list_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word RaList0_4,
  MR_Word Xs0_5,
  MR_Word * Xs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (RaList0_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box X_7;
    MR_Word RaList1_8;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Integer Var_27;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), RaList0_4, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RaList0_4, (MR_Integer) 1))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RaList0_4, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0))
      {
        X_7 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0));
        RaList1_8 = Var_25;
      }
      else
      {
        MR_Word T1_17;
        MR_Word T2_18;
        MR_Integer Size2_21;
        MR_Word Var_24;

        X_7 = (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0));
        T1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
        T2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 2))));
        Size2_21 = (Var_27 / (MR_Integer) 2);
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Size2_21));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (T2_18));
          MR_hl_field(MR_mktag(1), Var_24, 2) = ((MR_Box) (Var_25));
        }
        {
          RaList1_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RaList1_8, 0) = ((MR_Box) (Size2_21));
          MR_hl_field(MR_mktag(1), RaList1_8, 1) = ((MR_Box) (T1_17));
          MR_hl_field(MR_mktag(1), RaList1_8, 2) = ((MR_Box) (Var_24));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word next_value_of_RaList0_4;
      MR_Word next_value_of_Xs0_5;

      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = X_7;
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Xs0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_RaList0_4 = RaList1_8;
      next_value_of_Xs0_5 = Var_9;
      RaList0_4 = next_value_of_RaList0_4;
      Xs0_5 = next_value_of_Xs0_5;
      continue;
    }
    else
      *Xs_6 = Xs0_5;
    break;
  }
}

MR_Word MR_CALL 
mercury__bt_array__from_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Integer N_4,
  MR_Word Xs_5)
{
  {
    MR_Word BTA_6;

    mercury__bt_array__from_list_3_p_0(TypeInfo_for_T_7, N_4, Xs_5, &BTA_6);
    return BTA_6;
  }
}

void MR_CALL 
mercury__bt_array__from_list_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer Low_4,
  MR_Word List_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Integer High_6;
    MR_Word RaList_7;
    MR_Integer Len_8;
    MR_Integer Var_10;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_12, List_5, (MR_Integer) 0, &Len_8);
    Var_10 = (MR_Integer) ((MR_Unsigned) Low_4 + (MR_Unsigned) Len_8);
    High_6 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) (MR_Integer) 1);
    mercury__bt_array__reverse_into_ra_list_3_p_0(TypeInfo_for_T_12, List_5, (MR_Word) ((MR_Unsigned) 0U), &RaList_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Low_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (High_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RaList_7));
    }
  }
}

void MR_CALL 
mercury__bt_array__reverse_into_ra_list_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * RaList_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *RaList_3 = HeadVar__2_2;
    else
    {
      MR_Box X_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word RaList1_9;
      MR_Integer Size1_14;
      MR_Word T1_15;
      MR_Integer Size2_16;
      MR_Word T2_17;
      MR_Word Rest_18;
      MR_Word Var_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Size1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        T1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Size2_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
          T2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
          Rest_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 2))));
          succeeded = (Size1_14 == Size2_16);
        }
      }
      if (succeeded)
      {
        MR_Integer NewSize_19;
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 1 + (MR_Unsigned) Size1_14);
        MR_Word Var_23;

        NewSize_19 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) Size2_16);
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = X_5;
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (T1_15));
          MR_hl_field(MR_mktag(1), Var_23, 2) = ((MR_Box) (T2_17));
        }
        {
          RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RaList1_9, 0) = ((MR_Box) (NewSize_19));
          MR_hl_field(MR_mktag(1), RaList1_9, 1) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), RaList1_9, 2) = ((MR_Box) (Rest_18));
        }
      }
      else
      {
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = X_5;
        }
        {
          RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RaList1_9, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), RaList1_9, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(1), RaList1_9, 2) = ((MR_Box) (HeadVar__2_2));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_6;
      next_value_of_HeadVar__2_2 = RaList1_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bt_array__shrink_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word BT1A_5,
  MR_Integer N1_6,
  MR_Integer N2_7)
{
  {
    MR_Word BTA2_8;

    mercury__bt_array__shrink_4_p_0(TypeInfo_for_T_9, BT1A_5, N1_6, N2_7, &BTA2_8);
    return BTA2_8;
  }
}

void MR_CALL 
mercury__bt_array__shrink_4_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word Array0_5,
  MR_Integer L_6,
  MR_Integer H_7,
  MR_Word * Array_8)
{
  {
    MR_bool succeeded;
    MR_Integer L0_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array0_5, (MR_Integer) 0))));
    MR_Integer H0_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array0_5, (MR_Integer) 1))));
    MR_Word RaList0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Array0_5, (MR_Integer) 2))));

    succeeded = (L_6 < L0_9);
    if (!(succeeded))
      succeeded = (H_7 > H0_10);
    if (succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.shrink\'/4", (MR_String) "new bounds are larger than old ones");
        return;
      }
    }
    else
    {
      succeeded = (L_6 == L0_9);
      if (succeeded)
      {
        MR_Integer SizeDiff_12 = (MR_Integer) ((MR_Unsigned) H0_10 - (MR_Unsigned) H_7);
        MR_Word RaList_14;
        MR_Word RaList1_13;

        succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(SizeDiff_12, RaList0_11, &RaList1_13);
        if (succeeded)
          RaList_14 = RaList1_13;
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.shrink\'/4", (MR_String) "can\'t resize to a less-than-empty array");
            return;
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Array_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (L_6));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (H_7));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RaList_14));
        }
      }
      else
      {
        MR_Box Item_16;
        MR_Integer L1_17;
        MR_Integer H1_18;
        MR_Word Items_19;
        MR_Word Array1_20;
        MR_Word ListOut_53;
        MR_Integer ElemsToAdd_55;
        MR_Integer Var_56;
        MR_Box Item0_15;
        MR_Word Var_42;

        succeeded = (RaList0_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RaList0_11, (MR_Integer) 1))));
          if (((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0))
            Item0_15 = (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0));
          else
            Item0_15 = (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          Item_16 = Item0_15;
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.shrink\'/4", (MR_String) "can\'t shrink an empty array");
            return;
          }
        }
        succeeded = (L_6 > L0_9);
        if (succeeded)
          L1_17 = L_6;
        else
          L1_17 = L0_9;
        succeeded = (H_7 < H0_10);
        if (succeeded)
          H1_18 = H_7;
        else
          H1_18 = H0_10;
        mercury__bt_array__fetch_items_4_p_0(TypeInfo_for_T_30, Array0_5, L1_17, H1_18, &Items_19);
        Var_56 = (MR_Integer) ((MR_Unsigned) H_7 - (MR_Unsigned) L_6);
        ElemsToAdd_55 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) (MR_Integer) 1);
        mercury__bt_array__add_elements_4_p_0(TypeInfo_for_T_30, ElemsToAdd_55, Item_16, (MR_Word) ((MR_Unsigned) 0U), &ListOut_53);
        {
          Array1_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Array1_20, 0) = ((MR_Box) (L_6));
          MR_hl_field(MR_mktag(0), Array1_20, 1) = ((MR_Box) (H_7));
          MR_hl_field(MR_mktag(0), Array1_20, 2) = ((MR_Box) (ListOut_53));
        }
        mercury__bt_array__insert_items_4_p_0(TypeInfo_for_T_30, Array1_20, L1_17, Items_19, Array_8);
      }
    }
  }
}

MR_Word MR_CALL 
mercury__bt_array__resize_4_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word BT1A_6,
  MR_Integer N1_7,
  MR_Integer N2_8,
  MR_Box T_9)
{
  {
    MR_Word BTA2_10;

    mercury__bt_array__resize_5_p_0(TypeInfo_for_T_11, BT1A_6, N1_7, N2_8, T_9, &BTA2_10);
    return BTA2_10;
  }
}

void MR_CALL 
mercury__bt_array__resize_5_p_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word Array0_6,
  MR_Integer L_7,
  MR_Integer H_8,
  MR_Box Item_9,
  MR_Word * Array_10)
{
  {
    MR_bool succeeded;
    MR_Integer L0_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array0_6, (MR_Integer) 0))));
    MR_Integer H0_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array0_6, (MR_Integer) 1))));
    MR_Word RaList0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Array0_6, (MR_Integer) 2))));

    succeeded = (L_7 == L0_11);
    if (succeeded)
    {
      succeeded = (H_8 < H0_12);
      if (succeeded)
      {
        MR_Integer SizeDiff_14 = (MR_Integer) ((MR_Unsigned) H0_12 - (MR_Unsigned) H_8);
        MR_Word RaList_16;
        MR_Word RaList1_15;

        succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(SizeDiff_14, RaList0_13, &RaList1_15);
        if (succeeded)
          RaList_16 = RaList1_15;
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.resize\'/5", (MR_String) "can\'t resize to a less-than-empty array");
            return;
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Array_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (L_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (H_8));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RaList_16));
        }
      }
      else
      {
        succeeded = (H_8 > H0_12);
        if (succeeded)
        {
          MR_Integer SizeDiff_24 = (MR_Integer) ((MR_Unsigned) H_8 - (MR_Unsigned) H0_12);
          MR_Word RaList_25;

          mercury__bt_array__add_elements_4_p_0(TypeInfo_for_T_28, SizeDiff_24, Item_9, RaList0_13, &RaList_25);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Array_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (L_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (H_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RaList_25));
          }
        }
        else
          *Array_10 = Array0_6;
      }
    }
    else
    {
      MR_Integer L1_17;
      MR_Integer H1_18;
      MR_Word Items_19;
      MR_Word Array1_20;
      MR_Word ListOut_38;
      MR_Integer ElemsToAdd_40;
      MR_Integer Var_41;

      succeeded = (L_7 > L0_11);
      if (succeeded)
        L1_17 = L_7;
      else
        L1_17 = L0_11;
      succeeded = (H_8 < H0_12);
      if (succeeded)
        H1_18 = H_8;
      else
        H1_18 = H0_12;
      mercury__bt_array__fetch_items_4_p_0(TypeInfo_for_T_28, Array0_6, L1_17, H1_18, &Items_19);
      Var_41 = (MR_Integer) ((MR_Unsigned) H_8 - (MR_Unsigned) L_7);
      ElemsToAdd_40 = (MR_Integer) ((MR_Unsigned) Var_41 + (MR_Unsigned) (MR_Integer) 1);
      mercury__bt_array__add_elements_4_p_0(TypeInfo_for_T_28, ElemsToAdd_40, Item_9, (MR_Word) ((MR_Unsigned) 0U), &ListOut_38);
      {
        Array1_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Array1_20, 0) = ((MR_Box) (L_7));
        MR_hl_field(MR_mktag(0), Array1_20, 1) = ((MR_Box) (H_8));
        MR_hl_field(MR_mktag(0), Array1_20, 2) = ((MR_Box) (ListOut_38));
      }
      mercury__bt_array__insert_items_4_p_0(TypeInfo_for_T_28, Array1_20, L1_17, Items_19, Array_10);
    }
  }
}

static void MR_CALL 
mercury__bt_array__insert_items_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Array_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *Array_4 = HeadVar__1_1;
    else
    {
      MR_Box Head_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Word Tail_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Array1_12;
      MR_Integer N1_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__bt_array__set_4_p_0(TypeInfo_for_T_15, HeadVar__1_1, HeadVar__2_2, Head_9, &Array1_12);
      N1_13 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Array1_12;
      next_value_of_HeadVar__2_2 = N1_13;
      next_value_of_HeadVar__3_3 = Tail_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bt_array__fetch_items_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Integer Low_8,
  MR_Integer High_9,
  MR_Word * List_10)
{
  {
    MR_bool succeeded = (Low_8 > High_9);
    MR_Integer ALow_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer AHigh_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RaList0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    if (succeeded)
      *List_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word List0_14;
      MR_Integer Drop_11;
      MR_Word RaList_12;
      MR_Integer Take_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Word Var_17;
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) AHigh_6 - (MR_Unsigned) ALow_5);

      Drop_11 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) High_9);
      succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(Drop_11, RaList0_7, &RaList_12);
      if (succeeded)
      {
        Var_15 = (MR_Integer) ((MR_Unsigned) High_9 - (MR_Unsigned) Low_8);
        Var_16 = (MR_Integer) 1;
        Take_13 = (MR_Integer) ((MR_Unsigned) Var_15 + (MR_Unsigned) Var_16);
        Var_17 = (MR_Word) ((MR_Unsigned) 0U);
        mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(Take_13, RaList_12, Var_17, &List0_14);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        *List_10 = List0_14;
      else
        *List_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Size_7;
      MR_Word Cs_9;

      succeeded = (As_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Size_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 0))));
        Cs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 2))));
        succeeded = (Size_7 < N_4);
        if (succeeded)
        {
          MR_Integer N1_10 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) Size_7);
          MR_Integer next_value_of_N_4 = N1_10;
          MR_Word next_value_of_As_5 = Cs_9;

          // direct tailcall eliminated
          ;
          N_4 = next_value_of_N_4;
          As_5 = next_value_of_As_5;
          continue;
        }
        else
          succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(N_4, As_5, Bs_6);
      }
    }
    else
    {
      *Bs_6 = As_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer N1_7 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) (MR_Integer) 1);
      MR_Word Cs_8;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Integer Var_28;
      MR_Integer next_value_of_N_4;
      MR_Word next_value_of_As_5;

      succeeded = (As_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 1))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 2))));
        if (((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0))
          Cs_8 = Var_26;
        else
        {
          MR_Word T1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
          MR_Word T2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 2))));
          MR_Integer Size2_22 = (Var_28 / (MR_Integer) 2);
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Size2_22));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (T2_19));
            MR_hl_field(MR_mktag(1), Var_25, 2) = ((MR_Box) (Var_26));
          }
          {
            Cs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Cs_8, 0) = ((MR_Box) (Size2_22));
            MR_hl_field(MR_mktag(1), Cs_8, 1) = ((MR_Box) (T1_18));
            MR_hl_field(MR_mktag(1), Cs_8, 2) = ((MR_Box) (Var_25));
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_4 = N1_7;
        next_value_of_As_5 = Cs_8;
        N_4 = next_value_of_N_4;
        As_5 = next_value_of_As_5;
        continue;
      }
    }
    else
    {
      *Bs_6 = As_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer I_5,
  MR_Word RaList0_6,
  MR_Word Xs0_7,
  MR_Word * Xs_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (RaList0_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box X_9;
    MR_Word RaList1_10;
    MR_Integer Var_12;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Integer Var_32;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), RaList0_6, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RaList0_6, (MR_Integer) 1))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RaList0_6, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0))
      {
        X_9 = (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0));
        RaList1_10 = Var_30;
      }
      else
      {
        MR_Word T1_22;
        MR_Word T2_23;
        MR_Integer Size2_26;
        MR_Word Var_29;

        X_9 = (MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0));
        T1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
        T2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 2))));
        Size2_26 = (Var_32 / (MR_Integer) 2);
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Size2_26));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (T2_23));
          MR_hl_field(MR_mktag(1), Var_29, 2) = ((MR_Box) (Var_30));
        }
        {
          RaList1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RaList1_10, 0) = ((MR_Box) (Size2_26));
          MR_hl_field(MR_mktag(1), RaList1_10, 1) = ((MR_Box) (T1_22));
          MR_hl_field(MR_mktag(1), RaList1_10, 2) = ((MR_Box) (Var_29));
        }
      }
      Var_12 = (MR_Integer) 0;
      succeeded = (I_5 >= Var_12);
    }
    if (succeeded)
    {
      MR_Integer I1_11 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) (MR_Integer) 1);
      MR_Word Var_14;
      MR_Integer next_value_of_I_5;
      MR_Word next_value_of_RaList0_6;
      MR_Word next_value_of_Xs0_7;

      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = X_9;
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Xs0_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_I_5 = I1_11;
      next_value_of_RaList0_6 = RaList1_10;
      next_value_of_Xs0_7 = Var_14;
      I_5 = next_value_of_I_5;
      RaList0_6 = next_value_of_RaList0_6;
      Xs0_7 = next_value_of_Xs0_7;
      continue;
    }
    else
      *Xs_8 = Xs0_7;
    break;
  }
}

MR_bool MR_CALL 
mercury__bt_array__semidet_set_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Integer Index_8,
  MR_Box Item_9,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Integer Low_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer High_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RaListIn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word RaListOut_10;
    MR_Integer Pos_11;
    MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) High_6 - (MR_Unsigned) Low_5);

    Pos_11 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) Index_8);
    succeeded = (Pos_11 >= (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = mercury__bt_array__ra_list_update_2_4_p_0(TypeInfo_for_T_12, RaListIn_7, Pos_11, Item_9, &RaListOut_10);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Low_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (High_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RaListOut_10));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__bt_array__set_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word BT1A_5,
  MR_Integer N_6,
  MR_Box T_7)
{
  {
    MR_Word BTA2_8;

    mercury__bt_array__set_4_p_0(TypeInfo_for_T_9, BT1A_5, N_6, T_7, &BTA2_8);
    return BTA2_8;
  }
}

void MR_CALL 
mercury__bt_array__set_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word BtArray0_5,
  MR_Integer Index_6,
  MR_Box Item_7,
  MR_Word * BtArray_8)
{
  {
    MR_bool succeeded;
    MR_Word BtArray1_9;
    MR_Integer Low_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BtArray0_5, (MR_Integer) 0))));
    MR_Integer High_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BtArray0_5, (MR_Integer) 1))));
    MR_Word RaListIn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BtArray0_5, (MR_Integer) 2))));
    MR_Word RaListOut_19;
    MR_Integer Pos_20;
    MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) High_17 - (MR_Unsigned) Low_16);

    Pos_20 = (MR_Integer) ((MR_Unsigned) Var_25 - (MR_Unsigned) Index_6);
    succeeded = (Pos_20 >= (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = mercury__bt_array__ra_list_update_2_4_p_0(TypeInfo_for_T_13, RaListIn_18, Pos_20, Item_7, &RaListOut_19);
      if (succeeded)
      {
        {
          BtArray1_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BtArray1_9, 0) = ((MR_Box) (Low_16));
          MR_hl_field(MR_mktag(0), BtArray1_9, 1) = ((MR_Box) (High_17));
          MR_hl_field(MR_mktag(0), BtArray1_9, 2) = ((MR_Box) (RaListOut_19));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *BtArray_8 = BtArray1_9;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.set\'/4", (MR_String) "index out of bounds");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_update_2_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Integer I_8,
  MR_Box X_9,
  MR_Word * List_10)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Size_5;
    MR_Word T0_6;
    MR_Word Rest_7;

    if (succeeded)
    {
      Size_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      T0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Rest_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      succeeded = (I_8 < Size_5);
      if (succeeded)
      {
        MR_Word T_11;

        succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(TypeInfo_for_T_14, Size_5, T0_6, I_8, X_9, &T_11);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *List_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Size_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T_11));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Rest_7));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Integer NewI_12 = (MR_Integer) ((MR_Unsigned) I_8 - (MR_Unsigned) Size_5);
        MR_Word List0_13;

        succeeded = mercury__bt_array__ra_list_update_2_4_p_0(TypeInfo_for_T_14, Rest_7, NewI_12, X_9, &List0_13);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *List_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Size_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T0_6));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (List0_13));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_bintree_update_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Integer Size_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Box X_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      succeeded = (HeadVar__3_3 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = X_4;
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Box X0_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word T1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word T2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (HeadVar__3_3 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = X_4;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_11));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (T2_12));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Size2_16 = (Size_1 / (MR_Integer) 2);

        succeeded = (HeadVar__3_3 <= Size2_16);
        if (succeeded)
        {
          MR_Integer NewI_17 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 - (MR_Unsigned) (MR_Integer) 1);
          MR_Word T0_18;

          succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(TypeInfo_for_T_25, Size2_16, T1_11, NewI_17, X_4, &T0_18);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = X0_10;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T0_18));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (T2_12));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 - (MR_Unsigned) (MR_Integer) 1);
          MR_Integer NewI_23 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Size2_16);
          MR_Word T0_24;

          succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(TypeInfo_for_T_25, Size2_16, T2_12, NewI_23, X_4, &T0_24);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = X0_10;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_11));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (T0_24));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__semidet_lookup_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Integer Index_7,
  MR_Box * Item_8)
{
  {
    MR_bool succeeded;
    MR_Integer Low_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer High_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RaList_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Pos_9;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) High_5 - (MR_Unsigned) Low_4);

    Pos_9 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) Index_7);
    succeeded = (Pos_9 >= (MR_Integer) 0);
    if (succeeded)
      succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(TypeInfo_for_T_10, Pos_9, RaList_6, Item_8);
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__bt_array__lookup_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BTA_4,
  MR_Integer N_5)
{
  {
    MR_Box T_6;

    mercury__bt_array__lookup_3_p_0(TypeInfo_for_T_7, BTA_4, N_5, &T_6);
    return T_6;
  }
}

void MR_CALL 
mercury__bt_array__lookup_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Integer Index_7,
  MR_Box * Item_8)
{
  {
    MR_bool succeeded;
    MR_Integer Low_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer High_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RaList_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Pos_9;
    MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) High_5 - (MR_Unsigned) Low_4);
    MR_Box Item0_10;

    Pos_9 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) Index_7);
    succeeded = (Pos_9 >= (MR_Integer) 0);
    if (succeeded)
      succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(TypeInfo_for_T_14, Pos_9, RaList_6, &Item0_10);
    if (succeeded)
      *Item_8 = Item0_10;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.lookup\'/3", (MR_String) "array subscript out of bounds");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_lookup_2_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer I_4,
  MR_Word HeadVar__2_2,
  MR_Box * X_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Size_5;
    MR_Word T_6;
    MR_Word Rest_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Size_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      T_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      Rest_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      succeeded = (I_4 < Size_5);
      if (succeeded)
        succeeded = mercury__bt_array__ra_list_bintree_lookup_4_p_0(TypeInfo_for_T_10, Size_5, T_6, I_4, X_8);
      else
      {
        MR_Integer NewI_9 = (MR_Integer) ((MR_Unsigned) I_4 - (MR_Unsigned) Size_5);
        MR_Integer next_value_of_I_4 = NewI_9;
        MR_Word next_value_of_HeadVar__2_2 = Rest_7;

        // direct tailcall eliminated
        ;
        I_4 = next_value_of_I_4;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_bintree_lookup_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Integer Size_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Box * X_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      *X_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      succeeded = (HeadVar__3_3 == (MR_Integer) 0);
    }
    else
    {
      MR_Box X0_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word T1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word T2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (HeadVar__3_3 == (MR_Integer) 0);
      if (succeeded)
      {
        *X_4 = X0_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Size2_13 = (Size_1 / (MR_Integer) 2);

        succeeded = (HeadVar__3_3 <= Size2_13);
        if (succeeded)
        {
          MR_Integer NewI_14 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 - (MR_Unsigned) (MR_Integer) 1);
          MR_Integer next_value_of_Size_1 = Size2_13;
          MR_Word next_value_of_HeadVar__2_2 = T1_9;
          MR_Integer next_value_of_HeadVar__3_3 = NewI_14;

          // direct tailcall eliminated
          ;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        else
        {
          MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 - (MR_Unsigned) (MR_Integer) 1);
          MR_Integer NewI_19 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) Size2_13);
          MR_Integer next_value_of_Size_1 = Size2_13;
          MR_Word next_value_of_HeadVar__2_2 = T2_10;
          MR_Integer next_value_of_HeadVar__3_3 = NewI_19;

          // direct tailcall eliminated
          ;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__bt_array__in_bounds_2_p_0(
  MR_Word TypeInfo_for__T_7,
  MR_Word HeadVar__1_1,
  MR_Integer Index_6)
{
  {
    MR_bool succeeded;
    MR_Integer Low_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer High_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = (Low_3 <= Index_6);
    if (succeeded)
      succeeded = (Index_6 <= High_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bt_array__bounds_3_p_0(
  MR_Word TypeInfo_for__T_7,
  MR_Word HeadVar__1_1,
  MR_Integer * Low_4,
  MR_Integer * High_5)
{
  {
    *Low_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    *High_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  }
}

MR_Integer MR_CALL 
mercury__bt_array__size_1_f_0(
  MR_Word TypeInfo_for__T_5,
  MR_Word BTA_3)
{
  {
    MR_Integer N_4;
    MR_Integer Low_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BTA_3, (MR_Integer) 0))));
    MR_Integer High_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BTA_3, (MR_Integer) 1))));
    MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) High_8 - (MR_Unsigned) Low_7);

    N_4 = (MR_Integer) ((MR_Unsigned) Var_10 + (MR_Unsigned) (MR_Integer) 1);
    return N_4;
  }
}

void MR_CALL 
mercury__bt_array__size_2_p_0(
  MR_Word TypeInfo_for__T_9,
  MR_Word HeadVar__1_1,
  MR_Integer * Size_6)
{
  {
    MR_Integer Low_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer High_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) High_4 - (MR_Unsigned) Low_3);

    *Size_6 = (MR_Integer) ((MR_Unsigned) Var_7 + (MR_Unsigned) (MR_Integer) 1);
  }
}

MR_Integer MR_CALL 
mercury__bt_array__max_1_f_0(
  MR_Word TypeInfo_for__T_5,
  MR_Word BTA_3)
{
  {
    MR_Integer N_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BTA_3, (MR_Integer) 1))));

    return N_4;
  }
}

void MR_CALL 
mercury__bt_array__max_2_p_0(
  MR_Word TypeInfo_for__T_6,
  MR_Word HeadVar__1_1,
  MR_Integer * High_4)
{
  *High_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
}

MR_Integer MR_CALL 
mercury__bt_array__min_1_f_0(
  MR_Word TypeInfo_for__T_5,
  MR_Word BTA_3)
{
  {
    MR_Integer N_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BTA_3, (MR_Integer) 0))));

    return N_4;
  }
}

void MR_CALL 
mercury__bt_array__min_2_p_0(
  MR_Word TypeInfo_for__T_6,
  MR_Word HeadVar__1_1,
  MR_Integer * Low_3)
{
  *Low_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
}

MR_Word MR_CALL 
mercury__bt_array__init_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Integer N1_5,
  MR_Integer N2_6,
  MR_Box T_7)
{
  {
    MR_Word BTA_8;
    MR_Word ListOut_13;
    MR_Integer ElemsToAdd_15;
    MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) N2_6 - (MR_Unsigned) N1_5);

    ElemsToAdd_15 = (MR_Integer) ((MR_Unsigned) Var_16 + (MR_Unsigned) (MR_Integer) 1);
    mercury__bt_array__add_elements_4_p_0(TypeInfo_for_T_9, ElemsToAdd_15, T_7, (MR_Word) ((MR_Unsigned) 0U), &ListOut_13);
    {
      BTA_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BTA_8, 0) = ((MR_Box) (N1_5));
      MR_hl_field(MR_mktag(0), BTA_8, 1) = ((MR_Box) (N2_6));
      MR_hl_field(MR_mktag(0), BTA_8, 2) = ((MR_Box) (ListOut_13));
    }
    return BTA_8;
  }
}

void MR_CALL 
mercury__bt_array__init_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Low_5,
  MR_Integer High_6,
  MR_Box Item_7,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Word ListOut_8;
    MR_Integer ElemsToAdd_10;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) High_6 - (MR_Unsigned) Low_5);

    ElemsToAdd_10 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) (MR_Integer) 1);
    mercury__bt_array__add_elements_4_p_0(TypeInfo_for_T_13, ElemsToAdd_10, Item_7, (MR_Word) ((MR_Unsigned) 0U), &ListOut_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Low_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (High_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ListOut_8));
    }
  }
}

void MR_CALL 
mercury__bt_array__add_elements_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer ElemsToAdd_5,
  MR_Box Item_6,
  MR_Word RaList0_7,
  MR_Word * RaList_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ElemsToAdd_5 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *RaList_8 = RaList0_7;
    else
    {
      MR_Word RaList1_9;
      MR_Integer ElemsToAdd1_10;
      MR_Integer Size1_17;
      MR_Word T1_18;
      MR_Integer Size2_19;
      MR_Word T2_20;
      MR_Word Rest_21;
      MR_Word Var_23;
      MR_Integer next_value_of_ElemsToAdd_5;
      MR_Word next_value_of_RaList0_7;

      succeeded = (RaList0_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Size1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), RaList0_7, (MR_Integer) 0))));
        T1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RaList0_7, (MR_Integer) 1))));
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RaList0_7, (MR_Integer) 2))));
        succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Size2_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
          T2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
          Rest_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 2))));
          succeeded = (Size1_17 == Size2_19);
        }
      }
      if (succeeded)
      {
        MR_Integer NewSize_22;
        MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 1 + (MR_Unsigned) Size1_17);
        MR_Word Var_26;

        NewSize_22 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) Size2_19);
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = Item_6;
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (T1_18));
          MR_hl_field(MR_mktag(1), Var_26, 2) = ((MR_Box) (T2_20));
        }
        {
          RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RaList1_9, 0) = ((MR_Box) (NewSize_22));
          MR_hl_field(MR_mktag(1), RaList1_9, 1) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), RaList1_9, 2) = ((MR_Box) (Rest_21));
        }
      }
      else
      {
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = Item_6;
        }
        {
          RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RaList1_9, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), RaList1_9, 1) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), RaList1_9, 2) = ((MR_Box) (RaList0_7));
        }
      }
      ElemsToAdd1_10 = (MR_Integer) ((MR_Unsigned) ElemsToAdd_5 - (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ElemsToAdd_5 = ElemsToAdd1_10;
      next_value_of_RaList0_7 = RaList1_9;
      ElemsToAdd_5 = next_value_of_ElemsToAdd_5;
      RaList0_7 = next_value_of_RaList0_7;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bt_array__make_empty_array_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Integer N_3)
{
  {
    MR_Word BTA_4;
    MR_Integer High_7 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) (MR_Integer) 1);

    {
      BTA_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BTA_4, 0) = ((MR_Box) (N_3));
      MR_hl_field(MR_mktag(0), BTA_4, 1) = ((MR_Box) (High_7));
      MR_hl_field(MR_mktag(0), BTA_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return BTA_4;
  }
}

void MR_CALL 
mercury__bt_array__make_empty_array_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Integer Low_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Integer High_4 = (MR_Integer) ((MR_Unsigned) Low_3 - (MR_Unsigned) (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Low_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (High_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bt_array____Unify____bt_array_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bt_array____Compare____bt_array_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bt_array____Unify____ra_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bt_array____Compare____ra_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bt_array____Compare____ra_list_bintree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__bt_array__init(void)
{
}

void mercury__bt_array__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_bt_array_1);
	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_ra_list_1);
	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1);
}

void mercury__bt_array__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bt_array__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bt_array.
