/*
** Automatically generated from `bt_array.m'
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


/* :- module bt_array. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3);

static void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box * mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3,
  MR_Box mercury__bt_array__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3);

static void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box * mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3,
  MR_Box mercury__bt_array__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3);

static void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box * mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3,
  MR_Box mercury__bt_array__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer mercury__bt_array__N_4,
  MR_Word mercury__bt_array__As_5,
  MR_Word * mercury__bt_array__Bs_6);

static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer mercury__bt_array__N_4,
  MR_Word mercury__bt_array__As_5,
  MR_Word * mercury__bt_array__Bs_6);

static void MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer mercury__bt_array__I_5,
  MR_Word mercury__bt_array__RaList0_6,
  MR_Word mercury__bt_array__Xs0_7,
  MR_Word * mercury__bt_array__Xs_8);

static void MR_CALL 
mercury__bt_array__insert_items_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_15,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer mercury__bt_array__HeadVar__2_2,
  MR_Word mercury__bt_array__HeadVar__3_3,
  MR_Word * mercury__bt_array__Array_4);


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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1 = {
  &mercury__bt_array__bt_array__type_ctor_info_ra_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_bt_array_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0 = {
  (MR_String) "bt_array",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bt_array__bt_array__field_types_bt_array_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0
};

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____bt_array_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____bt_array_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "bt_array",
  {     mercury__bt_array__bt_array__du_name_ordered_bt_array_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_bt_array_1
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0 = {
  (MR_String) "nil",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1 = {
  &mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1 = {
  (MR_String) "cons",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__bt_array__bt_array__field_types_ra_list_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1
};

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____ra_list_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____ra_list_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "ra_list",
  {     mercury__bt_array__bt_array__du_name_ordered_ra_list_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_ra_list_1
};

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0 = {
  (MR_String) "leaf",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1 = {
  (MR_String) "node",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0
};

static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1
};

static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____ra_list_bintree_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____ra_list_bintree_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "ra_list_bintree",
  {     mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1
};

static MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3)
{
  {
    MR_bool mercury__bt_array__succeeded;

    {
      mercury__bt_array__succeeded = mercury__bt_array____Unify____bt_array_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
    return mercury__bt_array__succeeded;
  }
}

static void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box * mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3,
  MR_Box mercury__bt_array__wrapper_arg_4)
{
  {
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

    {
      mercury__bt_array____Compare____bt_array_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3)
{
  {
    MR_bool mercury__bt_array__succeeded;

    {
      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
    return mercury__bt_array__succeeded;
  }
}

static void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box * mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3,
  MR_Box mercury__bt_array__wrapper_arg_4)
{
  {
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

    {
      mercury__bt_array____Compare____ra_list_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3)
{
  {
    MR_bool mercury__bt_array__succeeded;

    {
      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
    return mercury__bt_array__succeeded;
  }
}

static void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0_10001(
  MR_Box mercury__bt_array__wrapper_arg_1,
  MR_Box * mercury__bt_array__wrapper_arg_2,
  MR_Box mercury__bt_array__wrapper_arg_3,
  MR_Box mercury__bt_array__wrapper_arg_4)
{
  {
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

    {
      mercury__bt_array____Compare____ra_list_bintree_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__bt_array__succeeded;

    return (MR_Integer) 1200;
  }
}

static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer mercury__bt_array__N_4,
  MR_Word mercury__bt_array__As_5,
  MR_Word * mercury__bt_array__Bs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__N_4 > (MR_Integer) 0);

        if (mercury__bt_array__succeeded)
          {
            MR_Integer mercury__bt_array__N1_7 = (mercury__bt_array__N_4 - (MR_Integer) 1);
            MR_Word mercury__bt_array__Cs_8;
            MR_Word mercury__bt_array__V_26_26;
            MR_Word mercury__bt_array__V_27_27;
            MR_Integer mercury__bt_array__V_28_28;

            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__As_5)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 0)));
                mercury__bt_array__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 1)));
                mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 2)));
                if (((MR_tag((MR_Word) mercury__bt_array__V_27_27)) == (MR_mktag((MR_Integer) 0))))
                  mercury__bt_array__Cs_8 = mercury__bt_array__V_26_26;
                else
                  {
                    MR_Word mercury__bt_array__T1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 1)));
                    MR_Word mercury__bt_array__T2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 2)));
                    MR_Integer mercury__bt_array__Size2_22 = (mercury__bt_array__V_28_28 / (MR_Integer) 2);
                    MR_Word mercury__bt_array__V_25_25;
                    MR_Box mercury__bt_array__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 0));

                    {
                      mercury__bt_array__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 0) = ((MR_Box) (mercury__bt_array__Size2_22));
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 1) = ((MR_Box) (mercury__bt_array__T2_19));
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 2) = ((MR_Box) (mercury__bt_array__V_26_26));
                    }
                    {
                      mercury__bt_array__Cs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 0) = ((MR_Box) (mercury__bt_array__Size2_22));
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 1) = ((MR_Box) (mercury__bt_array__T1_18));
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 2) = ((MR_Box) (mercury__bt_array__V_25_25));
                    }
                  }
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Integer mercury__bt_array__N__tmp_copy_4 = mercury__bt_array__N1_7;
                    MR_Word mercury__bt_array__As__tmp_copy_5 = mercury__bt_array__Cs_8;

                    mercury__bt_array__As_5 = mercury__bt_array__As__tmp_copy_5;
                    mercury__bt_array__N_4 = mercury__bt_array__N__tmp_copy_4;
                  }
                  continue;
                }
              }
          }
        else
          {
            *mercury__bt_array__Bs_6 = mercury__bt_array__As_5;
            mercury__bt_array__succeeded = MR_TRUE;
          }
        return mercury__bt_array__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer mercury__bt_array__N_4,
  MR_Word mercury__bt_array__As_5,
  MR_Word * mercury__bt_array__Bs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__N_4 > (MR_Integer) 0);

        if (mercury__bt_array__succeeded)
          {
            MR_Integer mercury__bt_array__Size_7;
            MR_Word mercury__bt_array__Cs_9;
            MR_Word mercury__bt_array__V_8_8;

            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__As_5)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__Size_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 0)));
                mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 1)));
                mercury__bt_array__Cs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 2)));
                mercury__bt_array__succeeded = (mercury__bt_array__Size_7 < mercury__bt_array__N_4);
                if (mercury__bt_array__succeeded)
                  {
                    MR_Integer mercury__bt_array__N1_10 = (mercury__bt_array__N_4 - mercury__bt_array__Size_7);

                    /* direct tailcall eliminated */
                    {
                      MR_Integer mercury__bt_array__N__tmp_copy_4 = mercury__bt_array__N1_10;
                      MR_Word mercury__bt_array__As__tmp_copy_5 = mercury__bt_array__Cs_9;

                      mercury__bt_array__As_5 = mercury__bt_array__As__tmp_copy_5;
                      mercury__bt_array__N_4 = mercury__bt_array__N__tmp_copy_4;
                    }
                    continue;
                  }
                else
                  {
                    mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__N_4, mercury__bt_array__As_5, mercury__bt_array__Bs_6);
                  }
              }
          }
        else
          {
            *mercury__bt_array__Bs_6 = mercury__bt_array__As_5;
            mercury__bt_array__succeeded = MR_TRUE;
          }
        return mercury__bt_array__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer mercury__bt_array__I_5,
  MR_Word mercury__bt_array__RaList0_6,
  MR_Word mercury__bt_array__Xs0_7,
  MR_Word * mercury__bt_array__Xs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_6)) == (MR_mktag((MR_Integer) 1)));
        MR_Box mercury__bt_array__X_9;
        MR_Word mercury__bt_array__RaList1_10;
        MR_Integer mercury__bt_array__V_12_12;
        MR_Word mercury__bt_array__V_30_30;
        MR_Word mercury__bt_array__V_31_31;
        MR_Integer mercury__bt_array__V_32_32;

        if (mercury__bt_array__succeeded)
          {
            mercury__bt_array__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 0)));
            mercury__bt_array__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 1)));
            mercury__bt_array__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 2)));
            if (((MR_tag((MR_Word) mercury__bt_array__V_31_31)) == (MR_mktag((MR_Integer) 0))))
              {
                mercury__bt_array__X_9 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_31_31, (MR_Integer) 0));
                mercury__bt_array__RaList1_10 = mercury__bt_array__V_30_30;
              }
            else
              {
                MR_Word mercury__bt_array__T1_22;
                MR_Word mercury__bt_array__T2_23;
                MR_Integer mercury__bt_array__Size2_26;
                MR_Word mercury__bt_array__V_29_29;

                mercury__bt_array__X_9 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 0));
                mercury__bt_array__T1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 1)));
                mercury__bt_array__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 2)));
                mercury__bt_array__Size2_26 = (mercury__bt_array__V_32_32 / (MR_Integer) 2);
                {
                  mercury__bt_array__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 0) = ((MR_Box) (mercury__bt_array__Size2_26));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 1) = ((MR_Box) (mercury__bt_array__T2_23));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 2) = ((MR_Box) (mercury__bt_array__V_30_30));
                }
                {
                  mercury__bt_array__RaList1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 0) = ((MR_Box) (mercury__bt_array__Size2_26));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 1) = ((MR_Box) (mercury__bt_array__T1_22));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 2) = ((MR_Box) (mercury__bt_array__V_29_29));
                }
              }
            mercury__bt_array__V_12_12 = (MR_Integer) 0;
            mercury__bt_array__succeeded = (mercury__bt_array__I_5 >= mercury__bt_array__V_12_12);
          }
        if (mercury__bt_array__succeeded)
          {
            MR_Integer mercury__bt_array__I1_11 = (mercury__bt_array__I_5 - (MR_Integer) 1);
            MR_Word mercury__bt_array__V_14_14;

            {
              mercury__bt_array__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_14_14, 0) = mercury__bt_array__X_9;
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_14_14, 1) = ((MR_Box) (mercury__bt_array__Xs0_7));
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bt_array__I__tmp_copy_5 = mercury__bt_array__I1_11;
              MR_Word mercury__bt_array__RaList0__tmp_copy_6 = mercury__bt_array__RaList1_10;
              MR_Word mercury__bt_array__Xs0__tmp_copy_7 = mercury__bt_array__V_14_14;

              mercury__bt_array__Xs0_7 = mercury__bt_array__Xs0__tmp_copy_7;
              mercury__bt_array__RaList0_6 = mercury__bt_array__RaList0__tmp_copy_6;
              mercury__bt_array__I_5 = mercury__bt_array__I__tmp_copy_5;
            }
            continue;
          }
        else
          *mercury__bt_array__Xs_8 = mercury__bt_array__Xs0_7;
      }
      break;
    }
}

void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_24,
  MR_Word * mercury__bt_array__HeadVar__1_1,
  MR_Word mercury__bt_array__HeadVar__2_2,
  MR_Word mercury__bt_array__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded;
        MR_Integer mercury__bt_array__CastX_22 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
        MR_Integer mercury__bt_array__CastY_23 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

        mercury__bt_array__succeeded = (mercury__bt_array__CastX_22 == mercury__bt_array__CastY_23);
        if (mercury__bt_array__succeeded)
          *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
        else
        if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Box mercury__bt_array__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));

            if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Box mercury__bt_array__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));

                {
                  mercury__builtin__compare_3_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__HeadVar__1_1, mercury__bt_array__V_29_29, mercury__bt_array__V_5_5);
                }
              }
            else
              *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 1;
          }
        else
          {
            MR_Word mercury__bt_array__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__bt_array__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__bt_array__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));

            if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
              *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Box mercury__bt_array__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));
                MR_Word mercury__bt_array__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word mercury__bt_array__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
                MR_Word mercury__bt_array__V_20_20;

                {
                  mercury__builtin__compare_3_p_0(mercury__bt_array__TypeInfo_for_T_24, &mercury__bt_array__V_20_20, mercury__bt_array__V_32_32, mercury__bt_array__V_17_17);
                }
                mercury__bt_array__succeeded = (mercury__bt_array__V_20_20 == (MR_Integer) 0);
                mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
                if (mercury__bt_array__succeeded)
                  *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_20_20;
                else
                  {
                    MR_Word mercury__bt_array__V_21_21;

                    {
                      mercury__bt_array____Compare____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_24, &mercury__bt_array__V_21_21, mercury__bt_array__V_31_31, mercury__bt_array__V_18_18);
                    }
                    mercury__bt_array__succeeded = (mercury__bt_array__V_21_21 == (MR_Integer) 0);
                    mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
                    if (mercury__bt_array__succeeded)
                      *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_21_21;
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_30_30;
                          MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__V_19_19;

                          mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
                          mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                  }
              }
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Word mercury__bt_array__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded;
        MR_Integer mercury__bt_array__CastX_11 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
        MR_Integer mercury__bt_array__CastY_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

        mercury__bt_array__succeeded = (mercury__bt_array__CastX_11 == mercury__bt_array__CastY_12);
        if (mercury__bt_array__succeeded)
          mercury__bt_array__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Box mercury__bt_array__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__bt_array__V_4_4;

            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
                {
                  mercury__bt_array__succeeded = mercury__builtin__unify_2_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_3_3, mercury__bt_array__V_4_4);
                }
              }
          }
        else
          {
            MR_Box mercury__bt_array__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bt_array__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
            MR_Box mercury__bt_array__V_8_8;
            MR_Word mercury__bt_array__V_9_9;
            MR_Word mercury__bt_array__V_10_10;

            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
                mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
                mercury__bt_array__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mercury__bt_array__succeeded = mercury__builtin__unify_2_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_5_5, mercury__bt_array__V_8_8);
                }
                if (mercury__bt_array__succeeded)
                  {
                    {
                      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
                    }
                    if (mercury__bt_array__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__V_7_7;
                          MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_10_10;

                          mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
                          mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return mercury__bt_array__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_20,
  MR_Word * mercury__bt_array__HeadVar__1_1,
  MR_Word mercury__bt_array__HeadVar__2_2,
  MR_Word mercury__bt_array__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded;
        MR_Integer mercury__bt_array__CastX_18 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
        MR_Integer mercury__bt_array__CastY_19 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

        mercury__bt_array__succeeded = (mercury__bt_array__CastX_18 == mercury__bt_array__CastY_19);
        if (mercury__bt_array__succeeded)
          *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
        else
        if ((mercury__bt_array__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__bt_array__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__bt_array__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));

            if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Integer mercury__bt_array__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0)));
                MR_Word mercury__bt_array__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word mercury__bt_array__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
                MR_Word mercury__bt_array__V_16_16;

                mercury__bt_array__succeeded = (mercury__bt_array__V_28_28 < mercury__bt_array__V_13_13);
                if (mercury__bt_array__succeeded)
                  mercury__bt_array__V_16_16 = (MR_Integer) 1;
                else
                  {
                    mercury__bt_array__succeeded = (mercury__bt_array__V_28_28 == mercury__bt_array__V_13_13);
                    if (mercury__bt_array__succeeded)
                      mercury__bt_array__V_16_16 = (MR_Integer) 0;
                    else
                      mercury__bt_array__V_16_16 = (MR_Integer) 2;
                  }
                mercury__bt_array__succeeded = (mercury__bt_array__V_16_16 == (MR_Integer) 0);
                mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
                if (mercury__bt_array__succeeded)
                  *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_16_16;
                else
                  {
                    MR_Word mercury__bt_array__V_17_17;

                    {
                      mercury__bt_array____Compare____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_20, &mercury__bt_array__V_17_17, mercury__bt_array__V_27_27, mercury__bt_array__V_14_14);
                    }
                    mercury__bt_array__succeeded = (mercury__bt_array__V_17_17 == (MR_Integer) 0);
                    mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
                    if (mercury__bt_array__succeeded)
                      *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_17_17;
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_26_26;
                          MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__V_15_15;

                          mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
                          mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                  }
              }
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Word mercury__bt_array__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded;
        MR_Integer mercury__bt_array__CastX_11 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
        MR_Integer mercury__bt_array__CastY_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

        mercury__bt_array__succeeded = (mercury__bt_array__CastX_11 == mercury__bt_array__CastY_12);
        if (mercury__bt_array__succeeded)
          mercury__bt_array__succeeded = MR_TRUE;
        else
        if ((mercury__bt_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mercury__bt_array__CastX_3 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
            MR_Integer mercury__bt_array__CastY_4 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

            mercury__bt_array__succeeded = (mercury__bt_array__CastY_4 == mercury__bt_array__CastX_3);
          }
        else
          {
            MR_Integer mercury__bt_array__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bt_array__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mercury__bt_array__V_8_8;
            MR_Word mercury__bt_array__V_9_9;
            MR_Word mercury__bt_array__V_10_10;

            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
                mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
                mercury__bt_array__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
                mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 == mercury__bt_array__V_8_8);
                if (mercury__bt_array__succeeded)
                  {
                    {
                      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
                    }
                    if (mercury__bt_array__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__V_7_7;
                          MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_10_10;

                          mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
                          mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return mercury__bt_array__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_14,
  MR_Word * mercury__bt_array__HeadVar__1_1,
  MR_Word mercury__bt_array__HeadVar__2_2,
  MR_Word mercury__bt_array__HeadVar__3_3)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__CastX_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
    MR_Integer mercury__bt_array__CastY_13 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

    mercury__bt_array__succeeded = (mercury__bt_array__CastX_12 == mercury__bt_array__CastY_13);
    if (mercury__bt_array__succeeded)
      *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__bt_array__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__bt_array__V_10_10;

        mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 < mercury__bt_array__V_7_7);
        if (mercury__bt_array__succeeded)
          mercury__bt_array__V_10_10 = (MR_Integer) 1;
        else
          {
            mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 == mercury__bt_array__V_7_7);
            if (mercury__bt_array__succeeded)
              mercury__bt_array__V_10_10 = (MR_Integer) 0;
            else
              mercury__bt_array__V_10_10 = (MR_Integer) 2;
          }
        mercury__bt_array__succeeded = (mercury__bt_array__V_10_10 == (MR_Integer) 0);
        mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
        if (mercury__bt_array__succeeded)
          *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_10_10;
        else
          {
            MR_Word mercury__bt_array__V_11_11;

            mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 < mercury__bt_array__V_8_8);
            if (mercury__bt_array__succeeded)
              mercury__bt_array__V_11_11 = (MR_Integer) 1;
            else
              {
                mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 == mercury__bt_array__V_8_8);
                if (mercury__bt_array__succeeded)
                  mercury__bt_array__V_11_11 = (MR_Integer) 0;
                else
                  mercury__bt_array__V_11_11 = (MR_Integer) 2;
              }
            mercury__bt_array__succeeded = (mercury__bt_array__V_11_11 == (MR_Integer) 0);
            mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
            if (mercury__bt_array__succeeded)
              *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_11_11;
            else
              {
                mercury__bt_array____Compare____ra_list_1_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__HeadVar__1_1, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Word mercury__bt_array__HeadVar__2_2)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__CastX_9 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
    MR_Integer mercury__bt_array__CastY_10 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

    mercury__bt_array__succeeded = (mercury__bt_array__CastX_9 == mercury__bt_array__CastY_10);
    if (mercury__bt_array__succeeded)
      mercury__bt_array__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__bt_array__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

        mercury__bt_array__succeeded = (mercury__bt_array__V_3_3 == mercury__bt_array__V_6_6);
        if (mercury__bt_array__succeeded)
          {
            mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 == mercury__bt_array__V_7_7);
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_1_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__V_5_5, mercury__bt_array__V_8_8);
              }
          }
      }
    return mercury__bt_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_bintree_update_5_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_25,
  MR_Integer mercury__bt_array__Size_1,
  MR_Word mercury__bt_array__HeadVar__2_2,
  MR_Integer mercury__bt_array__HeadVar__3_3,
  MR_Box mercury__bt_array__X_4,
  MR_Word * mercury__bt_array__HeadVar__5_5)
{
  {
    MR_bool mercury__bt_array__succeeded;

    if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
        if (mercury__bt_array__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__bt_array__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__bt_array__X_4;
            }
            mercury__bt_array__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Box mercury__bt_array__X0_10 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__bt_array__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__bt_array__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

        mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
        if (mercury__bt_array__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *mercury__bt_array__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X_4;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_11));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T2_12));
            }
            mercury__bt_array__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__bt_array__Size2_16 = (mercury__bt_array__Size_1 / (MR_Integer) 2);

            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 <= mercury__bt_array__Size2_16);
            if (mercury__bt_array__succeeded)
              {
                MR_Integer mercury__bt_array__NewI_17 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
                MR_Word mercury__bt_array__T0_18;

                {
                  mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_25, mercury__bt_array__Size2_16, mercury__bt_array__T1_11, mercury__bt_array__NewI_17, mercury__bt_array__X_4, &mercury__bt_array__T0_18);
                }
                if (mercury__bt_array__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__bt_array__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X0_10;
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T0_18));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T2_12));
                    }
                    mercury__bt_array__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_Integer mercury__bt_array__V_21_21 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
                MR_Integer mercury__bt_array__NewI_23 = (mercury__bt_array__V_21_21 - mercury__bt_array__Size2_16);
                MR_Word mercury__bt_array__T0_24;

                {
                  mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_25, mercury__bt_array__Size2_16, mercury__bt_array__T2_12, mercury__bt_array__NewI_23, mercury__bt_array__X_4, &mercury__bt_array__T0_24);
                }
                if (mercury__bt_array__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__bt_array__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X0_10;
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_11));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T0_24));
                    }
                    mercury__bt_array__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return mercury__bt_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_update_2_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_14,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer mercury__bt_array__I_8,
  MR_Box mercury__bt_array__X_9,
  MR_Word * mercury__bt_array__List_10)
{
  {
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__bt_array__Size_5;
    MR_Word mercury__bt_array__T0_6;
    MR_Word mercury__bt_array__Rest_7;

    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__Size_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
        mercury__bt_array__T0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
        mercury__bt_array__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
        mercury__bt_array__succeeded = (mercury__bt_array__I_8 < mercury__bt_array__Size_5);
        if (mercury__bt_array__succeeded)
          {
            MR_Word mercury__bt_array__T_11;

            {
              mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__Size_5, mercury__bt_array__T0_6, mercury__bt_array__I_8, mercury__bt_array__X_9, &mercury__bt_array__T_11);
            }
            if (mercury__bt_array__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__bt_array__List_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size_5));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T_11));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__Rest_7));
                }
                mercury__bt_array__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Integer mercury__bt_array__NewI_12 = (mercury__bt_array__I_8 - mercury__bt_array__Size_5);
            MR_Word mercury__bt_array__List0_13;

            {
              mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__Rest_7, mercury__bt_array__NewI_12, mercury__bt_array__X_9, &mercury__bt_array__List0_13);
            }
            if (mercury__bt_array__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__bt_array__List_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size_5));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T0_6));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__List0_13));
                }
                mercury__bt_array__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__bt_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_bintree_lookup_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_20,
  MR_Integer mercury__bt_array__Size_1,
  MR_Word mercury__bt_array__HeadVar__2_2,
  MR_Integer mercury__bt_array__HeadVar__3_3,
  MR_Box * mercury__bt_array__X_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded;

        if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
          {
            *mercury__bt_array__X_4 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
          }
        else
          {
            MR_Box mercury__bt_array__X0_8 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__bt_array__T1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__bt_array__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
            if (mercury__bt_array__succeeded)
              {
                *mercury__bt_array__X_4 = mercury__bt_array__X0_8;
                mercury__bt_array__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer mercury__bt_array__Size2_13 = (mercury__bt_array__Size_1 / (MR_Integer) 2);

                mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 <= mercury__bt_array__Size2_13);
                if (mercury__bt_array__succeeded)
                  {
                    MR_Integer mercury__bt_array__NewI_14 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);

                    /* direct tailcall eliminated */
                    {
                      MR_Integer mercury__bt_array__Size__tmp_copy_1 = mercury__bt_array__Size2_13;
                      MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__T1_9;
                      MR_Integer mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__NewI_14;

                      mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
                      mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
                      mercury__bt_array__Size_1 = mercury__bt_array__Size__tmp_copy_1;
                    }
                    continue;
                  }
                else
                  {
                    MR_Integer mercury__bt_array__V_17_17 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
                    MR_Integer mercury__bt_array__NewI_19 = (mercury__bt_array__V_17_17 - mercury__bt_array__Size2_13);

                    /* direct tailcall eliminated */
                    {
                      MR_Integer mercury__bt_array__Size__tmp_copy_1 = mercury__bt_array__Size2_13;
                      MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__T2_10;
                      MR_Integer mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__NewI_19;

                      mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
                      mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
                      mercury__bt_array__Size_1 = mercury__bt_array__Size__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return mercury__bt_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_lookup_2_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
  MR_Integer mercury__bt_array__I_4,
  MR_Word mercury__bt_array__HeadVar__2_2,
  MR_Box * mercury__bt_array__X_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer mercury__bt_array__Size_5;
        MR_Word mercury__bt_array__T_6;
        MR_Word mercury__bt_array__Rest_7;

        if (mercury__bt_array__succeeded)
          {
            mercury__bt_array__Size_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
            mercury__bt_array__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
            mercury__bt_array__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
            mercury__bt_array__succeeded = (mercury__bt_array__I_4 < mercury__bt_array__Size_5);
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_lookup_4_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__Size_5, mercury__bt_array__T_6, mercury__bt_array__I_4, mercury__bt_array__X_8);
              }
            else
              {
                MR_Integer mercury__bt_array__NewI_9 = (mercury__bt_array__I_4 - mercury__bt_array__Size_5);

                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__bt_array__I__tmp_copy_4 = mercury__bt_array__NewI_9;
                  MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__Rest_7;

                  mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
                  mercury__bt_array__I_4 = mercury__bt_array__I__tmp_copy_4;
                }
                continue;
              }
          }
        return mercury__bt_array__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_update_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
  MR_Word mercury__bt_array__List0_5,
  MR_Integer mercury__bt_array__I_6,
  MR_Box mercury__bt_array__X_7,
  MR_Word * mercury__bt_array__List_8)
{
  {
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__I_6 >= (MR_Integer) 0);

    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__List0_5, mercury__bt_array__I_6, mercury__bt_array__X_7, mercury__bt_array__List_8);
      }
    return mercury__bt_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_lookup_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
  MR_Integer mercury__bt_array__I_4,
  MR_Word mercury__bt_array__List_5,
  MR_Box * mercury__bt_array__X_6)
{
  {
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__I_4 >= (MR_Integer) 0);

    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__I_4, mercury__bt_array__List_5, mercury__bt_array__X_6);
      }
    return mercury__bt_array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bt_array__ra_list_head_tail_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_18,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Box * mercury__bt_array__X_2,
  MR_Word * mercury__bt_array__Tail_3)
{
  {
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__bt_array__V_19_19;
    MR_Word mercury__bt_array__V_20_20;
    MR_Integer mercury__bt_array__V_21_21;

    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
        mercury__bt_array__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
        mercury__bt_array__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
        if (((MR_tag((MR_Word) mercury__bt_array__V_20_20)) == (MR_mktag((MR_Integer) 0))))
          {
            *mercury__bt_array__X_2 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_20_20, (MR_Integer) 0));
            *mercury__bt_array__Tail_3 = mercury__bt_array__V_19_19;
          }
        else
          {
            MR_Word mercury__bt_array__T1_10;
            MR_Word mercury__bt_array__T2_11;
            MR_Integer mercury__bt_array__Size2_14;
            MR_Word mercury__bt_array__V_17_17;

            *mercury__bt_array__X_2 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 0));
            mercury__bt_array__T1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 1)));
            mercury__bt_array__T2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 2)));
            mercury__bt_array__Size2_14 = (mercury__bt_array__V_21_21 / (MR_Integer) 2);
            {
              mercury__bt_array__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 0) = ((MR_Box) (mercury__bt_array__Size2_14));
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 1) = ((MR_Box) (mercury__bt_array__T2_11));
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 2) = ((MR_Box) (mercury__bt_array__V_19_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *mercury__bt_array__Tail_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size2_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_10));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__V_17_17));
            }
          }
        mercury__bt_array__succeeded = MR_TRUE;
      }
    return mercury__bt_array__succeeded;
  }
}

void MR_CALL 
mercury__bt_array__ra_list_cons_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_19,
  MR_Box mercury__bt_array__X_4,
  MR_Word mercury__bt_array__List0_5,
  MR_Word * mercury__bt_array__List_6)
{
  {
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__List0_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__bt_array__Size1_7;
    MR_Word mercury__bt_array__T1_8;
    MR_Integer mercury__bt_array__Size2_9;
    MR_Word mercury__bt_array__T2_10;
    MR_Word mercury__bt_array__Rest_11;
    MR_Word mercury__bt_array__V_13_13;

    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__Size1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 0)));
        mercury__bt_array__T1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 1)));
        mercury__bt_array__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 2)));
        mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_13_13)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__bt_array__succeeded)
          {
            mercury__bt_array__Size2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 0)));
            mercury__bt_array__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 1)));
            mercury__bt_array__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 2)));
            mercury__bt_array__succeeded = (mercury__bt_array__Size1_7 == mercury__bt_array__Size2_9);
          }
      }
    if (mercury__bt_array__succeeded)
      {
        MR_Integer mercury__bt_array__NewSize_12;
        MR_Integer mercury__bt_array__V_14_14 = ((MR_Integer) 1 + mercury__bt_array__Size1_7);
        MR_Word mercury__bt_array__V_16_16;

        mercury__bt_array__NewSize_12 = (mercury__bt_array__V_14_14 + mercury__bt_array__Size2_9);
        {
          mercury__bt_array__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 0) = mercury__bt_array__X_4;
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 1) = ((MR_Box) (mercury__bt_array__T1_8));
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 2) = ((MR_Box) (mercury__bt_array__T2_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *mercury__bt_array__List_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__NewSize_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__V_16_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__Rest_11));
        }
      }
    else
      {
        MR_Word mercury__bt_array__V_18_18;

        {
          mercury__bt_array__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__bt_array__V_18_18, 0) = mercury__bt_array__X_4;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *mercury__bt_array__List_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__V_18_18));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__List0_5));
        }
      }
  }
}

void MR_CALL 
mercury__bt_array__ra_list_nil_1_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_2,
  MR_Word * mercury__bt_array__HeadVar__1_1)
{
  {
    MR_bool mercury__bt_array__succeeded;

    *mercury__bt_array__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_bool MR_CALL 
mercury__bt_array__bsearch_loop_6_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_27,
  MR_Word mercury__bt_array__A_7,
  MR_Integer mercury__bt_array__Lo_8,
  MR_Integer mercury__bt_array__Hi_9,
  MR_Box mercury__bt_array__SearchX_10,
  MR_Word mercury__bt_array__Compare_11,
  MR_Integer * mercury__bt_array__I_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded;
        MR_Integer mercury__bt_array__Width_13 = (mercury__bt_array__Hi_9 - mercury__bt_array__Lo_8);

        mercury__bt_array__succeeded = (mercury__bt_array__Width_13 >= (MR_Integer) 0);
        if (mercury__bt_array__succeeded)
          {
            mercury__bt_array__succeeded = (mercury__bt_array__Width_13 == (MR_Integer) 0);
            if (mercury__bt_array__succeeded)
              {
                MR_Box mercury__bt_array__LoX_14;
                MR_Word mercury__bt_array__V_28_28;
                void MR_CALL (* mercury__bt_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box mercury__bt_array__conv1_V_28_28;

                {
                  mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_27, mercury__bt_array__A_7, mercury__bt_array__Lo_8, &mercury__bt_array__LoX_14);
                }
                mercury__bt_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bt_array__Compare_11, (MR_Integer) 1)));
                {
                  mercury__bt_array__func_0(((MR_Box) mercury__bt_array__Compare_11), mercury__bt_array__SearchX_10, mercury__bt_array__LoX_14, &mercury__bt_array__conv1_V_28_28);
                }
                mercury__bt_array__V_28_28 = ((MR_Word) mercury__bt_array__conv1_V_28_28);
                mercury__bt_array__succeeded = ((MR_Integer) 0 == mercury__bt_array__V_28_28);
                if (mercury__bt_array__succeeded)
                  {
                    *mercury__bt_array__I_12 = mercury__bt_array__Lo_8;
                    mercury__bt_array__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_Integer mercury__bt_array__Mid_15;
                MR_Box mercury__bt_array__MidX_16;
                MR_Word mercury__bt_array__Comp_17;
                MR_Integer mercury__bt_array__V_20_20;
                MR_Integer mercury__bt_array__V_21_21 = (mercury__bt_array__Hi_9 - mercury__bt_array__Lo_8);
                void MR_CALL (* mercury__bt_array__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box mercury__bt_array__conv3_Comp_17;

                mercury__bt_array__V_20_20 = (mercury__bt_array__V_21_21 >> (MR_Integer) 1);
                mercury__bt_array__Mid_15 = (mercury__bt_array__Lo_8 + mercury__bt_array__V_20_20);
                {
                  mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_27, mercury__bt_array__A_7, mercury__bt_array__Mid_15, &mercury__bt_array__MidX_16);
                }
                mercury__bt_array__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bt_array__Compare_11, (MR_Integer) 1)));
                {
                  mercury__bt_array__func_2(((MR_Box) mercury__bt_array__Compare_11), mercury__bt_array__MidX_16, mercury__bt_array__SearchX_10, &mercury__bt_array__conv3_Comp_17);
                }
                mercury__bt_array__Comp_17 = ((MR_Word) mercury__bt_array__conv3_Comp_17);
                switch (mercury__bt_array__Comp_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__bt_array__V_25_25 = (mercury__bt_array__Mid_15 + (MR_Integer) 1);

                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__bt_array__Lo__tmp_copy_8 = mercury__bt_array__V_25_25;

                        mercury__bt_array__Lo_8 = mercury__bt_array__Lo__tmp_copy_8;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__bt_array__Hi__tmp_copy_9 = mercury__bt_array__Mid_15;

                        mercury__bt_array__Hi_9 = mercury__bt_array__Hi__tmp_copy_9;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer mercury__bt_array__V_23_23 = (mercury__bt_array__Mid_15 - (MR_Integer) 1);

                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__bt_array__Hi__tmp_copy_9 = mercury__bt_array__V_23_23;

                        mercury__bt_array__Hi_9 = mercury__bt_array__Hi__tmp_copy_9;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
        return mercury__bt_array__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__bt_array__reverse_from_ra_list_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
  MR_Word mercury__bt_array__RaList0_4,
  MR_Word mercury__bt_array__Xs0_5,
  MR_Word * mercury__bt_array__Xs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_4)) == (MR_mktag((MR_Integer) 1)));
        MR_Box mercury__bt_array__X_7;
        MR_Word mercury__bt_array__RaList1_8;
        MR_Word mercury__bt_array__V_25_25;
        MR_Word mercury__bt_array__V_26_26;
        MR_Integer mercury__bt_array__V_27_27;

        if (mercury__bt_array__succeeded)
          {
            mercury__bt_array__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 0)));
            mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 1)));
            mercury__bt_array__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 2)));
            if (((MR_tag((MR_Word) mercury__bt_array__V_26_26)) == (MR_mktag((MR_Integer) 0))))
              {
                mercury__bt_array__X_7 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_26_26, (MR_Integer) 0));
                mercury__bt_array__RaList1_8 = mercury__bt_array__V_25_25;
              }
            else
              {
                MR_Word mercury__bt_array__T1_17;
                MR_Word mercury__bt_array__T2_18;
                MR_Integer mercury__bt_array__Size2_21;
                MR_Word mercury__bt_array__V_24_24;

                mercury__bt_array__X_7 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 0));
                mercury__bt_array__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 1)));
                mercury__bt_array__T2_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 2)));
                mercury__bt_array__Size2_21 = (mercury__bt_array__V_27_27 / (MR_Integer) 2);
                {
                  mercury__bt_array__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 0) = ((MR_Box) (mercury__bt_array__Size2_21));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 1) = ((MR_Box) (mercury__bt_array__T2_18));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 2) = ((MR_Box) (mercury__bt_array__V_25_25));
                }
                {
                  mercury__bt_array__RaList1_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 0) = ((MR_Box) (mercury__bt_array__Size2_21));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 1) = ((MR_Box) (mercury__bt_array__T1_17));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 2) = ((MR_Box) (mercury__bt_array__V_24_24));
                }
              }
            mercury__bt_array__succeeded = MR_TRUE;
          }
        if (mercury__bt_array__succeeded)
          {
            MR_Word mercury__bt_array__V_9_9;

            {
              mercury__bt_array__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_9_9, 0) = mercury__bt_array__X_7;
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_9_9, 1) = ((MR_Box) (mercury__bt_array__Xs0_5));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bt_array__RaList0__tmp_copy_4 = mercury__bt_array__RaList1_8;
              MR_Word mercury__bt_array__Xs0__tmp_copy_5 = mercury__bt_array__V_9_9;

              mercury__bt_array__Xs0_5 = mercury__bt_array__Xs0__tmp_copy_5;
              mercury__bt_array__RaList0_4 = mercury__bt_array__RaList0__tmp_copy_4;
            }
            continue;
          }
        else
          *mercury__bt_array__Xs_6 = mercury__bt_array__Xs0_5;
      }
      break;
    }
}

static void MR_CALL 
mercury__bt_array__insert_items_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_15,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer mercury__bt_array__HeadVar__2_2,
  MR_Word mercury__bt_array__HeadVar__3_3,
  MR_Word * mercury__bt_array__Array_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded;

        if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bt_array__Array_4 = mercury__bt_array__HeadVar__1_1;
        else
          {
            MR_Box mercury__bt_array__Head_9 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));
            MR_Word mercury__bt_array__Tail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__bt_array__Array1_12;
            MR_Integer mercury__bt_array__N1_13;

            {
              mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_15, mercury__bt_array__HeadVar__1_1, mercury__bt_array__HeadVar__2_2, mercury__bt_array__Head_9, &mercury__bt_array__Array1_12);
            }
            mercury__bt_array__N1_13 = (mercury__bt_array__HeadVar__2_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__Array1_12;
              MR_Integer mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__N1_13;
              MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__Tail_10;

              mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
              mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
              mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__bt_array__reverse_into_ra_list_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Word mercury__bt_array__HeadVar__2_2,
  MR_Word * mercury__bt_array__RaList_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded;

        if ((mercury__bt_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bt_array__RaList_3 = mercury__bt_array__HeadVar__2_2;
        else
          {
            MR_Box mercury__bt_array__X_5 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__bt_array__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bt_array__RaList1_9;
            MR_Integer mercury__bt_array__Size1_14;
            MR_Word mercury__bt_array__T1_15;
            MR_Integer mercury__bt_array__Size2_16;
            MR_Word mercury__bt_array__T2_17;
            MR_Word mercury__bt_array__Rest_18;
            MR_Word mercury__bt_array__V_20_20;

            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__Size1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
                mercury__bt_array__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
                mercury__bt_array__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
                mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__bt_array__succeeded)
                  {
                    mercury__bt_array__Size2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 0)));
                    mercury__bt_array__T2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 1)));
                    mercury__bt_array__Rest_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 2)));
                    mercury__bt_array__succeeded = (mercury__bt_array__Size1_14 == mercury__bt_array__Size2_16);
                  }
              }
            if (mercury__bt_array__succeeded)
              {
                MR_Integer mercury__bt_array__NewSize_19;
                MR_Integer mercury__bt_array__V_21_21 = ((MR_Integer) 1 + mercury__bt_array__Size1_14);
                MR_Word mercury__bt_array__V_23_23;

                mercury__bt_array__NewSize_19 = (mercury__bt_array__V_21_21 + mercury__bt_array__Size2_16);
                {
                  mercury__bt_array__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 0) = mercury__bt_array__X_5;
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 1) = ((MR_Box) (mercury__bt_array__T1_15));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 2) = ((MR_Box) (mercury__bt_array__T2_17));
                }
                {
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) (mercury__bt_array__NewSize_19));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_23_23));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__Rest_18));
                }
              }
            else
              {
                MR_Word mercury__bt_array__V_25_25;

                {
                  mercury__bt_array__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__bt_array__V_25_25, 0) = mercury__bt_array__X_5;
                }
                {
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_25_25));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__HeadVar__2_2));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__Xs_6;
              MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__RaList1_9;

              mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
              mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__bt_array__actual_position_4_p_0(
  MR_Integer mercury__bt_array__Low_5,
  MR_Integer mercury__bt_array__High_6,
  MR_Integer mercury__bt_array__Index_7,
  MR_Integer * mercury__bt_array__Pos_8)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__V_9_9 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

    *mercury__bt_array__Pos_8 = (mercury__bt_array__V_9_9 - mercury__bt_array__Index_7);
  }
}

void MR_CALL 
mercury__bt_array__add_elements_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
  MR_Integer mercury__bt_array__ElemsToAdd_5,
  MR_Box mercury__bt_array__Item_6,
  MR_Word mercury__bt_array__RaList0_7,
  MR_Word * mercury__bt_array__RaList_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__ElemsToAdd_5 <= (MR_Integer) 0);

        if (mercury__bt_array__succeeded)
          *mercury__bt_array__RaList_8 = mercury__bt_array__RaList0_7;
        else
          {
            MR_Word mercury__bt_array__RaList1_9;
            MR_Integer mercury__bt_array__ElemsToAdd1_10;
            MR_Integer mercury__bt_array__Size1_17;
            MR_Word mercury__bt_array__T1_18;
            MR_Integer mercury__bt_array__Size2_19;
            MR_Word mercury__bt_array__T2_20;
            MR_Word mercury__bt_array__Rest_21;
            MR_Word mercury__bt_array__V_23_23;

            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_7)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__Size1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 0)));
                mercury__bt_array__T1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 1)));
                mercury__bt_array__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 2)));
                mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_23_23)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__bt_array__succeeded)
                  {
                    mercury__bt_array__Size2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 0)));
                    mercury__bt_array__T2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 1)));
                    mercury__bt_array__Rest_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 2)));
                    mercury__bt_array__succeeded = (mercury__bt_array__Size1_17 == mercury__bt_array__Size2_19);
                  }
              }
            if (mercury__bt_array__succeeded)
              {
                MR_Integer mercury__bt_array__NewSize_22;
                MR_Integer mercury__bt_array__V_24_24 = ((MR_Integer) 1 + mercury__bt_array__Size1_17);
                MR_Word mercury__bt_array__V_26_26;

                mercury__bt_array__NewSize_22 = (mercury__bt_array__V_24_24 + mercury__bt_array__Size2_19);
                {
                  mercury__bt_array__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 0) = mercury__bt_array__Item_6;
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 1) = ((MR_Box) (mercury__bt_array__T1_18));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 2) = ((MR_Box) (mercury__bt_array__T2_20));
                }
                {
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) (mercury__bt_array__NewSize_22));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_26_26));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__Rest_21));
                }
              }
            else
              {
                MR_Word mercury__bt_array__V_28_28;

                {
                  mercury__bt_array__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__bt_array__V_28_28, 0) = mercury__bt_array__Item_6;
                }
                {
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_28_28));
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__RaList0_7));
                }
              }
            mercury__bt_array__ElemsToAdd1_10 = (mercury__bt_array__ElemsToAdd_5 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bt_array__ElemsToAdd__tmp_copy_5 = mercury__bt_array__ElemsToAdd1_10;
              MR_Word mercury__bt_array__RaList0__tmp_copy_7 = mercury__bt_array__RaList1_9;

              mercury__bt_array__RaList0_7 = mercury__bt_array__RaList0__tmp_copy_7;
              mercury__bt_array__ElemsToAdd_5 = mercury__bt_array__ElemsToAdd__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bt_array__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
  MR_Integer mercury__bt_array__Index_5,
  MR_Word mercury__bt_array__Array_6,
  MR_Box mercury__bt_array__Value_7)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__HeadVar__4_4;

    {
      mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__Array_6, mercury__bt_array__Index_5, mercury__bt_array__Value_7, &mercury__bt_array__HeadVar__4_4);
    }
    return mercury__bt_array__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__bt_array__elem_2_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_6,
  MR_Integer mercury__bt_array__Index_4,
  MR_Word mercury__bt_array__Array_5)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Box mercury__bt_array__HeadVar__3_3;

    {
      mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_6, mercury__bt_array__Array_5, mercury__bt_array__Index_4, &mercury__bt_array__HeadVar__3_3);
    }
    return mercury__bt_array__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__bt_array__bsearch_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
  MR_Word mercury__bt_array__A_5,
  MR_Box mercury__bt_array__SearchX_6,
  MR_Word mercury__bt_array__Compare_7,
  MR_Integer * mercury__bt_array__I_8)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__Lo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__Hi_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 1)));
    MR_Word mercury__bt_array__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 2)));

    mercury__bt_array__succeeded = (mercury__bt_array__Lo_9 <= mercury__bt_array__Hi_10);
    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__succeeded = mercury__bt_array__bsearch_loop_6_p_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__A_5, mercury__bt_array__Lo_9, mercury__bt_array__Hi_10, mercury__bt_array__SearchX_6, mercury__bt_array__Compare_7, mercury__bt_array__I_8);
      }
    return mercury__bt_array__succeeded;
  }
}

MR_Word MR_CALL 
mercury__bt_array__fetch_items_3_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
  MR_Word mercury__bt_array__BTA_5,
  MR_Integer mercury__bt_array__N1_6,
  MR_Integer mercury__bt_array__N2_7)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__Xs_8;

    {
      mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BTA_5, mercury__bt_array__N1_6, mercury__bt_array__N2_7, &mercury__bt_array__Xs_8);
    }
    return mercury__bt_array__Xs_8;
  }
}

void MR_CALL 
mercury__bt_array__fetch_items_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_18,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer mercury__bt_array__Low_8,
  MR_Integer mercury__bt_array__High_9,
  MR_Word * mercury__bt_array__List_10)
{
  {
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__Low_8 > mercury__bt_array__High_9);
    MR_Integer mercury__bt_array__ALow_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__AHigh_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bt_array__RaList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

    if (mercury__bt_array__succeeded)
      *mercury__bt_array__List_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__bt_array__List0_14;
        MR_Integer mercury__bt_array__Drop_11;
        MR_Word mercury__bt_array__RaList_12;
        MR_Integer mercury__bt_array__Take_13;
        MR_Integer mercury__bt_array__V_15_15;
        MR_Integer mercury__bt_array__V_16_16;
        MR_Word mercury__bt_array__V_17_17;
        MR_Integer mercury__bt_array__V_23_23 = (mercury__bt_array__AHigh_6 - mercury__bt_array__ALow_5);

        mercury__bt_array__Drop_11 = (mercury__bt_array__V_23_23 - mercury__bt_array__High_9);
        {
          mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__Drop_11, mercury__bt_array__RaList0_7, &mercury__bt_array__RaList_12);
        }
        if (mercury__bt_array__succeeded)
          {
            mercury__bt_array__V_15_15 = (mercury__bt_array__High_9 - mercury__bt_array__Low_8);
            mercury__bt_array__V_16_16 = (MR_Integer) 1;
            mercury__bt_array__Take_13 = (mercury__bt_array__V_15_15 + mercury__bt_array__V_16_16);
            mercury__bt_array__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(mercury__bt_array__Take_13, mercury__bt_array__RaList_12, mercury__bt_array__V_17_17, &mercury__bt_array__List0_14);
            }
            mercury__bt_array__succeeded = MR_TRUE;
          }
        if (mercury__bt_array__succeeded)
          *mercury__bt_array__List_10 = mercury__bt_array__List0_14;
        else
          *mercury__bt_array__List_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

MR_Word MR_CALL 
mercury__bt_array__to_list_1_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_5,
  MR_Word mercury__bt_array__BTA_3)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__Xs_4;
    MR_Word mercury__bt_array__RaList_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));
    MR_Word mercury__bt_array__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));

    {
      mercury__bt_array__reverse_from_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_5, mercury__bt_array__RaList_9, mercury__bt_array__V_10_10, &mercury__bt_array__Xs_4);
    }
    return mercury__bt_array__Xs_4;
  }
}

void MR_CALL 
mercury__bt_array__to_list_2_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Word * mercury__bt_array__List_6)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__RaList_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mercury__bt_array__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__bt_array__reverse_from_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__RaList_5, mercury__bt_array__V_7_7, mercury__bt_array__List_6);
    }
  }
}

MR_Word MR_CALL 
mercury__bt_array__from_list_2_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
  MR_Integer mercury__bt_array__N_4,
  MR_Word mercury__bt_array__Xs_5)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__BTA_6;

    {
      mercury__bt_array__from_list_3_p_0(mercury__bt_array__TypeInfo_for_T_7, mercury__bt_array__N_4, mercury__bt_array__Xs_5, &mercury__bt_array__BTA_6);
    }
    return mercury__bt_array__BTA_6;
  }
}

void MR_CALL 
mercury__bt_array__from_list_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_12,
  MR_Integer mercury__bt_array__Low_4,
  MR_Word mercury__bt_array__List_5,
  MR_Word * mercury__bt_array__HeadVar__3_3)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__High_6;
    MR_Word mercury__bt_array__RaList_7;
    MR_Integer mercury__bt_array__Len_8;
    MR_Word mercury__bt_array__RaList0_9;
    MR_Integer mercury__bt_array__V_10_10;

    {
      mercury__list__length_acc_3_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__List_5, (MR_Integer) 0, &mercury__bt_array__Len_8);
    }
    mercury__bt_array__V_10_10 = (mercury__bt_array__Low_4 + mercury__bt_array__Len_8);
    mercury__bt_array__High_6 = (mercury__bt_array__V_10_10 - (MR_Integer) 1);
    mercury__bt_array__RaList0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__bt_array__reverse_into_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__List_5, mercury__bt_array__RaList0_9, &mercury__bt_array__RaList_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__bt_array__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_7));
    }
  }
}

MR_Word MR_CALL 
mercury__bt_array__shrink_3_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
  MR_Word mercury__bt_array__BT1A_5,
  MR_Integer mercury__bt_array__N1_6,
  MR_Integer mercury__bt_array__N2_7)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__BTA2_8;

    {
      mercury__bt_array__shrink_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BT1A_5, mercury__bt_array__N1_6, mercury__bt_array__N2_7, &mercury__bt_array__BTA2_8);
    }
    return mercury__bt_array__BTA2_8;
  }
}

void MR_CALL 
mercury__bt_array__shrink_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_30,
  MR_Word mercury__bt_array__Array0_5,
  MR_Integer mercury__bt_array__L_6,
  MR_Integer mercury__bt_array__H_7,
  MR_Word * mercury__bt_array__Array_8)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__L0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__H0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 1)));
    MR_Word mercury__bt_array__RaList0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 2)));

    mercury__bt_array__succeeded = (mercury__bt_array__L_6 < mercury__bt_array__L0_9);
    if (!(mercury__bt_array__succeeded))
      mercury__bt_array__succeeded = (mercury__bt_array__H_7 > mercury__bt_array__H0_10);
    if (mercury__bt_array__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.shrink\'/4", (MR_String) "new bounds are larger than old ones");
          return;
        }
      }
    else
      {
        mercury__bt_array__succeeded = (mercury__bt_array__L_6 == mercury__bt_array__L0_9);
        if (mercury__bt_array__succeeded)
          {
            MR_Integer mercury__bt_array__SizeDiff_12 = (mercury__bt_array__H0_10 - mercury__bt_array__H_7);
            MR_Word mercury__bt_array__RaList_14;
            MR_Word mercury__bt_array__RaList1_13;

            {
              mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__SizeDiff_12, mercury__bt_array__RaList0_11, &mercury__bt_array__RaList1_13);
            }
            if (mercury__bt_array__succeeded)
              mercury__bt_array__RaList_14 = mercury__bt_array__RaList1_13;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.shrink\'/4", (MR_String) "can\'t resize to a less-than-empty array");
                  return;
                }
              }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__bt_array__Array_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_6));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_7));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_14));
            }
          }
        else
          {
            MR_Box mercury__bt_array__Item_16;
            MR_Integer mercury__bt_array__L1_17;
            MR_Integer mercury__bt_array__H1_18;
            MR_Word mercury__bt_array__Items_19;
            MR_Word mercury__bt_array__Array1_20;
            MR_Word mercury__bt_array__ListOut_53;
            MR_Word mercury__bt_array__ListIn_54;
            MR_Integer mercury__bt_array__ElemsToAdd_55;
            MR_Integer mercury__bt_array__V_56_56;
            MR_Box mercury__bt_array__Item0_15;
            MR_Word mercury__bt_array__V_42_42;
            MR_Word mercury__bt_array__V_41_41;
            MR_Integer mercury__bt_array__V_43_43;

            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_11)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__bt_array__succeeded)
              {
                mercury__bt_array__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 0)));
                mercury__bt_array__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 1)));
                mercury__bt_array__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 2)));
                if (((MR_tag((MR_Word) mercury__bt_array__V_42_42)) == (MR_mktag((MR_Integer) 0))))
                  mercury__bt_array__Item0_15 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_42_42, (MR_Integer) 0));
                else
                  {
                    MR_Word mercury__bt_array__V_37_37;
                    MR_Word mercury__bt_array__V_38_38;

                    mercury__bt_array__Item0_15 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_42_42, (MR_Integer) 0));
                    mercury__bt_array__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_42_42, (MR_Integer) 1)));
                    mercury__bt_array__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_42_42, (MR_Integer) 2)));
                  }
                mercury__bt_array__succeeded = MR_TRUE;
              }
            if (mercury__bt_array__succeeded)
              mercury__bt_array__Item_16 = mercury__bt_array__Item0_15;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.shrink\'/4", (MR_String) "can\'t shrink an empty array");
                  return;
                }
              }
            mercury__bt_array__succeeded = (mercury__bt_array__L_6 > mercury__bt_array__L0_9);
            if (mercury__bt_array__succeeded)
              mercury__bt_array__L1_17 = mercury__bt_array__L_6;
            else
              mercury__bt_array__L1_17 = mercury__bt_array__L0_9;
            mercury__bt_array__succeeded = (mercury__bt_array__H_7 < mercury__bt_array__H0_10);
            if (mercury__bt_array__succeeded)
              mercury__bt_array__H1_18 = mercury__bt_array__H_7;
            else
              mercury__bt_array__H1_18 = mercury__bt_array__H0_10;
            {
              mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_30, mercury__bt_array__Array0_5, mercury__bt_array__L1_17, mercury__bt_array__H1_18, &mercury__bt_array__Items_19);
            }
            mercury__bt_array__ListIn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__bt_array__V_56_56 = (mercury__bt_array__H_7 - mercury__bt_array__L_6);
            mercury__bt_array__ElemsToAdd_55 = (mercury__bt_array__V_56_56 + (MR_Integer) 1);
            {
              mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_30, mercury__bt_array__ElemsToAdd_55, mercury__bt_array__Item_16, mercury__bt_array__ListIn_54, &mercury__bt_array__ListOut_53);
            }
            {
              mercury__bt_array__Array1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 0) = ((MR_Box) (mercury__bt_array__L_6));
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 1) = ((MR_Box) (mercury__bt_array__H_7));
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 2) = ((MR_Box) (mercury__bt_array__ListOut_53));
            }
            {
              mercury__bt_array__insert_items_4_p_0(mercury__bt_array__TypeInfo_for_T_30, mercury__bt_array__Array1_20, mercury__bt_array__L1_17, mercury__bt_array__Items_19, mercury__bt_array__Array_8);
            }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__bt_array__resize_4_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
  MR_Word mercury__bt_array__BT1A_6,
  MR_Integer mercury__bt_array__N1_7,
  MR_Integer mercury__bt_array__N2_8,
  MR_Box mercury__bt_array__T_9)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__BTA2_10;

    {
      mercury__bt_array__resize_5_p_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__BT1A_6, mercury__bt_array__N1_7, mercury__bt_array__N2_8, mercury__bt_array__T_9, &mercury__bt_array__BTA2_10);
    }
    return mercury__bt_array__BTA2_10;
  }
}

void MR_CALL 
mercury__bt_array__resize_5_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_28,
  MR_Word mercury__bt_array__Array0_6,
  MR_Integer mercury__bt_array__L_7,
  MR_Integer mercury__bt_array__H_8,
  MR_Box mercury__bt_array__Item_9,
  MR_Word * mercury__bt_array__Array_10)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__L0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__H0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 1)));
    MR_Word mercury__bt_array__RaList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 2)));

    mercury__bt_array__succeeded = (mercury__bt_array__L_7 == mercury__bt_array__L0_11);
    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__succeeded = (mercury__bt_array__H_8 < mercury__bt_array__H0_12);
        if (mercury__bt_array__succeeded)
          {
            MR_Integer mercury__bt_array__SizeDiff_14 = (mercury__bt_array__H0_12 - mercury__bt_array__H_8);
            MR_Word mercury__bt_array__RaList_16;
            MR_Word mercury__bt_array__RaList1_15;

            {
              mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__SizeDiff_14, mercury__bt_array__RaList0_13, &mercury__bt_array__RaList1_15);
            }
            if (mercury__bt_array__succeeded)
              mercury__bt_array__RaList_16 = mercury__bt_array__RaList1_15;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "bt_array", (MR_String) "predicate \140bt_array.resize\'/5", (MR_String) "can\'t resize to a less-than-empty array");
                  return;
                }
              }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__bt_array__Array_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_7));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_8));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_16));
            }
          }
        else
          {
            mercury__bt_array__succeeded = (mercury__bt_array__H_8 > mercury__bt_array__H0_12);
            if (mercury__bt_array__succeeded)
              {
                MR_Integer mercury__bt_array__SizeDiff_24 = (mercury__bt_array__H_8 - mercury__bt_array__H0_12);
                MR_Word mercury__bt_array__RaList_25;

                {
                  mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__SizeDiff_24, mercury__bt_array__Item_9, mercury__bt_array__RaList0_13, &mercury__bt_array__RaList_25);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__bt_array__Array_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_7));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_8));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_25));
                }
              }
            else
              *mercury__bt_array__Array_10 = mercury__bt_array__Array0_6;
          }
      }
    else
      {
        MR_Integer mercury__bt_array__L1_17;
        MR_Integer mercury__bt_array__H1_18;
        MR_Word mercury__bt_array__Items_19;
        MR_Word mercury__bt_array__Array1_20;
        MR_Word mercury__bt_array__ListOut_38;
        MR_Word mercury__bt_array__ListIn_39;
        MR_Integer mercury__bt_array__ElemsToAdd_40;
        MR_Integer mercury__bt_array__V_41_41;

        mercury__bt_array__succeeded = (mercury__bt_array__L_7 > mercury__bt_array__L0_11);
        if (mercury__bt_array__succeeded)
          mercury__bt_array__L1_17 = mercury__bt_array__L_7;
        else
          mercury__bt_array__L1_17 = mercury__bt_array__L0_11;
        mercury__bt_array__succeeded = (mercury__bt_array__H_8 < mercury__bt_array__H0_12);
        if (mercury__bt_array__succeeded)
          mercury__bt_array__H1_18 = mercury__bt_array__H_8;
        else
          mercury__bt_array__H1_18 = mercury__bt_array__H0_12;
        {
          mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__Array0_6, mercury__bt_array__L1_17, mercury__bt_array__H1_18, &mercury__bt_array__Items_19);
        }
        mercury__bt_array__ListIn_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__bt_array__V_41_41 = (mercury__bt_array__H_8 - mercury__bt_array__L_7);
        mercury__bt_array__ElemsToAdd_40 = (mercury__bt_array__V_41_41 + (MR_Integer) 1);
        {
          mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__ElemsToAdd_40, mercury__bt_array__Item_9, mercury__bt_array__ListIn_39, &mercury__bt_array__ListOut_38);
        }
        {
          mercury__bt_array__Array1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 0) = ((MR_Box) (mercury__bt_array__L_7));
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 1) = ((MR_Box) (mercury__bt_array__H_8));
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 2) = ((MR_Box) (mercury__bt_array__ListOut_38));
        }
        {
          mercury__bt_array__insert_items_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__Array1_20, mercury__bt_array__L1_17, mercury__bt_array__Items_19, mercury__bt_array__Array_10);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__bt_array__semidet_set_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_12,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer mercury__bt_array__Index_8,
  MR_Box mercury__bt_array__Item_9,
  MR_Word * mercury__bt_array__HeadVar__4_4)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__Low_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__High_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bt_array__RaListIn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mercury__bt_array__RaListOut_10;
    MR_Integer mercury__bt_array__Pos_11;
    MR_Integer mercury__bt_array__V_17_17 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

    mercury__bt_array__Pos_11 = (mercury__bt_array__V_17_17 - mercury__bt_array__Index_8);
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_11 >= (MR_Integer) 0);
    if (mercury__bt_array__succeeded)
      {
        {
          mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__RaListIn_7, mercury__bt_array__Pos_11, mercury__bt_array__Item_9, &mercury__bt_array__RaListOut_10);
        }
        if (mercury__bt_array__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__bt_array__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_5));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaListOut_10));
            }
            mercury__bt_array__succeeded = MR_TRUE;
          }
      }
    return mercury__bt_array__succeeded;
  }
}

MR_Word MR_CALL 
mercury__bt_array__set_3_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
  MR_Word mercury__bt_array__BT1A_5,
  MR_Integer mercury__bt_array__N_6,
  MR_Box mercury__bt_array__T_7)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__BTA2_8;

    {
      mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BT1A_5, mercury__bt_array__N_6, mercury__bt_array__T_7, &mercury__bt_array__BTA2_8);
    }
    return mercury__bt_array__BTA2_8;
  }
}

void MR_CALL 
mercury__bt_array__set_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
  MR_Word mercury__bt_array__BtArray0_5,
  MR_Integer mercury__bt_array__Index_6,
  MR_Box mercury__bt_array__Item_7,
  MR_Word * mercury__bt_array__BtArray_8)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__BtArray1_9;
    MR_Integer mercury__bt_array__Low_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__High_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 1)));
    MR_Word mercury__bt_array__RaListIn_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 2)));
    MR_Word mercury__bt_array__RaListOut_19;
    MR_Integer mercury__bt_array__Pos_20;
    MR_Integer mercury__bt_array__V_25_25 = (mercury__bt_array__High_17 - mercury__bt_array__Low_16);

    mercury__bt_array__Pos_20 = (mercury__bt_array__V_25_25 - mercury__bt_array__Index_6);
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_20 >= (MR_Integer) 0);
    if (mercury__bt_array__succeeded)
      {
        {
          mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__RaListIn_18, mercury__bt_array__Pos_20, mercury__bt_array__Item_7, &mercury__bt_array__RaListOut_19);
        }
        if (mercury__bt_array__succeeded)
          {
            {
              mercury__bt_array__BtArray1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 0) = ((MR_Box) (mercury__bt_array__Low_16));
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 1) = ((MR_Box) (mercury__bt_array__High_17));
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 2) = ((MR_Box) (mercury__bt_array__RaListOut_19));
            }
            mercury__bt_array__succeeded = MR_TRUE;
          }
      }
    if (mercury__bt_array__succeeded)
      *mercury__bt_array__BtArray_8 = mercury__bt_array__BtArray1_9;
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
mercury__bt_array__semidet_lookup_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer mercury__bt_array__Index_7,
  MR_Box * mercury__bt_array__Item_8)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bt_array__RaList_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer mercury__bt_array__Pos_9;
    MR_Integer mercury__bt_array__V_15_15 = (mercury__bt_array__High_5 - mercury__bt_array__Low_4);

    mercury__bt_array__Pos_9 = (mercury__bt_array__V_15_15 - mercury__bt_array__Index_7);
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_9 >= (MR_Integer) 0);
    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__Pos_9, mercury__bt_array__RaList_6, mercury__bt_array__Item_8);
      }
    return mercury__bt_array__succeeded;
  }
}

MR_Box MR_CALL 
mercury__bt_array__lookup_2_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
  MR_Word mercury__bt_array__BTA_4,
  MR_Integer mercury__bt_array__N_5)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Box mercury__bt_array__T_6;

    {
      mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_7, mercury__bt_array__BTA_4, mercury__bt_array__N_5, &mercury__bt_array__T_6);
    }
    return mercury__bt_array__T_6;
  }
}

void MR_CALL 
mercury__bt_array__lookup_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_14,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer mercury__bt_array__Index_7,
  MR_Box * mercury__bt_array__Item_8)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bt_array__RaList_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer mercury__bt_array__Pos_9;
    MR_Integer mercury__bt_array__V_19_19 = (mercury__bt_array__High_5 - mercury__bt_array__Low_4);
    MR_Box mercury__bt_array__Item0_10;

    mercury__bt_array__Pos_9 = (mercury__bt_array__V_19_19 - mercury__bt_array__Index_7);
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_9 >= (MR_Integer) 0);
    if (mercury__bt_array__succeeded)
      {
        mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__Pos_9, mercury__bt_array__RaList_6, &mercury__bt_array__Item0_10);
      }
    if (mercury__bt_array__succeeded)
      *mercury__bt_array__Item_8 = mercury__bt_array__Item0_10;
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
mercury__bt_array__in_bounds_2_p_0(
  MR_Word mercury__bt_array__TypeInfo_for__T_7,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer mercury__bt_array__Index_6)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

    mercury__bt_array__succeeded = (mercury__bt_array__Low_3 <= mercury__bt_array__Index_6);
    if (mercury__bt_array__succeeded)
      mercury__bt_array__succeeded = (mercury__bt_array__Index_6 <= mercury__bt_array__High_4);
    return mercury__bt_array__succeeded;
  }
}

void MR_CALL 
mercury__bt_array__bounds_3_p_0(
  MR_Word mercury__bt_array__TypeInfo_for__T_7,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer * mercury__bt_array__Low_4,
  MR_Integer * mercury__bt_array__High_5)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__V_6_6;

    *mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    *mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
  }
}

MR_Integer MR_CALL 
mercury__bt_array__size_1_f_0(
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
  MR_Word mercury__bt_array__BTA_3)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__N_4;
    MR_Integer mercury__bt_array__Low_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__High_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
    MR_Integer mercury__bt_array__V_10_10 = (mercury__bt_array__High_8 - mercury__bt_array__Low_7);
    MR_Word mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

    mercury__bt_array__N_4 = (mercury__bt_array__V_10_10 + (MR_Integer) 1);
    return mercury__bt_array__N_4;
  }
}

void MR_CALL 
mercury__bt_array__size_2_p_0(
  MR_Word mercury__bt_array__TypeInfo_for__T_9,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer * mercury__bt_array__Size_6)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__bt_array__V_7_7 = (mercury__bt_array__High_4 - mercury__bt_array__Low_3);
    MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

    *mercury__bt_array__Size_6 = (mercury__bt_array__V_7_7 + (MR_Integer) 1);
  }
}

MR_Integer MR_CALL 
mercury__bt_array__max_1_f_0(
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
  MR_Word mercury__bt_array__BTA_3)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
    MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

    return mercury__bt_array__N_4;
  }
}

void MR_CALL 
mercury__bt_array__max_2_p_0(
  MR_Word mercury__bt_array__TypeInfo_for__T_6,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer * mercury__bt_array__High_4)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bt_array__V_5_5;

    *mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
  }
}

MR_Integer MR_CALL 
mercury__bt_array__min_1_f_0(
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
  MR_Word mercury__bt_array__BTA_3)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
    MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

    return mercury__bt_array__N_4;
  }
}

void MR_CALL 
mercury__bt_array__min_2_p_0(
  MR_Word mercury__bt_array__TypeInfo_for__T_6,
  MR_Word mercury__bt_array__HeadVar__1_1,
  MR_Integer * mercury__bt_array__Low_3)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__V_4_4;
    MR_Word mercury__bt_array__V_5_5;

    *mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
    mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
    mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
  }
}

MR_Word MR_CALL 
mercury__bt_array__init_3_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
  MR_Integer mercury__bt_array__N1_5,
  MR_Integer mercury__bt_array__N2_6,
  MR_Box mercury__bt_array__T_7)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__BTA_8;
    MR_Word mercury__bt_array__ListOut_13;
    MR_Word mercury__bt_array__ListIn_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__bt_array__ElemsToAdd_15;
    MR_Integer mercury__bt_array__V_16_16 = (mercury__bt_array__N2_6 - mercury__bt_array__N1_5);

    mercury__bt_array__ElemsToAdd_15 = (mercury__bt_array__V_16_16 + (MR_Integer) 1);
    {
      mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__ElemsToAdd_15, mercury__bt_array__T_7, mercury__bt_array__ListIn_14, &mercury__bt_array__ListOut_13);
    }
    {
      mercury__bt_array__BTA_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 0) = ((MR_Box) (mercury__bt_array__N1_5));
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 1) = ((MR_Box) (mercury__bt_array__N2_6));
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 2) = ((MR_Box) (mercury__bt_array__ListOut_13));
    }
    return mercury__bt_array__BTA_8;
  }
}

void MR_CALL 
mercury__bt_array__init_4_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
  MR_Integer mercury__bt_array__Low_5,
  MR_Integer mercury__bt_array__High_6,
  MR_Box mercury__bt_array__Item_7,
  MR_Word * mercury__bt_array__HeadVar__4_4)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__ListOut_8;
    MR_Word mercury__bt_array__ListIn_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__bt_array__ElemsToAdd_10;
    MR_Integer mercury__bt_array__V_11_11 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

    mercury__bt_array__ElemsToAdd_10 = (mercury__bt_array__V_11_11 + (MR_Integer) 1);
    {
      mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__ElemsToAdd_10, mercury__bt_array__Item_7, mercury__bt_array__ListIn_9, &mercury__bt_array__ListOut_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__bt_array__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__ListOut_8));
    }
  }
}

MR_Word MR_CALL 
mercury__bt_array__make_empty_array_1_f_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_5,
  MR_Integer mercury__bt_array__N_3)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Word mercury__bt_array__BTA_4;
    MR_Integer mercury__bt_array__High_7 = (mercury__bt_array__N_3 - (MR_Integer) 1);
    MR_Word mercury__bt_array__ListOut_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__bt_array__BTA_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 0) = ((MR_Box) (mercury__bt_array__N_3));
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 1) = ((MR_Box) (mercury__bt_array__High_7));
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 2) = ((MR_Box) (mercury__bt_array__ListOut_8));
    }
    return mercury__bt_array__BTA_4;
  }
}

void MR_CALL 
mercury__bt_array__make_empty_array_2_p_0(
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
  MR_Integer mercury__bt_array__Low_3,
  MR_Word * mercury__bt_array__HeadVar__2_2)
{
  {
    MR_bool mercury__bt_array__succeeded;
    MR_Integer mercury__bt_array__High_4 = (mercury__bt_array__Low_3 - (MR_Integer) 1);
    MR_Word mercury__bt_array__ListOut_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__bt_array__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__ListOut_5));
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bt_array. */
